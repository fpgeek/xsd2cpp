namespace ns_s {
    class Element;
    class Attribute;
    class ST_Lang;
    class ST_HexColorRGB;
    class ST_Panose;
    class ST_CalendarType;
    class ST_AlgClass;
    class ST_CryptProv;
    class ST_AlgType;
    class ST_ColorType;
    class ST_Guid;
    class ST_OnOff;
    class ST_OnOff1;
    class ST_String;
    class ST_XmlName;
    class ST_TrueFalse;
    class ST_TrueFalseBlank;
    class ST_UnsignedDecimalNumber;
    class ST_TwipsMeasure;
    class ST_VerticalAlignRun;
    class ST_Xstring;
    class ST_XAlign;
    class ST_YAlign;
    class ST_ConformanceClass;
    class ST_UniversalMeasure;
    class ST_PositiveUniversalMeasure;
    class ST_Percentage;
    class ST_FixedPercentage;
    class ST_PositivePercentage;
    class ST_PositiveFixedPercentage;
}
#ifndef __shared_commonSimpleTypes_xsd_
#define __shared_commonSimpleTypes_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_s {
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

    class ST_Lang: public XSD::SimpleType
    {
    public:
        ST_Lang();
        ST_Lang(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Lang& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Lang* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_HexColorRGB: public XSD::SimpleType
    {
    public:
        ST_HexColorRGB();
        ST_HexColorRGB(const XSD::hexBinary_& _hexBinary);
        bool has_hexBinary() const;
        void set_hexBinary(const XSD::hexBinary_& _hexBinary);
        const XSD::hexBinary_& get_hexBinary() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_HexColorRGB& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_HexColorRGB* default_instance_;
        bool m_has_hexBinary;
        XSD::hexBinary_ m_hexBinary;
    };

    class ST_Panose: public XSD::SimpleType
    {
    public:
        ST_Panose();
        ST_Panose(const XSD::hexBinary_& _hexBinary);
        bool has_hexBinary() const;
        void set_hexBinary(const XSD::hexBinary_& _hexBinary);
        const XSD::hexBinary_& get_hexBinary() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Panose& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Panose* default_instance_;
        bool m_has_hexBinary;
        XSD::hexBinary_ m_hexBinary;
    };

    class ST_CalendarType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _gregorian_ = 0,
            _gregorianUs_,
            _gregorianMeFrench_,
            _gregorianArabic_,
            _hijri_,
            _hebrew_,
            _taiwan_,
            _japan_,
            _thai_,
            _korea_,
            _saka_,
            _gregorianXlitEnglish_,
            _gregorianXlitFrench_,
            _none_
        };
        ST_CalendarType();
        ST_CalendarType(const ST_CalendarType::Type& _type);
        bool has_type() const;
        void set_type(const ST_CalendarType::Type& _type);
        const ST_CalendarType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_CalendarType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_CalendarType* default_instance_;
        bool m_has_type;
        ST_CalendarType::Type m_type;
    };

    class ST_AlgClass: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _hash_ = 0,
            _custom_
        };
        ST_AlgClass();
        ST_AlgClass(const ST_AlgClass::Type& _type);
        bool has_type() const;
        void set_type(const ST_AlgClass::Type& _type);
        const ST_AlgClass::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_AlgClass& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_AlgClass* default_instance_;
        bool m_has_type;
        ST_AlgClass::Type m_type;
    };

    class ST_CryptProv: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _rsaAES_ = 0,
            _rsaFull_,
            _custom_
        };
        ST_CryptProv();
        ST_CryptProv(const ST_CryptProv::Type& _type);
        bool has_type() const;
        void set_type(const ST_CryptProv::Type& _type);
        const ST_CryptProv::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_CryptProv& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_CryptProv* default_instance_;
        bool m_has_type;
        ST_CryptProv::Type m_type;
    };

    class ST_AlgType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _typeAny_ = 0,
            _custom_
        };
        ST_AlgType();
        ST_AlgType(const ST_AlgType::Type& _type);
        bool has_type() const;
        void set_type(const ST_AlgType::Type& _type);
        const ST_AlgType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_AlgType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_AlgType* default_instance_;
        bool m_has_type;
        ST_AlgType::Type m_type;
    };

    class ST_ColorType: public XSD::SimpleType
    {
    public:
        ST_ColorType();
        ST_ColorType(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ColorType& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_ColorType* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_Guid: public XSD::SimpleType
    {
    public:
        ST_Guid();
        ST_Guid(const XSD::token_& _token);
        bool has_token() const;
        void set_token(const XSD::token_& _token);
        const XSD::token_& get_token() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Guid& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Guid* default_instance_;
        bool m_has_token;
        XSD::token_ m_token;
    };

    class ST_OnOff: public XSD::SimpleType
    {
    public:
        bool has_boolean() const;
        void set_boolean(const XSD::boolean_& _boolean);
        const XSD::boolean_& get_boolean() const;
        void clear_boolean();
        bool has_ST_OnOff1() const;
        ST_OnOff1* mutable_ST_OnOff1();
        const ST_OnOff1& get_ST_OnOff1() const;
        void clear_ST_OnOff1();
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OnOff& default_instance();
    protected:
    private:
        bool m_has_boolean;
        XSD::boolean_ m_boolean;
        bool m_has_ST_OnOff1;
        ST_OnOff1* m_ST_OnOff1;
        static ST_OnOff* default_instance_;
    };

    class ST_OnOff1: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _on_ = 0,
            _off_
        };
        ST_OnOff1();
        ST_OnOff1(const ST_OnOff1::Type& _type);
        bool has_type() const;
        void set_type(const ST_OnOff1::Type& _type);
        const ST_OnOff1::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_OnOff1& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_OnOff1* default_instance_;
        bool m_has_type;
        ST_OnOff1::Type m_type;
    };

    class ST_String: public XSD::SimpleType
    {
    public:
        ST_String();
        ST_String(const XSD::string_& _string);
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

    class ST_XmlName: public XSD::SimpleType
    {
    public:
        ST_XmlName();
        ST_XmlName(const XSD::NCName_& _NCName);
        bool has_NCName() const;
        void set_NCName(const XSD::NCName_& _NCName);
        const XSD::NCName_& get_NCName() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_XmlName& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_XmlName* default_instance_;
        bool m_has_NCName;
        XSD::NCName_ m_NCName;
    };

    class ST_TrueFalse: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _t_ = 0,
            _f_,
            _true_,
            _false_
        };
        ST_TrueFalse();
        ST_TrueFalse(const ST_TrueFalse::Type& _type);
        bool has_type() const;
        void set_type(const ST_TrueFalse::Type& _type);
        const ST_TrueFalse::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TrueFalse& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TrueFalse* default_instance_;
        bool m_has_type;
        ST_TrueFalse::Type m_type;
    };

    class ST_TrueFalseBlank: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _t_ = 0,
            _f_,
            _true_,
            _false_,
            __,
            _True_,
            _False_
        };
        ST_TrueFalseBlank();
        ST_TrueFalseBlank(const ST_TrueFalseBlank::Type& _type);
        bool has_type() const;
        void set_type(const ST_TrueFalseBlank::Type& _type);
        const ST_TrueFalseBlank::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TrueFalseBlank& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TrueFalseBlank* default_instance_;
        bool m_has_type;
        ST_TrueFalseBlank::Type m_type;
    };

    class ST_UnsignedDecimalNumber: public XSD::SimpleType
    {
    public:
        ST_UnsignedDecimalNumber();
        ST_UnsignedDecimalNumber(const XSD::unsignedLong_& _unsignedLong);
        bool has_unsignedLong() const;
        void set_unsignedLong(const XSD::unsignedLong_& _unsignedLong);
        const XSD::unsignedLong_& get_unsignedLong() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_UnsignedDecimalNumber& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_UnsignedDecimalNumber* default_instance_;
        bool m_has_unsignedLong;
        XSD::unsignedLong_ m_unsignedLong;
    };

    class ST_TwipsMeasure: public XSD::SimpleType
    {
    public:
        bool has_ST_UnsignedDecimalNumber() const;
        ST_UnsignedDecimalNumber* mutable_ST_UnsignedDecimalNumber();
        const ST_UnsignedDecimalNumber& get_ST_UnsignedDecimalNumber() const;
        void clear_ST_UnsignedDecimalNumber();
        bool has_ST_PositiveUniversalMeasure() const;
        ST_PositiveUniversalMeasure* mutable_ST_PositiveUniversalMeasure();
        const ST_PositiveUniversalMeasure& get_ST_PositiveUniversalMeasure() const;
        void clear_ST_PositiveUniversalMeasure();
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TwipsMeasure& default_instance();
    protected:
    private:
        bool m_has_ST_UnsignedDecimalNumber;
        ST_UnsignedDecimalNumber* m_ST_UnsignedDecimalNumber;
        bool m_has_ST_PositiveUniversalMeasure;
        ST_PositiveUniversalMeasure* m_ST_PositiveUniversalMeasure;
        static ST_TwipsMeasure* default_instance_;
    };

    class ST_VerticalAlignRun: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _baseline_ = 0,
            _superscript_,
            _subscript_
        };
        ST_VerticalAlignRun();
        ST_VerticalAlignRun(const ST_VerticalAlignRun::Type& _type);
        bool has_type() const;
        void set_type(const ST_VerticalAlignRun::Type& _type);
        const ST_VerticalAlignRun::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_VerticalAlignRun& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_VerticalAlignRun* default_instance_;
        bool m_has_type;
        ST_VerticalAlignRun::Type m_type;
    };

    class ST_Xstring: public XSD::SimpleType
    {
    public:
        ST_Xstring();
        ST_Xstring(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Xstring& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Xstring* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_XAlign: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _left_ = 0,
            _center_,
            _right_,
            _inside_,
            _outside_
        };
        ST_XAlign();
        ST_XAlign(const ST_XAlign::Type& _type);
        bool has_type() const;
        void set_type(const ST_XAlign::Type& _type);
        const ST_XAlign::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_XAlign& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_XAlign* default_instance_;
        bool m_has_type;
        ST_XAlign::Type m_type;
    };

    class ST_YAlign: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _inline_ = 0,
            _top_,
            _center_,
            _bottom_,
            _inside_,
            _outside_
        };
        ST_YAlign();
        ST_YAlign(const ST_YAlign::Type& _type);
        bool has_type() const;
        void set_type(const ST_YAlign::Type& _type);
        const ST_YAlign::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_YAlign& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_YAlign* default_instance_;
        bool m_has_type;
        ST_YAlign::Type m_type;
    };

    class ST_ConformanceClass: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _strict_ = 0,
            _transitional_
        };
        ST_ConformanceClass();
        ST_ConformanceClass(const ST_ConformanceClass::Type& _type);
        bool has_type() const;
        void set_type(const ST_ConformanceClass::Type& _type);
        const ST_ConformanceClass::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ConformanceClass& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ConformanceClass* default_instance_;
        bool m_has_type;
        ST_ConformanceClass::Type m_type;
    };

    class ST_UniversalMeasure: public XSD::SimpleType
    {
    public:
        ST_UniversalMeasure();
        ST_UniversalMeasure(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_UniversalMeasure& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_UniversalMeasure* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_PositiveUniversalMeasure: public ST_UniversalMeasure
    {
    public:
        ST_PositiveUniversalMeasure();
        ST_PositiveUniversalMeasure(const ST_UniversalMeasure& _ST_UniversalMeasure);
        static const ST_PositiveUniversalMeasure& default_instance();
    protected:
    private:
        static ST_PositiveUniversalMeasure* default_instance_;
    };

    class ST_Percentage: public XSD::SimpleType
    {
    public:
        ST_Percentage();
        ST_Percentage(const XSD::string_& _string);
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Percentage& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Percentage* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_FixedPercentage: public ST_Percentage
    {
    public:
        ST_FixedPercentage();
        ST_FixedPercentage(const ST_Percentage& _ST_Percentage);
        static const ST_FixedPercentage& default_instance();
    protected:
    private:
        static ST_FixedPercentage* default_instance_;
    };

    class ST_PositivePercentage: public ST_Percentage
    {
    public:
        ST_PositivePercentage();
        ST_PositivePercentage(const ST_Percentage& _ST_Percentage);
        static const ST_PositivePercentage& default_instance();
    protected:
    private:
        static ST_PositivePercentage* default_instance_;
    };

    class ST_PositiveFixedPercentage: public ST_Percentage
    {
    public:
        ST_PositiveFixedPercentage();
        ST_PositiveFixedPercentage(const ST_Percentage& _ST_Percentage);
        static const ST_PositiveFixedPercentage& default_instance();
    protected:
    private:
        static ST_PositiveFixedPercentage* default_instance_;
    };

}
#endif