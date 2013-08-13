#include "pml-2012_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_p15 {
using namespace std;

// Element

// Attribute

// CT_PresetTransition
CT_PresetTransition::CT_PresetTransition()
    :m_has_prst_attr(false),
     m_prst_attr(""),
     m_has_invX_attr(false),
     m_invX_attr(false),
     m_has_invY_attr(false),
     m_invY_attr(false)
{
}
CT_PresetTransition::~CT_PresetTransition()
{
    clear();
}
void CT_PresetTransition::clear()
{
    m_has_prst_attr = false;
    m_prst_attr.clear();

    m_has_invX_attr = false;
    m_invX_attr = false;

    m_has_invY_attr = false;
    m_invY_attr = false;
}

void CT_PresetTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_prst_attr)
    {
        _outStream << " " << "prst" << "=\"" << m_prst_attr << "\"";
    }



    if (m_has_invX_attr)
    {
        _outStream << " " << "invX" << "=\"" << XSD::XMLBooleanStr(m_invX_attr) << "\"";
    }



    if (m_has_invY_attr)
    {
        _outStream << " " << "invY" << "=\"" << XSD::XMLBooleanStr(m_invY_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PresetTransition& CT_PresetTransition::default_instance()
{
    if (!CT_PresetTransition::default_instance_)
    {
        CT_PresetTransition::default_instance_ = new CT_PresetTransition();
    }
    return *CT_PresetTransition::default_instance_;
}

bool CT_PresetTransition::has_prst_attr() const
{
    return m_has_prst_attr;
}

void CT_PresetTransition::set_prst_attr(const XSD::string_& _prst_attr)
{
    m_has_prst_attr = true;
    m_prst_attr = _prst_attr;
}

const XSD::string_& CT_PresetTransition::get_prst_attr() const
{
    return m_prst_attr;
}

bool CT_PresetTransition::has_invX_attr() const
{
    return m_has_invX_attr;
}

void CT_PresetTransition::set_invX_attr(const XSD::boolean_& _invX_attr)
{
    m_has_invX_attr = true;
    m_invX_attr = _invX_attr;
}

const XSD::boolean_& CT_PresetTransition::get_invX_attr() const
{
    return m_invX_attr;
}

bool CT_PresetTransition::has_invY_attr() const
{
    return m_has_invY_attr;
}

void CT_PresetTransition::set_invY_attr(const XSD::boolean_& _invY_attr)
{
    m_has_invY_attr = true;
    m_invY_attr = _invY_attr;
}

const XSD::boolean_& CT_PresetTransition::get_invY_attr() const
{
    return m_invY_attr;
}

CT_PresetTransition* CT_PresetTransition::default_instance_ = NULL;

// CT_PresenceInfo
CT_PresenceInfo::CT_PresenceInfo()
    :m_has_userId_attr(false),
     m_userId_attr(""),
     m_has_providerId_attr(false),
     m_providerId_attr("")
{
}
CT_PresenceInfo::~CT_PresenceInfo()
{
    clear();
}
void CT_PresenceInfo::clear()
{
    m_has_userId_attr = false;
    m_userId_attr.clear();

    m_has_providerId_attr = false;
    m_providerId_attr.clear();
}

void CT_PresenceInfo::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_userId_attr);
    if (m_has_userId_attr)
    {
        _outStream << " " << "userId" << "=\"" << m_userId_attr << "\"";
    }


    assert(m_has_providerId_attr);
    if (m_has_providerId_attr)
    {
        _outStream << " " << "providerId" << "=\"" << m_providerId_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PresenceInfo& CT_PresenceInfo::default_instance()
{
    if (!CT_PresenceInfo::default_instance_)
    {
        CT_PresenceInfo::default_instance_ = new CT_PresenceInfo();
    }
    return *CT_PresenceInfo::default_instance_;
}

bool CT_PresenceInfo::has_userId_attr() const
{
    return m_has_userId_attr;
}

void CT_PresenceInfo::set_userId_attr(const XSD::string_& _userId_attr)
{
    m_has_userId_attr = true;
    m_userId_attr = _userId_attr;
}

const XSD::string_& CT_PresenceInfo::get_userId_attr() const
{
    return m_userId_attr;
}

bool CT_PresenceInfo::has_providerId_attr() const
{
    return m_has_providerId_attr;
}

void CT_PresenceInfo::set_providerId_attr(const XSD::string_& _providerId_attr)
{
    m_has_providerId_attr = true;
    m_providerId_attr = _providerId_attr;
}

const XSD::string_& CT_PresenceInfo::get_providerId_attr() const
{
    return m_providerId_attr;
}

CT_PresenceInfo* CT_PresenceInfo::default_instance_ = NULL;

// CT_ParentCommentIdentifier
CT_ParentCommentIdentifier::CT_ParentCommentIdentifier()
    :m_has_authorId_attr(false),
     m_authorId_attr(0),
     m_has_idx_attr(false),
     m_idx_attr(0)
{
}
CT_ParentCommentIdentifier::~CT_ParentCommentIdentifier()
{
    clear();
}
void CT_ParentCommentIdentifier::clear()
{
    m_has_authorId_attr = false;
    m_authorId_attr = 0;

    m_has_idx_attr = false;
    m_idx_attr = 0;
}

void CT_ParentCommentIdentifier::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_authorId_attr)
    {
        _outStream << " " << "authorId" << "=\"" << m_authorId_attr << "\"";
    }



    if (m_has_idx_attr)
    {
        _outStream << " " << "idx" << "=\"" << m_idx_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ParentCommentIdentifier& CT_ParentCommentIdentifier::default_instance()
{
    if (!CT_ParentCommentIdentifier::default_instance_)
    {
        CT_ParentCommentIdentifier::default_instance_ = new CT_ParentCommentIdentifier();
    }
    return *CT_ParentCommentIdentifier::default_instance_;
}

bool CT_ParentCommentIdentifier::has_authorId_attr() const
{
    return m_has_authorId_attr;
}

void CT_ParentCommentIdentifier::set_authorId_attr(const XSD::unsignedInt_& _authorId_attr)
{
    m_has_authorId_attr = true;
    m_authorId_attr = _authorId_attr;
}

const XSD::unsignedInt_& CT_ParentCommentIdentifier::get_authorId_attr() const
{
    return m_authorId_attr;
}

bool CT_ParentCommentIdentifier::has_idx_attr() const
{
    return m_has_idx_attr;
}

void CT_ParentCommentIdentifier::set_idx_attr(const XSD::unsignedInt_& _idx_attr)
{
    m_has_idx_attr = true;
    m_idx_attr = _idx_attr;
}

const XSD::unsignedInt_& CT_ParentCommentIdentifier::get_idx_attr() const
{
    return m_idx_attr;
}

CT_ParentCommentIdentifier* CT_ParentCommentIdentifier::default_instance_ = NULL;

// CT_CommentThreading
CT_CommentThreading::CT_CommentThreading()
    :m_has_parentCm(false),
     m_parentCm(NULL),
     m_has_timeZoneBias_attr(false),
     m_timeZoneBias_attr(0)
{
}
CT_CommentThreading::~CT_CommentThreading()
{
    clear();
}
bool CT_CommentThreading::has_parentCm() const
{
    return m_has_parentCm;
}

CT_ParentCommentIdentifier* CT_CommentThreading::mutable_parentCm()
{
    m_has_parentCm = true;
    if (!m_parentCm)
    {
        m_parentCm = new CT_ParentCommentIdentifier();
    }
    return m_parentCm;
}

const CT_ParentCommentIdentifier& CT_CommentThreading::get_parentCm() const
{
    if (m_parentCm)
    {
        return *m_parentCm;
    }
    return CT_ParentCommentIdentifier::default_instance();
}

void CT_CommentThreading::clear()
{
    m_has_timeZoneBias_attr = false;
    m_timeZoneBias_attr = 0;

    m_has_parentCm = false;

    if (m_parentCm)
    {
        delete m_parentCm;
        m_parentCm = NULL;
    }

}

void CT_CommentThreading::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_timeZoneBias_attr)
    {
        _outStream << " " << "timeZoneBias" << "=\"" << m_timeZoneBias_attr << "\"";
    }

    _outStream << ">";


    if (m_has_parentCm)
    {
        m_parentCm->toXmlElem("p15:parentCm", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CommentThreading& CT_CommentThreading::default_instance()
{
    if (!CT_CommentThreading::default_instance_)
    {
        CT_CommentThreading::default_instance_ = new CT_CommentThreading();
    }
    return *CT_CommentThreading::default_instance_;
}

bool CT_CommentThreading::has_timeZoneBias_attr() const
{
    return m_has_timeZoneBias_attr;
}

void CT_CommentThreading::set_timeZoneBias_attr(const XSD::int_& _timeZoneBias_attr)
{
    m_has_timeZoneBias_attr = true;
    m_timeZoneBias_attr = _timeZoneBias_attr;
}

const XSD::int_& CT_CommentThreading::get_timeZoneBias_attr() const
{
    return m_timeZoneBias_attr;
}

CT_CommentThreading* CT_CommentThreading::default_instance_ = NULL;

// CT_ExtendedGuide
CT_ExtendedGuide::CT_ExtendedGuide()
    :m_has_clr(false),
     m_clr(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_id_attr(false),
     m_id_attr(0),
     m_has_name_attr(false),
     m_name_attr(""),
     m_has_orient_attr(false),
     m_orient_attr(NULL),
     m_has_pos_attr(false),
     m_pos_attr(NULL),
     m_has_userDrawn_attr(false),
     m_userDrawn_attr(false)
{
}
CT_ExtendedGuide::~CT_ExtendedGuide()
{
    clear();
}
bool CT_ExtendedGuide::has_clr() const
{
    return m_has_clr;
}

ns_a::CT_Color* CT_ExtendedGuide::mutable_clr()
{
    m_has_clr = true;
    if (!m_clr)
    {
        m_clr = new ns_a::CT_Color();
    }
    return m_clr;
}

const ns_a::CT_Color& CT_ExtendedGuide::get_clr() const
{
    if (m_clr)
    {
        return *m_clr;
    }
    return ns_a::CT_Color::default_instance();
}

bool CT_ExtendedGuide::has_extLst() const
{
    return m_has_extLst;
}

ns_p::CT_ExtensionList* CT_ExtendedGuide::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_p::CT_ExtensionList();
    }
    return m_extLst;
}

const ns_p::CT_ExtensionList& CT_ExtendedGuide::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_p::CT_ExtensionList::default_instance();
}

void CT_ExtendedGuide::clear()
{
    m_has_id_attr = false;
    m_id_attr = 0;

    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_orient_attr = false;

    if (m_orient_attr)
    {
        delete m_orient_attr;
        m_orient_attr = NULL;
    }


    m_has_pos_attr = false;

    if (m_pos_attr)
    {
        delete m_pos_attr;
        m_pos_attr = NULL;
    }


    m_has_userDrawn_attr = false;
    m_userDrawn_attr = false;

    m_has_clr = false;

    if (m_clr)
    {
        delete m_clr;
        m_clr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ExtendedGuide::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_id_attr);
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }



    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }



    if (m_has_orient_attr)
    {
        m_orient_attr->toXmlAttr("orient", _outStream);
    }



    if (m_has_pos_attr)
    {
        m_pos_attr->toXmlAttr("pos", _outStream);
    }



    if (m_has_userDrawn_attr)
    {
        _outStream << " " << "userDrawn" << "=\"" << XSD::XMLBooleanStr(m_userDrawn_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_clr);


    if (m_has_clr)
    {
        m_clr->toXmlElem("p15:clr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p15:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ExtendedGuide& CT_ExtendedGuide::default_instance()
{
    if (!CT_ExtendedGuide::default_instance_)
    {
        CT_ExtendedGuide::default_instance_ = new CT_ExtendedGuide();
    }
    return *CT_ExtendedGuide::default_instance_;
}

bool CT_ExtendedGuide::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_ExtendedGuide::set_id_attr(const XSD::unsignedInt_& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = _id_attr;
}

const XSD::unsignedInt_& CT_ExtendedGuide::get_id_attr() const
{
    return m_id_attr;
}

bool CT_ExtendedGuide::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_ExtendedGuide::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& CT_ExtendedGuide::get_name_attr() const
{
    return m_name_attr;
}

bool CT_ExtendedGuide::has_orient_attr() const
{
    return m_has_orient_attr;
}

void CT_ExtendedGuide::set_orient_attr(const ns_p::ST_Direction& _orient_attr)
{
    m_has_orient_attr = true;
    m_orient_attr = new ns_p::ST_Direction(_orient_attr);
}

const ns_p::ST_Direction& CT_ExtendedGuide::get_orient_attr() const
{
    if (m_orient_attr)
    {
        return *m_orient_attr;
    }
    return ns_p::ST_Direction::default_instance();
}

bool CT_ExtendedGuide::has_pos_attr() const
{
    return m_has_pos_attr;
}

void CT_ExtendedGuide::set_pos_attr(const ns_a::ST_Coordinate32& _pos_attr)
{
    m_has_pos_attr = true;
    m_pos_attr = new ns_a::ST_Coordinate32(_pos_attr);
}

const ns_a::ST_Coordinate32& CT_ExtendedGuide::get_pos_attr() const
{
    if (m_pos_attr)
    {
        return *m_pos_attr;
    }
    return ns_a::ST_Coordinate32::default_instance();
}

bool CT_ExtendedGuide::has_userDrawn_attr() const
{
    return m_has_userDrawn_attr;
}

void CT_ExtendedGuide::set_userDrawn_attr(const XSD::boolean_& _userDrawn_attr)
{
    m_has_userDrawn_attr = true;
    m_userDrawn_attr = _userDrawn_attr;
}

const XSD::boolean_& CT_ExtendedGuide::get_userDrawn_attr() const
{
    return m_userDrawn_attr;
}

CT_ExtendedGuide* CT_ExtendedGuide::default_instance_ = NULL;

// CT_ExtendedGuideList
CT_ExtendedGuideList::CT_ExtendedGuideList()
    :m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_ExtendedGuideList::~CT_ExtendedGuideList()
{
    clear();
}
CT_ExtendedGuide* CT_ExtendedGuideList::add_guide()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ExtendedGuide* pNewChild = pChildGroup->mutable_guide();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_ExtendedGuideList::has_extLst() const
{
    return m_has_extLst;
}

ns_p::CT_ExtensionList* CT_ExtendedGuideList::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_p::CT_ExtensionList();
    }
    return m_extLst;
}

const ns_p::CT_ExtensionList& CT_ExtendedGuideList::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_p::CT_ExtensionList::default_instance();
}

