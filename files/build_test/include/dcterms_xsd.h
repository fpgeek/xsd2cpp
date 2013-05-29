namespace ns_dcterms {
    class Element;
    class Attribute;
    class ST_String;
    class SimpleLiteral;
    class elementOrRefinementContainer;
    class alternative_element;
    class tableOfContents_element;
    class abstract_element;
    class created_element;
    class valid_element;
    class available_element;
    class issued_element;
    class modified_element;
    class dateAccepted_element;
    class dateCopyrighted_element;
    class dateSubmitted_element;
    class extent_element;
    class medium_element;
    class isVersionOf_element;
    class hasVersion_element;
    class isReplacedBy_element;
    class replaces_element;
    class isRequiredBy_element;
    class requires_element;
    class isPartOf_element;
    class hasPart_element;
    class isReferencedBy_element;
    class references_element;
    class isFormatOf_element;
    class hasFormat_element;
    class conformsTo_element;
    class spatial_element;
    class temporal_element;
    class audience_element;
    class mediator_element;
    class educationLevel_element;
    class accessRights_element;
    class bibliographicCitation_element;
}
#ifndef __dcterms_xsd_
#define __dcterms_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "dc_xsd.h"
#include "dcmitype_xsd.h"
namespace ns_dcterms {
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

    class elementOrRefinementContainer: public XSD::ComplexType
    {
    public:
        elementOrRefinementContainer();
        ~elementOrRefinementContainer();
        ns_dc::SimpleLiteral* add_dc_any();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const elementOrRefinementContainer& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_dc_any() const;
            ns_dc::SimpleLiteral* mutable_dc_any();
            const ns_dc::SimpleLiteral& get_dc_any() const;
        protected:
        private:
            bool m_has_dc_any;
            ns_dc::SimpleLiteral* m_dc_any;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static elementOrRefinementContainer* default_instance_;
    };

    class alternative_element: public Element, public ST_String
    {
    public:
        alternative_element();
        ~alternative_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const alternative_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static alternative_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class tableOfContents_element: public Element, public ST_String
    {
    public:
        tableOfContents_element();
        ~tableOfContents_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const tableOfContents_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static tableOfContents_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class abstract_element: public Element, public ST_String
    {
    public:
        abstract_element();
        ~abstract_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const abstract_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static abstract_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class created_element: public Element, public ST_String
    {
    public:
        created_element();
        ~created_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const created_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static created_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class valid_element: public Element, public ST_String
    {
    public:
        valid_element();
        ~valid_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const valid_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static valid_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class available_element: public Element, public ST_String
    {
    public:
        available_element();
        ~available_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const available_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static available_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class issued_element: public Element, public ST_String
    {
    public:
        issued_element();
        ~issued_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const issued_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static issued_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class modified_element: public Element, public ST_String
    {
    public:
        modified_element();
        ~modified_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const modified_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static modified_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class dateAccepted_element: public Element, public ST_String
    {
    public:
        dateAccepted_element();
        ~dateAccepted_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const dateAccepted_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static dateAccepted_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class dateCopyrighted_element: public Element, public ST_String
    {
    public:
        dateCopyrighted_element();
        ~dateCopyrighted_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const dateCopyrighted_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static dateCopyrighted_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class dateSubmitted_element: public Element, public ST_String
    {
    public:
        dateSubmitted_element();
        ~dateSubmitted_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const dateSubmitted_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static dateSubmitted_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class extent_element: public Element, public ST_String
    {
    public:
        extent_element();
        ~extent_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const extent_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static extent_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class medium_element: public Element, public ST_String
    {
    public:
        medium_element();
        ~medium_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const medium_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static medium_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class isVersionOf_element: public Element, public ST_String
    {
    public:
        isVersionOf_element();
        ~isVersionOf_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const isVersionOf_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static isVersionOf_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class hasVersion_element: public Element, public ST_String
    {
    public:
        hasVersion_element();
        ~hasVersion_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const hasVersion_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static hasVersion_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class isReplacedBy_element: public Element, public ST_String
    {
    public:
        isReplacedBy_element();
        ~isReplacedBy_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const isReplacedBy_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static isReplacedBy_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class replaces_element: public Element, public ST_String
    {
    public:
        replaces_element();
        ~replaces_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const replaces_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static replaces_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class isRequiredBy_element: public Element, public ST_String
    {
    public:
        isRequiredBy_element();
        ~isRequiredBy_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const isRequiredBy_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static isRequiredBy_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class requires_element: public Element, public ST_String
    {
    public:
        requires_element();
        ~requires_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const requires_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static requires_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class isPartOf_element: public Element, public ST_String
    {
    public:
        isPartOf_element();
        ~isPartOf_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const isPartOf_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static isPartOf_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class hasPart_element: public Element, public ST_String
    {
    public:
        hasPart_element();
        ~hasPart_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const hasPart_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static hasPart_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class isReferencedBy_element: public Element, public ST_String
    {
    public:
        isReferencedBy_element();
        ~isReferencedBy_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const isReferencedBy_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static isReferencedBy_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class references_element: public Element, public ST_String
    {
    public:
        references_element();
        ~references_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const references_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static references_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class isFormatOf_element: public Element, public ST_String
    {
    public:
        isFormatOf_element();
        ~isFormatOf_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const isFormatOf_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static isFormatOf_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class hasFormat_element: public Element, public ST_String
    {
    public:
        hasFormat_element();
        ~hasFormat_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const hasFormat_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static hasFormat_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class conformsTo_element: public Element, public ST_String
    {
    public:
        conformsTo_element();
        ~conformsTo_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const conformsTo_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static conformsTo_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class spatial_element: public Element, public ST_String
    {
    public:
        spatial_element();
        ~spatial_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const spatial_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static spatial_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class temporal_element: public Element, public ST_String
    {
    public:
        temporal_element();
        ~temporal_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const temporal_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static temporal_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class audience_element: public Element, public ST_String
    {
    public:
        audience_element();
        ~audience_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const audience_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static audience_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class mediator_element: public Element, public ST_String
    {
    public:
        mediator_element();
        ~mediator_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const mediator_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static mediator_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class educationLevel_element: public Element, public ST_String
    {
    public:
        educationLevel_element();
        ~educationLevel_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const educationLevel_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static educationLevel_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class accessRights_element: public Element, public ST_String
    {
    public:
        accessRights_element();
        ~accessRights_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const accessRights_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static accessRights_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

    class bibliographicCitation_element: public Element, public ST_String
    {
    public:
        bibliographicCitation_element();
        ~bibliographicCitation_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const bibliographicCitation_element& default_instance();
        bool has__attr() const;
        void set__attr(const XSD::ENTITIES_& __attr);
        const XSD::ENTITIES_& get__attr() const;
    protected:
    private:
        static bibliographicCitation_element* default_instance_;
        bool m_has__attr;
        XSD::ENTITIES_ m__attr;
    };

}
#endif