#ifndef shared-customXmlDataProperties_xsd 
#define shared-customXmlDataProperties_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
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
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DatastoreSchemaRef& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const string& _uri_attr );
        const string& uri_attr() const;

    private:
        static CT_DatastoreSchemaRef* default_instance_ ;
        bool m_has_uri_attr ;
        string m_uri_attr ;

    }

    class CT_DatastoreSchemaRefs : public XSD::ComplexType{
    public:
        bool has_schemaRef() const;
        CT_DatastoreSchemaRef* mutable_schemaRef();
        const CT_DatastoreSchemaRef& schemaRef() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DatastoreSchemaRefs& default_instance() const;

    private:
        bool m_has_schemaRef ;
        CT_DatastoreSchemaRef* m_schemaRef ;
        static CT_DatastoreSchemaRefs* default_instance_ ;

    }

    class CT_DatastoreItem : public XSD::ComplexType{
    public:
        bool has_schemaRefs() const;
        CT_DatastoreSchemaRefs* mutable_schemaRefs();
        const CT_DatastoreSchemaRefs& schemaRefs() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DatastoreItem& default_instance() const;
        bool has_itemID_attr() const;
        void set_itemID_attr(const ns_s::ST_Guid& _itemID_attr );
        const ns_s::ST_Guid& itemID_attr() const;

    private:
        bool m_has_schemaRefs ;
        CT_DatastoreSchemaRefs* m_schemaRefs ;
        static CT_DatastoreItem* default_instance_ ;
        bool m_has_itemID_attr ;
        ns_s::ST_Guid* m_itemID_attr ;

    }

    class datastoreItem : public CT_DatastoreItem : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}