void CT_ExtendedGuideList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ExtendedGuideList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_guide())
            {
                (*iter)->get_guide().toXmlElem("p15:guide", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p15:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ExtendedGuideList& CT_ExtendedGuideList::default_instance()
{
    if (!CT_ExtendedGuideList::default_instance_)
    {
        CT_ExtendedGuideList::default_instance_ = new CT_ExtendedGuideList();
    }
    return *CT_ExtendedGuideList::default_instance_;
}


// CT_ExtendedGuideList::ChildGroup_1
CT_ExtendedGuideList::ChildGroup_1::ChildGroup_1()
    :m_has_guide(false),
     m_guide(NULL)
{
}
bool CT_ExtendedGuideList::ChildGroup_1::has_guide() const
{
    return m_has_guide;
}

CT_ExtendedGuide* CT_ExtendedGuideList::ChildGroup_1::mutable_guide()
{

    m_has_guide = true;
    if (!m_guide)
    {
        m_guide = new CT_ExtendedGuide();
    }
    return m_guide;
}

const CT_ExtendedGuide& CT_ExtendedGuideList::ChildGroup_1::get_guide() const
{
    if (m_guide)
    {
        return *m_guide;
    }
    return CT_ExtendedGuide::default_instance();
}

CT_ExtendedGuideList* CT_ExtendedGuideList::default_instance_ = NULL;

// CT_ChartTrackingRefBased
CT_ChartTrackingRefBased::CT_ChartTrackingRefBased()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
CT_ChartTrackingRefBased::~CT_ChartTrackingRefBased()
{
    clear();
}
void CT_ChartTrackingRefBased::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void CT_ChartTrackingRefBased::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ChartTrackingRefBased& CT_ChartTrackingRefBased::default_instance()
{
    if (!CT_ChartTrackingRefBased::default_instance_)
    {
        CT_ChartTrackingRefBased::default_instance_ = new CT_ChartTrackingRefBased();
    }
    return *CT_ChartTrackingRefBased::default_instance_;
}

bool CT_ChartTrackingRefBased::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_ChartTrackingRefBased::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& CT_ChartTrackingRefBased::get_val_attr() const
{
    return m_val_attr;
}

CT_ChartTrackingRefBased* CT_ChartTrackingRefBased::default_instance_ = NULL;

// prstTrans_element
prstTrans_element::prstTrans_element()
    :m_has_prst_attr(false),
     m_prst_attr(""),
     m_has_invX_attr(false),
     m_invX_attr(false),
     m_has_invY_attr(false),
     m_invY_attr(false)
{
}
prstTrans_element::~prstTrans_element()
{
    clear();
}
void prstTrans_element::clear()
{
    m_has_prst_attr = false;
    m_prst_attr.clear();

    m_has_invX_attr = false;
    m_invX_attr = false;

    m_has_invY_attr = false;
    m_invY_attr = false;
}

void prstTrans_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p15:prstTrans";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:p15=\"http://schemas.microsoft.com/office/powerpoint/2012/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_prst_attr)
    {
        _outStream << " " << "prst" << "=\"" << m_prst_attr << "\"";
    }



    if (m_has_invX_attr)
    {
        _outStream << " " << "invX" << "=\"" << XSD::XMLBooleanStr(m_invX_attr) << "\"";
    }



    if (m_has_invY_attr)
    {
        _outStream << " " << "invY" << "=\"" << XSD::XMLBooleanStr(m_invY_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</p15:prstTrans>";
}

const prstTrans_element& prstTrans_element::default_instance()
{
    if (!prstTrans_element::default_instance_)
    {
        prstTrans_element::default_instance_ = new prstTrans_element();
    }
    return *prstTrans_element::default_instance_;
}

bool prstTrans_element::has_prst_attr() const
{
    return m_has_prst_attr;
}

void prstTrans_element::set_prst_attr(const XSD::string_& _prst_attr)
{
    m_has_prst_attr = true;
    m_prst_attr = _prst_attr;
}

const XSD::string_& prstTrans_element::get_prst_attr() const
{
    return m_prst_attr;
}

bool prstTrans_element::has_invX_attr() const
{
    return m_has_invX_attr;
}

void prstTrans_element::set_invX_attr(const XSD::boolean_& _invX_attr)
{
    m_has_invX_attr = true;
    m_invX_attr = _invX_attr;
}

const XSD::boolean_& prstTrans_element::get_invX_attr() const
{
    return m_invX_attr;
}

bool prstTrans_element::has_invY_attr() const
{
    return m_has_invY_attr;
}

void prstTrans_element::set_invY_attr(const XSD::boolean_& _invY_attr)
{
    m_has_invY_attr = true;
    m_invY_attr = _invY_attr;
}

const XSD::boolean_& prstTrans_element::get_invY_attr() const
{
    return m_invY_attr;
}

prstTrans_element* prstTrans_element::default_instance_ = NULL;

// presenceInfo_element
presenceInfo_element::presenceInfo_element()
    :m_has_userId_attr(false),
     m_userId_attr(""),
     m_has_providerId_attr(false),
     m_providerId_attr("")
{
}
presenceInfo_element::~presenceInfo_element()
{
    clear();
}
void presenceInfo_element::clear()
{
    m_has_userId_attr = false;
    m_userId_attr.clear();

    m_has_providerId_attr = false;
    m_providerId_attr.clear();
}

void presenceInfo_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p15:presenceInfo";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:p15=\"http://schemas.microsoft.com/office/powerpoint/2012/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_userId_attr);
    if (m_has_userId_attr)
    {
        _outStream << " " << "userId" << "=\"" << m_userId_attr << "\"";
    }


    assert(m_has_providerId_attr);
    if (m_has_providerId_attr)
    {
        _outStream << " " << "providerId" << "=\"" << m_providerId_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</p15:presenceInfo>";
}

const presenceInfo_element& presenceInfo_element::default_instance()
{
    if (!presenceInfo_element::default_instance_)
    {
        presenceInfo_element::default_instance_ = new presenceInfo_element();
    }
    return *presenceInfo_element::default_instance_;
}

bool presenceInfo_element::has_userId_attr() const
{
    return m_has_userId_attr;
}

void presenceInfo_element::set_userId_attr(const XSD::string_& _userId_attr)
{
    m_has_userId_attr = true;
    m_userId_attr = _userId_attr;
}

const XSD::string_& presenceInfo_element::get_userId_attr() const
{
    return m_userId_attr;
}

bool presenceInfo_element::has_providerId_attr() const
{
    return m_has_providerId_attr;
}

void presenceInfo_element::set_providerId_attr(const XSD::string_& _providerId_attr)
{
    m_has_providerId_attr = true;
    m_providerId_attr = _providerId_attr;
}

const XSD::string_& presenceInfo_element::get_providerId_attr() const
{
    return m_providerId_attr;
}

presenceInfo_element* presenceInfo_element::default_instance_ = NULL;

// threadingInfo_element
threadingInfo_element::threadingInfo_element()
    :m_has_parentCm(false),
     m_parentCm(NULL),
     m_has_timeZoneBias_attr(false),
     m_timeZoneBias_attr(0)
{
}
threadingInfo_element::~threadingInfo_element()
{
    clear();
}
bool threadingInfo_element::has_parentCm() const
{
    return m_has_parentCm;
}

CT_ParentCommentIdentifier* threadingInfo_element::mutable_parentCm()
{
    m_has_parentCm = true;
    if (!m_parentCm)
    {
        m_parentCm = new CT_ParentCommentIdentifier();
    }
    return m_parentCm;
}

const CT_ParentCommentIdentifier& threadingInfo_element::get_parentCm() const
{
    if (m_parentCm)
    {
        return *m_parentCm;
    }
    return CT_ParentCommentIdentifier::default_instance();
}

void threadingInfo_element::clear()
{
    m_has_timeZoneBias_attr = false;
    m_timeZoneBias_attr = 0;

    m_has_parentCm = false;

    if (m_parentCm)
    {
        delete m_parentCm;
        m_parentCm = NULL;
    }

}

void threadingInfo_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p15:threadingInfo";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:p15=\"http://schemas.microsoft.com/office/powerpoint/2012/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_timeZoneBias_attr)
    {
        _outStream << " " << "timeZoneBias" << "=\"" << m_timeZoneBias_attr << "\"";
    }

    _outStream << ">";


    if (m_has_parentCm)
    {
        m_parentCm->toXmlElem("p15:parentCm", "", _outStream);
    }

    _outStream << "</p15:threadingInfo>";
}

const threadingInfo_element& threadingInfo_element::default_instance()
{
    if (!threadingInfo_element::default_instance_)
    {
        threadingInfo_element::default_instance_ = new threadingInfo_element();
    }
    return *threadingInfo_element::default_instance_;
}

bool threadingInfo_element::has_timeZoneBias_attr() const
{
    return m_has_timeZoneBias_attr;
}

void threadingInfo_element::set_timeZoneBias_attr(const XSD::int_& _timeZoneBias_attr)
{
    m_has_timeZoneBias_attr = true;
    m_timeZoneBias_attr = _timeZoneBias_attr;
}

const XSD::int_& threadingInfo_element::get_timeZoneBias_attr() const
{
    return m_timeZoneBias_attr;
}

threadingInfo_element* threadingInfo_element::default_instance_ = NULL;

// sldGuideLst_element
sldGuideLst_element::sldGuideLst_element()
    :m_has_extLst(false),
     m_extLst(NULL)
{
}
sldGuideLst_element::~sldGuideLst_element()
{
    clear();
}
CT_ExtendedGuide* sldGuideLst_element::add_guide()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ExtendedGuide* pNewChild = pChildGroup->mutable_guide();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool sldGuideLst_element::has_extLst() const
{
    return m_has_extLst;
}

ns_p::CT_ExtensionList* sldGuideLst_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_p::CT_ExtensionList();
    }
    return m_extLst;
}

