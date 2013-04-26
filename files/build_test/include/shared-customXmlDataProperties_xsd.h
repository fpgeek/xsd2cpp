namespace ns_customXml {
    class Element;
    class Attribute;
    class CT_DatastoreSchemaRef;
    class CT_DatastoreSchemaRefs;
    class CT_DatastoreItem;
    class datastoreItem_element;
}
#ifndef __shared_customXmlDataProperties_xsd_
#define __shared_customXmlDataProperties_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_customXml {
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

    class CT_DatastoreSchemaRef: public XSD::ComplexType
    {
    public:
        CT_DatastoreSchemaRef();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_DatastoreSchemaRef& default_instance();
        bool has_uri_attr() const;
        void set_uri_attr(const XSD::string_& _uri_attr);
        const XSD::string_& get_uri_attr() const;
    protected:
    private:
        static CT_DatastoreSchemaRef* default_instance_;
        bool m_has_uri_attr;
        XSD::string_ m_uri_attr;
    };

    class CT_DatastoreSchemaRefs: public XSD::ComplexType
    {
    public:
        CT_DatastoreSchemaRefs();
        CT_DatastoreSchemaRef* add_schemaRef();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_DatastoreSchemaRefs& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_schemaRef() const;
            CT_DatastoreSchemaRef* mutable_schemaRef();
            const CT_DatastoreSchemaRef& get_schemaRef() const;
        protected:
        private:
            bool m_has_schemaRef;
            CT_DatastoreSchemaRef* m_schemaRef;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_DatastoreSchemaRefs* default_instance_;
    };

    class CT_DatastoreItem: public XSD::ComplexType
    {
    public:
        CT_DatastoreItem();
        bool has_schemaRefs() const;
        CT_DatastoreSchemaRefs* mutable_schemaRefs();
        const CT_DatastoreSchemaRefs& get_schemaRefs() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_DatastoreItem& default_instance();
        bool has_itemID_attr() const;
        void set_itemID_attr(const ns_s::ST_Guid& _itemID_attr);
        const ns_s::ST_Guid& get_itemID_attr() const;
    protected:
    private:
        bool m_has_schemaRefs;
        CT_DatastoreSchemaRefs* m_schemaRefs;
        static CT_DatastoreItem* default_instance_;
        bool m_has_itemID_attr;
        ns_s::ST_Guid* m_itemID_attr;
    };

    class datastoreItem_element: public Element
    {
    public:
        datastoreItem_element();
        bool has_schemaRefs() const;
        CT_DatastoreSchemaRefs* mutable_schemaRefs();
        const CT_DatastoreSchemaRefs& get_schemaRefs() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const datastoreItem_element& default_instance();
        bool has_itemID_attr() const;
        void set_itemID_attr(const ns_s::ST_Guid& _itemID_attr);
        const ns_s::ST_Guid& get_itemID_attr() const;
    protected:
    private:
        bool m_has_schemaRefs;
        CT_DatastoreSchemaRefs* m_schemaRefs;
        static datastoreItem_element* default_instance_;
        bool m_has_itemID_attr;
        ns_s::ST_Guid* m_itemID_attr;
    };

}
#endif