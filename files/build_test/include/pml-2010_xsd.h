namespace ns_p14 {
class Element;
class Attribute;
class ST_UniversalTimeOffset;
class ST_TransitionPattern;
class ST_TransitionCenterDirectionType;
class ST_TransitionShredPattern;
class ST_TransitionCornerAndCenterDirectionType;
class ST_TransitionLeftRightDirectionType;
class CT_LeftRightDirectionTransition;
class CT_RippleTransition;
class CT_PrismTransition;
class CT_GlitterTransition;
class CT_FlyThroughTransition;
class CT_ShredTransition;
class CT_RevealTransition;
class CT_MediaBookmarkTarget;
class CT_ContentPartNonVisual;
class CT_MediaTrim;
class CT_MediaFade;
class CT_MediaBookmark;
class CT_MediaBookmarkList;
class CT_Media;
class CT_SectionSlideIdListEntry;
class CT_SectionSlideIdList;
class CT_Section;
class CT_SectionList;
class CT_BrowseMode;
class CT_DefaultImageDpi;
class CT_DiscardImageEditData;
class CT_ShowMediaControls;
class CT_LaserTracePoint;
class CT_LaserTrace;
class CT_LaserTraceList;
class CT_RandomId;
class CT_TriggerEventRecord;
class CT_NullEventRecord;
class CT_MediaPlaybackEventRecord;
class CT_MediaSeekEventRecord;
class CT_ShowEventRecordList;
class vortex_element;
class switch_element;
class flip_element;
class ripple_element;
class honeycomb_element;
class prism_element;
class doors_element;
class window_element;
class ferris_element;
class gallery_element;
class conveyor_element;
class pan_element;
class glitter_element;
class warp_element;
class flythrough_element;
class flash_element;
class shred_element;
class reveal_element;
class wheelReverse_element;
class bmkTgt_element;
class nvContentPartPr_element;
class xfrm_element;
class extLst_element;
class media_element;
class sectionLst_element;
class browseMode_element;
class laserClr_element;
class defaultImageDpi_element;
class discardImageEditData_element;
class showMediaCtrls_element;
class laserTraceLst_element;
class creationId_element;
class modId_element;
class showEvtLst_element;
class dur_attr;
class presetBounceEnd_attr;
class bounceEnd_attr;
class bwMode_attr;
}
#ifndef __pml_2010_xsd_
#define __pml_2010_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "pml_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "dml-mainExt_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-lockedCanvas_xsd.h"
#include "dml-chartDrawing_xsd.h"
namespace ns_p14 {
using namespace std;
class Element: public XSD::Element
{
public:
protected:
private:
};

class Attribute: public XSD::Attribute
{
public:
protected:
private:
};

class ST_UniversalTimeOffset: public XSD::SimpleType
{
public:
    ST_UniversalTimeOffset();
    ST_UniversalTimeOffset(const XSD::string_& _value);
    ~ST_UniversalTimeOffset();
    bool has_value() const;
    void set_value(const XSD::string_& _value);
    const XSD::string_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_UniversalTimeOffset& default_instance();
    std::string toString() const;
protected:
private:
    static ST_UniversalTimeOffset* default_instance_;
    bool m_has_value;
    XSD::string_ m_value;
};

class ST_TransitionPattern: public XSD::SimpleType
{
public:
    enum  Type
    {
        _diamond_ = 0,
        _hexagon_
    };
    ST_TransitionPattern();
    ST_TransitionPattern(const ST_TransitionPattern::Type& _value);
    ~ST_TransitionPattern();
    bool has_value() const;
    void set_value(const ST_TransitionPattern::Type& _value);
    const ST_TransitionPattern::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TransitionPattern& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TransitionPattern* default_instance_;
    bool m_has_value;
    ST_TransitionPattern::Type m_value;
};

class ST_TransitionCenterDirectionType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _center_ = 0
    };
    ST_TransitionCenterDirectionType();
    ST_TransitionCenterDirectionType(const ST_TransitionCenterDirectionType::Type& _value);
    ~ST_TransitionCenterDirectionType();
    bool has_value() const;
    void set_value(const ST_TransitionCenterDirectionType::Type& _value);
    const ST_TransitionCenterDirectionType::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TransitionCenterDirectionType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TransitionCenterDirectionType* default_instance_;
    bool m_has_value;
    ST_TransitionCenterDirectionType::Type m_value;
};

class ST_TransitionShredPattern: public XSD::SimpleType
{
public:
    enum  Type
    {
        _strip_ = 0,
        _rectangle_
    };
    ST_TransitionShredPattern();
    ST_TransitionShredPattern(const ST_TransitionShredPattern::Type& _value);
    ~ST_TransitionShredPattern();
    bool has_value() const;
    void set_value(const ST_TransitionShredPattern::Type& _value);
    const ST_TransitionShredPattern::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TransitionShredPattern& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TransitionShredPattern* default_instance_;
    bool m_has_value;
    ST_TransitionShredPattern::Type m_value;
};

class ST_TransitionCornerAndCenterDirectionType: public XSD::SimpleType
{
public:
    ST_TransitionCornerAndCenterDirectionType();
    ST_TransitionCornerAndCenterDirectionType(const ST_TransitionCornerAndCenterDirectionType& _ST_TransitionCornerAndCenterDirectionType);
    ~ST_TransitionCornerAndCenterDirectionType();
    bool has_ST_TransitionCornerDirectionType() const;
    ns_p::ST_TransitionCornerDirectionType* mutable_ST_TransitionCornerDirectionType();
    const ns_p::ST_TransitionCornerDirectionType& get_ST_TransitionCornerDirectionType() const;
    void clear_ST_TransitionCornerDirectionType();
    bool has_ST_TransitionCenterDirectionType() const;
    ST_TransitionCenterDirectionType* mutable_ST_TransitionCenterDirectionType();
    const ST_TransitionCenterDirectionType& get_ST_TransitionCenterDirectionType() const;
    void clear_ST_TransitionCenterDirectionType();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TransitionCornerAndCenterDirectionType& default_instance();
protected:
private:
    bool m_has_ST_TransitionCornerDirectionType;
    ns_p::ST_TransitionCornerDirectionType* m_ST_TransitionCornerDirectionType;
    bool m_has_ST_TransitionCenterDirectionType;
    ST_TransitionCenterDirectionType* m_ST_TransitionCenterDirectionType;
    static ST_TransitionCornerAndCenterDirectionType* default_instance_;
};