const ns_p::CT_ExtensionList& sldGuideLst_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_p::CT_ExtensionList::default_instance();
}

void sldGuideLst_element::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void sldGuideLst_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p15:sldGuideLst";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:p15=\"http://schemas.microsoft.com/office/powerpoint/2012/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_guide())
            {
                (*iter)->get_guide().toXmlElem("p15:guide", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p15:extLst", "", _outStream);
    }

    _outStream << "</p15:sldGuideLst>";
}

const sldGuideLst_element& sldGuideLst_element::default_instance()
{
    if (!sldGuideLst_element::default_instance_)
    {
        sldGuideLst_element::default_instance_ = new sldGuideLst_element();
    }
    return *sldGuideLst_element::default_instance_;
}


// sldGuideLst_element::ChildGroup_1
sldGuideLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_guide(false),
     m_guide(NULL)
{
}
bool sldGuideLst_element::ChildGroup_1::has_guide() const
{
    return m_has_guide;
}

CT_ExtendedGuide* sldGuideLst_element::ChildGroup_1::mutable_guide()
{

    m_has_guide = true;
    if (!m_guide)
    {
        m_guide = new CT_ExtendedGuide();
    }
    return m_guide;
}

const CT_ExtendedGuide& sldGuideLst_element::ChildGroup_1::get_guide() const
{
    if (m_guide)
    {
        return *m_guide;
    }
    return CT_ExtendedGuide::default_instance();
}

