namespace ns_mc {
    class Element;
    class Attribute;
    class CT_AlternateContent;
    class CT_Choice;
    class CT_Fallback;
    class AlternateContent_element;
}
#ifndef __mc_xsd_
#define __mc_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_mc {
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

    class CT_AlternateContent: public XSD::ComplexType
    {
    public:
        CT_AlternateContent();
        ~CT_AlternateContent();
        bool has_Choice() const;
        CT_Choice* mutable_Choice();
        const CT_Choice& get_Choice() const;
        bool has_Fallback() const;
        CT_Fallback* mutable_Fallback();
        const CT_Fallback& get_Fallback() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_AlternateContent& default_instance();
    protected:
    private:
        bool m_has_Choice;
        CT_Choice* m_Choice;
        bool m_has_Fallback;
        CT_Fallback* m_Fallback;
        static CT_AlternateContent* default_instance_;
    };

    class CT_Choice: public XSD::ComplexType
    {
    public:
        CT_Choice();
        ~CT_Choice();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Choice& default_instance();
        bool has_Requires_attr() const;
        void set_Requires_attr(const XSD::string_& _Requires_attr);
        const XSD::string_& get_Requires_attr() const;
    protected:
    private:
        bool m_has__any;
        XSD::Element* m__any;
        static CT_Choice* default_instance_;
        bool m_has_Requires_attr;
        XSD::string_ m_Requires_attr;
    };

    class CT_Fallback: public XSD::ComplexType
    {
    public:
        CT_Fallback();
        ~CT_Fallback();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Fallback& default_instance();
    protected:
    private:
        bool m_has__any;
        XSD::Element* m__any;
        static CT_Fallback* default_instance_;
    };

    class AlternateContent_element: public Element
    {
    public:
        AlternateContent_element();
        ~AlternateContent_element();
        bool has_Choice() const;
        CT_Choice* mutable_Choice();
        const CT_Choice& get_Choice() const;
        bool has_Fallback() const;
        CT_Fallback* mutable_Fallback();
        const CT_Fallback& get_Fallback() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const AlternateContent_element& default_instance();
    protected:
    private:
        bool m_has_Choice;
        CT_Choice* m_Choice;
        bool m_has_Fallback;
        CT_Fallback* m_Fallback;
        static AlternateContent_element* default_instance_;
    };

}
#endif