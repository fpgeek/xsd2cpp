#include "shared-customXmlDataProperties_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_customXml {
 using namespace std;

    // Element

    // Attribute

    // CT_DatastoreSchemaRef
    CT_DatastoreSchemaRef::CT_DatastoreSchemaRef()
    :m_has_uri_attr(false),
    m_uri_attr("")
    {
    }
    void CT_DatastoreSchemaRef::clear()
    {    
    m_has_uri_attr = false;
    m_uri_attr.clear();
    }

    void CT_DatastoreSchemaRef::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_uri_attr)
    {
        _outStream << " " << "customXml:uri" << "=\"" << m_uri_attr << "\"";
    }
    
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_DatastoreSchemaRef& CT_DatastoreSchemaRef::default_instance()
    {    
    if (!CT_DatastoreSchemaRef::default_instance_)
    {
        CT_DatastoreSchemaRef::default_instance_ = new CT_DatastoreSchemaRef();
    }
    return *CT_DatastoreSchemaRef::default_instance_;
    }

    bool CT_DatastoreSchemaRef::has_uri_attr() const
    {    
    return m_has_uri_attr;
    }

    void CT_DatastoreSchemaRef::set_uri_attr(const XSD::string_& _uri_attr)
    {    
    m_has_uri_attr = true;
    m_uri_attr = _uri_attr;
    }

    const XSD::string_& CT_DatastoreSchemaRef::get_uri_attr() const
    {    
    return m_uri_attr;
    }

