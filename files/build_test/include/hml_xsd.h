namespace ns_hml {
class Element;
class Attribute;
class ST_String;
class ST_OnOff;
class ST_DecimalNumber;
class ST_UnsignedDecimalNumber;
class ST_HunitMeasure;
class ST_HexColorRGB;
class ST_IntColorRGB;
class ST_StepType;
class ST_Step;
class ST_Percent;
class ST_Angle;
class ST_Effect;
class ST_LINETYPE1;
class ST_LineType2;
class ST_LineType3;
class ST_LineType4;
class ST_LineWidth1;
class ST_LineWidth2;
class ST_NumberType1;
class ST_NumberType2;
class ST_AlignmentType1;
class ST_AlignmentType2;
class ST_ArrowType;
class ST_ArrowSize;
class ST_LangType;
class ST_HatchStyle;
class ST_InFillMode;
class ST_VertAlignType1;
class ST_VertAlignType2;
class ST_LineWrapType;
class ST_TextWrapType;
class ST_FieldType;
class ST_FontType;
class ST_OFFSET;
class ST_GradType;
class ST_HeadingType;
class ST_RATIO;
class ST_CHARSPACING;
class ST_RELSIZE;
class ST_StrikeType;
class ST_ShadowType;
class ST_TabType;
class ST_NumberLevelType1;
class ST_NumberLevelType2;
class ST_BreakLatinWord;
class ST_Condense;
class ST_LineSpacing;
class ST_StyleType;
class ST_ID;
class ST_HWPML_STYLE;
class ST_BINITEM_TYPE;
class ST_BINITEM_FORMAT;
class CT_String;
class CT_OnOff;
class CT_DecimalNumber;
class CT_HunitMeasure;
class CT_Color;
class CT_Image;
class CT_SUBSTFONT;
class CT_TYPEINFO;
class CT_FONT;
class CT_PARAHEAD;
class CT_AUTONUMFORMAT;
class CT_NOTELINE;
class CT_NOTESPACING;
class CT_NOTENUMBERING;
class CT_NOTEPLACEMENT;
class CT_FONTTYPE;
class CT_BORDER;
class CT_WINDOWBRUSH;
class CT_GRADATION;
class CT_IMAGEBRUSH;
class CT_FILLBRUSH;
class CT_BORDERFILL;
class CT_FONTID;
class CT_RATIO;
class CT_CHARSPACING;
class CT_RELSIZE;
class CT_CHAROFFSET;
class CT_UNDERLINE;
class CT_STRIKEOUT;
class CT_OUTLINE;
class CT_SHADOW;
class CT_CHARSHAPE;
class CT_TABITEM;
class CT_TABDEF;
class CT_NUMBERING;
class CT_BULLET;
class CT_PARAMARGIN;
class CT_PARABORDER;
class CT_PARASHAPE;
class CT_STYLE;
class CT_MEMO;
class CT_NOTESHAPE;
class CT_STARTNUMBER;
class CT_HIDE;
class CT_PAGEMARGIN;
class CT_PAGEDEF;
class CT_PAGEOFFSET;
class CT_PAGEBORDERFILL;
class CT_SECDEF;
class CT_COLDEF;
class CT_FIELDBEGIN;
class CT_FIELDEND;
class CT_AUTONUM;
class CT_DUTMAL;
class CT_NAME;
class CT_CHAR;
class CT_TABLE;
class CT_PICTURE;
class CT_TEXT;
class CT_P;
class CT_SIZE;
class CT_POSITION;
class CT_OUTSIDEMARGIN;
class CT_SHAPEOBJECT;
class CT_INSIDEMARGIN;
class CT_CELLZONE;
class CT_CELLZONELIST;
class CT_ROW;
class CT_CELL;
class CT_CELLMARGIN;
class CT_PARALIST;
class CT_EQUATION;
class CT_ID;
class CT_BINITEM;
class CT_TITLE;
class CT_SUBJECT;
class CT_AUTHOR;
class CT_DATE;
class CT_KEYWORDS;
class CT_COMMENTS;
class CT_FORBIDDENSTRING;
class CT_DOCSUMMARY;
class CT_BEGINNUMBER;
class CT_CARETPOS;
class CT_DOCSETTING;
class CT_BINDATALIST;
class CT_FONTFACE;
class CT_FACENAMELIST;
class CT_BORDERFILLLIST;
class CT_CHARSHAPELIST;
class CT_TABDEFLIST;
class CT_NUMBERINGLIST;
class CT_BULLETLIST;
class CT_PARASHAPELIST;
class CT_STYLELIST;
class CT_MEMOSHAPELIST;
class CT_MAPPINGTABLE;
class CT_HEAD;
class CT_SECTION;
class CT_BODY;
class CT_SCRIPTCODE;
class CT_TAIL;
class CT_HWPML;
class HWPML_element;
}
#ifndef __hml_xsd_
#define __hml_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_hml {
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
    ST_String(const XSD::string_& _value);
    ~ST_String();
    bool has_value() const;
    void set_value(const XSD::string_& _value);
    const XSD::string_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_String& default_instance();
    std::string toString() const;
protected:
private:
    static ST_String* default_instance_;
    bool m_has_value;
    XSD::string_ m_value;
};

class ST_OnOff: public XSD::SimpleType
{
public:
    enum  Type
    {
        _true_ = 0,
        _false_,
        _on_,
        _off_,
        _0_,
        _1_
    };
    ST_OnOff();
    ST_OnOff(const ST_OnOff::Type& _value);
    ~ST_OnOff();
    bool has_value() const;
    void set_value(const ST_OnOff::Type& _value);
    const ST_OnOff::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_OnOff& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_OnOff* default_instance_;
    bool m_has_value;
    ST_OnOff::Type m_value;
};

class ST_DecimalNumber: public XSD::SimpleType
{
public:
    ST_DecimalNumber();
    ST_DecimalNumber(const XSD::integer_& _value);
    ~ST_DecimalNumber();
    bool has_value() const;
    void set_value(const XSD::integer_& _value);
    const XSD::integer_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DecimalNumber& default_instance();
    std::string toString() const;
protected:
private:
    static ST_DecimalNumber* default_instance_;
    bool m_has_value;
    XSD::integer_ m_value;
};

class ST_UnsignedDecimalNumber: public XSD::SimpleType
{
public:
    ST_UnsignedDecimalNumber();
    ST_UnsignedDecimalNumber(const XSD::unsignedLong_& _value);
    ~ST_UnsignedDecimalNumber();
    bool has_value() const;
    void set_value(const XSD::unsignedLong_& _value);
    const XSD::unsignedLong_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_UnsignedDecimalNumber& default_instance();
    std::string toString() const;
protected:
private:
    static ST_UnsignedDecimalNumber* default_instance_;
    bool m_has_value;
    XSD::unsignedLong_ m_value;
};

class ST_HunitMeasure: public ST_DecimalNumber
{
public:
    ST_HunitMeasure();
    ST_HunitMeasure(const ST_DecimalNumber& _ST_DecimalNumber);
    ~ST_HunitMeasure();
    static const ST_HunitMeasure& default_instance();
protected:
private:
    static ST_HunitMeasure* default_instance_;
};

class ST_HexColorRGB: public XSD::SimpleType
{
public:
    ST_HexColorRGB();
    ST_HexColorRGB(const XSD::hexBinary_& _value);
    ~ST_HexColorRGB();
    bool has_value() const;
    void set_value(const XSD::hexBinary_& _value);
    const XSD::hexBinary_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HexColorRGB& default_instance();
    std::string toString() const;
protected:
private:
    static ST_HexColorRGB* default_instance_;
    bool m_has_value;
    XSD::hexBinary_ m_value;
};

