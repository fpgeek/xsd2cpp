#include "mc_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_mc {
 using namespace std;

    // Element

    // Attribute

    // CT_AlternateContent
    CT_AlternateContent::CT_AlternateContent()
    :m_has_Choice(false),
    m_Choice(NULL),
    m_has_Fallback(false),
    m_Fallback(NULL)
    {
    }
    CT_AlternateContent::~CT_AlternateContent()
{
    clear();    }
    bool CT_AlternateContent::has_Choice() const
    {    
    return m_has_Choice;
    }

    CT_Choice* CT_AlternateContent::mutable_Choice()
    {    
    m_has_Choice = true;
    if (!m_Choice)
    {
        m_Choice = new CT_Choice();
    }
    return m_Choice;
    }

    const CT_Choice& CT_AlternateContent::get_Choice() const
    {    
    if (m_Choice)
    {
        return *m_Choice;
    }
    return CT_Choice::default_instance();
    }

    bool CT_AlternateContent::has_Fallback() const
    {    
    return m_has_Fallback;
    }

    CT_Fallback* CT_AlternateContent::mutable_Fallback()
    {    
    m_has_Fallback = true;
    if (!m_Fallback)
    {
        m_Fallback = new CT_Fallback();
    }
    return m_Fallback;
    }

    const CT_Fallback& CT_AlternateContent::get_Fallback() const
    {    
    if (m_Fallback)
    {
        return *m_Fallback;
    }
    return CT_Fallback::default_instance();
    }

    void CT_AlternateContent::clear()
    {    
    m_has_Choice = false;
    
    if (m_Choice)
    {
        delete m_Choice;
        m_Choice = NULL;
    }
    
    
    m_has_Fallback = false;
    
    if (m_Fallback)
    {
        delete m_Fallback;
        m_Fallback = NULL;
    }
    
    }

    void CT_AlternateContent::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has_Choice);
        
    
        assert(m_has_Fallback);
        
    
    if (m_has_Choice)
    {
        m_Choice->toXmlElem("mc:Choice", "", _outStream);
    }
    
    
    if (m_has_Fallback)
    {
        m_Fallback->toXmlElem("mc:Fallback", "", _outStream);
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AlternateContent& CT_AlternateContent::default_instance()
    {    
    if (!CT_AlternateContent::default_instance_)
    {
        CT_AlternateContent::default_instance_ = new CT_AlternateContent();
    }
    return *CT_AlternateContent::default_instance_;
    }

CT_AlternateContent* CT_AlternateContent::default_instance_ = NULL;

    // CT_Choice
    CT_Choice::CT_Choice()
    :m_has__any(false),
    m__any(NULL),
    m_has_Requires_attr(false),
    m_Requires_attr("")
    {
    }
    CT_Choice::~CT_Choice()
{
    clear();    }
    void CT_Choice::clear()
    {    
    m_has_Requires_attr = false;
    m_Requires_attr.clear();
    }

    void CT_Choice::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    assert(m_has_Requires_attr);
    if (m_has_Requires_attr)
    {
        _outStream << " " << "Requires" << "=\"" << m_Requires_attr << "\"";
    }
    
            _outStream << ">";
            
        assert(m_has__any);
        
    
    if (m_has__any)
    {
        m__any->toXml(_outStream);
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Choice& CT_Choice::default_instance()
    {    
    if (!CT_Choice::default_instance_)
    {
        CT_Choice::default_instance_ = new CT_Choice();
    }
    return *CT_Choice::default_instance_;
    }

    bool CT_Choice::has_Requires_attr() const
    {    
    return m_has_Requires_attr;
    }

    void CT_Choice::set_Requires_attr(const XSD::string_& _Requires_attr)
    {    
    m_has_Requires_attr = true;
    m_Requires_attr = _Requires_attr;
    }

    const XSD::string_& CT_Choice::get_Requires_attr() const
    {    
    return m_Requires_attr;
    }

CT_Choice* CT_Choice::default_instance_ = NULL;

    // CT_Fallback
    CT_Fallback::CT_Fallback()
    :m_has__any(false),
    m__any(NULL)
    {
    }
    CT_Fallback::~CT_Fallback()
{
    clear();    }
    void CT_Fallback::clear()
    {    }

    void CT_Fallback::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
        assert(m_has__any);
        
    
    if (m_has__any)
    {
        m__any->toXml(_outStream);
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Fallback& CT_Fallback::default_instance()
    {    
    if (!CT_Fallback::default_instance_)
    {
        CT_Fallback::default_instance_ = new CT_Fallback();
    }
    return *CT_Fallback::default_instance_;
    }

CT_Fallback* CT_Fallback::default_instance_ = NULL;

    // AlternateContent_element
    AlternateContent_element::AlternateContent_element()
    :m_has_Choice(false),
    m_Choice(NULL),
    m_has_Fallback(false),
    m_Fallback(NULL)
    {
    }
    AlternateContent_element::~AlternateContent_element()
{
    clear();    }
    bool AlternateContent_element::has_Choice() const
    {    
    return m_has_Choice;
    }

    CT_Choice* AlternateContent_element::mutable_Choice()
    {    
    m_has_Choice = true;
    if (!m_Choice)
    {
        m_Choice = new CT_Choice();
    }
    return m_Choice;
    }

    const CT_Choice& AlternateContent_element::get_Choice() const
    {    
    if (m_Choice)
    {
        return *m_Choice;
    }
    return CT_Choice::default_instance();
    }

    bool AlternateContent_element::has_Fallback() const
    {    
    return m_has_Fallback;
    }

    CT_Fallback* AlternateContent_element::mutable_Fallback()
    {    
    m_has_Fallback = true;
    if (!m_Fallback)
    {
        m_Fallback = new CT_Fallback();
    }
    return m_Fallback;
    }

    const CT_Fallback& AlternateContent_element::get_Fallback() const
    {    
    if (m_Fallback)
    {
        return *m_Fallback;
    }
    return CT_Fallback::default_instance();
    }

    void AlternateContent_element::clear()
    {    
    m_has_Choice = false;
    
    if (m_Choice)
    {
        delete m_Choice;
        m_Choice = NULL;
    }
    
    
    m_has_Fallback = false;
    
    if (m_Fallback)
    {
        delete m_Fallback;
        m_Fallback = NULL;
    }
    
    }

    void AlternateContent_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<mc:AlternateContent";
    
    _outStream << " " << "xmlns:mc=\"http://schemas.openxmlformats.org/markup-compatibility/2006\"";
    
    _outStream << ">";
    
        assert(m_has_Choice);
        
    
        assert(m_has_Fallback);
        
    
    if (m_has_Choice)
    {
        m_Choice->toXmlElem("mc:Choice", "", _outStream);
    }
    
    
    if (m_has_Fallback)
    {
        m_Fallback->toXmlElem("mc:Fallback", "", _outStream);
    }
    
    _outStream << "</mc:AlternateContent>";
    }

    const AlternateContent_element& AlternateContent_element::default_instance()
    {    
    if (!AlternateContent_element::default_instance_)
    {
        AlternateContent_element::default_instance_ = new AlternateContent_element();
    }
    return *AlternateContent_element::default_instance_;
    }

AlternateContent_element* AlternateContent_element::default_instance_ = NULL;
}