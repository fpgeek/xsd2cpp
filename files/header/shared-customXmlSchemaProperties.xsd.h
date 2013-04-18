#ifndef shared-customXmlSchemaProperties_xsd 
#define shared-customXmlSchemaProperties_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_sl{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class CT_Schema : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Schema& default_instance() const;
        bool has_uri_attr() const;
        void set_uri_attr(const string& _uri_attr );
        const string& uri_attr() const;
        bool has_manifestLocation_attr() const;
        void set_manifestLocation_attr(const string& _manifestLocation_attr );
        const string& manifestLocation_attr() const;
        bool has_schemaLocation_attr() const;
        void set_schemaLocation_attr(const string& _schemaLocation_attr );
        const string& schemaLocation_attr() const;
        bool has_schemaLanguage_attr() const;
        void set_schemaLanguage_attr(const token& _schemaLanguage_attr );
        const token& schemaLanguage_attr() const;

    private:
        static CT_Schema* default_instance_ ;
        bool m_has_uri_attr ;
        string m_uri_attr ;
        bool m_has_manifestLocation_attr ;
        string m_manifestLocation_attr ;
        bool m_has_schemaLocation_attr ;
        string m_schemaLocation_attr ;
        bool m_has_schemaLanguage_attr ;
        token m_schemaLanguage_attr ;

    }

    class CT_SchemaLibrary : public XSD::ComplexType{
    public:
        bool has_schema() const;
        CT_Schema* mutable_schema();
        const CT_Schema& schema() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SchemaLibrary& default_instance() const;

    private:
        bool m_has_schema ;
        CT_Schema* m_schema ;
        static CT_SchemaLibrary* default_instance_ ;

    }

    class schemaLibrary : public CT_SchemaLibrary : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}