class ST_IntColorRGB: public ST_UnsignedDecimalNumber
{
public:
    ST_IntColorRGB();
    ST_IntColorRGB(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_IntColorRGB();
    static const ST_IntColorRGB& default_instance();
protected:
private:
    static ST_IntColorRGB* default_instance_;
};

class ST_StepType: public ST_String
{
public:
    ST_StepType();
    ST_StepType(const ST_String& _ST_String);
    ~ST_StepType();
    static const ST_StepType& default_instance();
protected:
private:
    static ST_StepType* default_instance_;
};

class ST_Step: public XSD::SimpleType
{
public:
    ST_Step();
    ST_Step(const XSD::integer_& _value);
    ~ST_Step();
    bool has_value() const;
    void set_value(const XSD::integer_& _value);
    const XSD::integer_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Step& default_instance();
    std::string toString() const;
protected:
private:
    static ST_Step* default_instance_;
    bool m_has_value;
    XSD::integer_ m_value;
};

class ST_Percent: public XSD::SimpleType
{
public:
    ST_Percent();
    ST_Percent(const XSD::integer_& _value);
    ~ST_Percent();
    bool has_value() const;
    void set_value(const XSD::integer_& _value);
    const XSD::integer_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Percent& default_instance();
    std::string toString() const;
protected:
private:
    static ST_Percent* default_instance_;
    bool m_has_value;
    XSD::integer_ m_value;
};

class ST_Angle: public XSD::SimpleType
{
public:
    ST_Angle();
    ST_Angle(const XSD::integer_& _value);
    ~ST_Angle();
    bool has_value() const;
    void set_value(const XSD::integer_& _value);
    const XSD::integer_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Angle& default_instance();
    std::string toString() const;
protected:
private:
    static ST_Angle* default_instance_;
    bool m_has_value;
    XSD::integer_ m_value;
};

class ST_Effect: public XSD::SimpleType
{
public:
    enum  Type
    {
        _RealPic_ = 0,
        _GrayScale_,
        _BlackWhite_
    };
    ST_Effect();
    ST_Effect(const ST_Effect::Type& _value);
    ~ST_Effect();
    bool has_value() const;
    void set_value(const ST_Effect::Type& _value);
    const ST_Effect::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Effect& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Effect* default_instance_;
    bool m_has_value;
    ST_Effect::Type m_value;
};

class ST_LINETYPE1: public XSD::SimpleType
{
public:
    enum  Type
    {
        _None_ = 0,
        _Solid_,
        _Dash_,
        _Dot_,
        _DashDot_,
        _DashDotDot_,
        _LongDash_,
        _Circle_,
        _DoubleSlim_,
        _SlimThick_,
        _ThickSlim_,
        _SlimThickSlim_
    };
    ST_LINETYPE1();
    ST_LINETYPE1(const ST_LINETYPE1::Type& _value);
    ~ST_LINETYPE1();
    bool has_value() const;
    void set_value(const ST_LINETYPE1::Type& _value);
    const ST_LINETYPE1::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_LINETYPE1& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_LINETYPE1* default_instance_;
    bool m_has_value;
    ST_LINETYPE1::Type m_value;
};

class ST_LineType2: public ST_String
{
public:
    ST_LineType2();
    ST_LineType2(const ST_String& _ST_String);
    ~ST_LineType2();
    static const ST_LineType2& default_instance();
protected:
private:
    static ST_LineType2* default_instance_;
};

class ST_LineType3: public ST_String
{
public:
    ST_LineType3();
    ST_LineType3(const ST_String& _ST_String);
    ~ST_LineType3();
    static const ST_LineType3& default_instance();
protected:
private:
    static ST_LineType3* default_instance_;
};

class ST_LineType4: public ST_UnsignedDecimalNumber
{
public:
    ST_LineType4();
    ST_LineType4(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_LineType4();
    static const ST_LineType4& default_instance();
protected:
private:
    static ST_LineType4* default_instance_;
};

class ST_LineWidth1: public ST_String
{
public:
    ST_LineWidth1();
    ST_LineWidth1(const ST_String& _ST_String);
    ~ST_LineWidth1();
    static const ST_LineWidth1& default_instance();
protected:
private:
    static ST_LineWidth1* default_instance_;
};

class ST_LineWidth2: public ST_UnsignedDecimalNumber
{
public:
    ST_LineWidth2();
    ST_LineWidth2(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_LineWidth2();
    static const ST_LineWidth2& default_instance();
protected:
private:
    static ST_LineWidth2* default_instance_;
};

class ST_NumberType1: public ST_String
{
public:
    ST_NumberType1();
    ST_NumberType1(const ST_String& _ST_String);
    ~ST_NumberType1();
    static const ST_NumberType1& default_instance();
protected:
private:
    static ST_NumberType1* default_instance_;
};

class ST_NumberType2: public ST_String
{
public:
    ST_NumberType2();
    ST_NumberType2(const ST_String& _ST_String);
    ~ST_NumberType2();
    static const ST_NumberType2& default_instance();
protected:
private:
    static ST_NumberType2* default_instance_;
};

class ST_AlignmentType1: public ST_String
{
public:
    ST_AlignmentType1();
    ST_AlignmentType1(const ST_String& _ST_String);
    ~ST_AlignmentType1();
    static const ST_AlignmentType1& default_instance();
protected:
private:
    static ST_AlignmentType1* default_instance_;
};

class ST_AlignmentType2: public ST_String
{
public:
    ST_AlignmentType2();
    ST_AlignmentType2(const ST_String& _ST_String);
    ~ST_AlignmentType2();
    static const ST_AlignmentType2& default_instance();
protected:
private:
    static ST_AlignmentType2* default_instance_;
};

class ST_ArrowType: public ST_String
{
public:
    ST_ArrowType();
    ST_ArrowType(const ST_String& _ST_String);
    ~ST_ArrowType();
    static const ST_ArrowType& default_instance();
protected:
private:
    static ST_ArrowType* default_instance_;
};

class ST_ArrowSize: public ST_String
{
public:
    ST_ArrowSize();
    ST_ArrowSize(const ST_String& _ST_String);
    ~ST_ArrowSize();
    static const ST_ArrowSize& default_instance();
protected:
private:
    static ST_ArrowSize* default_instance_;
};

class ST_LangType: public ST_String
{
public:
    ST_LangType();
    ST_LangType(const ST_String& _ST_String);
    ~ST_LangType();
    static const ST_LangType& default_instance();
protected:
private:
    static ST_LangType* default_instance_;
};

class ST_HatchStyle: public ST_String
{
public:
    ST_HatchStyle();
    ST_HatchStyle(const ST_String& _ST_String);
    ~ST_HatchStyle();
    static const ST_HatchStyle& default_instance();
protected:
private:
    static ST_HatchStyle* default_instance_;
};

class ST_InFillMode: public ST_String
{
public:
    ST_InFillMode();
    ST_InFillMode(const ST_String& _ST_String);
    ~ST_InFillMode();
    static const ST_InFillMode& default_instance();
protected:
private:
    static ST_InFillMode* default_instance_;
};

class ST_VertAlignType1: public ST_String
{
public:
    ST_VertAlignType1();
    ST_VertAlignType1(const ST_String& _ST_String);
    ~ST_VertAlignType1();
    static const ST_VertAlignType1& default_instance();
protected:
private:
    static ST_VertAlignType1* default_instance_;
};

class ST_VertAlignType2: public ST_String
{
public:
    ST_VertAlignType2();
    ST_VertAlignType2(const ST_String& _ST_String);
    ~ST_VertAlignType2();
    static const ST_VertAlignType2& default_instance();
protected:
private:
    static ST_VertAlignType2* default_instance_;
};

class ST_LineWrapType: public ST_String
{
public:
    ST_LineWrapType();
    ST_LineWrapType(const ST_String& _ST_String);
    ~ST_LineWrapType();
    static const ST_LineWrapType& default_instance();
protected:
private:
    static ST_LineWrapType* default_instance_;
};

class ST_TextWrapType: public ST_String
{
public:
    ST_TextWrapType();
    ST_TextWrapType(const ST_String& _ST_String);
    ~ST_TextWrapType();
    static const ST_TextWrapType& default_instance();
protected:
private:
    static ST_TextWrapType* default_instance_;
};

class ST_FieldType: public ST_String
{
public:
    ST_FieldType();
    ST_FieldType(const ST_String& _ST_String);
    ~ST_FieldType();
    static const ST_FieldType& default_instance();
protected:
private:
    static ST_FieldType* default_instance_;
};

class ST_FontType: public ST_String
{
public:
    ST_FontType();
    ST_FontType(const ST_String& _ST_String);
    ~ST_FontType();
    static const ST_FontType& default_instance();
protected:
private:
    static ST_FontType* default_instance_;
};

class ST_OFFSET: public ST_DecimalNumber
{
public:
    ST_OFFSET();
    ST_OFFSET(const ST_DecimalNumber& _ST_DecimalNumber);
    ~ST_OFFSET();
    static const ST_OFFSET& default_instance();
protected:
private:
    static ST_OFFSET* default_instance_;
};

class ST_GradType: public ST_String
{
public:
    ST_GradType();
    ST_GradType(const ST_String& _ST_String);
    ~ST_GradType();
    static const ST_GradType& default_instance();
protected:
private:
    static ST_GradType* default_instance_;
};

class ST_HeadingType: public ST_String
{
public:
    ST_HeadingType();
    ST_HeadingType(const ST_String& _ST_String);
    ~ST_HeadingType();
    static const ST_HeadingType& default_instance();
protected:
private:
    static ST_HeadingType* default_instance_;
};

class ST_RATIO: public ST_UnsignedDecimalNumber
{
public:
    ST_RATIO();
    ST_RATIO(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_RATIO();
    static const ST_RATIO& default_instance();
protected:
private:
    static ST_RATIO* default_instance_;
};

class ST_CHARSPACING: public ST_DecimalNumber
{
public:
    ST_CHARSPACING();
    ST_CHARSPACING(const ST_DecimalNumber& _ST_DecimalNumber);
    ~ST_CHARSPACING();
    static const ST_CHARSPACING& default_instance();
protected:
private:
    static ST_CHARSPACING* default_instance_;
};

class ST_RELSIZE: public ST_UnsignedDecimalNumber
{
public:
    ST_RELSIZE();
    ST_RELSIZE(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_RELSIZE();
    static const ST_RELSIZE& default_instance();
protected:
private:
    static ST_RELSIZE* default_instance_;
};

class ST_StrikeType: public ST_String
{
public:
    ST_StrikeType();
    ST_StrikeType(const ST_String& _ST_String);
    ~ST_StrikeType();
    static const ST_StrikeType& default_instance();
protected:
private:
    static ST_StrikeType* default_instance_;
};

class ST_ShadowType: public ST_String
{
public:
    ST_ShadowType();
    ST_ShadowType(const ST_String& _ST_String);
    ~ST_ShadowType();
    static const ST_ShadowType& default_instance();
protected:
private:
    static ST_ShadowType* default_instance_;
};

class ST_TabType: public ST_String
{
public:
    ST_TabType();
    ST_TabType(const ST_String& _ST_String);
    ~ST_TabType();
    static const ST_TabType& default_instance();
protected:
private:
    static ST_TabType* default_instance_;
};

class ST_NumberLevelType1: public ST_UnsignedDecimalNumber
{
public:
    ST_NumberLevelType1();
    ST_NumberLevelType1(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_NumberLevelType1();
    static const ST_NumberLevelType1& default_instance();
protected:
private:
    static ST_NumberLevelType1* default_instance_;
};

class ST_NumberLevelType2: public ST_UnsignedDecimalNumber
{
public:
    ST_NumberLevelType2();
    ST_NumberLevelType2(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_NumberLevelType2();
    static const ST_NumberLevelType2& default_instance();
protected:
private:
    static ST_NumberLevelType2* default_instance_;
};

class ST_BreakLatinWord: public ST_String
{
public:
    ST_BreakLatinWord();
    ST_BreakLatinWord(const ST_String& _ST_String);
    ~ST_BreakLatinWord();
    static const ST_BreakLatinWord& default_instance();
protected:
private:
    static ST_BreakLatinWord* default_instance_;
};

class ST_Condense: public ST_UnsignedDecimalNumber
{
public:
    ST_Condense();
    ST_Condense(const ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_Condense();
    static const ST_Condense& default_instance();
protected:
private:
    static ST_Condense* default_instance_;
};

class ST_LineSpacing: public ST_String
{
public:
    ST_LineSpacing();
    ST_LineSpacing(const ST_String& _ST_String);
    ~ST_LineSpacing();
    static const ST_LineSpacing& default_instance();
protected:
private:
    static ST_LineSpacing* default_instance_;
};

class ST_StyleType: public ST_String
{
public:
    ST_StyleType();
    ST_StyleType(const ST_String& _ST_String);
    ~ST_StyleType();
    static const ST_StyleType& default_instance();
protected:
private:
    static ST_StyleType* default_instance_;
};

class ST_ID: public ST_String
{
public:
    ST_ID();
    ST_ID(const ST_String& _ST_String);
    ~ST_ID();
    static const ST_ID& default_instance();
protected:
private:
    static ST_ID* default_instance_;
};

class ST_HWPML_STYLE: public ST_String
{
public:
    ST_HWPML_STYLE();
    ST_HWPML_STYLE(const ST_String& _ST_String);
    ~ST_HWPML_STYLE();
    static const ST_HWPML_STYLE& default_instance();
protected:
private:
    static ST_HWPML_STYLE* default_instance_;
};

class ST_BINITEM_TYPE: public ST_String
{
public:
    ST_BINITEM_TYPE();
    ST_BINITEM_TYPE(const ST_String& _ST_String);
    ~ST_BINITEM_TYPE();
    static const ST_BINITEM_TYPE& default_instance();
protected:
private:
    static ST_BINITEM_TYPE* default_instance_;
};

class ST_BINITEM_FORMAT: public ST_String
{
public:
    ST_BINITEM_FORMAT();
    ST_BINITEM_FORMAT(const ST_String& _ST_String);
    ~ST_BINITEM_FORMAT();
    static const ST_BINITEM_FORMAT& default_instance();
protected:
private:
    static ST_BINITEM_FORMAT* default_instance_;
};

class CT_String: public XSD::ComplexType
{
public:
    CT_String();
    ~CT_String();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_String& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_String& _val_attr);
    const ST_String& get_val_attr() const;
protected:
private:
    static CT_String* default_instance_;
    bool m_has_val_attr;
    ST_String* m_val_attr;
};

class CT_OnOff: public XSD::ComplexType
{
public:
    CT_OnOff();
    ~CT_OnOff();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_OnOff& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_OnOff& _val_attr);
    const ST_OnOff& get_val_attr() const;
protected:
private:
    static CT_OnOff* default_instance_;
    bool m_has_val_attr;
    ST_OnOff* m_val_attr;
};

class CT_DecimalNumber: public XSD::ComplexType
{
public:
    CT_DecimalNumber();
    ~CT_DecimalNumber();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DecimalNumber& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_DecimalNumber& _val_attr);
    const ST_DecimalNumber& get_val_attr() const;
protected:
private:
    static CT_DecimalNumber* default_instance_;
    bool m_has_val_attr;
    ST_DecimalNumber* m_val_attr;
};

class CT_HunitMeasure: public XSD::ComplexType
{
public:
    CT_HunitMeasure();
    ~CT_HunitMeasure();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HunitMeasure& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_HunitMeasure& _val_attr);
    const ST_HunitMeasure& get_val_attr() const;
protected:
private:
    static CT_HunitMeasure* default_instance_;
    bool m_has_val_attr;
    ST_HunitMeasure* m_val_attr;
};

class CT_Color: public XSD::ComplexType
{
public:
    CT_Color();
    ~CT_Color();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Color& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_IntColorRGB& _val_attr);
    const ST_IntColorRGB& get_val_attr() const;
protected:
private:
    static CT_Color* default_instance_;
    bool m_has_val_attr;
    ST_IntColorRGB* m_val_attr;
};

class CT_Image: public XSD::ComplexType
{
public:
    CT_Image();
    ~CT_Image();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Image& default_instance();
    bool has_Bright_attr() const;
    void set_Bright_attr(const ST_DecimalNumber& _Bright_attr);
    const ST_DecimalNumber& get_Bright_attr() const;
    bool has_Contrast_attr() const;
    void set_Contrast_attr(const ST_DecimalNumber& _Contrast_attr);
    const ST_DecimalNumber& get_Contrast_attr() const;
    bool has_Effect_attr() const;
    void set_Effect_attr(const ST_Effect& _Effect_attr);
    const ST_Effect& get_Effect_attr() const;
    bool has_BinItem_attr() const;
    void set_BinItem_attr(const ST_String& _BinItem_attr);
    const ST_String& get_BinItem_attr() const;
    bool has_Alpha_attr() const;
    void set_Alpha_attr(const ST_Percent& _Alpha_attr);
    const ST_Percent& get_Alpha_attr() const;
protected:
private:
    static CT_Image* default_instance_;
    bool m_has_Bright_attr;
    ST_DecimalNumber* m_Bright_attr;
    bool m_has_Contrast_attr;
    ST_DecimalNumber* m_Contrast_attr;
    bool m_has_Effect_attr;
    ST_Effect* m_Effect_attr;
    bool m_has_BinItem_attr;
    ST_String* m_BinItem_attr;
    bool m_has_Alpha_attr;
    ST_Percent* m_Alpha_attr;
};

class CT_SUBSTFONT: public XSD::ComplexType
{
public:
    CT_SUBSTFONT();
    ~CT_SUBSTFONT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SUBSTFONT& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_FontType& _Type_attr);
    const ST_FontType& get_Type_attr() const;
    bool has_Name_attr() const;
    void set_Name_attr(const ST_String& _Name_attr);
    const ST_String& get_Name_attr() const;
protected:
private:
    static CT_SUBSTFONT* default_instance_;
    bool m_has_Type_attr;
    ST_FontType* m_Type_attr;
    bool m_has_Name_attr;
    ST_String* m_Name_attr;
};

class CT_TYPEINFO: public XSD::ComplexType
{
public:
    CT_TYPEINFO();
    ~CT_TYPEINFO();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TYPEINFO& default_instance();
    bool has_FamilyType_attr() const;
    void set_FamilyType_attr(const ST_String& _FamilyType_attr);
    const ST_String& get_FamilyType_attr() const;
    bool has_SerifStyle_attr() const;
    void set_SerifStyle_attr(const ST_String& _SerifStyle_attr);
    const ST_String& get_SerifStyle_attr() const;
    bool has_Weight_attr() const;
    void set_Weight_attr(const ST_String& _Weight_attr);
    const ST_String& get_Weight_attr() const;
    bool has_Proportion_attr() const;
    void set_Proportion_attr(const ST_String& _Proportion_attr);
    const ST_String& get_Proportion_attr() const;
    bool has_Contrast_attr() const;
    void set_Contrast_attr(const ST_String& _Contrast_attr);
    const ST_String& get_Contrast_attr() const;
    bool has_StrokeVariation_attr() const;
    void set_StrokeVariation_attr(const ST_String& _StrokeVariation_attr);
    const ST_String& get_StrokeVariation_attr() const;
    bool has_ArmStyle_attr() const;
    void set_ArmStyle_attr(const ST_String& _ArmStyle_attr);
    const ST_String& get_ArmStyle_attr() const;
    bool has_Letterform_attr() const;
    void set_Letterform_attr(const ST_String& _Letterform_attr);
    const ST_String& get_Letterform_attr() const;
    bool has_Midline_attr() const;
    void set_Midline_attr(const ST_String& _Midline_attr);
    const ST_String& get_Midline_attr() const;
    bool has_XHeight_attr() const;
    void set_XHeight_attr(const ST_String& _XHeight_attr);
    const ST_String& get_XHeight_attr() const;
protected:
private:
    static CT_TYPEINFO* default_instance_;
    bool m_has_FamilyType_attr;
    ST_String* m_FamilyType_attr;
    bool m_has_SerifStyle_attr;
    ST_String* m_SerifStyle_attr;
    bool m_has_Weight_attr;
    ST_String* m_Weight_attr;
    bool m_has_Proportion_attr;
    ST_String* m_Proportion_attr;
    bool m_has_Contrast_attr;
    ST_String* m_Contrast_attr;
    bool m_has_StrokeVariation_attr;
    ST_String* m_StrokeVariation_attr;
    bool m_has_ArmStyle_attr;
    ST_String* m_ArmStyle_attr;
    bool m_has_Letterform_attr;
    ST_String* m_Letterform_attr;
    bool m_has_Midline_attr;
    ST_String* m_Midline_attr;
    bool m_has_XHeight_attr;
    ST_String* m_XHeight_attr;
};

class CT_FONT: public XSD::ComplexType
{
public:
    CT_FONT();
    ~CT_FONT();
    bool has_SUBSTFONT() const;
    CT_SUBSTFONT* mutable_SUBSTFONT();
    const CT_SUBSTFONT& get_SUBSTFONT() const;
    bool has_TYPEINFO() const;
    CT_TYPEINFO* mutable_TYPEINFO();
    const CT_TYPEINFO& get_TYPEINFO() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FONT& default_instance();
    bool has_Id_attr() const;
    void set_Id_attr(const ST_UnsignedDecimalNumber& _Id_attr);
    const ST_UnsignedDecimalNumber& get_Id_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_FontType& _Type_attr);
    const ST_FontType& get_Type_attr() const;
    bool has_Name_attr() const;
    void set_Name_attr(const ST_String& _Name_attr);
    const ST_String& get_Name_attr() const;
protected:
private:
    bool m_has_SUBSTFONT;
    CT_SUBSTFONT* m_SUBSTFONT;
    bool m_has_TYPEINFO;
    CT_TYPEINFO* m_TYPEINFO;
    static CT_FONT* default_instance_;
    bool m_has_Id_attr;
    ST_UnsignedDecimalNumber* m_Id_attr;
    bool m_has_Type_attr;
    ST_FontType* m_Type_attr;
    bool m_has_Name_attr;
    ST_String* m_Name_attr;
};

class CT_PARAHEAD: public XSD::ComplexType
{
public:
    CT_PARAHEAD();
    ~CT_PARAHEAD();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PARAHEAD& default_instance();
    bool has_Alignment_attr() const;
    void set_Alignment_attr(const ST_AlignmentType2& _Alignment_attr);
    const ST_AlignmentType2& get_Alignment_attr() const;
    bool has_AutoIndent_attr() const;
    void set_AutoIndent_attr(const ST_OnOff& _AutoIndent_attr);
    const ST_OnOff& get_AutoIndent_attr() const;
    bool has_Level_attr() const;
    void set_Level_attr(const ST_NumberLevelType1& _Level_attr);
    const ST_NumberLevelType1& get_Level_attr() const;
    bool has_NumFormat_attr() const;
    void set_NumFormat_attr(const ST_NumberType1& _NumFormat_attr);
    const ST_NumberType1& get_NumFormat_attr() const;
    bool has_TextOffset_attr() const;
    void set_TextOffset_attr(const ST_Step& _TextOffset_attr);
    const ST_Step& get_TextOffset_attr() const;
    bool has_TextOffsetType_attr() const;
    void set_TextOffsetType_attr(const ST_StepType& _TextOffsetType_attr);
    const ST_StepType& get_TextOffsetType_attr() const;
    bool has_UseInstWidth_attr() const;
    void set_UseInstWidth_attr(const ST_OnOff& _UseInstWidth_attr);
    const ST_OnOff& get_UseInstWidth_attr() const;
    bool has_WidthAdjust_attr() const;
    void set_WidthAdjust_attr(const ST_HunitMeasure& _WidthAdjust_attr);
    const ST_HunitMeasure& get_WidthAdjust_attr() const;
    bool has_CharShape_attr() const;
    void set_CharShape_attr(const ST_ID& _CharShape_attr);
    const ST_ID& get_CharShape_attr() const;
protected:
private:
    static CT_PARAHEAD* default_instance_;
    bool m_has_Alignment_attr;
    ST_AlignmentType2* m_Alignment_attr;
    bool m_has_AutoIndent_attr;
    ST_OnOff* m_AutoIndent_attr;
    bool m_has_Level_attr;
    ST_NumberLevelType1* m_Level_attr;
    bool m_has_NumFormat_attr;
    ST_NumberType1* m_NumFormat_attr;
    bool m_has_TextOffset_attr;
    ST_Step* m_TextOffset_attr;
    bool m_has_TextOffsetType_attr;
    ST_StepType* m_TextOffsetType_attr;
    bool m_has_UseInstWidth_attr;
    ST_OnOff* m_UseInstWidth_attr;
    bool m_has_WidthAdjust_attr;
    ST_HunitMeasure* m_WidthAdjust_attr;
    bool m_has_CharShape_attr;
    ST_ID* m_CharShape_attr;
};

class CT_AUTONUMFORMAT: public XSD::ComplexType
{
public:
    CT_AUTONUMFORMAT();
    ~CT_AUTONUMFORMAT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AUTONUMFORMAT& default_instance();
    bool has_SuffixChar_attr() const;
    void set_SuffixChar_attr(const ST_String& _SuffixChar_attr);
    const ST_String& get_SuffixChar_attr() const;
    bool has_Superscript_attr() const;
    void set_Superscript_attr(const ST_String& _Superscript_attr);
    const ST_String& get_Superscript_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_AUTONUMFORMAT* default_instance_;
    bool m_has_SuffixChar_attr;
    ST_String* m_SuffixChar_attr;
    bool m_has_Superscript_attr;
    ST_String* m_Superscript_attr;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_NOTELINE: public XSD::ComplexType
{
public:
    CT_NOTELINE();
    ~CT_NOTELINE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NOTELINE& default_instance();
    bool has_Color_attr() const;
    void set_Color_attr(const ST_String& _Color_attr);
    const ST_String& get_Color_attr() const;
    bool has_Length_attr() const;
    void set_Length_attr(const ST_String& _Length_attr);
    const ST_String& get_Length_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
    bool has_Width_attr() const;
    void set_Width_attr(const ST_String& _Width_attr);
    const ST_String& get_Width_attr() const;
protected:
private:
    static CT_NOTELINE* default_instance_;
    bool m_has_Color_attr;
    ST_String* m_Color_attr;
    bool m_has_Length_attr;
    ST_String* m_Length_attr;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
    bool m_has_Width_attr;
    ST_String* m_Width_attr;
};

class CT_NOTESPACING: public XSD::ComplexType
{
public:
    CT_NOTESPACING();
    ~CT_NOTESPACING();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NOTESPACING& default_instance();
    bool has_AboveLine_attr() const;
    void set_AboveLine_attr(const ST_String& _AboveLine_attr);
    const ST_String& get_AboveLine_attr() const;
    bool has_BelowLine_attr() const;
    void set_BelowLine_attr(const ST_String& _BelowLine_attr);
    const ST_String& get_BelowLine_attr() const;
    bool has_BetweenNotes_attr() const;
    void set_BetweenNotes_attr(const ST_String& _BetweenNotes_attr);
    const ST_String& get_BetweenNotes_attr() const;
protected:
private:
    static CT_NOTESPACING* default_instance_;
    bool m_has_AboveLine_attr;
    ST_String* m_AboveLine_attr;
    bool m_has_BelowLine_attr;
    ST_String* m_BelowLine_attr;
    bool m_has_BetweenNotes_attr;
    ST_String* m_BetweenNotes_attr;
};

class CT_NOTENUMBERING: public XSD::ComplexType
{
public:
    CT_NOTENUMBERING();
    ~CT_NOTENUMBERING();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NOTENUMBERING& default_instance();
    bool has_NewNumber_attr() const;
    void set_NewNumber_attr(const ST_String& _NewNumber_attr);
    const ST_String& get_NewNumber_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_NOTENUMBERING* default_instance_;
    bool m_has_NewNumber_attr;
    ST_String* m_NewNumber_attr;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_NOTEPLACEMENT: public XSD::ComplexType
{
public:
    CT_NOTEPLACEMENT();
    ~CT_NOTEPLACEMENT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NOTEPLACEMENT& default_instance();
    bool has_BeneathText_attr() const;
    void set_BeneathText_attr(const ST_String& _BeneathText_attr);
    const ST_String& get_BeneathText_attr() const;
    bool has_Place_attr() const;
    void set_Place_attr(const ST_String& _Place_attr);
    const ST_String& get_Place_attr() const;
protected:
private:
    static CT_NOTEPLACEMENT* default_instance_;
    bool m_has_BeneathText_attr;
    ST_String* m_BeneathText_attr;
    bool m_has_Place_attr;
    ST_String* m_Place_attr;
};

class CT_FONTTYPE: public XSD::ComplexType
{
public:
    CT_FONTTYPE();
    ~CT_FONTTYPE();
    CT_TYPEINFO* add_TYPEINFO();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FONTTYPE& default_instance();
    bool has_Id_attr() const;
    void set_Id_attr(const ST_String& _Id_attr);
    const ST_String& get_Id_attr() const;
    bool has_Name_attr() const;
    void set_Name_attr(const ST_String& _Name_attr);
    const ST_String& get_Name_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_TYPEINFO() const;
        CT_TYPEINFO* mutable_TYPEINFO();
        const CT_TYPEINFO& get_TYPEINFO() const;
    protected:
    private:
        bool m_has_TYPEINFO;
        CT_TYPEINFO* m_TYPEINFO;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_FONTTYPE* default_instance_;
    bool m_has_Id_attr;
    ST_String* m_Id_attr;
    bool m_has_Name_attr;
    ST_String* m_Name_attr;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_BORDER: public XSD::ComplexType
{
public:
    CT_BORDER();
    ~CT_BORDER();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BORDER& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_LINETYPE1& _Type_attr);
    const ST_LINETYPE1& get_Type_attr() const;
    bool has_Width_attr() const;
    void set_Width_attr(const ST_LineWidth1& _Width_attr);
    const ST_LineWidth1& get_Width_attr() const;
    bool has_Color_attr() const;
    void set_Color_attr(const ST_IntColorRGB& _Color_attr);
    const ST_IntColorRGB& get_Color_attr() const;
protected:
private:
    static CT_BORDER* default_instance_;
    bool m_has_Type_attr;
    ST_LINETYPE1* m_Type_attr;
    bool m_has_Width_attr;
    ST_LineWidth1* m_Width_attr;
    bool m_has_Color_attr;
    ST_IntColorRGB* m_Color_attr;
};

class CT_WINDOWBRUSH: public XSD::ComplexType
{
public:
    CT_WINDOWBRUSH();
    ~CT_WINDOWBRUSH();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_WINDOWBRUSH& default_instance();
    bool has_Alpha_attr() const;
    void set_Alpha_attr(const ST_Percent& _Alpha_attr);
    const ST_Percent& get_Alpha_attr() const;
    bool has_FaceColor_attr() const;
    void set_FaceColor_attr(const ST_IntColorRGB& _FaceColor_attr);
    const ST_IntColorRGB& get_FaceColor_attr() const;
    bool has_HatchColor_attr() const;
    void set_HatchColor_attr(const ST_IntColorRGB& _HatchColor_attr);
    const ST_IntColorRGB& get_HatchColor_attr() const;
    bool has_HatchStyle_attr() const;
    void set_HatchStyle_attr(const ST_HatchStyle& _HatchStyle_attr);
    const ST_HatchStyle& get_HatchStyle_attr() const;
protected:
private:
    static CT_WINDOWBRUSH* default_instance_;
    bool m_has_Alpha_attr;
    ST_Percent* m_Alpha_attr;
    bool m_has_FaceColor_attr;
    ST_IntColorRGB* m_FaceColor_attr;
    bool m_has_HatchColor_attr;
    ST_IntColorRGB* m_HatchColor_attr;
    bool m_has_HatchStyle_attr;
    ST_HatchStyle* m_HatchStyle_attr;
};

class CT_GRADATION: public XSD::ComplexType
{
public:
    CT_GRADATION();
    ~CT_GRADATION();
    CT_Color* add_COLOR();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_GRADATION& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_GradType& _Type_attr);
    const ST_GradType& get_Type_attr() const;
    bool has_Angle_attr() const;
    void set_Angle_attr(const ST_Angle& _Angle_attr);
    const ST_Angle& get_Angle_attr() const;
    bool has_CenterX_attr() const;
    void set_CenterX_attr(const ST_UnsignedDecimalNumber& _CenterX_attr);
    const ST_UnsignedDecimalNumber& get_CenterX_attr() const;
    bool has_CenterY_attr() const;
    void set_CenterY_attr(const ST_UnsignedDecimalNumber& _CenterY_attr);
    const ST_UnsignedDecimalNumber& get_CenterY_attr() const;
    bool has_Step_attr() const;
    void set_Step_attr(const ST_Step& _Step_attr);
    const ST_Step& get_Step_attr() const;
    bool has_ColorNum_attr() const;
    void set_ColorNum_attr(const ST_UnsignedDecimalNumber& _ColorNum_attr);
    const ST_UnsignedDecimalNumber& get_ColorNum_attr() const;
    bool has_StepCenter_attr() const;
    void set_StepCenter_attr(const ST_Step& _StepCenter_attr);
    const ST_Step& get_StepCenter_attr() const;
    bool has_Alpha_attr() const;
    void set_Alpha_attr(const ST_Percent& _Alpha_attr);
    const ST_Percent& get_Alpha_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_COLOR() const;
        CT_Color* mutable_COLOR();
        const CT_Color& get_COLOR() const;
    protected:
    private:
        bool m_has_COLOR;
        CT_Color* m_COLOR;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_GRADATION* default_instance_;
    bool m_has_Type_attr;
    ST_GradType* m_Type_attr;
    bool m_has_Angle_attr;
    ST_Angle* m_Angle_attr;
    bool m_has_CenterX_attr;
    ST_UnsignedDecimalNumber* m_CenterX_attr;
    bool m_has_CenterY_attr;
    ST_UnsignedDecimalNumber* m_CenterY_attr;
    bool m_has_Step_attr;
    ST_Step* m_Step_attr;
    bool m_has_ColorNum_attr;
    ST_UnsignedDecimalNumber* m_ColorNum_attr;
    bool m_has_StepCenter_attr;
    ST_Step* m_StepCenter_attr;
    bool m_has_Alpha_attr;
    ST_Percent* m_Alpha_attr;
};

class CT_IMAGEBRUSH: public XSD::ComplexType
{
public:
    CT_IMAGEBRUSH();
    ~CT_IMAGEBRUSH();
    bool has_IMAGE() const;
    CT_Image* mutable_IMAGE();
    const CT_Image& get_IMAGE() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_IMAGEBRUSH& default_instance();
    bool has_Mode_attr() const;
    void set_Mode_attr(const ST_InFillMode& _Mode_attr);
    const ST_InFillMode& get_Mode_attr() const;
protected:
private:
    bool m_has_IMAGE;
    CT_Image* m_IMAGE;
    static CT_IMAGEBRUSH* default_instance_;
    bool m_has_Mode_attr;
    ST_InFillMode* m_Mode_attr;
};

class CT_FILLBRUSH: public XSD::ComplexType
{
public:
    CT_FILLBRUSH();
    ~CT_FILLBRUSH();
    bool has_WINDOWBRUSH() const;
    CT_WINDOWBRUSH* mutable_WINDOWBRUSH();
    const CT_WINDOWBRUSH& get_WINDOWBRUSH() const;
    bool has_GRADATION() const;
    CT_GRADATION* mutable_GRADATION();
    const CT_GRADATION& get_GRADATION() const;
    bool has_IMAGEBRUSH() const;
    CT_IMAGEBRUSH* mutable_IMAGEBRUSH();
    const CT_IMAGEBRUSH& get_IMAGEBRUSH() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FILLBRUSH& default_instance();
protected:
private:
    bool m_has_WINDOWBRUSH;
    CT_WINDOWBRUSH* m_WINDOWBRUSH;
    bool m_has_GRADATION;
    CT_GRADATION* m_GRADATION;
    bool m_has_IMAGEBRUSH;
    CT_IMAGEBRUSH* m_IMAGEBRUSH;
    static CT_FILLBRUSH* default_instance_;
};

class CT_BORDERFILL: public XSD::ComplexType
{
public:
    CT_BORDERFILL();
    ~CT_BORDERFILL();
    bool has_LEFTBORDER() const;
    CT_BORDER* mutable_LEFTBORDER();
    const CT_BORDER& get_LEFTBORDER() const;
    bool has_RIGHTBORDER() const;
    CT_BORDER* mutable_RIGHTBORDER();
    const CT_BORDER& get_RIGHTBORDER() const;
    bool has_TOPBORDER() const;
    CT_BORDER* mutable_TOPBORDER();
    const CT_BORDER& get_TOPBORDER() const;
    bool has_BOTTOMBORDER() const;
    CT_BORDER* mutable_BOTTOMBORDER();
    const CT_BORDER& get_BOTTOMBORDER() const;
    bool has_DIAGONAL() const;
    CT_BORDER* mutable_DIAGONAL();
    const CT_BORDER& get_DIAGONAL() const;
    bool has_FILLBRUSH() const;
    CT_FILLBRUSH* mutable_FILLBRUSH();
    const CT_FILLBRUSH& get_FILLBRUSH() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BORDERFILL& default_instance();
    bool has_BackSlash_attr() const;
    void set_BackSlash_attr(const ST_String& _BackSlash_attr);
    const ST_String& get_BackSlash_attr() const;
    bool has_BreakCellSeparateLine_attr() const;
    void set_BreakCellSeparateLine_attr(const ST_String& _BreakCellSeparateLine_attr);
    const ST_String& get_BreakCellSeparateLine_attr() const;
    bool has_CenterLine_attr() const;
    void set_CenterLine_attr(const ST_String& _CenterLine_attr);
    const ST_String& get_CenterLine_attr() const;
    bool has_CounterBackSlash_attr() const;
    void set_CounterBackSlash_attr(const ST_String& _CounterBackSlash_attr);
    const ST_String& get_CounterBackSlash_attr() const;
    bool has_CounterSlash_attr() const;
    void set_CounterSlash_attr(const ST_String& _CounterSlash_attr);
    const ST_String& get_CounterSlash_attr() const;
    bool has_CrookedSlash_attr() const;
    void set_CrookedSlash_attr(const ST_String& _CrookedSlash_attr);
    const ST_String& get_CrookedSlash_attr() const;
    bool has_Id_attr() const;
    void set_Id_attr(const ST_String& _Id_attr);
    const ST_String& get_Id_attr() const;
    bool has_Shadow_attr() const;
    void set_Shadow_attr(const ST_String& _Shadow_attr);
    const ST_String& get_Shadow_attr() const;
    bool has_Slash_attr() const;
    void set_Slash_attr(const ST_String& _Slash_attr);
    const ST_String& get_Slash_attr() const;
    bool has_ThreeD_attr() const;
    void set_ThreeD_attr(const ST_String& _ThreeD_attr);
    const ST_String& get_ThreeD_attr() const;
protected:
private:
    bool m_has_LEFTBORDER;
    CT_BORDER* m_LEFTBORDER;
    bool m_has_RIGHTBORDER;
    CT_BORDER* m_RIGHTBORDER;
    bool m_has_TOPBORDER;
    CT_BORDER* m_TOPBORDER;
    bool m_has_BOTTOMBORDER;
    CT_BORDER* m_BOTTOMBORDER;
    bool m_has_DIAGONAL;
    CT_BORDER* m_DIAGONAL;
    bool m_has_FILLBRUSH;
    CT_FILLBRUSH* m_FILLBRUSH;
    static CT_BORDERFILL* default_instance_;
    bool m_has_BackSlash_attr;
    ST_String* m_BackSlash_attr;
    bool m_has_BreakCellSeparateLine_attr;
    ST_String* m_BreakCellSeparateLine_attr;
    bool m_has_CenterLine_attr;
    ST_String* m_CenterLine_attr;
    bool m_has_CounterBackSlash_attr;
    ST_String* m_CounterBackSlash_attr;
    bool m_has_CounterSlash_attr;
    ST_String* m_CounterSlash_attr;
    bool m_has_CrookedSlash_attr;
    ST_String* m_CrookedSlash_attr;
    bool m_has_Id_attr;
    ST_String* m_Id_attr;
    bool m_has_Shadow_attr;
    ST_String* m_Shadow_attr;
    bool m_has_Slash_attr;
    ST_String* m_Slash_attr;
    bool m_has_ThreeD_attr;
    ST_String* m_ThreeD_attr;
};

class CT_FONTID: public XSD::ComplexType
{
public:
    CT_FONTID();
    ~CT_FONTID();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FONTID& default_instance();
    bool has_Hangul_attr() const;
    void set_Hangul_attr(const ST_ID& _Hangul_attr);
    const ST_ID& get_Hangul_attr() const;
    bool has_Hanja_attr() const;
    void set_Hanja_attr(const ST_ID& _Hanja_attr);
    const ST_ID& get_Hanja_attr() const;
    bool has_Japanese_attr() const;
    void set_Japanese_attr(const ST_ID& _Japanese_attr);
    const ST_ID& get_Japanese_attr() const;
    bool has_Latin_attr() const;
    void set_Latin_attr(const ST_ID& _Latin_attr);
    const ST_ID& get_Latin_attr() const;
    bool has_Other_attr() const;
    void set_Other_attr(const ST_ID& _Other_attr);
    const ST_ID& get_Other_attr() const;
    bool has_Symbol_attr() const;
    void set_Symbol_attr(const ST_ID& _Symbol_attr);
    const ST_ID& get_Symbol_attr() const;
    bool has_User_attr() const;
    void set_User_attr(const ST_ID& _User_attr);
    const ST_ID& get_User_attr() const;
protected:
private:
    static CT_FONTID* default_instance_;
    bool m_has_Hangul_attr;
    ST_ID* m_Hangul_attr;
    bool m_has_Hanja_attr;
    ST_ID* m_Hanja_attr;
    bool m_has_Japanese_attr;
    ST_ID* m_Japanese_attr;
    bool m_has_Latin_attr;
    ST_ID* m_Latin_attr;
    bool m_has_Other_attr;
    ST_ID* m_Other_attr;
    bool m_has_Symbol_attr;
    ST_ID* m_Symbol_attr;
    bool m_has_User_attr;
    ST_ID* m_User_attr;
};

class CT_RATIO: public XSD::ComplexType
{
public:
    CT_RATIO();
    ~CT_RATIO();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RATIO& default_instance();
    bool has_Hangul_attr() const;
    void set_Hangul_attr(const ST_RATIO& _Hangul_attr);
    const ST_RATIO& get_Hangul_attr() const;
    bool has_Hanja_attr() const;
    void set_Hanja_attr(const ST_RATIO& _Hanja_attr);
    const ST_RATIO& get_Hanja_attr() const;
    bool has_Japanese_attr() const;
    void set_Japanese_attr(const ST_RATIO& _Japanese_attr);
    const ST_RATIO& get_Japanese_attr() const;
    bool has_Latin_attr() const;
    void set_Latin_attr(const ST_RATIO& _Latin_attr);
    const ST_RATIO& get_Latin_attr() const;
    bool has_Other_attr() const;
    void set_Other_attr(const ST_RATIO& _Other_attr);
    const ST_RATIO& get_Other_attr() const;
    bool has_Symbol_attr() const;
    void set_Symbol_attr(const ST_RATIO& _Symbol_attr);
    const ST_RATIO& get_Symbol_attr() const;
    bool has_User_attr() const;
    void set_User_attr(const ST_RATIO& _User_attr);
    const ST_RATIO& get_User_attr() const;
protected:
private:
    static CT_RATIO* default_instance_;
    bool m_has_Hangul_attr;
    ST_RATIO* m_Hangul_attr;
    bool m_has_Hanja_attr;
    ST_RATIO* m_Hanja_attr;
    bool m_has_Japanese_attr;
    ST_RATIO* m_Japanese_attr;
    bool m_has_Latin_attr;
    ST_RATIO* m_Latin_attr;
    bool m_has_Other_attr;
    ST_RATIO* m_Other_attr;
    bool m_has_Symbol_attr;
    ST_RATIO* m_Symbol_attr;
    bool m_has_User_attr;
    ST_RATIO* m_User_attr;
};

class CT_CHARSPACING: public XSD::ComplexType
{
public:
    CT_CHARSPACING();
    ~CT_CHARSPACING();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CHARSPACING& default_instance();
    bool has_Hangul_attr() const;
    void set_Hangul_attr(const ST_CHARSPACING& _Hangul_attr);
    const ST_CHARSPACING& get_Hangul_attr() const;
    bool has_Hanja_attr() const;
    void set_Hanja_attr(const ST_CHARSPACING& _Hanja_attr);
    const ST_CHARSPACING& get_Hanja_attr() const;
    bool has_Japanese_attr() const;
    void set_Japanese_attr(const ST_CHARSPACING& _Japanese_attr);
    const ST_CHARSPACING& get_Japanese_attr() const;
    bool has_Latin_attr() const;
    void set_Latin_attr(const ST_CHARSPACING& _Latin_attr);
    const ST_CHARSPACING& get_Latin_attr() const;
    bool has_Other_attr() const;
    void set_Other_attr(const ST_CHARSPACING& _Other_attr);
    const ST_CHARSPACING& get_Other_attr() const;
    bool has_Symbol_attr() const;
    void set_Symbol_attr(const ST_CHARSPACING& _Symbol_attr);
    const ST_CHARSPACING& get_Symbol_attr() const;
    bool has_User_attr() const;
    void set_User_attr(const ST_CHARSPACING& _User_attr);
    const ST_CHARSPACING& get_User_attr() const;
protected:
private:
    static CT_CHARSPACING* default_instance_;
    bool m_has_Hangul_attr;
    ST_CHARSPACING* m_Hangul_attr;
    bool m_has_Hanja_attr;
    ST_CHARSPACING* m_Hanja_attr;
    bool m_has_Japanese_attr;
    ST_CHARSPACING* m_Japanese_attr;
    bool m_has_Latin_attr;
    ST_CHARSPACING* m_Latin_attr;
    bool m_has_Other_attr;
    ST_CHARSPACING* m_Other_attr;
    bool m_has_Symbol_attr;
    ST_CHARSPACING* m_Symbol_attr;
    bool m_has_User_attr;
    ST_CHARSPACING* m_User_attr;
};

class CT_RELSIZE: public XSD::ComplexType
{
public:
    CT_RELSIZE();
    ~CT_RELSIZE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RELSIZE& default_instance();
    bool has_Hangul_attr() const;
    void set_Hangul_attr(const ST_RELSIZE& _Hangul_attr);
    const ST_RELSIZE& get_Hangul_attr() const;
    bool has_Hanja_attr() const;
    void set_Hanja_attr(const ST_RELSIZE& _Hanja_attr);
    const ST_RELSIZE& get_Hanja_attr() const;
    bool has_Japanese_attr() const;
    void set_Japanese_attr(const ST_RELSIZE& _Japanese_attr);
    const ST_RELSIZE& get_Japanese_attr() const;
    bool has_Latin_attr() const;
    void set_Latin_attr(const ST_RELSIZE& _Latin_attr);
    const ST_RELSIZE& get_Latin_attr() const;
    bool has_Other_attr() const;
    void set_Other_attr(const ST_RELSIZE& _Other_attr);
    const ST_RELSIZE& get_Other_attr() const;
    bool has_Symbol_attr() const;
    void set_Symbol_attr(const ST_RELSIZE& _Symbol_attr);
    const ST_RELSIZE& get_Symbol_attr() const;
    bool has_User_attr() const;
    void set_User_attr(const ST_RELSIZE& _User_attr);
    const ST_RELSIZE& get_User_attr() const;
protected:
private:
    static CT_RELSIZE* default_instance_;
    bool m_has_Hangul_attr;
    ST_RELSIZE* m_Hangul_attr;
    bool m_has_Hanja_attr;
    ST_RELSIZE* m_Hanja_attr;
    bool m_has_Japanese_attr;
    ST_RELSIZE* m_Japanese_attr;
    bool m_has_Latin_attr;
    ST_RELSIZE* m_Latin_attr;
    bool m_has_Other_attr;
    ST_RELSIZE* m_Other_attr;
    bool m_has_Symbol_attr;
    ST_RELSIZE* m_Symbol_attr;
    bool m_has_User_attr;
    ST_RELSIZE* m_User_attr;
};

class CT_CHAROFFSET: public XSD::ComplexType
{
public:
    CT_CHAROFFSET();
    ~CT_CHAROFFSET();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CHAROFFSET& default_instance();
    bool has_Hangul_attr() const;
    void set_Hangul_attr(const ST_OFFSET& _Hangul_attr);
    const ST_OFFSET& get_Hangul_attr() const;
    bool has_Hanja_attr() const;
    void set_Hanja_attr(const ST_OFFSET& _Hanja_attr);
    const ST_OFFSET& get_Hanja_attr() const;
    bool has_Japanese_attr() const;
    void set_Japanese_attr(const ST_OFFSET& _Japanese_attr);
    const ST_OFFSET& get_Japanese_attr() const;
    bool has_Latin_attr() const;
    void set_Latin_attr(const ST_OFFSET& _Latin_attr);
    const ST_OFFSET& get_Latin_attr() const;
    bool has_Other_attr() const;
    void set_Other_attr(const ST_OFFSET& _Other_attr);
    const ST_OFFSET& get_Other_attr() const;
    bool has_Symbol_attr() const;
    void set_Symbol_attr(const ST_OFFSET& _Symbol_attr);
    const ST_OFFSET& get_Symbol_attr() const;
    bool has_User_attr() const;
    void set_User_attr(const ST_OFFSET& _User_attr);
    const ST_OFFSET& get_User_attr() const;
protected:
private:
    static CT_CHAROFFSET* default_instance_;
    bool m_has_Hangul_attr;
    ST_OFFSET* m_Hangul_attr;
    bool m_has_Hanja_attr;
    ST_OFFSET* m_Hanja_attr;
    bool m_has_Japanese_attr;
    ST_OFFSET* m_Japanese_attr;
    bool m_has_Latin_attr;
    ST_OFFSET* m_Latin_attr;
    bool m_has_Other_attr;
    ST_OFFSET* m_Other_attr;
    bool m_has_Symbol_attr;
    ST_OFFSET* m_Symbol_attr;
    bool m_has_User_attr;
    ST_OFFSET* m_User_attr;
};

class CT_UNDERLINE: public XSD::ComplexType
{
public:
    CT_UNDERLINE();
    ~CT_UNDERLINE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_UNDERLINE& default_instance();
    bool has_Color_attr() const;
    void set_Color_attr(const ST_IntColorRGB& _Color_attr);
    const ST_IntColorRGB& get_Color_attr() const;
    bool has_Shape_attr() const;
    void set_Shape_attr(const ST_LineType2& _Shape_attr);
    const ST_LineType2& get_Shape_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_VertAlignType1& _Type_attr);
    const ST_VertAlignType1& get_Type_attr() const;
protected:
private:
    static CT_UNDERLINE* default_instance_;
    bool m_has_Color_attr;
    ST_IntColorRGB* m_Color_attr;
    bool m_has_Shape_attr;
    ST_LineType2* m_Shape_attr;
    bool m_has_Type_attr;
    ST_VertAlignType1* m_Type_attr;
};

class CT_STRIKEOUT: public XSD::ComplexType
{
public:
    CT_STRIKEOUT();
    ~CT_STRIKEOUT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_STRIKEOUT& default_instance();
    bool has_Color_attr() const;
    void set_Color_attr(const ST_IntColorRGB& _Color_attr);
    const ST_IntColorRGB& get_Color_attr() const;
    bool has_Shape_attr() const;
    void set_Shape_attr(const ST_LineType2& _Shape_attr);
    const ST_LineType2& get_Shape_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_StrikeType& _Type_attr);
    const ST_StrikeType& get_Type_attr() const;
protected:
private:
    static CT_STRIKEOUT* default_instance_;
    bool m_has_Color_attr;
    ST_IntColorRGB* m_Color_attr;
    bool m_has_Shape_attr;
    ST_LineType2* m_Shape_attr;
    bool m_has_Type_attr;
    ST_StrikeType* m_Type_attr;
};