class ST_TransitionLeftRightDirectionType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _l_ = 0,
        _r_
    };
    ST_TransitionLeftRightDirectionType();
    ST_TransitionLeftRightDirectionType(const ST_TransitionLeftRightDirectionType::Type& _value);
    ~ST_TransitionLeftRightDirectionType();
    bool has_value() const;
    void set_value(const ST_TransitionLeftRightDirectionType::Type& _value);
    const ST_TransitionLeftRightDirectionType::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TransitionLeftRightDirectionType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TransitionLeftRightDirectionType* default_instance_;
    bool m_has_value;
    ST_TransitionLeftRightDirectionType::Type m_value;
};

class CT_LeftRightDirectionTransition: public XSD::ComplexType
{
public:
    CT_LeftRightDirectionTransition();
    ~CT_LeftRightDirectionTransition();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LeftRightDirectionTransition& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr);
    const ST_TransitionLeftRightDirectionType& get_dir_attr() const;
protected:
private:
    static CT_LeftRightDirectionTransition* default_instance_;
    bool m_has_dir_attr;
    ST_TransitionLeftRightDirectionType* m_dir_attr;
};

class CT_RippleTransition: public XSD::ComplexType
{
public:
    CT_RippleTransition();
    ~CT_RippleTransition();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RippleTransition& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionCornerAndCenterDirectionType& _dir_attr);
    const ST_TransitionCornerAndCenterDirectionType& get_dir_attr() const;
protected:
private:
    static CT_RippleTransition* default_instance_;
    bool m_has_dir_attr;
    ST_TransitionCornerAndCenterDirectionType* m_dir_attr;
};

class CT_PrismTransition: public XSD::ComplexType
{
public:
    CT_PrismTransition();
    ~CT_PrismTransition();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PrismTransition& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ns_p::ST_TransitionSideDirectionType& _dir_attr);
    const ns_p::ST_TransitionSideDirectionType& get_dir_attr() const;
    bool has_isContent_attr() const;
    void set_isContent_attr(const XSD::boolean_& _isContent_attr);
    const XSD::boolean_& get_isContent_attr() const;
    bool has_isInverted_attr() const;
    void set_isInverted_attr(const XSD::boolean_& _isInverted_attr);
    const XSD::boolean_& get_isInverted_attr() const;
protected:
private:
    static CT_PrismTransition* default_instance_;
    bool m_has_dir_attr;
    ns_p::ST_TransitionSideDirectionType* m_dir_attr;
    bool m_has_isContent_attr;
    XSD::boolean_ m_isContent_attr;
    bool m_has_isInverted_attr;
    XSD::boolean_ m_isInverted_attr;
};

class CT_GlitterTransition: public XSD::ComplexType
{
public:
    CT_GlitterTransition();
    ~CT_GlitterTransition();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_GlitterTransition& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ns_p::ST_TransitionSideDirectionType& _dir_attr);
    const ns_p::ST_TransitionSideDirectionType& get_dir_attr() const;
    bool has_pattern_attr() const;
    void set_pattern_attr(const ST_TransitionPattern& _pattern_attr);
    const ST_TransitionPattern& get_pattern_attr() const;
protected:
private:
    static CT_GlitterTransition* default_instance_;
    bool m_has_dir_attr;
    ns_p::ST_TransitionSideDirectionType* m_dir_attr;
    bool m_has_pattern_attr;
    ST_TransitionPattern* m_pattern_attr;
};

class CT_FlyThroughTransition: public XSD::ComplexType
{
public:
    CT_FlyThroughTransition();
    ~CT_FlyThroughTransition();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FlyThroughTransition& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ns_p::ST_TransitionInOutDirectionType& _dir_attr);
    const ns_p::ST_TransitionInOutDirectionType& get_dir_attr() const;
    bool has_hasBounce_attr() const;
    void set_hasBounce_attr(const XSD::boolean_& _hasBounce_attr);
    const XSD::boolean_& get_hasBounce_attr() const;
protected:
private:
    static CT_FlyThroughTransition* default_instance_;
    bool m_has_dir_attr;
    ns_p::ST_TransitionInOutDirectionType* m_dir_attr;
    bool m_has_hasBounce_attr;
    XSD::boolean_ m_hasBounce_attr;
};

class CT_ShredTransition: public XSD::ComplexType
{
public:
    CT_ShredTransition();
    ~CT_ShredTransition();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ShredTransition& default_instance();
    bool has_pattern_attr() const;
    void set_pattern_attr(const ST_TransitionShredPattern& _pattern_attr);
    const ST_TransitionShredPattern& get_pattern_attr() const;
    bool has_dir_attr() const;
    void set_dir_attr(const ns_p::ST_TransitionInOutDirectionType& _dir_attr);
    const ns_p::ST_TransitionInOutDirectionType& get_dir_attr() const;
protected:
private:
    static CT_ShredTransition* default_instance_;
    bool m_has_pattern_attr;
    ST_TransitionShredPattern* m_pattern_attr;
    bool m_has_dir_attr;
    ns_p::ST_TransitionInOutDirectionType* m_dir_attr;
};

