namespace ns_w10 {
    class Element;
    class Attribute;
    class ST_BorderType;
    class ST_BorderShadow;
    class ST_WrapType;
    class ST_WrapSide;
    class ST_HorizontalAnchor;
    class ST_VerticalAnchor;
    class CT_Border;
    class CT_Wrap;
    class CT_AnchorLock;
    class bordertop_element;
    class borderleft_element;
    class borderright_element;
    class borderbottom_element;
    class wrap_element;
    class anchorlock_element;
}
#ifndef __vml_wordprocessingDrawing_xsd_
#define __vml_wordprocessingDrawing_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_w10 {
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

    class ST_BorderType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _none_ = 0,
            _single_,
            _thick_,
            _double_,
            _hairline_,
            _dot_,
            _dash_,
            _dotDash_,
            _dashDotDot_,
            _triple_,
            _thinThickSmall_,
            _thickThinSmall_,
            _thickBetweenThinSmall_,
            _thinThick_,
            _thickThin_,
            _thickBetweenThin_,
            _thinThickLarge_,
            _thickThinLarge_,
            _thickBetweenThinLarge_,
            _wave_,
            _doubleWave_,
            _dashedSmall_,
            _dashDotStroked_,
            _threeDEmboss_,
            _threeDEngrave_,
            _HTMLOutset_,
            _HTMLInset_
        };
        ST_BorderType();
        ST_BorderType(const ST_BorderType::Type& _type);
        bool has_type() const;
        void set_type(const ST_BorderType::Type& _type);
        const ST_BorderType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_BorderType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_BorderType* default_instance_;
        bool m_has_type;
        ST_BorderType::Type m_type;
    };

    class ST_BorderShadow: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _t_ = 0,
            _true_,
            _f_,
            _false_
        };
        ST_BorderShadow();
        ST_BorderShadow(const ST_BorderShadow::Type& _type);
        bool has_type() const;
        void set_type(const ST_BorderShadow::Type& _type);
        const ST_BorderShadow::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_BorderShadow& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_BorderShadow* default_instance_;
        bool m_has_type;
        ST_BorderShadow::Type m_type;
    };

    class ST_WrapType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _topAndBottom_ = 0,
            _square_,
            _none_,
            _tight_,
            _through_
        };
        ST_WrapType();
        ST_WrapType(const ST_WrapType::Type& _type);
        bool has_type() const;
        void set_type(const ST_WrapType::Type& _type);
        const ST_WrapType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_WrapType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_WrapType* default_instance_;
        bool m_has_type;
        ST_WrapType::Type m_type;
    };

    class ST_WrapSide: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _both_ = 0,
            _left_,
            _right_,
            _largest_
        };
        ST_WrapSide();
        ST_WrapSide(const ST_WrapSide::Type& _type);
        bool has_type() const;
        void set_type(const ST_WrapSide::Type& _type);
        const ST_WrapSide::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_WrapSide& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_WrapSide* default_instance_;
        bool m_has_type;
        ST_WrapSide::Type m_type;
    };

    class ST_HorizontalAnchor: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _margin_ = 0,
            _page_,
            _text_,
            _char_
        };
        ST_HorizontalAnchor();
        ST_HorizontalAnchor(const ST_HorizontalAnchor::Type& _type);
        bool has_type() const;
        void set_type(const ST_HorizontalAnchor::Type& _type);
        const ST_HorizontalAnchor::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_HorizontalAnchor& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_HorizontalAnchor* default_instance_;
        bool m_has_type;
        ST_HorizontalAnchor::Type m_type;
    };

    class ST_VerticalAnchor: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _margin_ = 0,
            _page_,
            _text_,
            _line_
        };
        ST_VerticalAnchor();
        ST_VerticalAnchor(const ST_VerticalAnchor::Type& _type);
        bool has_type() const;
        void set_type(const ST_VerticalAnchor::Type& _type);
        const ST_VerticalAnchor::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_VerticalAnchor& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_VerticalAnchor* default_instance_;
        bool m_has_type;
        ST_VerticalAnchor::Type m_type;
    };

    class CT_Border: public XSD::ComplexType
    {
    public:
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Border& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_BorderType& _type_attr);
        const ST_BorderType& get_type_attr() const;
        bool has_width_attr() const;
        void set_width_attr(const XSD::positiveInteger_& _width_attr);
        const XSD::positiveInteger_& get_width_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ST_BorderShadow& _shadow_attr);
        const ST_BorderShadow& get_shadow_attr() const;
    protected:
    private:
        static CT_Border* default_instance_;
        bool m_has_type_attr;
        ST_BorderType* m_type_attr;
        bool m_has_width_attr;
        XSD::positiveInteger_ m_width_attr;
        bool m_has_shadow_attr;
        ST_BorderShadow* m_shadow_attr;
    };

    class CT_Wrap: public XSD::ComplexType
    {
    public:
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Wrap& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_WrapType& _type_attr);
        const ST_WrapType& get_type_attr() const;
        bool has_side_attr() const;
        void set_side_attr(const ST_WrapSide& _side_attr);
        const ST_WrapSide& get_side_attr() const;
        bool has_anchorx_attr() const;
        void set_anchorx_attr(const ST_HorizontalAnchor& _anchorx_attr);
        const ST_HorizontalAnchor& get_anchorx_attr() const;
        bool has_anchory_attr() const;
        void set_anchory_attr(const ST_VerticalAnchor& _anchory_attr);
        const ST_VerticalAnchor& get_anchory_attr() const;
    protected:
    private:
        static CT_Wrap* default_instance_;
        bool m_has_type_attr;
        ST_WrapType* m_type_attr;
        bool m_has_side_attr;
        ST_WrapSide* m_side_attr;
        bool m_has_anchorx_attr;
        ST_HorizontalAnchor* m_anchorx_attr;
        bool m_has_anchory_attr;
        ST_VerticalAnchor* m_anchory_attr;
    };

    class CT_AnchorLock: public XSD::ComplexType
    {
    public:
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_AnchorLock& default_instance();
    protected:
    private:
        static CT_AnchorLock* default_instance_;
    };

    class bordertop_element: public Element
    {
    public:
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const bordertop_element& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_BorderType& _type_attr);
        const ST_BorderType& get_type_attr() const;
        bool has_width_attr() const;
        void set_width_attr(const XSD::positiveInteger_& _width_attr);
        const XSD::positiveInteger_& get_width_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ST_BorderShadow& _shadow_attr);
        const ST_BorderShadow& get_shadow_attr() const;
    protected:
    private:
        static bordertop_element* default_instance_;
        bool m_has_type_attr;
        ST_BorderType* m_type_attr;
        bool m_has_width_attr;
        XSD::positiveInteger_ m_width_attr;
        bool m_has_shadow_attr;
        ST_BorderShadow* m_shadow_attr;
    };

    class borderleft_element: public Element
    {
    public:
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const borderleft_element& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_BorderType& _type_attr);
        const ST_BorderType& get_type_attr() const;
        bool has_width_attr() const;
        void set_width_attr(const XSD::positiveInteger_& _width_attr);
        const XSD::positiveInteger_& get_width_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ST_BorderShadow& _shadow_attr);
        const ST_BorderShadow& get_shadow_attr() const;
    protected:
    private:
        static borderleft_element* default_instance_;
        bool m_has_type_attr;
        ST_BorderType* m_type_attr;
        bool m_has_width_attr;
        XSD::positiveInteger_ m_width_attr;
        bool m_has_shadow_attr;
        ST_BorderShadow* m_shadow_attr;
    };

    class borderright_element: public Element
    {
    public:
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const borderright_element& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_BorderType& _type_attr);
        const ST_BorderType& get_type_attr() const;
        bool has_width_attr() const;
        void set_width_attr(const XSD::positiveInteger_& _width_attr);
        const XSD::positiveInteger_& get_width_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ST_BorderShadow& _shadow_attr);
        const ST_BorderShadow& get_shadow_attr() const;
    protected:
    private:
        static borderright_element* default_instance_;
        bool m_has_type_attr;
        ST_BorderType* m_type_attr;
        bool m_has_width_attr;
        XSD::positiveInteger_ m_width_attr;
        bool m_has_shadow_attr;
        ST_BorderShadow* m_shadow_attr;
    };

    class borderbottom_element: public Element
    {
    public:
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const borderbottom_element& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_BorderType& _type_attr);
        const ST_BorderType& get_type_attr() const;
        bool has_width_attr() const;
        void set_width_attr(const XSD::positiveInteger_& _width_attr);
        const XSD::positiveInteger_& get_width_attr() const;
        bool has_shadow_attr() const;
        void set_shadow_attr(const ST_BorderShadow& _shadow_attr);
        const ST_BorderShadow& get_shadow_attr() const;
    protected:
    private:
        static borderbottom_element* default_instance_;
        bool m_has_type_attr;
        ST_BorderType* m_type_attr;
        bool m_has_width_attr;
        XSD::positiveInteger_ m_width_attr;
        bool m_has_shadow_attr;
        ST_BorderShadow* m_shadow_attr;
    };

    class wrap_element: public Element
    {
    public:
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const wrap_element& default_instance();
        bool has_type_attr() const;
        void set_type_attr(const ST_WrapType& _type_attr);
        const ST_WrapType& get_type_attr() const;
        bool has_side_attr() const;
        void set_side_attr(const ST_WrapSide& _side_attr);
        const ST_WrapSide& get_side_attr() const;
        bool has_anchorx_attr() const;
        void set_anchorx_attr(const ST_HorizontalAnchor& _anchorx_attr);
        const ST_HorizontalAnchor& get_anchorx_attr() const;
        bool has_anchory_attr() const;
        void set_anchory_attr(const ST_VerticalAnchor& _anchory_attr);
        const ST_VerticalAnchor& get_anchory_attr() const;
    protected:
    private:
        static wrap_element* default_instance_;
        bool m_has_type_attr;
        ST_WrapType* m_type_attr;
        bool m_has_side_attr;
        ST_WrapSide* m_side_attr;
        bool m_has_anchorx_attr;
        ST_HorizontalAnchor* m_anchorx_attr;
        bool m_has_anchory_attr;
        ST_VerticalAnchor* m_anchory_attr;
    };

    class anchorlock_element: public Element
    {
    public:
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const anchorlock_element& default_instance();
    protected:
    private:
        static anchorlock_element* default_instance_;
    };

}
#endif