class CT_OUTLINE: public XSD::ComplexType
{
public:
    CT_OUTLINE();
    ~CT_OUTLINE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_OUTLINE& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_LineType3& _Type_attr);
    const ST_LineType3& get_Type_attr() const;
protected:
private:
    static CT_OUTLINE* default_instance_;
    bool m_has_Type_attr;
    ST_LineType3* m_Type_attr;
};

class CT_SHADOW: public XSD::ComplexType
{
public:
    CT_SHADOW();
    ~CT_SHADOW();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SHADOW& default_instance();
    bool has_Alpha_attr() const;
    void set_Alpha_attr(const ST_Percent& _Alpha_attr);
    const ST_Percent& get_Alpha_attr() const;
    bool has_Color_attr() const;
    void set_Color_attr(const ST_IntColorRGB& _Color_attr);
    const ST_IntColorRGB& get_Color_attr() const;
    bool has_OffsetX_attr() const;
    void set_OffsetX_attr(const ST_OFFSET& _OffsetX_attr);
    const ST_OFFSET& get_OffsetX_attr() const;
    bool has_OffsetY_attr() const;
    void set_OffsetY_attr(const ST_OFFSET& _OffsetY_attr);
    const ST_OFFSET& get_OffsetY_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_ShadowType& _Type_attr);
    const ST_ShadowType& get_Type_attr() const;
protected:
private:
    static CT_SHADOW* default_instance_;
    bool m_has_Alpha_attr;
    ST_Percent* m_Alpha_attr;
    bool m_has_Color_attr;
    ST_IntColorRGB* m_Color_attr;
    bool m_has_OffsetX_attr;
    ST_OFFSET* m_OffsetX_attr;
    bool m_has_OffsetY_attr;
    ST_OFFSET* m_OffsetY_attr;
    bool m_has_Type_attr;
    ST_ShadowType* m_Type_attr;
};

