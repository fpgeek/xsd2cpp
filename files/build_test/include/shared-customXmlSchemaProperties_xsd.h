namespace ns_sl {
    class Element;
    class Attribute;
    class CT_Schema;
    class CT_SchemaLibrary;
    class schemaLibrary_element;
}
#ifndef __shared_customXmlSchemaProperties_xsd_
#define __shared_customXmlSchemaProperties_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_sl {
    using namespace std;
    class Element: public XSD::Element
    {
    public:
    protected:
    private:
    };

    class Attribute: public XSD::Attribute
    {
    public:
    protected:
    private:
    };

    class CT_Schema: public XSD::ComplexType
    {
    public:
        CT_Schema();
        ~CT_Schema();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Schema& default_instance();
        bool has_uri_attr() const;
        void set_uri_attr(const XSD::string_& _uri_attr);
        const XSD::string_& get_uri_attr() const;
        bool has_manifestLocation_attr() const;
        void set_manifestLocation_attr(const XSD::string_& _manifestLocation_attr);
        const XSD::string_& get_manifestLocation_attr() const;
        bool has_schemaLocation_attr() const;
        void set_schemaLocation_attr(const XSD::string_& _schemaLocation_attr);
        const XSD::string_& get_schemaLocation_attr() const;
        bool has_schemaLanguage_attr() const;
        void set_schemaLanguage_attr(const XSD::token_& _schemaLanguage_attr);
        const XSD::token_& get_schemaLanguage_attr() const;
    protected:
    private:
        static CT_Schema* default_instance_;
        bool m_has_uri_attr;
        XSD::string_ m_uri_attr;
        bool m_has_manifestLocation_attr;
        XSD::string_ m_manifestLocation_attr;
        bool m_has_schemaLocation_attr;
        XSD::string_ m_schemaLocation_attr;
        bool m_has_schemaLanguage_attr;
        XSD::token_ m_schemaLanguage_attr;
    };

    class CT_SchemaLibrary: public XSD::ComplexType
    {
    public:
        CT_SchemaLibrary();
        ~CT_SchemaLibrary();
        CT_Schema* add_schema();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SchemaLibrary& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_schema() const;
            CT_Schema* mutable_schema();
            const CT_Schema& get_schema() const;
        protected:
        private:
            bool m_has_schema;
            CT_Schema* m_schema;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_SchemaLibrary* default_instance_;
    };

    class schemaLibrary_element: public Element
    {
    public:
        schemaLibrary_element();
        ~schemaLibrary_element();
        CT_Schema* add_schema();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const schemaLibrary_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_schema() const;
            CT_Schema* mutable_schema();
            const CT_Schema& get_schema() const;
        protected:
        private:
            bool m_has_schema;
            CT_Schema* m_schema;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static schemaLibrary_element* default_instance_;
    };

}
#endif