class CT_RevealTransition: public XSD::ComplexType
{
public:
    CT_RevealTransition();
    ~CT_RevealTransition();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RevealTransition& default_instance();
    bool has_thruBlk_attr() const;
    void set_thruBlk_attr(const XSD::boolean_& _thruBlk_attr);
    const XSD::boolean_& get_thruBlk_attr() const;
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr);
    const ST_TransitionLeftRightDirectionType& get_dir_attr() const;
protected:
private:
    static CT_RevealTransition* default_instance_;
    bool m_has_thruBlk_attr;
    XSD::boolean_ m_thruBlk_attr;
    bool m_has_dir_attr;
    ST_TransitionLeftRightDirectionType* m_dir_attr;
};

class CT_MediaBookmarkTarget: public XSD::ComplexType
{
public:
    CT_MediaBookmarkTarget();
    ~CT_MediaBookmarkTarget();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MediaBookmarkTarget& default_instance();
    bool has_spid_attr() const;
    void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr);
    const ns_a::ST_DrawingElementId& get_spid_attr() const;
    bool has_bmkName_attr() const;
    void set_bmkName_attr(const XSD::string_& _bmkName_attr);
    const XSD::string_& get_bmkName_attr() const;
protected:
private:
    static CT_MediaBookmarkTarget* default_instance_;
    bool m_has_spid_attr;
    ns_a::ST_DrawingElementId* m_spid_attr;
    bool m_has_bmkName_attr;
    XSD::string_ m_bmkName_attr;
};

class CT_ContentPartNonVisual: public XSD::ComplexType
{
public:
    CT_ContentPartNonVisual();
    ~CT_ContentPartNonVisual();
    bool has_cNvPr() const;
    ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
    const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
    bool has_cNvContentPartPr() const;
    ns_a14::CT_NonVisualInkContentPartProperties* mutable_cNvContentPartPr();
    const ns_a14::CT_NonVisualInkContentPartProperties& get_cNvContentPartPr() const;
    bool has_nvPr() const;
    ns_p::CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
    const ns_p::CT_ApplicationNonVisualDrawingProps& get_nvPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ContentPartNonVisual& default_instance();
protected:
private:
    bool m_has_cNvPr;
    ns_a::CT_NonVisualDrawingProps* m_cNvPr;
    bool m_has_cNvContentPartPr;
    ns_a14::CT_NonVisualInkContentPartProperties* m_cNvContentPartPr;
    bool m_has_nvPr;
    ns_p::CT_ApplicationNonVisualDrawingProps* m_nvPr;
    static CT_ContentPartNonVisual* default_instance_;
};

class CT_MediaTrim: public XSD::ComplexType
{
public:
    CT_MediaTrim();
    ~CT_MediaTrim();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MediaTrim& default_instance();
    bool has_st_attr() const;
    void set_st_attr(const ST_UniversalTimeOffset& _st_attr);
    const ST_UniversalTimeOffset& get_st_attr() const;
    bool has_end_attr() const;
    void set_end_attr(const ST_UniversalTimeOffset& _end_attr);
    const ST_UniversalTimeOffset& get_end_attr() const;
protected:
private:
    static CT_MediaTrim* default_instance_;
    bool m_has_st_attr;
    ST_UniversalTimeOffset* m_st_attr;
    bool m_has_end_attr;
    ST_UniversalTimeOffset* m_end_attr;
};

class CT_MediaFade: public XSD::ComplexType
{
public:
    CT_MediaFade();
    ~CT_MediaFade();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MediaFade& default_instance();
    bool has_in_attr() const;
    void set_in_attr(const ST_UniversalTimeOffset& _in_attr);
    const ST_UniversalTimeOffset& get_in_attr() const;
    bool has_out_attr() const;
    void set_out_attr(const ST_UniversalTimeOffset& _out_attr);
    const ST_UniversalTimeOffset& get_out_attr() const;
protected:
private:
    static CT_MediaFade* default_instance_;
    bool m_has_in_attr;
    ST_UniversalTimeOffset* m_in_attr;
    bool m_has_out_attr;
    ST_UniversalTimeOffset* m_out_attr;
};

class CT_MediaBookmark: public XSD::ComplexType
{
public:
    CT_MediaBookmark();
    ~CT_MediaBookmark();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MediaBookmark& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
    bool has_time_attr() const;
    void set_time_attr(const ST_UniversalTimeOffset& _time_attr);
    const ST_UniversalTimeOffset& get_time_attr() const;
protected:
private:
    static CT_MediaBookmark* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
    bool m_has_time_attr;
    ST_UniversalTimeOffset* m_time_attr;
};

class CT_MediaBookmarkList: public XSD::ComplexType
{
public:
    CT_MediaBookmarkList();
    ~CT_MediaBookmarkList();
    CT_MediaBookmark* add_bmk();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MediaBookmarkList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_bmk() const;
        CT_MediaBookmark* mutable_bmk();
        const CT_MediaBookmark& get_bmk() const;
    protected:
    private:
        bool m_has_bmk;
        CT_MediaBookmark* m_bmk;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_MediaBookmarkList* default_instance_;
};

class CT_Media: public XSD::ComplexType
{
public:
    CT_Media();
    ~CT_Media();
    bool has_trim() const;
    CT_MediaTrim* mutable_trim();
    const CT_MediaTrim& get_trim() const;
    bool has_fade() const;
    CT_MediaFade* mutable_fade();
    const CT_MediaFade& get_fade() const;
    bool has_bmkLst() const;
    CT_MediaBookmarkList* mutable_bmkLst();
    const CT_MediaBookmarkList& get_bmkLst() const;
    bool has_extLst() const;
    ns_p::CT_ExtensionList* mutable_extLst();
    const ns_p::CT_ExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Media& default_instance();
    bool has_r_embed_attr() const;
    void set_r_embed_attr(const ns_r::ST_RelationshipId& _r_embed_attr);
    const ns_r::ST_RelationshipId& get_r_embed_attr() const;
    bool has_r_link_attr() const;
    void set_r_link_attr(const ns_r::ST_RelationshipId& _r_link_attr);
    const ns_r::ST_RelationshipId& get_r_link_attr() const;
protected:
private:
    bool m_has_trim;
    CT_MediaTrim* m_trim;
    bool m_has_fade;
    CT_MediaFade* m_fade;
    bool m_has_bmkLst;
    CT_MediaBookmarkList* m_bmkLst;
    bool m_has_extLst;
    ns_p::CT_ExtensionList* m_extLst;
    static CT_Media* default_instance_;
    bool m_has_r_embed_attr;
    ns_r::ST_RelationshipId* m_r_embed_attr;
    bool m_has_r_link_attr;
    ns_r::ST_RelationshipId* m_r_link_attr;
};