class CT_CHARSHAPE: public XSD::ComplexType
{
public:
    CT_CHARSHAPE();
    ~CT_CHARSHAPE();
    bool has_BOLD() const;
    ST_String* mutable_BOLD();
    const ST_String& get_BOLD() const;
    bool has_ITALIC() const;
    ST_String* mutable_ITALIC();
    const ST_String& get_ITALIC() const;
    bool has_EMBOSS() const;
    ST_String* mutable_EMBOSS();
    const ST_String& get_EMBOSS() const;
    bool has_ENGRAVE() const;
    ST_String* mutable_ENGRAVE();
    const ST_String& get_ENGRAVE() const;
    bool has_SUPERSCRIPT() const;
    ST_String* mutable_SUPERSCRIPT();
    const ST_String& get_SUPERSCRIPT() const;
    bool has_SUBSCRIPT() const;
    ST_String* mutable_SUBSCRIPT();
    const ST_String& get_SUBSCRIPT() const;
    bool has_FONTID() const;
    CT_FONTID* mutable_FONTID();
    const CT_FONTID& get_FONTID() const;
    bool has_RATIO() const;
    CT_RATIO* mutable_RATIO();
    const CT_RATIO& get_RATIO() const;
    bool has_CHARSPACING() const;
    CT_CHARSPACING* mutable_CHARSPACING();
    const CT_CHARSPACING& get_CHARSPACING() const;
    bool has_RELSIZE() const;
    CT_RELSIZE* mutable_RELSIZE();
    const CT_RELSIZE& get_RELSIZE() const;
    bool has_CHAROFFSET() const;
    CT_CHAROFFSET* mutable_CHAROFFSET();
    const CT_CHAROFFSET& get_CHAROFFSET() const;
    bool has_UNDERLINE() const;
    CT_UNDERLINE* mutable_UNDERLINE();
    const CT_UNDERLINE& get_UNDERLINE() const;
    bool has_STRIKEOUT() const;
    CT_STRIKEOUT* mutable_STRIKEOUT();
    const CT_STRIKEOUT& get_STRIKEOUT() const;
    bool has_OUTLINE() const;
    CT_OUTLINE* mutable_OUTLINE();
    const CT_OUTLINE& get_OUTLINE() const;
    bool has_SHADOW() const;
    CT_SHADOW* mutable_SHADOW();
    const CT_SHADOW& get_SHADOW() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CHARSHAPE& default_instance();
    bool has_BorderFillId_attr() const;
    void set_BorderFillId_attr(const ST_ID& _BorderFillId_attr);
    const ST_ID& get_BorderFillId_attr() const;
    bool has_Height_attr() const;
    void set_Height_attr(const ST_HunitMeasure& _Height_attr);
    const ST_HunitMeasure& get_Height_attr() const;
    bool has_Id_attr() const;
    void set_Id_attr(const ST_UnsignedDecimalNumber& _Id_attr);
    const ST_UnsignedDecimalNumber& get_Id_attr() const;
    bool has_ShadeColor_attr() const;
    void set_ShadeColor_attr(const ST_IntColorRGB& _ShadeColor_attr);
    const ST_IntColorRGB& get_ShadeColor_attr() const;
    bool has_SymMark_attr() const;
    void set_SymMark_attr(const ST_String& _SymMark_attr);
    const ST_String& get_SymMark_attr() const;
    bool has_TextColor_attr() const;
    void set_TextColor_attr(const ST_IntColorRGB& _TextColor_attr);
    const ST_IntColorRGB& get_TextColor_attr() const;
    bool has_UseFontSpace_attr() const;
    void set_UseFontSpace_attr(const ST_OnOff& _UseFontSpace_attr);
    const ST_OnOff& get_UseFontSpace_attr() const;
    bool has_UseKerning_attr() const;
    void set_UseKerning_attr(const ST_OnOff& _UseKerning_attr);
    const ST_OnOff& get_UseKerning_attr() const;
protected:
private:
    bool m_has_BOLD;
    ST_String* m_BOLD;
    bool m_has_ITALIC;
    ST_String* m_ITALIC;
    bool m_has_EMBOSS;
    ST_String* m_EMBOSS;
    bool m_has_ENGRAVE;
    ST_String* m_ENGRAVE;
    bool m_has_SUPERSCRIPT;
    ST_String* m_SUPERSCRIPT;
    bool m_has_SUBSCRIPT;
    ST_String* m_SUBSCRIPT;
    bool m_has_FONTID;
    CT_FONTID* m_FONTID;
    bool m_has_RATIO;
    CT_RATIO* m_RATIO;
    bool m_has_CHARSPACING;
    CT_CHARSPACING* m_CHARSPACING;
    bool m_has_RELSIZE;
    CT_RELSIZE* m_RELSIZE;
    bool m_has_CHAROFFSET;
    CT_CHAROFFSET* m_CHAROFFSET;
    bool m_has_UNDERLINE;
    CT_UNDERLINE* m_UNDERLINE;
    bool m_has_STRIKEOUT;
    CT_STRIKEOUT* m_STRIKEOUT;
    bool m_has_OUTLINE;
    CT_OUTLINE* m_OUTLINE;
    bool m_has_SHADOW;
    CT_SHADOW* m_SHADOW;
    static CT_CHARSHAPE* default_instance_;
    bool m_has_BorderFillId_attr;
    ST_ID* m_BorderFillId_attr;
    bool m_has_Height_attr;
    ST_HunitMeasure* m_Height_attr;
    bool m_has_Id_attr;
    ST_UnsignedDecimalNumber* m_Id_attr;
    bool m_has_ShadeColor_attr;
    ST_IntColorRGB* m_ShadeColor_attr;
    bool m_has_SymMark_attr;
    ST_String* m_SymMark_attr;
    bool m_has_TextColor_attr;
    ST_IntColorRGB* m_TextColor_attr;
    bool m_has_UseFontSpace_attr;
    ST_OnOff* m_UseFontSpace_attr;
    bool m_has_UseKerning_attr;
    ST_OnOff* m_UseKerning_attr;
};

class CT_TABITEM: public XSD::ComplexType
{
public:
    CT_TABITEM();
    ~CT_TABITEM();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TABITEM& default_instance();
    bool has_Leader_attr() const;
    void set_Leader_attr(const ST_LineType2& _Leader_attr);
    const ST_LineType2& get_Leader_attr() const;
    bool has_Pos_attr() const;
    void set_Pos_attr(const ST_HunitMeasure& _Pos_attr);
    const ST_HunitMeasure& get_Pos_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_TabType& _Type_attr);
    const ST_TabType& get_Type_attr() const;
protected:
private:
    static CT_TABITEM* default_instance_;
    bool m_has_Leader_attr;
    ST_LineType2* m_Leader_attr;
    bool m_has_Pos_attr;
    ST_HunitMeasure* m_Pos_attr;
    bool m_has_Type_attr;
    ST_TabType* m_Type_attr;
};

class CT_TABDEF: public XSD::ComplexType
{
public:
    CT_TABDEF();
    ~CT_TABDEF();
    CT_TABITEM* add_TABITEM();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TABDEF& default_instance();
    bool has_AutoTabLeft_attr() const;
    void set_AutoTabLeft_attr(const ST_OnOff& _AutoTabLeft_attr);
    const ST_OnOff& get_AutoTabLeft_attr() const;
    bool has_AutoTabRight_attr() const;
    void set_AutoTabRight_attr(const ST_OnOff& _AutoTabRight_attr);
    const ST_OnOff& get_AutoTabRight_attr() const;
    bool has_Id_attr() const;
    void set_Id_attr(const ST_ID& _Id_attr);
    const ST_ID& get_Id_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_TABITEM() const;
        CT_TABITEM* mutable_TABITEM();
        const CT_TABITEM& get_TABITEM() const;
    protected:
    private:
        bool m_has_TABITEM;
        CT_TABITEM* m_TABITEM;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_TABDEF* default_instance_;
    bool m_has_AutoTabLeft_attr;
    ST_OnOff* m_AutoTabLeft_attr;
    bool m_has_AutoTabRight_attr;
    ST_OnOff* m_AutoTabRight_attr;
    bool m_has_Id_attr;
    ST_ID* m_Id_attr;
};

class CT_NUMBERING: public XSD::ComplexType
{
public:
    CT_NUMBERING();
    ~CT_NUMBERING();
    CT_PARAHEAD* add_PARAHEAD();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NUMBERING& default_instance();
    bool has_Id_attr() const;
    void set_Id_attr(const ST_ID& _Id_attr);
    const ST_ID& get_Id_attr() const;
    bool has_Start_attr() const;
    void set_Start_attr(const ST_UnsignedDecimalNumber& _Start_attr);
    const ST_UnsignedDecimalNumber& get_Start_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_PARAHEAD() const;
        CT_PARAHEAD* mutable_PARAHEAD();
        const CT_PARAHEAD& get_PARAHEAD() const;
    protected:
    private:
        bool m_has_PARAHEAD;
        CT_PARAHEAD* m_PARAHEAD;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_NUMBERING* default_instance_;
    bool m_has_Id_attr;
    ST_ID* m_Id_attr;
    bool m_has_Start_attr;
    ST_UnsignedDecimalNumber* m_Start_attr;
};

class CT_BULLET: public XSD::ComplexType
{
public:
    CT_BULLET();
    ~CT_BULLET();
    CT_PARAHEAD* add_PARAHEAD();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BULLET& default_instance();
    bool has_Char_attr() const;
    void set_Char_attr(const ST_String& _Char_attr);
    const ST_String& get_Char_attr() const;
    bool has_Id_attr() const;
    void set_Id_attr(const ST_ID& _Id_attr);
    const ST_ID& get_Id_attr() const;
    bool has_Image_attr() const;
    void set_Image_attr(const ST_OnOff& _Image_attr);
    const ST_OnOff& get_Image_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_PARAHEAD() const;
        CT_PARAHEAD* mutable_PARAHEAD();
        const CT_PARAHEAD& get_PARAHEAD() const;
    protected:
    private:
        bool m_has_PARAHEAD;
        CT_PARAHEAD* m_PARAHEAD;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_BULLET* default_instance_;
    bool m_has_Char_attr;
    ST_String* m_Char_attr;
    bool m_has_Id_attr;
    ST_ID* m_Id_attr;
    bool m_has_Image_attr;
    ST_OnOff* m_Image_attr;
};

class CT_PARAMARGIN: public XSD::ComplexType
{
public:
    CT_PARAMARGIN();
    ~CT_PARAMARGIN();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PARAMARGIN& default_instance();
    bool has_Indent_attr() const;
    void set_Indent_attr(const ST_DecimalNumber& _Indent_attr);
    const ST_DecimalNumber& get_Indent_attr() const;
    bool has_Left_attr() const;
    void set_Left_attr(const ST_DecimalNumber& _Left_attr);
    const ST_DecimalNumber& get_Left_attr() const;
    bool has_LineSpacing_attr() const;
    void set_LineSpacing_attr(const ST_DecimalNumber& _LineSpacing_attr);
    const ST_DecimalNumber& get_LineSpacing_attr() const;
    bool has_LineSpacingType_attr() const;
    void set_LineSpacingType_attr(const ST_LineSpacing& _LineSpacingType_attr);
    const ST_LineSpacing& get_LineSpacingType_attr() const;
    bool has_Next_attr() const;
    void set_Next_attr(const ST_DecimalNumber& _Next_attr);
    const ST_DecimalNumber& get_Next_attr() const;
    bool has_Prev_attr() const;
    void set_Prev_attr(const ST_DecimalNumber& _Prev_attr);
    const ST_DecimalNumber& get_Prev_attr() const;
    bool has_Right_attr() const;
    void set_Right_attr(const ST_DecimalNumber& _Right_attr);
    const ST_DecimalNumber& get_Right_attr() const;
protected:
private:
    static CT_PARAMARGIN* default_instance_;
    bool m_has_Indent_attr;
    ST_DecimalNumber* m_Indent_attr;
    bool m_has_Left_attr;
    ST_DecimalNumber* m_Left_attr;
    bool m_has_LineSpacing_attr;
    ST_DecimalNumber* m_LineSpacing_attr;
    bool m_has_LineSpacingType_attr;
    ST_LineSpacing* m_LineSpacingType_attr;
    bool m_has_Next_attr;
    ST_DecimalNumber* m_Next_attr;
    bool m_has_Prev_attr;
    ST_DecimalNumber* m_Prev_attr;
    bool m_has_Right_attr;
    ST_DecimalNumber* m_Right_attr;
};

class CT_PARABORDER: public XSD::ComplexType
{
public:
    CT_PARABORDER();
    ~CT_PARABORDER();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PARABORDER& default_instance();
    bool has_BorderFill_attr() const;
    void set_BorderFill_attr(const ST_ID& _BorderFill_attr);
    const ST_ID& get_BorderFill_attr() const;
    bool has_Connect_attr() const;
    void set_Connect_attr(const ST_OnOff& _Connect_attr);
    const ST_OnOff& get_Connect_attr() const;
    bool has_IgnoreMargin_attr() const;
    void set_IgnoreMargin_attr(const ST_OnOff& _IgnoreMargin_attr);
    const ST_OnOff& get_IgnoreMargin_attr() const;
    bool has_OffsetBottom_attr() const;
    void set_OffsetBottom_attr(const ST_HunitMeasure& _OffsetBottom_attr);
    const ST_HunitMeasure& get_OffsetBottom_attr() const;
    bool has_OffsetLeft_attr() const;
    void set_OffsetLeft_attr(const ST_HunitMeasure& _OffsetLeft_attr);
    const ST_HunitMeasure& get_OffsetLeft_attr() const;
    bool has_OffsetRight_attr() const;
    void set_OffsetRight_attr(const ST_HunitMeasure& _OffsetRight_attr);
    const ST_HunitMeasure& get_OffsetRight_attr() const;
    bool has_OffsetTop_attr() const;
    void set_OffsetTop_attr(const ST_HunitMeasure& _OffsetTop_attr);
    const ST_HunitMeasure& get_OffsetTop_attr() const;
protected:
private:
    static CT_PARABORDER* default_instance_;
    bool m_has_BorderFill_attr;
    ST_ID* m_BorderFill_attr;
    bool m_has_Connect_attr;
    ST_OnOff* m_Connect_attr;
    bool m_has_IgnoreMargin_attr;
    ST_OnOff* m_IgnoreMargin_attr;
    bool m_has_OffsetBottom_attr;
    ST_HunitMeasure* m_OffsetBottom_attr;
    bool m_has_OffsetLeft_attr;
    ST_HunitMeasure* m_OffsetLeft_attr;
    bool m_has_OffsetRight_attr;
    ST_HunitMeasure* m_OffsetRight_attr;
    bool m_has_OffsetTop_attr;
    ST_HunitMeasure* m_OffsetTop_attr;
};

class CT_PARASHAPE: public XSD::ComplexType
{
public:
    CT_PARASHAPE();
    ~CT_PARASHAPE();
    bool has_PARAMARGIN() const;
    CT_PARAMARGIN* mutable_PARAMARGIN();
    const CT_PARAMARGIN& get_PARAMARGIN() const;
    bool has_PARABORDER() const;
    CT_PARABORDER* mutable_PARABORDER();
    const CT_PARABORDER& get_PARABORDER() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PARASHAPE& default_instance();
    bool has_Align_attr() const;
    void set_Align_attr(const ST_AlignmentType1& _Align_attr);
    const ST_AlignmentType1& get_Align_attr() const;
    bool has_AutoSpaceEAsianEng_attr() const;
    void set_AutoSpaceEAsianEng_attr(const ST_OnOff& _AutoSpaceEAsianEng_attr);
    const ST_OnOff& get_AutoSpaceEAsianEng_attr() const;
    bool has_AutoSpaceEAsianNum_attr() const;
    void set_AutoSpaceEAsianNum_attr(const ST_OnOff& _AutoSpaceEAsianNum_attr);
    const ST_OnOff& get_AutoSpaceEAsianNum_attr() const;
    bool has_BreakLatinWord_attr() const;
    void set_BreakLatinWord_attr(const ST_BreakLatinWord& _BreakLatinWord_attr);
    const ST_BreakLatinWord& get_BreakLatinWord_attr() const;
    bool has_BreakNonLatinWord_attr() const;
    void set_BreakNonLatinWord_attr(const ST_OnOff& _BreakNonLatinWord_attr);
    const ST_OnOff& get_BreakNonLatinWord_attr() const;
    bool has_Condense_attr() const;
    void set_Condense_attr(const ST_Condense& _Condense_attr);
    const ST_Condense& get_Condense_attr() const;
    bool has_FontLineHeight_attr() const;
    void set_FontLineHeight_attr(const ST_OnOff& _FontLineHeight_attr);
    const ST_OnOff& get_FontLineHeight_attr() const;
    bool has_HeadingType_attr() const;
    void set_HeadingType_attr(const ST_HeadingType& _HeadingType_attr);
    const ST_HeadingType& get_HeadingType_attr() const;
    bool has_Id_attr() const;
    void set_Id_attr(const ST_ID& _Id_attr);
    const ST_ID& get_Id_attr() const;
    bool has_KeepLines_attr() const;
    void set_KeepLines_attr(const ST_OnOff& _KeepLines_attr);
    const ST_OnOff& get_KeepLines_attr() const;
    bool has_KeepWithNext_attr() const;
    void set_KeepWithNext_attr(const ST_OnOff& _KeepWithNext_attr);
    const ST_OnOff& get_KeepWithNext_attr() const;
    bool has_Level_attr() const;
    void set_Level_attr(const ST_NumberLevelType2& _Level_attr);
    const ST_NumberLevelType2& get_Level_attr() const;
    bool has_LineWrap_attr() const;
    void set_LineWrap_attr(const ST_LineWrapType& _LineWrap_attr);
    const ST_LineWrapType& get_LineWrap_attr() const;
    bool has_PageBreakBefore_attr() const;
    void set_PageBreakBefore_attr(const ST_OnOff& _PageBreakBefore_attr);
    const ST_OnOff& get_PageBreakBefore_attr() const;
    bool has_SnapToGrid_attr() const;
    void set_SnapToGrid_attr(const ST_OnOff& _SnapToGrid_attr);
    const ST_OnOff& get_SnapToGrid_attr() const;
    bool has_TabDef_attr() const;
    void set_TabDef_attr(const ST_ID& _TabDef_attr);
    const ST_ID& get_TabDef_attr() const;
    bool has_VerAlign_attr() const;
    void set_VerAlign_attr(const ST_VertAlignType2& _VerAlign_attr);
    const ST_VertAlignType2& get_VerAlign_attr() const;
    bool has_WidowOrphan_attr() const;
    void set_WidowOrphan_attr(const ST_OnOff& _WidowOrphan_attr);
    const ST_OnOff& get_WidowOrphan_attr() const;
    bool has_Heading_attr() const;
    void set_Heading_attr(const ST_ID& _Heading_attr);
    const ST_ID& get_Heading_attr() const;
protected:
private:
    bool m_has_PARAMARGIN;
    CT_PARAMARGIN* m_PARAMARGIN;
    bool m_has_PARABORDER;
    CT_PARABORDER* m_PARABORDER;
    static CT_PARASHAPE* default_instance_;
    bool m_has_Align_attr;
    ST_AlignmentType1* m_Align_attr;
    bool m_has_AutoSpaceEAsianEng_attr;
    ST_OnOff* m_AutoSpaceEAsianEng_attr;
    bool m_has_AutoSpaceEAsianNum_attr;
    ST_OnOff* m_AutoSpaceEAsianNum_attr;
    bool m_has_BreakLatinWord_attr;
    ST_BreakLatinWord* m_BreakLatinWord_attr;
    bool m_has_BreakNonLatinWord_attr;
    ST_OnOff* m_BreakNonLatinWord_attr;
    bool m_has_Condense_attr;
    ST_Condense* m_Condense_attr;
    bool m_has_FontLineHeight_attr;
    ST_OnOff* m_FontLineHeight_attr;
    bool m_has_HeadingType_attr;
    ST_HeadingType* m_HeadingType_attr;
    bool m_has_Id_attr;
    ST_ID* m_Id_attr;
    bool m_has_KeepLines_attr;
    ST_OnOff* m_KeepLines_attr;
    bool m_has_KeepWithNext_attr;
    ST_OnOff* m_KeepWithNext_attr;
    bool m_has_Level_attr;
    ST_NumberLevelType2* m_Level_attr;
    bool m_has_LineWrap_attr;
    ST_LineWrapType* m_LineWrap_attr;
    bool m_has_PageBreakBefore_attr;
    ST_OnOff* m_PageBreakBefore_attr;
    bool m_has_SnapToGrid_attr;
    ST_OnOff* m_SnapToGrid_attr;
    bool m_has_TabDef_attr;
    ST_ID* m_TabDef_attr;
    bool m_has_VerAlign_attr;
    ST_VertAlignType2* m_VerAlign_attr;
    bool m_has_WidowOrphan_attr;
    ST_OnOff* m_WidowOrphan_attr;
    bool m_has_Heading_attr;
    ST_ID* m_Heading_attr;
};

