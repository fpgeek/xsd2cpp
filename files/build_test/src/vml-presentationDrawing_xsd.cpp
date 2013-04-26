#include "vml-presentationDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
namespace ns_pvml {
 using namespace std;

    // Element

    // Attribute

    // CT_Empty
    CT_Empty::CT_Empty()

    {
    }
    void CT_Empty::clear()
    {    }

    void CT_Empty::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Empty& CT_Empty::default_instance()
    {    
    if (!CT_Empty::default_instance_)
    {
        CT_Empty::default_instance_ = new CT_Empty();
    }
    return *CT_Empty::default_instance_;
    }

CT_Empty* CT_Empty::default_instance_ = NULL;

    // CT_Rel
    CT_Rel::CT_Rel()
    :m_has_id_attr(false),
    m_id_attr("")
    {
    }
    void CT_Rel::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    }

    void CT_Rel::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Rel& CT_Rel::default_instance()
    {    
    if (!CT_Rel::default_instance_)
    {
        CT_Rel::default_instance_ = new CT_Rel();
    }
    return *CT_Rel::default_instance_;
    }

    bool CT_Rel::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void CT_Rel::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& CT_Rel::get_id_attr() const
    {    
    return m_id_attr;
    }

CT_Rel* CT_Rel::default_instance_ = NULL;

    // iscomment_element
    iscomment_element::iscomment_element()

    {
    }
    void iscomment_element::clear()
    {    }

    void iscomment_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<pvml:iscomment";
    
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    _outStream << ">";
    
    _outStream << "</pvml:iscomment>";
    }

    const iscomment_element& iscomment_element::default_instance()
    {    
    if (!iscomment_element::default_instance_)
    {
        iscomment_element::default_instance_ = new iscomment_element();
    }
    return *iscomment_element::default_instance_;
    }

iscomment_element* iscomment_element::default_instance_ = NULL;

    // textdata_element
    textdata_element::textdata_element()
    :m_has_id_attr(false),
    m_id_attr("")
    {
    }
    void textdata_element::clear()
    {    
    m_has_id_attr = false;
    m_id_attr.clear();
    }

    void textdata_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<pvml:textdata";
    
    _outStream << " " << "xmlns:pvml=\"urn:schemas-microsoft-com:office:powerpoint\"";
    
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }
    
    _outStream << ">";
    
    _outStream << "</pvml:textdata>";
    }

    const textdata_element& textdata_element::default_instance()
    {    
    if (!textdata_element::default_instance_)
    {
        textdata_element::default_instance_ = new textdata_element();
    }
    return *textdata_element::default_instance_;
    }

    bool textdata_element::has_id_attr() const
    {    
    return m_has_id_attr;
    }

    void textdata_element::set_id_attr(const XSD::string_& _id_attr)
    {    
    m_has_id_attr = true;
    m_id_attr = _id_attr;
    }

    const XSD::string_& textdata_element::get_id_attr() const
    {    
    return m_id_attr;
    }

textdata_element* textdata_element::default_instance_ = NULL;
}