class CT_SectionSlideIdListEntry: public XSD::ComplexType
{
public:
    CT_SectionSlideIdListEntry();
    ~CT_SectionSlideIdListEntry();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SectionSlideIdListEntry& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ns_p::ST_SlideId& _id_attr);
    const ns_p::ST_SlideId& get_id_attr() const;
protected:
private:
    static CT_SectionSlideIdListEntry* default_instance_;
    bool m_has_id_attr;
    ns_p::ST_SlideId* m_id_attr;
};

class CT_SectionSlideIdList: public XSD::ComplexType
{
public:
    CT_SectionSlideIdList();
    ~CT_SectionSlideIdList();
    CT_SectionSlideIdListEntry* add_sldId();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SectionSlideIdList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_sldId() const;
        CT_SectionSlideIdListEntry* mutable_sldId();
        const CT_SectionSlideIdListEntry& get_sldId() const;
    protected:
    private:
        bool m_has_sldId;
        CT_SectionSlideIdListEntry* m_sldId;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SectionSlideIdList* default_instance_;
};

class CT_Section: public XSD::ComplexType
{
public:
    CT_Section();
    ~CT_Section();
    bool has_sldIdLst() const;
    CT_SectionSlideIdList* mutable_sldIdLst();
    const CT_SectionSlideIdList& get_sldIdLst() const;
    bool has_extLst() const;
    ns_p::CT_ExtensionList* mutable_extLst();
    const ns_p::CT_ExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Section& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
    bool has_id_attr() const;
    void set_id_attr(const ns_s::ST_Guid& _id_attr);
    const ns_s::ST_Guid& get_id_attr() const;
protected:
private:
    bool m_has_sldIdLst;
    CT_SectionSlideIdList* m_sldIdLst;
    bool m_has_extLst;
    ns_p::CT_ExtensionList* m_extLst;
    static CT_Section* default_instance_;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
    bool m_has_id_attr;
    ns_s::ST_Guid* m_id_attr;
};

class CT_SectionList: public XSD::ComplexType
{
public:
    CT_SectionList();
    ~CT_SectionList();
    CT_Section* add_section();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SectionList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_section() const;
        CT_Section* mutable_section();
        const CT_Section& get_section() const;
    protected:
    private:
        bool m_has_section;
        CT_Section* m_section;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SectionList* default_instance_;
};

class CT_BrowseMode: public XSD::ComplexType
{
public:
    CT_BrowseMode();
    ~CT_BrowseMode();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BrowseMode& default_instance();
    bool has_showStatus_attr() const;
    void set_showStatus_attr(const XSD::boolean_& _showStatus_attr);
    const XSD::boolean_& get_showStatus_attr() const;
protected:
private:
    static CT_BrowseMode* default_instance_;
    bool m_has_showStatus_attr;
    XSD::boolean_ m_showStatus_attr;
};

class CT_DefaultImageDpi: public XSD::ComplexType
{
public:
    CT_DefaultImageDpi();
    ~CT_DefaultImageDpi();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DefaultImageDpi& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::unsignedInt_& _val_attr);
    const XSD::unsignedInt_& get_val_attr() const;
protected:
private:
    static CT_DefaultImageDpi* default_instance_;
    bool m_has_val_attr;
    XSD::unsignedInt_ m_val_attr;
};

