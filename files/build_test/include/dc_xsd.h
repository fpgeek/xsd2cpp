namespace ns_dc {
    class Element;
    class Attribute;
    class ST_String;
    class SimpleLiteral;
    class elementContainer;
    class any_element;
    class title_element;
    class creator_element;
    class subject_element;
    class description_element;
    class publisher_element;
    class contributor_element;
    class date_element;
    class type_element;
    class format_element;
    class identifier_element;
    class source_element;
    class language_element;
    class relation_element;
    class coverage_element;
    class rights_element;
}
#ifndef __dc_xsd_
#define __dc_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_dc {
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

    class ST_String: public XSD::SimpleType
    {
    public:
        ST_String();
        ST_String(const XSD::string_& _string);
        ~ST_String();
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_String& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_String* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class SimpleLiteral: public XSD::ComplexType, public ST_String
    {
    public:
        SimpleLiteral();
        ~SimpleLiteral();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const SimpleLiteral& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static SimpleLiteral* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class elementContainer: public XSD::ComplexType
    {
    public:
        elementContainer();
        ~elementContainer();
        SimpleLiteral* add_any();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const elementContainer& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_any() const;
            SimpleLiteral* mutable_any();
            const SimpleLiteral& get_any() const;
        protected:
        private:
            bool m_has_any;
            SimpleLiteral* m_any;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static elementContainer* default_instance_;
    };

    class any_element: public Element, public ST_String
    {
    public:
        any_element();
        ~any_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const any_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static any_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class title_element: public Element, public ST_String
    {
    public:
        title_element();
        ~title_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const title_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static title_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class creator_element: public Element, public ST_String
    {
    public:
        creator_element();
        ~creator_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const creator_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static creator_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class subject_element: public Element, public ST_String
    {
    public:
        subject_element();
        ~subject_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const subject_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static subject_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class description_element: public Element, public ST_String
    {
    public:
        description_element();
        ~description_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const description_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static description_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class publisher_element: public Element, public ST_String
    {
    public:
        publisher_element();
        ~publisher_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const publisher_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static publisher_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class contributor_element: public Element, public ST_String
    {
    public:
        contributor_element();
        ~contributor_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const contributor_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static contributor_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class date_element: public Element, public ST_String
    {
    public:
        date_element();
        ~date_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const date_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static date_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class type_element: public Element, public ST_String
    {
    public:
        type_element();
        ~type_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const type_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static type_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class format_element: public Element, public ST_String
    {
    public:
        format_element();
        ~format_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const format_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static format_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class identifier_element: public Element, public ST_String
    {
    public:
        identifier_element();
        ~identifier_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const identifier_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static identifier_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class source_element: public Element, public ST_String
    {
    public:
        source_element();
        ~source_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const source_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static source_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class language_element: public Element, public ST_String
    {
    public:
        language_element();
        ~language_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const language_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static language_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class relation_element: public Element, public ST_String
    {
    public:
        relation_element();
        ~relation_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const relation_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static relation_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class coverage_element: public Element, public ST_String
    {
    public:
        coverage_element();
        ~coverage_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const coverage_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static coverage_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class rights_element: public Element, public ST_String
    {
    public:
        rights_element();
        ~rights_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const rights_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static rights_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

}
#endif