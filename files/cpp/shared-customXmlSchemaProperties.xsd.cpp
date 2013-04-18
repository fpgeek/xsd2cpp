#include "shared-customXmlSchemaProperties_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        void clear(){

                m_has_uri_attr = false;
                m_uri_attr.clear();
            
                m_has_manifestLocation_attr = false;
                m_manifestLocation_attr.clear();
            
                m_has_schemaLocation_attr = false;
                m_schemaLocation_attr.clear();
            
                m_has_schemaLanguage_attr = false;
                m_schemaLanguage_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uri_attr << \\\;
_outStream << _attrName << \=\\ << m_manifestLocation_attr << \\\;
_outStream << _attrName << \=\\ << m_schemaLocation_attr << \\\;
_outStream << _attrName << \=\\ << m_schemaLanguage_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Schema& default_instance(){

    if (!CT_Schema::default_instance_)
    {
        CT_Schema::default_instance_ = new CT_Schema();
    }
    return *CT_Schema::default_instance_;

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
        bool has_manifestLocation_attr(){

            return m_has_manifestLocation_attr;
        
        }
        void set_manifestLocation_attr(const string& _manifestLocation_attr ){

        m_has_manifestLocation_attr = true;
        m_manifestLocation_attr = _manifestLocation_attr;
        
        }
        const string& manifestLocation_attr(){

            return type: \string\nname: \m_manifestLocation_attr\n;
        
        }
        bool has_schemaLocation_attr(){

            return m_has_schemaLocation_attr;
        
        }
        void set_schemaLocation_attr(const string& _schemaLocation_attr ){

        m_has_schemaLocation_attr = true;
        m_schemaLocation_attr = _schemaLocation_attr;
        
        }
        const string& schemaLocation_attr(){

            return type: \string\nname: \m_schemaLocation_attr\n;
        
        }
        bool has_schemaLanguage_attr(){

            return m_has_schemaLanguage_attr;
        
        }
        void set_schemaLanguage_attr(const token& _schemaLanguage_attr ){

        m_has_schemaLanguage_attr = true;
        m_schemaLanguage_attr = _schemaLanguage_attr;
        
        }
        const token& schemaLanguage_attr(){

            return type: 	oken\nname: \m_schemaLanguage_attr\n;
        
        }

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
        bool has_schema(){

            return m_has_schema;
        
        }
        CT_Schema* mutable_schema(){

                m_has_schema = true;
                if (!m_schema)
                {
                    m_schema = new CT_Schema();
                }
                return m_schema;
            
        }
        const CT_Schema& schema(){

            if (m_schema)
            {
                return *m_schema;
            }
            return CT_Schema::default_instance();
        
        }
        void clear(){

                m_has_schema = false;
                
        if (m_schema)
        {
            delete m_schema;
            m_schema = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_schema)
                {
                    m_schema->toXml(schema, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SchemaLibrary& default_instance(){

    if (!CT_SchemaLibrary::default_instance_)
    {
        CT_SchemaLibrary::default_instance_ = new CT_SchemaLibrary();
    }
    return *CT_SchemaLibrary::default_instance_;

        }

    private:
        bool m_has_schema ;
        CT_Schema* m_schema ;
        static CT_SchemaLibrary* default_instance_ ;

    }

    class schemaLibrary : public CT_SchemaLibrary : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_SchemaLibrary::toXml(\schemaLibrary\, _outStream);
    
        }

    private:

    }

}