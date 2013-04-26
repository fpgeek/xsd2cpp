namespace ns_pvml {
    class Element;
    class Attribute;
    class CT_Empty;
    class CT_Rel;
    class iscomment_element;
    class textdata_element;
}
#ifndef __vml_presentationDrawing_xsd_
#define __vml_presentationDrawing_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_pvml {
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

    class CT_Empty: public XSD::ComplexType
    {
    public:
        CT_Empty();
        ~CT_Empty();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Empty& default_instance();
    protected:
    private:
        static CT_Empty* default_instance_;
    };

    class CT_Rel: public XSD::ComplexType
    {
    public:
        CT_Rel();
        ~CT_Rel();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Rel& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const XSD::string_& _id_attr);
        const XSD::string_& get_id_attr() const;
    protected:
    private:
        static CT_Rel* default_instance_;
        bool m_has_id_attr;
        XSD::string_ m_id_attr;
    };

    class iscomment_element: public Element
    {
    public:
        iscomment_element();
        ~iscomment_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const iscomment_element& default_instance();
    protected:
    private:
        static iscomment_element* default_instance_;
    };

    class textdata_element: public Element
    {
    public:
        textdata_element();
        ~textdata_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const textdata_element& default_instance();
        bool has_id_attr() const;
        void set_id_attr(const XSD::string_& _id_attr);
        const XSD::string_& get_id_attr() const;
    protected:
    private:
        static textdata_element* default_instance_;
        bool m_has_id_attr;
        XSD::string_ m_id_attr;
    };

}
#endif