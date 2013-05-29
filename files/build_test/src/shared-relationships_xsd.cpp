#include "shared-relationships_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_rs {
 using namespace std;

    // Element

    // Attribute

    // CT_Relationship
    CT_Relationship::CT_Relationship()
    :m_has_Id_attr(false),
    m_Id_attr(""),
    m_has_Type_attr(false),
    m_Type_attr(""),
    m_has_Target_attr(false),
    m_Target_attr(""),
    m_has_TargetMode_attr(false),
    m_TargetMode_attr("")
    {
    }
    CT_Relationship::~CT_Relationship()
{
    clear();    }
    void CT_Relationship::clear()
    {    
    m_has_Id_attr = false;
    m_Id_attr.clear();
    
    m_has_Type_attr = false;
    m_Type_attr.clear();
    
    m_has_Target_attr = false;
    m_Target_attr.clear();
    
    m_has_TargetMode_attr = false;
    m_TargetMode_attr.clear();
    }

    void CT_Relationship::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    assert(m_has_Id_attr);
    if (m_has_Id_attr)
    {
        _outStream << " " << "Id" << "=\"" << m_Id_attr << "\"";
    }
    
    
    assert(m_has_Type_attr);
    if (m_has_Type_attr)
    {
        _outStream << " " << "Type" << "=\"" << m_Type_attr << "\"";
    }
    
    
    assert(m_has_Target_attr);
    if (m_has_Target_attr)
    {
        _outStream << " " << "Target" << "=\"" << m_Target_attr << "\"";
    }
    
    
    
    if (m_has_TargetMode_attr)
    {
        _outStream << " " << "TargetMode" << "=\"" << m_TargetMode_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Relationship& CT_Relationship::default_instance()
    {    
    if (!CT_Relationship::default_instance_)
    {
        CT_Relationship::default_instance_ = new CT_Relationship();
    }
    return *CT_Relationship::default_instance_;
    }

    bool CT_Relationship::has_Id_attr() const
    {    
    return m_has_Id_attr;
    }

    void CT_Relationship::set_Id_attr(const XSD::string_& _Id_attr)
    {    
    m_has_Id_attr = true;
    m_Id_attr = _Id_attr;
    }

    const XSD::string_& CT_Relationship::get_Id_attr() const
    {    
    return m_Id_attr;
    }

    bool CT_Relationship::has_Type_attr() const
    {    
    return m_has_Type_attr;
    }

    void CT_Relationship::set_Type_attr(const XSD::string_& _Type_attr)
    {    
    m_has_Type_attr = true;
    m_Type_attr = _Type_attr;
    }

    const XSD::string_& CT_Relationship::get_Type_attr() const
    {    
    return m_Type_attr;
    }

    bool CT_Relationship::has_Target_attr() const
    {    
    return m_has_Target_attr;
    }

    void CT_Relationship::set_Target_attr(const XSD::string_& _Target_attr)
    {    
    m_has_Target_attr = true;
    m_Target_attr = _Target_attr;
    }

    const XSD::string_& CT_Relationship::get_Target_attr() const
    {    
    return m_Target_attr;
    }

    bool CT_Relationship::has_TargetMode_attr() const
    {    
    return m_has_TargetMode_attr;
    }

    void CT_Relationship::set_TargetMode_attr(const XSD::string_& _TargetMode_attr)
    {    
    m_has_TargetMode_attr = true;
    m_TargetMode_attr = _TargetMode_attr;
    }

    const XSD::string_& CT_Relationship::get_TargetMode_attr() const
    {    
    return m_TargetMode_attr;
    }

CT_Relationship* CT_Relationship::default_instance_ = NULL;

    // CT_Relationships
    CT_Relationships::CT_Relationships()

    {
    }
    CT_Relationships::~CT_Relationships()
{
    clear();    }
    CT_Relationship* CT_Relationships::add_Relationship()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Relationship* pNewChild = pChildGroup->mutable_Relationship();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Relationships::clear()
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

    void CT_Relationships::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    if ((*iter)->has_Relationship())
    {
        (*iter)->get_Relationship().toXmlElem("rs:Relationship", "", _outStream);
    }
    
    
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Relationships& CT_Relationships::default_instance()
    {    
    if (!CT_Relationships::default_instance_)
    {
        CT_Relationships::default_instance_ = new CT_Relationships();
    }
    return *CT_Relationships::default_instance_;
    }


    // CT_Relationships::ChildGroup_1
    CT_Relationships::ChildGroup_1::ChildGroup_1()
    :m_has_Relationship(false),
    m_Relationship(NULL)
    {
    }
    bool CT_Relationships::ChildGroup_1::has_Relationship() const
    {    
    return m_has_Relationship;
    }

    CT_Relationship* CT_Relationships::ChildGroup_1::mutable_Relationship()
    {    
    
    m_has_Relationship = true;
    if (!m_Relationship)
    {
        m_Relationship = new CT_Relationship();
    }
    return m_Relationship;
    }

    const CT_Relationship& CT_Relationships::ChildGroup_1::get_Relationship() const
    {    
    if (m_Relationship)
    {
        return *m_Relationship;
    }
    return CT_Relationship::default_instance();
    }

CT_Relationships* CT_Relationships::default_instance_ = NULL;

    // Relationships_element
    Relationships_element::Relationships_element()

    {
    }
    Relationships_element::~Relationships_element()
{
    clear();    }
    CT_Relationship* Relationships_element::add_Relationship()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Relationship* pNewChild = pChildGroup->mutable_Relationship();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void Relationships_element::clear()
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

    void Relationships_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<rs:Relationships";
    
    _outStream << " " << "xmlns:rs=\"http://schemas.openxmlformats.org/package/2006/relationships\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_Relationship())
    {
        (*iter)->get_Relationship().toXmlElem("rs:Relationship", "", _outStream);
    }
    
    
        }
    }
    
    _outStream << "</rs:Relationships>";
    }

    const Relationships_element& Relationships_element::default_instance()
    {    
    if (!Relationships_element::default_instance_)
    {
        Relationships_element::default_instance_ = new Relationships_element();
    }
    return *Relationships_element::default_instance_;
    }


    // Relationships_element::ChildGroup_1
    Relationships_element::ChildGroup_1::ChildGroup_1()
    :m_has_Relationship(false),
    m_Relationship(NULL)
    {
    }
    bool Relationships_element::ChildGroup_1::has_Relationship() const
    {    
    return m_has_Relationship;
    }

    CT_Relationship* Relationships_element::ChildGroup_1::mutable_Relationship()
    {    
    
    m_has_Relationship = true;
    if (!m_Relationship)
    {
        m_Relationship = new CT_Relationship();
    }
    return m_Relationship;
    }

    const CT_Relationship& Relationships_element::ChildGroup_1::get_Relationship() const
    {    
    if (m_Relationship)
    {
        return *m_Relationship;
    }
    return CT_Relationship::default_instance();
    }

Relationships_element* Relationships_element::default_instance_ = NULL;
}