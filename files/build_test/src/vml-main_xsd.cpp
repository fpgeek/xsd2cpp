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
ST_Ext* ST_Ext::default_instance_ = NULL;

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
ST_FillType* ST_FillType::default_instance_ = NULL;

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
ST_FillMethod* ST_FillMethod::default_instance_ = NULL;

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
ST_ShadowType* ST_ShadowType::default_instance_ = NULL;

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
ST_StrokeLineStyle* ST_StrokeLineStyle::default_instance_ = NULL;

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
ST_StrokeJoinStyle* ST_StrokeJoinStyle::default_instance_ = NULL;

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
ST_StrokeEndCap* ST_StrokeEndCap::default_instance_ = NULL;

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
ST_StrokeArrowLength* ST_StrokeArrowLength::default_instance_ = NULL;

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
ST_StrokeArrowWidth* ST_StrokeArrowWidth::default_instance_ = NULL;

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
ST_StrokeArrowType* ST_StrokeArrowType::default_instance_ = NULL;

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
ST_ImageAspect* ST_ImageAspect::default_instance_ = NULL;

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
ST_EditAs* ST_EditAs::default_instance_ = NULL;

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
                (*iter)->get_path().toXmlElem("path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("o:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("o:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("o:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("o:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("o:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("o:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("w10:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("w10:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("w10:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("w10:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("w10:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("w10:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("x:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("pvml:textdata", "", _outStream);
            }
            else if ((*iter)->has_o_ink())
            {
                (*iter)->get_o_ink().toXmlElem("o:ink", "", _outStream);
            }
            else if ((*iter)->has_pvml_iscomment())
            {
                (*iter)->get_pvml_iscomment().toXmlElem("pvml:iscomment", "", _outStream);
            }
            else if ((*iter)->has_o_equationxml())
            {
                (*iter)->get_o_equationxml().toXmlElem("o:equationxml", "", _outStream);
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


    // CT_Shape::ChildGroup_1
    bool CT_Shape::ChildGroup_1::has_path() const
    {    
    return m_has_path;
    }

    CT_Path* CT_Shape::ChildGroup_1::mutable_path()
    {    
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_path = true;
    if (!m_path)
    {
        m_path = new CT_Path();
    }
    return m_path;
    }

    const CT_Path& CT_Shape::ChildGroup_1::get_path() const
    {    
    if (m_path)
    {
        return *m_path;
    }
    return CT_Path::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_formulas() const
    {    
    return m_has_formulas;
    }

    CT_Formulas* CT_Shape::ChildGroup_1::mutable_formulas()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_formulas = true;
    if (!m_formulas)
    {
        m_formulas = new CT_Formulas();
    }
    return m_formulas;
    }

    const CT_Formulas& CT_Shape::ChildGroup_1::get_formulas() const
    {    
    if (m_formulas)
    {
        return *m_formulas;
    }
    return CT_Formulas::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_handles() const
    {    
    return m_has_handles;
    }

    CT_Handles* CT_Shape::ChildGroup_1::mutable_handles()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_handles = true;
    if (!m_handles)
    {
        m_handles = new CT_Handles();
    }
    return m_handles;
    }

    const CT_Handles& CT_Shape::ChildGroup_1::get_handles() const
    {    
    if (m_handles)
    {
        return *m_handles;
    }
    return CT_Handles::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Shape::ChildGroup_1::mutable_fill()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Shape::ChildGroup_1::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_stroke() const
    {    
    return m_has_stroke;
    }

    CT_Stroke* CT_Shape::ChildGroup_1::mutable_stroke()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_stroke = true;
    if (!m_stroke)
    {
        m_stroke = new CT_Stroke();
    }
    return m_stroke;
    }

    const CT_Stroke& CT_Shape::ChildGroup_1::get_stroke() const
    {    
    if (m_stroke)
    {
        return *m_stroke;
    }
    return CT_Stroke::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_shadow() const
    {    
    return m_has_shadow;
    }

    CT_Shadow* CT_Shape::ChildGroup_1::mutable_shadow()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_shadow = true;
    if (!m_shadow)
    {
        m_shadow = new CT_Shadow();
    }
    return m_shadow;
    }

    const CT_Shadow& CT_Shape::ChildGroup_1::get_shadow() const
    {    
    if (m_shadow)
    {
        return *m_shadow;
    }
    return CT_Shadow::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_textbox() const
    {    
    return m_has_textbox;
    }

    CT_Textbox* CT_Shape::ChildGroup_1::mutable_textbox()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_textbox = true;
    if (!m_textbox)
    {
        m_textbox = new CT_Textbox();
    }
    return m_textbox;
    }

    const CT_Textbox& CT_Shape::ChildGroup_1::get_textbox() const
    {    
    if (m_textbox)
    {
        return *m_textbox;
    }
    return CT_Textbox::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_textpath() const
    {    
    return m_has_textpath;
    }

    CT_TextPath* CT_Shape::ChildGroup_1::mutable_textpath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_textpath = true;
    if (!m_textpath)
    {
        m_textpath = new CT_TextPath();
    }
    return m_textpath;
    }

    const CT_TextPath& CT_Shape::ChildGroup_1::get_textpath() const
    {    
    if (m_textpath)
    {
        return *m_textpath;
    }
    return CT_TextPath::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_imagedata() const
    {    
    return m_has_imagedata;
    }

    CT_ImageData* CT_Shape::ChildGroup_1::mutable_imagedata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_imagedata = true;
    if (!m_imagedata)
    {
        m_imagedata = new CT_ImageData();
    }
    return m_imagedata;
    }

    const CT_ImageData& CT_Shape::ChildGroup_1::get_imagedata() const
    {    
    if (m_imagedata)
    {
        return *m_imagedata;
    }
    return CT_ImageData::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_o_skew() const
    {    
    return m_has_o_skew;
    }

    ns_o::CT_Skew* CT_Shape::ChildGroup_1::mutable_o_skew()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_o_skew = true;
    if (!m_o_skew)
    {
        m_o_skew = new ns_o::CT_Skew();
    }
    return m_o_skew;
    }

    const ns_o::CT_Skew& CT_Shape::ChildGroup_1::get_o_skew() const
    {    
    if (m_o_skew)
    {
        return *m_o_skew;
    }
    return ns_o::CT_Skew::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_o_extrusion() const
    {    
    return m_has_o_extrusion;
    }

    ns_o::CT_Extrusion* CT_Shape::ChildGroup_1::mutable_o_extrusion()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_o_extrusion = true;
    if (!m_o_extrusion)
    {
        m_o_extrusion = new ns_o::CT_Extrusion();
    }
    return m_o_extrusion;
    }

    const ns_o::CT_Extrusion& CT_Shape::ChildGroup_1::get_o_extrusion() const
    {    
    if (m_o_extrusion)
    {
        return *m_o_extrusion;
    }
    return ns_o::CT_Extrusion::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_o_callout() const
    {    
    return m_has_o_callout;
    }

    ns_o::CT_Callout* CT_Shape::ChildGroup_1::mutable_o_callout()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_o_callout = true;
    if (!m_o_callout)
    {
        m_o_callout = new ns_o::CT_Callout();
    }
    return m_o_callout;
    }

    const ns_o::CT_Callout& CT_Shape::ChildGroup_1::get_o_callout() const
    {    
    if (m_o_callout)
    {
        return *m_o_callout;
    }
    return ns_o::CT_Callout::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_o_lock() const
    {    
    return m_has_o_lock;
    }

    ns_o::CT_Lock* CT_Shape::ChildGroup_1::mutable_o_lock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_o_lock = true;
    if (!m_o_lock)
    {
        m_o_lock = new ns_o::CT_Lock();
    }
    return m_o_lock;
    }

    const ns_o::CT_Lock& CT_Shape::ChildGroup_1::get_o_lock() const
    {    
    if (m_o_lock)
    {
        return *m_o_lock;
    }
    return ns_o::CT_Lock::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_o_clippath() const
    {    
    return m_has_o_clippath;
    }

    ns_o::CT_ClipPath* CT_Shape::ChildGroup_1::mutable_o_clippath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_o_clippath = true;
    if (!m_o_clippath)
    {
        m_o_clippath = new ns_o::CT_ClipPath();
    }
    return m_o_clippath;
    }

    const ns_o::CT_ClipPath& CT_Shape::ChildGroup_1::get_o_clippath() const
    {    
    if (m_o_clippath)
    {
        return *m_o_clippath;
    }
    return ns_o::CT_ClipPath::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_o_signatureline() const
    {    
    return m_has_o_signatureline;
    }

    ns_o::CT_SignatureLine* CT_Shape::ChildGroup_1::mutable_o_signatureline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_o_signatureline = true;
    if (!m_o_signatureline)
    {
        m_o_signatureline = new ns_o::CT_SignatureLine();
    }
    return m_o_signatureline;
    }

    const ns_o::CT_SignatureLine& CT_Shape::ChildGroup_1::get_o_signatureline() const
    {    
    if (m_o_signatureline)
    {
        return *m_o_signatureline;
    }
    return ns_o::CT_SignatureLine::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_w10_wrap() const
    {    
    return m_has_w10_wrap;
    }

    ns_w10::CT_Wrap* CT_Shape::ChildGroup_1::mutable_w10_wrap()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_w10_wrap = true;
    if (!m_w10_wrap)
    {
        m_w10_wrap = new ns_w10::CT_Wrap();
    }
    return m_w10_wrap;
    }

    const ns_w10::CT_Wrap& CT_Shape::ChildGroup_1::get_w10_wrap() const
    {    
    if (m_w10_wrap)
    {
        return *m_w10_wrap;
    }
    return ns_w10::CT_Wrap::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_w10_anchorlock() const
    {    
    return m_has_w10_anchorlock;
    }

    ns_w10::CT_AnchorLock* CT_Shape::ChildGroup_1::mutable_w10_anchorlock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_w10_anchorlock = true;
    if (!m_w10_anchorlock)
    {
        m_w10_anchorlock = new ns_w10::CT_AnchorLock();
    }
    return m_w10_anchorlock;
    }

    const ns_w10::CT_AnchorLock& CT_Shape::ChildGroup_1::get_w10_anchorlock() const
    {    
    if (m_w10_anchorlock)
    {
        return *m_w10_anchorlock;
    }
    return ns_w10::CT_AnchorLock::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_w10_bordertop() const
    {    
    return m_has_w10_bordertop;
    }

    ns_w10::CT_Border* CT_Shape::ChildGroup_1::mutable_w10_bordertop()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_w10_bordertop = true;
    if (!m_w10_bordertop)
    {
        m_w10_bordertop = new ns_w10::CT_Border();
    }
    return m_w10_bordertop;
    }

    const ns_w10::CT_Border& CT_Shape::ChildGroup_1::get_w10_bordertop() const
    {    
    if (m_w10_bordertop)
    {
        return *m_w10_bordertop;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_w10_borderbottom() const
    {    
    return m_has_w10_borderbottom;
    }

    ns_w10::CT_Border* CT_Shape::ChildGroup_1::mutable_w10_borderbottom()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_w10_borderbottom = true;
    if (!m_w10_borderbottom)
    {
        m_w10_borderbottom = new ns_w10::CT_Border();
    }
    return m_w10_borderbottom;
    }

    const ns_w10::CT_Border& CT_Shape::ChildGroup_1::get_w10_borderbottom() const
    {    
    if (m_w10_borderbottom)
    {
        return *m_w10_borderbottom;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_w10_borderleft() const
    {    
    return m_has_w10_borderleft;
    }

    ns_w10::CT_Border* CT_Shape::ChildGroup_1::mutable_w10_borderleft()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_w10_borderleft = true;
    if (!m_w10_borderleft)
    {
        m_w10_borderleft = new ns_w10::CT_Border();
    }
    return m_w10_borderleft;
    }

    const ns_w10::CT_Border& CT_Shape::ChildGroup_1::get_w10_borderleft() const
    {    
    if (m_w10_borderleft)
    {
        return *m_w10_borderleft;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_w10_borderright() const
    {    
    return m_has_w10_borderright;
    }

    ns_w10::CT_Border* CT_Shape::ChildGroup_1::mutable_w10_borderright()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_w10_borderright = true;
    if (!m_w10_borderright)
    {
        m_w10_borderright = new ns_w10::CT_Border();
    }
    return m_w10_borderright;
    }

    const ns_w10::CT_Border& CT_Shape::ChildGroup_1::get_w10_borderright() const
    {    
    if (m_w10_borderright)
    {
        return *m_w10_borderright;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_x_ClientData() const
    {    
    return m_has_x_ClientData;
    }

    ns_x::CT_ClientData* CT_Shape::ChildGroup_1::mutable_x_ClientData()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_x_ClientData = true;
    if (!m_x_ClientData)
    {
        m_x_ClientData = new ns_x::CT_ClientData();
    }
    return m_x_ClientData;
    }

    const ns_x::CT_ClientData& CT_Shape::ChildGroup_1::get_x_ClientData() const
    {    
    if (m_x_ClientData)
    {
        return *m_x_ClientData;
    }
    return ns_x::CT_ClientData::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_pvml_textdata() const
    {    
    return m_has_pvml_textdata;
    }

    ns_pvml::CT_Rel* CT_Shape::ChildGroup_1::mutable_pvml_textdata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_pvml_textdata = true;
    if (!m_pvml_textdata)
    {
        m_pvml_textdata = new ns_pvml::CT_Rel();
    }
    return m_pvml_textdata;
    }

    const ns_pvml::CT_Rel& CT_Shape::ChildGroup_1::get_pvml_textdata() const
    {    
    if (m_pvml_textdata)
    {
        return *m_pvml_textdata;
    }
    return ns_pvml::CT_Rel::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_o_ink() const
    {    
    return m_has_o_ink;
    }

    ns_o::CT_Ink* CT_Shape::ChildGroup_1::mutable_o_ink()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_o_ink = true;
    if (!m_o_ink)
    {
        m_o_ink = new ns_o::CT_Ink();
    }
    return m_o_ink;
    }

    const ns_o::CT_Ink& CT_Shape::ChildGroup_1::get_o_ink() const
    {    
    if (m_o_ink)
    {
        return *m_o_ink;
    }
    return ns_o::CT_Ink::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_pvml_iscomment() const
    {    
    return m_has_pvml_iscomment;
    }

    ns_pvml::CT_Empty* CT_Shape::ChildGroup_1::mutable_pvml_iscomment()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_o_equationxml = false;
    
    if (m_o_equationxml)
    {
        delete m_o_equationxml;
        m_o_equationxml = NULL;
    }
    ;
    
    m_has_pvml_iscomment = true;
    if (!m_pvml_iscomment)
    {
        m_pvml_iscomment = new ns_pvml::CT_Empty();
    }
    return m_pvml_iscomment;
    }

    const ns_pvml::CT_Empty& CT_Shape::ChildGroup_1::get_pvml_iscomment() const
    {    
    if (m_pvml_iscomment)
    {
        return *m_pvml_iscomment;
    }
    return ns_pvml::CT_Empty::default_instance();
    }

    bool CT_Shape::ChildGroup_1::has_o_equationxml() const
    {    
    return m_has_o_equationxml;
    }

    ns_o::CT_EquationXml* CT_Shape::ChildGroup_1::mutable_o_equationxml()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_ink = false;
    
    if (m_o_ink)
    {
        delete m_o_ink;
        m_o_ink = NULL;
    }
    ;
    
    m_has_pvml_iscomment = false;
    
    if (m_pvml_iscomment)
    {
        delete m_pvml_iscomment;
        m_pvml_iscomment = NULL;
    }
    ;
    
    m_has_o_equationxml = true;
    if (!m_o_equationxml)
    {
        m_o_equationxml = new ns_o::CT_EquationXml();
    }
    return m_o_equationxml;
    }

    const ns_o::CT_EquationXml& CT_Shape::ChildGroup_1::get_o_equationxml() const
    {    
    if (m_o_equationxml)
    {
        return *m_o_equationxml;
    }
    return ns_o::CT_EquationXml::default_instance();
    }

CT_Shape* CT_Shape::default_instance_ = NULL;

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
                (*iter)->get_path().toXmlElem("path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("o:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("o:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("o:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("o:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("o:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("o:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("w10:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("w10:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("w10:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("w10:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("w10:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("w10:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("x:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("pvml:textdata", "", _outStream);
            }
        }
    }
     
    if (m_has_o_complex)
    {
        m_o_complex->toXmlElem("o:complex", "", _outStream);;
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


    // CT_Shapetype::ChildGroup_1
    bool CT_Shapetype::ChildGroup_1::has_path() const
    {    
    return m_has_path;
    }

    CT_Path* CT_Shapetype::ChildGroup_1::mutable_path()
    {    
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_path = true;
    if (!m_path)
    {
        m_path = new CT_Path();
    }
    return m_path;
    }

    const CT_Path& CT_Shapetype::ChildGroup_1::get_path() const
    {    
    if (m_path)
    {
        return *m_path;
    }
    return CT_Path::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_formulas() const
    {    
    return m_has_formulas;
    }

    CT_Formulas* CT_Shapetype::ChildGroup_1::mutable_formulas()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_formulas = true;
    if (!m_formulas)
    {
        m_formulas = new CT_Formulas();
    }
    return m_formulas;
    }

    const CT_Formulas& CT_Shapetype::ChildGroup_1::get_formulas() const
    {    
    if (m_formulas)
    {
        return *m_formulas;
    }
    return CT_Formulas::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_handles() const
    {    
    return m_has_handles;
    }

    CT_Handles* CT_Shapetype::ChildGroup_1::mutable_handles()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_handles = true;
    if (!m_handles)
    {
        m_handles = new CT_Handles();
    }
    return m_handles;
    }

    const CT_Handles& CT_Shapetype::ChildGroup_1::get_handles() const
    {    
    if (m_handles)
    {
        return *m_handles;
    }
    return CT_Handles::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Shapetype::ChildGroup_1::mutable_fill()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Shapetype::ChildGroup_1::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_stroke() const
    {    
    return m_has_stroke;
    }

    CT_Stroke* CT_Shapetype::ChildGroup_1::mutable_stroke()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_stroke = true;
    if (!m_stroke)
    {
        m_stroke = new CT_Stroke();
    }
    return m_stroke;
    }

    const CT_Stroke& CT_Shapetype::ChildGroup_1::get_stroke() const
    {    
    if (m_stroke)
    {
        return *m_stroke;
    }
    return CT_Stroke::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_shadow() const
    {    
    return m_has_shadow;
    }

    CT_Shadow* CT_Shapetype::ChildGroup_1::mutable_shadow()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_shadow = true;
    if (!m_shadow)
    {
        m_shadow = new CT_Shadow();
    }
    return m_shadow;
    }

    const CT_Shadow& CT_Shapetype::ChildGroup_1::get_shadow() const
    {    
    if (m_shadow)
    {
        return *m_shadow;
    }
    return CT_Shadow::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_textbox() const
    {    
    return m_has_textbox;
    }

    CT_Textbox* CT_Shapetype::ChildGroup_1::mutable_textbox()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textbox = true;
    if (!m_textbox)
    {
        m_textbox = new CT_Textbox();
    }
    return m_textbox;
    }

    const CT_Textbox& CT_Shapetype::ChildGroup_1::get_textbox() const
    {    
    if (m_textbox)
    {
        return *m_textbox;
    }
    return CT_Textbox::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_textpath() const
    {    
    return m_has_textpath;
    }

    CT_TextPath* CT_Shapetype::ChildGroup_1::mutable_textpath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textpath = true;
    if (!m_textpath)
    {
        m_textpath = new CT_TextPath();
    }
    return m_textpath;
    }

    const CT_TextPath& CT_Shapetype::ChildGroup_1::get_textpath() const
    {    
    if (m_textpath)
    {
        return *m_textpath;
    }
    return CT_TextPath::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_imagedata() const
    {    
    return m_has_imagedata;
    }

    CT_ImageData* CT_Shapetype::ChildGroup_1::mutable_imagedata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_imagedata = true;
    if (!m_imagedata)
    {
        m_imagedata = new CT_ImageData();
    }
    return m_imagedata;
    }

    const CT_ImageData& CT_Shapetype::ChildGroup_1::get_imagedata() const
    {    
    if (m_imagedata)
    {
        return *m_imagedata;
    }
    return CT_ImageData::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_o_skew() const
    {    
    return m_has_o_skew;
    }

    ns_o::CT_Skew* CT_Shapetype::ChildGroup_1::mutable_o_skew()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_skew = true;
    if (!m_o_skew)
    {
        m_o_skew = new ns_o::CT_Skew();
    }
    return m_o_skew;
    }

    const ns_o::CT_Skew& CT_Shapetype::ChildGroup_1::get_o_skew() const
    {    
    if (m_o_skew)
    {
        return *m_o_skew;
    }
    return ns_o::CT_Skew::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_o_extrusion() const
    {    
    return m_has_o_extrusion;
    }

    ns_o::CT_Extrusion* CT_Shapetype::ChildGroup_1::mutable_o_extrusion()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_extrusion = true;
    if (!m_o_extrusion)
    {
        m_o_extrusion = new ns_o::CT_Extrusion();
    }
    return m_o_extrusion;
    }

    const ns_o::CT_Extrusion& CT_Shapetype::ChildGroup_1::get_o_extrusion() const
    {    
    if (m_o_extrusion)
    {
        return *m_o_extrusion;
    }
    return ns_o::CT_Extrusion::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_o_callout() const
    {    
    return m_has_o_callout;
    }

    ns_o::CT_Callout* CT_Shapetype::ChildGroup_1::mutable_o_callout()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_callout = true;
    if (!m_o_callout)
    {
        m_o_callout = new ns_o::CT_Callout();
    }
    return m_o_callout;
    }

    const ns_o::CT_Callout& CT_Shapetype::ChildGroup_1::get_o_callout() const
    {    
    if (m_o_callout)
    {
        return *m_o_callout;
    }
    return ns_o::CT_Callout::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_o_lock() const
    {    
    return m_has_o_lock;
    }

    ns_o::CT_Lock* CT_Shapetype::ChildGroup_1::mutable_o_lock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_lock = true;
    if (!m_o_lock)
    {
        m_o_lock = new ns_o::CT_Lock();
    }
    return m_o_lock;
    }

    const ns_o::CT_Lock& CT_Shapetype::ChildGroup_1::get_o_lock() const
    {    
    if (m_o_lock)
    {
        return *m_o_lock;
    }
    return ns_o::CT_Lock::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_o_clippath() const
    {    
    return m_has_o_clippath;
    }

    ns_o::CT_ClipPath* CT_Shapetype::ChildGroup_1::mutable_o_clippath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_clippath = true;
    if (!m_o_clippath)
    {
        m_o_clippath = new ns_o::CT_ClipPath();
    }
    return m_o_clippath;
    }

    const ns_o::CT_ClipPath& CT_Shapetype::ChildGroup_1::get_o_clippath() const
    {    
    if (m_o_clippath)
    {
        return *m_o_clippath;
    }
    return ns_o::CT_ClipPath::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_o_signatureline() const
    {    
    return m_has_o_signatureline;
    }

    ns_o::CT_SignatureLine* CT_Shapetype::ChildGroup_1::mutable_o_signatureline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_signatureline = true;
    if (!m_o_signatureline)
    {
        m_o_signatureline = new ns_o::CT_SignatureLine();
    }
    return m_o_signatureline;
    }

    const ns_o::CT_SignatureLine& CT_Shapetype::ChildGroup_1::get_o_signatureline() const
    {    
    if (m_o_signatureline)
    {
        return *m_o_signatureline;
    }
    return ns_o::CT_SignatureLine::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_w10_wrap() const
    {    
    return m_has_w10_wrap;
    }

    ns_w10::CT_Wrap* CT_Shapetype::ChildGroup_1::mutable_w10_wrap()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_wrap = true;
    if (!m_w10_wrap)
    {
        m_w10_wrap = new ns_w10::CT_Wrap();
    }
    return m_w10_wrap;
    }

    const ns_w10::CT_Wrap& CT_Shapetype::ChildGroup_1::get_w10_wrap() const
    {    
    if (m_w10_wrap)
    {
        return *m_w10_wrap;
    }
    return ns_w10::CT_Wrap::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_w10_anchorlock() const
    {    
    return m_has_w10_anchorlock;
    }

    ns_w10::CT_AnchorLock* CT_Shapetype::ChildGroup_1::mutable_w10_anchorlock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_anchorlock = true;
    if (!m_w10_anchorlock)
    {
        m_w10_anchorlock = new ns_w10::CT_AnchorLock();
    }
    return m_w10_anchorlock;
    }

    const ns_w10::CT_AnchorLock& CT_Shapetype::ChildGroup_1::get_w10_anchorlock() const
    {    
    if (m_w10_anchorlock)
    {
        return *m_w10_anchorlock;
    }
    return ns_w10::CT_AnchorLock::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_w10_bordertop() const
    {    
    return m_has_w10_bordertop;
    }

    ns_w10::CT_Border* CT_Shapetype::ChildGroup_1::mutable_w10_bordertop()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_bordertop = true;
    if (!m_w10_bordertop)
    {
        m_w10_bordertop = new ns_w10::CT_Border();
    }
    return m_w10_bordertop;
    }

    const ns_w10::CT_Border& CT_Shapetype::ChildGroup_1::get_w10_bordertop() const
    {    
    if (m_w10_bordertop)
    {
        return *m_w10_bordertop;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_w10_borderbottom() const
    {    
    return m_has_w10_borderbottom;
    }

    ns_w10::CT_Border* CT_Shapetype::ChildGroup_1::mutable_w10_borderbottom()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderbottom = true;
    if (!m_w10_borderbottom)
    {
        m_w10_borderbottom = new ns_w10::CT_Border();
    }
    return m_w10_borderbottom;
    }

    const ns_w10::CT_Border& CT_Shapetype::ChildGroup_1::get_w10_borderbottom() const
    {    
    if (m_w10_borderbottom)
    {
        return *m_w10_borderbottom;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_w10_borderleft() const
    {    
    return m_has_w10_borderleft;
    }

    ns_w10::CT_Border* CT_Shapetype::ChildGroup_1::mutable_w10_borderleft()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderleft = true;
    if (!m_w10_borderleft)
    {
        m_w10_borderleft = new ns_w10::CT_Border();
    }
    return m_w10_borderleft;
    }

    const ns_w10::CT_Border& CT_Shapetype::ChildGroup_1::get_w10_borderleft() const
    {    
    if (m_w10_borderleft)
    {
        return *m_w10_borderleft;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_w10_borderright() const
    {    
    return m_has_w10_borderright;
    }

    ns_w10::CT_Border* CT_Shapetype::ChildGroup_1::mutable_w10_borderright()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderright = true;
    if (!m_w10_borderright)
    {
        m_w10_borderright = new ns_w10::CT_Border();
    }
    return m_w10_borderright;
    }

    const ns_w10::CT_Border& CT_Shapetype::ChildGroup_1::get_w10_borderright() const
    {    
    if (m_w10_borderright)
    {
        return *m_w10_borderright;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_x_ClientData() const
    {    
    return m_has_x_ClientData;
    }

    ns_x::CT_ClientData* CT_Shapetype::ChildGroup_1::mutable_x_ClientData()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_x_ClientData = true;
    if (!m_x_ClientData)
    {
        m_x_ClientData = new ns_x::CT_ClientData();
    }
    return m_x_ClientData;
    }

    const ns_x::CT_ClientData& CT_Shapetype::ChildGroup_1::get_x_ClientData() const
    {    
    if (m_x_ClientData)
    {
        return *m_x_ClientData;
    }
    return ns_x::CT_ClientData::default_instance();
    }

    bool CT_Shapetype::ChildGroup_1::has_pvml_textdata() const
    {    
    return m_has_pvml_textdata;
    }

    ns_pvml::CT_Rel* CT_Shapetype::ChildGroup_1::mutable_pvml_textdata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = true;
    if (!m_pvml_textdata)
    {
        m_pvml_textdata = new ns_pvml::CT_Rel();
    }
    return m_pvml_textdata;
    }

    const ns_pvml::CT_Rel& CT_Shapetype::ChildGroup_1::get_pvml_textdata() const
    {    
    if (m_pvml_textdata)
    {
        return *m_pvml_textdata;
    }
    return ns_pvml::CT_Rel::default_instance();
    }

CT_Shapetype* CT_Shapetype::default_instance_ = NULL;

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
                (*iter)->get_path().toXmlElem("path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("o:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("o:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("o:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("o:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("o:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("o:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("w10:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("w10:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("w10:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("w10:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("w10:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("w10:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("x:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("pvml:textdata", "", _outStream);
            }
            else if ((*iter)->has_group())
            {
                (*iter)->get_group().toXmlElem("group", "", _outStream);
            }
            else if ((*iter)->has_shape())
            {
                (*iter)->get_shape().toXmlElem("shape", "", _outStream);
            }
            else if ((*iter)->has_shapetype())
            {
                (*iter)->get_shapetype().toXmlElem("shapetype", "", _outStream);
            }
            else if ((*iter)->has_arc())
            {
                (*iter)->get_arc().toXmlElem("arc", "", _outStream);
            }
            else if ((*iter)->has_curve())
            {
                (*iter)->get_curve().toXmlElem("curve", "", _outStream);
            }
            else if ((*iter)->has_image())
            {
                (*iter)->get_image().toXmlElem("image", "", _outStream);
            }
            else if ((*iter)->has_line())
            {
                (*iter)->get_line().toXmlElem("line", "", _outStream);
            }
            else if ((*iter)->has_oval())
            {
                (*iter)->get_oval().toXmlElem("oval", "", _outStream);
            }
            else if ((*iter)->has_polyline())
            {
                (*iter)->get_polyline().toXmlElem("polyline", "", _outStream);
            }
            else if ((*iter)->has_rect())
            {
                (*iter)->get_rect().toXmlElem("rect", "", _outStream);
            }
            else if ((*iter)->has_roundrect())
            {
                (*iter)->get_roundrect().toXmlElem("roundrect", "", _outStream);
            }
            else if ((*iter)->has_o_diagram())
            {
                (*iter)->get_o_diagram().toXmlElem("o:diagram", "", _outStream);
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


    // CT_Group::ChildGroup_1
    bool CT_Group::ChildGroup_1::has_path() const
    {    
    return m_has_path;
    }

    CT_Path* CT_Group::ChildGroup_1::mutable_path()
    {    
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_path = true;
    if (!m_path)
    {
        m_path = new CT_Path();
    }
    return m_path;
    }

    const CT_Path& CT_Group::ChildGroup_1::get_path() const
    {    
    if (m_path)
    {
        return *m_path;
    }
    return CT_Path::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_formulas() const
    {    
    return m_has_formulas;
    }

    CT_Formulas* CT_Group::ChildGroup_1::mutable_formulas()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_formulas = true;
    if (!m_formulas)
    {
        m_formulas = new CT_Formulas();
    }
    return m_formulas;
    }

    const CT_Formulas& CT_Group::ChildGroup_1::get_formulas() const
    {    
    if (m_formulas)
    {
        return *m_formulas;
    }
    return CT_Formulas::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_handles() const
    {    
    return m_has_handles;
    }

    CT_Handles* CT_Group::ChildGroup_1::mutable_handles()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_handles = true;
    if (!m_handles)
    {
        m_handles = new CT_Handles();
    }
    return m_handles;
    }

    const CT_Handles& CT_Group::ChildGroup_1::get_handles() const
    {    
    if (m_handles)
    {
        return *m_handles;
    }
    return CT_Handles::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Group::ChildGroup_1::mutable_fill()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Group::ChildGroup_1::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_stroke() const
    {    
    return m_has_stroke;
    }

    CT_Stroke* CT_Group::ChildGroup_1::mutable_stroke()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_stroke = true;
    if (!m_stroke)
    {
        m_stroke = new CT_Stroke();
    }
    return m_stroke;
    }

    const CT_Stroke& CT_Group::ChildGroup_1::get_stroke() const
    {    
    if (m_stroke)
    {
        return *m_stroke;
    }
    return CT_Stroke::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_shadow() const
    {    
    return m_has_shadow;
    }

    CT_Shadow* CT_Group::ChildGroup_1::mutable_shadow()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_shadow = true;
    if (!m_shadow)
    {
        m_shadow = new CT_Shadow();
    }
    return m_shadow;
    }

    const CT_Shadow& CT_Group::ChildGroup_1::get_shadow() const
    {    
    if (m_shadow)
    {
        return *m_shadow;
    }
    return CT_Shadow::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_textbox() const
    {    
    return m_has_textbox;
    }

    CT_Textbox* CT_Group::ChildGroup_1::mutable_textbox()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_textbox = true;
    if (!m_textbox)
    {
        m_textbox = new CT_Textbox();
    }
    return m_textbox;
    }

    const CT_Textbox& CT_Group::ChildGroup_1::get_textbox() const
    {    
    if (m_textbox)
    {
        return *m_textbox;
    }
    return CT_Textbox::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_textpath() const
    {    
    return m_has_textpath;
    }

    CT_TextPath* CT_Group::ChildGroup_1::mutable_textpath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_textpath = true;
    if (!m_textpath)
    {
        m_textpath = new CT_TextPath();
    }
    return m_textpath;
    }

    const CT_TextPath& CT_Group::ChildGroup_1::get_textpath() const
    {    
    if (m_textpath)
    {
        return *m_textpath;
    }
    return CT_TextPath::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_imagedata() const
    {    
    return m_has_imagedata;
    }

    CT_ImageData* CT_Group::ChildGroup_1::mutable_imagedata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_imagedata = true;
    if (!m_imagedata)
    {
        m_imagedata = new CT_ImageData();
    }
    return m_imagedata;
    }

    const CT_ImageData& CT_Group::ChildGroup_1::get_imagedata() const
    {    
    if (m_imagedata)
    {
        return *m_imagedata;
    }
    return CT_ImageData::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_o_skew() const
    {    
    return m_has_o_skew;
    }

    ns_o::CT_Skew* CT_Group::ChildGroup_1::mutable_o_skew()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_o_skew = true;
    if (!m_o_skew)
    {
        m_o_skew = new ns_o::CT_Skew();
    }
    return m_o_skew;
    }

    const ns_o::CT_Skew& CT_Group::ChildGroup_1::get_o_skew() const
    {    
    if (m_o_skew)
    {
        return *m_o_skew;
    }
    return ns_o::CT_Skew::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_o_extrusion() const
    {    
    return m_has_o_extrusion;
    }

    ns_o::CT_Extrusion* CT_Group::ChildGroup_1::mutable_o_extrusion()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_o_extrusion = true;
    if (!m_o_extrusion)
    {
        m_o_extrusion = new ns_o::CT_Extrusion();
    }
    return m_o_extrusion;
    }

    const ns_o::CT_Extrusion& CT_Group::ChildGroup_1::get_o_extrusion() const
    {    
    if (m_o_extrusion)
    {
        return *m_o_extrusion;
    }
    return ns_o::CT_Extrusion::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_o_callout() const
    {    
    return m_has_o_callout;
    }

    ns_o::CT_Callout* CT_Group::ChildGroup_1::mutable_o_callout()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_o_callout = true;
    if (!m_o_callout)
    {
        m_o_callout = new ns_o::CT_Callout();
    }
    return m_o_callout;
    }

    const ns_o::CT_Callout& CT_Group::ChildGroup_1::get_o_callout() const
    {    
    if (m_o_callout)
    {
        return *m_o_callout;
    }
    return ns_o::CT_Callout::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_o_lock() const
    {    
    return m_has_o_lock;
    }

    ns_o::CT_Lock* CT_Group::ChildGroup_1::mutable_o_lock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_o_lock = true;
    if (!m_o_lock)
    {
        m_o_lock = new ns_o::CT_Lock();
    }
    return m_o_lock;
    }

    const ns_o::CT_Lock& CT_Group::ChildGroup_1::get_o_lock() const
    {    
    if (m_o_lock)
    {
        return *m_o_lock;
    }
    return ns_o::CT_Lock::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_o_clippath() const
    {    
    return m_has_o_clippath;
    }

    ns_o::CT_ClipPath* CT_Group::ChildGroup_1::mutable_o_clippath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_o_clippath = true;
    if (!m_o_clippath)
    {
        m_o_clippath = new ns_o::CT_ClipPath();
    }
    return m_o_clippath;
    }

    const ns_o::CT_ClipPath& CT_Group::ChildGroup_1::get_o_clippath() const
    {    
    if (m_o_clippath)
    {
        return *m_o_clippath;
    }
    return ns_o::CT_ClipPath::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_o_signatureline() const
    {    
    return m_has_o_signatureline;
    }

    ns_o::CT_SignatureLine* CT_Group::ChildGroup_1::mutable_o_signatureline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_o_signatureline = true;
    if (!m_o_signatureline)
    {
        m_o_signatureline = new ns_o::CT_SignatureLine();
    }
    return m_o_signatureline;
    }

    const ns_o::CT_SignatureLine& CT_Group::ChildGroup_1::get_o_signatureline() const
    {    
    if (m_o_signatureline)
    {
        return *m_o_signatureline;
    }
    return ns_o::CT_SignatureLine::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_w10_wrap() const
    {    
    return m_has_w10_wrap;
    }

    ns_w10::CT_Wrap* CT_Group::ChildGroup_1::mutable_w10_wrap()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_w10_wrap = true;
    if (!m_w10_wrap)
    {
        m_w10_wrap = new ns_w10::CT_Wrap();
    }
    return m_w10_wrap;
    }

    const ns_w10::CT_Wrap& CT_Group::ChildGroup_1::get_w10_wrap() const
    {    
    if (m_w10_wrap)
    {
        return *m_w10_wrap;
    }
    return ns_w10::CT_Wrap::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_w10_anchorlock() const
    {    
    return m_has_w10_anchorlock;
    }

    ns_w10::CT_AnchorLock* CT_Group::ChildGroup_1::mutable_w10_anchorlock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_w10_anchorlock = true;
    if (!m_w10_anchorlock)
    {
        m_w10_anchorlock = new ns_w10::CT_AnchorLock();
    }
    return m_w10_anchorlock;
    }

    const ns_w10::CT_AnchorLock& CT_Group::ChildGroup_1::get_w10_anchorlock() const
    {    
    if (m_w10_anchorlock)
    {
        return *m_w10_anchorlock;
    }
    return ns_w10::CT_AnchorLock::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_w10_bordertop() const
    {    
    return m_has_w10_bordertop;
    }

    ns_w10::CT_Border* CT_Group::ChildGroup_1::mutable_w10_bordertop()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_w10_bordertop = true;
    if (!m_w10_bordertop)
    {
        m_w10_bordertop = new ns_w10::CT_Border();
    }
    return m_w10_bordertop;
    }

    const ns_w10::CT_Border& CT_Group::ChildGroup_1::get_w10_bordertop() const
    {    
    if (m_w10_bordertop)
    {
        return *m_w10_bordertop;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_w10_borderbottom() const
    {    
    return m_has_w10_borderbottom;
    }

    ns_w10::CT_Border* CT_Group::ChildGroup_1::mutable_w10_borderbottom()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_w10_borderbottom = true;
    if (!m_w10_borderbottom)
    {
        m_w10_borderbottom = new ns_w10::CT_Border();
    }
    return m_w10_borderbottom;
    }

    const ns_w10::CT_Border& CT_Group::ChildGroup_1::get_w10_borderbottom() const
    {    
    if (m_w10_borderbottom)
    {
        return *m_w10_borderbottom;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_w10_borderleft() const
    {    
    return m_has_w10_borderleft;
    }

    ns_w10::CT_Border* CT_Group::ChildGroup_1::mutable_w10_borderleft()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_w10_borderleft = true;
    if (!m_w10_borderleft)
    {
        m_w10_borderleft = new ns_w10::CT_Border();
    }
    return m_w10_borderleft;
    }

    const ns_w10::CT_Border& CT_Group::ChildGroup_1::get_w10_borderleft() const
    {    
    if (m_w10_borderleft)
    {
        return *m_w10_borderleft;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_w10_borderright() const
    {    
    return m_has_w10_borderright;
    }

    ns_w10::CT_Border* CT_Group::ChildGroup_1::mutable_w10_borderright()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_w10_borderright = true;
    if (!m_w10_borderright)
    {
        m_w10_borderright = new ns_w10::CT_Border();
    }
    return m_w10_borderright;
    }

    const ns_w10::CT_Border& CT_Group::ChildGroup_1::get_w10_borderright() const
    {    
    if (m_w10_borderright)
    {
        return *m_w10_borderright;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_x_ClientData() const
    {    
    return m_has_x_ClientData;
    }

    ns_x::CT_ClientData* CT_Group::ChildGroup_1::mutable_x_ClientData()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_x_ClientData = true;
    if (!m_x_ClientData)
    {
        m_x_ClientData = new ns_x::CT_ClientData();
    }
    return m_x_ClientData;
    }

    const ns_x::CT_ClientData& CT_Group::ChildGroup_1::get_x_ClientData() const
    {    
    if (m_x_ClientData)
    {
        return *m_x_ClientData;
    }
    return ns_x::CT_ClientData::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_pvml_textdata() const
    {    
    return m_has_pvml_textdata;
    }

    ns_pvml::CT_Rel* CT_Group::ChildGroup_1::mutable_pvml_textdata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_pvml_textdata = true;
    if (!m_pvml_textdata)
    {
        m_pvml_textdata = new ns_pvml::CT_Rel();
    }
    return m_pvml_textdata;
    }

    const ns_pvml::CT_Rel& CT_Group::ChildGroup_1::get_pvml_textdata() const
    {    
    if (m_pvml_textdata)
    {
        return *m_pvml_textdata;
    }
    return ns_pvml::CT_Rel::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_group() const
    {    
    return m_has_group;
    }

    CT_Group* CT_Group::ChildGroup_1::mutable_group()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_group = true;
    if (!m_group)
    {
        m_group = new CT_Group();
    }
    return m_group;
    }

    const CT_Group& CT_Group::ChildGroup_1::get_group() const
    {    
    if (m_group)
    {
        return *m_group;
    }
    return CT_Group::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_shape() const
    {    
    return m_has_shape;
    }

    CT_Shape* CT_Group::ChildGroup_1::mutable_shape()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_shape = true;
    if (!m_shape)
    {
        m_shape = new CT_Shape();
    }
    return m_shape;
    }

    const CT_Shape& CT_Group::ChildGroup_1::get_shape() const
    {    
    if (m_shape)
    {
        return *m_shape;
    }
    return CT_Shape::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_shapetype() const
    {    
    return m_has_shapetype;
    }

    CT_Shapetype* CT_Group::ChildGroup_1::mutable_shapetype()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_shapetype = true;
    if (!m_shapetype)
    {
        m_shapetype = new CT_Shapetype();
    }
    return m_shapetype;
    }

    const CT_Shapetype& CT_Group::ChildGroup_1::get_shapetype() const
    {    
    if (m_shapetype)
    {
        return *m_shapetype;
    }
    return CT_Shapetype::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_arc() const
    {    
    return m_has_arc;
    }

    CT_Arc* CT_Group::ChildGroup_1::mutable_arc()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_arc = true;
    if (!m_arc)
    {
        m_arc = new CT_Arc();
    }
    return m_arc;
    }

    const CT_Arc& CT_Group::ChildGroup_1::get_arc() const
    {    
    if (m_arc)
    {
        return *m_arc;
    }
    return CT_Arc::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_curve() const
    {    
    return m_has_curve;
    }

    CT_Curve* CT_Group::ChildGroup_1::mutable_curve()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_curve = true;
    if (!m_curve)
    {
        m_curve = new CT_Curve();
    }
    return m_curve;
    }

    const CT_Curve& CT_Group::ChildGroup_1::get_curve() const
    {    
    if (m_curve)
    {
        return *m_curve;
    }
    return CT_Curve::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_image() const
    {    
    return m_has_image;
    }

    CT_Image* CT_Group::ChildGroup_1::mutable_image()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_image = true;
    if (!m_image)
    {
        m_image = new CT_Image();
    }
    return m_image;
    }

    const CT_Image& CT_Group::ChildGroup_1::get_image() const
    {    
    if (m_image)
    {
        return *m_image;
    }
    return CT_Image::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_line() const
    {    
    return m_has_line;
    }

    CT_Line* CT_Group::ChildGroup_1::mutable_line()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_line = true;
    if (!m_line)
    {
        m_line = new CT_Line();
    }
    return m_line;
    }

    const CT_Line& CT_Group::ChildGroup_1::get_line() const
    {    
    if (m_line)
    {
        return *m_line;
    }
    return CT_Line::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_oval() const
    {    
    return m_has_oval;
    }

    CT_Oval* CT_Group::ChildGroup_1::mutable_oval()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_oval = true;
    if (!m_oval)
    {
        m_oval = new CT_Oval();
    }
    return m_oval;
    }

    const CT_Oval& CT_Group::ChildGroup_1::get_oval() const
    {    
    if (m_oval)
    {
        return *m_oval;
    }
    return CT_Oval::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_polyline() const
    {    
    return m_has_polyline;
    }

    CT_PolyLine* CT_Group::ChildGroup_1::mutable_polyline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_polyline = true;
    if (!m_polyline)
    {
        m_polyline = new CT_PolyLine();
    }
    return m_polyline;
    }

    const CT_PolyLine& CT_Group::ChildGroup_1::get_polyline() const
    {    
    if (m_polyline)
    {
        return *m_polyline;
    }
    return CT_PolyLine::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_rect() const
    {    
    return m_has_rect;
    }

    CT_Rect* CT_Group::ChildGroup_1::mutable_rect()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_rect = true;
    if (!m_rect)
    {
        m_rect = new CT_Rect();
    }
    return m_rect;
    }

    const CT_Rect& CT_Group::ChildGroup_1::get_rect() const
    {    
    if (m_rect)
    {
        return *m_rect;
    }
    return CT_Rect::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_roundrect() const
    {    
    return m_has_roundrect;
    }

    CT_RoundRect* CT_Group::ChildGroup_1::mutable_roundrect()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_o_diagram = false;
    
    if (m_o_diagram)
    {
        delete m_o_diagram;
        m_o_diagram = NULL;
    }
    ;
    
    m_has_roundrect = true;
    if (!m_roundrect)
    {
        m_roundrect = new CT_RoundRect();
    }
    return m_roundrect;
    }

    const CT_RoundRect& CT_Group::ChildGroup_1::get_roundrect() const
    {    
    if (m_roundrect)
    {
        return *m_roundrect;
    }
    return CT_RoundRect::default_instance();
    }

    bool CT_Group::ChildGroup_1::has_o_diagram() const
    {    
    return m_has_o_diagram;
    }

    ns_o::CT_Diagram* CT_Group::ChildGroup_1::mutable_o_diagram()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_group = false;
    
    if (m_group)
    {
        delete m_group;
        m_group = NULL;
    }
    ;
    
    m_has_shape = false;
    
    if (m_shape)
    {
        delete m_shape;
        m_shape = NULL;
    }
    ;
    
    m_has_shapetype = false;
    
    if (m_shapetype)
    {
        delete m_shapetype;
        m_shapetype = NULL;
    }
    ;
    
    m_has_arc = false;
    
    if (m_arc)
    {
        delete m_arc;
        m_arc = NULL;
    }
    ;
    
    m_has_curve = false;
    
    if (m_curve)
    {
        delete m_curve;
        m_curve = NULL;
    }
    ;
    
    m_has_image = false;
    
    if (m_image)
    {
        delete m_image;
        m_image = NULL;
    }
    ;
    
    m_has_line = false;
    
    if (m_line)
    {
        delete m_line;
        m_line = NULL;
    }
    ;
    
    m_has_oval = false;
    
    if (m_oval)
    {
        delete m_oval;
        m_oval = NULL;
    }
    ;
    
    m_has_polyline = false;
    
    if (m_polyline)
    {
        delete m_polyline;
        m_polyline = NULL;
    }
    ;
    
    m_has_rect = false;
    
    if (m_rect)
    {
        delete m_rect;
        m_rect = NULL;
    }
    ;
    
    m_has_roundrect = false;
    
    if (m_roundrect)
    {
        delete m_roundrect;
        m_roundrect = NULL;
    }
    ;
    
    m_has_o_diagram = true;
    if (!m_o_diagram)
    {
        m_o_diagram = new ns_o::CT_Diagram();
    }
    return m_o_diagram;
    }

    const ns_o::CT_Diagram& CT_Group::ChildGroup_1::get_o_diagram() const
    {    
    if (m_o_diagram)
    {
        return *m_o_diagram;
    }
    return ns_o::CT_Diagram::default_instance();
    }

CT_Group* CT_Group::default_instance_ = NULL;

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
        m_fill->toXmlElem("fill", "", _outStream);;
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

CT_Background* CT_Background::default_instance_ = NULL;

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
        m_o_fill->toXmlElem("o:fill", "", _outStream);;
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

CT_Fill* CT_Fill::default_instance_ = NULL;

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
                (*iter)->get_f().toXmlElem("f", "", _outStream);
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


    // CT_Formulas::ChildGroup_1
    bool CT_Formulas::ChildGroup_1::has_f() const
    {    
    return m_has_f;
    }

    CT_F* CT_Formulas::ChildGroup_1::mutable_f()
    {    
    
    m_has_f = true;
    if (!m_f)
    {
        m_f = new CT_F();
    }
    return m_f;
    }

    const CT_F& CT_Formulas::ChildGroup_1::get_f() const
    {    
    if (m_f)
    {
        return *m_f;
    }
    return CT_F::default_instance();
    }

CT_Formulas* CT_Formulas::default_instance_ = NULL;

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

CT_F* CT_F::default_instance_ = NULL;

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
                (*iter)->get_h().toXmlElem("h", "", _outStream);
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


    // CT_Handles::ChildGroup_1
    bool CT_Handles::ChildGroup_1::has_h() const
    {    
    return m_has_h;
    }

    CT_H* CT_Handles::ChildGroup_1::mutable_h()
    {    
    
    m_has_h = true;
    if (!m_h)
    {
        m_h = new CT_H();
    }
    return m_h;
    }

    const CT_H& CT_Handles::ChildGroup_1::get_h() const
    {    
    if (m_h)
    {
        return *m_h;
    }
    return CT_H::default_instance();
    }

CT_Handles* CT_Handles::default_instance_ = NULL;

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

CT_H* CT_H::default_instance_ = NULL;

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

CT_ImageData* CT_ImageData::default_instance_ = NULL;

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

CT_Path* CT_Path::default_instance_ = NULL;

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

CT_Shadow* CT_Shadow::default_instance_ = NULL;

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
        m_o_left->toXmlElem("o:left", "", _outStream);;
    }
    
    if (m_has_o_top)
    {
        m_o_top->toXmlElem("o:top", "", _outStream);;
    }
    
    if (m_has_o_right)
    {
        m_o_right->toXmlElem("o:right", "", _outStream);;
    }
    
    if (m_has_o_bottom)
    {
        m_o_bottom->toXmlElem("o:bottom", "", _outStream);;
    }
    
    if (m_has_o_column)
    {
        m_o_column->toXmlElem("o:column", "", _outStream);;
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

CT_Stroke* CT_Stroke::default_instance_ = NULL;

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
        m_w_txbxContent->toXmlElem("w:txbxContent", "", _outStream);;
    }
    
    if (m_has_any)
    {
        
    m_any->toXml(_outStream);
    ;
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

CT_Textbox* CT_Textbox::default_instance_ = NULL;

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

CT_TextPath* CT_TextPath::default_instance_ = NULL;

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
                (*iter)->get_path().toXmlElem("path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("o:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("o:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("o:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("o:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("o:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("o:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("w10:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("w10:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("w10:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("w10:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("w10:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("w10:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("x:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("pvml:textdata", "", _outStream);
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


    // CT_Arc::ChildGroup_1
    bool CT_Arc::ChildGroup_1::has_path() const
    {    
    return m_has_path;
    }

    CT_Path* CT_Arc::ChildGroup_1::mutable_path()
    {    
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_path = true;
    if (!m_path)
    {
        m_path = new CT_Path();
    }
    return m_path;
    }

    const CT_Path& CT_Arc::ChildGroup_1::get_path() const
    {    
    if (m_path)
    {
        return *m_path;
    }
    return CT_Path::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_formulas() const
    {    
    return m_has_formulas;
    }

    CT_Formulas* CT_Arc::ChildGroup_1::mutable_formulas()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_formulas = true;
    if (!m_formulas)
    {
        m_formulas = new CT_Formulas();
    }
    return m_formulas;
    }

    const CT_Formulas& CT_Arc::ChildGroup_1::get_formulas() const
    {    
    if (m_formulas)
    {
        return *m_formulas;
    }
    return CT_Formulas::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_handles() const
    {    
    return m_has_handles;
    }

    CT_Handles* CT_Arc::ChildGroup_1::mutable_handles()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_handles = true;
    if (!m_handles)
    {
        m_handles = new CT_Handles();
    }
    return m_handles;
    }

    const CT_Handles& CT_Arc::ChildGroup_1::get_handles() const
    {    
    if (m_handles)
    {
        return *m_handles;
    }
    return CT_Handles::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Arc::ChildGroup_1::mutable_fill()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Arc::ChildGroup_1::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_stroke() const
    {    
    return m_has_stroke;
    }

    CT_Stroke* CT_Arc::ChildGroup_1::mutable_stroke()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_stroke = true;
    if (!m_stroke)
    {
        m_stroke = new CT_Stroke();
    }
    return m_stroke;
    }

    const CT_Stroke& CT_Arc::ChildGroup_1::get_stroke() const
    {    
    if (m_stroke)
    {
        return *m_stroke;
    }
    return CT_Stroke::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_shadow() const
    {    
    return m_has_shadow;
    }

    CT_Shadow* CT_Arc::ChildGroup_1::mutable_shadow()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_shadow = true;
    if (!m_shadow)
    {
        m_shadow = new CT_Shadow();
    }
    return m_shadow;
    }

    const CT_Shadow& CT_Arc::ChildGroup_1::get_shadow() const
    {    
    if (m_shadow)
    {
        return *m_shadow;
    }
    return CT_Shadow::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_textbox() const
    {    
    return m_has_textbox;
    }

    CT_Textbox* CT_Arc::ChildGroup_1::mutable_textbox()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textbox = true;
    if (!m_textbox)
    {
        m_textbox = new CT_Textbox();
    }
    return m_textbox;
    }

    const CT_Textbox& CT_Arc::ChildGroup_1::get_textbox() const
    {    
    if (m_textbox)
    {
        return *m_textbox;
    }
    return CT_Textbox::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_textpath() const
    {    
    return m_has_textpath;
    }

    CT_TextPath* CT_Arc::ChildGroup_1::mutable_textpath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textpath = true;
    if (!m_textpath)
    {
        m_textpath = new CT_TextPath();
    }
    return m_textpath;
    }

    const CT_TextPath& CT_Arc::ChildGroup_1::get_textpath() const
    {    
    if (m_textpath)
    {
        return *m_textpath;
    }
    return CT_TextPath::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_imagedata() const
    {    
    return m_has_imagedata;
    }

    CT_ImageData* CT_Arc::ChildGroup_1::mutable_imagedata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_imagedata = true;
    if (!m_imagedata)
    {
        m_imagedata = new CT_ImageData();
    }
    return m_imagedata;
    }

    const CT_ImageData& CT_Arc::ChildGroup_1::get_imagedata() const
    {    
    if (m_imagedata)
    {
        return *m_imagedata;
    }
    return CT_ImageData::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_o_skew() const
    {    
    return m_has_o_skew;
    }

    ns_o::CT_Skew* CT_Arc::ChildGroup_1::mutable_o_skew()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_skew = true;
    if (!m_o_skew)
    {
        m_o_skew = new ns_o::CT_Skew();
    }
    return m_o_skew;
    }

    const ns_o::CT_Skew& CT_Arc::ChildGroup_1::get_o_skew() const
    {    
    if (m_o_skew)
    {
        return *m_o_skew;
    }
    return ns_o::CT_Skew::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_o_extrusion() const
    {    
    return m_has_o_extrusion;
    }

    ns_o::CT_Extrusion* CT_Arc::ChildGroup_1::mutable_o_extrusion()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_extrusion = true;
    if (!m_o_extrusion)
    {
        m_o_extrusion = new ns_o::CT_Extrusion();
    }
    return m_o_extrusion;
    }

    const ns_o::CT_Extrusion& CT_Arc::ChildGroup_1::get_o_extrusion() const
    {    
    if (m_o_extrusion)
    {
        return *m_o_extrusion;
    }
    return ns_o::CT_Extrusion::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_o_callout() const
    {    
    return m_has_o_callout;
    }

    ns_o::CT_Callout* CT_Arc::ChildGroup_1::mutable_o_callout()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_callout = true;
    if (!m_o_callout)
    {
        m_o_callout = new ns_o::CT_Callout();
    }
    return m_o_callout;
    }

    const ns_o::CT_Callout& CT_Arc::ChildGroup_1::get_o_callout() const
    {    
    if (m_o_callout)
    {
        return *m_o_callout;
    }
    return ns_o::CT_Callout::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_o_lock() const
    {    
    return m_has_o_lock;
    }

    ns_o::CT_Lock* CT_Arc::ChildGroup_1::mutable_o_lock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_lock = true;
    if (!m_o_lock)
    {
        m_o_lock = new ns_o::CT_Lock();
    }
    return m_o_lock;
    }

    const ns_o::CT_Lock& CT_Arc::ChildGroup_1::get_o_lock() const
    {    
    if (m_o_lock)
    {
        return *m_o_lock;
    }
    return ns_o::CT_Lock::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_o_clippath() const
    {    
    return m_has_o_clippath;
    }

    ns_o::CT_ClipPath* CT_Arc::ChildGroup_1::mutable_o_clippath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_clippath = true;
    if (!m_o_clippath)
    {
        m_o_clippath = new ns_o::CT_ClipPath();
    }
    return m_o_clippath;
    }

    const ns_o::CT_ClipPath& CT_Arc::ChildGroup_1::get_o_clippath() const
    {    
    if (m_o_clippath)
    {
        return *m_o_clippath;
    }
    return ns_o::CT_ClipPath::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_o_signatureline() const
    {    
    return m_has_o_signatureline;
    }

    ns_o::CT_SignatureLine* CT_Arc::ChildGroup_1::mutable_o_signatureline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_signatureline = true;
    if (!m_o_signatureline)
    {
        m_o_signatureline = new ns_o::CT_SignatureLine();
    }
    return m_o_signatureline;
    }

    const ns_o::CT_SignatureLine& CT_Arc::ChildGroup_1::get_o_signatureline() const
    {    
    if (m_o_signatureline)
    {
        return *m_o_signatureline;
    }
    return ns_o::CT_SignatureLine::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_w10_wrap() const
    {    
    return m_has_w10_wrap;
    }

    ns_w10::CT_Wrap* CT_Arc::ChildGroup_1::mutable_w10_wrap()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_wrap = true;
    if (!m_w10_wrap)
    {
        m_w10_wrap = new ns_w10::CT_Wrap();
    }
    return m_w10_wrap;
    }

    const ns_w10::CT_Wrap& CT_Arc::ChildGroup_1::get_w10_wrap() const
    {    
    if (m_w10_wrap)
    {
        return *m_w10_wrap;
    }
    return ns_w10::CT_Wrap::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_w10_anchorlock() const
    {    
    return m_has_w10_anchorlock;
    }

    ns_w10::CT_AnchorLock* CT_Arc::ChildGroup_1::mutable_w10_anchorlock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_anchorlock = true;
    if (!m_w10_anchorlock)
    {
        m_w10_anchorlock = new ns_w10::CT_AnchorLock();
    }
    return m_w10_anchorlock;
    }

    const ns_w10::CT_AnchorLock& CT_Arc::ChildGroup_1::get_w10_anchorlock() const
    {    
    if (m_w10_anchorlock)
    {
        return *m_w10_anchorlock;
    }
    return ns_w10::CT_AnchorLock::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_w10_bordertop() const
    {    
    return m_has_w10_bordertop;
    }

    ns_w10::CT_Border* CT_Arc::ChildGroup_1::mutable_w10_bordertop()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_bordertop = true;
    if (!m_w10_bordertop)
    {
        m_w10_bordertop = new ns_w10::CT_Border();
    }
    return m_w10_bordertop;
    }

    const ns_w10::CT_Border& CT_Arc::ChildGroup_1::get_w10_bordertop() const
    {    
    if (m_w10_bordertop)
    {
        return *m_w10_bordertop;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_w10_borderbottom() const
    {    
    return m_has_w10_borderbottom;
    }

    ns_w10::CT_Border* CT_Arc::ChildGroup_1::mutable_w10_borderbottom()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderbottom = true;
    if (!m_w10_borderbottom)
    {
        m_w10_borderbottom = new ns_w10::CT_Border();
    }
    return m_w10_borderbottom;
    }

    const ns_w10::CT_Border& CT_Arc::ChildGroup_1::get_w10_borderbottom() const
    {    
    if (m_w10_borderbottom)
    {
        return *m_w10_borderbottom;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_w10_borderleft() const
    {    
    return m_has_w10_borderleft;
    }

    ns_w10::CT_Border* CT_Arc::ChildGroup_1::mutable_w10_borderleft()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderleft = true;
    if (!m_w10_borderleft)
    {
        m_w10_borderleft = new ns_w10::CT_Border();
    }
    return m_w10_borderleft;
    }

    const ns_w10::CT_Border& CT_Arc::ChildGroup_1::get_w10_borderleft() const
    {    
    if (m_w10_borderleft)
    {
        return *m_w10_borderleft;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_w10_borderright() const
    {    
    return m_has_w10_borderright;
    }

    ns_w10::CT_Border* CT_Arc::ChildGroup_1::mutable_w10_borderright()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderright = true;
    if (!m_w10_borderright)
    {
        m_w10_borderright = new ns_w10::CT_Border();
    }
    return m_w10_borderright;
    }

    const ns_w10::CT_Border& CT_Arc::ChildGroup_1::get_w10_borderright() const
    {    
    if (m_w10_borderright)
    {
        return *m_w10_borderright;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_x_ClientData() const
    {    
    return m_has_x_ClientData;
    }

    ns_x::CT_ClientData* CT_Arc::ChildGroup_1::mutable_x_ClientData()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_x_ClientData = true;
    if (!m_x_ClientData)
    {
        m_x_ClientData = new ns_x::CT_ClientData();
    }
    return m_x_ClientData;
    }

    const ns_x::CT_ClientData& CT_Arc::ChildGroup_1::get_x_ClientData() const
    {    
    if (m_x_ClientData)
    {
        return *m_x_ClientData;
    }
    return ns_x::CT_ClientData::default_instance();
    }

    bool CT_Arc::ChildGroup_1::has_pvml_textdata() const
    {    
    return m_has_pvml_textdata;
    }

    ns_pvml::CT_Rel* CT_Arc::ChildGroup_1::mutable_pvml_textdata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = true;
    if (!m_pvml_textdata)
    {
        m_pvml_textdata = new ns_pvml::CT_Rel();
    }
    return m_pvml_textdata;
    }

    const ns_pvml::CT_Rel& CT_Arc::ChildGroup_1::get_pvml_textdata() const
    {    
    if (m_pvml_textdata)
    {
        return *m_pvml_textdata;
    }
    return ns_pvml::CT_Rel::default_instance();
    }

CT_Arc* CT_Arc::default_instance_ = NULL;

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
                (*iter)->get_path().toXmlElem("path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("o:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("o:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("o:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("o:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("o:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("o:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("w10:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("w10:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("w10:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("w10:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("w10:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("w10:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("x:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("pvml:textdata", "", _outStream);
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


    // CT_Curve::ChildGroup_1
    bool CT_Curve::ChildGroup_1::has_path() const
    {    
    return m_has_path;
    }

    CT_Path* CT_Curve::ChildGroup_1::mutable_path()
    {    
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_path = true;
    if (!m_path)
    {
        m_path = new CT_Path();
    }
    return m_path;
    }

    const CT_Path& CT_Curve::ChildGroup_1::get_path() const
    {    
    if (m_path)
    {
        return *m_path;
    }
    return CT_Path::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_formulas() const
    {    
    return m_has_formulas;
    }

    CT_Formulas* CT_Curve::ChildGroup_1::mutable_formulas()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_formulas = true;
    if (!m_formulas)
    {
        m_formulas = new CT_Formulas();
    }
    return m_formulas;
    }

    const CT_Formulas& CT_Curve::ChildGroup_1::get_formulas() const
    {    
    if (m_formulas)
    {
        return *m_formulas;
    }
    return CT_Formulas::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_handles() const
    {    
    return m_has_handles;
    }

    CT_Handles* CT_Curve::ChildGroup_1::mutable_handles()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_handles = true;
    if (!m_handles)
    {
        m_handles = new CT_Handles();
    }
    return m_handles;
    }

    const CT_Handles& CT_Curve::ChildGroup_1::get_handles() const
    {    
    if (m_handles)
    {
        return *m_handles;
    }
    return CT_Handles::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Curve::ChildGroup_1::mutable_fill()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Curve::ChildGroup_1::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_stroke() const
    {    
    return m_has_stroke;
    }

    CT_Stroke* CT_Curve::ChildGroup_1::mutable_stroke()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_stroke = true;
    if (!m_stroke)
    {
        m_stroke = new CT_Stroke();
    }
    return m_stroke;
    }

    const CT_Stroke& CT_Curve::ChildGroup_1::get_stroke() const
    {    
    if (m_stroke)
    {
        return *m_stroke;
    }
    return CT_Stroke::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_shadow() const
    {    
    return m_has_shadow;
    }

    CT_Shadow* CT_Curve::ChildGroup_1::mutable_shadow()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_shadow = true;
    if (!m_shadow)
    {
        m_shadow = new CT_Shadow();
    }
    return m_shadow;
    }

    const CT_Shadow& CT_Curve::ChildGroup_1::get_shadow() const
    {    
    if (m_shadow)
    {
        return *m_shadow;
    }
    return CT_Shadow::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_textbox() const
    {    
    return m_has_textbox;
    }

    CT_Textbox* CT_Curve::ChildGroup_1::mutable_textbox()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textbox = true;
    if (!m_textbox)
    {
        m_textbox = new CT_Textbox();
    }
    return m_textbox;
    }

    const CT_Textbox& CT_Curve::ChildGroup_1::get_textbox() const
    {    
    if (m_textbox)
    {
        return *m_textbox;
    }
    return CT_Textbox::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_textpath() const
    {    
    return m_has_textpath;
    }

    CT_TextPath* CT_Curve::ChildGroup_1::mutable_textpath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textpath = true;
    if (!m_textpath)
    {
        m_textpath = new CT_TextPath();
    }
    return m_textpath;
    }

    const CT_TextPath& CT_Curve::ChildGroup_1::get_textpath() const
    {    
    if (m_textpath)
    {
        return *m_textpath;
    }
    return CT_TextPath::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_imagedata() const
    {    
    return m_has_imagedata;
    }

    CT_ImageData* CT_Curve::ChildGroup_1::mutable_imagedata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_imagedata = true;
    if (!m_imagedata)
    {
        m_imagedata = new CT_ImageData();
    }
    return m_imagedata;
    }

    const CT_ImageData& CT_Curve::ChildGroup_1::get_imagedata() const
    {    
    if (m_imagedata)
    {
        return *m_imagedata;
    }
    return CT_ImageData::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_o_skew() const
    {    
    return m_has_o_skew;
    }

    ns_o::CT_Skew* CT_Curve::ChildGroup_1::mutable_o_skew()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_skew = true;
    if (!m_o_skew)
    {
        m_o_skew = new ns_o::CT_Skew();
    }
    return m_o_skew;
    }

    const ns_o::CT_Skew& CT_Curve::ChildGroup_1::get_o_skew() const
    {    
    if (m_o_skew)
    {
        return *m_o_skew;
    }
    return ns_o::CT_Skew::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_o_extrusion() const
    {    
    return m_has_o_extrusion;
    }

    ns_o::CT_Extrusion* CT_Curve::ChildGroup_1::mutable_o_extrusion()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_extrusion = true;
    if (!m_o_extrusion)
    {
        m_o_extrusion = new ns_o::CT_Extrusion();
    }
    return m_o_extrusion;
    }

    const ns_o::CT_Extrusion& CT_Curve::ChildGroup_1::get_o_extrusion() const
    {    
    if (m_o_extrusion)
    {
        return *m_o_extrusion;
    }
    return ns_o::CT_Extrusion::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_o_callout() const
    {    
    return m_has_o_callout;
    }

    ns_o::CT_Callout* CT_Curve::ChildGroup_1::mutable_o_callout()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_callout = true;
    if (!m_o_callout)
    {
        m_o_callout = new ns_o::CT_Callout();
    }
    return m_o_callout;
    }

    const ns_o::CT_Callout& CT_Curve::ChildGroup_1::get_o_callout() const
    {    
    if (m_o_callout)
    {
        return *m_o_callout;
    }
    return ns_o::CT_Callout::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_o_lock() const
    {    
    return m_has_o_lock;
    }

    ns_o::CT_Lock* CT_Curve::ChildGroup_1::mutable_o_lock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_lock = true;
    if (!m_o_lock)
    {
        m_o_lock = new ns_o::CT_Lock();
    }
    return m_o_lock;
    }

    const ns_o::CT_Lock& CT_Curve::ChildGroup_1::get_o_lock() const
    {    
    if (m_o_lock)
    {
        return *m_o_lock;
    }
    return ns_o::CT_Lock::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_o_clippath() const
    {    
    return m_has_o_clippath;
    }

    ns_o::CT_ClipPath* CT_Curve::ChildGroup_1::mutable_o_clippath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_clippath = true;
    if (!m_o_clippath)
    {
        m_o_clippath = new ns_o::CT_ClipPath();
    }
    return m_o_clippath;
    }

    const ns_o::CT_ClipPath& CT_Curve::ChildGroup_1::get_o_clippath() const
    {    
    if (m_o_clippath)
    {
        return *m_o_clippath;
    }
    return ns_o::CT_ClipPath::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_o_signatureline() const
    {    
    return m_has_o_signatureline;
    }

    ns_o::CT_SignatureLine* CT_Curve::ChildGroup_1::mutable_o_signatureline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_signatureline = true;
    if (!m_o_signatureline)
    {
        m_o_signatureline = new ns_o::CT_SignatureLine();
    }
    return m_o_signatureline;
    }

    const ns_o::CT_SignatureLine& CT_Curve::ChildGroup_1::get_o_signatureline() const
    {    
    if (m_o_signatureline)
    {
        return *m_o_signatureline;
    }
    return ns_o::CT_SignatureLine::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_w10_wrap() const
    {    
    return m_has_w10_wrap;
    }

    ns_w10::CT_Wrap* CT_Curve::ChildGroup_1::mutable_w10_wrap()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_wrap = true;
    if (!m_w10_wrap)
    {
        m_w10_wrap = new ns_w10::CT_Wrap();
    }
    return m_w10_wrap;
    }

    const ns_w10::CT_Wrap& CT_Curve::ChildGroup_1::get_w10_wrap() const
    {    
    if (m_w10_wrap)
    {
        return *m_w10_wrap;
    }
    return ns_w10::CT_Wrap::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_w10_anchorlock() const
    {    
    return m_has_w10_anchorlock;
    }

    ns_w10::CT_AnchorLock* CT_Curve::ChildGroup_1::mutable_w10_anchorlock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_anchorlock = true;
    if (!m_w10_anchorlock)
    {
        m_w10_anchorlock = new ns_w10::CT_AnchorLock();
    }
    return m_w10_anchorlock;
    }

    const ns_w10::CT_AnchorLock& CT_Curve::ChildGroup_1::get_w10_anchorlock() const
    {    
    if (m_w10_anchorlock)
    {
        return *m_w10_anchorlock;
    }
    return ns_w10::CT_AnchorLock::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_w10_bordertop() const
    {    
    return m_has_w10_bordertop;
    }

    ns_w10::CT_Border* CT_Curve::ChildGroup_1::mutable_w10_bordertop()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_bordertop = true;
    if (!m_w10_bordertop)
    {
        m_w10_bordertop = new ns_w10::CT_Border();
    }
    return m_w10_bordertop;
    }

    const ns_w10::CT_Border& CT_Curve::ChildGroup_1::get_w10_bordertop() const
    {    
    if (m_w10_bordertop)
    {
        return *m_w10_bordertop;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_w10_borderbottom() const
    {    
    return m_has_w10_borderbottom;
    }

    ns_w10::CT_Border* CT_Curve::ChildGroup_1::mutable_w10_borderbottom()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderbottom = true;
    if (!m_w10_borderbottom)
    {
        m_w10_borderbottom = new ns_w10::CT_Border();
    }
    return m_w10_borderbottom;
    }

    const ns_w10::CT_Border& CT_Curve::ChildGroup_1::get_w10_borderbottom() const
    {    
    if (m_w10_borderbottom)
    {
        return *m_w10_borderbottom;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_w10_borderleft() const
    {    
    return m_has_w10_borderleft;
    }

    ns_w10::CT_Border* CT_Curve::ChildGroup_1::mutable_w10_borderleft()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderleft = true;
    if (!m_w10_borderleft)
    {
        m_w10_borderleft = new ns_w10::CT_Border();
    }
    return m_w10_borderleft;
    }

    const ns_w10::CT_Border& CT_Curve::ChildGroup_1::get_w10_borderleft() const
    {    
    if (m_w10_borderleft)
    {
        return *m_w10_borderleft;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_w10_borderright() const
    {    
    return m_has_w10_borderright;
    }

    ns_w10::CT_Border* CT_Curve::ChildGroup_1::mutable_w10_borderright()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderright = true;
    if (!m_w10_borderright)
    {
        m_w10_borderright = new ns_w10::CT_Border();
    }
    return m_w10_borderright;
    }

    const ns_w10::CT_Border& CT_Curve::ChildGroup_1::get_w10_borderright() const
    {    
    if (m_w10_borderright)
    {
        return *m_w10_borderright;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_x_ClientData() const
    {    
    return m_has_x_ClientData;
    }

    ns_x::CT_ClientData* CT_Curve::ChildGroup_1::mutable_x_ClientData()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_x_ClientData = true;
    if (!m_x_ClientData)
    {
        m_x_ClientData = new ns_x::CT_ClientData();
    }
    return m_x_ClientData;
    }

    const ns_x::CT_ClientData& CT_Curve::ChildGroup_1::get_x_ClientData() const
    {    
    if (m_x_ClientData)
    {
        return *m_x_ClientData;
    }
    return ns_x::CT_ClientData::default_instance();
    }

    bool CT_Curve::ChildGroup_1::has_pvml_textdata() const
    {    
    return m_has_pvml_textdata;
    }

    ns_pvml::CT_Rel* CT_Curve::ChildGroup_1::mutable_pvml_textdata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = true;
    if (!m_pvml_textdata)
    {
        m_pvml_textdata = new ns_pvml::CT_Rel();
    }
    return m_pvml_textdata;
    }

    const ns_pvml::CT_Rel& CT_Curve::ChildGroup_1::get_pvml_textdata() const
    {    
    if (m_pvml_textdata)
    {
        return *m_pvml_textdata;
    }
    return ns_pvml::CT_Rel::default_instance();
    }

CT_Curve* CT_Curve::default_instance_ = NULL;

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
                (*iter)->get_path().toXmlElem("path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("o:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("o:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("o:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("o:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("o:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("o:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("w10:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("w10:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("w10:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("w10:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("w10:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("w10:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("x:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("pvml:textdata", "", _outStream);
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


    // CT_Image::ChildGroup_1
    bool CT_Image::ChildGroup_1::has_path() const
    {    
    return m_has_path;
    }

    CT_Path* CT_Image::ChildGroup_1::mutable_path()
    {    
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_path = true;
    if (!m_path)
    {
        m_path = new CT_Path();
    }
    return m_path;
    }

    const CT_Path& CT_Image::ChildGroup_1::get_path() const
    {    
    if (m_path)
    {
        return *m_path;
    }
    return CT_Path::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_formulas() const
    {    
    return m_has_formulas;
    }

    CT_Formulas* CT_Image::ChildGroup_1::mutable_formulas()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_formulas = true;
    if (!m_formulas)
    {
        m_formulas = new CT_Formulas();
    }
    return m_formulas;
    }

    const CT_Formulas& CT_Image::ChildGroup_1::get_formulas() const
    {    
    if (m_formulas)
    {
        return *m_formulas;
    }
    return CT_Formulas::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_handles() const
    {    
    return m_has_handles;
    }

    CT_Handles* CT_Image::ChildGroup_1::mutable_handles()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_handles = true;
    if (!m_handles)
    {
        m_handles = new CT_Handles();
    }
    return m_handles;
    }

    const CT_Handles& CT_Image::ChildGroup_1::get_handles() const
    {    
    if (m_handles)
    {
        return *m_handles;
    }
    return CT_Handles::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Image::ChildGroup_1::mutable_fill()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Image::ChildGroup_1::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_stroke() const
    {    
    return m_has_stroke;
    }

    CT_Stroke* CT_Image::ChildGroup_1::mutable_stroke()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_stroke = true;
    if (!m_stroke)
    {
        m_stroke = new CT_Stroke();
    }
    return m_stroke;
    }

    const CT_Stroke& CT_Image::ChildGroup_1::get_stroke() const
    {    
    if (m_stroke)
    {
        return *m_stroke;
    }
    return CT_Stroke::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_shadow() const
    {    
    return m_has_shadow;
    }

    CT_Shadow* CT_Image::ChildGroup_1::mutable_shadow()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_shadow = true;
    if (!m_shadow)
    {
        m_shadow = new CT_Shadow();
    }
    return m_shadow;
    }

    const CT_Shadow& CT_Image::ChildGroup_1::get_shadow() const
    {    
    if (m_shadow)
    {
        return *m_shadow;
    }
    return CT_Shadow::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_textbox() const
    {    
    return m_has_textbox;
    }

    CT_Textbox* CT_Image::ChildGroup_1::mutable_textbox()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textbox = true;
    if (!m_textbox)
    {
        m_textbox = new CT_Textbox();
    }
    return m_textbox;
    }

    const CT_Textbox& CT_Image::ChildGroup_1::get_textbox() const
    {    
    if (m_textbox)
    {
        return *m_textbox;
    }
    return CT_Textbox::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_textpath() const
    {    
    return m_has_textpath;
    }

    CT_TextPath* CT_Image::ChildGroup_1::mutable_textpath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textpath = true;
    if (!m_textpath)
    {
        m_textpath = new CT_TextPath();
    }
    return m_textpath;
    }

    const CT_TextPath& CT_Image::ChildGroup_1::get_textpath() const
    {    
    if (m_textpath)
    {
        return *m_textpath;
    }
    return CT_TextPath::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_imagedata() const
    {    
    return m_has_imagedata;
    }

    CT_ImageData* CT_Image::ChildGroup_1::mutable_imagedata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_imagedata = true;
    if (!m_imagedata)
    {
        m_imagedata = new CT_ImageData();
    }
    return m_imagedata;
    }

    const CT_ImageData& CT_Image::ChildGroup_1::get_imagedata() const
    {    
    if (m_imagedata)
    {
        return *m_imagedata;
    }
    return CT_ImageData::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_o_skew() const
    {    
    return m_has_o_skew;
    }

    ns_o::CT_Skew* CT_Image::ChildGroup_1::mutable_o_skew()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_skew = true;
    if (!m_o_skew)
    {
        m_o_skew = new ns_o::CT_Skew();
    }
    return m_o_skew;
    }

    const ns_o::CT_Skew& CT_Image::ChildGroup_1::get_o_skew() const
    {    
    if (m_o_skew)
    {
        return *m_o_skew;
    }
    return ns_o::CT_Skew::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_o_extrusion() const
    {    
    return m_has_o_extrusion;
    }

    ns_o::CT_Extrusion* CT_Image::ChildGroup_1::mutable_o_extrusion()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_extrusion = true;
    if (!m_o_extrusion)
    {
        m_o_extrusion = new ns_o::CT_Extrusion();
    }
    return m_o_extrusion;
    }

    const ns_o::CT_Extrusion& CT_Image::ChildGroup_1::get_o_extrusion() const
    {    
    if (m_o_extrusion)
    {
        return *m_o_extrusion;
    }
    return ns_o::CT_Extrusion::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_o_callout() const
    {    
    return m_has_o_callout;
    }

    ns_o::CT_Callout* CT_Image::ChildGroup_1::mutable_o_callout()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_callout = true;
    if (!m_o_callout)
    {
        m_o_callout = new ns_o::CT_Callout();
    }
    return m_o_callout;
    }

    const ns_o::CT_Callout& CT_Image::ChildGroup_1::get_o_callout() const
    {    
    if (m_o_callout)
    {
        return *m_o_callout;
    }
    return ns_o::CT_Callout::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_o_lock() const
    {    
    return m_has_o_lock;
    }

    ns_o::CT_Lock* CT_Image::ChildGroup_1::mutable_o_lock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_lock = true;
    if (!m_o_lock)
    {
        m_o_lock = new ns_o::CT_Lock();
    }
    return m_o_lock;
    }

    const ns_o::CT_Lock& CT_Image::ChildGroup_1::get_o_lock() const
    {    
    if (m_o_lock)
    {
        return *m_o_lock;
    }
    return ns_o::CT_Lock::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_o_clippath() const
    {    
    return m_has_o_clippath;
    }

    ns_o::CT_ClipPath* CT_Image::ChildGroup_1::mutable_o_clippath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_clippath = true;
    if (!m_o_clippath)
    {
        m_o_clippath = new ns_o::CT_ClipPath();
    }
    return m_o_clippath;
    }

    const ns_o::CT_ClipPath& CT_Image::ChildGroup_1::get_o_clippath() const
    {    
    if (m_o_clippath)
    {
        return *m_o_clippath;
    }
    return ns_o::CT_ClipPath::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_o_signatureline() const
    {    
    return m_has_o_signatureline;
    }

    ns_o::CT_SignatureLine* CT_Image::ChildGroup_1::mutable_o_signatureline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_signatureline = true;
    if (!m_o_signatureline)
    {
        m_o_signatureline = new ns_o::CT_SignatureLine();
    }
    return m_o_signatureline;
    }

    const ns_o::CT_SignatureLine& CT_Image::ChildGroup_1::get_o_signatureline() const
    {    
    if (m_o_signatureline)
    {
        return *m_o_signatureline;
    }
    return ns_o::CT_SignatureLine::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_w10_wrap() const
    {    
    return m_has_w10_wrap;
    }

    ns_w10::CT_Wrap* CT_Image::ChildGroup_1::mutable_w10_wrap()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_wrap = true;
    if (!m_w10_wrap)
    {
        m_w10_wrap = new ns_w10::CT_Wrap();
    }
    return m_w10_wrap;
    }

    const ns_w10::CT_Wrap& CT_Image::ChildGroup_1::get_w10_wrap() const
    {    
    if (m_w10_wrap)
    {
        return *m_w10_wrap;
    }
    return ns_w10::CT_Wrap::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_w10_anchorlock() const
    {    
    return m_has_w10_anchorlock;
    }

    ns_w10::CT_AnchorLock* CT_Image::ChildGroup_1::mutable_w10_anchorlock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_anchorlock = true;
    if (!m_w10_anchorlock)
    {
        m_w10_anchorlock = new ns_w10::CT_AnchorLock();
    }
    return m_w10_anchorlock;
    }

    const ns_w10::CT_AnchorLock& CT_Image::ChildGroup_1::get_w10_anchorlock() const
    {    
    if (m_w10_anchorlock)
    {
        return *m_w10_anchorlock;
    }
    return ns_w10::CT_AnchorLock::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_w10_bordertop() const
    {    
    return m_has_w10_bordertop;
    }

    ns_w10::CT_Border* CT_Image::ChildGroup_1::mutable_w10_bordertop()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_bordertop = true;
    if (!m_w10_bordertop)
    {
        m_w10_bordertop = new ns_w10::CT_Border();
    }
    return m_w10_bordertop;
    }

    const ns_w10::CT_Border& CT_Image::ChildGroup_1::get_w10_bordertop() const
    {    
    if (m_w10_bordertop)
    {
        return *m_w10_bordertop;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_w10_borderbottom() const
    {    
    return m_has_w10_borderbottom;
    }

    ns_w10::CT_Border* CT_Image::ChildGroup_1::mutable_w10_borderbottom()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderbottom = true;
    if (!m_w10_borderbottom)
    {
        m_w10_borderbottom = new ns_w10::CT_Border();
    }
    return m_w10_borderbottom;
    }

    const ns_w10::CT_Border& CT_Image::ChildGroup_1::get_w10_borderbottom() const
    {    
    if (m_w10_borderbottom)
    {
        return *m_w10_borderbottom;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_w10_borderleft() const
    {    
    return m_has_w10_borderleft;
    }

    ns_w10::CT_Border* CT_Image::ChildGroup_1::mutable_w10_borderleft()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderleft = true;
    if (!m_w10_borderleft)
    {
        m_w10_borderleft = new ns_w10::CT_Border();
    }
    return m_w10_borderleft;
    }

    const ns_w10::CT_Border& CT_Image::ChildGroup_1::get_w10_borderleft() const
    {    
    if (m_w10_borderleft)
    {
        return *m_w10_borderleft;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_w10_borderright() const
    {    
    return m_has_w10_borderright;
    }

    ns_w10::CT_Border* CT_Image::ChildGroup_1::mutable_w10_borderright()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderright = true;
    if (!m_w10_borderright)
    {
        m_w10_borderright = new ns_w10::CT_Border();
    }
    return m_w10_borderright;
    }

    const ns_w10::CT_Border& CT_Image::ChildGroup_1::get_w10_borderright() const
    {    
    if (m_w10_borderright)
    {
        return *m_w10_borderright;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_x_ClientData() const
    {    
    return m_has_x_ClientData;
    }

    ns_x::CT_ClientData* CT_Image::ChildGroup_1::mutable_x_ClientData()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_x_ClientData = true;
    if (!m_x_ClientData)
    {
        m_x_ClientData = new ns_x::CT_ClientData();
    }
    return m_x_ClientData;
    }

    const ns_x::CT_ClientData& CT_Image::ChildGroup_1::get_x_ClientData() const
    {    
    if (m_x_ClientData)
    {
        return *m_x_ClientData;
    }
    return ns_x::CT_ClientData::default_instance();
    }

    bool CT_Image::ChildGroup_1::has_pvml_textdata() const
    {    
    return m_has_pvml_textdata;
    }

    ns_pvml::CT_Rel* CT_Image::ChildGroup_1::mutable_pvml_textdata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = true;
    if (!m_pvml_textdata)
    {
        m_pvml_textdata = new ns_pvml::CT_Rel();
    }
    return m_pvml_textdata;
    }

    const ns_pvml::CT_Rel& CT_Image::ChildGroup_1::get_pvml_textdata() const
    {    
    if (m_pvml_textdata)
    {
        return *m_pvml_textdata;
    }
    return ns_pvml::CT_Rel::default_instance();
    }

CT_Image* CT_Image::default_instance_ = NULL;

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
                (*iter)->get_path().toXmlElem("path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("o:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("o:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("o:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("o:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("o:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("o:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("w10:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("w10:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("w10:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("w10:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("w10:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("w10:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("x:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("pvml:textdata", "", _outStream);
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


    // CT_Line::ChildGroup_1
    bool CT_Line::ChildGroup_1::has_path() const
    {    
    return m_has_path;
    }

    CT_Path* CT_Line::ChildGroup_1::mutable_path()
    {    
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_path = true;
    if (!m_path)
    {
        m_path = new CT_Path();
    }
    return m_path;
    }

    const CT_Path& CT_Line::ChildGroup_1::get_path() const
    {    
    if (m_path)
    {
        return *m_path;
    }
    return CT_Path::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_formulas() const
    {    
    return m_has_formulas;
    }

    CT_Formulas* CT_Line::ChildGroup_1::mutable_formulas()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_formulas = true;
    if (!m_formulas)
    {
        m_formulas = new CT_Formulas();
    }
    return m_formulas;
    }

    const CT_Formulas& CT_Line::ChildGroup_1::get_formulas() const
    {    
    if (m_formulas)
    {
        return *m_formulas;
    }
    return CT_Formulas::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_handles() const
    {    
    return m_has_handles;
    }

    CT_Handles* CT_Line::ChildGroup_1::mutable_handles()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_handles = true;
    if (!m_handles)
    {
        m_handles = new CT_Handles();
    }
    return m_handles;
    }

    const CT_Handles& CT_Line::ChildGroup_1::get_handles() const
    {    
    if (m_handles)
    {
        return *m_handles;
    }
    return CT_Handles::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Line::ChildGroup_1::mutable_fill()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Line::ChildGroup_1::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_stroke() const
    {    
    return m_has_stroke;
    }

    CT_Stroke* CT_Line::ChildGroup_1::mutable_stroke()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_stroke = true;
    if (!m_stroke)
    {
        m_stroke = new CT_Stroke();
    }
    return m_stroke;
    }

    const CT_Stroke& CT_Line::ChildGroup_1::get_stroke() const
    {    
    if (m_stroke)
    {
        return *m_stroke;
    }
    return CT_Stroke::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_shadow() const
    {    
    return m_has_shadow;
    }

    CT_Shadow* CT_Line::ChildGroup_1::mutable_shadow()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_shadow = true;
    if (!m_shadow)
    {
        m_shadow = new CT_Shadow();
    }
    return m_shadow;
    }

    const CT_Shadow& CT_Line::ChildGroup_1::get_shadow() const
    {    
    if (m_shadow)
    {
        return *m_shadow;
    }
    return CT_Shadow::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_textbox() const
    {    
    return m_has_textbox;
    }

    CT_Textbox* CT_Line::ChildGroup_1::mutable_textbox()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textbox = true;
    if (!m_textbox)
    {
        m_textbox = new CT_Textbox();
    }
    return m_textbox;
    }

    const CT_Textbox& CT_Line::ChildGroup_1::get_textbox() const
    {    
    if (m_textbox)
    {
        return *m_textbox;
    }
    return CT_Textbox::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_textpath() const
    {    
    return m_has_textpath;
    }

    CT_TextPath* CT_Line::ChildGroup_1::mutable_textpath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textpath = true;
    if (!m_textpath)
    {
        m_textpath = new CT_TextPath();
    }
    return m_textpath;
    }

    const CT_TextPath& CT_Line::ChildGroup_1::get_textpath() const
    {    
    if (m_textpath)
    {
        return *m_textpath;
    }
    return CT_TextPath::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_imagedata() const
    {    
    return m_has_imagedata;
    }

    CT_ImageData* CT_Line::ChildGroup_1::mutable_imagedata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_imagedata = true;
    if (!m_imagedata)
    {
        m_imagedata = new CT_ImageData();
    }
    return m_imagedata;
    }

    const CT_ImageData& CT_Line::ChildGroup_1::get_imagedata() const
    {    
    if (m_imagedata)
    {
        return *m_imagedata;
    }
    return CT_ImageData::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_o_skew() const
    {    
    return m_has_o_skew;
    }

    ns_o::CT_Skew* CT_Line::ChildGroup_1::mutable_o_skew()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_skew = true;
    if (!m_o_skew)
    {
        m_o_skew = new ns_o::CT_Skew();
    }
    return m_o_skew;
    }

    const ns_o::CT_Skew& CT_Line::ChildGroup_1::get_o_skew() const
    {    
    if (m_o_skew)
    {
        return *m_o_skew;
    }
    return ns_o::CT_Skew::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_o_extrusion() const
    {    
    return m_has_o_extrusion;
    }

    ns_o::CT_Extrusion* CT_Line::ChildGroup_1::mutable_o_extrusion()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_extrusion = true;
    if (!m_o_extrusion)
    {
        m_o_extrusion = new ns_o::CT_Extrusion();
    }
    return m_o_extrusion;
    }

    const ns_o::CT_Extrusion& CT_Line::ChildGroup_1::get_o_extrusion() const
    {    
    if (m_o_extrusion)
    {
        return *m_o_extrusion;
    }
    return ns_o::CT_Extrusion::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_o_callout() const
    {    
    return m_has_o_callout;
    }

    ns_o::CT_Callout* CT_Line::ChildGroup_1::mutable_o_callout()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_callout = true;
    if (!m_o_callout)
    {
        m_o_callout = new ns_o::CT_Callout();
    }
    return m_o_callout;
    }

    const ns_o::CT_Callout& CT_Line::ChildGroup_1::get_o_callout() const
    {    
    if (m_o_callout)
    {
        return *m_o_callout;
    }
    return ns_o::CT_Callout::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_o_lock() const
    {    
    return m_has_o_lock;
    }

    ns_o::CT_Lock* CT_Line::ChildGroup_1::mutable_o_lock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_lock = true;
    if (!m_o_lock)
    {
        m_o_lock = new ns_o::CT_Lock();
    }
    return m_o_lock;
    }

    const ns_o::CT_Lock& CT_Line::ChildGroup_1::get_o_lock() const
    {    
    if (m_o_lock)
    {
        return *m_o_lock;
    }
    return ns_o::CT_Lock::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_o_clippath() const
    {    
    return m_has_o_clippath;
    }

    ns_o::CT_ClipPath* CT_Line::ChildGroup_1::mutable_o_clippath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_clippath = true;
    if (!m_o_clippath)
    {
        m_o_clippath = new ns_o::CT_ClipPath();
    }
    return m_o_clippath;
    }

    const ns_o::CT_ClipPath& CT_Line::ChildGroup_1::get_o_clippath() const
    {    
    if (m_o_clippath)
    {
        return *m_o_clippath;
    }
    return ns_o::CT_ClipPath::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_o_signatureline() const
    {    
    return m_has_o_signatureline;
    }

    ns_o::CT_SignatureLine* CT_Line::ChildGroup_1::mutable_o_signatureline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_signatureline = true;
    if (!m_o_signatureline)
    {
        m_o_signatureline = new ns_o::CT_SignatureLine();
    }
    return m_o_signatureline;
    }

    const ns_o::CT_SignatureLine& CT_Line::ChildGroup_1::get_o_signatureline() const
    {    
    if (m_o_signatureline)
    {
        return *m_o_signatureline;
    }
    return ns_o::CT_SignatureLine::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_w10_wrap() const
    {    
    return m_has_w10_wrap;
    }

    ns_w10::CT_Wrap* CT_Line::ChildGroup_1::mutable_w10_wrap()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_wrap = true;
    if (!m_w10_wrap)
    {
        m_w10_wrap = new ns_w10::CT_Wrap();
    }
    return m_w10_wrap;
    }

    const ns_w10::CT_Wrap& CT_Line::ChildGroup_1::get_w10_wrap() const
    {    
    if (m_w10_wrap)
    {
        return *m_w10_wrap;
    }
    return ns_w10::CT_Wrap::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_w10_anchorlock() const
    {    
    return m_has_w10_anchorlock;
    }

    ns_w10::CT_AnchorLock* CT_Line::ChildGroup_1::mutable_w10_anchorlock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_anchorlock = true;
    if (!m_w10_anchorlock)
    {
        m_w10_anchorlock = new ns_w10::CT_AnchorLock();
    }
    return m_w10_anchorlock;
    }

    const ns_w10::CT_AnchorLock& CT_Line::ChildGroup_1::get_w10_anchorlock() const
    {    
    if (m_w10_anchorlock)
    {
        return *m_w10_anchorlock;
    }
    return ns_w10::CT_AnchorLock::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_w10_bordertop() const
    {    
    return m_has_w10_bordertop;
    }

    ns_w10::CT_Border* CT_Line::ChildGroup_1::mutable_w10_bordertop()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_bordertop = true;
    if (!m_w10_bordertop)
    {
        m_w10_bordertop = new ns_w10::CT_Border();
    }
    return m_w10_bordertop;
    }

    const ns_w10::CT_Border& CT_Line::ChildGroup_1::get_w10_bordertop() const
    {    
    if (m_w10_bordertop)
    {
        return *m_w10_bordertop;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_w10_borderbottom() const
    {    
    return m_has_w10_borderbottom;
    }

    ns_w10::CT_Border* CT_Line::ChildGroup_1::mutable_w10_borderbottom()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderbottom = true;
    if (!m_w10_borderbottom)
    {
        m_w10_borderbottom = new ns_w10::CT_Border();
    }
    return m_w10_borderbottom;
    }

    const ns_w10::CT_Border& CT_Line::ChildGroup_1::get_w10_borderbottom() const
    {    
    if (m_w10_borderbottom)
    {
        return *m_w10_borderbottom;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_w10_borderleft() const
    {    
    return m_has_w10_borderleft;
    }

    ns_w10::CT_Border* CT_Line::ChildGroup_1::mutable_w10_borderleft()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderleft = true;
    if (!m_w10_borderleft)
    {
        m_w10_borderleft = new ns_w10::CT_Border();
    }
    return m_w10_borderleft;
    }

    const ns_w10::CT_Border& CT_Line::ChildGroup_1::get_w10_borderleft() const
    {    
    if (m_w10_borderleft)
    {
        return *m_w10_borderleft;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_w10_borderright() const
    {    
    return m_has_w10_borderright;
    }

    ns_w10::CT_Border* CT_Line::ChildGroup_1::mutable_w10_borderright()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderright = true;
    if (!m_w10_borderright)
    {
        m_w10_borderright = new ns_w10::CT_Border();
    }
    return m_w10_borderright;
    }

    const ns_w10::CT_Border& CT_Line::ChildGroup_1::get_w10_borderright() const
    {    
    if (m_w10_borderright)
    {
        return *m_w10_borderright;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_x_ClientData() const
    {    
    return m_has_x_ClientData;
    }

    ns_x::CT_ClientData* CT_Line::ChildGroup_1::mutable_x_ClientData()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_x_ClientData = true;
    if (!m_x_ClientData)
    {
        m_x_ClientData = new ns_x::CT_ClientData();
    }
    return m_x_ClientData;
    }

    const ns_x::CT_ClientData& CT_Line::ChildGroup_1::get_x_ClientData() const
    {    
    if (m_x_ClientData)
    {
        return *m_x_ClientData;
    }
    return ns_x::CT_ClientData::default_instance();
    }

    bool CT_Line::ChildGroup_1::has_pvml_textdata() const
    {    
    return m_has_pvml_textdata;
    }

    ns_pvml::CT_Rel* CT_Line::ChildGroup_1::mutable_pvml_textdata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = true;
    if (!m_pvml_textdata)
    {
        m_pvml_textdata = new ns_pvml::CT_Rel();
    }
    return m_pvml_textdata;
    }

    const ns_pvml::CT_Rel& CT_Line::ChildGroup_1::get_pvml_textdata() const
    {    
    if (m_pvml_textdata)
    {
        return *m_pvml_textdata;
    }
    return ns_pvml::CT_Rel::default_instance();
    }

CT_Line* CT_Line::default_instance_ = NULL;

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
                (*iter)->get_path().toXmlElem("path", "", _outStream);
            }
            else if ((*iter)->has_formulas())
            {
                (*iter)->get_formulas().toXmlElem("formulas", "", _outStream);
            }
            else if ((*iter)->has_handles())
            {
                (*iter)->get_handles().toXmlElem("handles", "", _outStream);
            }
            else if ((*iter)->has_fill())
            {
                (*iter)->get_fill().toXmlElem("fill", "", _outStream);
            }
            else if ((*iter)->has_stroke())
            {
                (*iter)->get_stroke().toXmlElem("stroke", "", _outStream);
            }
            else if ((*iter)->has_shadow())
            {
                (*iter)->get_shadow().toXmlElem("shadow", "", _outStream);
            }
            else if ((*iter)->has_textbox())
            {
                (*iter)->get_textbox().toXmlElem("textbox", "", _outStream);
            }
            else if ((*iter)->has_textpath())
            {
                (*iter)->get_textpath().toXmlElem("textpath", "", _outStream);
            }
            else if ((*iter)->has_imagedata())
            {
                (*iter)->get_imagedata().toXmlElem("imagedata", "", _outStream);
            }
            else if ((*iter)->has_o_skew())
            {
                (*iter)->get_o_skew().toXmlElem("o:skew", "", _outStream);
            }
            else if ((*iter)->has_o_extrusion())
            {
                (*iter)->get_o_extrusion().toXmlElem("o:extrusion", "", _outStream);
            }
            else if ((*iter)->has_o_callout())
            {
                (*iter)->get_o_callout().toXmlElem("o:callout", "", _outStream);
            }
            else if ((*iter)->has_o_lock())
            {
                (*iter)->get_o_lock().toXmlElem("o:lock", "", _outStream);
            }
            else if ((*iter)->has_o_clippath())
            {
                (*iter)->get_o_clippath().toXmlElem("o:clippath", "", _outStream);
            }
            else if ((*iter)->has_o_signatureline())
            {
                (*iter)->get_o_signatureline().toXmlElem("o:signatureline", "", _outStream);
            }
            else if ((*iter)->has_w10_wrap())
            {
                (*iter)->get_w10_wrap().toXmlElem("w10:wrap", "", _outStream);
            }
            else if ((*iter)->has_w10_anchorlock())
            {
                (*iter)->get_w10_anchorlock().toXmlElem("w10:anchorlock", "", _outStream);
            }
            else if ((*iter)->has_w10_bordertop())
            {
                (*iter)->get_w10_bordertop().toXmlElem("w10:bordertop", "", _outStream);
            }
            else if ((*iter)->has_w10_borderbottom())
            {
                (*iter)->get_w10_borderbottom().toXmlElem("w10:borderbottom", "", _outStream);
            }
            else if ((*iter)->has_w10_borderleft())
            {
                (*iter)->get_w10_borderleft().toXmlElem("w10:borderleft", "", _outStream);
            }
            else if ((*iter)->has_w10_borderright())
            {
                (*iter)->get_w10_borderright().toXmlElem("w10:borderright", "", _outStream);
            }
            else if ((*iter)->has_x_ClientData())
            {
                (*iter)->get_x_ClientData().toXmlElem("x:ClientData", "", _outStream);
            }
            else if ((*iter)->has_pvml_textdata())
            {
                (*iter)->get_pvml_textdata().toXmlElem("pvml:textdata", "", _outStream);
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


    // CT_Oval::ChildGroup_1
    bool CT_Oval::ChildGroup_1::has_path() const
    {    
    return m_has_path;
    }

    CT_Path* CT_Oval::ChildGroup_1::mutable_path()
    {    
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_path = true;
    if (!m_path)
    {
        m_path = new CT_Path();
    }
    return m_path;
    }

    const CT_Path& CT_Oval::ChildGroup_1::get_path() const
    {    
    if (m_path)
    {
        return *m_path;
    }
    return CT_Path::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_formulas() const
    {    
    return m_has_formulas;
    }

    CT_Formulas* CT_Oval::ChildGroup_1::mutable_formulas()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_formulas = true;
    if (!m_formulas)
    {
        m_formulas = new CT_Formulas();
    }
    return m_formulas;
    }

    const CT_Formulas& CT_Oval::ChildGroup_1::get_formulas() const
    {    
    if (m_formulas)
    {
        return *m_formulas;
    }
    return CT_Formulas::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_handles() const
    {    
    return m_has_handles;
    }

    CT_Handles* CT_Oval::ChildGroup_1::mutable_handles()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_handles = true;
    if (!m_handles)
    {
        m_handles = new CT_Handles();
    }
    return m_handles;
    }

    const CT_Handles& CT_Oval::ChildGroup_1::get_handles() const
    {    
    if (m_handles)
    {
        return *m_handles;
    }
    return CT_Handles::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_fill() const
    {    
    return m_has_fill;
    }

    CT_Fill* CT_Oval::ChildGroup_1::mutable_fill()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_fill = true;
    if (!m_fill)
    {
        m_fill = new CT_Fill();
    }
    return m_fill;
    }

    const CT_Fill& CT_Oval::ChildGroup_1::get_fill() const
    {    
    if (m_fill)
    {
        return *m_fill;
    }
    return CT_Fill::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_stroke() const
    {    
    return m_has_stroke;
    }

    CT_Stroke* CT_Oval::ChildGroup_1::mutable_stroke()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_stroke = true;
    if (!m_stroke)
    {
        m_stroke = new CT_Stroke();
    }
    return m_stroke;
    }

    const CT_Stroke& CT_Oval::ChildGroup_1::get_stroke() const
    {    
    if (m_stroke)
    {
        return *m_stroke;
    }
    return CT_Stroke::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_shadow() const
    {    
    return m_has_shadow;
    }

    CT_Shadow* CT_Oval::ChildGroup_1::mutable_shadow()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_shadow = true;
    if (!m_shadow)
    {
        m_shadow = new CT_Shadow();
    }
    return m_shadow;
    }

    const CT_Shadow& CT_Oval::ChildGroup_1::get_shadow() const
    {    
    if (m_shadow)
    {
        return *m_shadow;
    }
    return CT_Shadow::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_textbox() const
    {    
    return m_has_textbox;
    }

    CT_Textbox* CT_Oval::ChildGroup_1::mutable_textbox()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textbox = true;
    if (!m_textbox)
    {
        m_textbox = new CT_Textbox();
    }
    return m_textbox;
    }

    const CT_Textbox& CT_Oval::ChildGroup_1::get_textbox() const
    {    
    if (m_textbox)
    {
        return *m_textbox;
    }
    return CT_Textbox::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_textpath() const
    {    
    return m_has_textpath;
    }

    CT_TextPath* CT_Oval::ChildGroup_1::mutable_textpath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_textpath = true;
    if (!m_textpath)
    {
        m_textpath = new CT_TextPath();
    }
    return m_textpath;
    }

    const CT_TextPath& CT_Oval::ChildGroup_1::get_textpath() const
    {    
    if (m_textpath)
    {
        return *m_textpath;
    }
    return CT_TextPath::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_imagedata() const
    {    
    return m_has_imagedata;
    }

    CT_ImageData* CT_Oval::ChildGroup_1::mutable_imagedata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_imagedata = true;
    if (!m_imagedata)
    {
        m_imagedata = new CT_ImageData();
    }
    return m_imagedata;
    }

    const CT_ImageData& CT_Oval::ChildGroup_1::get_imagedata() const
    {    
    if (m_imagedata)
    {
        return *m_imagedata;
    }
    return CT_ImageData::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_o_skew() const
    {    
    return m_has_o_skew;
    }

    ns_o::CT_Skew* CT_Oval::ChildGroup_1::mutable_o_skew()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_skew = true;
    if (!m_o_skew)
    {
        m_o_skew = new ns_o::CT_Skew();
    }
    return m_o_skew;
    }

    const ns_o::CT_Skew& CT_Oval::ChildGroup_1::get_o_skew() const
    {    
    if (m_o_skew)
    {
        return *m_o_skew;
    }
    return ns_o::CT_Skew::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_o_extrusion() const
    {    
    return m_has_o_extrusion;
    }

    ns_o::CT_Extrusion* CT_Oval::ChildGroup_1::mutable_o_extrusion()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_extrusion = true;
    if (!m_o_extrusion)
    {
        m_o_extrusion = new ns_o::CT_Extrusion();
    }
    return m_o_extrusion;
    }

    const ns_o::CT_Extrusion& CT_Oval::ChildGroup_1::get_o_extrusion() const
    {    
    if (m_o_extrusion)
    {
        return *m_o_extrusion;
    }
    return ns_o::CT_Extrusion::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_o_callout() const
    {    
    return m_has_o_callout;
    }

    ns_o::CT_Callout* CT_Oval::ChildGroup_1::mutable_o_callout()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_callout = true;
    if (!m_o_callout)
    {
        m_o_callout = new ns_o::CT_Callout();
    }
    return m_o_callout;
    }

    const ns_o::CT_Callout& CT_Oval::ChildGroup_1::get_o_callout() const
    {    
    if (m_o_callout)
    {
        return *m_o_callout;
    }
    return ns_o::CT_Callout::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_o_lock() const
    {    
    return m_has_o_lock;
    }

    ns_o::CT_Lock* CT_Oval::ChildGroup_1::mutable_o_lock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_lock = true;
    if (!m_o_lock)
    {
        m_o_lock = new ns_o::CT_Lock();
    }
    return m_o_lock;
    }

    const ns_o::CT_Lock& CT_Oval::ChildGroup_1::get_o_lock() const
    {    
    if (m_o_lock)
    {
        return *m_o_lock;
    }
    return ns_o::CT_Lock::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_o_clippath() const
    {    
    return m_has_o_clippath;
    }

    ns_o::CT_ClipPath* CT_Oval::ChildGroup_1::mutable_o_clippath()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_clippath = true;
    if (!m_o_clippath)
    {
        m_o_clippath = new ns_o::CT_ClipPath();
    }
    return m_o_clippath;
    }

    const ns_o::CT_ClipPath& CT_Oval::ChildGroup_1::get_o_clippath() const
    {    
    if (m_o_clippath)
    {
        return *m_o_clippath;
    }
    return ns_o::CT_ClipPath::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_o_signatureline() const
    {    
    return m_has_o_signatureline;
    }

    ns_o::CT_SignatureLine* CT_Oval::ChildGroup_1::mutable_o_signatureline()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_o_signatureline = true;
    if (!m_o_signatureline)
    {
        m_o_signatureline = new ns_o::CT_SignatureLine();
    }
    return m_o_signatureline;
    }

    const ns_o::CT_SignatureLine& CT_Oval::ChildGroup_1::get_o_signatureline() const
    {    
    if (m_o_signatureline)
    {
        return *m_o_signatureline;
    }
    return ns_o::CT_SignatureLine::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_w10_wrap() const
    {    
    return m_has_w10_wrap;
    }

    ns_w10::CT_Wrap* CT_Oval::ChildGroup_1::mutable_w10_wrap()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_wrap = true;
    if (!m_w10_wrap)
    {
        m_w10_wrap = new ns_w10::CT_Wrap();
    }
    return m_w10_wrap;
    }

    const ns_w10::CT_Wrap& CT_Oval::ChildGroup_1::get_w10_wrap() const
    {    
    if (m_w10_wrap)
    {
        return *m_w10_wrap;
    }
    return ns_w10::CT_Wrap::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_w10_anchorlock() const
    {    
    return m_has_w10_anchorlock;
    }

    ns_w10::CT_AnchorLock* CT_Oval::ChildGroup_1::mutable_w10_anchorlock()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_anchorlock = true;
    if (!m_w10_anchorlock)
    {
        m_w10_anchorlock = new ns_w10::CT_AnchorLock();
    }
    return m_w10_anchorlock;
    }

    const ns_w10::CT_AnchorLock& CT_Oval::ChildGroup_1::get_w10_anchorlock() const
    {    
    if (m_w10_anchorlock)
    {
        return *m_w10_anchorlock;
    }
    return ns_w10::CT_AnchorLock::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_w10_bordertop() const
    {    
    return m_has_w10_bordertop;
    }

    ns_w10::CT_Border* CT_Oval::ChildGroup_1::mutable_w10_bordertop()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_bordertop = true;
    if (!m_w10_bordertop)
    {
        m_w10_bordertop = new ns_w10::CT_Border();
    }
    return m_w10_bordertop;
    }

    const ns_w10::CT_Border& CT_Oval::ChildGroup_1::get_w10_bordertop() const
    {    
    if (m_w10_bordertop)
    {
        return *m_w10_bordertop;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_w10_borderbottom() const
    {    
    return m_has_w10_borderbottom;
    }

    ns_w10::CT_Border* CT_Oval::ChildGroup_1::mutable_w10_borderbottom()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderbottom = true;
    if (!m_w10_borderbottom)
    {
        m_w10_borderbottom = new ns_w10::CT_Border();
    }
    return m_w10_borderbottom;
    }

    const ns_w10::CT_Border& CT_Oval::ChildGroup_1::get_w10_borderbottom() const
    {    
    if (m_w10_borderbottom)
    {
        return *m_w10_borderbottom;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_w10_borderleft() const
    {    
    return m_has_w10_borderleft;
    }

    ns_w10::CT_Border* CT_Oval::ChildGroup_1::mutable_w10_borderleft()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderleft = true;
    if (!m_w10_borderleft)
    {
        m_w10_borderleft = new ns_w10::CT_Border();
    }
    return m_w10_borderleft;
    }

    const ns_w10::CT_Border& CT_Oval::ChildGroup_1::get_w10_borderleft() const
    {    
    if (m_w10_borderleft)
    {
        return *m_w10_borderleft;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_w10_borderright() const
    {    
    return m_has_w10_borderright;
    }

    ns_w10::CT_Border* CT_Oval::ChildGroup_1::mutable_w10_borderright()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_x_ClientData = false;
    
    if (m_x_ClientData)
    {
        delete m_x_ClientData;
        m_x_ClientData = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_w10_borderright = true;
    if (!m_w10_borderright)
    {
        m_w10_borderright = new ns_w10::CT_Border();
    }
    return m_w10_borderright;
    }

    const ns_w10::CT_Border& CT_Oval::ChildGroup_1::get_w10_borderright() const
    {    
    if (m_w10_borderright)
    {
        return *m_w10_borderright;
    }
    return ns_w10::CT_Border::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_x_ClientData() const
    {    
    return m_has_x_ClientData;
    }

    ns_x::CT_ClientData* CT_Oval::ChildGroup_1::mutable_x_ClientData()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
        delete m_fill;
        m_fill = NULL;
    }
    ;
    
    m_has_stroke = false;
    
    if (m_stroke)
    {
        delete m_stroke;
        m_stroke = NULL;
    }
    ;
    
    m_has_shadow = false;
    
    if (m_shadow)
    {
        delete m_shadow;
        m_shadow = NULL;
    }
    ;
    
    m_has_textbox = false;
    
    if (m_textbox)
    {
        delete m_textbox;
        m_textbox = NULL;
    }
    ;
    
    m_has_textpath = false;
    
    if (m_textpath)
    {
        delete m_textpath;
        m_textpath = NULL;
    }
    ;
    
    m_has_imagedata = false;
    
    if (m_imagedata)
    {
        delete m_imagedata;
        m_imagedata = NULL;
    }
    ;
    
    m_has_o_skew = false;
    
    if (m_o_skew)
    {
        delete m_o_skew;
        m_o_skew = NULL;
    }
    ;
    
    m_has_o_extrusion = false;
    
    if (m_o_extrusion)
    {
        delete m_o_extrusion;
        m_o_extrusion = NULL;
    }
    ;
    
    m_has_o_callout = false;
    
    if (m_o_callout)
    {
        delete m_o_callout;
        m_o_callout = NULL;
    }
    ;
    
    m_has_o_lock = false;
    
    if (m_o_lock)
    {
        delete m_o_lock;
        m_o_lock = NULL;
    }
    ;
    
    m_has_o_clippath = false;
    
    if (m_o_clippath)
    {
        delete m_o_clippath;
        m_o_clippath = NULL;
    }
    ;
    
    m_has_o_signatureline = false;
    
    if (m_o_signatureline)
    {
        delete m_o_signatureline;
        m_o_signatureline = NULL;
    }
    ;
    
    m_has_w10_wrap = false;
    
    if (m_w10_wrap)
    {
        delete m_w10_wrap;
        m_w10_wrap = NULL;
    }
    ;
    
    m_has_w10_anchorlock = false;
    
    if (m_w10_anchorlock)
    {
        delete m_w10_anchorlock;
        m_w10_anchorlock = NULL;
    }
    ;
    
    m_has_w10_bordertop = false;
    
    if (m_w10_bordertop)
    {
        delete m_w10_bordertop;
        m_w10_bordertop = NULL;
    }
    ;
    
    m_has_w10_borderbottom = false;
    
    if (m_w10_borderbottom)
    {
        delete m_w10_borderbottom;
        m_w10_borderbottom = NULL;
    }
    ;
    
    m_has_w10_borderleft = false;
    
    if (m_w10_borderleft)
    {
        delete m_w10_borderleft;
        m_w10_borderleft = NULL;
    }
    ;
    
    m_has_w10_borderright = false;
    
    if (m_w10_borderright)
    {
        delete m_w10_borderright;
        m_w10_borderright = NULL;
    }
    ;
    
    m_has_pvml_textdata = false;
    
    if (m_pvml_textdata)
    {
        delete m_pvml_textdata;
        m_pvml_textdata = NULL;
    }
    ;
    
    m_has_x_ClientData = true;
    if (!m_x_ClientData)
    {
        m_x_ClientData = new ns_x::CT_ClientData();
    }
    return m_x_ClientData;
    }

    const ns_x::CT_ClientData& CT_Oval::ChildGroup_1::get_x_ClientData() const
    {    
    if (m_x_ClientData)
    {
        return *m_x_ClientData;
    }
    return ns_x::CT_ClientData::default_instance();
    }

    bool CT_Oval::ChildGroup_1::has_pvml_textdata() const
    {    
    return m_has_pvml_textdata;
    }

    ns_pvml::CT_Rel* CT_Oval::ChildGroup_1::mutable_pvml_textdata()
    {    
    
    m_has_path = false;
    
    if (m_path)
    {
        delete m_path;
        m_path = NULL;
    }
    ;
    
    m_has_formulas = false;
    
    if (m_formulas)
    {
        delete m_formulas;
        m_formulas = NULL;
    }
    ;
    
    m_has_handles = false;
    
    if (m_handles)
    {
        delete m_handles;
        m_handles = NULL;
    }
    ;
    
    m_has_fill = false;
    
    if (m_fill)
    {
    }