sldGuideLst_element* sldGuideLst_element::default_instance_ = NULL;

// notesGuideLst_element
notesGuideLst_element::notesGuideLst_element()
    :m_has_extLst(false),
     m_extLst(NULL)
{
}
notesGuideLst_element::~notesGuideLst_element()
{
    clear();
}
CT_ExtendedGuide* notesGuideLst_element::add_guide()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_ExtendedGuide* pNewChild = pChildGroup->mutable_guide();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool notesGuideLst_element::has_extLst() const
{
    return m_has_extLst;
}

ns_p::CT_ExtensionList* notesGuideLst_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_p::CT_ExtensionList();
    }
    return m_extLst;
}

const ns_p::CT_ExtensionList& notesGuideLst_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_p::CT_ExtensionList::default_instance();
}

void notesGuideLst_element::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void notesGuideLst_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p15:notesGuideLst";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:p15=\"http://schemas.microsoft.com/office/powerpoint/2012/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_guide())
            {
                (*iter)->get_guide().toXmlElem("p15:guide", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p15:extLst", "", _outStream);
    }

    _outStream << "</p15:notesGuideLst>";
}

const notesGuideLst_element& notesGuideLst_element::default_instance()
{
    if (!notesGuideLst_element::default_instance_)
    {
        notesGuideLst_element::default_instance_ = new notesGuideLst_element();
    }
    return *notesGuideLst_element::default_instance_;
}