class CT_DiscardImageEditData: public XSD::ComplexType
{
public:
    CT_DiscardImageEditData();
    ~CT_DiscardImageEditData();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DiscardImageEditData& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static CT_DiscardImageEditData* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class CT_ShowMediaControls: public XSD::ComplexType
{
public:
    CT_ShowMediaControls();
    ~CT_ShowMediaControls();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ShowMediaControls& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static CT_ShowMediaControls* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class CT_LaserTracePoint: public XSD::ComplexType
{
public:
    CT_LaserTracePoint();
    ~CT_LaserTracePoint();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LaserTracePoint& default_instance();
    bool has_t_attr() const;
    void set_t_attr(const ST_UniversalTimeOffset& _t_attr);
    const ST_UniversalTimeOffset& get_t_attr() const;
    bool has_x_attr() const;
    void set_x_attr(const ns_a::ST_Coordinate& _x_attr);
    const ns_a::ST_Coordinate& get_x_attr() const;
    bool has_y_attr() const;
    void set_y_attr(const ns_a::ST_Coordinate& _y_attr);
    const ns_a::ST_Coordinate& get_y_attr() const;
protected:
private:
    static CT_LaserTracePoint* default_instance_;
    bool m_has_t_attr;
    ST_UniversalTimeOffset* m_t_attr;
    bool m_has_x_attr;
    ns_a::ST_Coordinate* m_x_attr;
    bool m_has_y_attr;
    ns_a::ST_Coordinate* m_y_attr;
};

class CT_LaserTrace: public XSD::ComplexType
{
public:
    CT_LaserTrace();
    ~CT_LaserTrace();
    CT_LaserTracePoint* add_tracePt();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LaserTrace& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tracePt() const;
        CT_LaserTracePoint* mutable_tracePt();
        const CT_LaserTracePoint& get_tracePt() const;
    protected:
    private:
        bool m_has_tracePt;
        CT_LaserTracePoint* m_tracePt;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_LaserTrace* default_instance_;
};

class CT_LaserTraceList: public XSD::ComplexType
{
public:
    CT_LaserTraceList();
    ~CT_LaserTraceList();
    CT_LaserTrace* add_tracePtLst();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LaserTraceList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tracePtLst() const;
        CT_LaserTrace* mutable_tracePtLst();
        const CT_LaserTrace& get_tracePtLst() const;
    protected:
    private:
        bool m_has_tracePtLst;
        CT_LaserTrace* m_tracePtLst;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_LaserTraceList* default_instance_;
};

class CT_RandomId: public XSD::ComplexType
{
public:
    CT_RandomId();
    ~CT_RandomId();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RandomId& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::unsignedInt_& _val_attr);
    const XSD::unsignedInt_& get_val_attr() const;
protected:
private:
    static CT_RandomId* default_instance_;
    bool m_has_val_attr;
    XSD::unsignedInt_ m_val_attr;
};

class CT_TriggerEventRecord: public XSD::ComplexType
{
public:
    CT_TriggerEventRecord();
    ~CT_TriggerEventRecord();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TriggerEventRecord& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ns_p::ST_TLTriggerEvent& _type_attr);
    const ns_p::ST_TLTriggerEvent& get_type_attr() const;
    bool has_time_attr() const;
    void set_time_attr(const ST_UniversalTimeOffset& _time_attr);
    const ST_UniversalTimeOffset& get_time_attr() const;
    bool has_objId_attr() const;
    void set_objId_attr(const ns_a::ST_DrawingElementId& _objId_attr);
    const ns_a::ST_DrawingElementId& get_objId_attr() const;
protected:
private:
    static CT_TriggerEventRecord* default_instance_;
    bool m_has_type_attr;
    ns_p::ST_TLTriggerEvent* m_type_attr;
    bool m_has_time_attr;
    ST_UniversalTimeOffset* m_time_attr;
    bool m_has_objId_attr;
    ns_a::ST_DrawingElementId* m_objId_attr;
};

class CT_NullEventRecord: public XSD::ComplexType
{
public:
    CT_NullEventRecord();
    ~CT_NullEventRecord();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NullEventRecord& default_instance();
    bool has_time_attr() const;
    void set_time_attr(const ST_UniversalTimeOffset& _time_attr);
    const ST_UniversalTimeOffset& get_time_attr() const;
    bool has_objId_attr() const;
    void set_objId_attr(const ns_a::ST_DrawingElementId& _objId_attr);
    const ns_a::ST_DrawingElementId& get_objId_attr() const;
protected:
private:
    static CT_NullEventRecord* default_instance_;
    bool m_has_time_attr;
    ST_UniversalTimeOffset* m_time_attr;
    bool m_has_objId_attr;
    ns_a::ST_DrawingElementId* m_objId_attr;
};

class CT_MediaPlaybackEventRecord: public XSD::ComplexType
{
public:
    CT_MediaPlaybackEventRecord();
    ~CT_MediaPlaybackEventRecord();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MediaPlaybackEventRecord& default_instance();
    bool has_time_attr() const;
    void set_time_attr(const ST_UniversalTimeOffset& _time_attr);
    const ST_UniversalTimeOffset& get_time_attr() const;
    bool has_objId_attr() const;
    void set_objId_attr(const ns_a::ST_DrawingElementId& _objId_attr);
    const ns_a::ST_DrawingElementId& get_objId_attr() const;
protected:
private:
    static CT_MediaPlaybackEventRecord* default_instance_;
    bool m_has_time_attr;
    ST_UniversalTimeOffset* m_time_attr;
    bool m_has_objId_attr;
    ns_a::ST_DrawingElementId* m_objId_attr;
};

class CT_MediaSeekEventRecord: public XSD::ComplexType
{
public:
    CT_MediaSeekEventRecord();
    ~CT_MediaSeekEventRecord();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MediaSeekEventRecord& default_instance();
    bool has_time_attr() const;
    void set_time_attr(const ST_UniversalTimeOffset& _time_attr);
    const ST_UniversalTimeOffset& get_time_attr() const;
    bool has_objId_attr() const;
    void set_objId_attr(const ns_a::ST_DrawingElementId& _objId_attr);
    const ns_a::ST_DrawingElementId& get_objId_attr() const;
    bool has_seek_attr() const;
    void set_seek_attr(const ST_UniversalTimeOffset& _seek_attr);
    const ST_UniversalTimeOffset& get_seek_attr() const;
protected:
private:
    static CT_MediaSeekEventRecord* default_instance_;
    bool m_has_time_attr;
    ST_UniversalTimeOffset* m_time_attr;
    bool m_has_objId_attr;
    ns_a::ST_DrawingElementId* m_objId_attr;
    bool m_has_seek_attr;
    ST_UniversalTimeOffset* m_seek_attr;
};