class CT_STYLE: public XSD::ComplexType
{
public:
    CT_STYLE();
    ~CT_STYLE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_STYLE& default_instance();
    bool has_CharShape_attr() const;
    void set_CharShape_attr(const ST_ID& _CharShape_attr);
    const ST_ID& get_CharShape_attr() const;
    bool has_EngName_attr() const;
    void set_EngName_attr(const ST_String& _EngName_attr);
    const ST_String& get_EngName_attr() const;
    bool has_Id_attr() const;
    void set_Id_attr(const ST_ID& _Id_attr);
    const ST_ID& get_Id_attr() const;
    bool has_LangId_attr() const;
    void set_LangId_attr(const ST_DecimalNumber& _LangId_attr);
    const ST_DecimalNumber& get_LangId_attr() const;
    bool has_LockForm_attr() const;
    void set_LockForm_attr(const ST_OnOff& _LockForm_attr);
    const ST_OnOff& get_LockForm_attr() const;
    bool has_Name_attr() const;
    void set_Name_attr(const ST_String& _Name_attr);
    const ST_String& get_Name_attr() const;
    bool has_NextStyle_attr() const;
    void set_NextStyle_attr(const ST_ID& _NextStyle_attr);
    const ST_ID& get_NextStyle_attr() const;
    bool has_ParaShape_attr() const;
    void set_ParaShape_attr(const ST_ID& _ParaShape_attr);
    const ST_ID& get_ParaShape_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_StyleType& _Type_attr);
    const ST_StyleType& get_Type_attr() const;
protected:
private:
    static CT_STYLE* default_instance_;
    bool m_has_CharShape_attr;
    ST_ID* m_CharShape_attr;
    bool m_has_EngName_attr;
    ST_String* m_EngName_attr;
    bool m_has_Id_attr;
    ST_ID* m_Id_attr;
    bool m_has_LangId_attr;
    ST_DecimalNumber* m_LangId_attr;
    bool m_has_LockForm_attr;
    ST_OnOff* m_LockForm_attr;
    bool m_has_Name_attr;
    ST_String* m_Name_attr;
    bool m_has_NextStyle_attr;
    ST_ID* m_NextStyle_attr;
    bool m_has_ParaShape_attr;
    ST_ID* m_ParaShape_attr;
    bool m_has_Type_attr;
    ST_StyleType* m_Type_attr;
};

class CT_MEMO: public XSD::ComplexType
{
public:
    CT_MEMO();
    ~CT_MEMO();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MEMO& default_instance();
    bool has_Id_attr() const;
    void set_Id_attr(const ST_ID& _Id_attr);
    const ST_ID& get_Id_attr() const;
    bool has_Width_attr() const;
    void set_Width_attr(const ST_LineWidth2& _Width_attr);
    const ST_LineWidth2& get_Width_attr() const;
    bool has_LineType_attr() const;
    void set_LineType_attr(const ST_LineType4& _LineType_attr);
    const ST_LineType4& get_LineType_attr() const;
    bool has_LineColor_attr() const;
    void set_LineColor_attr(const ST_IntColorRGB& _LineColor_attr);
    const ST_IntColorRGB& get_LineColor_attr() const;
    bool has_FillColor_attr() const;
    void set_FillColor_attr(const ST_IntColorRGB& _FillColor_attr);
    const ST_IntColorRGB& get_FillColor_attr() const;
    bool has_ActiveColor_attr() const;
    void set_ActiveColor_attr(const ST_IntColorRGB& _ActiveColor_attr);
    const ST_IntColorRGB& get_ActiveColor_attr() const;
    bool has_MemoType_attr() const;
    void set_MemoType_attr(const ST_String& _MemoType_attr);
    const ST_String& get_MemoType_attr() const;
protected:
private:
    static CT_MEMO* default_instance_;
    bool m_has_Id_attr;
    ST_ID* m_Id_attr;
    bool m_has_Width_attr;
    ST_LineWidth2* m_Width_attr;
    bool m_has_LineType_attr;
    ST_LineType4* m_LineType_attr;
    bool m_has_LineColor_attr;
    ST_IntColorRGB* m_LineColor_attr;
    bool m_has_FillColor_attr;
    ST_IntColorRGB* m_FillColor_attr;
    bool m_has_ActiveColor_attr;
    ST_IntColorRGB* m_ActiveColor_attr;
    bool m_has_MemoType_attr;
    ST_String* m_MemoType_attr;
};

class CT_NOTESHAPE: public XSD::ComplexType
{
public:
    CT_NOTESHAPE();
    ~CT_NOTESHAPE();
    CT_AUTONUMFORMAT* add_AUTONUMFORMAT();
    CT_NOTELINE* add_NOTELINE();
    CT_NOTESPACING* add_NOTESPACING();
    CT_NOTENUMBERING* add_NOTENUMBERING();
    CT_NOTEPLACEMENT* add_NOTEPLACEMENT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NOTESHAPE& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_AUTONUMFORMAT() const;
        CT_AUTONUMFORMAT* mutable_AUTONUMFORMAT();
        const CT_AUTONUMFORMAT& get_AUTONUMFORMAT() const;
    protected:
    private:
        bool m_has_AUTONUMFORMAT;
        CT_AUTONUMFORMAT* m_AUTONUMFORMAT;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_NOTELINE() const;
        CT_NOTELINE* mutable_NOTELINE();
        const CT_NOTELINE& get_NOTELINE() const;
    protected:
    private:
        bool m_has_NOTELINE;
        CT_NOTELINE* m_NOTELINE;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_NOTESPACING() const;
        CT_NOTESPACING* mutable_NOTESPACING();
        const CT_NOTESPACING& get_NOTESPACING() const;
    protected:
    private:
        bool m_has_NOTESPACING;
        CT_NOTESPACING* m_NOTESPACING;
    };
    class ChildGroup_4
    {
    public:
        ChildGroup_4();
        bool has_NOTENUMBERING() const;
        CT_NOTENUMBERING* mutable_NOTENUMBERING();
        const CT_NOTENUMBERING& get_NOTENUMBERING() const;
    protected:
    private:
        bool m_has_NOTENUMBERING;
        CT_NOTENUMBERING* m_NOTENUMBERING;
    };
    class ChildGroup_5
    {
    public:
        ChildGroup_5();
        bool has_NOTEPLACEMENT() const;
        CT_NOTEPLACEMENT* mutable_NOTEPLACEMENT();
        const CT_NOTEPLACEMENT& get_NOTEPLACEMENT() const;
    protected:
    private:
        bool m_has_NOTEPLACEMENT;
        CT_NOTEPLACEMENT* m_NOTEPLACEMENT;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    vector<ChildGroup_3*> m_childGroupList_3;
    vector<ChildGroup_4*> m_childGroupList_4;
    vector<ChildGroup_5*> m_childGroupList_5;
    static CT_NOTESHAPE* default_instance_;
};

class CT_STARTNUMBER: public XSD::ComplexType
{
public:
    CT_STARTNUMBER();
    ~CT_STARTNUMBER();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_STARTNUMBER& default_instance();
    bool has_Equation_attr() const;
    void set_Equation_attr(const ST_String& _Equation_attr);
    const ST_String& get_Equation_attr() const;
    bool has_Figure_attr() const;
    void set_Figure_attr(const ST_String& _Figure_attr);
    const ST_String& get_Figure_attr() const;
    bool has_Page_attr() const;
    void set_Page_attr(const ST_String& _Page_attr);
    const ST_String& get_Page_attr() const;
    bool has_PageStartsOn_attr() const;
    void set_PageStartsOn_attr(const ST_String& _PageStartsOn_attr);
    const ST_String& get_PageStartsOn_attr() const;
    bool has_Table_attr() const;
    void set_Table_attr(const ST_String& _Table_attr);
    const ST_String& get_Table_attr() const;
protected:
private:
    static CT_STARTNUMBER* default_instance_;
    bool m_has_Equation_attr;
    ST_String* m_Equation_attr;
    bool m_has_Figure_attr;
    ST_String* m_Figure_attr;
    bool m_has_Page_attr;
    ST_String* m_Page_attr;
    bool m_has_PageStartsOn_attr;
    ST_String* m_PageStartsOn_attr;
    bool m_has_Table_attr;
    ST_String* m_Table_attr;
};

class CT_HIDE: public XSD::ComplexType
{
public:
    CT_HIDE();
    ~CT_HIDE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HIDE& default_instance();
    bool has_Border_attr() const;
    void set_Border_attr(const ST_String& _Border_attr);
    const ST_String& get_Border_attr() const;
    bool has_EmptyLine_attr() const;
    void set_EmptyLine_attr(const ST_String& _EmptyLine_attr);
    const ST_String& get_EmptyLine_attr() const;
    bool has_Fill_attr() const;
    void set_Fill_attr(const ST_String& _Fill_attr);
    const ST_String& get_Fill_attr() const;
    bool has_Footer_attr() const;
    void set_Footer_attr(const ST_String& _Footer_attr);
    const ST_String& get_Footer_attr() const;
    bool has_Header_attr() const;
    void set_Header_attr(const ST_String& _Header_attr);
    const ST_String& get_Header_attr() const;
    bool has_MasterPage_attr() const;
    void set_MasterPage_attr(const ST_String& _MasterPage_attr);
    const ST_String& get_MasterPage_attr() const;
    bool has_PageNumPos_attr() const;
    void set_PageNumPos_attr(const ST_String& _PageNumPos_attr);
    const ST_String& get_PageNumPos_attr() const;
protected:
private:
    static CT_HIDE* default_instance_;
    bool m_has_Border_attr;
    ST_String* m_Border_attr;
    bool m_has_EmptyLine_attr;
    ST_String* m_EmptyLine_attr;
    bool m_has_Fill_attr;
    ST_String* m_Fill_attr;
    bool m_has_Footer_attr;
    ST_String* m_Footer_attr;
    bool m_has_Header_attr;
    ST_String* m_Header_attr;
    bool m_has_MasterPage_attr;
    ST_String* m_MasterPage_attr;
    bool m_has_PageNumPos_attr;
    ST_String* m_PageNumPos_attr;
};

class CT_PAGEMARGIN: public XSD::ComplexType
{
public:
    CT_PAGEMARGIN();
    ~CT_PAGEMARGIN();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PAGEMARGIN& default_instance();
    bool has_Bottom_attr() const;
    void set_Bottom_attr(const ST_String& _Bottom_attr);
    const ST_String& get_Bottom_attr() const;
    bool has_Footer_attr() const;
    void set_Footer_attr(const ST_String& _Footer_attr);
    const ST_String& get_Footer_attr() const;
    bool has_Gutter_attr() const;
    void set_Gutter_attr(const ST_String& _Gutter_attr);
    const ST_String& get_Gutter_attr() const;
    bool has_Header_attr() const;
    void set_Header_attr(const ST_String& _Header_attr);
    const ST_String& get_Header_attr() const;
    bool has_Left_attr() const;
    void set_Left_attr(const ST_String& _Left_attr);
    const ST_String& get_Left_attr() const;
    bool has_Right_attr() const;
    void set_Right_attr(const ST_String& _Right_attr);
    const ST_String& get_Right_attr() const;
    bool has_Top_attr() const;
    void set_Top_attr(const ST_String& _Top_attr);
    const ST_String& get_Top_attr() const;
protected:
private:
    static CT_PAGEMARGIN* default_instance_;
    bool m_has_Bottom_attr;
    ST_String* m_Bottom_attr;
    bool m_has_Footer_attr;
    ST_String* m_Footer_attr;
    bool m_has_Gutter_attr;
    ST_String* m_Gutter_attr;
    bool m_has_Header_attr;
    ST_String* m_Header_attr;
    bool m_has_Left_attr;
    ST_String* m_Left_attr;
    bool m_has_Right_attr;
    ST_String* m_Right_attr;
    bool m_has_Top_attr;
    ST_String* m_Top_attr;
};

class CT_PAGEDEF: public XSD::ComplexType
{
public:
    CT_PAGEDEF();
    ~CT_PAGEDEF();
    bool has_PAGEMARGIN() const;
    CT_PAGEMARGIN* mutable_PAGEMARGIN();
    const CT_PAGEMARGIN& get_PAGEMARGIN() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PAGEDEF& default_instance();
    bool has_GutterType_attr() const;
    void set_GutterType_attr(const ST_String& _GutterType_attr);
    const ST_String& get_GutterType_attr() const;
    bool has_Height_attr() const;
    void set_Height_attr(const ST_String& _Height_attr);
    const ST_String& get_Height_attr() const;
    bool has_Landscape_attr() const;
    void set_Landscape_attr(const ST_String& _Landscape_attr);
    const ST_String& get_Landscape_attr() const;
    bool has_Width_attr() const;
    void set_Width_attr(const ST_String& _Width_attr);
    const ST_String& get_Width_attr() const;
protected:
private:
    bool m_has_PAGEMARGIN;
    CT_PAGEMARGIN* m_PAGEMARGIN;
    static CT_PAGEDEF* default_instance_;
    bool m_has_GutterType_attr;
    ST_String* m_GutterType_attr;
    bool m_has_Height_attr;
    ST_String* m_Height_attr;
    bool m_has_Landscape_attr;
    ST_String* m_Landscape_attr;
    bool m_has_Width_attr;
    ST_String* m_Width_attr;
};

class CT_PAGEOFFSET: public XSD::ComplexType
{
public:
    CT_PAGEOFFSET();
    ~CT_PAGEOFFSET();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PAGEOFFSET& default_instance();
    bool has_Bottom_attr() const;
    void set_Bottom_attr(const ST_String& _Bottom_attr);
    const ST_String& get_Bottom_attr() const;
    bool has_Left_attr() const;
    void set_Left_attr(const ST_String& _Left_attr);
    const ST_String& get_Left_attr() const;
    bool has_Right_attr() const;
    void set_Right_attr(const ST_String& _Right_attr);
    const ST_String& get_Right_attr() const;
    bool has_Top_attr() const;
    void set_Top_attr(const ST_String& _Top_attr);
    const ST_String& get_Top_attr() const;
protected:
private:
    static CT_PAGEOFFSET* default_instance_;
    bool m_has_Bottom_attr;
    ST_String* m_Bottom_attr;
    bool m_has_Left_attr;
    ST_String* m_Left_attr;
    bool m_has_Right_attr;
    ST_String* m_Right_attr;
    bool m_has_Top_attr;
    ST_String* m_Top_attr;
};

class CT_PAGEBORDERFILL: public XSD::ComplexType
{
public:
    CT_PAGEBORDERFILL();
    ~CT_PAGEBORDERFILL();
    bool has_PAGEOFFSET() const;
    CT_PAGEOFFSET* mutable_PAGEOFFSET();
    const CT_PAGEOFFSET& get_PAGEOFFSET() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PAGEBORDERFILL& default_instance();
    bool has_FillArea_attr() const;
    void set_FillArea_attr(const ST_String& _FillArea_attr);
    const ST_String& get_FillArea_attr() const;
    bool has_FooterInside_attr() const;
    void set_FooterInside_attr(const ST_String& _FooterInside_attr);
    const ST_String& get_FooterInside_attr() const;
    bool has_HeaderInside_attr() const;
    void set_HeaderInside_attr(const ST_String& _HeaderInside_attr);
    const ST_String& get_HeaderInside_attr() const;
    bool has_TextBorder_attr() const;
    void set_TextBorder_attr(const ST_String& _TextBorder_attr);
    const ST_String& get_TextBorder_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    bool m_has_PAGEOFFSET;
    CT_PAGEOFFSET* m_PAGEOFFSET;
    static CT_PAGEBORDERFILL* default_instance_;
    bool m_has_FillArea_attr;
    ST_String* m_FillArea_attr;
    bool m_has_FooterInside_attr;
    ST_String* m_FooterInside_attr;
    bool m_has_HeaderInside_attr;
    ST_String* m_HeaderInside_attr;
    bool m_has_TextBorder_attr;
    ST_String* m_TextBorder_attr;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_SECDEF: public XSD::ComplexType
{
public:
    CT_SECDEF();
    ~CT_SECDEF();
    bool has_STARTNUMBER() const;
    CT_STARTNUMBER* mutable_STARTNUMBER();
    const CT_STARTNUMBER& get_STARTNUMBER() const;
    bool has_HIDE() const;
    CT_HIDE* mutable_HIDE();
    const CT_HIDE& get_HIDE() const;
    bool has_PAGEDEF() const;
    CT_PAGEDEF* mutable_PAGEDEF();
    const CT_PAGEDEF& get_PAGEDEF() const;
    bool has_FOOTNOTESHAPE() const;
    CT_NOTESHAPE* mutable_FOOTNOTESHAPE();
    const CT_NOTESHAPE& get_FOOTNOTESHAPE() const;
    bool has_ENDNOTESHAPE() const;
    CT_NOTESHAPE* mutable_ENDNOTESHAPE();
    const CT_NOTESHAPE& get_ENDNOTESHAPE() const;
    CT_PAGEBORDERFILL* add_PAGEBORDERFILL();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SECDEF& default_instance();
    bool has_CharGrid_attr() const;
    void set_CharGrid_attr(const ST_String& _CharGrid_attr);
    const ST_String& get_CharGrid_attr() const;
    bool has_FirstBorder_attr() const;
    void set_FirstBorder_attr(const ST_String& _FirstBorder_attr);
    const ST_String& get_FirstBorder_attr() const;
    bool has_FirstFill_attr() const;
    void set_FirstFill_attr(const ST_String& _FirstFill_attr);
    const ST_String& get_FirstFill_attr() const;
    bool has_LineGrid_attr() const;
    void set_LineGrid_attr(const ST_String& _LineGrid_attr);
    const ST_String& get_LineGrid_attr() const;
    bool has_OutlineShape_attr() const;
    void set_OutlineShape_attr(const ST_String& _OutlineShape_attr);
    const ST_String& get_OutlineShape_attr() const;
    bool has_SpaceColumns_attr() const;
    void set_SpaceColumns_attr(const ST_String& _SpaceColumns_attr);
    const ST_String& get_SpaceColumns_attr() const;
    bool has_TabStop_attr() const;
    void set_TabStop_attr(const ST_String& _TabStop_attr);
    const ST_String& get_TabStop_attr() const;
    bool has_TextDirection_attr() const;
    void set_TextDirection_attr(const ST_String& _TextDirection_attr);
    const ST_String& get_TextDirection_attr() const;
    bool has_TextVerticalWidthHead_attr() const;
    void set_TextVerticalWidthHead_attr(const ST_String& _TextVerticalWidthHead_attr);
    const ST_String& get_TextVerticalWidthHead_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_PAGEBORDERFILL() const;
        CT_PAGEBORDERFILL* mutable_PAGEBORDERFILL();
        const CT_PAGEBORDERFILL& get_PAGEBORDERFILL() const;
    protected:
    private:
        bool m_has_PAGEBORDERFILL;
        CT_PAGEBORDERFILL* m_PAGEBORDERFILL;
    };
    bool m_has_STARTNUMBER;
    CT_STARTNUMBER* m_STARTNUMBER;
    bool m_has_HIDE;
    CT_HIDE* m_HIDE;
    bool m_has_PAGEDEF;
    CT_PAGEDEF* m_PAGEDEF;
    bool m_has_FOOTNOTESHAPE;
    CT_NOTESHAPE* m_FOOTNOTESHAPE;
    bool m_has_ENDNOTESHAPE;
    CT_NOTESHAPE* m_ENDNOTESHAPE;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SECDEF* default_instance_;
    bool m_has_CharGrid_attr;
    ST_String* m_CharGrid_attr;
    bool m_has_FirstBorder_attr;
    ST_String* m_FirstBorder_attr;
    bool m_has_FirstFill_attr;
    ST_String* m_FirstFill_attr;
    bool m_has_LineGrid_attr;
    ST_String* m_LineGrid_attr;
    bool m_has_OutlineShape_attr;
    ST_String* m_OutlineShape_attr;
    bool m_has_SpaceColumns_attr;
    ST_String* m_SpaceColumns_attr;
    bool m_has_TabStop_attr;
    ST_String* m_TabStop_attr;
    bool m_has_TextDirection_attr;
    ST_String* m_TextDirection_attr;
    bool m_has_TextVerticalWidthHead_attr;
    ST_String* m_TextVerticalWidthHead_attr;
};