CT_DatastoreSchemaRef* CT_DatastoreSchemaRef::default_instance_ = NULL;

    // CT_DatastoreSchemaRefs
    CT_DatastoreSchemaRefs::CT_DatastoreSchemaRefs()

    {
    }
    CT_DatastoreSchemaRef* CT_DatastoreSchemaRefs::add_schemaRef()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_DatastoreSchemaRef* pNewChild = pChildGroup->mutable_schemaRef();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_DatastoreSchemaRefs::clear()
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

    void CT_DatastoreSchemaRefs::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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
            if ((*iter)->has_schemaRef())
            {
                (*iter)->get_schemaRef().toXmlElem("customXml:schemaRef", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_DatastoreSchemaRefs& CT_DatastoreSchemaRefs::default_instance()
    {    
    if (!CT_DatastoreSchemaRefs::default_instance_)
    {
        CT_DatastoreSchemaRefs::default_instance_ = new CT_DatastoreSchemaRefs();
    }
    return *CT_DatastoreSchemaRefs::default_instance_;
    }


    // CT_DatastoreSchemaRefs::ChildGroup_1
    CT_DatastoreSchemaRefs::ChildGroup_1::ChildGroup_1()
    :m_has_schemaRef(false),
    m_schemaRef(NULL)
    {
    }
    bool CT_DatastoreSchemaRefs::ChildGroup_1::has_schemaRef() const
    {    
    return m_has_schemaRef;
    }

    CT_DatastoreSchemaRef* CT_DatastoreSchemaRefs::ChildGroup_1::mutable_schemaRef()
    {    
    
    m_has_schemaRef = true;
    if (!m_schemaRef)
    {
        m_schemaRef = new CT_DatastoreSchemaRef();
    }
    return m_schemaRef;
    }

    const CT_DatastoreSchemaRef& CT_DatastoreSchemaRefs::ChildGroup_1::get_schemaRef() const
    {    
    if (m_schemaRef)
    {
        return *m_schemaRef;
    }
    return CT_DatastoreSchemaRef::default_instance();
    }

CT_DatastoreSchemaRefs* CT_DatastoreSchemaRefs::default_instance_ = NULL;

    // CT_DatastoreItem
    CT_DatastoreItem::CT_DatastoreItem()
    :m_has_schemaRefs(false),
    m_schemaRefs(NULL),
    m_has_itemID_attr(false),
    m_itemID_attr(NULL)
    {
    }
    bool CT_DatastoreItem::has_schemaRefs() const
    {    
    return m_has_schemaRefs;
    }

    CT_DatastoreSchemaRefs* CT_DatastoreItem::mutable_schemaRefs()
    {    
    m_has_schemaRefs = true;
    if (!m_schemaRefs)
    {
        m_schemaRefs = new CT_DatastoreSchemaRefs();
    }
    return m_schemaRefs;
    }

    const CT_DatastoreSchemaRefs& CT_DatastoreItem::get_schemaRefs() const
    {    
    if (m_schemaRefs)
    {
        return *m_schemaRefs;
    }
    return CT_DatastoreSchemaRefs::default_instance();
    }

    void CT_DatastoreItem::clear()
    {    
    m_has_itemID_attr = false;
    
    if (m_itemID_attr)
    {
        delete m_itemID_attr;
        m_itemID_attr = NULL;
    }
    
    }

    void CT_DatastoreItem::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_itemID_attr)
    {
        m_itemID_attr->toXmlAttr("customXml:itemID", _outStream);
    }
    
            _outStream << ">";
            
    if (m_has_schemaRefs)
    {
        m_schemaRefs->toXmlElem("customXml:schemaRefs", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_DatastoreItem& CT_DatastoreItem::default_instance()
    {    
    if (!CT_DatastoreItem::default_instance_)
    {
        CT_DatastoreItem::default_instance_ = new CT_DatastoreItem();
    }
    return *CT_DatastoreItem::default_instance_;
    }

    bool CT_DatastoreItem::has_itemID_attr() const
    {    
    return m_has_itemID_attr;
    }

    void CT_DatastoreItem::set_itemID_attr(const ns_s::ST_Guid& _itemID_attr)
    {    
    m_has_itemID_attr = true;
    m_itemID_attr = new ns_s::ST_Guid(_itemID_attr);
    }

    const ns_s::ST_Guid& CT_DatastoreItem::get_itemID_attr() const
    {    
    if (m_itemID_attr)
    {
        return *m_itemID_attr;
    }
    return ns_s::ST_Guid::default_instance();
    }

CT_DatastoreItem* CT_DatastoreItem::default_instance_ = NULL;

    // datastoreItem_element
    datastoreItem_element::datastoreItem_element()
    :m_has_schemaRefs(false),
    m_schemaRefs(NULL),
    m_has_itemID_attr(false),
    m_itemID_attr(NULL)
    {
    }
    bool datastoreItem_element::has_schemaRefs() const
    {    
    return m_has_schemaRefs;
    }

    CT_DatastoreSchemaRefs* datastoreItem_element::mutable_schemaRefs()
    {    
    m_has_schemaRefs = true;
    if (!m_schemaRefs)
    {
        m_schemaRefs = new CT_DatastoreSchemaRefs();
    }
    return m_schemaRefs;
    }

    const CT_DatastoreSchemaRefs& datastoreItem_element::get_schemaRefs() const
    {    
    if (m_schemaRefs)
    {
        return *m_schemaRefs;
    }
    return CT_DatastoreSchemaRefs::default_instance();
    }

    void datastoreItem_element::clear()
    {    
    m_has_itemID_attr = false;
    
    if (m_itemID_attr)
    {
        delete m_itemID_attr;
        m_itemID_attr = NULL;
    }
    
    }

    void datastoreItem_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<customXml:datastoreItem";
    
    _outStream << " " << "xmlns:customXml=\"http://schemas.openxmlformats.org/officeDocument/2006/customXml\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    if (m_has_itemID_attr)
    {
        m_itemID_attr->toXmlAttr("customXml:itemID", _outStream);
    }
    
    _outStream << ">";
    
    if (m_has_schemaRefs)
    {
        m_schemaRefs->toXmlElem("customXml:schemaRefs", "", _outStream);;
    }
    
    _outStream << "</customXml:datastoreItem>";
    }

    const datastoreItem_element& datastoreItem_element::default_instance()
    {    
    if (!datastoreItem_element::default_instance_)
    {
        datastoreItem_element::default_instance_ = new datastoreItem_element();
    }
    return *datastoreItem_element::default_instance_;
    }

    bool datastoreItem_element::has_itemID_attr() const
    {    
    return m_has_itemID_attr;
    }

    void datastoreItem_element::set_itemID_attr(const ns_s::ST_Guid& _itemID_attr)
    {    
    m_has_itemID_attr = true;
    m_itemID_attr = new ns_s::ST_Guid(_itemID_attr);
    }

    const ns_s::ST_Guid& datastoreItem_element::get_itemID_attr() const
    {    
    if (m_itemID_attr)
    {
        return *m_itemID_attr;
    }
    return ns_s::ST_Guid::default_instance();
    }

datastoreItem_element* datastoreItem_element::default_instance_ = NULL;
}