class CT_ShowEventRecordList: public XSD::ComplexType
{
public:
    CT_ShowEventRecordList();
    ~CT_ShowEventRecordList();
    CT_TriggerEventRecord* add_triggerEvt();
    CT_MediaPlaybackEventRecord* add_playEvt();
    CT_MediaPlaybackEventRecord* add_stopEvt();
    CT_MediaPlaybackEventRecord* add_pauseEvt();
    CT_MediaPlaybackEventRecord* add_resumeEvt();
    CT_MediaSeekEventRecord* add_seekEvt();
    CT_NullEventRecord* add_nullEvt();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ShowEventRecordList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_triggerEvt() const;
        CT_TriggerEventRecord* mutable_triggerEvt();
        const CT_TriggerEventRecord& get_triggerEvt() const;
        bool has_playEvt() const;
        CT_MediaPlaybackEventRecord* mutable_playEvt();
        const CT_MediaPlaybackEventRecord& get_playEvt() const;
        bool has_stopEvt() const;
        CT_MediaPlaybackEventRecord* mutable_stopEvt();
        const CT_MediaPlaybackEventRecord& get_stopEvt() const;
        bool has_pauseEvt() const;
        CT_MediaPlaybackEventRecord* mutable_pauseEvt();
        const CT_MediaPlaybackEventRecord& get_pauseEvt() const;
        bool has_resumeEvt() const;
        CT_MediaPlaybackEventRecord* mutable_resumeEvt();
        const CT_MediaPlaybackEventRecord& get_resumeEvt() const;
        bool has_seekEvt() const;
        CT_MediaSeekEventRecord* mutable_seekEvt();
        const CT_MediaSeekEventRecord& get_seekEvt() const;
        bool has_nullEvt() const;
        CT_NullEventRecord* mutable_nullEvt();
        const CT_NullEventRecord& get_nullEvt() const;
    protected:
    private:
        bool m_has_triggerEvt;
        CT_TriggerEventRecord* m_triggerEvt;
        bool m_has_playEvt;
        CT_MediaPlaybackEventRecord* m_playEvt;
        bool m_has_stopEvt;
        CT_MediaPlaybackEventRecord* m_stopEvt;
        bool m_has_pauseEvt;
        CT_MediaPlaybackEventRecord* m_pauseEvt;
        bool m_has_resumeEvt;
        CT_MediaPlaybackEventRecord* m_resumeEvt;
        bool m_has_seekEvt;
        CT_MediaSeekEventRecord* m_seekEvt;
        bool m_has_nullEvt;
        CT_NullEventRecord* m_nullEvt;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_ShowEventRecordList* default_instance_;
};

class vortex_element: public Element
{
public:
protected:
private:
};

class switch_element: public Element
{
public:
    switch_element();
    ~switch_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const switch_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr);
    const ST_TransitionLeftRightDirectionType& get_dir_attr() const;
protected:
private:
    static switch_element* default_instance_;
    bool m_has_dir_attr;
    ST_TransitionLeftRightDirectionType* m_dir_attr;
};

class flip_element: public Element
{
public:
    flip_element();
    ~flip_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const flip_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr);
    const ST_TransitionLeftRightDirectionType& get_dir_attr() const;
protected:
private:
    static flip_element* default_instance_;
    bool m_has_dir_attr;
    ST_TransitionLeftRightDirectionType* m_dir_attr;
};

class ripple_element: public Element
{
public:
    ripple_element();
    ~ripple_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const ripple_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionCornerAndCenterDirectionType& _dir_attr);
    const ST_TransitionCornerAndCenterDirectionType& get_dir_attr() const;
protected:
private:
    static ripple_element* default_instance_;
    bool m_has_dir_attr;
    ST_TransitionCornerAndCenterDirectionType* m_dir_attr;
};

class honeycomb_element: public Element
{
public:
protected:
private:
};

class prism_element: public Element
{
public:
    prism_element();
    ~prism_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const prism_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ns_p::ST_TransitionSideDirectionType& _dir_attr);
    const ns_p::ST_TransitionSideDirectionType& get_dir_attr() const;
    bool has_isContent_attr() const;
    void set_isContent_attr(const XSD::boolean_& _isContent_attr);
    const XSD::boolean_& get_isContent_attr() const;
    bool has_isInverted_attr() const;
    void set_isInverted_attr(const XSD::boolean_& _isInverted_attr);
    const XSD::boolean_& get_isInverted_attr() const;
protected:
private:
    static prism_element* default_instance_;
    bool m_has_dir_attr;
    ns_p::ST_TransitionSideDirectionType* m_dir_attr;
    bool m_has_isContent_attr;
    XSD::boolean_ m_isContent_attr;
    bool m_has_isInverted_attr;
    XSD::boolean_ m_isInverted_attr;
};

class doors_element: public Element
{
public:
protected:
private:
};

class window_element: public Element
{
public:
protected:
private:
};

class ferris_element: public Element
{
public:
    ferris_element();
    ~ferris_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const ferris_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr);
    const ST_TransitionLeftRightDirectionType& get_dir_attr() const;
protected:
private:
    static ferris_element* default_instance_;
    bool m_has_dir_attr;
    ST_TransitionLeftRightDirectionType* m_dir_attr;
};

class gallery_element: public Element
{
public:
    gallery_element();
    ~gallery_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const gallery_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr);
    const ST_TransitionLeftRightDirectionType& get_dir_attr() const;
protected:
private:
    static gallery_element* default_instance_;
    bool m_has_dir_attr;
    ST_TransitionLeftRightDirectionType* m_dir_attr;
};

class conveyor_element: public Element
{
public:
    conveyor_element();
    ~conveyor_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const conveyor_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr);
    const ST_TransitionLeftRightDirectionType& get_dir_attr() const;
protected:
private:
    static conveyor_element* default_instance_;
    bool m_has_dir_attr;
    ST_TransitionLeftRightDirectionType* m_dir_attr;
};

class pan_element: public Element
{
public:
protected:
private:
};

class glitter_element: public Element
{
public:
    glitter_element();
    ~glitter_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const glitter_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ns_p::ST_TransitionSideDirectionType& _dir_attr);
    const ns_p::ST_TransitionSideDirectionType& get_dir_attr() const;
    bool has_pattern_attr() const;
    void set_pattern_attr(const ST_TransitionPattern& _pattern_attr);
    const ST_TransitionPattern& get_pattern_attr() const;
protected:
private:
    static glitter_element* default_instance_;
    bool m_has_dir_attr;
    ns_p::ST_TransitionSideDirectionType* m_dir_attr;
    bool m_has_pattern_attr;
    ST_TransitionPattern* m_pattern_attr;
};

