namespace ns_p15 {
class Element;
class Attribute;
class CT_PresetTransition;
class CT_PresenceInfo;
class CT_ParentCommentIdentifier;
class CT_CommentThreading;
class CT_ExtendedGuide;
class CT_ExtendedGuideList;
class CT_ChartTrackingRefBased;
class prstTrans_element;
class presenceInfo_element;
class threadingInfo_element;
class sldGuideLst_element;
class notesGuideLst_element;
class chartTrackingRefBased_element;
}
#ifndef __pml_2012_xsd_
#define __pml_2012_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "pml_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "pml-2010_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-lockedCanvas_xsd.h"
#include "dml-chartDrawing_xsd.h"
#include "dml-mainExt_xsd.h"
namespace ns_p15 {
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

class CT_PresetTransition: public XSD::ComplexType
{
public:
    CT_PresetTransition();
    ~CT_PresetTransition();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PresetTransition& default_instance();
    bool has_prst_attr() const;
    void set_prst_attr(const XSD::string_& _prst_attr);
    const XSD::string_& get_prst_attr() const;
    bool has_invX_attr() const;
    void set_invX_attr(const XSD::boolean_& _invX_attr);
    const XSD::boolean_& get_invX_attr() const;
    bool has_invY_attr() const;
    void set_invY_attr(const XSD::boolean_& _invY_attr);
    const XSD::boolean_& get_invY_attr() const;
protected:
private:
    static CT_PresetTransition* default_instance_;
    bool m_has_prst_attr;
    XSD::string_ m_prst_attr;
    bool m_has_invX_attr;
    XSD::boolean_ m_invX_attr;
    bool m_has_invY_attr;
    XSD::boolean_ m_invY_attr;
};

class CT_PresenceInfo: public XSD::ComplexType
{
public:
    CT_PresenceInfo();
    ~CT_PresenceInfo();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PresenceInfo& default_instance();
    bool has_userId_attr() const;
    void set_userId_attr(const XSD::string_& _userId_attr);
    const XSD::string_& get_userId_attr() const;
    bool has_providerId_attr() const;
    void set_providerId_attr(const XSD::string_& _providerId_attr);
    const XSD::string_& get_providerId_attr() const;
protected:
private:
    static CT_PresenceInfo* default_instance_;
    bool m_has_userId_attr;
    XSD::string_ m_userId_attr;
    bool m_has_providerId_attr;
    XSD::string_ m_providerId_attr;
};

class CT_ParentCommentIdentifier: public XSD::ComplexType
{
public:
    CT_ParentCommentIdentifier();
    ~CT_ParentCommentIdentifier();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ParentCommentIdentifier& default_instance();
    bool has_authorId_attr() const;
    void set_authorId_attr(const XSD::unsignedInt_& _authorId_attr);
    const XSD::unsignedInt_& get_authorId_attr() const;
    bool has_idx_attr() const;
    void set_idx_attr(const XSD::unsignedInt_& _idx_attr);
    const XSD::unsignedInt_& get_idx_attr() const;
protected:
private:
    static CT_ParentCommentIdentifier* default_instance_;
    bool m_has_authorId_attr;
    XSD::unsignedInt_ m_authorId_attr;
    bool m_has_idx_attr;
    XSD::unsignedInt_ m_idx_attr;
};

class CT_CommentThreading: public XSD::ComplexType
{
public:
    CT_CommentThreading();
    ~CT_CommentThreading();
    bool has_parentCm() const;
    CT_ParentCommentIdentifier* mutable_parentCm();
    const CT_ParentCommentIdentifier& get_parentCm() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CommentThreading& default_instance();
    bool has_timeZoneBias_attr() const;
    void set_timeZoneBias_attr(const XSD::int_& _timeZoneBias_attr);
    const XSD::int_& get_timeZoneBias_attr() const;
protected:
private:
    bool m_has_parentCm;
    CT_ParentCommentIdentifier* m_parentCm;
    static CT_CommentThreading* default_instance_;
    bool m_has_timeZoneBias_attr;
    XSD::int_ m_timeZoneBias_attr;
};

class CT_ExtendedGuide: public XSD::ComplexType
{
public:
    CT_ExtendedGuide();
    ~CT_ExtendedGuide();
    bool has_clr() const;
    ns_a::CT_Color* mutable_clr();
    const ns_a::CT_Color& get_clr() const;
    bool has_extLst() const;
    ns_p::CT_ExtensionList* mutable_extLst();
    const ns_p::CT_ExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ExtendedGuide& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const XSD::unsignedInt_& _id_attr);
    const XSD::unsignedInt_& get_id_attr() const;
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
    bool has_orient_attr() const;
    void set_orient_attr(const ns_p::ST_Direction& _orient_attr);
    const ns_p::ST_Direction& get_orient_attr() const;
    bool has_pos_attr() const;
    void set_pos_attr(const ns_a::ST_Coordinate32& _pos_attr);
    const ns_a::ST_Coordinate32& get_pos_attr() const;
    bool has_userDrawn_attr() const;
    void set_userDrawn_attr(const XSD::boolean_& _userDrawn_attr);
    const XSD::boolean_& get_userDrawn_attr() const;
protected:
private:
    bool m_has_clr;
    ns_a::CT_Color* m_clr;
    bool m_has_extLst;
    ns_p::CT_ExtensionList* m_extLst;
    static CT_ExtendedGuide* default_instance_;
    bool m_has_id_attr;
    XSD::unsignedInt_ m_id_attr;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
    bool m_has_orient_attr;
    ns_p::ST_Direction* m_orient_attr;
    bool m_has_pos_attr;
    ns_a::ST_Coordinate32* m_pos_attr;
    bool m_has_userDrawn_attr;
    XSD::boolean_ m_userDrawn_attr;
};