class CT_COLDEF: public XSD::ComplexType
{
public:
    CT_COLDEF();
    ~CT_COLDEF();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_COLDEF& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
    bool has_Layout_attr() const;
    void set_Layout_attr(const ST_String& _Layout_attr);
    const ST_String& get_Layout_attr() const;
    bool has_SameGap_attr() const;
    void set_SameGap_attr(const ST_String& _SameGap_attr);
    const ST_String& get_SameGap_attr() const;
    bool has_SameSize_attr() const;
    void set_SameSize_attr(const ST_String& _SameSize_attr);
    const ST_String& get_SameSize_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_COLDEF* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
    bool m_has_Layout_attr;
    ST_String* m_Layout_attr;
    bool m_has_SameGap_attr;
    ST_String* m_SameGap_attr;
    bool m_has_SameSize_attr;
    ST_String* m_SameSize_attr;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_FIELDBEGIN: public XSD::ComplexType
{
public:
    CT_FIELDBEGIN();
    ~CT_FIELDBEGIN();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FIELDBEGIN& default_instance();
    bool has_Command_attr() const;
    void set_Command_attr(const ST_String& _Command_attr);
    const ST_String& get_Command_attr() const;
    bool has_Dirty_attr() const;
    void set_Dirty_attr(const ST_String& _Dirty_attr);
    const ST_String& get_Dirty_attr() const;
    bool has_Editable_attr() const;
    void set_Editable_attr(const ST_String& _Editable_attr);
    const ST_String& get_Editable_attr() const;
    bool has_InstId_attr() const;
    void set_InstId_attr(const ST_String& _InstId_attr);
    const ST_String& get_InstId_attr() const;
    bool has_Property_attr() const;
    void set_Property_attr(const ST_String& _Property_attr);
    const ST_String& get_Property_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
    bool has_Fixed_attr() const;
    void set_Fixed_attr(const ST_String& _Fixed_attr);
    const ST_String& get_Fixed_attr() const;
protected:
private:
    static CT_FIELDBEGIN* default_instance_;
    bool m_has_Command_attr;
    ST_String* m_Command_attr;
    bool m_has_Dirty_attr;
    ST_String* m_Dirty_attr;
    bool m_has_Editable_attr;
    ST_String* m_Editable_attr;
    bool m_has_InstId_attr;
    ST_String* m_InstId_attr;
    bool m_has_Property_attr;
    ST_String* m_Property_attr;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
    bool m_has_Fixed_attr;
    ST_String* m_Fixed_attr;
};

class CT_FIELDEND: public XSD::ComplexType
{
public:
    CT_FIELDEND();
    ~CT_FIELDEND();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FIELDEND& default_instance();
    bool has_Editable_attr() const;
    void set_Editable_attr(const ST_String& _Editable_attr);
    const ST_String& get_Editable_attr() const;
    bool has_Property_attr() const;
    void set_Property_attr(const ST_String& _Property_attr);
    const ST_String& get_Property_attr() const;
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
    bool has_Zorder_attr() const;
    void set_Zorder_attr(const ST_String& _Zorder_attr);
    const ST_String& get_Zorder_attr() const;
protected:
private:
    static CT_FIELDEND* default_instance_;
    bool m_has_Editable_attr;
    ST_String* m_Editable_attr;
    bool m_has_Property_attr;
    ST_String* m_Property_attr;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
    bool m_has_Zorder_attr;
    ST_String* m_Zorder_attr;
};

class CT_AUTONUM: public XSD::ComplexType
{
public:
    CT_AUTONUM();
    ~CT_AUTONUM();
    CT_AUTONUMFORMAT* add_AUTONUMFORMAT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AUTONUM& default_instance();
    bool has_Number_attr() const;
    void set_Number_attr(const ST_String& _Number_attr);
    const ST_String& get_Number_attr() const;
    bool has_NumberType_attr() const;
    void set_NumberType_attr(const ST_String& _NumberType_attr);
    const ST_String& get_NumberType_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_AUTONUMFORMAT() const;
        CT_AUTONUMFORMAT* mutable_AUTONUMFORMAT();
        const CT_AUTONUMFORMAT& get_AUTONUMFORMAT() const;
    protected:
    private:
        bool m_has_AUTONUMFORMAT;
        CT_AUTONUMFORMAT* m_AUTONUMFORMAT;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_AUTONUM* default_instance_;
    bool m_has_Number_attr;
    ST_String* m_Number_attr;
    bool m_has_NumberType_attr;
    ST_String* m_NumberType_attr;
};

class CT_DUTMAL: public XSD::ComplexType
{
public:
    CT_DUTMAL();
    ~CT_DUTMAL();
    bool has_MAINTEXT() const;
    ST_String* mutable_MAINTEXT();
    const ST_String& get_MAINTEXT() const;
    bool has_SUBTEXT() const;
    ST_String* mutable_SUBTEXT();
    const ST_String& get_SUBTEXT() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DUTMAL& default_instance();
    bool has_Align_attr() const;
    void set_Align_attr(const ST_String& _Align_attr);
    const ST_String& get_Align_attr() const;
    bool has_PosType_attr() const;
    void set_PosType_attr(const ST_String& _PosType_attr);
    const ST_String& get_PosType_attr() const;
protected:
private:
    bool m_has_MAINTEXT;
    ST_String* m_MAINTEXT;
    bool m_has_SUBTEXT;
    ST_String* m_SUBTEXT;
    static CT_DUTMAL* default_instance_;
    bool m_has_Align_attr;
    ST_String* m_Align_attr;
    bool m_has_PosType_attr;
    ST_String* m_PosType_attr;
};

class CT_NAME: public XSD::ComplexType
{
public:
    CT_NAME();
    ~CT_NAME();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NAME& default_instance();
    bool has_Name_attr() const;
    void set_Name_attr(const ST_String& _Name_attr);
    const ST_String& get_Name_attr() const;
protected:
private:
    static CT_NAME* default_instance_;
    bool m_has_Name_attr;
    ST_String* m_Name_attr;
};

class CT_CHAR: public XSD::ComplexType
{
public:
    CT_CHAR();
    ~CT_CHAR();
    bool has_TAB() const;
    ST_String* mutable_TAB();
    const ST_String& get_TAB() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CHAR& default_instance();
protected:
private:
    bool m_has_TAB;
    ST_String* m_TAB;
    static CT_CHAR* default_instance_;
};

class CT_TABLE: public XSD::ComplexType
{
public:
    CT_TABLE();
    ~CT_TABLE();
    CT_SHAPEOBJECT* add_SHAPEOBJECT();
    CT_INSIDEMARGIN* add_INSIDEMARGIN();
    CT_CELLZONELIST* add_CELLZONELIST();
    CT_ROW* add_ROW();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TABLE& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_SHAPEOBJECT() const;
        CT_SHAPEOBJECT* mutable_SHAPEOBJECT();
        const CT_SHAPEOBJECT& get_SHAPEOBJECT() const;
    protected:
    private:
        bool m_has_SHAPEOBJECT;
        CT_SHAPEOBJECT* m_SHAPEOBJECT;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_INSIDEMARGIN() const;
        CT_INSIDEMARGIN* mutable_INSIDEMARGIN();
        const CT_INSIDEMARGIN& get_INSIDEMARGIN() const;
    protected:
    private:
        bool m_has_INSIDEMARGIN;
        CT_INSIDEMARGIN* m_INSIDEMARGIN;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_CELLZONELIST() const;
        CT_CELLZONELIST* mutable_CELLZONELIST();
        const CT_CELLZONELIST& get_CELLZONELIST() const;
    protected:
    private:
        bool m_has_CELLZONELIST;
        CT_CELLZONELIST* m_CELLZONELIST;
    };
    class ChildGroup_4
    {
    public:
        ChildGroup_4();
        bool has_ROW() const;
        CT_ROW* mutable_ROW();
        const CT_ROW& get_ROW() const;
    protected:
    private:
        bool m_has_ROW;
        CT_ROW* m_ROW;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    vector<ChildGroup_3*> m_childGroupList_3;
    vector<ChildGroup_4*> m_childGroupList_4;
    static CT_TABLE* default_instance_;
};

class CT_PICTURE: public XSD::ComplexType
{
public:
    CT_PICTURE();
    ~CT_PICTURE();
    bool has_TAB() const;
    ST_String* mutable_TAB();
    const ST_String& get_TAB() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PICTURE& default_instance();
protected:
private:
    bool m_has_TAB;
    ST_String* m_TAB;
    static CT_PICTURE* default_instance_;
};

class CT_TEXT: public XSD::ComplexType
{
public:
    CT_TEXT();
    ~CT_TEXT();
    CT_SECDEF* add_SECDEF();
    CT_COLDEF* add_COLDEF();
    CT_TABLE* add_TABLE();
    CT_PICTURE* add_PICTURE();
    CT_CHAR* add_CHAR();
    CT_FIELDBEGIN* add_FIELDBEGIN();
    CT_FIELDEND* add_FIELDEND();
    CT_AUTONUM* add_AUTONUM();
    CT_DUTMAL* add_DUTMAL();
    CT_EQUATION* add_EQUATION();
    CT_NAME* add_BOOKMARK();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TEXT& default_instance();
    bool has_CharShape_attr() const;
    void set_CharShape_attr(const ST_ID& _CharShape_attr);
    const ST_ID& get_CharShape_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_SECDEF() const;
        CT_SECDEF* mutable_SECDEF();
        const CT_SECDEF& get_SECDEF() const;
    protected:
    private:
        bool m_has_SECDEF;
        CT_SECDEF* m_SECDEF;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_COLDEF() const;
        CT_COLDEF* mutable_COLDEF();
        const CT_COLDEF& get_COLDEF() const;
    protected:
    private:
        bool m_has_COLDEF;
        CT_COLDEF* m_COLDEF;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_TABLE() const;
        CT_TABLE* mutable_TABLE();
        const CT_TABLE& get_TABLE() const;
    protected:
    private:
        bool m_has_TABLE;
        CT_TABLE* m_TABLE;
    };
    class ChildGroup_4
    {
    public:
        ChildGroup_4();
        bool has_PICTURE() const;
        CT_PICTURE* mutable_PICTURE();
        const CT_PICTURE& get_PICTURE() const;
    protected:
    private:
        bool m_has_PICTURE;
        CT_PICTURE* m_PICTURE;
    };
    class ChildGroup_5
    {
    public:
        ChildGroup_5();
        bool has_CHAR() const;
        CT_CHAR* mutable_CHAR();
        const CT_CHAR& get_CHAR() const;
    protected:
    private:
        bool m_has_CHAR;
        CT_CHAR* m_CHAR;
    };
    class ChildGroup_6
    {
    public:
        ChildGroup_6();
        bool has_FIELDBEGIN() const;
        CT_FIELDBEGIN* mutable_FIELDBEGIN();
        const CT_FIELDBEGIN& get_FIELDBEGIN() const;
    protected:
    private:
        bool m_has_FIELDBEGIN;
        CT_FIELDBEGIN* m_FIELDBEGIN;
    };
    class ChildGroup_7
    {
    public:
        ChildGroup_7();
        bool has_FIELDEND() const;
        CT_FIELDEND* mutable_FIELDEND();
        const CT_FIELDEND& get_FIELDEND() const;
    protected:
    private:
        bool m_has_FIELDEND;
        CT_FIELDEND* m_FIELDEND;
    };
    class ChildGroup_8
    {
    public:
        ChildGroup_8();
        bool has_AUTONUM() const;
        CT_AUTONUM* mutable_AUTONUM();
        const CT_AUTONUM& get_AUTONUM() const;
    protected:
    private:
        bool m_has_AUTONUM;
        CT_AUTONUM* m_AUTONUM;
    };
    class ChildGroup_9
    {
    public:
        ChildGroup_9();
        bool has_DUTMAL() const;
        CT_DUTMAL* mutable_DUTMAL();
        const CT_DUTMAL& get_DUTMAL() const;
    protected:
    private:
        bool m_has_DUTMAL;
        CT_DUTMAL* m_DUTMAL;
    };
    class ChildGroup_10
    {
    public:
        ChildGroup_10();
        bool has_EQUATION() const;
        CT_EQUATION* mutable_EQUATION();
        const CT_EQUATION& get_EQUATION() const;
    protected:
    private:
        bool m_has_EQUATION;
        CT_EQUATION* m_EQUATION;
    };
    class ChildGroup_11
    {
    public:
        ChildGroup_11();
        bool has_BOOKMARK() const;
        CT_NAME* mutable_BOOKMARK();
        const CT_NAME& get_BOOKMARK() const;
    protected:
    private:
        bool m_has_BOOKMARK;
        CT_NAME* m_BOOKMARK;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    vector<ChildGroup_3*> m_childGroupList_3;
    vector<ChildGroup_4*> m_childGroupList_4;
    vector<ChildGroup_5*> m_childGroupList_5;
    vector<ChildGroup_6*> m_childGroupList_6;
    vector<ChildGroup_7*> m_childGroupList_7;
    vector<ChildGroup_8*> m_childGroupList_8;
    vector<ChildGroup_9*> m_childGroupList_9;
    vector<ChildGroup_10*> m_childGroupList_10;
    vector<ChildGroup_11*> m_childGroupList_11;
    static CT_TEXT* default_instance_;
    bool m_has_CharShape_attr;
    ST_ID* m_CharShape_attr;
};

class CT_P: public XSD::ComplexType
{
public:
    CT_P();
    ~CT_P();
    CT_TEXT* add_TEXT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_P& default_instance();
    bool has_ColumnBreak_attr() const;
    void set_ColumnBreak_attr(const ST_OnOff& _ColumnBreak_attr);
    const ST_OnOff& get_ColumnBreak_attr() const;
    bool has_PageBreak_attr() const;
    void set_PageBreak_attr(const ST_OnOff& _PageBreak_attr);
    const ST_OnOff& get_PageBreak_attr() const;
    bool has_ParaShape_attr() const;
    void set_ParaShape_attr(const ST_ID& _ParaShape_attr);
    const ST_ID& get_ParaShape_attr() const;
    bool has_Style_attr() const;
    void set_Style_attr(const ST_ID& _Style_attr);
    const ST_ID& get_Style_attr() const;
    bool has_InstId_attr() const;
    void set_InstId_attr(const ST_ID& _InstId_attr);
    const ST_ID& get_InstId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_TEXT() const;
        CT_TEXT* mutable_TEXT();
        const CT_TEXT& get_TEXT() const;
    protected:
    private:
        bool m_has_TEXT;
        CT_TEXT* m_TEXT;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_P* default_instance_;
    bool m_has_ColumnBreak_attr;
    ST_OnOff* m_ColumnBreak_attr;
    bool m_has_PageBreak_attr;
    ST_OnOff* m_PageBreak_attr;
    bool m_has_ParaShape_attr;
    ST_ID* m_ParaShape_attr;
    bool m_has_Style_attr;
    ST_ID* m_Style_attr;
    bool m_has_InstId_attr;
    ST_ID* m_InstId_attr;
};

class CT_SIZE: public XSD::ComplexType
{
public:
    CT_SIZE();
    ~CT_SIZE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SIZE& default_instance();
    bool has_Height_attr() const;
    void set_Height_attr(const ST_String& _Height_attr);
    const ST_String& get_Height_attr() const;
    bool has_HeightRelTo_attr() const;
    void set_HeightRelTo_attr(const ST_String& _HeightRelTo_attr);
    const ST_String& get_HeightRelTo_attr() const;
    bool has_Protect_attr() const;
    void set_Protect_attr(const ST_String& _Protect_attr);
    const ST_String& get_Protect_attr() const;
    bool has_Width_attr() const;
    void set_Width_attr(const ST_String& _Width_attr);
    const ST_String& get_Width_attr() const;
    bool has_WidthRelTo_attr() const;
    void set_WidthRelTo_attr(const ST_String& _WidthRelTo_attr);
    const ST_String& get_WidthRelTo_attr() const;
protected:
private:
    static CT_SIZE* default_instance_;
    bool m_has_Height_attr;
    ST_String* m_Height_attr;
    bool m_has_HeightRelTo_attr;
    ST_String* m_HeightRelTo_attr;
    bool m_has_Protect_attr;
    ST_String* m_Protect_attr;
    bool m_has_Width_attr;
    ST_String* m_Width_attr;
    bool m_has_WidthRelTo_attr;
    ST_String* m_WidthRelTo_attr;
};

class CT_POSITION: public XSD::ComplexType
{
public:
    CT_POSITION();
    ~CT_POSITION();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_POSITION& default_instance();
    bool has_AffectLSpacing_attr() const;
    void set_AffectLSpacing_attr(const ST_String& _AffectLSpacing_attr);
    const ST_String& get_AffectLSpacing_attr() const;
    bool has_AllowOverlap_attr() const;
    void set_AllowOverlap_attr(const ST_String& _AllowOverlap_attr);
    const ST_String& get_AllowOverlap_attr() const;
    bool has_FlowWithText_attr() const;
    void set_FlowWithText_attr(const ST_String& _FlowWithText_attr);
    const ST_String& get_FlowWithText_attr() const;
    bool has_HoldAnchorAndSO_attr() const;
    void set_HoldAnchorAndSO_attr(const ST_String& _HoldAnchorAndSO_attr);
    const ST_String& get_HoldAnchorAndSO_attr() const;
    bool has_HorzAlign_attr() const;
    void set_HorzAlign_attr(const ST_String& _HorzAlign_attr);
    const ST_String& get_HorzAlign_attr() const;
    bool has_HorzOffset_attr() const;
    void set_HorzOffset_attr(const ST_String& _HorzOffset_attr);
    const ST_String& get_HorzOffset_attr() const;
    bool has_HorzRelTo_attr() const;
    void set_HorzRelTo_attr(const ST_String& _HorzRelTo_attr);
    const ST_String& get_HorzRelTo_attr() const;
    bool has_TreatAsChar_attr() const;
    void set_TreatAsChar_attr(const ST_String& _TreatAsChar_attr);
    const ST_String& get_TreatAsChar_attr() const;
    bool has_VertAlign_attr() const;
    void set_VertAlign_attr(const ST_String& _VertAlign_attr);
    const ST_String& get_VertAlign_attr() const;
    bool has_VertOffset_attr() const;
    void set_VertOffset_attr(const ST_String& _VertOffset_attr);
    const ST_String& get_VertOffset_attr() const;
    bool has_VertRelTo_attr() const;
    void set_VertRelTo_attr(const ST_String& _VertRelTo_attr);
    const ST_String& get_VertRelTo_attr() const;
protected:
private:
    static CT_POSITION* default_instance_;
    bool m_has_AffectLSpacing_attr;
    ST_String* m_AffectLSpacing_attr;
    bool m_has_AllowOverlap_attr;
    ST_String* m_AllowOverlap_attr;
    bool m_has_FlowWithText_attr;
    ST_String* m_FlowWithText_attr;
    bool m_has_HoldAnchorAndSO_attr;
    ST_String* m_HoldAnchorAndSO_attr;
    bool m_has_HorzAlign_attr;
    ST_String* m_HorzAlign_attr;
    bool m_has_HorzOffset_attr;
    ST_String* m_HorzOffset_attr;
    bool m_has_HorzRelTo_attr;
    ST_String* m_HorzRelTo_attr;
    bool m_has_TreatAsChar_attr;
    ST_String* m_TreatAsChar_attr;
    bool m_has_VertAlign_attr;
    ST_String* m_VertAlign_attr;
    bool m_has_VertOffset_attr;
    ST_String* m_VertOffset_attr;
    bool m_has_VertRelTo_attr;
    ST_String* m_VertRelTo_attr;
};

class CT_OUTSIDEMARGIN: public XSD::ComplexType
{
public:
    CT_OUTSIDEMARGIN();
    ~CT_OUTSIDEMARGIN();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_OUTSIDEMARGIN& default_instance();
    bool has_Bottom_attr() const;
    void set_Bottom_attr(const ST_String& _Bottom_attr);
    const ST_String& get_Bottom_attr() const;
    bool has_Left_attr() const;
    void set_Left_attr(const ST_String& _Left_attr);
    const ST_String& get_Left_attr() const;
    bool has_Right_attr() const;
    void set_Right_attr(const ST_String& _Right_attr);
    const ST_String& get_Right_attr() const;
    bool has_Top_attr() const;
    void set_Top_attr(const ST_String& _Top_attr);
    const ST_String& get_Top_attr() const;
protected:
private:
    static CT_OUTSIDEMARGIN* default_instance_;
    bool m_has_Bottom_attr;
    ST_String* m_Bottom_attr;
    bool m_has_Left_attr;
    ST_String* m_Left_attr;
    bool m_has_Right_attr;
    ST_String* m_Right_attr;
    bool m_has_Top_attr;
    ST_String* m_Top_attr;
};

class CT_SHAPEOBJECT: public XSD::ComplexType
{
public:
    CT_SHAPEOBJECT();
    ~CT_SHAPEOBJECT();
    CT_SIZE* add_SIZE();
    CT_POSITION* add_POSITION();
    CT_OUTSIDEMARGIN* add_OUTSIDEMARGIN();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SHAPEOBJECT& default_instance();
    bool has_InstId_attr() const;
    void set_InstId_attr(const ST_String& _InstId_attr);
    const ST_String& get_InstId_attr() const;
    bool has_Lock_attr() const;
    void set_Lock_attr(const ST_String& _Lock_attr);
    const ST_String& get_Lock_attr() const;
    bool has_NumberingType_attr() const;
    void set_NumberingType_attr(const ST_String& _NumberingType_attr);
    const ST_String& get_NumberingType_attr() const;
    bool has_ZOrder_attr() const;
    void set_ZOrder_attr(const ST_String& _ZOrder_attr);
    const ST_String& get_ZOrder_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_SIZE() const;
        CT_SIZE* mutable_SIZE();
        const CT_SIZE& get_SIZE() const;
    protected:
    private:
        bool m_has_SIZE;
        CT_SIZE* m_SIZE;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_POSITION() const;
        CT_POSITION* mutable_POSITION();
        const CT_POSITION& get_POSITION() const;
    protected:
    private:
        bool m_has_POSITION;
        CT_POSITION* m_POSITION;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_OUTSIDEMARGIN() const;
        CT_OUTSIDEMARGIN* mutable_OUTSIDEMARGIN();
        const CT_OUTSIDEMARGIN& get_OUTSIDEMARGIN() const;
    protected:
    private:
        bool m_has_OUTSIDEMARGIN;
        CT_OUTSIDEMARGIN* m_OUTSIDEMARGIN;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    vector<ChildGroup_3*> m_childGroupList_3;
    static CT_SHAPEOBJECT* default_instance_;
    bool m_has_InstId_attr;
    ST_String* m_InstId_attr;
    bool m_has_Lock_attr;
    ST_String* m_Lock_attr;
    bool m_has_NumberingType_attr;
    ST_String* m_NumberingType_attr;
    bool m_has_ZOrder_attr;
    ST_String* m_ZOrder_attr;
};

class CT_INSIDEMARGIN: public XSD::ComplexType
{
public:
    CT_INSIDEMARGIN();
    ~CT_INSIDEMARGIN();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_INSIDEMARGIN& default_instance();
    bool has_Left_attr() const;
    void set_Left_attr(const ST_String& _Left_attr);
    const ST_String& get_Left_attr() const;
    bool has_Right_attr() const;
    void set_Right_attr(const ST_String& _Right_attr);
    const ST_String& get_Right_attr() const;
    bool has_Top_attr() const;
    void set_Top_attr(const ST_String& _Top_attr);
    const ST_String& get_Top_attr() const;
    bool has_Bottom_attr() const;
    void set_Bottom_attr(const ST_String& _Bottom_attr);
    const ST_String& get_Bottom_attr() const;
protected:
private:
    static CT_INSIDEMARGIN* default_instance_;
    bool m_has_Left_attr;
    ST_String* m_Left_attr;
    bool m_has_Right_attr;
    ST_String* m_Right_attr;
    bool m_has_Top_attr;
    ST_String* m_Top_attr;
    bool m_has_Bottom_attr;
    ST_String* m_Bottom_attr;
};

class CT_CELLZONE: public XSD::ComplexType
{
public:
    CT_CELLZONE();
    ~CT_CELLZONE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CELLZONE& default_instance();
    bool has_StartRowAddr_attr() const;
    void set_StartRowAddr_attr(const ST_String& _StartRowAddr_attr);
    const ST_String& get_StartRowAddr_attr() const;
    bool has_StartColAddr_attr() const;
    void set_StartColAddr_attr(const ST_String& _StartColAddr_attr);
    const ST_String& get_StartColAddr_attr() const;
    bool has_EndRowAddr_attr() const;
    void set_EndRowAddr_attr(const ST_String& _EndRowAddr_attr);
    const ST_String& get_EndRowAddr_attr() const;
    bool has_EndColAddr_attr() const;
    void set_EndColAddr_attr(const ST_String& _EndColAddr_attr);
    const ST_String& get_EndColAddr_attr() const;
    bool has_BorderFill_attr() const;
    void set_BorderFill_attr(const ST_String& _BorderFill_attr);
    const ST_String& get_BorderFill_attr() const;
protected:
private:
    static CT_CELLZONE* default_instance_;
    bool m_has_StartRowAddr_attr;
    ST_String* m_StartRowAddr_attr;
    bool m_has_StartColAddr_attr;
    ST_String* m_StartColAddr_attr;
    bool m_has_EndRowAddr_attr;
    ST_String* m_EndRowAddr_attr;
    bool m_has_EndColAddr_attr;
    ST_String* m_EndColAddr_attr;
    bool m_has_BorderFill_attr;
    ST_String* m_BorderFill_attr;
};

class CT_CELLZONELIST: public XSD::ComplexType
{
public:
    CT_CELLZONELIST();
    ~CT_CELLZONELIST();
    CT_CELLZONE* add_CELLZONE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CELLZONELIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_CELLZONE() const;
        CT_CELLZONE* mutable_CELLZONE();
        const CT_CELLZONE& get_CELLZONE() const;
    protected:
    private:
        bool m_has_CELLZONE;
        CT_CELLZONE* m_CELLZONE;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CELLZONELIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_ROW: public XSD::ComplexType
{
public:
    CT_ROW();
    ~CT_ROW();
    CT_CELL* add_CELL();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ROW& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_CELL() const;
        CT_CELL* mutable_CELL();
        const CT_CELL& get_CELL() const;
    protected:
    private:
        bool m_has_CELL;
        CT_CELL* m_CELL;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_ROW* default_instance_;
};

class CT_CELL: public XSD::ComplexType
{
public:
    CT_CELL();
    ~CT_CELL();
    CT_CELLMARGIN* add_CELLMARGIN();
    CT_PARALIST* add_PARALIST();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CELL& default_instance();
    bool has_Name_attr() const;
    void set_Name_attr(const ST_String& _Name_attr);
    const ST_String& get_Name_attr() const;
    bool has_ColAddr_attr() const;
    void set_ColAddr_attr(const ST_UnsignedDecimalNumber& _ColAddr_attr);
    const ST_UnsignedDecimalNumber& get_ColAddr_attr() const;
    bool has_RowAddr_attr() const;
    void set_RowAddr_attr(const ST_UnsignedDecimalNumber& _RowAddr_attr);
    const ST_UnsignedDecimalNumber& get_RowAddr_attr() const;
    bool has_ColSpan_attr() const;
    void set_ColSpan_attr(const ST_UnsignedDecimalNumber& _ColSpan_attr);
    const ST_UnsignedDecimalNumber& get_ColSpan_attr() const;
    bool has_RowSpan_attr() const;
    void set_RowSpan_attr(const ST_UnsignedDecimalNumber& _RowSpan_attr);
    const ST_UnsignedDecimalNumber& get_RowSpan_attr() const;
    bool has_Width_attr() const;
    void set_Width_attr(const ST_UnsignedDecimalNumber& _Width_attr);
    const ST_UnsignedDecimalNumber& get_Width_attr() const;
    bool has_Height_attr() const;
    void set_Height_attr(const ST_UnsignedDecimalNumber& _Height_attr);
    const ST_UnsignedDecimalNumber& get_Height_attr() const;
    bool has_Header_attr() const;
    void set_Header_attr(const ST_OnOff& _Header_attr);
    const ST_OnOff& get_Header_attr() const;
    bool has_HasMargin_attr() const;
    void set_HasMargin_attr(const ST_OnOff& _HasMargin_attr);
    const ST_OnOff& get_HasMargin_attr() const;
    bool has_Protect_attr() const;
    void set_Protect_attr(const ST_OnOff& _Protect_attr);
    const ST_OnOff& get_Protect_attr() const;
    bool has_Editable_attr() const;
    void set_Editable_attr(const ST_OnOff& _Editable_attr);
    const ST_OnOff& get_Editable_attr() const;
    bool has_Dirty_attr() const;
    void set_Dirty_attr(const ST_OnOff& _Dirty_attr);
    const ST_OnOff& get_Dirty_attr() const;
    bool has_BorderFill_attr() const;
    void set_BorderFill_attr(const ST_String& _BorderFill_attr);
    const ST_String& get_BorderFill_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_CELLMARGIN() const;
        CT_CELLMARGIN* mutable_CELLMARGIN();
        const CT_CELLMARGIN& get_CELLMARGIN() const;
    protected:
    private:
        bool m_has_CELLMARGIN;
        CT_CELLMARGIN* m_CELLMARGIN;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_PARALIST() const;
        CT_PARALIST* mutable_PARALIST();
        const CT_PARALIST& get_PARALIST() const;
    protected:
    private:
        bool m_has_PARALIST;
        CT_PARALIST* m_PARALIST;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    static CT_CELL* default_instance_;
    bool m_has_Name_attr;
    ST_String* m_Name_attr;
    bool m_has_ColAddr_attr;
    ST_UnsignedDecimalNumber* m_ColAddr_attr;
    bool m_has_RowAddr_attr;
    ST_UnsignedDecimalNumber* m_RowAddr_attr;
    bool m_has_ColSpan_attr;
    ST_UnsignedDecimalNumber* m_ColSpan_attr;
    bool m_has_RowSpan_attr;
    ST_UnsignedDecimalNumber* m_RowSpan_attr;
    bool m_has_Width_attr;
    ST_UnsignedDecimalNumber* m_Width_attr;
    bool m_has_Height_attr;
    ST_UnsignedDecimalNumber* m_Height_attr;
    bool m_has_Header_attr;
    ST_OnOff* m_Header_attr;
    bool m_has_HasMargin_attr;
    ST_OnOff* m_HasMargin_attr;
    bool m_has_Protect_attr;
    ST_OnOff* m_Protect_attr;
    bool m_has_Editable_attr;
    ST_OnOff* m_Editable_attr;
    bool m_has_Dirty_attr;
    ST_OnOff* m_Dirty_attr;
    bool m_has_BorderFill_attr;
    ST_String* m_BorderFill_attr;
};

class CT_CELLMARGIN: public XSD::ComplexType
{
public:
    CT_CELLMARGIN();
    ~CT_CELLMARGIN();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CELLMARGIN& default_instance();
    bool has_Left_attr() const;
    void set_Left_attr(const ST_UnsignedDecimalNumber& _Left_attr);
    const ST_UnsignedDecimalNumber& get_Left_attr() const;
    bool has_Right_attr() const;
    void set_Right_attr(const ST_UnsignedDecimalNumber& _Right_attr);
    const ST_UnsignedDecimalNumber& get_Right_attr() const;
    bool has_Top_attr() const;
    void set_Top_attr(const ST_UnsignedDecimalNumber& _Top_attr);
    const ST_UnsignedDecimalNumber& get_Top_attr() const;
    bool has_Bottom_attr() const;
    void set_Bottom_attr(const ST_UnsignedDecimalNumber& _Bottom_attr);
    const ST_UnsignedDecimalNumber& get_Bottom_attr() const;
protected:
private:
    static CT_CELLMARGIN* default_instance_;
    bool m_has_Left_attr;
    ST_UnsignedDecimalNumber* m_Left_attr;
    bool m_has_Right_attr;
    ST_UnsignedDecimalNumber* m_Right_attr;
    bool m_has_Top_attr;
    ST_UnsignedDecimalNumber* m_Top_attr;
    bool m_has_Bottom_attr;
    ST_UnsignedDecimalNumber* m_Bottom_attr;
};

class CT_PARALIST: public XSD::ComplexType
{
public:
    CT_PARALIST();
    ~CT_PARALIST();
    CT_P* add_P();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PARALIST& default_instance();
    bool has_TextDirection_attr() const;
    void set_TextDirection_attr(const ST_OnOff& _TextDirection_attr);
    const ST_OnOff& get_TextDirection_attr() const;
    bool has_LineWrap_attr() const;
    void set_LineWrap_attr(const ST_LineWrapType& _LineWrap_attr);
    const ST_LineWrapType& get_LineWrap_attr() const;
    bool has_VertAlign_attr() const;
    void set_VertAlign_attr(const ST_VertAlignType1& _VertAlign_attr);
    const ST_VertAlignType1& get_VertAlign_attr() const;
    bool has_LinkListID_attr() const;
    void set_LinkListID_attr(const ST_String& _LinkListID_attr);
    const ST_String& get_LinkListID_attr() const;
    bool has_LinkListIDNext_attr() const;
    void set_LinkListIDNext_attr(const ST_String& _LinkListIDNext_attr);
    const ST_String& get_LinkListIDNext_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_P() const;
        CT_P* mutable_P();
        const CT_P& get_P() const;
    protected:
    private:
        bool m_has_P;
        CT_P* m_P;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_PARALIST* default_instance_;
    bool m_has_TextDirection_attr;
    ST_OnOff* m_TextDirection_attr;
    bool m_has_LineWrap_attr;
    ST_LineWrapType* m_LineWrap_attr;
    bool m_has_VertAlign_attr;
    ST_VertAlignType1* m_VertAlign_attr;
    bool m_has_LinkListID_attr;
    ST_String* m_LinkListID_attr;
    bool m_has_LinkListIDNext_attr;
    ST_String* m_LinkListIDNext_attr;
};

class CT_EQUATION: public XSD::ComplexType
{
public:
    CT_EQUATION();
    ~CT_EQUATION();
    bool has_SCRIPT() const;
    ST_String* mutable_SCRIPT();
    const ST_String& get_SCRIPT() const;
    CT_SHAPEOBJECT* add_SHAPEOBJECT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_EQUATION& default_instance();
    bool has_BaseLine_attr() const;
    void set_BaseLine_attr(const ST_String& _BaseLine_attr);
    const ST_String& get_BaseLine_attr() const;
    bool has_BaseUnit_attr() const;
    void set_BaseUnit_attr(const ST_String& _BaseUnit_attr);
    const ST_String& get_BaseUnit_attr() const;
    bool has_LineMode_attr() const;
    void set_LineMode_attr(const ST_String& _LineMode_attr);
    const ST_String& get_LineMode_attr() const;
    bool has_TextColor_attr() const;
    void set_TextColor_attr(const ST_String& _TextColor_attr);
    const ST_String& get_TextColor_attr() const;
    bool has_Version_attr() const;
    void set_Version_attr(const ST_String& _Version_attr);
    const ST_String& get_Version_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_SHAPEOBJECT() const;
        CT_SHAPEOBJECT* mutable_SHAPEOBJECT();
        const CT_SHAPEOBJECT& get_SHAPEOBJECT() const;
    protected:
    private:
        bool m_has_SHAPEOBJECT;
        CT_SHAPEOBJECT* m_SHAPEOBJECT;
    };
    bool m_has_SCRIPT;
    ST_String* m_SCRIPT;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_EQUATION* default_instance_;
    bool m_has_BaseLine_attr;
    ST_String* m_BaseLine_attr;
    bool m_has_BaseUnit_attr;
    ST_String* m_BaseUnit_attr;
    bool m_has_LineMode_attr;
    ST_String* m_LineMode_attr;
    bool m_has_TextColor_attr;
    ST_String* m_TextColor_attr;
    bool m_has_Version_attr;
    ST_String* m_Version_attr;
};

class CT_ID: public XSD::ComplexType
{
public:
    CT_ID();
    ~CT_ID();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ID& default_instance();
    bool has_ID_attr() const;
    void set_ID_attr(const ST_ID& _ID_attr);
    const ST_ID& get_ID_attr() const;
protected:
private:
    static CT_ID* default_instance_;
    bool m_has_ID_attr;
    ST_ID* m_ID_attr;
};

class CT_BINITEM: public XSD::ComplexType
{
public:
    CT_BINITEM();
    ~CT_BINITEM();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BINITEM& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_BINITEM_TYPE& _Type_attr);
    const ST_BINITEM_TYPE& get_Type_attr() const;
    bool has_APath_attr() const;
    void set_APath_attr(const ST_String& _APath_attr);
    const ST_String& get_APath_attr() const;
    bool has_RPath_attr() const;
    void set_RPath_attr(const ST_String& _RPath_attr);
    const ST_String& get_RPath_attr() const;
    bool has_BinData_attr() const;
    void set_BinData_attr(const ST_String& _BinData_attr);
    const ST_String& get_BinData_attr() const;
    bool has_Format_attr() const;
    void set_Format_attr(const ST_BINITEM_FORMAT& _Format_attr);
    const ST_BINITEM_FORMAT& get_Format_attr() const;
protected:
private:
    static CT_BINITEM* default_instance_;
    bool m_has_Type_attr;
    ST_BINITEM_TYPE* m_Type_attr;
    bool m_has_APath_attr;
    ST_String* m_APath_attr;
    bool m_has_RPath_attr;
    ST_String* m_RPath_attr;
    bool m_has_BinData_attr;
    ST_String* m_BinData_attr;
    bool m_has_Format_attr;
    ST_BINITEM_FORMAT* m_Format_attr;
};