class warp_element: public Element
{
public:
protected:
private:
};

class flythrough_element: public Element
{
public:
    flythrough_element();
    ~flythrough_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const flythrough_element& default_instance();
    bool has_dir_attr() const;
    void set_dir_attr(const ns_p::ST_TransitionInOutDirectionType& _dir_attr);
    const ns_p::ST_TransitionInOutDirectionType& get_dir_attr() const;
    bool has_hasBounce_attr() const;
    void set_hasBounce_attr(const XSD::boolean_& _hasBounce_attr);
    const XSD::boolean_& get_hasBounce_attr() const;
protected:
private:
    static flythrough_element* default_instance_;
    bool m_has_dir_attr;
    ns_p::ST_TransitionInOutDirectionType* m_dir_attr;
    bool m_has_hasBounce_attr;
    XSD::boolean_ m_hasBounce_attr;
};

class flash_element: public Element
{
public:
protected:
private:
};

class shred_element: public Element
{
public:
    shred_element();
    ~shred_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const shred_element& default_instance();
    bool has_pattern_attr() const;
    void set_pattern_attr(const ST_TransitionShredPattern& _pattern_attr);
    const ST_TransitionShredPattern& get_pattern_attr() const;
    bool has_dir_attr() const;
    void set_dir_attr(const ns_p::ST_TransitionInOutDirectionType& _dir_attr);
    const ns_p::ST_TransitionInOutDirectionType& get_dir_attr() const;
protected:
private:
    static shred_element* default_instance_;
    bool m_has_pattern_attr;
    ST_TransitionShredPattern* m_pattern_attr;
    bool m_has_dir_attr;
    ns_p::ST_TransitionInOutDirectionType* m_dir_attr;
};

class reveal_element: public Element
{
public:
    reveal_element();
    ~reveal_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const reveal_element& default_instance();
    bool has_thruBlk_attr() const;
    void set_thruBlk_attr(const XSD::boolean_& _thruBlk_attr);
    const XSD::boolean_& get_thruBlk_attr() const;
    bool has_dir_attr() const;
    void set_dir_attr(const ST_TransitionLeftRightDirectionType& _dir_attr);
    const ST_TransitionLeftRightDirectionType& get_dir_attr() const;
protected:
private:
    static reveal_element* default_instance_;
    bool m_has_thruBlk_attr;
    XSD::boolean_ m_thruBlk_attr;
    bool m_has_dir_attr;
    ST_TransitionLeftRightDirectionType* m_dir_attr;
};

class wheelReverse_element: public Element
{
public:
protected:
private:
};

class bmkTgt_element: public Element
{
public:
    bmkTgt_element();
    ~bmkTgt_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const bmkTgt_element& default_instance();
    bool has_spid_attr() const;
    void set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr);
    const ns_a::ST_DrawingElementId& get_spid_attr() const;
    bool has_bmkName_attr() const;
    void set_bmkName_attr(const XSD::string_& _bmkName_attr);
    const XSD::string_& get_bmkName_attr() const;
protected:
private:
    static bmkTgt_element* default_instance_;
    bool m_has_spid_attr;
    ns_a::ST_DrawingElementId* m_spid_attr;
    bool m_has_bmkName_attr;
    XSD::string_ m_bmkName_attr;
};

class nvContentPartPr_element: public Element
{
public:
    nvContentPartPr_element();
    ~nvContentPartPr_element();
    bool has_cNvPr() const;
    ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
    const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
    bool has_cNvContentPartPr() const;
    ns_a14::CT_NonVisualInkContentPartProperties* mutable_cNvContentPartPr();
    const ns_a14::CT_NonVisualInkContentPartProperties& get_cNvContentPartPr() const;
    bool has_nvPr() const;
    ns_p::CT_ApplicationNonVisualDrawingProps* mutable_nvPr();
    const ns_p::CT_ApplicationNonVisualDrawingProps& get_nvPr() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const nvContentPartPr_element& default_instance();
protected:
private:
    bool m_has_cNvPr;
    ns_a::CT_NonVisualDrawingProps* m_cNvPr;
    bool m_has_cNvContentPartPr;
    ns_a14::CT_NonVisualInkContentPartProperties* m_cNvContentPartPr;
    bool m_has_nvPr;
    ns_p::CT_ApplicationNonVisualDrawingProps* m_nvPr;
    static nvContentPartPr_element* default_instance_;
};

class xfrm_element: public Element
{
public:
protected:
private:
};

class extLst_element: public Element
{
public:
protected:
private:
};

class media_element: public Element
{
public:
    media_element();
    ~media_element();
    bool has_trim() const;
    CT_MediaTrim* mutable_trim();
    const CT_MediaTrim& get_trim() const;
    bool has_fade() const;
    CT_MediaFade* mutable_fade();
    const CT_MediaFade& get_fade() const;
    bool has_bmkLst() const;
    CT_MediaBookmarkList* mutable_bmkLst();
    const CT_MediaBookmarkList& get_bmkLst() const;
    bool has_extLst() const;
    ns_p::CT_ExtensionList* mutable_extLst();
    const ns_p::CT_ExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const media_element& default_instance();
    bool has_r_embed_attr() const;
    void set_r_embed_attr(const ns_r::ST_RelationshipId& _r_embed_attr);
    const ns_r::ST_RelationshipId& get_r_embed_attr() const;
    bool has_r_link_attr() const;
    void set_r_link_attr(const ns_r::ST_RelationshipId& _r_link_attr);
    const ns_r::ST_RelationshipId& get_r_link_attr() const;
protected:
private:
    bool m_has_trim;
    CT_MediaTrim* m_trim;
    bool m_has_fade;
    CT_MediaFade* m_fade;
    bool m_has_bmkLst;
    CT_MediaBookmarkList* m_bmkLst;
    bool m_has_extLst;
    ns_p::CT_ExtensionList* m_extLst;
    static media_element* default_instance_;
    bool m_has_r_embed_attr;
    ns_r::ST_RelationshipId* m_r_embed_attr;
    bool m_has_r_link_attr;
    ns_r::ST_RelationshipId* m_r_link_attr;
};

