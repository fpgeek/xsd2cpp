#ifndef shared-commonSimpleTypes_xsd 
#define shared-commonSimpleTypes_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_s{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_Lang : public XSD::SimpleType{
    public:
        ST_Lang();
        ST_Lang(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Lang& default_instance() const;

    private:
        static ST_Lang* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_HexColorRGB : public XSD::SimpleType{
    public:
        ST_HexColorRGB();
        ST_HexColorRGB(const XSD::hexBinary& _hexBinary );
        bool has_hexBinary() const;
        void set_hexBinary(const hexBinary& _hexBinary );
        const hexBinary& hexBinary() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_HexColorRGB& default_instance() const;

    private:
        static ST_HexColorRGB* default_instance_ ;
        bool m_has_hexBinary ;
        hexBinary m_hexBinary ;

    }

    class ST_Panose : public XSD::SimpleType{
    public:
        ST_Panose();
        ST_Panose(const XSD::hexBinary& _hexBinary );
        bool has_hexBinary() const;
        void set_hexBinary(const hexBinary& _hexBinary );
        const hexBinary& hexBinary() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Panose& default_instance() const;

    private:
        static ST_Panose* default_instance_ ;
        bool m_has_hexBinary ;
        hexBinary m_hexBinary ;

    }

    class ST_CalendarType : public XSD::SimpleType{
    public:
        ST_CalendarType();
        ST_CalendarType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CalendarType& default_instance() const;
        enum Type{
            _gregorian_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_CalendarType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AlgClass : public XSD::SimpleType{
    public:
        ST_AlgClass();
        ST_AlgClass(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AlgClass& default_instance() const;
        enum Type{
            _hash_ = 1,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_AlgClass* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CryptProv : public XSD::SimpleType{
    public:
        ST_CryptProv();
        ST_CryptProv(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CryptProv& default_instance() const;
        enum Type{
            _rsaAES_ = 1,
            _rsaFull_,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_CryptProv* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AlgType : public XSD::SimpleType{
    public:
        ST_AlgType();
        ST_AlgType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_AlgType& default_instance() const;
        enum Type{
            _typeAny_ = 1,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_AlgType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ColorType : public XSD::SimpleType{
    public:
        ST_ColorType();
        ST_ColorType(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ColorType& default_instance() const;

    private:
        static ST_ColorType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_Guid : public XSD::SimpleType{
    public:
        ST_Guid();
        ST_Guid(const XSD::token& _token );
        bool has_token() const;
        void set_token(const token& _token );
        const token& token() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Guid& default_instance() const;

    private:
        static ST_Guid* default_instance_ ;
        bool m_has_token ;
        token m_token ;

    }

    class ST_OnOff : public XSD::SimpleType{
    public:
        bool has_boolean() const;
        void set_boolean(const boolean& _boolean );
        const boolean& boolean() const;
        bool has_ST_OnOff1() const;
        ST_OnOff1* mutable_ST_OnOff1();
        const ST_OnOff1& ST_OnOff1() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OnOff& default_instance() const;

    private:
        void clear_boolean();
        void clear_ST_OnOff1();
        bool m_has_boolean ;
        boolean m_boolean ;
        bool m_has_ST_OnOff1 ;
        ST_OnOff1* m_ST_OnOff1 ;
        static ST_OnOff* default_instance_ ;

    }

    class ST_OnOff1 : public XSD::SimpleType{
    public:
        ST_OnOff1();
        ST_OnOff1(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_OnOff1& default_instance() const;
        enum Type{
            _on_ = 1,
            _off_
        }

    private:
        static const string TypeStrList [];
        static ST_OnOff1* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_String : public XSD::SimpleType{
    public:
        ST_String();
        ST_String(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_String& default_instance() const;

    private:
        static ST_String* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_XmlName : public XSD::SimpleType{
    public:
        ST_XmlName();
        ST_XmlName(const XSD::NCName& _NCName );
        bool has_NCName() const;
        void set_NCName(const NCName& _NCName );
        const NCName& NCName() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_XmlName& default_instance() const;

    private:
        static ST_XmlName* default_instance_ ;
        bool m_has_NCName ;
        NCName m_NCName ;

    }

    class ST_TrueFalse : public XSD::SimpleType{
    public:
        ST_TrueFalse();
        ST_TrueFalse(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TrueFalse& default_instance() const;
        enum Type{
            _t_ = 1,
            _f_,
            _true_,
            _false_
        }

    private:
        static const string TypeStrList [];
        static ST_TrueFalse* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TrueFalseBlank : public XSD::SimpleType{
    public:
        ST_TrueFalseBlank();
        ST_TrueFalseBlank(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TrueFalseBlank& default_instance() const;
        enum Type{
            _t_ = 1,
            _f_,
            _true_,
            _false_,
            __,
            _True_,
            _False_
        }

    private:
        static const string TypeStrList [];
        static ST_TrueFalseBlank* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_UnsignedDecimalNumber : public XSD::SimpleType{
    public:
        ST_UnsignedDecimalNumber();
        ST_UnsignedDecimalNumber(const XSD::unsignedLong& _unsignedLong );
        bool has_unsignedLong() const;
        void set_unsignedLong(const unsignedLong& _unsignedLong );
        const unsignedLong& unsignedLong() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_UnsignedDecimalNumber& default_instance() const;

    private:
        static ST_UnsignedDecimalNumber* default_instance_ ;
        bool m_has_unsignedLong ;
        unsignedLong m_unsignedLong ;

    }

    class ST_TwipsMeasure : public XSD::SimpleType{
    public:
        bool has_ST_UnsignedDecimalNumber() const;
        ST_UnsignedDecimalNumber* mutable_ST_UnsignedDecimalNumber();
        const ST_UnsignedDecimalNumber& ST_UnsignedDecimalNumber() const;
        bool has_ST_PositiveUniversalMeasure() const;
        ST_PositiveUniversalMeasure* mutable_ST_PositiveUniversalMeasure();
        const ST_PositiveUniversalMeasure& ST_PositiveUniversalMeasure() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TwipsMeasure& default_instance() const;

    private:
        void clear_ST_UnsignedDecimalNumber();
        void clear_ST_PositiveUniversalMeasure();
        bool m_has_ST_UnsignedDecimalNumber ;
        ST_UnsignedDecimalNumber* m_ST_UnsignedDecimalNumber ;
        bool m_has_ST_PositiveUniversalMeasure ;
        ST_PositiveUniversalMeasure* m_ST_PositiveUniversalMeasure ;
        static ST_TwipsMeasure* default_instance_ ;

    }

    class ST_VerticalAlignRun : public XSD::SimpleType{
    public:
        ST_VerticalAlignRun();
        ST_VerticalAlignRun(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_VerticalAlignRun& default_instance() const;
        enum Type{
            _baseline_ = 1,
            _superscript_,
            _subscript_
        }

    private:
        static const string TypeStrList [];
        static ST_VerticalAlignRun* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Xstring : public XSD::SimpleType{
    public:
        ST_Xstring();
        ST_Xstring(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Xstring& default_instance() const;

    private:
        static ST_Xstring* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_XAlign : public XSD::SimpleType{
    public:
        ST_XAlign();
        ST_XAlign(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_XAlign& default_instance() const;
        enum Type{
            _left_ = 1,
            _center_,
            _right_,
            _inside_,
            _outside_
        }

    private:
        static const string TypeStrList [];
        static ST_XAlign* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_YAlign : public XSD::SimpleType{
    public:
        ST_YAlign();
        ST_YAlign(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_YAlign& default_instance() const;
        enum Type{
            _inline_ = 1,
            _top_,
            _center_,
            _bottom_,
            _inside_,
            _outside_
        }

    private:
        static const string TypeStrList [];
        static ST_YAlign* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConformanceClass : public XSD::SimpleType{
    public:
        ST_ConformanceClass();
        ST_ConformanceClass(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ConformanceClass& default_instance() const;
        enum Type{
            _strict_ = 1,
            _transitional_
        }

    private:
        static const string TypeStrList [];
        static ST_ConformanceClass* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_UniversalMeasure : public XSD::SimpleType{
    public:
        ST_UniversalMeasure();
        ST_UniversalMeasure(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_UniversalMeasure& default_instance() const;

    private:
        static ST_UniversalMeasure* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_PositiveUniversalMeasure : public ST_UniversalMeasure{
    public:
        ST_PositiveUniversalMeasure(const ST_UniversalMeasure& _ST_UniversalMeasure );

    private:

    }

    class ST_Percentage : public XSD::SimpleType{
    public:
        ST_Percentage();
        ST_Percentage(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Percentage& default_instance() const;

    private:
        static ST_Percentage* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_FixedPercentage : public ST_Percentage{
    public:
        ST_FixedPercentage(const ST_Percentage& _ST_Percentage );

    private:

    }

    class ST_PositivePercentage : public ST_Percentage{
    public:
        ST_PositivePercentage(const ST_Percentage& _ST_Percentage );

    private:

    }

    class ST_PositiveFixedPercentage : public ST_Percentage{
    public:
        ST_PositiveFixedPercentage(const ST_Percentage& _ST_Percentage );

    private:

    }

}