class CT_ExtendedGuideList: public XSD::ComplexType
{
public:
    CT_ExtendedGuideList();
    ~CT_ExtendedGuideList();
    CT_ExtendedGuide* add_guide();
    bool has_extLst() const;
    ns_p::CT_ExtensionList* mutable_extLst();
    const ns_p::CT_ExtensionList& get_extLst() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ExtendedGuideList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_guide() const;
        CT_ExtendedGuide* mutable_guide();
        const CT_ExtendedGuide& get_guide() const;
    protected:
    private:
        bool m_has_guide;
        CT_ExtendedGuide* m_guide;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_extLst;
    ns_p::CT_ExtensionList* m_extLst;
    static CT_ExtendedGuideList* default_instance_;
};

class CT_ChartTrackingRefBased: public XSD::ComplexType
{
public:
    CT_ChartTrackingRefBased();
    ~CT_ChartTrackingRefBased();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ChartTrackingRefBased& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static CT_ChartTrackingRefBased* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

class prstTrans_element: public Element
{
public:
    prstTrans_element();
    ~prstTrans_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const prstTrans_element& default_instance();
    bool has_prst_attr() const;
    void set_prst_attr(const XSD::string_& _prst_attr);
    const XSD::string_& get_prst_attr() const;
    bool has_invX_attr() const;
    void set_invX_attr(const XSD::boolean_& _invX_attr);
    const XSD::boolean_& get_invX_attr() const;
    bool has_invY_attr() const;
    void set_invY_attr(const XSD::boolean_& _invY_attr);
    const XSD::boolean_& get_invY_attr() const;
protected:
private:
    static prstTrans_element* default_instance_;
    bool m_has_prst_attr;
    XSD::string_ m_prst_attr;
    bool m_has_invX_attr;
    XSD::boolean_ m_invX_attr;
    bool m_has_invY_attr;
    XSD::boolean_ m_invY_attr;
};

class presenceInfo_element: public Element
{
public:
    presenceInfo_element();
    ~presenceInfo_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const presenceInfo_element& default_instance();
    bool has_userId_attr() const;
    void set_userId_attr(const XSD::string_& _userId_attr);
    const XSD::string_& get_userId_attr() const;
    bool has_providerId_attr() const;
    void set_providerId_attr(const XSD::string_& _providerId_attr);
    const XSD::string_& get_providerId_attr() const;
protected:
private:
    static presenceInfo_element* default_instance_;
    bool m_has_userId_attr;
    XSD::string_ m_userId_attr;
    bool m_has_providerId_attr;
    XSD::string_ m_providerId_attr;
};

class threadingInfo_element: public Element
{
public:
    threadingInfo_element();
    ~threadingInfo_element();
    bool has_parentCm() const;
    CT_ParentCommentIdentifier* mutable_parentCm();
    const CT_ParentCommentIdentifier& get_parentCm() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const threadingInfo_element& default_instance();
    bool has_timeZoneBias_attr() const;
    void set_timeZoneBias_attr(const XSD::int_& _timeZoneBias_attr);
    const XSD::int_& get_timeZoneBias_attr() const;
protected:
private:
    bool m_has_parentCm;
    CT_ParentCommentIdentifier* m_parentCm;
    static threadingInfo_element* default_instance_;
    bool m_has_timeZoneBias_attr;
    XSD::int_ m_timeZoneBias_attr;
};

class sldGuideLst_element: public Element
{
public:
    sldGuideLst_element();
    ~sldGuideLst_element();
    CT_ExtendedGuide* add_guide();
    bool has_extLst() const;
    ns_p::CT_ExtensionList* mutable_extLst();
    const ns_p::CT_ExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const sldGuideLst_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_guide() const;
        CT_ExtendedGuide* mutable_guide();
        const CT_ExtendedGuide& get_guide() const;
    protected:
    private:
        bool m_has_guide;
        CT_ExtendedGuide* m_guide;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_extLst;
    ns_p::CT_ExtensionList* m_extLst;
    static sldGuideLst_element* default_instance_;
};

class notesGuideLst_element: public Element
{
public:
    notesGuideLst_element();
    ~notesGuideLst_element();
    CT_ExtendedGuide* add_guide();
    bool has_extLst() const;
    ns_p::CT_ExtensionList* mutable_extLst();
    const ns_p::CT_ExtensionList& get_extLst() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const notesGuideLst_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_guide() const;
        CT_ExtendedGuide* mutable_guide();
        const CT_ExtendedGuide& get_guide() const;
    protected:
    private:
        bool m_has_guide;
        CT_ExtendedGuide* m_guide;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_extLst;
    ns_p::CT_ExtensionList* m_extLst;
    static notesGuideLst_element* default_instance_;
};

class chartTrackingRefBased_element: public Element
{
public:
    chartTrackingRefBased_element();
    ~chartTrackingRefBased_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const chartTrackingRefBased_element& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::boolean_& _val_attr);
    const XSD::boolean_& get_val_attr() const;
protected:
private:
    static chartTrackingRefBased_element* default_instance_;
    bool m_has_val_attr;
    XSD::boolean_ m_val_attr;
};

}
#endif