class sectionLst_element: public Element
{
public:
    sectionLst_element();
    ~sectionLst_element();
    CT_Section* add_section();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const sectionLst_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_section() const;
        CT_Section* mutable_section();
        const CT_Section& get_section() const;
    protected:
    private:
        bool m_has_section;
        CT_Section* m_section;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static sectionLst_element* default_instance_;
};

class browseMode_element: public Element
{
public:
    browseMode_element();
    ~browseMode_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const browseMode_element& default_instance();
    bool has_showStatus_attr() const;
    void set_showStatus_attr(const XSD::boolean_& _showStatus_attr);
    const XSD::boolean_& get_showStatus_attr() const;
protected:
private:
    static browseMode_element* default_instance_;
    bool m_has_showStatus_attr;
    XSD::boolean_ m_showStatus_attr;
};

class laserClr_element: public Element
{
public:
protected:
private:
};

class defaultImageDpi_element: public Element
{
public:
    defaultImageDpi_element();
    ~defaultImageDpi_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const defaultImageDpi_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::unsignedInt_& _val_attr);
    const XSD::unsignedInt_& get_val_attr() const;
protected:
private:
    static defaultImageDpi_element* default_instance_;
    bool m_has_val_attr;
    XSD::unsignedInt_ m_val_attr;
};

class discardImageEditData_element: public Element
{
public:
    discardImageEditData_element();
    ~discardImageEditData_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const discardImageEditData_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static discardImageEditData_element* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class showMediaCtrls_element: public Element
{
public:
    showMediaCtrls_element();
    ~showMediaCtrls_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const showMediaCtrls_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static showMediaCtrls_element* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class laserTraceLst_element: public Element
{
public:
    laserTraceLst_element();
    ~laserTraceLst_element();
    CT_LaserTrace* add_tracePtLst();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const laserTraceLst_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tracePtLst() const;
        CT_LaserTrace* mutable_tracePtLst();
        const CT_LaserTrace& get_tracePtLst() const;
    protected:
    private:
        bool m_has_tracePtLst;
        CT_LaserTrace* m_tracePtLst;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static laserTraceLst_element* default_instance_;
};

class creationId_element: public Element
{
public:
    creationId_element();
    ~creationId_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const creationId_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::unsignedInt_& _val_attr);
    const XSD::unsignedInt_& get_val_attr() const;
protected:
private:
    static creationId_element* default_instance_;
    bool m_has_val_attr;
    XSD::unsignedInt_ m_val_attr;
};

class modId_element: public Element
{
public:
    modId_element();
    ~modId_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const modId_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::unsignedInt_& _val_attr);
    const XSD::unsignedInt_& get_val_attr() const;
protected:
private:
    static modId_element* default_instance_;
    bool m_has_val_attr;
    XSD::unsignedInt_ m_val_attr;
};

class showEvtLst_element: public Element
{
public:
    showEvtLst_element();
    ~showEvtLst_element();
    CT_TriggerEventRecord* add_triggerEvt();
    CT_MediaPlaybackEventRecord* add_playEvt();
    CT_MediaPlaybackEventRecord* add_stopEvt();
    CT_MediaPlaybackEventRecord* add_pauseEvt();
    CT_MediaPlaybackEventRecord* add_resumeEvt();
    CT_MediaSeekEventRecord* add_seekEvt();
    CT_NullEventRecord* add_nullEvt();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const showEvtLst_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_triggerEvt() const;
        CT_TriggerEventRecord* mutable_triggerEvt();
        const CT_TriggerEventRecord& get_triggerEvt() const;
        bool has_playEvt() const;
        CT_MediaPlaybackEventRecord* mutable_playEvt();
        const CT_MediaPlaybackEventRecord& get_playEvt() const;
        bool has_stopEvt() const;
        CT_MediaPlaybackEventRecord* mutable_stopEvt();
        const CT_MediaPlaybackEventRecord& get_stopEvt() const;
        bool has_pauseEvt() const;
        CT_MediaPlaybackEventRecord* mutable_pauseEvt();
        const CT_MediaPlaybackEventRecord& get_pauseEvt() const;
        bool has_resumeEvt() const;
        CT_MediaPlaybackEventRecord* mutable_resumeEvt();
        const CT_MediaPlaybackEventRecord& get_resumeEvt() const;
        bool has_seekEvt() const;
        CT_MediaSeekEventRecord* mutable_seekEvt();
        const CT_MediaSeekEventRecord& get_seekEvt() const;
        bool has_nullEvt() const;
        CT_NullEventRecord* mutable_nullEvt();
        const CT_NullEventRecord& get_nullEvt() const;
    protected:
    private:
        bool m_has_triggerEvt;
        CT_TriggerEventRecord* m_triggerEvt;
        bool m_has_playEvt;
        CT_MediaPlaybackEventRecord* m_playEvt;
        bool m_has_stopEvt;
        CT_MediaPlaybackEventRecord* m_stopEvt;
        bool m_has_pauseEvt;
        CT_MediaPlaybackEventRecord* m_pauseEvt;
        bool m_has_resumeEvt;
        CT_MediaPlaybackEventRecord* m_resumeEvt;
        bool m_has_seekEvt;
        CT_MediaSeekEventRecord* m_seekEvt;
        bool m_has_nullEvt;
        CT_NullEventRecord* m_nullEvt;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static showEvtLst_element* default_instance_;
};

class dur_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class presetBounceEnd_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class bounceEnd_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

class bwMode_attr: public Attribute
{
public:
    void toXml(std::ostream& _outStream) const;
protected:
private:
};

}
#endif