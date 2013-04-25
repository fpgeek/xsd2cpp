#include "shared-additionalCharacteristics_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
namespace ns_characteristics {
 using namespace std;

    // Element

    // Attribute

    // ST_Relation
    ST_Relation::ST_Relation()
    :m_has_type(false)
    {
    }
    ST_Relation::ST_Relation(const ST_Relation::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_Relation::has_type() const
    {    
    return m_has_type;
    }

    void ST_Relation::set_type(const ST_Relation::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_Relation::Type& ST_Relation::get_type() const
    {    
                return m_type;
                }

    std::string ST_Relation::toString() const
    {    
    return ST_Relation::TypeStrList[m_type];
    }

    void ST_Relation::clear()
    {    
    m_has_type = false;
    }

    void ST_Relation::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_Relation& ST_Relation::default_instance()
    {    
    if (!ST_Relation::default_instance_)
    {
        ST_Relation::default_instance_ = new ST_Relation();
    }
    return *ST_Relation::default_instance_;
    }

    const std::string ST_Relation::TypeStrList[] =
    {
        "ge",
        "le",
        "gt",
        "lt",
        "eq"
    };
ST_Relation* ST_Relation::default_instance_ = NULL;

    // CT_AdditionalCharacteristics
    CT_Characteristic* CT_AdditionalCharacteristics::add_characteristic()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Characteristic* pNewChild = pChildGroup->mutable_characteristic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_AdditionalCharacteristics::clear()
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

    void CT_AdditionalCharacteristics::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_characteristic())
            {
                (*iter)->get_characteristic().toXmlElem("characteristic", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AdditionalCharacteristics& CT_AdditionalCharacteristics::default_instance()
    {    
    if (!CT_AdditionalCharacteristics::default_instance_)
    {
        CT_AdditionalCharacteristics::default_instance_ = new CT_AdditionalCharacteristics();
    }
    return *CT_AdditionalCharacteristics::default_instance_;
    }


    // CT_AdditionalCharacteristics::ChildGroup_1
    bool CT_AdditionalCharacteristics::ChildGroup_1::has_characteristic() const
    {    
    return m_has_characteristic;
    }

    CT_Characteristic* CT_AdditionalCharacteristics::ChildGroup_1::mutable_characteristic()
    {    
    
    m_has_characteristic = true;
    if (!m_characteristic)
    {
        m_characteristic = new CT_Characteristic();
    }
    return m_characteristic;
    }

    const CT_Characteristic& CT_AdditionalCharacteristics::ChildGroup_1::get_characteristic() const
    {    
    if (m_characteristic)
    {
        return *m_characteristic;
    }
    return CT_Characteristic::default_instance();
    }

CT_AdditionalCharacteristics* CT_AdditionalCharacteristics::default_instance_ = NULL;

    // CT_Characteristic
    void CT_Characteristic::clear()
    {    
    m_has_name_attr = false;
    m_name_attr.clear();
    
    m_has_relation_attr = false;
    
    if (m_relation_attr)
    {
        delete m_relation_attr;
        m_relation_attr = NULL;
    }
    
    
    m_has_val_attr = false;
    m_val_attr.clear();
    
    m_has_vocabulary_attr = false;
    m_vocabulary_attr.clear();
    }

    void CT_Characteristic::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }
    
    
    if (m_has_relation_attr)
    {
        m_relation_attr->toXmlAttr("relation", _outStream);
    }
    
    
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }
    
    
    if (m_has_vocabulary_attr)
    {
        _outStream << " " << "vocabulary" << "=\"" << m_vocabulary_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Characteristic& CT_Characteristic::default_instance()
    {    
    if (!CT_Characteristic::default_instance_)
    {
        CT_Characteristic::default_instance_ = new CT_Characteristic();
    }
    return *CT_Characteristic::default_instance_;
    }

    bool CT_Characteristic::has_name_attr() const
    {    
    return m_has_name_attr;
    }

    void CT_Characteristic::set_name_attr(const XSD::string_& _name_attr)
    {    
    m_has_name_attr = true;
    m_name_attr = _name_attr;
    }

    const XSD::string_& CT_Characteristic::get_name_attr() const
    {    
    return m_name_attr;
    }

    bool CT_Characteristic::has_relation_attr() const
    {    
    return m_has_relation_attr;
    }

    void CT_Characteristic::set_relation_attr(const ST_Relation& _relation_attr)
    {    
    m_has_relation_attr = true;
    m_relation_attr = new ST_Relation(_relation_attr);
    }

    const ST_Relation& CT_Characteristic::get_relation_attr() const
    {    
    if (m_relation_attr)
    {
        return *m_relation_attr;
    }
    return ST_Relation::default_instance();
    }

    bool CT_Characteristic::has_val_attr() const
    {    
    return m_has_val_attr;
    }

    void CT_Characteristic::set_val_attr(const XSD::string_& _val_attr)
    {    
    m_has_val_attr = true;
    m_val_attr = _val_attr;
    }

    const XSD::string_& CT_Characteristic::get_val_attr() const
    {    
    return m_val_attr;
    }

    bool CT_Characteristic::has_vocabulary_attr() const
    {    
    return m_has_vocabulary_attr;
    }

    void CT_Characteristic::set_vocabulary_attr(const XSD::anyURI_& _vocabulary_attr)
    {    
    m_has_vocabulary_attr = true;
    m_vocabulary_attr = _vocabulary_attr;
    }

    const XSD::anyURI_& CT_Characteristic::get_vocabulary_attr() const
    {    
    return m_vocabulary_attr;
    }

CT_Characteristic* CT_Characteristic::default_instance_ = NULL;

    // additionalCharacteristics_element
    CT_Characteristic* additionalCharacteristics_element::add_characteristic()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Characteristic* pNewChild = pChildGroup->mutable_characteristic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void additionalCharacteristics_element::clear()
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

    void additionalCharacteristics_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<additionalCharacteristics";
    
    _outStream << " " << "xmlns:characteristics=\"http://schemas.openxmlformats.org/officeDocument/2006/characteristics\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_characteristic())
            {
                (*iter)->get_characteristic().toXmlElem("characteristic", "", _outStream);
            }
        }
    }
    
    _outStream << "</additionalCharacteristics>";
    }

    const additionalCharacteristics_element& additionalCharacteristics_element::default_instance()
    {    
    if (!additionalCharacteristics_element::default_instance_)
    {
        additionalCharacteristics_element::default_instance_ = new additionalCharacteristics_element();
    }
    return *additionalCharacteristics_element::default_instance_;
    }


    // additionalCharacteristics_element::ChildGroup_1
    bool additionalCharacteristics_element::ChildGroup_1::has_characteristic() const
    {    
    return m_has_characteristic;
    }

    CT_Characteristic* additionalCharacteristics_element::ChildGroup_1::mutable_characteristic()
    {    
    
    m_has_characteristic = true;
    if (!m_characteristic)
    {
        m_characteristic = new CT_Characteristic();
    }
    return m_characteristic;
    }

    const CT_Characteristic& additionalCharacteristics_element::ChildGroup_1::get_characteristic() const
    {    
    if (m_characteristic)
    {
        return *m_characteristic;
    }
    return CT_Characteristic::default_instance();
    }

additionalCharacteristics_element* additionalCharacteristics_element::default_instance_ = NULL;
}