// notesGuideLst_element::ChildGroup_1
notesGuideLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_guide(false),
     m_guide(NULL)
{
}
bool notesGuideLst_element::ChildGroup_1::has_guide() const
{
    return m_has_guide;
}

CT_ExtendedGuide* notesGuideLst_element::ChildGroup_1::mutable_guide()
{

    m_has_guide = true;
    if (!m_guide)
    {
        m_guide = new CT_ExtendedGuide();
    }
    return m_guide;
}

const CT_ExtendedGuide& notesGuideLst_element::ChildGroup_1::get_guide() const
{
    if (m_guide)
    {
        return *m_guide;
    }
    return CT_ExtendedGuide::default_instance();
}

notesGuideLst_element* notesGuideLst_element::default_instance_ = NULL;

// chartTrackingRefBased_element
chartTrackingRefBased_element::chartTrackingRefBased_element()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
chartTrackingRefBased_element::~chartTrackingRefBased_element()
{
    clear();
}
void chartTrackingRefBased_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void chartTrackingRefBased_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p15:chartTrackingRefBased";

    _outStream << " " << "xmlns:p14=\"http://schemas.microsoft.com/office/powerpoint/2010/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:p15=\"http://schemas.microsoft.com/office/powerpoint/2012/main\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</p15:chartTrackingRefBased>";
}

const chartTrackingRefBased_element& chartTrackingRefBased_element::default_instance()
{
    if (!chartTrackingRefBased_element::default_instance_)
    {
        chartTrackingRefBased_element::default_instance_ = new chartTrackingRefBased_element();
    }
    return *chartTrackingRefBased_element::default_instance_;
}

bool chartTrackingRefBased_element::has_val_attr() const
{
    return m_has_val_attr;
}

void chartTrackingRefBased_element::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& chartTrackingRefBased_element::get_val_attr() const
{
    return m_val_attr;
}

chartTrackingRefBased_element* chartTrackingRefBased_element::default_instance_ = NULL;
}