class CT_TITLE: public XSD::ComplexType
{
public:
    CT_TITLE();
    ~CT_TITLE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TITLE& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_TITLE* default_instance_;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_SUBJECT: public XSD::ComplexType
{
public:
    CT_SUBJECT();
    ~CT_SUBJECT();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SUBJECT& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_SUBJECT* default_instance_;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_AUTHOR: public XSD::ComplexType
{
public:
    CT_AUTHOR();
    ~CT_AUTHOR();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AUTHOR& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_AUTHOR* default_instance_;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_DATE: public XSD::ComplexType
{
public:
    CT_DATE();
    ~CT_DATE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DATE& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_DATE* default_instance_;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_KEYWORDS: public XSD::ComplexType
{
public:
    CT_KEYWORDS();
    ~CT_KEYWORDS();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_KEYWORDS& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_KEYWORDS* default_instance_;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_COMMENTS: public XSD::ComplexType
{
public:
    CT_COMMENTS();
    ~CT_COMMENTS();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_COMMENTS& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
protected:
private:
    static CT_COMMENTS* default_instance_;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
};

class CT_FORBIDDENSTRING: public XSD::ComplexType
{
public:
    CT_FORBIDDENSTRING();
    ~CT_FORBIDDENSTRING();
    bool has_FORBIDDEN() const;
    ST_String* mutable_FORBIDDEN();
    const ST_String& get_FORBIDDEN() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FORBIDDENSTRING& default_instance();
protected:
private:
    bool m_has_FORBIDDEN;
    ST_String* m_FORBIDDEN;
    static CT_FORBIDDENSTRING* default_instance_;
};

class CT_DOCSUMMARY: public XSD::ComplexType
{
public:
    CT_DOCSUMMARY();
    ~CT_DOCSUMMARY();
    bool has_TITLE() const;
    CT_TITLE* mutable_TITLE();
    const CT_TITLE& get_TITLE() const;
    bool has_SUBJECT() const;
    CT_SUBJECT* mutable_SUBJECT();
    const CT_SUBJECT& get_SUBJECT() const;
    bool has_AUTHOR() const;
    CT_AUTHOR* mutable_AUTHOR();
    const CT_AUTHOR& get_AUTHOR() const;
    bool has_DATE() const;
    CT_DATE* mutable_DATE();
    const CT_DATE& get_DATE() const;
    bool has_KEYWORDS() const;
    CT_KEYWORDS* mutable_KEYWORDS();
    const CT_KEYWORDS& get_KEYWORDS() const;
    bool has_COMMENTS() const;
    CT_COMMENTS* mutable_COMMENTS();
    const CT_COMMENTS& get_COMMENTS() const;
    bool has_FORBIDDENSTRING() const;
    CT_FORBIDDENSTRING* mutable_FORBIDDENSTRING();
    const CT_FORBIDDENSTRING& get_FORBIDDENSTRING() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DOCSUMMARY& default_instance();
protected:
private:
    bool m_has_TITLE;
    CT_TITLE* m_TITLE;
    bool m_has_SUBJECT;
    CT_SUBJECT* m_SUBJECT;
    bool m_has_AUTHOR;
    CT_AUTHOR* m_AUTHOR;
    bool m_has_DATE;
    CT_DATE* m_DATE;
    bool m_has_KEYWORDS;
    CT_KEYWORDS* m_KEYWORDS;
    bool m_has_COMMENTS;
    CT_COMMENTS* m_COMMENTS;
    bool m_has_FORBIDDENSTRING;
    CT_FORBIDDENSTRING* m_FORBIDDENSTRING;
    static CT_DOCSUMMARY* default_instance_;
};

class CT_BEGINNUMBER: public XSD::ComplexType
{
public:
    CT_BEGINNUMBER();
    ~CT_BEGINNUMBER();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BEGINNUMBER& default_instance();
    bool has_Endnote_attr() const;
    void set_Endnote_attr(const ST_UnsignedDecimalNumber& _Endnote_attr);
    const ST_UnsignedDecimalNumber& get_Endnote_attr() const;
    bool has_Equation_attr() const;
    void set_Equation_attr(const ST_UnsignedDecimalNumber& _Equation_attr);
    const ST_UnsignedDecimalNumber& get_Equation_attr() const;
    bool has_Footnote_attr() const;
    void set_Footnote_attr(const ST_UnsignedDecimalNumber& _Footnote_attr);
    const ST_UnsignedDecimalNumber& get_Footnote_attr() const;
    bool has_Page_attr() const;
    void set_Page_attr(const ST_UnsignedDecimalNumber& _Page_attr);
    const ST_UnsignedDecimalNumber& get_Page_attr() const;
    bool has_Picture_attr() const;
    void set_Picture_attr(const ST_UnsignedDecimalNumber& _Picture_attr);
    const ST_UnsignedDecimalNumber& get_Picture_attr() const;
    bool has_Table_attr() const;
    void set_Table_attr(const ST_UnsignedDecimalNumber& _Table_attr);
    const ST_UnsignedDecimalNumber& get_Table_attr() const;
    bool has_TotalPage_attr() const;
    void set_TotalPage_attr(const ST_UnsignedDecimalNumber& _TotalPage_attr);
    const ST_UnsignedDecimalNumber& get_TotalPage_attr() const;
protected:
private:
    static CT_BEGINNUMBER* default_instance_;
    bool m_has_Endnote_attr;
    ST_UnsignedDecimalNumber* m_Endnote_attr;
    bool m_has_Equation_attr;
    ST_UnsignedDecimalNumber* m_Equation_attr;
    bool m_has_Footnote_attr;
    ST_UnsignedDecimalNumber* m_Footnote_attr;
    bool m_has_Page_attr;
    ST_UnsignedDecimalNumber* m_Page_attr;
    bool m_has_Picture_attr;
    ST_UnsignedDecimalNumber* m_Picture_attr;
    bool m_has_Table_attr;
    ST_UnsignedDecimalNumber* m_Table_attr;
    bool m_has_TotalPage_attr;
    ST_UnsignedDecimalNumber* m_TotalPage_attr;
};

class CT_CARETPOS: public XSD::ComplexType
{
public:
    CT_CARETPOS();
    ~CT_CARETPOS();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CARETPOS& default_instance();
    bool has_List_attr() const;
    void set_List_attr(const ST_String& _List_attr);
    const ST_String& get_List_attr() const;
    bool has_Para_attr() const;
    void set_Para_attr(const ST_String& _Para_attr);
    const ST_String& get_Para_attr() const;
    bool has_Pos_attr() const;
    void set_Pos_attr(const ST_String& _Pos_attr);
    const ST_String& get_Pos_attr() const;
protected:
private:
    static CT_CARETPOS* default_instance_;
    bool m_has_List_attr;
    ST_String* m_List_attr;
    bool m_has_Para_attr;
    ST_String* m_Para_attr;
    bool m_has_Pos_attr;
    ST_String* m_Pos_attr;
};

class CT_DOCSETTING: public XSD::ComplexType
{
public:
    CT_DOCSETTING();
    ~CT_DOCSETTING();
    CT_BEGINNUMBER* add_BEGINNUMBER();
    CT_CARETPOS* add_CARETPOS();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DOCSETTING& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_BEGINNUMBER() const;
        CT_BEGINNUMBER* mutable_BEGINNUMBER();
        const CT_BEGINNUMBER& get_BEGINNUMBER() const;
    protected:
    private:
        bool m_has_BEGINNUMBER;
        CT_BEGINNUMBER* m_BEGINNUMBER;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_CARETPOS() const;
        CT_CARETPOS* mutable_CARETPOS();
        const CT_CARETPOS& get_CARETPOS() const;
    protected:
    private:
        bool m_has_CARETPOS;
        CT_CARETPOS* m_CARETPOS;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    static CT_DOCSETTING* default_instance_;
};

class CT_BINDATALIST: public XSD::ComplexType
{
public:
    CT_BINDATALIST();
    ~CT_BINDATALIST();
    CT_BINITEM* add_BINITEM();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BINDATALIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_BINITEM() const;
        CT_BINITEM* mutable_BINITEM();
        const CT_BINITEM& get_BINITEM() const;
    protected:
    private:
        bool m_has_BINITEM;
        CT_BINITEM* m_BINITEM;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_BINDATALIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_FONTFACE: public XSD::ComplexType
{
public:
    CT_FONTFACE();
    ~CT_FONTFACE();
    bool has_FONT() const;
    CT_FONT* mutable_FONT();
    const CT_FONT& get_FONT() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FONTFACE& default_instance();
    bool has_Lang_attr() const;
    void set_Lang_attr(const ST_String& _Lang_attr);
    const ST_String& get_Lang_attr() const;
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    bool m_has_FONT;
    CT_FONT* m_FONT;
    static CT_FONTFACE* default_instance_;
    bool m_has_Lang_attr;
    ST_String* m_Lang_attr;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_FACENAMELIST: public XSD::ComplexType
{
public:
    CT_FACENAMELIST();
    ~CT_FACENAMELIST();
    CT_FONTFACE* add_FONTFACE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FACENAMELIST& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_FONTFACE() const;
        CT_FONTFACE* mutable_FONTFACE();
        const CT_FONTFACE& get_FONTFACE() const;
    protected:
    private:
        bool m_has_FONTFACE;
        CT_FONTFACE* m_FONTFACE;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_FACENAMELIST* default_instance_;
};

class CT_BORDERFILLLIST: public XSD::ComplexType
{
public:
    CT_BORDERFILLLIST();
    ~CT_BORDERFILLLIST();
    CT_BORDERFILL* add_BORDERFILL();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BORDERFILLLIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_BORDERFILL() const;
        CT_BORDERFILL* mutable_BORDERFILL();
        const CT_BORDERFILL& get_BORDERFILL() const;
    protected:
    private:
        bool m_has_BORDERFILL;
        CT_BORDERFILL* m_BORDERFILL;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_BORDERFILLLIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_CHARSHAPELIST: public XSD::ComplexType
{
public:
    CT_CHARSHAPELIST();
    ~CT_CHARSHAPELIST();
    CT_CHARSHAPE* add_CHARSHAPE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CHARSHAPELIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_CHARSHAPE() const;
        CT_CHARSHAPE* mutable_CHARSHAPE();
        const CT_CHARSHAPE& get_CHARSHAPE() const;
    protected:
    private:
        bool m_has_CHARSHAPE;
        CT_CHARSHAPE* m_CHARSHAPE;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CHARSHAPELIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_TABDEFLIST: public XSD::ComplexType
{
public:
    CT_TABDEFLIST();
    ~CT_TABDEFLIST();
    CT_TABDEF* add_TABDEF();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TABDEFLIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_TABDEF() const;
        CT_TABDEF* mutable_TABDEF();
        const CT_TABDEF& get_TABDEF() const;
    protected:
    private:
        bool m_has_TABDEF;
        CT_TABDEF* m_TABDEF;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_TABDEFLIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_NUMBERINGLIST: public XSD::ComplexType
{
public:
    CT_NUMBERINGLIST();
    ~CT_NUMBERINGLIST();
    CT_NUMBERING* add_NUMBERING();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NUMBERINGLIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_NUMBERING() const;
        CT_NUMBERING* mutable_NUMBERING();
        const CT_NUMBERING& get_NUMBERING() const;
    protected:
    private:
        bool m_has_NUMBERING;
        CT_NUMBERING* m_NUMBERING;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_NUMBERINGLIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_BULLETLIST: public XSD::ComplexType
{
public:
    CT_BULLETLIST();
    ~CT_BULLETLIST();
    CT_BULLET* add_BULLET();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BULLETLIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_BULLET() const;
        CT_BULLET* mutable_BULLET();
        const CT_BULLET& get_BULLET() const;
    protected:
    private:
        bool m_has_BULLET;
        CT_BULLET* m_BULLET;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_BULLETLIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_PARASHAPELIST: public XSD::ComplexType
{
public:
    CT_PARASHAPELIST();
    ~CT_PARASHAPELIST();
    CT_PARASHAPE* add_PARASHAPE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PARASHAPELIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_PARASHAPE() const;
        CT_PARASHAPE* mutable_PARASHAPE();
        const CT_PARASHAPE& get_PARASHAPE() const;
    protected:
    private:
        bool m_has_PARASHAPE;
        CT_PARASHAPE* m_PARASHAPE;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_PARASHAPELIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_STYLELIST: public XSD::ComplexType
{
public:
    CT_STYLELIST();
    ~CT_STYLELIST();
    CT_STYLE* add_STYLE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_STYLELIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_STYLE() const;
        CT_STYLE* mutable_STYLE();
        const CT_STYLE& get_STYLE() const;
    protected:
    private:
        bool m_has_STYLE;
        CT_STYLE* m_STYLE;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_STYLELIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_MEMOSHAPELIST: public XSD::ComplexType
{
public:
    CT_MEMOSHAPELIST();
    ~CT_MEMOSHAPELIST();
    CT_MEMO* add_MEMO();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MEMOSHAPELIST& default_instance();
    bool has_Count_attr() const;
    void set_Count_attr(const ST_UnsignedDecimalNumber& _Count_attr);
    const ST_UnsignedDecimalNumber& get_Count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_MEMO() const;
        CT_MEMO* mutable_MEMO();
        const CT_MEMO& get_MEMO() const;
    protected:
    private:
        bool m_has_MEMO;
        CT_MEMO* m_MEMO;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_MEMOSHAPELIST* default_instance_;
    bool m_has_Count_attr;
    ST_UnsignedDecimalNumber* m_Count_attr;
};

class CT_MAPPINGTABLE: public XSD::ComplexType
{
public:
    CT_MAPPINGTABLE();
    ~CT_MAPPINGTABLE();
    CT_BINDATALIST* add_BINDATALIST();
    CT_FACENAMELIST* add_FACENAMELIST();
    CT_BORDERFILLLIST* add_BORDERFILLLIST();
    CT_CHARSHAPELIST* add_CHARSHAPELIST();
    CT_TABDEFLIST* add_TABDEFLIST();
    CT_NUMBERINGLIST* add_NUMBERINGLIST();
    CT_BULLETLIST* add_BULLETLIST();
    CT_PARASHAPELIST* add_PARASHAPELIST();
    CT_STYLELIST* add_STYLELIST();
    CT_MEMOSHAPELIST* add_MEMOSHAPELIST();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MAPPINGTABLE& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_BINDATALIST() const;
        CT_BINDATALIST* mutable_BINDATALIST();
        const CT_BINDATALIST& get_BINDATALIST() const;
    protected:
    private:
        bool m_has_BINDATALIST;
        CT_BINDATALIST* m_BINDATALIST;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_FACENAMELIST() const;
        CT_FACENAMELIST* mutable_FACENAMELIST();
        const CT_FACENAMELIST& get_FACENAMELIST() const;
    protected:
    private:
        bool m_has_FACENAMELIST;
        CT_FACENAMELIST* m_FACENAMELIST;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_BORDERFILLLIST() const;
        CT_BORDERFILLLIST* mutable_BORDERFILLLIST();
        const CT_BORDERFILLLIST& get_BORDERFILLLIST() const;
    protected:
    private:
        bool m_has_BORDERFILLLIST;
        CT_BORDERFILLLIST* m_BORDERFILLLIST;
    };
    class ChildGroup_4
    {
    public:
        ChildGroup_4();
        bool has_CHARSHAPELIST() const;
        CT_CHARSHAPELIST* mutable_CHARSHAPELIST();
        const CT_CHARSHAPELIST& get_CHARSHAPELIST() const;
    protected:
    private:
        bool m_has_CHARSHAPELIST;
        CT_CHARSHAPELIST* m_CHARSHAPELIST;
    };
    class ChildGroup_5
    {
    public:
        ChildGroup_5();
        bool has_TABDEFLIST() const;
        CT_TABDEFLIST* mutable_TABDEFLIST();
        const CT_TABDEFLIST& get_TABDEFLIST() const;
    protected:
    private:
        bool m_has_TABDEFLIST;
        CT_TABDEFLIST* m_TABDEFLIST;
    };
    class ChildGroup_6
    {
    public:
        ChildGroup_6();
        bool has_NUMBERINGLIST() const;
        CT_NUMBERINGLIST* mutable_NUMBERINGLIST();
        const CT_NUMBERINGLIST& get_NUMBERINGLIST() const;
    protected:
    private:
        bool m_has_NUMBERINGLIST;
        CT_NUMBERINGLIST* m_NUMBERINGLIST;
    };
    class ChildGroup_7
    {
    public:
        ChildGroup_7();
        bool has_BULLETLIST() const;
        CT_BULLETLIST* mutable_BULLETLIST();
        const CT_BULLETLIST& get_BULLETLIST() const;
    protected:
    private:
        bool m_has_BULLETLIST;
        CT_BULLETLIST* m_BULLETLIST;
    };
    class ChildGroup_8
    {
    public:
        ChildGroup_8();
        bool has_PARASHAPELIST() const;
        CT_PARASHAPELIST* mutable_PARASHAPELIST();
        const CT_PARASHAPELIST& get_PARASHAPELIST() const;
    protected:
    private:
        bool m_has_PARASHAPELIST;
        CT_PARASHAPELIST* m_PARASHAPELIST;
    };
    class ChildGroup_9
    {
    public:
        ChildGroup_9();
        bool has_STYLELIST() const;
        CT_STYLELIST* mutable_STYLELIST();
        const CT_STYLELIST& get_STYLELIST() const;
    protected:
    private:
        bool m_has_STYLELIST;
        CT_STYLELIST* m_STYLELIST;
    };
    class ChildGroup_10
    {
    public:
        ChildGroup_10();
        bool has_MEMOSHAPELIST() const;
        CT_MEMOSHAPELIST* mutable_MEMOSHAPELIST();
        const CT_MEMOSHAPELIST& get_MEMOSHAPELIST() const;
    protected:
    private:
        bool m_has_MEMOSHAPELIST;
        CT_MEMOSHAPELIST* m_MEMOSHAPELIST;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    vector<ChildGroup_3*> m_childGroupList_3;
    vector<ChildGroup_4*> m_childGroupList_4;
    vector<ChildGroup_5*> m_childGroupList_5;
    vector<ChildGroup_6*> m_childGroupList_6;
    vector<ChildGroup_7*> m_childGroupList_7;
    vector<ChildGroup_8*> m_childGroupList_8;
    vector<ChildGroup_9*> m_childGroupList_9;
    vector<ChildGroup_10*> m_childGroupList_10;
    static CT_MAPPINGTABLE* default_instance_;
};

class CT_HEAD: public XSD::ComplexType
{
public:
    CT_HEAD();
    ~CT_HEAD();
    bool has_DOCSUMMARY() const;
    CT_DOCSUMMARY* mutable_DOCSUMMARY();
    const CT_DOCSUMMARY& get_DOCSUMMARY() const;
    bool has_DOCSETTING() const;
    CT_DOCSETTING* mutable_DOCSETTING();
    const CT_DOCSETTING& get_DOCSETTING() const;
    bool has_MAPPINGTABLE() const;
    CT_MAPPINGTABLE* mutable_MAPPINGTABLE();
    const CT_MAPPINGTABLE& get_MAPPINGTABLE() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HEAD& default_instance();
    bool has_SecCnt_attr() const;
    void set_SecCnt_attr(const ST_UnsignedDecimalNumber& _SecCnt_attr);
    const ST_UnsignedDecimalNumber& get_SecCnt_attr() const;
protected:
private:
    bool m_has_DOCSUMMARY;
    CT_DOCSUMMARY* m_DOCSUMMARY;
    bool m_has_DOCSETTING;
    CT_DOCSETTING* m_DOCSETTING;
    bool m_has_MAPPINGTABLE;
    CT_MAPPINGTABLE* m_MAPPINGTABLE;
    static CT_HEAD* default_instance_;
    bool m_has_SecCnt_attr;
    ST_UnsignedDecimalNumber* m_SecCnt_attr;
};

class CT_SECTION: public XSD::ComplexType
{
public:
    CT_SECTION();
    ~CT_SECTION();
    CT_P* add_P();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SECTION& default_instance();
    bool has_Id_attr() const;
    void set_Id_attr(const ST_ID& _Id_attr);
    const ST_ID& get_Id_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_P() const;
        CT_P* mutable_P();
        const CT_P& get_P() const;
    protected:
    private:
        bool m_has_P;
        CT_P* m_P;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SECTION* default_instance_;
    bool m_has_Id_attr;
    ST_ID* m_Id_attr;
};

class CT_BODY: public XSD::ComplexType
{
public:
    CT_BODY();
    ~CT_BODY();
    CT_SECTION* add_SECTION();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BODY& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_SECTION() const;
        CT_SECTION* mutable_SECTION();
        const CT_SECTION& get_SECTION() const;
    protected:
    private:
        bool m_has_SECTION;
        CT_SECTION* m_SECTION;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_BODY* default_instance_;
};

class CT_SCRIPTCODE: public XSD::ComplexType
{
public:
    CT_SCRIPTCODE();
    ~CT_SCRIPTCODE();
    bool has_SCRIPTHEADER() const;
    ST_String* mutable_SCRIPTHEADER();
    const ST_String& get_SCRIPTHEADER() const;
    bool has_SCRIPTSOURCE() const;
    ST_String* mutable_SCRIPTSOURCE();
    const ST_String& get_SCRIPTSOURCE() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SCRIPTCODE& default_instance();
    bool has_Type_attr() const;
    void set_Type_attr(const ST_String& _Type_attr);
    const ST_String& get_Type_attr() const;
    bool has_Version_attr() const;
    void set_Version_attr(const ST_String& _Version_attr);
    const ST_String& get_Version_attr() const;
protected:
private:
    bool m_has_SCRIPTHEADER;
    ST_String* m_SCRIPTHEADER;
    bool m_has_SCRIPTSOURCE;
    ST_String* m_SCRIPTSOURCE;
    static CT_SCRIPTCODE* default_instance_;
    bool m_has_Type_attr;
    ST_String* m_Type_attr;
    bool m_has_Version_attr;
    ST_String* m_Version_attr;
};

class CT_TAIL: public XSD::ComplexType
{
public:
    CT_TAIL();
    ~CT_TAIL();
    CT_SCRIPTCODE* add_SCRIPTCODE();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TAIL& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_SCRIPTCODE() const;
        CT_SCRIPTCODE* mutable_SCRIPTCODE();
        const CT_SCRIPTCODE& get_SCRIPTCODE() const;
    protected:
    private:
        bool m_has_SCRIPTCODE;
        CT_SCRIPTCODE* m_SCRIPTCODE;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_TAIL* default_instance_;
};

class CT_HWPML: public XSD::ComplexType
{
public:
    CT_HWPML();
    ~CT_HWPML();
    CT_HEAD* add_HEAD();
    CT_BODY* add_BODY();
    CT_TAIL* add_TAIL();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HWPML& default_instance();
    bool has_Style_attr() const;
    void set_Style_attr(const ST_HWPML_STYLE& _Style_attr);
    const ST_HWPML_STYLE& get_Style_attr() const;
    bool has_SubVersion_attr() const;
    void set_SubVersion_attr(const ST_String& _SubVersion_attr);
    const ST_String& get_SubVersion_attr() const;
    bool has_Version_attr() const;
    void set_Version_attr(const ST_String& _Version_attr);
    const ST_String& get_Version_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_HEAD() const;
        CT_HEAD* mutable_HEAD();
        const CT_HEAD& get_HEAD() const;
    protected:
    private:
        bool m_has_HEAD;
        CT_HEAD* m_HEAD;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_BODY() const;
        CT_BODY* mutable_BODY();
        const CT_BODY& get_BODY() const;
    protected:
    private:
        bool m_has_BODY;
        CT_BODY* m_BODY;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_TAIL() const;
        CT_TAIL* mutable_TAIL();
        const CT_TAIL& get_TAIL() const;
    protected:
    private:
        bool m_has_TAIL;
        CT_TAIL* m_TAIL;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    vector<ChildGroup_3*> m_childGroupList_3;
    static CT_HWPML* default_instance_;
    bool m_has_Style_attr;
    ST_HWPML_STYLE* m_Style_attr;
    bool m_has_SubVersion_attr;
    ST_String* m_SubVersion_attr;
    bool m_has_Version_attr;
    ST_String* m_Version_attr;
};

class HWPML_element: public Element
{
public:
    HWPML_element();
    ~HWPML_element();
    CT_HEAD* add_HEAD();
    CT_BODY* add_BODY();
    CT_TAIL* add_TAIL();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const HWPML_element& default_instance();
    bool has_Style_attr() const;
    void set_Style_attr(const ST_HWPML_STYLE& _Style_attr);
    const ST_HWPML_STYLE& get_Style_attr() const;
    bool has_SubVersion_attr() const;
    void set_SubVersion_attr(const ST_String& _SubVersion_attr);
    const ST_String& get_SubVersion_attr() const;
    bool has_Version_attr() const;
    void set_Version_attr(const ST_String& _Version_attr);
    const ST_String& get_Version_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_HEAD() const;
        CT_HEAD* mutable_HEAD();
        const CT_HEAD& get_HEAD() const;
    protected:
    private:
        bool m_has_HEAD;
        CT_HEAD* m_HEAD;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_BODY() const;
        CT_BODY* mutable_BODY();
        const CT_BODY& get_BODY() const;
    protected:
    private:
        bool m_has_BODY;
        CT_BODY* m_BODY;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_TAIL() const;
        CT_TAIL* mutable_TAIL();
        const CT_TAIL& get_TAIL() const;
    protected:
    private:
        bool m_has_TAIL;
        CT_TAIL* m_TAIL;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    vector<ChildGroup_2*> m_childGroupList_2;
    vector<ChildGroup_3*> m_childGroupList_3;
    static HWPML_element* default_instance_;
    bool m_has_Style_attr;
    ST_HWPML_STYLE* m_Style_attr;
    bool m_has_SubVersion_attr;
    ST_String* m_SubVersion_attr;
    bool m_has_Version_attr;
    ST_String* m_Version_attr;
};

}
#endif