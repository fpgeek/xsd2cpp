#include "shared-contentTypes_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_ct {
 using namespace std;

    // Element

    // Attribute

    // CT_Default
    CT_Default::CT_Default()
    :m_has_Extension_attr(false),
    m_Extension_attr(""),
    m_has_ContentType_attr(false),
    m_ContentType_attr("")
    {
    }
    CT_Default::~CT_Default()
{
    clear();    }
    void CT_Default::clear()
    {    
    m_has_Extension_attr = false;
    m_Extension_attr.clear();
    
    m_has_ContentType_attr = false;
    m_ContentType_attr.clear();
    }

    void CT_Default::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    assert(m_has_Extension_attr);
    if (m_has_Extension_attr)
    {
        _outStream << " " << "Extension" << "=\"" << m_Extension_attr << "\"";
    }
    
    
    assert(m_has_ContentType_attr);
    if (m_has_ContentType_attr)
    {
        _outStream << " " << "ContentType" << "=\"" << m_ContentType_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Default& CT_Default::default_instance()
    {    
    if (!CT_Default::default_instance_)
    {
        CT_Default::default_instance_ = new CT_Default();
    }
    return *CT_Default::default_instance_;
    }

    bool CT_Default::has_Extension_attr() const
    {    
    return m_has_Extension_attr;
    }

    void CT_Default::set_Extension_attr(const XSD::string_& _Extension_attr)
    {    
    m_has_Extension_attr = true;
    m_Extension_attr = _Extension_attr;
    }

    const XSD::string_& CT_Default::get_Extension_attr() const
    {    
    return m_Extension_attr;
    }

    bool CT_Default::has_ContentType_attr() const
    {    
    return m_has_ContentType_attr;
    }

    void CT_Default::set_ContentType_attr(const XSD::string_& _ContentType_attr)
    {    
    m_has_ContentType_attr = true;
    m_ContentType_attr = _ContentType_attr;
    }

    const XSD::string_& CT_Default::get_ContentType_attr() const
    {    
    return m_ContentType_attr;
    }

CT_Default* CT_Default::default_instance_ = NULL;

    // CT_Override
    CT_Override::CT_Override()
    :m_has_PartName_attr(false),
    m_PartName_attr(""),
    m_has_ContentType_attr(false),
    m_ContentType_attr("")
    {
    }
    CT_Override::~CT_Override()
{
    clear();    }
    void CT_Override::clear()
    {    
    m_has_PartName_attr = false;
    m_PartName_attr.clear();
    
    m_has_ContentType_attr = false;
    m_ContentType_attr.clear();
    }

    void CT_Override::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    assert(m_has_PartName_attr);
    if (m_has_PartName_attr)
    {
        _outStream << " " << "PartName" << "=\"" << m_PartName_attr << "\"";
    }
    
    
    assert(m_has_ContentType_attr);
    if (m_has_ContentType_attr)
    {
        _outStream << " " << "ContentType" << "=\"" << m_ContentType_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Override& CT_Override::default_instance()
    {    
    if (!CT_Override::default_instance_)
    {
        CT_Override::default_instance_ = new CT_Override();
    }
    return *CT_Override::default_instance_;
    }

    bool CT_Override::has_PartName_attr() const
    {    
    return m_has_PartName_attr;
    }

    void CT_Override::set_PartName_attr(const XSD::string_& _PartName_attr)
    {    
    m_has_PartName_attr = true;
    m_PartName_attr = _PartName_attr;
    }

    const XSD::string_& CT_Override::get_PartName_attr() const
    {    
    return m_PartName_attr;
    }

    bool CT_Override::has_ContentType_attr() const
    {    
    return m_has_ContentType_attr;
    }

    void CT_Override::set_ContentType_attr(const XSD::string_& _ContentType_attr)
    {    
    m_has_ContentType_attr = true;
    m_ContentType_attr = _ContentType_attr;
    }

    const XSD::string_& CT_Override::get_ContentType_attr() const
    {    
    return m_ContentType_attr;
    }

CT_Override* CT_Override::default_instance_ = NULL;

    // CT_Types
    CT_Types::CT_Types()

    {
    }
    CT_Types::~CT_Types()
{
    clear();    }
    CT_Default* CT_Types::add_Default()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Default* pNewChild = pChildGroup->mutable_Default();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Override* CT_Types::add_Override()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Override* pNewChild = pChildGroup->mutable_Override();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Types::clear()
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

    void CT_Types::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
    if ((*iter)->has_Default())
    {
        (*iter)->get_Default().toXmlElem("ct:Default", "", _outStream);
    }
    
    
    else if ((*iter)->has_Override())
    {
        (*iter)->get_Override().toXmlElem("ct:Override", "", _outStream);
    }
    
    
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Types& CT_Types::default_instance()
    {    
    if (!CT_Types::default_instance_)
    {
        CT_Types::default_instance_ = new CT_Types();
    }
    return *CT_Types::default_instance_;
    }


    // CT_Types::ChildGroup_1
    CT_Types::ChildGroup_1::ChildGroup_1()
    :m_has_Default(false),
    m_Default(NULL),
    m_has_Override(false),
    m_Override(NULL)
    {
    }
    bool CT_Types::ChildGroup_1::has_Default() const
    {    
    return m_has_Default;
    }

    CT_Default* CT_Types::ChildGroup_1::mutable_Default()
    {    
    
    m_has_Override = false;
    
    if (m_Override)
    {
        delete m_Override;
        m_Override = NULL;
    }
    ;
    
    m_has_Default = true;
    if (!m_Default)
    {
        m_Default = new CT_Default();
    }
    return m_Default;
    }

    const CT_Default& CT_Types::ChildGroup_1::get_Default() const
    {    
    if (m_Default)
    {
        return *m_Default;
    }
    return CT_Default::default_instance();
    }

    bool CT_Types::ChildGroup_1::has_Override() const
    {    
    return m_has_Override;
    }

    CT_Override* CT_Types::ChildGroup_1::mutable_Override()
    {    
    
    m_has_Default = false;
    
    if (m_Default)
    {
        delete m_Default;
        m_Default = NULL;
    }
    ;
    
    m_has_Override = true;
    if (!m_Override)
    {
        m_Override = new CT_Override();
    }
    return m_Override;
    }

    const CT_Override& CT_Types::ChildGroup_1::get_Override() const
    {    
    if (m_Override)
    {
        return *m_Override;
    }
    return CT_Override::default_instance();
    }

CT_Types* CT_Types::default_instance_ = NULL;

    // Types_element
    Types_element::Types_element()

    {
    }
    Types_element::~Types_element()
{
    clear();    }
    CT_Default* Types_element::add_Default()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Default* pNewChild = pChildGroup->mutable_Default();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_Override* Types_element::add_Override()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Override* pNewChild = pChildGroup->mutable_Override();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void Types_element::clear()
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

    void Types_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<ct:Types";
    
    _outStream << " " << "xmlns:ct=\"http://schemas.openxmlformats.org/package/2006/content-types\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_Default())
    {
        (*iter)->get_Default().toXmlElem("ct:Default", "", _outStream);
    }
    
    
    else if ((*iter)->has_Override())
    {
        (*iter)->get_Override().toXmlElem("ct:Override", "", _outStream);
    }
    
    
        }
    }
    
    _outStream << "</ct:Types>";
    }

    const Types_element& Types_element::default_instance()
    {    
    if (!Types_element::default_instance_)
    {
        Types_element::default_instance_ = new Types_element();
    }
    return *Types_element::default_instance_;
    }


    // Types_element::ChildGroup_1
    Types_element::ChildGroup_1::ChildGroup_1()
    :m_has_Default(false),
    m_Default(NULL),
    m_has_Override(false),
    m_Override(NULL)
    {
    }
    bool Types_element::ChildGroup_1::has_Default() const
    {    
    return m_has_Default;
    }

    CT_Default* Types_element::ChildGroup_1::mutable_Default()
    {    
    
    m_has_Override = false;
    
    if (m_Override)
    {
        delete m_Override;
        m_Override = NULL;
    }
    ;
    
    m_has_Default = true;
    if (!m_Default)
    {
        m_Default = new CT_Default();
    }
    return m_Default;
    }

    const CT_Default& Types_element::ChildGroup_1::get_Default() const
    {    
    if (m_Default)
    {
        return *m_Default;
    }
    return CT_Default::default_instance();
    }

    bool Types_element::ChildGroup_1::has_Override() const
    {    
    return m_has_Override;
    }

    CT_Override* Types_element::ChildGroup_1::mutable_Override()
    {    
    
    m_has_Default = false;
    
    if (m_Default)
    {
        delete m_Default;
        m_Default = NULL;
    }
    ;
    
    m_has_Override = true;
    if (!m_Override)
    {
        m_Override = new CT_Override();
    }
    return m_Override;
    }

    const CT_Override& Types_element::ChildGroup_1::get_Override() const
    {    
    if (m_Override)
    {
        return *m_Override;
    }
    return CT_Override::default_instance();
    }

Types_element* Types_element::default_instance_ = NULL;
}