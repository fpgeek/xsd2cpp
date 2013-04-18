#include "shared-customXmlDataProperties_xsd.h"
#include <stdlib.h>
#include <sstream>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_s{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class CT_DatastoreSchemaRef : public XSD::ComplexType{
    public:
        void clear(){

                m_has_uri_attr = false;
                m_uri_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uri_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DatastoreSchemaRef& default_instance(){

    if (!CT_DatastoreSchemaRef::default_instance_)
    {
        CT_DatastoreSchemaRef::default_instance_ = new CT_DatastoreSchemaRef();
    }
    return *CT_DatastoreSchemaRef::default_instance_;

        }
        bool has_uri_attr(){

            return m_has_uri_attr;
        
        }
        void set_uri_attr(const string& _uri_attr ){

        m_has_uri_attr = true;
        m_uri_attr = _uri_attr;
        
        }
        const string& uri_attr(){

            return type: \string\nname: \m_uri_attr\n;
        
        }

    private:
        static CT_DatastoreSchemaRef* default_instance_ ;
        bool m_has_uri_attr ;
        string m_uri_attr ;

    }

    class CT_DatastoreSchemaRefs : public XSD::ComplexType{
    public:
        bool has_schemaRef(){

            return m_has_schemaRef;
        
        }
        CT_DatastoreSchemaRef* mutable_schemaRef(){

                m_has_schemaRef = true;
                if (!m_schemaRef)
                {
                    m_schemaRef = new CT_DatastoreSchemaRef();
                }
                return m_schemaRef;
            
        }
        const CT_DatastoreSchemaRef& schemaRef(){

            if (m_schemaRef)
            {
                return *m_schemaRef;
            }
            return CT_DatastoreSchemaRef::default_instance();
        
        }
        void clear(){

                m_has_schemaRef = false;
                
        if (m_schemaRef)
        {
            delete m_schemaRef;
            m_schemaRef = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_schemaRef)
                {
                    m_schemaRef->toXml(schemaRef, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DatastoreSchemaRefs& default_instance(){

    if (!CT_DatastoreSchemaRefs::default_instance_)
    {
        CT_DatastoreSchemaRefs::default_instance_ = new CT_DatastoreSchemaRefs();
    }
    return *CT_DatastoreSchemaRefs::default_instance_;

        }

    private:
        bool m_has_schemaRef ;
        CT_DatastoreSchemaRef* m_schemaRef ;
        static CT_DatastoreSchemaRefs* default_instance_ ;

    }

    class CT_DatastoreItem : public XSD::ComplexType{
    public:
        bool has_schemaRefs(){

            return m_has_schemaRefs;
        
        }
        CT_DatastoreSchemaRefs* mutable_schemaRefs(){

                m_has_schemaRefs = true;
                if (!m_schemaRefs)
                {
                    m_schemaRefs = new CT_DatastoreSchemaRefs();
                }
                return m_schemaRefs;
            
        }
        const CT_DatastoreSchemaRefs& schemaRefs(){

            if (m_schemaRefs)
            {
                return *m_schemaRefs;
            }
            return CT_DatastoreSchemaRefs::default_instance();
        
        }
        void clear(){

                m_has_itemID_attr = false;
                
        if (m_itemID_attr)
        {
            delete m_itemID_attr;
            m_itemID_attr = NULL;
        }
    
            
                m_has_schemaRefs = false;
                
        if (m_schemaRefs)
        {
            delete m_schemaRefs;
            m_schemaRefs = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_itemID_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_schemaRefs)
                {
                    m_schemaRefs->toXml(schemaRefs, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DatastoreItem& default_instance(){

    if (!CT_DatastoreItem::default_instance_)
    {
        CT_DatastoreItem::default_instance_ = new CT_DatastoreItem();
    }
    return *CT_DatastoreItem::default_instance_;

        }
        bool has_itemID_attr(){

            return m_has_itemID_attr;
        
        }
        void set_itemID_attr(const ns_s::ST_Guid& _itemID_attr ){

            m_has_itemID_attr = true;
            m_itemID_attr = new ns_s::ST_Guid(_itemID_attr);
        
        }
        const ns_s::ST_Guid& itemID_attr(){

            if (m_itemID_attr)
            {
                return *m_itemID_attr;
            }
            return ns_s::ST_Guid::default_instance();
        
        }

    private:
        bool m_has_schemaRefs ;
        CT_DatastoreSchemaRefs* m_schemaRefs ;
        static CT_DatastoreItem* default_instance_ ;
        bool m_has_itemID_attr ;
        ns_s::ST_Guid* m_itemID_attr ;

    }

    class datastoreItem : public CT_DatastoreItem : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_DatastoreItem::toXml(\datastoreItem\, _outStream);
    
        }

    private:

    }

}