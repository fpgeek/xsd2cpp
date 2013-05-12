namespace ns_w {
class Element;
class Attribute;
class ST_LongHexNumber;
class ST_ShortHexNumber;
class ST_UcharHexNumber;
class ST_DecimalNumberOrPercent;
class ST_UnqualifiedPercentage;
class ST_DecimalNumber;
class ST_SignedTwipsMeasure;
class ST_PixelsMeasure;
class ST_HpsMeasure;
class ST_SignedHpsMeasure;
class ST_DateTime;
class ST_MacroName;
class ST_EighthPointMeasure;
class ST_PointMeasure;
class ST_TextScale;
class ST_TextScalePercent;
class ST_TextScaleDecimal;
class ST_HighlightColor;
class ST_HexColorAuto;
class ST_HexColor;
class ST_Underline;
class ST_TextEffect;
class ST_Border;
class ST_Shd;
class ST_Em;
class ST_CombineBrackets;
class ST_HeightRule;
class ST_Wrap;
class ST_VAnchor;
class ST_HAnchor;
class ST_DropCap;
class ST_TabJc;
class ST_TabTlc;
class ST_LineSpacingRule;
class ST_Jc;
class ST_JcTable;
class ST_View;
class ST_Zoom;
class ST_Proof;
class ST_DocType;
class ST_DocProtect;
class ST_MailMergeDocType;
class ST_MailMergeDataType;
class ST_MailMergeDest;
class ST_MailMergeOdsoFMDFieldType;
class ST_TextDirection;
class ST_TextAlignment;
class ST_DisplacedByCustomXml;
class ST_AnnotationVMerge;
class ST_TextboxTightWrap;
class ST_ObjectDrawAspect;
class ST_ObjectUpdateMode;
class ST_FldCharType;
class ST_InfoTextType;
class ST_FFHelpTextVal;
class ST_FFStatusTextVal;
class ST_FFName;
class ST_FFTextType;
class ST_SectionMark;
class ST_NumberFormat;
class ST_PageOrientation;
class ST_PageBorderZOrder;
class ST_PageBorderDisplay;
class ST_PageBorderOffset;
class ST_ChapterSep;
class ST_LineNumberRestart;
class ST_VerticalJc;
class ST_DocGrid;
class ST_HdrFtr;
class ST_FtnEdn;
class ST_BrType;
class ST_BrClear;
class ST_PTabAlignment;
class ST_PTabRelativeTo;
class ST_PTabLeader;
class ST_ProofErr;
class ST_EdGrp;
class ST_Hint;
class ST_Theme;
class ST_RubyAlign;
class ST_Lock;
class ST_SdtDateMappingType;
class ST_Direction;
class ST_TblWidth;
class ST_MeasurementOrPercent;
class ST_Merge;
class ST_Cnf;
class ST_TblLayoutType;
class ST_TblOverlap;
class ST_FtnPos;
class ST_EdnPos;
class ST_RestartNumber;
class ST_MailMergeSourceType;
class ST_TargetScreenSz;
class ST_CharacterSpacing;
class ST_WmlColorSchemeIndex;
class ST_StyleSort;
class ST_FrameScrollbar;
class ST_FrameLayout;
class ST_LevelSuffix;
class ST_MultiLevelType;
class ST_TblStyleOverrideType;
class ST_StyleType;
class ST_FontFamily;
class ST_Pitch;
class ST_ThemeColor;
class ST_DocPartBehavior;
class ST_DocPartType;
class ST_DocPartGallery;
class ST_CaptionPos;
class CT_Empty;
class CT_OnOff;
class CT_LongHexNumber;
class CT_Charset;
class CT_DecimalNumber;
class CT_UnsignedDecimalNumber;
class CT_DecimalNumberOrPrecent;
class CT_TwipsMeasure;
class CT_SignedTwipsMeasure;
class CT_PixelsMeasure;
class CT_HpsMeasure;
class CT_SignedHpsMeasure;
class CT_MacroName;
class CT_String;
class CT_TextScale;
class CT_Highlight;
class CT_Color;
class CT_Lang;
class CT_Guid;
class CT_Underline;
class CT_TextEffect;
class CT_Border;
class CT_Shd;
class CT_VerticalAlignRun;
class CT_FitText;
class CT_Em;
class CT_Language;
class CT_EastAsianLayout;
class CT_FramePr;
class CT_TabStop;
class CT_Spacing;
class CT_Ind;
class CT_Jc;
class CT_JcTable;
class CT_View;
class CT_Zoom;
class CT_WritingStyle;
class CT_Proof;
class CT_DocType;
class CT_DocProtect;
class CT_MailMergeDocType;
class CT_MailMergeDataType;
class CT_MailMergeDest;
class CT_MailMergeOdsoFMDFieldType;
class CT_TrackChangesView;
class CT_Kinsoku;
class CT_TextDirection;
class CT_TextAlignment;
class CT_Markup;
class CT_TrackChange;
class CT_CellMergeTrackChange;
class CT_TrackChangeRange;
class CT_MarkupRange;
class CT_BookmarkRange;
class CT_Bookmark;
class CT_MoveBookmark;
class CT_Comment;
class CT_TrackChangeNumbering;
class CT_TblPrExChange;
class CT_TcPrChange;
class CT_TrPrChange;
class CT_TblGridChange;
class CT_TblPrChange;
class CT_SectPrChange;
class CT_PPrChange;
class CT_RPrChange;
class CT_ParaRPrChange;
class CT_RunTrackChange;
class CT_NumPr;
class CT_PBdr;
class CT_Tabs;
class CT_TextboxTightWrap;
class CT_PPr;
class CT_PPrBase;
class CT_PPrGeneral;
class CT_Control;
class CT_Background;
class CT_Rel;
class CT_Object;
class CT_Picture;
class CT_ObjectEmbed;
class CT_ObjectLink;
class CT_Drawing;
class CT_SimpleField;
class CT_FFTextType;
class CT_FFName;
class CT_FldChar;
class CT_Hyperlink;
class CT_FFData;
class CT_FFHelpText;
class CT_FFStatusText;
class CT_FFCheckBox;
class CT_FFDDList;
class CT_FFTextInput;
class CT_SectType;
class CT_PaperSource;
class CT_PageSz;
class CT_PageMar;
class CT_PageBorders;
class CT_PageBorder;
class CT_BottomPageBorder;
class CT_TopPageBorder;
class CT_LineNumber;
class CT_PageNumber;
class CT_Column;
class CT_Columns;
class CT_VerticalJc;
class CT_DocGrid;
class CT_HdrFtrRef;
class CT_HdrFtr;
class CT_SectPrBase;
class CT_SectPr;
class CT_Br;
class CT_PTab;
class CT_Sym;
class CT_ProofErr;
class CT_Perm;
class CT_PermStart;
class CT_Text;
class CT_R;
class CT_Fonts;
class CT_RPr;
class CT_MathCtrlIns;
class CT_MathCtrlDel;
class CT_RPrOriginal;
class CT_ParaRPrOriginal;
class CT_ParaRPr;
class CT_AltChunk;
class CT_AltChunkPr;
class CT_RubyAlign;
class CT_RubyPr;
class CT_RubyContent;
class CT_Ruby;
class CT_Lock;
class CT_SdtListItem;
class CT_SdtDateMappingType;
class CT_CalendarType;
class CT_SdtDate;
class CT_SdtComboBox;
class CT_SdtDocPart;
class CT_SdtDropDownList;
class CT_Placeholder;
class CT_SdtText;
class CT_DataBinding;
class CT_SdtPr;
class CT_SdtEndPr;
class CT_DirContentRun;
class CT_BdoContentRun;
class CT_SdtContentRun;
class CT_SdtContentBlock;
class CT_SdtContentRow;
class CT_SdtContentCell;
class CT_SdtBlock;
class CT_SdtRun;
class CT_SdtCell;
class CT_SdtRow;
class CT_Attr;
class CT_CustomXmlRun;
class CT_SmartTagRun;
class CT_CustomXmlBlock;
class CT_CustomXmlPr;
class CT_CustomXmlRow;
class CT_CustomXmlCell;
class CT_SmartTagPr;
class CT_P;
class CT_Height;
class CT_TblWidth;
class CT_TblGridCol;
class CT_TblGridBase;
class CT_TblGrid;
class CT_TcBorders;
class CT_TcMar;
class CT_VMerge;
class CT_HMerge;
class CT_TcPrBase;
class CT_TcPr;
class CT_TcPrInner;
class CT_Tc;
class CT_Cnf;
class CT_Headers;
class CT_TrPrBase;
class CT_TrPr;
class CT_Row;
class CT_TblLayoutType;
class CT_TblOverlap;
class CT_TblPPr;
class CT_TblCellMar;
class CT_TblBorders;
class CT_TblPrBase;
class CT_TblPr;
class CT_TblPrExBase;
class CT_TblPrEx;
class CT_Tbl;
class CT_TblLook;
class CT_FtnPos;
class CT_EdnPos;
class CT_NumFmt;
class CT_NumRestart;
class CT_FtnEdnRef;
class CT_FtnEdnSepRef;
class CT_FtnEdn;
class CT_FtnProps;
class CT_EdnProps;
class CT_FtnDocProps;
class CT_EdnDocProps;
class CT_RecipientData;
class CT_Base64Binary;
class CT_Recipients;
class CT_OdsoFieldMapData;
class CT_MailMergeSourceType;
class CT_Odso;
class CT_MailMerge;
class CT_TargetScreenSz;
class CT_Compat;
class CT_CompatSetting;
class CT_DocVar;
class CT_DocVars;
class CT_DocRsids;
class CT_CharacterSpacing;
class CT_SaveThroughXslt;
class CT_RPrDefault;
class CT_PPrDefault;
class CT_DocDefaults;
class CT_ColorSchemeMapping;
class CT_ReadingModeInkLockDown;
class CT_WriteProtection;
class CT_Settings;
class CT_StyleSort;
class CT_StylePaneFilter;
class CT_WebSettings;
class CT_FrameScrollbar;
class CT_OptimizeForBrowser;
class CT_Frame;
class CT_FrameLayout;
class CT_FramesetSplitbar;
class CT_Frameset;
class CT_NumPicBullet;
class CT_LevelSuffix;
class CT_LevelText;
class CT_LvlLegacy;
class CT_Lvl;
class CT_MultiLevelType;
class CT_AbstractNum;
class CT_NumLvl;
class CT_Num;
class CT_Numbering;
class CT_TblStylePr;
class CT_Style;
class CT_LsdException;
class CT_LatentStyles;
class CT_Styles;
class CT_Panose;
class CT_FontFamily;
class CT_Pitch;
class CT_FontSig;
class CT_FontRel;
class CT_Font;
class CT_FontsList;
class CT_DivBdr;
class CT_Div;
class CT_Divs;
class CT_TxbxContent;
class CT_Body;
class CT_ShapeDefaults;
class CT_Comments;
class CT_Footnotes;
class CT_Endnotes;
class CT_SmartTagType;
class CT_DocPartBehavior;
class CT_DocPartBehaviors;
class CT_DocPartType;
class CT_DocPartTypes;
class CT_DocPartGallery;
class CT_DocPartCategory;
class CT_DocPartName;
class CT_DocPartPr;
class CT_DocPart;
class CT_DocParts;
class CT_Caption;
class CT_AutoCaption;
class CT_AutoCaptions;
class CT_Captions;
class CT_DocumentBase;
class CT_Document;
class CT_GlossaryDocument;
class recipients_element;
class txbxContent_element;
class comments_element;
class footnotes_element;
class endnotes_element;
class hdr_element;
class ftr_element;
class settings_element;
class webSettings_element;
class fonts_element;
class numbering_element;
class styles_element;
class document_element;
class glossaryDocument_element;
}
#ifndef __wml_xsd_
#define __wml_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-wordprocessingDrawing_xsd.h"
#include "shared-math_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "shared-customXmlSchemaProperties_xsd.h"
#include "vml-main_xsd.h"
#include "vml-officeDrawing_xsd.h"
namespace ns_w {
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

class ST_LongHexNumber: public XSD::SimpleType
{
public:
    ST_LongHexNumber();
    ST_LongHexNumber(const XSD::hexBinary_& _hexBinary);
    ~ST_LongHexNumber();
    bool has_hexBinary() const;
    void set_hexBinary(const XSD::hexBinary_& _hexBinary);
    const XSD::hexBinary_& get_hexBinary() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_LongHexNumber& default_instance();
    std::string toString() const;
protected:
private:
    static ST_LongHexNumber* default_instance_;
    bool m_has_hexBinary;
    XSD::hexBinary_ m_hexBinary;
};

class ST_ShortHexNumber: public XSD::SimpleType
{
public:
    ST_ShortHexNumber();
    ST_ShortHexNumber(const XSD::hexBinary_& _hexBinary);
    ~ST_ShortHexNumber();
    bool has_hexBinary() const;
    void set_hexBinary(const XSD::hexBinary_& _hexBinary);
    const XSD::hexBinary_& get_hexBinary() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ShortHexNumber& default_instance();
    std::string toString() const;
protected:
private:
    static ST_ShortHexNumber* default_instance_;
    bool m_has_hexBinary;
    XSD::hexBinary_ m_hexBinary;
};

class ST_UcharHexNumber: public XSD::SimpleType
{
public:
    ST_UcharHexNumber();
    ST_UcharHexNumber(const XSD::hexBinary_& _hexBinary);
    ~ST_UcharHexNumber();
    bool has_hexBinary() const;
    void set_hexBinary(const XSD::hexBinary_& _hexBinary);
    const XSD::hexBinary_& get_hexBinary() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_UcharHexNumber& default_instance();
    std::string toString() const;
protected:
private:
    static ST_UcharHexNumber* default_instance_;
    bool m_has_hexBinary;
    XSD::hexBinary_ m_hexBinary;
};

class ST_DecimalNumberOrPercent: public XSD::SimpleType
{
public:
    ST_DecimalNumberOrPercent();
    ~ST_DecimalNumberOrPercent();
    bool has_ST_UnqualifiedPercentage() const;
    ST_UnqualifiedPercentage* mutable_ST_UnqualifiedPercentage();
    const ST_UnqualifiedPercentage& get_ST_UnqualifiedPercentage() const;
    void clear_ST_UnqualifiedPercentage();
    bool has_ST_Percentage() const;
    ns_s::ST_Percentage* mutable_ST_Percentage();
    const ns_s::ST_Percentage& get_ST_Percentage() const;
    void clear_ST_Percentage();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DecimalNumberOrPercent& default_instance();
protected:
private:
    bool m_has_ST_UnqualifiedPercentage;
    ST_UnqualifiedPercentage* m_ST_UnqualifiedPercentage;
    bool m_has_ST_Percentage;
    ns_s::ST_Percentage* m_ST_Percentage;
    static ST_DecimalNumberOrPercent* default_instance_;
};

class ST_UnqualifiedPercentage: public XSD::SimpleType
{
public:
    ST_UnqualifiedPercentage();
    ST_UnqualifiedPercentage(const XSD::integer_& _integer);
    ~ST_UnqualifiedPercentage();
    bool has_integer() const;
    void set_integer(const XSD::integer_& _integer);
    const XSD::integer_& get_integer() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_UnqualifiedPercentage& default_instance();
    std::string toString() const;
protected:
private:
    static ST_UnqualifiedPercentage* default_instance_;
    bool m_has_integer;
    XSD::integer_ m_integer;
};

class ST_DecimalNumber: public XSD::SimpleType
{
public:
    ST_DecimalNumber();
    ST_DecimalNumber(const XSD::integer_& _integer);
    ~ST_DecimalNumber();
    bool has_integer() const;
    void set_integer(const XSD::integer_& _integer);
    const XSD::integer_& get_integer() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DecimalNumber& default_instance();
    std::string toString() const;
protected:
private:
    static ST_DecimalNumber* default_instance_;
    bool m_has_integer;
    XSD::integer_ m_integer;
};

class ST_SignedTwipsMeasure: public XSD::SimpleType
{
public:
    ST_SignedTwipsMeasure();
    ~ST_SignedTwipsMeasure();
    bool has_integer() const;
    void set_integer(const XSD::integer_& _integer);
    const XSD::integer_& get_integer() const;
    void clear_integer();
    bool has_ST_UniversalMeasure() const;
    ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
    const ns_s::ST_UniversalMeasure& get_ST_UniversalMeasure() const;
    void clear_ST_UniversalMeasure();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_SignedTwipsMeasure& default_instance();
protected:
private:
    bool m_has_integer;
    XSD::integer_ m_integer;
    bool m_has_ST_UniversalMeasure;
    ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure;
    static ST_SignedTwipsMeasure* default_instance_;
};

class ST_PixelsMeasure: public ns_s::ST_UnsignedDecimalNumber
{
public:
    ST_PixelsMeasure();
    ST_PixelsMeasure(const ns_s::ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_PixelsMeasure();
    static const ST_PixelsMeasure& default_instance();
protected:
private:
    static ST_PixelsMeasure* default_instance_;
};

class ST_HpsMeasure: public XSD::SimpleType
{
public:
    ST_HpsMeasure();
    ~ST_HpsMeasure();
    bool has_ST_UnsignedDecimalNumber() const;
    ns_s::ST_UnsignedDecimalNumber* mutable_ST_UnsignedDecimalNumber();
    const ns_s::ST_UnsignedDecimalNumber& get_ST_UnsignedDecimalNumber() const;
    void clear_ST_UnsignedDecimalNumber();
    bool has_ST_PositiveUniversalMeasure() const;
    ns_s::ST_PositiveUniversalMeasure* mutable_ST_PositiveUniversalMeasure();
    const ns_s::ST_PositiveUniversalMeasure& get_ST_PositiveUniversalMeasure() const;
    void clear_ST_PositiveUniversalMeasure();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HpsMeasure& default_instance();
protected:
private:
    bool m_has_ST_UnsignedDecimalNumber;
    ns_s::ST_UnsignedDecimalNumber* m_ST_UnsignedDecimalNumber;
    bool m_has_ST_PositiveUniversalMeasure;
    ns_s::ST_PositiveUniversalMeasure* m_ST_PositiveUniversalMeasure;
    static ST_HpsMeasure* default_instance_;
};

class ST_SignedHpsMeasure: public XSD::SimpleType
{
public:
    ST_SignedHpsMeasure();
    ~ST_SignedHpsMeasure();
    bool has_integer() const;
    void set_integer(const XSD::integer_& _integer);
    const XSD::integer_& get_integer() const;
    void clear_integer();
    bool has_ST_UniversalMeasure() const;
    ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
    const ns_s::ST_UniversalMeasure& get_ST_UniversalMeasure() const;
    void clear_ST_UniversalMeasure();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_SignedHpsMeasure& default_instance();
protected:
private:
    bool m_has_integer;
    XSD::integer_ m_integer;
    bool m_has_ST_UniversalMeasure;
    ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure;
    static ST_SignedHpsMeasure* default_instance_;
};

class ST_DateTime: public XSD::SimpleType
{
public:
    ST_DateTime();
    ST_DateTime(const XSD::dateTime_& _dateTime);
    ~ST_DateTime();
    bool has_dateTime() const;
    void set_dateTime(const XSD::dateTime_& _dateTime);
    const XSD::dateTime_& get_dateTime() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DateTime& default_instance();
    std::string toString() const;
protected:
private:
    static ST_DateTime* default_instance_;
    bool m_has_dateTime;
    XSD::dateTime_ m_dateTime;
};

class ST_MacroName: public XSD::SimpleType
{
public:
    ST_MacroName();
    ST_MacroName(const XSD::string_& _string);
    ~ST_MacroName();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_MacroName& default_instance();
    std::string toString() const;
protected:
private:
    static ST_MacroName* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class ST_EighthPointMeasure: public ns_s::ST_UnsignedDecimalNumber
{
public:
    ST_EighthPointMeasure();
    ST_EighthPointMeasure(const ns_s::ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_EighthPointMeasure();
    static const ST_EighthPointMeasure& default_instance();
protected:
private:
    static ST_EighthPointMeasure* default_instance_;
};

class ST_PointMeasure: public ns_s::ST_UnsignedDecimalNumber
{
public:
    ST_PointMeasure();
    ST_PointMeasure(const ns_s::ST_UnsignedDecimalNumber& _ST_UnsignedDecimalNumber);
    ~ST_PointMeasure();
    static const ST_PointMeasure& default_instance();
protected:
private:
    static ST_PointMeasure* default_instance_;
};

class ST_TextScale: public XSD::SimpleType
{
public:
    ST_TextScale();
    ~ST_TextScale();
    bool has_ST_TextScalePercent() const;
    ST_TextScalePercent* mutable_ST_TextScalePercent();
    const ST_TextScalePercent& get_ST_TextScalePercent() const;
    void clear_ST_TextScalePercent();
    bool has_ST_TextScaleDecimal() const;
    ST_TextScaleDecimal* mutable_ST_TextScaleDecimal();
    const ST_TextScaleDecimal& get_ST_TextScaleDecimal() const;
    void clear_ST_TextScaleDecimal();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextScale& default_instance();
protected:
private:
    bool m_has_ST_TextScalePercent;
    ST_TextScalePercent* m_ST_TextScalePercent;
    bool m_has_ST_TextScaleDecimal;
    ST_TextScaleDecimal* m_ST_TextScaleDecimal;
    static ST_TextScale* default_instance_;
};

class ST_TextScalePercent: public XSD::SimpleType
{
public:
    ST_TextScalePercent();
    ST_TextScalePercent(const XSD::string_& _string);
    ~ST_TextScalePercent();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextScalePercent& default_instance();
    std::string toString() const;
protected:
private:
    static ST_TextScalePercent* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class ST_TextScaleDecimal: public XSD::SimpleType
{
public:
    ST_TextScaleDecimal();
    ST_TextScaleDecimal(const XSD::integer_& _integer);
    ~ST_TextScaleDecimal();
    bool has_integer() const;
    void set_integer(const XSD::integer_& _integer);
    const XSD::integer_& get_integer() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextScaleDecimal& default_instance();
    std::string toString() const;
protected:
private:
    static ST_TextScaleDecimal* default_instance_;
    bool m_has_integer;
    XSD::integer_ m_integer;
};

class ST_HighlightColor: public XSD::SimpleType
{
public:
    enum  Type
    {
        _black_ = 0,
        _blue_,
        _cyan_,
        _green_,
        _magenta_,
        _red_,
        _yellow_,
        _white_,
        _darkBlue_,
        _darkCyan_,
        _darkGreen_,
        _darkMagenta_,
        _darkRed_,
        _darkYellow_,
        _darkGray_,
        _lightGray_,
        _none_
    };
    ST_HighlightColor();
    ST_HighlightColor(const ST_HighlightColor::Type& _type);
    ~ST_HighlightColor();
    bool has_type() const;
    void set_type(const ST_HighlightColor::Type& _type);
    const ST_HighlightColor::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HighlightColor& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_HighlightColor* default_instance_;
    bool m_has_type;
    ST_HighlightColor::Type m_type;
};

class ST_HexColorAuto: public XSD::SimpleType
{
public:
    enum  Type
    {
        _auto_ = 0
    };
    ST_HexColorAuto();
    ST_HexColorAuto(const ST_HexColorAuto::Type& _type);
    ~ST_HexColorAuto();
    bool has_type() const;
    void set_type(const ST_HexColorAuto::Type& _type);
    const ST_HexColorAuto::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HexColorAuto& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_HexColorAuto* default_instance_;
    bool m_has_type;
    ST_HexColorAuto::Type m_type;
};

class ST_HexColor: public XSD::SimpleType
{
public:
    ST_HexColor();
    ~ST_HexColor();
    bool has_ST_HexColorAuto() const;
    ST_HexColorAuto* mutable_ST_HexColorAuto();
    const ST_HexColorAuto& get_ST_HexColorAuto() const;
    void clear_ST_HexColorAuto();
    bool has_ST_HexColorRGB() const;
    ns_s::ST_HexColorRGB* mutable_ST_HexColorRGB();
    const ns_s::ST_HexColorRGB& get_ST_HexColorRGB() const;
    void clear_ST_HexColorRGB();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HexColor& default_instance();
protected:
private:
    bool m_has_ST_HexColorAuto;
    ST_HexColorAuto* m_ST_HexColorAuto;
    bool m_has_ST_HexColorRGB;
    ns_s::ST_HexColorRGB* m_ST_HexColorRGB;
    static ST_HexColor* default_instance_;
};

class ST_Underline: public XSD::SimpleType
{
public:
    enum  Type
    {
        _single_ = 0,
        _words_,
        _double_,
        _thick_,
        _dotted_,
        _dottedHeavy_,
        _dash_,
        _dashedHeavy_,
        _dashLong_,
        _dashLongHeavy_,
        _dotDash_,
        _dashDotHeavy_,
        _dotDotDash_,
        _dashDotDotHeavy_,
        _wave_,
        _wavyHeavy_,
        _wavyDouble_,
        _none_
    };
    ST_Underline();
    ST_Underline(const ST_Underline::Type& _type);
    ~ST_Underline();
    bool has_type() const;
    void set_type(const ST_Underline::Type& _type);
    const ST_Underline::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Underline& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Underline* default_instance_;
    bool m_has_type;
    ST_Underline::Type m_type;
};

class ST_TextEffect: public XSD::SimpleType
{
public:
    enum  Type
    {
        _blinkBackground_ = 0,
        _lights_,
        _antsBlack_,
        _antsRed_,
        _shimmer_,
        _sparkle_,
        _none_
    };
    ST_TextEffect();
    ST_TextEffect(const ST_TextEffect::Type& _type);
    ~ST_TextEffect();
    bool has_type() const;
    void set_type(const ST_TextEffect::Type& _type);
    const ST_TextEffect::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextEffect& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TextEffect* default_instance_;
    bool m_has_type;
    ST_TextEffect::Type m_type;
};

class ST_Border: public XSD::SimpleType
{
public:
    enum  Type
    {
        _nil_ = 0,
        _none_,
        _single_,
        _thick_,
        _double_,
        _dotted_,
        _dashed_,
        _dotDash_,
        _dotDotDash_,
        _triple_,
        _thinThickSmallGap_,
        _thickThinSmallGap_,
        _thinThickThinSmallGap_,
        _thinThickMediumGap_,
        _thickThinMediumGap_,
        _thinThickThinMediumGap_,
        _thinThickLargeGap_,
        _thickThinLargeGap_,
        _thinThickThinLargeGap_,
        _wave_,
        _doubleWave_,
        _dashSmallGap_,
        _dashDotStroked_,
        _threeDEmboss_,
        _threeDEngrave_,
        _outset_,
        _inset_,
        _apples_,
        _archedScallops_,
        _babyPacifier_,
        _babyRattle_,
        _balloons3Colors_,
        _balloonsHotAir_,
        _basicBlackDashes_,
        _basicBlackDots_,
        _basicBlackSquares_,
        _basicThinLines_,
        _basicWhiteDashes_,
        _basicWhiteDots_,
        _basicWhiteSquares_,
        _basicWideInline_,
        _basicWideMidline_,
        _basicWideOutline_,
        _bats_,
        _birds_,
        _birdsFlight_,
        _cabins_,
        _cakeSlice_,
        _candyCorn_,
        _celticKnotwork_,
        _certificateBanner_,
        _chainLink_,
        _champagneBottle_,
        _checkedBarBlack_,
        _checkedBarColor_,
        _checkered_,
        _christmasTree_,
        _circlesLines_,
        _circlesRectangles_,
        _classicalWave_,
        _clocks_,
        _compass_,
        _confetti_,
        _confettiGrays_,
        _confettiOutline_,
        _confettiStreamers_,
        _confettiWhite_,
        _cornerTriangles_,
        _couponCutoutDashes_,
        _couponCutoutDots_,
        _crazyMaze_,
        _creaturesButterfly_,
        _creaturesFish_,
        _creaturesInsects_,
        _creaturesLadyBug_,
        _crossStitch_,
        _cup_,
        _decoArch_,
        _decoArchColor_,
        _decoBlocks_,
        _diamondsGray_,
        _doubleD_,
        _doubleDiamonds_,
        _earth1_,
        _earth2_,
        _earth3_,
        _eclipsingSquares1_,
        _eclipsingSquares2_,
        _eggsBlack_,
        _fans_,
        _film_,
        _firecrackers_,
        _flowersBlockPrint_,
        _flowersDaisies_,
        _flowersModern1_,
        _flowersModern2_,
        _flowersPansy_,
        _flowersRedRose_,
        _flowersRoses_,
        _flowersTeacup_,
        _flowersTiny_,
        _gems_,
        _gingerbreadMan_,
        _gradient_,
        _handmade1_,
        _handmade2_,
        _heartBalloon_,
        _heartGray_,
        _hearts_,
        _heebieJeebies_,
        _holly_,
        _houseFunky_,
        _hypnotic_,
        _iceCreamCones_,
        _lightBulb_,
        _lightning1_,
        _lightning2_,
        _mapPins_,
        _mapleLeaf_,
        _mapleMuffins_,
        _marquee_,
        _marqueeToothed_,
        _moons_,
        _mosaic_,
        _musicNotes_,
        _northwest_,
        _ovals_,
        _packages_,
        _palmsBlack_,
        _palmsColor_,
        _paperClips_,
        _papyrus_,
        _partyFavor_,
        _partyGlass_,
        _pencils_,
        _people_,
        _peopleWaving_,
        _peopleHats_,
        _poinsettias_,
        _postageStamp_,
        _pumpkin1_,
        _pushPinNote2_,
        _pushPinNote1_,
        _pyramids_,
        _pyramidsAbove_,
        _quadrants_,
        _rings_,
        _safari_,
        _sawtooth_,
        _sawtoothGray_,
        _scaredCat_,
        _seattle_,
        _shadowedSquares_,
        _sharksTeeth_,
        _shorebirdTracks_,
        _skyrocket_,
        _snowflakeFancy_,
        _snowflakes_,
        _sombrero_,
        _southwest_,
        _stars_,
        _starsTop_,
        _stars3d_,
        _starsBlack_,
        _starsShadowed_,
        _sun_,
        _swirligig_,
        _tornPaper_,
        _tornPaperBlack_,
        _trees_,
        _triangleParty_,
        _triangles_,
        _triangle1_,
        _triangle2_,
        _triangleCircle1_,
        _triangleCircle2_,
        _shapes1_,
        _shapes2_,
        _twistedLines1_,
        _twistedLines2_,
        _vine_,
        _waveline_,
        _weavingAngles_,
        _weavingBraid_,
        _weavingRibbon_,
        _weavingStrips_,
        _whiteFlowers_,
        _woodwork_,
        _xIllusions_,
        _zanyTriangles_,
        _zigZag_,
        _zigZagStitch_,
        _custom_
    };
    ST_Border();
    ST_Border(const ST_Border::Type& _type);
    ~ST_Border();
    bool has_type() const;
    void set_type(const ST_Border::Type& _type);
    const ST_Border::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Border& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Border* default_instance_;
    bool m_has_type;
    ST_Border::Type m_type;
};

class ST_Shd: public XSD::SimpleType
{
public:
    enum  Type
    {
        _nil_ = 0,
        _clear_,
        _solid_,
        _horzStripe_,
        _vertStripe_,
        _reverseDiagStripe_,
        _diagStripe_,
        _horzCross_,
        _diagCross_,
        _thinHorzStripe_,
        _thinVertStripe_,
        _thinReverseDiagStripe_,
        _thinDiagStripe_,
        _thinHorzCross_,
        _thinDiagCross_,
        _pct5_,
        _pct10_,
        _pct12_,
        _pct15_,
        _pct20_,
        _pct25_,
        _pct30_,
        _pct35_,
        _pct37_,
        _pct40_,
        _pct45_,
        _pct50_,
        _pct55_,
        _pct60_,
        _pct62_,
        _pct65_,
        _pct70_,
        _pct75_,
        _pct80_,
        _pct85_,
        _pct87_,
        _pct90_,
        _pct95_
    };
    ST_Shd();
    ST_Shd(const ST_Shd::Type& _type);
    ~ST_Shd();
    bool has_type() const;
    void set_type(const ST_Shd::Type& _type);
    const ST_Shd::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Shd& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Shd* default_instance_;
    bool m_has_type;
    ST_Shd::Type m_type;
};

class ST_Em: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _dot_,
        _comma_,
        _circle_,
        _underDot_
    };
    ST_Em();
    ST_Em(const ST_Em::Type& _type);
    ~ST_Em();
    bool has_type() const;
    void set_type(const ST_Em::Type& _type);
    const ST_Em::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Em& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Em* default_instance_;
    bool m_has_type;
    ST_Em::Type m_type;
};

class ST_CombineBrackets: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _round_,
        _square_,
        _angle_,
        _curly_
    };
    ST_CombineBrackets();
    ST_CombineBrackets(const ST_CombineBrackets::Type& _type);
    ~ST_CombineBrackets();
    bool has_type() const;
    void set_type(const ST_CombineBrackets::Type& _type);
    const ST_CombineBrackets::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_CombineBrackets& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_CombineBrackets* default_instance_;
    bool m_has_type;
    ST_CombineBrackets::Type m_type;
};

class ST_HeightRule: public XSD::SimpleType
{
public:
    enum  Type
    {
        _auto_ = 0,
        _exact_,
        _atLeast_
    };
    ST_HeightRule();
    ST_HeightRule(const ST_HeightRule::Type& _type);
    ~ST_HeightRule();
    bool has_type() const;
    void set_type(const ST_HeightRule::Type& _type);
    const ST_HeightRule::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HeightRule& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_HeightRule* default_instance_;
    bool m_has_type;
    ST_HeightRule::Type m_type;
};

class ST_Wrap: public XSD::SimpleType
{
public:
    enum  Type
    {
        _auto_ = 0,
        _notBeside_,
        _around_,
        _tight_,
        _through_,
        _none_
    };
    ST_Wrap();
    ST_Wrap(const ST_Wrap::Type& _type);
    ~ST_Wrap();
    bool has_type() const;
    void set_type(const ST_Wrap::Type& _type);
    const ST_Wrap::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Wrap& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Wrap* default_instance_;
    bool m_has_type;
    ST_Wrap::Type m_type;
};

class ST_VAnchor: public XSD::SimpleType
{
public:
    enum  Type
    {
        _text_ = 0,
        _margin_,
        _page_
    };
    ST_VAnchor();
    ST_VAnchor(const ST_VAnchor::Type& _type);
    ~ST_VAnchor();
    bool has_type() const;
    void set_type(const ST_VAnchor::Type& _type);
    const ST_VAnchor::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_VAnchor& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_VAnchor* default_instance_;
    bool m_has_type;
    ST_VAnchor::Type m_type;
};

class ST_HAnchor: public XSD::SimpleType
{
public:
    enum  Type
    {
        _text_ = 0,
        _margin_,
        _page_
    };
    ST_HAnchor();
    ST_HAnchor(const ST_HAnchor::Type& _type);
    ~ST_HAnchor();
    bool has_type() const;
    void set_type(const ST_HAnchor::Type& _type);
    const ST_HAnchor::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HAnchor& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_HAnchor* default_instance_;
    bool m_has_type;
    ST_HAnchor::Type m_type;
};

class ST_DropCap: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _drop_,
        _margin_
    };
    ST_DropCap();
    ST_DropCap(const ST_DropCap::Type& _type);
    ~ST_DropCap();
    bool has_type() const;
    void set_type(const ST_DropCap::Type& _type);
    const ST_DropCap::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DropCap& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DropCap* default_instance_;
    bool m_has_type;
    ST_DropCap::Type m_type;
};

class ST_TabJc: public XSD::SimpleType
{
public:
    enum  Type
    {
        _clear_ = 0,
        _start_,
        _center_,
        _end_,
        _decimal_,
        _bar_,
        _num_,
        _left_,
        _right_
    };
    ST_TabJc();
    ST_TabJc(const ST_TabJc::Type& _type);
    ~ST_TabJc();
    bool has_type() const;
    void set_type(const ST_TabJc::Type& _type);
    const ST_TabJc::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TabJc& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TabJc* default_instance_;
    bool m_has_type;
    ST_TabJc::Type m_type;
};

class ST_TabTlc: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _dot_,
        _hyphen_,
        _underscore_,
        _heavy_,
        _middleDot_
    };
    ST_TabTlc();
    ST_TabTlc(const ST_TabTlc::Type& _type);
    ~ST_TabTlc();
    bool has_type() const;
    void set_type(const ST_TabTlc::Type& _type);
    const ST_TabTlc::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TabTlc& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TabTlc* default_instance_;
    bool m_has_type;
    ST_TabTlc::Type m_type;
};

class ST_LineSpacingRule: public XSD::SimpleType
{
public:
    enum  Type
    {
        _auto_ = 0,
        _exact_,
        _atLeast_
    };
    ST_LineSpacingRule();
    ST_LineSpacingRule(const ST_LineSpacingRule::Type& _type);
    ~ST_LineSpacingRule();
    bool has_type() const;
    void set_type(const ST_LineSpacingRule::Type& _type);
    const ST_LineSpacingRule::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_LineSpacingRule& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_LineSpacingRule* default_instance_;
    bool m_has_type;
    ST_LineSpacingRule::Type m_type;
};

class ST_Jc: public XSD::SimpleType
{
public:
    enum  Type
    {
        _start_ = 0,
        _center_,
        _end_,
        _both_,
        _mediumKashida_,
        _distribute_,
        _numTab_,
        _highKashida_,
        _lowKashida_,
        _thaiDistribute_,
        _left_,
        _right_
    };
    ST_Jc();
    ST_Jc(const ST_Jc::Type& _type);
    ~ST_Jc();
    bool has_type() const;
    void set_type(const ST_Jc::Type& _type);
    const ST_Jc::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Jc& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Jc* default_instance_;
    bool m_has_type;
    ST_Jc::Type m_type;
};

class ST_JcTable: public XSD::SimpleType
{
public:
    enum  Type
    {
        _center_ = 0,
        _end_,
        _left_,
        _right_,
        _start_
    };
    ST_JcTable();
    ST_JcTable(const ST_JcTable::Type& _type);
    ~ST_JcTable();
    bool has_type() const;
    void set_type(const ST_JcTable::Type& _type);
    const ST_JcTable::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_JcTable& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_JcTable* default_instance_;
    bool m_has_type;
    ST_JcTable::Type m_type;
};

class ST_View: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _print_,
        _outline_,
        _masterPages_,
        _normal_,
        _web_
    };
    ST_View();
    ST_View(const ST_View::Type& _type);
    ~ST_View();
    bool has_type() const;
    void set_type(const ST_View::Type& _type);
    const ST_View::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_View& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_View* default_instance_;
    bool m_has_type;
    ST_View::Type m_type;
};

class ST_Zoom: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _fullPage_,
        _bestFit_,
        _textFit_
    };
    ST_Zoom();
    ST_Zoom(const ST_Zoom::Type& _type);
    ~ST_Zoom();
    bool has_type() const;
    void set_type(const ST_Zoom::Type& _type);
    const ST_Zoom::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Zoom& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Zoom* default_instance_;
    bool m_has_type;
    ST_Zoom::Type m_type;
};

class ST_Proof: public XSD::SimpleType
{
public:
    enum  Type
    {
        _clean_ = 0,
        _dirty_
    };
    ST_Proof();
    ST_Proof(const ST_Proof::Type& _type);
    ~ST_Proof();
    bool has_type() const;
    void set_type(const ST_Proof::Type& _type);
    const ST_Proof::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Proof& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Proof* default_instance_;
    bool m_has_type;
    ST_Proof::Type m_type;
};

class ST_DocType: public XSD::SimpleType
{
public:
    ST_DocType();
    ST_DocType(const XSD::string_& _string);
    ~ST_DocType();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DocType& default_instance();
    std::string toString() const;
protected:
private:
    static ST_DocType* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class ST_DocProtect: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _readOnly_,
        _comments_,
        _trackedChanges_,
        _forms_
    };
    ST_DocProtect();
    ST_DocProtect(const ST_DocProtect::Type& _type);
    ~ST_DocProtect();
    bool has_type() const;
    void set_type(const ST_DocProtect::Type& _type);
    const ST_DocProtect::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DocProtect& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DocProtect* default_instance_;
    bool m_has_type;
    ST_DocProtect::Type m_type;
};

class ST_MailMergeDocType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _catalog_ = 0,
        _envelopes_,
        _mailingLabels_,
        _formLetters_,
        _email_,
        _fax_
    };
    ST_MailMergeDocType();
    ST_MailMergeDocType(const ST_MailMergeDocType::Type& _type);
    ~ST_MailMergeDocType();
    bool has_type() const;
    void set_type(const ST_MailMergeDocType::Type& _type);
    const ST_MailMergeDocType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_MailMergeDocType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_MailMergeDocType* default_instance_;
    bool m_has_type;
    ST_MailMergeDocType::Type m_type;
};

class ST_MailMergeDataType: public XSD::SimpleType
{
public:
    ST_MailMergeDataType();
    ST_MailMergeDataType(const XSD::string_& _string);
    ~ST_MailMergeDataType();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_MailMergeDataType& default_instance();
    std::string toString() const;
protected:
private:
    static ST_MailMergeDataType* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class ST_MailMergeDest: public XSD::SimpleType
{
public:
    enum  Type
    {
        _newDocument_ = 0,
        _printer_,
        _email_,
        _fax_
    };
    ST_MailMergeDest();
    ST_MailMergeDest(const ST_MailMergeDest::Type& _type);
    ~ST_MailMergeDest();
    bool has_type() const;
    void set_type(const ST_MailMergeDest::Type& _type);
    const ST_MailMergeDest::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_MailMergeDest& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_MailMergeDest* default_instance_;
    bool m_has_type;
    ST_MailMergeDest::Type m_type;
};

class ST_MailMergeOdsoFMDFieldType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _null_ = 0,
        _dbColumn_
    };
    ST_MailMergeOdsoFMDFieldType();
    ST_MailMergeOdsoFMDFieldType(const ST_MailMergeOdsoFMDFieldType::Type& _type);
    ~ST_MailMergeOdsoFMDFieldType();
    bool has_type() const;
    void set_type(const ST_MailMergeOdsoFMDFieldType::Type& _type);
    const ST_MailMergeOdsoFMDFieldType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_MailMergeOdsoFMDFieldType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_MailMergeOdsoFMDFieldType* default_instance_;
    bool m_has_type;
    ST_MailMergeOdsoFMDFieldType::Type m_type;
};

class ST_TextDirection: public XSD::SimpleType
{
public:
    enum  Type
    {
        _tb_ = 0,
        _rl_,
        _lr_,
        _tbV_,
        _rlV_,
        _lrV_,
        _btLr_,
        _lrTb_,
        _lrTbV_,
        _tbLrV_,
        _tbRl_,
        _tbRlV_
    };
    ST_TextDirection();
    ST_TextDirection(const ST_TextDirection::Type& _type);
    ~ST_TextDirection();
    bool has_type() const;
    void set_type(const ST_TextDirection::Type& _type);
    const ST_TextDirection::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextDirection& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TextDirection* default_instance_;
    bool m_has_type;
    ST_TextDirection::Type m_type;
};

class ST_TextAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _top_ = 0,
        _center_,
        _baseline_,
        _bottom_,
        _auto_
    };
    ST_TextAlignment();
    ST_TextAlignment(const ST_TextAlignment::Type& _type);
    ~ST_TextAlignment();
    bool has_type() const;
    void set_type(const ST_TextAlignment::Type& _type);
    const ST_TextAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TextAlignment* default_instance_;
    bool m_has_type;
    ST_TextAlignment::Type m_type;
};

class ST_DisplacedByCustomXml: public XSD::SimpleType
{
public:
    enum  Type
    {
        _next_ = 0,
        _prev_
    };
    ST_DisplacedByCustomXml();
    ST_DisplacedByCustomXml(const ST_DisplacedByCustomXml::Type& _type);
    ~ST_DisplacedByCustomXml();
    bool has_type() const;
    void set_type(const ST_DisplacedByCustomXml::Type& _type);
    const ST_DisplacedByCustomXml::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DisplacedByCustomXml& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DisplacedByCustomXml* default_instance_;
    bool m_has_type;
    ST_DisplacedByCustomXml::Type m_type;
};

class ST_AnnotationVMerge: public XSD::SimpleType
{
public:
    enum  Type
    {
        _cont_ = 0,
        _rest_
    };
    ST_AnnotationVMerge();
    ST_AnnotationVMerge(const ST_AnnotationVMerge::Type& _type);
    ~ST_AnnotationVMerge();
    bool has_type() const;
    void set_type(const ST_AnnotationVMerge::Type& _type);
    const ST_AnnotationVMerge::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_AnnotationVMerge& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_AnnotationVMerge* default_instance_;
    bool m_has_type;
    ST_AnnotationVMerge::Type m_type;
};

class ST_TextboxTightWrap: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _allLines_,
        _firstAndLastLine_,
        _firstLineOnly_,
        _lastLineOnly_
    };
    ST_TextboxTightWrap();
    ST_TextboxTightWrap(const ST_TextboxTightWrap::Type& _type);
    ~ST_TextboxTightWrap();
    bool has_type() const;
    void set_type(const ST_TextboxTightWrap::Type& _type);
    const ST_TextboxTightWrap::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TextboxTightWrap& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TextboxTightWrap* default_instance_;
    bool m_has_type;
    ST_TextboxTightWrap::Type m_type;
};

class ST_ObjectDrawAspect: public XSD::SimpleType
{
public:
    enum  Type
    {
        _content_ = 0,
        _icon_
    };
    ST_ObjectDrawAspect();
    ST_ObjectDrawAspect(const ST_ObjectDrawAspect::Type& _type);
    ~ST_ObjectDrawAspect();
    bool has_type() const;
    void set_type(const ST_ObjectDrawAspect::Type& _type);
    const ST_ObjectDrawAspect::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ObjectDrawAspect& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ObjectDrawAspect* default_instance_;
    bool m_has_type;
    ST_ObjectDrawAspect::Type m_type;
};

class ST_ObjectUpdateMode: public XSD::SimpleType
{
public:
    enum  Type
    {
        _always_ = 0,
        _onCall_
    };
    ST_ObjectUpdateMode();
    ST_ObjectUpdateMode(const ST_ObjectUpdateMode::Type& _type);
    ~ST_ObjectUpdateMode();
    bool has_type() const;
    void set_type(const ST_ObjectUpdateMode::Type& _type);
    const ST_ObjectUpdateMode::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ObjectUpdateMode& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ObjectUpdateMode* default_instance_;
    bool m_has_type;
    ST_ObjectUpdateMode::Type m_type;
};

class ST_FldCharType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _begin_ = 0,
        _separate_,
        _end_
    };
    ST_FldCharType();
    ST_FldCharType(const ST_FldCharType::Type& _type);
    ~ST_FldCharType();
    bool has_type() const;
    void set_type(const ST_FldCharType::Type& _type);
    const ST_FldCharType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FldCharType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FldCharType* default_instance_;
    bool m_has_type;
    ST_FldCharType::Type m_type;
};

class ST_InfoTextType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _text_ = 0,
        _autoText_
    };
    ST_InfoTextType();
    ST_InfoTextType(const ST_InfoTextType::Type& _type);
    ~ST_InfoTextType();
    bool has_type() const;
    void set_type(const ST_InfoTextType::Type& _type);
    const ST_InfoTextType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_InfoTextType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_InfoTextType* default_instance_;
    bool m_has_type;
    ST_InfoTextType::Type m_type;
};

class ST_FFHelpTextVal: public XSD::SimpleType
{
public:
    ST_FFHelpTextVal();
    ST_FFHelpTextVal(const XSD::string_& _string);
    ~ST_FFHelpTextVal();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FFHelpTextVal& default_instance();
    std::string toString() const;
protected:
private:
    static ST_FFHelpTextVal* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class ST_FFStatusTextVal: public XSD::SimpleType
{
public:
    ST_FFStatusTextVal();
    ST_FFStatusTextVal(const XSD::string_& _string);
    ~ST_FFStatusTextVal();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FFStatusTextVal& default_instance();
    std::string toString() const;
protected:
private:
    static ST_FFStatusTextVal* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class ST_FFName: public XSD::SimpleType
{
public:
    ST_FFName();
    ST_FFName(const XSD::string_& _string);
    ~ST_FFName();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FFName& default_instance();
    std::string toString() const;
protected:
private:
    static ST_FFName* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class ST_FFTextType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _regular_ = 0,
        _number_,
        _date_,
        _currentTime_,
        _currentDate_,
        _calculated_
    };
    ST_FFTextType();
    ST_FFTextType(const ST_FFTextType::Type& _type);
    ~ST_FFTextType();
    bool has_type() const;
    void set_type(const ST_FFTextType::Type& _type);
    const ST_FFTextType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FFTextType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FFTextType* default_instance_;
    bool m_has_type;
    ST_FFTextType::Type m_type;
};

class ST_SectionMark: public XSD::SimpleType
{
public:
    enum  Type
    {
        _nextPage_ = 0,
        _nextColumn_,
        _continuous_,
        _evenPage_,
        _oddPage_
    };
    ST_SectionMark();
    ST_SectionMark(const ST_SectionMark::Type& _type);
    ~ST_SectionMark();
    bool has_type() const;
    void set_type(const ST_SectionMark::Type& _type);
    const ST_SectionMark::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_SectionMark& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_SectionMark* default_instance_;
    bool m_has_type;
    ST_SectionMark::Type m_type;
};

class ST_NumberFormat: public XSD::SimpleType
{
public:
    enum  Type
    {
        _decimal_ = 0,
        _upperRoman_,
        _lowerRoman_,
        _upperLetter_,
        _lowerLetter_,
        _ordinal_,
        _cardinalText_,
        _ordinalText_,
        _hex_,
        _chicago_,
        _ideographDigital_,
        _japaneseCounting_,
        _aiueo_,
        _iroha_,
        _decimalFullWidth_,
        _decimalHalfWidth_,
        _japaneseLegal_,
        _japaneseDigitalTenThousand_,
        _decimalEnclosedCircle_,
        _decimalFullWidth2_,
        _aiueoFullWidth_,
        _irohaFullWidth_,
        _decimalZero_,
        _bullet_,
        _ganada_,
        _chosung_,
        _decimalEnclosedFullstop_,
        _decimalEnclosedParen_,
        _decimalEnclosedCircleChinese_,
        _ideographEnclosedCircle_,
        _ideographTraditional_,
        _ideographZodiac_,
        _ideographZodiacTraditional_,
        _taiwaneseCounting_,
        _ideographLegalTraditional_,
        _taiwaneseCountingThousand_,
        _taiwaneseDigital_,
        _chineseCounting_,
        _chineseLegalSimplified_,
        _chineseCountingThousand_,
        _koreanDigital_,
        _koreanCounting_,
        _koreanLegal_,
        _koreanDigital2_,
        _vietnameseCounting_,
        _russianLower_,
        _russianUpper_,
        _none_,
        _numberInDash_,
        _hebrew1_,
        _hebrew2_,
        _arabicAlpha_,
        _arabicAbjad_,
        _hindiVowels_,
        _hindiConsonants_,
        _hindiNumbers_,
        _hindiCounting_,
        _thaiLetters_,
        _thaiNumbers_,
        _thaiCounting_,
        _bahtText_,
        _dollarText_,
        _custom_
    };
    ST_NumberFormat();
    ST_NumberFormat(const ST_NumberFormat::Type& _type);
    ~ST_NumberFormat();
    bool has_type() const;
    void set_type(const ST_NumberFormat::Type& _type);
    const ST_NumberFormat::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_NumberFormat& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_NumberFormat* default_instance_;
    bool m_has_type;
    ST_NumberFormat::Type m_type;
};

class ST_PageOrientation: public XSD::SimpleType
{
public:
    enum  Type
    {
        _portrait_ = 0,
        _landscape_
    };
    ST_PageOrientation();
    ST_PageOrientation(const ST_PageOrientation::Type& _type);
    ~ST_PageOrientation();
    bool has_type() const;
    void set_type(const ST_PageOrientation::Type& _type);
    const ST_PageOrientation::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PageOrientation& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PageOrientation* default_instance_;
    bool m_has_type;
    ST_PageOrientation::Type m_type;
};

class ST_PageBorderZOrder: public XSD::SimpleType
{
public:
    enum  Type
    {
        _front_ = 0,
        _back_
    };
    ST_PageBorderZOrder();
    ST_PageBorderZOrder(const ST_PageBorderZOrder::Type& _type);
    ~ST_PageBorderZOrder();
    bool has_type() const;
    void set_type(const ST_PageBorderZOrder::Type& _type);
    const ST_PageBorderZOrder::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PageBorderZOrder& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PageBorderZOrder* default_instance_;
    bool m_has_type;
    ST_PageBorderZOrder::Type m_type;
};

class ST_PageBorderDisplay: public XSD::SimpleType
{
public:
    enum  Type
    {
        _allPages_ = 0,
        _firstPage_,
        _notFirstPage_
    };
    ST_PageBorderDisplay();
    ST_PageBorderDisplay(const ST_PageBorderDisplay::Type& _type);
    ~ST_PageBorderDisplay();
    bool has_type() const;
    void set_type(const ST_PageBorderDisplay::Type& _type);
    const ST_PageBorderDisplay::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PageBorderDisplay& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PageBorderDisplay* default_instance_;
    bool m_has_type;
    ST_PageBorderDisplay::Type m_type;
};

class ST_PageBorderOffset: public XSD::SimpleType
{
public:
    enum  Type
    {
        _page_ = 0,
        _text_
    };
    ST_PageBorderOffset();
    ST_PageBorderOffset(const ST_PageBorderOffset::Type& _type);
    ~ST_PageBorderOffset();
    bool has_type() const;
    void set_type(const ST_PageBorderOffset::Type& _type);
    const ST_PageBorderOffset::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PageBorderOffset& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PageBorderOffset* default_instance_;
    bool m_has_type;
    ST_PageBorderOffset::Type m_type;
};

class ST_ChapterSep: public XSD::SimpleType
{
public:
    enum  Type
    {
        _hyphen_ = 0,
        _period_,
        _colon_,
        _emDash_,
        _enDash_
    };
    ST_ChapterSep();
    ST_ChapterSep(const ST_ChapterSep::Type& _type);
    ~ST_ChapterSep();
    bool has_type() const;
    void set_type(const ST_ChapterSep::Type& _type);
    const ST_ChapterSep::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ChapterSep& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ChapterSep* default_instance_;
    bool m_has_type;
    ST_ChapterSep::Type m_type;
};

class ST_LineNumberRestart: public XSD::SimpleType
{
public:
    enum  Type
    {
        _newPage_ = 0,
        _newSection_,
        _continuous_
    };
    ST_LineNumberRestart();
    ST_LineNumberRestart(const ST_LineNumberRestart::Type& _type);
    ~ST_LineNumberRestart();
    bool has_type() const;
    void set_type(const ST_LineNumberRestart::Type& _type);
    const ST_LineNumberRestart::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_LineNumberRestart& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_LineNumberRestart* default_instance_;
    bool m_has_type;
    ST_LineNumberRestart::Type m_type;
};

class ST_VerticalJc: public XSD::SimpleType
{
public:
    enum  Type
    {
        _top_ = 0,
        _center_,
        _both_,
        _bottom_
    };
    ST_VerticalJc();
    ST_VerticalJc(const ST_VerticalJc::Type& _type);
    ~ST_VerticalJc();
    bool has_type() const;
    void set_type(const ST_VerticalJc::Type& _type);
    const ST_VerticalJc::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_VerticalJc& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_VerticalJc* default_instance_;
    bool m_has_type;
    ST_VerticalJc::Type m_type;
};

class ST_DocGrid: public XSD::SimpleType
{
public:
    enum  Type
    {
        _default_ = 0,
        _lines_,
        _linesAndChars_,
        _snapToChars_
    };
    ST_DocGrid();
    ST_DocGrid(const ST_DocGrid::Type& _type);
    ~ST_DocGrid();
    bool has_type() const;
    void set_type(const ST_DocGrid::Type& _type);
    const ST_DocGrid::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DocGrid& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DocGrid* default_instance_;
    bool m_has_type;
    ST_DocGrid::Type m_type;
};

class ST_HdrFtr: public XSD::SimpleType
{
public:
    enum  Type
    {
        _even_ = 0,
        _default_,
        _first_
    };
    ST_HdrFtr();
    ST_HdrFtr(const ST_HdrFtr::Type& _type);
    ~ST_HdrFtr();
    bool has_type() const;
    void set_type(const ST_HdrFtr::Type& _type);
    const ST_HdrFtr::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_HdrFtr& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_HdrFtr* default_instance_;
    bool m_has_type;
    ST_HdrFtr::Type m_type;
};

class ST_FtnEdn: public XSD::SimpleType
{
public:
    enum  Type
    {
        _normal_ = 0,
        _separator_,
        _continuationSeparator_,
        _continuationNotice_
    };
    ST_FtnEdn();
    ST_FtnEdn(const ST_FtnEdn::Type& _type);
    ~ST_FtnEdn();
    bool has_type() const;
    void set_type(const ST_FtnEdn::Type& _type);
    const ST_FtnEdn::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FtnEdn& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FtnEdn* default_instance_;
    bool m_has_type;
    ST_FtnEdn::Type m_type;
};

class ST_BrType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _page_ = 0,
        _column_,
        _textWrapping_
    };
    ST_BrType();
    ST_BrType(const ST_BrType::Type& _type);
    ~ST_BrType();
    bool has_type() const;
    void set_type(const ST_BrType::Type& _type);
    const ST_BrType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_BrType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_BrType* default_instance_;
    bool m_has_type;
    ST_BrType::Type m_type;
};

class ST_BrClear: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _left_,
        _right_,
        _all_
    };
    ST_BrClear();
    ST_BrClear(const ST_BrClear::Type& _type);
    ~ST_BrClear();
    bool has_type() const;
    void set_type(const ST_BrClear::Type& _type);
    const ST_BrClear::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_BrClear& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_BrClear* default_instance_;
    bool m_has_type;
    ST_BrClear::Type m_type;
};

class ST_PTabAlignment: public XSD::SimpleType
{
public:
    enum  Type
    {
        _left_ = 0,
        _center_,
        _right_
    };
    ST_PTabAlignment();
    ST_PTabAlignment(const ST_PTabAlignment::Type& _type);
    ~ST_PTabAlignment();
    bool has_type() const;
    void set_type(const ST_PTabAlignment::Type& _type);
    const ST_PTabAlignment::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PTabAlignment& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PTabAlignment* default_instance_;
    bool m_has_type;
    ST_PTabAlignment::Type m_type;
};

class ST_PTabRelativeTo: public XSD::SimpleType
{
public:
    enum  Type
    {
        _margin_ = 0,
        _indent_
    };
    ST_PTabRelativeTo();
    ST_PTabRelativeTo(const ST_PTabRelativeTo::Type& _type);
    ~ST_PTabRelativeTo();
    bool has_type() const;
    void set_type(const ST_PTabRelativeTo::Type& _type);
    const ST_PTabRelativeTo::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PTabRelativeTo& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PTabRelativeTo* default_instance_;
    bool m_has_type;
    ST_PTabRelativeTo::Type m_type;
};

class ST_PTabLeader: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _dot_,
        _hyphen_,
        _underscore_,
        _middleDot_
    };
    ST_PTabLeader();
    ST_PTabLeader(const ST_PTabLeader::Type& _type);
    ~ST_PTabLeader();
    bool has_type() const;
    void set_type(const ST_PTabLeader::Type& _type);
    const ST_PTabLeader::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_PTabLeader& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_PTabLeader* default_instance_;
    bool m_has_type;
    ST_PTabLeader::Type m_type;
};

class ST_ProofErr: public XSD::SimpleType
{
public:
    enum  Type
    {
        _spellStart_ = 0,
        _spellEnd_,
        _gramStart_,
        _gramEnd_
    };
    ST_ProofErr();
    ST_ProofErr(const ST_ProofErr::Type& _type);
    ~ST_ProofErr();
    bool has_type() const;
    void set_type(const ST_ProofErr::Type& _type);
    const ST_ProofErr::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ProofErr& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ProofErr* default_instance_;
    bool m_has_type;
    ST_ProofErr::Type m_type;
};

class ST_EdGrp: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _everyone_,
        _administrators_,
        _contributors_,
        _editors_,
        _owners_,
        _current_
    };
    ST_EdGrp();
    ST_EdGrp(const ST_EdGrp::Type& _type);
    ~ST_EdGrp();
    bool has_type() const;
    void set_type(const ST_EdGrp::Type& _type);
    const ST_EdGrp::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_EdGrp& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_EdGrp* default_instance_;
    bool m_has_type;
    ST_EdGrp::Type m_type;
};

class ST_Hint: public XSD::SimpleType
{
public:
    enum  Type
    {
        _default_ = 0,
        _eastAsia_,
        _cs_
    };
    ST_Hint();
    ST_Hint(const ST_Hint::Type& _type);
    ~ST_Hint();
    bool has_type() const;
    void set_type(const ST_Hint::Type& _type);
    const ST_Hint::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Hint& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Hint* default_instance_;
    bool m_has_type;
    ST_Hint::Type m_type;
};

class ST_Theme: public XSD::SimpleType
{
public:
    enum  Type
    {
        _majorEastAsia_ = 0,
        _majorBidi_,
        _majorAscii_,
        _majorHAnsi_,
        _minorEastAsia_,
        _minorBidi_,
        _minorAscii_,
        _minorHAnsi_
    };
    ST_Theme();
    ST_Theme(const ST_Theme::Type& _type);
    ~ST_Theme();
    bool has_type() const;
    void set_type(const ST_Theme::Type& _type);
    const ST_Theme::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Theme& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Theme* default_instance_;
    bool m_has_type;
    ST_Theme::Type m_type;
};

class ST_RubyAlign: public XSD::SimpleType
{
public:
    enum  Type
    {
        _center_ = 0,
        _distributeLetter_,
        _distributeSpace_,
        _left_,
        _right_,
        _rightVertical_
    };
    ST_RubyAlign();
    ST_RubyAlign(const ST_RubyAlign::Type& _type);
    ~ST_RubyAlign();
    bool has_type() const;
    void set_type(const ST_RubyAlign::Type& _type);
    const ST_RubyAlign::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_RubyAlign& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_RubyAlign* default_instance_;
    bool m_has_type;
    ST_RubyAlign::Type m_type;
};

class ST_Lock: public XSD::SimpleType
{
public:
    enum  Type
    {
        _sdtLocked_ = 0,
        _contentLocked_,
        _unlocked_,
        _sdtContentLocked_
    };
    ST_Lock();
    ST_Lock(const ST_Lock::Type& _type);
    ~ST_Lock();
    bool has_type() const;
    void set_type(const ST_Lock::Type& _type);
    const ST_Lock::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Lock& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Lock* default_instance_;
    bool m_has_type;
    ST_Lock::Type m_type;
};

class ST_SdtDateMappingType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _text_ = 0,
        _date_,
        _dateTime_
    };
    ST_SdtDateMappingType();
    ST_SdtDateMappingType(const ST_SdtDateMappingType::Type& _type);
    ~ST_SdtDateMappingType();
    bool has_type() const;
    void set_type(const ST_SdtDateMappingType::Type& _type);
    const ST_SdtDateMappingType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_SdtDateMappingType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_SdtDateMappingType* default_instance_;
    bool m_has_type;
    ST_SdtDateMappingType::Type m_type;
};

class ST_Direction: public XSD::SimpleType
{
public:
    enum  Type
    {
        _ltr_ = 0,
        _rtl_
    };
    ST_Direction();
    ST_Direction(const ST_Direction::Type& _type);
    ~ST_Direction();
    bool has_type() const;
    void set_type(const ST_Direction::Type& _type);
    const ST_Direction::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Direction& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Direction* default_instance_;
    bool m_has_type;
    ST_Direction::Type m_type;
};

class ST_TblWidth: public XSD::SimpleType
{
public:
    enum  Type
    {
        _nil_ = 0,
        _pct_,
        _dxa_,
        _auto_
    };
    ST_TblWidth();
    ST_TblWidth(const ST_TblWidth::Type& _type);
    ~ST_TblWidth();
    bool has_type() const;
    void set_type(const ST_TblWidth::Type& _type);
    const ST_TblWidth::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TblWidth& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TblWidth* default_instance_;
    bool m_has_type;
    ST_TblWidth::Type m_type;
};

class ST_MeasurementOrPercent: public XSD::SimpleType
{
public:
    ST_MeasurementOrPercent();
    ~ST_MeasurementOrPercent();
    bool has_ST_DecimalNumberOrPercent() const;
    ST_DecimalNumberOrPercent* mutable_ST_DecimalNumberOrPercent();
    const ST_DecimalNumberOrPercent& get_ST_DecimalNumberOrPercent() const;
    void clear_ST_DecimalNumberOrPercent();
    bool has_ST_UniversalMeasure() const;
    ns_s::ST_UniversalMeasure* mutable_ST_UniversalMeasure();
    const ns_s::ST_UniversalMeasure& get_ST_UniversalMeasure() const;
    void clear_ST_UniversalMeasure();
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_MeasurementOrPercent& default_instance();
protected:
private:
    bool m_has_ST_DecimalNumberOrPercent;
    ST_DecimalNumberOrPercent* m_ST_DecimalNumberOrPercent;
    bool m_has_ST_UniversalMeasure;
    ns_s::ST_UniversalMeasure* m_ST_UniversalMeasure;
    static ST_MeasurementOrPercent* default_instance_;
};

class ST_Merge: public XSD::SimpleType
{
public:
    enum  Type
    {
        _continue_ = 0,
        _restart_
    };
    ST_Merge();
    ST_Merge(const ST_Merge::Type& _type);
    ~ST_Merge();
    bool has_type() const;
    void set_type(const ST_Merge::Type& _type);
    const ST_Merge::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Merge& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Merge* default_instance_;
    bool m_has_type;
    ST_Merge::Type m_type;
};

class ST_Cnf: public XSD::SimpleType
{
public:
    ST_Cnf();
    ST_Cnf(const XSD::string_& _string);
    ~ST_Cnf();
    bool has_string() const;
    void set_string(const XSD::string_& _string);
    const XSD::string_& get_string() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Cnf& default_instance();
    std::string toString() const;
protected:
private:
    static ST_Cnf* default_instance_;
    bool m_has_string;
    XSD::string_ m_string;
};

class ST_TblLayoutType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _fixed_ = 0,
        _autofit_
    };
    ST_TblLayoutType();
    ST_TblLayoutType(const ST_TblLayoutType::Type& _type);
    ~ST_TblLayoutType();
    bool has_type() const;
    void set_type(const ST_TblLayoutType::Type& _type);
    const ST_TblLayoutType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TblLayoutType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TblLayoutType* default_instance_;
    bool m_has_type;
    ST_TblLayoutType::Type m_type;
};

class ST_TblOverlap: public XSD::SimpleType
{
public:
    enum  Type
    {
        _never_ = 0,
        _overlap_
    };
    ST_TblOverlap();
    ST_TblOverlap(const ST_TblOverlap::Type& _type);
    ~ST_TblOverlap();
    bool has_type() const;
    void set_type(const ST_TblOverlap::Type& _type);
    const ST_TblOverlap::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TblOverlap& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TblOverlap* default_instance_;
    bool m_has_type;
    ST_TblOverlap::Type m_type;
};

class ST_FtnPos: public XSD::SimpleType
{
public:
    enum  Type
    {
        _pageBottom_ = 0,
        _beneathText_,
        _sectEnd_,
        _docEnd_
    };
    ST_FtnPos();
    ST_FtnPos(const ST_FtnPos::Type& _type);
    ~ST_FtnPos();
    bool has_type() const;
    void set_type(const ST_FtnPos::Type& _type);
    const ST_FtnPos::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FtnPos& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FtnPos* default_instance_;
    bool m_has_type;
    ST_FtnPos::Type m_type;
};

class ST_EdnPos: public XSD::SimpleType
{
public:
    enum  Type
    {
        _sectEnd_ = 0,
        _docEnd_
    };
    ST_EdnPos();
    ST_EdnPos(const ST_EdnPos::Type& _type);
    ~ST_EdnPos();
    bool has_type() const;
    void set_type(const ST_EdnPos::Type& _type);
    const ST_EdnPos::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_EdnPos& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_EdnPos* default_instance_;
    bool m_has_type;
    ST_EdnPos::Type m_type;
};

class ST_RestartNumber: public XSD::SimpleType
{
public:
    enum  Type
    {
        _continuous_ = 0,
        _eachSect_,
        _eachPage_
    };
    ST_RestartNumber();
    ST_RestartNumber(const ST_RestartNumber::Type& _type);
    ~ST_RestartNumber();
    bool has_type() const;
    void set_type(const ST_RestartNumber::Type& _type);
    const ST_RestartNumber::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_RestartNumber& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_RestartNumber* default_instance_;
    bool m_has_type;
    ST_RestartNumber::Type m_type;
};

class ST_MailMergeSourceType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _database_ = 0,
        _addressBook_,
        _document1_,
        _document2_,
        _text_,
        _email_,
        _native_,
        _legacy_,
        _master_
    };
    ST_MailMergeSourceType();
    ST_MailMergeSourceType(const ST_MailMergeSourceType::Type& _type);
    ~ST_MailMergeSourceType();
    bool has_type() const;
    void set_type(const ST_MailMergeSourceType::Type& _type);
    const ST_MailMergeSourceType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_MailMergeSourceType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_MailMergeSourceType* default_instance_;
    bool m_has_type;
    ST_MailMergeSourceType::Type m_type;
};

class ST_TargetScreenSz: public XSD::SimpleType
{
public:
    enum  Type
    {
        _544x376_ = 0,
        _640x480_,
        _720x512_,
        _800x600_,
        _1024x768_,
        _1152x882_,
        _1152x900_,
        _1280x1024_,
        _1600x1200_,
        _1800x1440_,
        _1920x1200_
    };
    ST_TargetScreenSz();
    ST_TargetScreenSz(const ST_TargetScreenSz::Type& _type);
    ~ST_TargetScreenSz();
    bool has_type() const;
    void set_type(const ST_TargetScreenSz::Type& _type);
    const ST_TargetScreenSz::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TargetScreenSz& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TargetScreenSz* default_instance_;
    bool m_has_type;
    ST_TargetScreenSz::Type m_type;
};

class ST_CharacterSpacing: public XSD::SimpleType
{
public:
    enum  Type
    {
        _doNotCompress_ = 0,
        _compressPunctuation_,
        _compressPunctuationAndJapaneseKana_
    };
    ST_CharacterSpacing();
    ST_CharacterSpacing(const ST_CharacterSpacing::Type& _type);
    ~ST_CharacterSpacing();
    bool has_type() const;
    void set_type(const ST_CharacterSpacing::Type& _type);
    const ST_CharacterSpacing::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_CharacterSpacing& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_CharacterSpacing* default_instance_;
    bool m_has_type;
    ST_CharacterSpacing::Type m_type;
};

class ST_WmlColorSchemeIndex: public XSD::SimpleType
{
public:
    enum  Type
    {
        _dark1_ = 0,
        _light1_,
        _dark2_,
        _light2_,
        _accent1_,
        _accent2_,
        _accent3_,
        _accent4_,
        _accent5_,
        _accent6_,
        _hyperlink_,
        _followedHyperlink_
    };
    ST_WmlColorSchemeIndex();
    ST_WmlColorSchemeIndex(const ST_WmlColorSchemeIndex::Type& _type);
    ~ST_WmlColorSchemeIndex();
    bool has_type() const;
    void set_type(const ST_WmlColorSchemeIndex::Type& _type);
    const ST_WmlColorSchemeIndex::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_WmlColorSchemeIndex& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_WmlColorSchemeIndex* default_instance_;
    bool m_has_type;
    ST_WmlColorSchemeIndex::Type m_type;
};

class ST_StyleSort: public XSD::SimpleType
{
public:
    enum  Type
    {
        _name_ = 0,
        _priority_,
        _default_,
        _font_,
        _basedOn_,
        _type_,
        _0000_,
        _0001_,
        _0002_,
        _0003_,
        _0004_,
        _0005_
    };
    ST_StyleSort();
    ST_StyleSort(const ST_StyleSort::Type& _type);
    ~ST_StyleSort();
    bool has_type() const;
    void set_type(const ST_StyleSort::Type& _type);
    const ST_StyleSort::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_StyleSort& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_StyleSort* default_instance_;
    bool m_has_type;
    ST_StyleSort::Type m_type;
};

class ST_FrameScrollbar: public XSD::SimpleType
{
public:
    enum  Type
    {
        _on_ = 0,
        _off_,
        _auto_
    };
    ST_FrameScrollbar();
    ST_FrameScrollbar(const ST_FrameScrollbar::Type& _type);
    ~ST_FrameScrollbar();
    bool has_type() const;
    void set_type(const ST_FrameScrollbar::Type& _type);
    const ST_FrameScrollbar::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FrameScrollbar& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FrameScrollbar* default_instance_;
    bool m_has_type;
    ST_FrameScrollbar::Type m_type;
};

class ST_FrameLayout: public XSD::SimpleType
{
public:
    enum  Type
    {
        _rows_ = 0,
        _cols_,
        _none_
    };
    ST_FrameLayout();
    ST_FrameLayout(const ST_FrameLayout::Type& _type);
    ~ST_FrameLayout();
    bool has_type() const;
    void set_type(const ST_FrameLayout::Type& _type);
    const ST_FrameLayout::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FrameLayout& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FrameLayout* default_instance_;
    bool m_has_type;
    ST_FrameLayout::Type m_type;
};

class ST_LevelSuffix: public XSD::SimpleType
{
public:
    enum  Type
    {
        _tab_ = 0,
        _space_,
        _nothing_
    };
    ST_LevelSuffix();
    ST_LevelSuffix(const ST_LevelSuffix::Type& _type);
    ~ST_LevelSuffix();
    bool has_type() const;
    void set_type(const ST_LevelSuffix::Type& _type);
    const ST_LevelSuffix::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_LevelSuffix& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_LevelSuffix* default_instance_;
    bool m_has_type;
    ST_LevelSuffix::Type m_type;
};

class ST_MultiLevelType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _singleLevel_ = 0,
        _multilevel_,
        _hybridMultilevel_
    };
    ST_MultiLevelType();
    ST_MultiLevelType(const ST_MultiLevelType::Type& _type);
    ~ST_MultiLevelType();
    bool has_type() const;
    void set_type(const ST_MultiLevelType::Type& _type);
    const ST_MultiLevelType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_MultiLevelType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_MultiLevelType* default_instance_;
    bool m_has_type;
    ST_MultiLevelType::Type m_type;
};

class ST_TblStyleOverrideType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _wholeTable_ = 0,
        _firstRow_,
        _lastRow_,
        _firstCol_,
        _lastCol_,
        _band1Vert_,
        _band2Vert_,
        _band1Horz_,
        _band2Horz_,
        _neCell_,
        _nwCell_,
        _seCell_,
        _swCell_
    };
    ST_TblStyleOverrideType();
    ST_TblStyleOverrideType(const ST_TblStyleOverrideType::Type& _type);
    ~ST_TblStyleOverrideType();
    bool has_type() const;
    void set_type(const ST_TblStyleOverrideType::Type& _type);
    const ST_TblStyleOverrideType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_TblStyleOverrideType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_TblStyleOverrideType* default_instance_;
    bool m_has_type;
    ST_TblStyleOverrideType::Type m_type;
};

class ST_StyleType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _paragraph_ = 0,
        _character_,
        _table_,
        _numbering_
    };
    ST_StyleType();
    ST_StyleType(const ST_StyleType::Type& _type);
    ~ST_StyleType();
    bool has_type() const;
    void set_type(const ST_StyleType::Type& _type);
    const ST_StyleType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_StyleType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_StyleType* default_instance_;
    bool m_has_type;
    ST_StyleType::Type m_type;
};

class ST_FontFamily: public XSD::SimpleType
{
public:
    enum  Type
    {
        _decorative_ = 0,
        _modern_,
        _roman_,
        _script_,
        _swiss_,
        _auto_
    };
    ST_FontFamily();
    ST_FontFamily(const ST_FontFamily::Type& _type);
    ~ST_FontFamily();
    bool has_type() const;
    void set_type(const ST_FontFamily::Type& _type);
    const ST_FontFamily::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_FontFamily& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_FontFamily* default_instance_;
    bool m_has_type;
    ST_FontFamily::Type m_type;
};

class ST_Pitch: public XSD::SimpleType
{
public:
    enum  Type
    {
        _fixed_ = 0,
        _variable_,
        _default_
    };
    ST_Pitch();
    ST_Pitch(const ST_Pitch::Type& _type);
    ~ST_Pitch();
    bool has_type() const;
    void set_type(const ST_Pitch::Type& _type);
    const ST_Pitch::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_Pitch& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_Pitch* default_instance_;
    bool m_has_type;
    ST_Pitch::Type m_type;
};

class ST_ThemeColor: public XSD::SimpleType
{
public:
    enum  Type
    {
        _dark1_ = 0,
        _light1_,
        _dark2_,
        _light2_,
        _accent1_,
        _accent2_,
        _accent3_,
        _accent4_,
        _accent5_,
        _accent6_,
        _hyperlink_,
        _followedHyperlink_,
        _none_,
        _background1_,
        _text1_,
        _background2_,
        _text2_
    };
    ST_ThemeColor();
    ST_ThemeColor(const ST_ThemeColor::Type& _type);
    ~ST_ThemeColor();
    bool has_type() const;
    void set_type(const ST_ThemeColor::Type& _type);
    const ST_ThemeColor::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ThemeColor& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ThemeColor* default_instance_;
    bool m_has_type;
    ST_ThemeColor::Type m_type;
};

class ST_DocPartBehavior: public XSD::SimpleType
{
public:
    enum  Type
    {
        _content_ = 0,
        _p_,
        _pg_
    };
    ST_DocPartBehavior();
    ST_DocPartBehavior(const ST_DocPartBehavior::Type& _type);
    ~ST_DocPartBehavior();
    bool has_type() const;
    void set_type(const ST_DocPartBehavior::Type& _type);
    const ST_DocPartBehavior::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DocPartBehavior& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DocPartBehavior* default_instance_;
    bool m_has_type;
    ST_DocPartBehavior::Type m_type;
};

class ST_DocPartType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _none_ = 0,
        _normal_,
        _autoExp_,
        _toolbar_,
        _speller_,
        _formFld_,
        _bbPlcHdr_
    };
    ST_DocPartType();
    ST_DocPartType(const ST_DocPartType::Type& _type);
    ~ST_DocPartType();
    bool has_type() const;
    void set_type(const ST_DocPartType::Type& _type);
    const ST_DocPartType::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DocPartType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DocPartType* default_instance_;
    bool m_has_type;
    ST_DocPartType::Type m_type;
};

class ST_DocPartGallery: public XSD::SimpleType
{
public:
    enum  Type
    {
        _placeholder_ = 0,
        _any_,
        _default_,
        _docParts_,
        _coverPg_,
        _eq_,
        _ftrs_,
        _hdrs_,
        _pgNum_,
        _tbls_,
        _watermarks_,
        _autoTxt_,
        _txtBox_,
        _pgNumT_,
        _pgNumB_,
        _pgNumMargins_,
        _tblOfContents_,
        _bib_,
        _custQuickParts_,
        _custCoverPg_,
        _custEq_,
        _custFtrs_,
        _custHdrs_,
        _custPgNum_,
        _custTbls_,
        _custWatermarks_,
        _custAutoTxt_,
        _custTxtBox_,
        _custPgNumT_,
        _custPgNumB_,
        _custPgNumMargins_,
        _custTblOfContents_,
        _custBib_,
        _custom1_,
        _custom2_,
        _custom3_,
        _custom4_,
        _custom5_
    };
    ST_DocPartGallery();
    ST_DocPartGallery(const ST_DocPartGallery::Type& _type);
    ~ST_DocPartGallery();
    bool has_type() const;
    void set_type(const ST_DocPartGallery::Type& _type);
    const ST_DocPartGallery::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_DocPartGallery& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_DocPartGallery* default_instance_;
    bool m_has_type;
    ST_DocPartGallery::Type m_type;
};

class ST_CaptionPos: public XSD::SimpleType
{
public:
    enum  Type
    {
        _above_ = 0,
        _below_,
        _left_,
        _right_
    };
    ST_CaptionPos();
    ST_CaptionPos(const ST_CaptionPos::Type& _type);
    ~ST_CaptionPos();
    bool has_type() const;
    void set_type(const ST_CaptionPos::Type& _type);
    const ST_CaptionPos::Type& get_type() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_CaptionPos& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_CaptionPos* default_instance_;
    bool m_has_type;
    ST_CaptionPos::Type m_type;
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

class CT_OnOff: public XSD::ComplexType
{
public:
    CT_OnOff();
    ~CT_OnOff();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_OnOff& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_OnOff& _val_attr);
    const ns_s::ST_OnOff& get_val_attr() const;
protected:
private:
    static CT_OnOff* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_OnOff* m_val_attr;
};

class CT_LongHexNumber: public XSD::ComplexType
{
public:
    CT_LongHexNumber();
    ~CT_LongHexNumber();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LongHexNumber& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_LongHexNumber& _val_attr);
    const ST_LongHexNumber& get_val_attr() const;
protected:
private:
    static CT_LongHexNumber* default_instance_;
    bool m_has_val_attr;
    ST_LongHexNumber* m_val_attr;
};

class CT_Charset: public XSD::ComplexType
{
public:
    CT_Charset();
    ~CT_Charset();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Charset& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_UcharHexNumber& _val_attr);
    const ST_UcharHexNumber& get_val_attr() const;
    bool has_characterSet_attr() const;
    void set_characterSet_attr(const ns_s::ST_String& _characterSet_attr);
    const ns_s::ST_String& get_characterSet_attr() const;
protected:
private:
    static CT_Charset* default_instance_;
    bool m_has_val_attr;
    ST_UcharHexNumber* m_val_attr;
    bool m_has_characterSet_attr;
    ns_s::ST_String* m_characterSet_attr;
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

class CT_UnsignedDecimalNumber: public XSD::ComplexType
{
public:
    CT_UnsignedDecimalNumber();
    ~CT_UnsignedDecimalNumber();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_UnsignedDecimalNumber& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_UnsignedDecimalNumber& _val_attr);
    const ns_s::ST_UnsignedDecimalNumber& get_val_attr() const;
protected:
private:
    static CT_UnsignedDecimalNumber* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_UnsignedDecimalNumber* m_val_attr;
};

class CT_DecimalNumberOrPrecent: public XSD::ComplexType
{
public:
    CT_DecimalNumberOrPrecent();
    ~CT_DecimalNumberOrPrecent();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DecimalNumberOrPrecent& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_DecimalNumberOrPercent& _val_attr);
    const ST_DecimalNumberOrPercent& get_val_attr() const;
protected:
private:
    static CT_DecimalNumberOrPrecent* default_instance_;
    bool m_has_val_attr;
    ST_DecimalNumberOrPercent* m_val_attr;
};

class CT_TwipsMeasure: public XSD::ComplexType
{
public:
    CT_TwipsMeasure();
    ~CT_TwipsMeasure();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TwipsMeasure& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_TwipsMeasure& _val_attr);
    const ns_s::ST_TwipsMeasure& get_val_attr() const;
protected:
private:
    static CT_TwipsMeasure* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_TwipsMeasure* m_val_attr;
};

class CT_SignedTwipsMeasure: public XSD::ComplexType
{
public:
    CT_SignedTwipsMeasure();
    ~CT_SignedTwipsMeasure();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SignedTwipsMeasure& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_SignedTwipsMeasure& _val_attr);
    const ST_SignedTwipsMeasure& get_val_attr() const;
protected:
private:
    static CT_SignedTwipsMeasure* default_instance_;
    bool m_has_val_attr;
    ST_SignedTwipsMeasure* m_val_attr;
};

class CT_PixelsMeasure: public XSD::ComplexType
{
public:
    CT_PixelsMeasure();
    ~CT_PixelsMeasure();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PixelsMeasure& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_PixelsMeasure& _val_attr);
    const ST_PixelsMeasure& get_val_attr() const;
protected:
private:
    static CT_PixelsMeasure* default_instance_;
    bool m_has_val_attr;
    ST_PixelsMeasure* m_val_attr;
};

class CT_HpsMeasure: public XSD::ComplexType
{
public:
    CT_HpsMeasure();
    ~CT_HpsMeasure();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HpsMeasure& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_HpsMeasure& _val_attr);
    const ST_HpsMeasure& get_val_attr() const;
protected:
private:
    static CT_HpsMeasure* default_instance_;
    bool m_has_val_attr;
    ST_HpsMeasure* m_val_attr;
};

class CT_SignedHpsMeasure: public XSD::ComplexType
{
public:
    CT_SignedHpsMeasure();
    ~CT_SignedHpsMeasure();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SignedHpsMeasure& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_SignedHpsMeasure& _val_attr);
    const ST_SignedHpsMeasure& get_val_attr() const;
protected:
private:
    static CT_SignedHpsMeasure* default_instance_;
    bool m_has_val_attr;
    ST_SignedHpsMeasure* m_val_attr;
};

class CT_MacroName: public XSD::ComplexType
{
public:
    CT_MacroName();
    ~CT_MacroName();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MacroName& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_MacroName& _val_attr);
    const ST_MacroName& get_val_attr() const;
protected:
private:
    static CT_MacroName* default_instance_;
    bool m_has_val_attr;
    ST_MacroName* m_val_attr;
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
    void set_val_attr(const ns_s::ST_String& _val_attr);
    const ns_s::ST_String& get_val_attr() const;
protected:
private:
    static CT_String* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_String* m_val_attr;
};

class CT_TextScale: public XSD::ComplexType
{
public:
    CT_TextScale();
    ~CT_TextScale();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TextScale& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_TextScale& _val_attr);
    const ST_TextScale& get_val_attr() const;
protected:
private:
    static CT_TextScale* default_instance_;
    bool m_has_val_attr;
    ST_TextScale* m_val_attr;
};

class CT_Highlight: public XSD::ComplexType
{
public:
    CT_Highlight();
    ~CT_Highlight();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Highlight& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_HighlightColor& _val_attr);
    const ST_HighlightColor& get_val_attr() const;
protected:
private:
    static CT_Highlight* default_instance_;
    bool m_has_val_attr;
    ST_HighlightColor* m_val_attr;
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
    void set_val_attr(const ST_HexColor& _val_attr);
    const ST_HexColor& get_val_attr() const;
    bool has_themeColor_attr() const;
    void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr);
    const ST_ThemeColor& get_themeColor_attr() const;
    bool has_themeTint_attr() const;
    void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr);
    const ST_UcharHexNumber& get_themeTint_attr() const;
    bool has_themeShade_attr() const;
    void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr);
    const ST_UcharHexNumber& get_themeShade_attr() const;
protected:
private:
    static CT_Color* default_instance_;
    bool m_has_val_attr;
    ST_HexColor* m_val_attr;
    bool m_has_themeColor_attr;
    ST_ThemeColor* m_themeColor_attr;
    bool m_has_themeTint_attr;
    ST_UcharHexNumber* m_themeTint_attr;
    bool m_has_themeShade_attr;
    ST_UcharHexNumber* m_themeShade_attr;
};

class CT_Lang: public XSD::ComplexType
{
public:
    CT_Lang();
    ~CT_Lang();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Lang& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_Lang& _val_attr);
    const ns_s::ST_Lang& get_val_attr() const;
protected:
private:
    static CT_Lang* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_Lang* m_val_attr;
};

class CT_Guid: public XSD::ComplexType
{
public:
    CT_Guid();
    ~CT_Guid();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Guid& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_Guid& _val_attr);
    const ns_s::ST_Guid& get_val_attr() const;
protected:
private:
    static CT_Guid* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_Guid* m_val_attr;
};

class CT_Underline: public XSD::ComplexType
{
public:
    CT_Underline();
    ~CT_Underline();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Underline& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Underline& _val_attr);
    const ST_Underline& get_val_attr() const;
    bool has_color_attr() const;
    void set_color_attr(const ST_HexColor& _color_attr);
    const ST_HexColor& get_color_attr() const;
    bool has_themeColor_attr() const;
    void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr);
    const ST_ThemeColor& get_themeColor_attr() const;
    bool has_themeTint_attr() const;
    void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr);
    const ST_UcharHexNumber& get_themeTint_attr() const;
    bool has_themeShade_attr() const;
    void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr);
    const ST_UcharHexNumber& get_themeShade_attr() const;
protected:
private:
    static CT_Underline* default_instance_;
    bool m_has_val_attr;
    ST_Underline* m_val_attr;
    bool m_has_color_attr;
    ST_HexColor* m_color_attr;
    bool m_has_themeColor_attr;
    ST_ThemeColor* m_themeColor_attr;
    bool m_has_themeTint_attr;
    ST_UcharHexNumber* m_themeTint_attr;
    bool m_has_themeShade_attr;
    ST_UcharHexNumber* m_themeShade_attr;
};

class CT_TextEffect: public XSD::ComplexType
{
public:
    CT_TextEffect();
    ~CT_TextEffect();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TextEffect& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_TextEffect& _val_attr);
    const ST_TextEffect& get_val_attr() const;
protected:
private:
    static CT_TextEffect* default_instance_;
    bool m_has_val_attr;
    ST_TextEffect* m_val_attr;
};

class CT_Border: public XSD::ComplexType
{
public:
    CT_Border();
    ~CT_Border();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Border& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Border& _val_attr);
    const ST_Border& get_val_attr() const;
    bool has_color_attr() const;
    void set_color_attr(const ST_HexColor& _color_attr);
    const ST_HexColor& get_color_attr() const;
    bool has_themeColor_attr() const;
    void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr);
    const ST_ThemeColor& get_themeColor_attr() const;
    bool has_themeTint_attr() const;
    void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr);
    const ST_UcharHexNumber& get_themeTint_attr() const;
    bool has_themeShade_attr() const;
    void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr);
    const ST_UcharHexNumber& get_themeShade_attr() const;
    bool has_sz_attr() const;
    void set_sz_attr(const ST_EighthPointMeasure& _sz_attr);
    const ST_EighthPointMeasure& get_sz_attr() const;
    bool has_space_attr() const;
    void set_space_attr(const ST_PointMeasure& _space_attr);
    const ST_PointMeasure& get_space_attr() const;
    bool has_shadow_attr() const;
    void set_shadow_attr(const ns_s::ST_OnOff& _shadow_attr);
    const ns_s::ST_OnOff& get_shadow_attr() const;
    bool has_frame_attr() const;
    void set_frame_attr(const ns_s::ST_OnOff& _frame_attr);
    const ns_s::ST_OnOff& get_frame_attr() const;
protected:
private:
    static CT_Border* default_instance_;
    bool m_has_val_attr;
    ST_Border* m_val_attr;
    bool m_has_color_attr;
    ST_HexColor* m_color_attr;
    bool m_has_themeColor_attr;
    ST_ThemeColor* m_themeColor_attr;
    bool m_has_themeTint_attr;
    ST_UcharHexNumber* m_themeTint_attr;
    bool m_has_themeShade_attr;
    ST_UcharHexNumber* m_themeShade_attr;
    bool m_has_sz_attr;
    ST_EighthPointMeasure* m_sz_attr;
    bool m_has_space_attr;
    ST_PointMeasure* m_space_attr;
    bool m_has_shadow_attr;
    ns_s::ST_OnOff* m_shadow_attr;
    bool m_has_frame_attr;
    ns_s::ST_OnOff* m_frame_attr;
};

class CT_Shd: public XSD::ComplexType
{
public:
    CT_Shd();
    ~CT_Shd();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Shd& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Shd& _val_attr);
    const ST_Shd& get_val_attr() const;
    bool has_color_attr() const;
    void set_color_attr(const ST_HexColor& _color_attr);
    const ST_HexColor& get_color_attr() const;
    bool has_themeColor_attr() const;
    void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr);
    const ST_ThemeColor& get_themeColor_attr() const;
    bool has_themeTint_attr() const;
    void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr);
    const ST_UcharHexNumber& get_themeTint_attr() const;
    bool has_themeShade_attr() const;
    void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr);
    const ST_UcharHexNumber& get_themeShade_attr() const;
    bool has_fill_attr() const;
    void set_fill_attr(const ST_HexColor& _fill_attr);
    const ST_HexColor& get_fill_attr() const;
    bool has_themeFill_attr() const;
    void set_themeFill_attr(const ST_ThemeColor& _themeFill_attr);
    const ST_ThemeColor& get_themeFill_attr() const;
    bool has_themeFillTint_attr() const;
    void set_themeFillTint_attr(const ST_UcharHexNumber& _themeFillTint_attr);
    const ST_UcharHexNumber& get_themeFillTint_attr() const;
    bool has_themeFillShade_attr() const;
    void set_themeFillShade_attr(const ST_UcharHexNumber& _themeFillShade_attr);
    const ST_UcharHexNumber& get_themeFillShade_attr() const;
protected:
private:
    static CT_Shd* default_instance_;
    bool m_has_val_attr;
    ST_Shd* m_val_attr;
    bool m_has_color_attr;
    ST_HexColor* m_color_attr;
    bool m_has_themeColor_attr;
    ST_ThemeColor* m_themeColor_attr;
    bool m_has_themeTint_attr;
    ST_UcharHexNumber* m_themeTint_attr;
    bool m_has_themeShade_attr;
    ST_UcharHexNumber* m_themeShade_attr;
    bool m_has_fill_attr;
    ST_HexColor* m_fill_attr;
    bool m_has_themeFill_attr;
    ST_ThemeColor* m_themeFill_attr;
    bool m_has_themeFillTint_attr;
    ST_UcharHexNumber* m_themeFillTint_attr;
    bool m_has_themeFillShade_attr;
    ST_UcharHexNumber* m_themeFillShade_attr;
};

class CT_VerticalAlignRun: public XSD::ComplexType
{
public:
    CT_VerticalAlignRun();
    ~CT_VerticalAlignRun();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_VerticalAlignRun& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_VerticalAlignRun& _val_attr);
    const ns_s::ST_VerticalAlignRun& get_val_attr() const;
protected:
private:
    static CT_VerticalAlignRun* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_VerticalAlignRun* m_val_attr;
};

class CT_FitText: public XSD::ComplexType
{
public:
    CT_FitText();
    ~CT_FitText();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FitText& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_TwipsMeasure& _val_attr);
    const ns_s::ST_TwipsMeasure& get_val_attr() const;
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
protected:
private:
    static CT_FitText* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_TwipsMeasure* m_val_attr;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
};

class CT_Em: public XSD::ComplexType
{
public:
    CT_Em();
    ~CT_Em();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Em& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Em& _val_attr);
    const ST_Em& get_val_attr() const;
protected:
private:
    static CT_Em* default_instance_;
    bool m_has_val_attr;
    ST_Em* m_val_attr;
};

class CT_Language: public XSD::ComplexType
{
public:
    CT_Language();
    ~CT_Language();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Language& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_Lang& _val_attr);
    const ns_s::ST_Lang& get_val_attr() const;
    bool has_eastAsia_attr() const;
    void set_eastAsia_attr(const ns_s::ST_Lang& _eastAsia_attr);
    const ns_s::ST_Lang& get_eastAsia_attr() const;
    bool has_bidi_attr() const;
    void set_bidi_attr(const ns_s::ST_Lang& _bidi_attr);
    const ns_s::ST_Lang& get_bidi_attr() const;
protected:
private:
    static CT_Language* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_Lang* m_val_attr;
    bool m_has_eastAsia_attr;
    ns_s::ST_Lang* m_eastAsia_attr;
    bool m_has_bidi_attr;
    ns_s::ST_Lang* m_bidi_attr;
};

class CT_EastAsianLayout: public XSD::ComplexType
{
public:
    CT_EastAsianLayout();
    ~CT_EastAsianLayout();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_EastAsianLayout& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_combine_attr() const;
    void set_combine_attr(const ns_s::ST_OnOff& _combine_attr);
    const ns_s::ST_OnOff& get_combine_attr() const;
    bool has_combineBrackets_attr() const;
    void set_combineBrackets_attr(const ST_CombineBrackets& _combineBrackets_attr);
    const ST_CombineBrackets& get_combineBrackets_attr() const;
    bool has_vert_attr() const;
    void set_vert_attr(const ns_s::ST_OnOff& _vert_attr);
    const ns_s::ST_OnOff& get_vert_attr() const;
    bool has_vertCompress_attr() const;
    void set_vertCompress_attr(const ns_s::ST_OnOff& _vertCompress_attr);
    const ns_s::ST_OnOff& get_vertCompress_attr() const;
protected:
private:
    static CT_EastAsianLayout* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_combine_attr;
    ns_s::ST_OnOff* m_combine_attr;
    bool m_has_combineBrackets_attr;
    ST_CombineBrackets* m_combineBrackets_attr;
    bool m_has_vert_attr;
    ns_s::ST_OnOff* m_vert_attr;
    bool m_has_vertCompress_attr;
    ns_s::ST_OnOff* m_vertCompress_attr;
};

class CT_FramePr: public XSD::ComplexType
{
public:
    CT_FramePr();
    ~CT_FramePr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FramePr& default_instance();
    bool has_dropCap_attr() const;
    void set_dropCap_attr(const ST_DropCap& _dropCap_attr);
    const ST_DropCap& get_dropCap_attr() const;
    bool has_lines_attr() const;
    void set_lines_attr(const ST_DecimalNumber& _lines_attr);
    const ST_DecimalNumber& get_lines_attr() const;
    bool has_w_attr() const;
    void set_w_attr(const ns_s::ST_TwipsMeasure& _w_attr);
    const ns_s::ST_TwipsMeasure& get_w_attr() const;
    bool has_h_attr() const;
    void set_h_attr(const ns_s::ST_TwipsMeasure& _h_attr);
    const ns_s::ST_TwipsMeasure& get_h_attr() const;
    bool has_vSpace_attr() const;
    void set_vSpace_attr(const ns_s::ST_TwipsMeasure& _vSpace_attr);
    const ns_s::ST_TwipsMeasure& get_vSpace_attr() const;
    bool has_hSpace_attr() const;
    void set_hSpace_attr(const ns_s::ST_TwipsMeasure& _hSpace_attr);
    const ns_s::ST_TwipsMeasure& get_hSpace_attr() const;
    bool has_wrap_attr() const;
    void set_wrap_attr(const ST_Wrap& _wrap_attr);
    const ST_Wrap& get_wrap_attr() const;
    bool has_hAnchor_attr() const;
    void set_hAnchor_attr(const ST_HAnchor& _hAnchor_attr);
    const ST_HAnchor& get_hAnchor_attr() const;
    bool has_vAnchor_attr() const;
    void set_vAnchor_attr(const ST_VAnchor& _vAnchor_attr);
    const ST_VAnchor& get_vAnchor_attr() const;
    bool has_x_attr() const;
    void set_x_attr(const ST_SignedTwipsMeasure& _x_attr);
    const ST_SignedTwipsMeasure& get_x_attr() const;
    bool has_xAlign_attr() const;
    void set_xAlign_attr(const ns_s::ST_XAlign& _xAlign_attr);
    const ns_s::ST_XAlign& get_xAlign_attr() const;
    bool has_y_attr() const;
    void set_y_attr(const ST_SignedTwipsMeasure& _y_attr);
    const ST_SignedTwipsMeasure& get_y_attr() const;
    bool has_yAlign_attr() const;
    void set_yAlign_attr(const ns_s::ST_YAlign& _yAlign_attr);
    const ns_s::ST_YAlign& get_yAlign_attr() const;
    bool has_hRule_attr() const;
    void set_hRule_attr(const ST_HeightRule& _hRule_attr);
    const ST_HeightRule& get_hRule_attr() const;
    bool has_anchorLock_attr() const;
    void set_anchorLock_attr(const ns_s::ST_OnOff& _anchorLock_attr);
    const ns_s::ST_OnOff& get_anchorLock_attr() const;
protected:
private:
    static CT_FramePr* default_instance_;
    bool m_has_dropCap_attr;
    ST_DropCap* m_dropCap_attr;
    bool m_has_lines_attr;
    ST_DecimalNumber* m_lines_attr;
    bool m_has_w_attr;
    ns_s::ST_TwipsMeasure* m_w_attr;
    bool m_has_h_attr;
    ns_s::ST_TwipsMeasure* m_h_attr;
    bool m_has_vSpace_attr;
    ns_s::ST_TwipsMeasure* m_vSpace_attr;
    bool m_has_hSpace_attr;
    ns_s::ST_TwipsMeasure* m_hSpace_attr;
    bool m_has_wrap_attr;
    ST_Wrap* m_wrap_attr;
    bool m_has_hAnchor_attr;
    ST_HAnchor* m_hAnchor_attr;
    bool m_has_vAnchor_attr;
    ST_VAnchor* m_vAnchor_attr;
    bool m_has_x_attr;
    ST_SignedTwipsMeasure* m_x_attr;
    bool m_has_xAlign_attr;
    ns_s::ST_XAlign* m_xAlign_attr;
    bool m_has_y_attr;
    ST_SignedTwipsMeasure* m_y_attr;
    bool m_has_yAlign_attr;
    ns_s::ST_YAlign* m_yAlign_attr;
    bool m_has_hRule_attr;
    ST_HeightRule* m_hRule_attr;
    bool m_has_anchorLock_attr;
    ns_s::ST_OnOff* m_anchorLock_attr;
};

class CT_TabStop: public XSD::ComplexType
{
public:
    CT_TabStop();
    ~CT_TabStop();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TabStop& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_TabJc& _val_attr);
    const ST_TabJc& get_val_attr() const;
    bool has_leader_attr() const;
    void set_leader_attr(const ST_TabTlc& _leader_attr);
    const ST_TabTlc& get_leader_attr() const;
    bool has_pos_attr() const;
    void set_pos_attr(const ST_SignedTwipsMeasure& _pos_attr);
    const ST_SignedTwipsMeasure& get_pos_attr() const;
protected:
private:
    static CT_TabStop* default_instance_;
    bool m_has_val_attr;
    ST_TabJc* m_val_attr;
    bool m_has_leader_attr;
    ST_TabTlc* m_leader_attr;
    bool m_has_pos_attr;
    ST_SignedTwipsMeasure* m_pos_attr;
};

class CT_Spacing: public XSD::ComplexType
{
public:
    CT_Spacing();
    ~CT_Spacing();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Spacing& default_instance();
    bool has_before_attr() const;
    void set_before_attr(const ns_s::ST_TwipsMeasure& _before_attr);
    const ns_s::ST_TwipsMeasure& get_before_attr() const;
    bool has_beforeLines_attr() const;
    void set_beforeLines_attr(const ST_DecimalNumber& _beforeLines_attr);
    const ST_DecimalNumber& get_beforeLines_attr() const;
    bool has_beforeAutospacing_attr() const;
    void set_beforeAutospacing_attr(const ns_s::ST_OnOff& _beforeAutospacing_attr);
    const ns_s::ST_OnOff& get_beforeAutospacing_attr() const;
    bool has_after_attr() const;
    void set_after_attr(const ns_s::ST_TwipsMeasure& _after_attr);
    const ns_s::ST_TwipsMeasure& get_after_attr() const;
    bool has_afterLines_attr() const;
    void set_afterLines_attr(const ST_DecimalNumber& _afterLines_attr);
    const ST_DecimalNumber& get_afterLines_attr() const;
    bool has_afterAutospacing_attr() const;
    void set_afterAutospacing_attr(const ns_s::ST_OnOff& _afterAutospacing_attr);
    const ns_s::ST_OnOff& get_afterAutospacing_attr() const;
    bool has_line_attr() const;
    void set_line_attr(const ST_SignedTwipsMeasure& _line_attr);
    const ST_SignedTwipsMeasure& get_line_attr() const;
    bool has_lineRule_attr() const;
    void set_lineRule_attr(const ST_LineSpacingRule& _lineRule_attr);
    const ST_LineSpacingRule& get_lineRule_attr() const;
protected:
private:
    static CT_Spacing* default_instance_;
    bool m_has_before_attr;
    ns_s::ST_TwipsMeasure* m_before_attr;
    bool m_has_beforeLines_attr;
    ST_DecimalNumber* m_beforeLines_attr;
    bool m_has_beforeAutospacing_attr;
    ns_s::ST_OnOff* m_beforeAutospacing_attr;
    bool m_has_after_attr;
    ns_s::ST_TwipsMeasure* m_after_attr;
    bool m_has_afterLines_attr;
    ST_DecimalNumber* m_afterLines_attr;
    bool m_has_afterAutospacing_attr;
    ns_s::ST_OnOff* m_afterAutospacing_attr;
    bool m_has_line_attr;
    ST_SignedTwipsMeasure* m_line_attr;
    bool m_has_lineRule_attr;
    ST_LineSpacingRule* m_lineRule_attr;
};

class CT_Ind: public XSD::ComplexType
{
public:
    CT_Ind();
    ~CT_Ind();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Ind& default_instance();
    bool has_start_attr() const;
    void set_start_attr(const ST_SignedTwipsMeasure& _start_attr);
    const ST_SignedTwipsMeasure& get_start_attr() const;
    bool has_startChars_attr() const;
    void set_startChars_attr(const ST_DecimalNumber& _startChars_attr);
    const ST_DecimalNumber& get_startChars_attr() const;
    bool has_end_attr() const;
    void set_end_attr(const ST_SignedTwipsMeasure& _end_attr);
    const ST_SignedTwipsMeasure& get_end_attr() const;
    bool has_endChars_attr() const;
    void set_endChars_attr(const ST_DecimalNumber& _endChars_attr);
    const ST_DecimalNumber& get_endChars_attr() const;
    bool has_left_attr() const;
    void set_left_attr(const ST_SignedTwipsMeasure& _left_attr);
    const ST_SignedTwipsMeasure& get_left_attr() const;
    bool has_leftChars_attr() const;
    void set_leftChars_attr(const ST_DecimalNumber& _leftChars_attr);
    const ST_DecimalNumber& get_leftChars_attr() const;
    bool has_right_attr() const;
    void set_right_attr(const ST_SignedTwipsMeasure& _right_attr);
    const ST_SignedTwipsMeasure& get_right_attr() const;
    bool has_rightChars_attr() const;
    void set_rightChars_attr(const ST_DecimalNumber& _rightChars_attr);
    const ST_DecimalNumber& get_rightChars_attr() const;
    bool has_hanging_attr() const;
    void set_hanging_attr(const ns_s::ST_TwipsMeasure& _hanging_attr);
    const ns_s::ST_TwipsMeasure& get_hanging_attr() const;
    bool has_hangingChars_attr() const;
    void set_hangingChars_attr(const ST_DecimalNumber& _hangingChars_attr);
    const ST_DecimalNumber& get_hangingChars_attr() const;
    bool has_firstLine_attr() const;
    void set_firstLine_attr(const ns_s::ST_TwipsMeasure& _firstLine_attr);
    const ns_s::ST_TwipsMeasure& get_firstLine_attr() const;
    bool has_firstLineChars_attr() const;
    void set_firstLineChars_attr(const ST_DecimalNumber& _firstLineChars_attr);
    const ST_DecimalNumber& get_firstLineChars_attr() const;
protected:
private:
    static CT_Ind* default_instance_;
    bool m_has_start_attr;
    ST_SignedTwipsMeasure* m_start_attr;
    bool m_has_startChars_attr;
    ST_DecimalNumber* m_startChars_attr;
    bool m_has_end_attr;
    ST_SignedTwipsMeasure* m_end_attr;
    bool m_has_endChars_attr;
    ST_DecimalNumber* m_endChars_attr;
    bool m_has_left_attr;
    ST_SignedTwipsMeasure* m_left_attr;
    bool m_has_leftChars_attr;
    ST_DecimalNumber* m_leftChars_attr;
    bool m_has_right_attr;
    ST_SignedTwipsMeasure* m_right_attr;
    bool m_has_rightChars_attr;
    ST_DecimalNumber* m_rightChars_attr;
    bool m_has_hanging_attr;
    ns_s::ST_TwipsMeasure* m_hanging_attr;
    bool m_has_hangingChars_attr;
    ST_DecimalNumber* m_hangingChars_attr;
    bool m_has_firstLine_attr;
    ns_s::ST_TwipsMeasure* m_firstLine_attr;
    bool m_has_firstLineChars_attr;
    ST_DecimalNumber* m_firstLineChars_attr;
};

class CT_Jc: public XSD::ComplexType
{
public:
    CT_Jc();
    ~CT_Jc();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Jc& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Jc& _val_attr);
    const ST_Jc& get_val_attr() const;
protected:
private:
    static CT_Jc* default_instance_;
    bool m_has_val_attr;
    ST_Jc* m_val_attr;
};

class CT_JcTable: public XSD::ComplexType
{
public:
    CT_JcTable();
    ~CT_JcTable();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_JcTable& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_JcTable& _val_attr);
    const ST_JcTable& get_val_attr() const;
protected:
private:
    static CT_JcTable* default_instance_;
    bool m_has_val_attr;
    ST_JcTable* m_val_attr;
};

class CT_View: public XSD::ComplexType
{
public:
    CT_View();
    ~CT_View();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_View& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_View& _val_attr);
    const ST_View& get_val_attr() const;
protected:
private:
    static CT_View* default_instance_;
    bool m_has_val_attr;
    ST_View* m_val_attr;
};

class CT_Zoom: public XSD::ComplexType
{
public:
    CT_Zoom();
    ~CT_Zoom();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Zoom& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Zoom& _val_attr);
    const ST_Zoom& get_val_attr() const;
    bool has_percent_attr() const;
    void set_percent_attr(const ST_DecimalNumberOrPercent& _percent_attr);
    const ST_DecimalNumberOrPercent& get_percent_attr() const;
protected:
private:
    static CT_Zoom* default_instance_;
    bool m_has_val_attr;
    ST_Zoom* m_val_attr;
    bool m_has_percent_attr;
    ST_DecimalNumberOrPercent* m_percent_attr;
};

class CT_WritingStyle: public XSD::ComplexType
{
public:
    CT_WritingStyle();
    ~CT_WritingStyle();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_WritingStyle& default_instance();
    bool has_lang_attr() const;
    void set_lang_attr(const ns_s::ST_Lang& _lang_attr);
    const ns_s::ST_Lang& get_lang_attr() const;
    bool has_vendorID_attr() const;
    void set_vendorID_attr(const ns_s::ST_String& _vendorID_attr);
    const ns_s::ST_String& get_vendorID_attr() const;
    bool has_dllVersion_attr() const;
    void set_dllVersion_attr(const ns_s::ST_String& _dllVersion_attr);
    const ns_s::ST_String& get_dllVersion_attr() const;
    bool has_nlCheck_attr() const;
    void set_nlCheck_attr(const ns_s::ST_OnOff& _nlCheck_attr);
    const ns_s::ST_OnOff& get_nlCheck_attr() const;
    bool has_checkStyle_attr() const;
    void set_checkStyle_attr(const ns_s::ST_OnOff& _checkStyle_attr);
    const ns_s::ST_OnOff& get_checkStyle_attr() const;
    bool has_appName_attr() const;
    void set_appName_attr(const ns_s::ST_String& _appName_attr);
    const ns_s::ST_String& get_appName_attr() const;
protected:
private:
    static CT_WritingStyle* default_instance_;
    bool m_has_lang_attr;
    ns_s::ST_Lang* m_lang_attr;
    bool m_has_vendorID_attr;
    ns_s::ST_String* m_vendorID_attr;
    bool m_has_dllVersion_attr;
    ns_s::ST_String* m_dllVersion_attr;
    bool m_has_nlCheck_attr;
    ns_s::ST_OnOff* m_nlCheck_attr;
    bool m_has_checkStyle_attr;
    ns_s::ST_OnOff* m_checkStyle_attr;
    bool m_has_appName_attr;
    ns_s::ST_String* m_appName_attr;
};

class CT_Proof: public XSD::ComplexType
{
public:
    CT_Proof();
    ~CT_Proof();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Proof& default_instance();
    bool has_spelling_attr() const;
    void set_spelling_attr(const ST_Proof& _spelling_attr);
    const ST_Proof& get_spelling_attr() const;
    bool has_grammar_attr() const;
    void set_grammar_attr(const ST_Proof& _grammar_attr);
    const ST_Proof& get_grammar_attr() const;
protected:
private:
    static CT_Proof* default_instance_;
    bool m_has_spelling_attr;
    ST_Proof* m_spelling_attr;
    bool m_has_grammar_attr;
    ST_Proof* m_grammar_attr;
};

class CT_DocType: public XSD::ComplexType
{
public:
    CT_DocType();
    ~CT_DocType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_DocType& _val_attr);
    const ST_DocType& get_val_attr() const;
protected:
private:
    static CT_DocType* default_instance_;
    bool m_has_val_attr;
    ST_DocType* m_val_attr;
};

class CT_DocProtect: public XSD::ComplexType
{
public:
    CT_DocProtect();
    ~CT_DocProtect();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocProtect& default_instance();
    bool has_edit_attr() const;
    void set_edit_attr(const ST_DocProtect& _edit_attr);
    const ST_DocProtect& get_edit_attr() const;
    bool has_formatting_attr() const;
    void set_formatting_attr(const ns_s::ST_OnOff& _formatting_attr);
    const ns_s::ST_OnOff& get_formatting_attr() const;
    bool has_enforcement_attr() const;
    void set_enforcement_attr(const ns_s::ST_OnOff& _enforcement_attr);
    const ns_s::ST_OnOff& get_enforcement_attr() const;
    bool has_algorithmName_attr() const;
    void set_algorithmName_attr(const ns_s::ST_String& _algorithmName_attr);
    const ns_s::ST_String& get_algorithmName_attr() const;
    bool has_hashValue_attr() const;
    void set_hashValue_attr(const XSD::base64Binary_& _hashValue_attr);
    const XSD::base64Binary_& get_hashValue_attr() const;
    bool has_saltValue_attr() const;
    void set_saltValue_attr(const XSD::base64Binary_& _saltValue_attr);
    const XSD::base64Binary_& get_saltValue_attr() const;
    bool has_spinCount_attr() const;
    void set_spinCount_attr(const ST_DecimalNumber& _spinCount_attr);
    const ST_DecimalNumber& get_spinCount_attr() const;
    bool has_cryptProviderType_attr() const;
    void set_cryptProviderType_attr(const ns_s::ST_CryptProv& _cryptProviderType_attr);
    const ns_s::ST_CryptProv& get_cryptProviderType_attr() const;
    bool has_cryptAlgorithmClass_attr() const;
    void set_cryptAlgorithmClass_attr(const ns_s::ST_AlgClass& _cryptAlgorithmClass_attr);
    const ns_s::ST_AlgClass& get_cryptAlgorithmClass_attr() const;
    bool has_cryptAlgorithmType_attr() const;
    void set_cryptAlgorithmType_attr(const ns_s::ST_AlgType& _cryptAlgorithmType_attr);
    const ns_s::ST_AlgType& get_cryptAlgorithmType_attr() const;
    bool has_cryptAlgorithmSid_attr() const;
    void set_cryptAlgorithmSid_attr(const ST_DecimalNumber& _cryptAlgorithmSid_attr);
    const ST_DecimalNumber& get_cryptAlgorithmSid_attr() const;
    bool has_cryptSpinCount_attr() const;
    void set_cryptSpinCount_attr(const ST_DecimalNumber& _cryptSpinCount_attr);
    const ST_DecimalNumber& get_cryptSpinCount_attr() const;
    bool has_cryptProvider_attr() const;
    void set_cryptProvider_attr(const ns_s::ST_String& _cryptProvider_attr);
    const ns_s::ST_String& get_cryptProvider_attr() const;
    bool has_algIdExt_attr() const;
    void set_algIdExt_attr(const ST_LongHexNumber& _algIdExt_attr);
    const ST_LongHexNumber& get_algIdExt_attr() const;
    bool has_algIdExtSource_attr() const;
    void set_algIdExtSource_attr(const ns_s::ST_String& _algIdExtSource_attr);
    const ns_s::ST_String& get_algIdExtSource_attr() const;
    bool has_cryptProviderTypeExt_attr() const;
    void set_cryptProviderTypeExt_attr(const ST_LongHexNumber& _cryptProviderTypeExt_attr);
    const ST_LongHexNumber& get_cryptProviderTypeExt_attr() const;
    bool has_cryptProviderTypeExtSource_attr() const;
    void set_cryptProviderTypeExtSource_attr(const ns_s::ST_String& _cryptProviderTypeExtSource_attr);
    const ns_s::ST_String& get_cryptProviderTypeExtSource_attr() const;
    bool has_hash_attr() const;
    void set_hash_attr(const XSD::base64Binary_& _hash_attr);
    const XSD::base64Binary_& get_hash_attr() const;
    bool has_salt_attr() const;
    void set_salt_attr(const XSD::base64Binary_& _salt_attr);
    const XSD::base64Binary_& get_salt_attr() const;
protected:
private:
    static CT_DocProtect* default_instance_;
    bool m_has_edit_attr;
    ST_DocProtect* m_edit_attr;
    bool m_has_formatting_attr;
    ns_s::ST_OnOff* m_formatting_attr;
    bool m_has_enforcement_attr;
    ns_s::ST_OnOff* m_enforcement_attr;
    bool m_has_algorithmName_attr;
    ns_s::ST_String* m_algorithmName_attr;
    bool m_has_hashValue_attr;
    XSD::base64Binary_ m_hashValue_attr;
    bool m_has_saltValue_attr;
    XSD::base64Binary_ m_saltValue_attr;
    bool m_has_spinCount_attr;
    ST_DecimalNumber* m_spinCount_attr;
    bool m_has_cryptProviderType_attr;
    ns_s::ST_CryptProv* m_cryptProviderType_attr;
    bool m_has_cryptAlgorithmClass_attr;
    ns_s::ST_AlgClass* m_cryptAlgorithmClass_attr;
    bool m_has_cryptAlgorithmType_attr;
    ns_s::ST_AlgType* m_cryptAlgorithmType_attr;
    bool m_has_cryptAlgorithmSid_attr;
    ST_DecimalNumber* m_cryptAlgorithmSid_attr;
    bool m_has_cryptSpinCount_attr;
    ST_DecimalNumber* m_cryptSpinCount_attr;
    bool m_has_cryptProvider_attr;
    ns_s::ST_String* m_cryptProvider_attr;
    bool m_has_algIdExt_attr;
    ST_LongHexNumber* m_algIdExt_attr;
    bool m_has_algIdExtSource_attr;
    ns_s::ST_String* m_algIdExtSource_attr;
    bool m_has_cryptProviderTypeExt_attr;
    ST_LongHexNumber* m_cryptProviderTypeExt_attr;
    bool m_has_cryptProviderTypeExtSource_attr;
    ns_s::ST_String* m_cryptProviderTypeExtSource_attr;
    bool m_has_hash_attr;
    XSD::base64Binary_ m_hash_attr;
    bool m_has_salt_attr;
    XSD::base64Binary_ m_salt_attr;
};

class CT_MailMergeDocType: public XSD::ComplexType
{
public:
    CT_MailMergeDocType();
    ~CT_MailMergeDocType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MailMergeDocType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_MailMergeDocType& _val_attr);
    const ST_MailMergeDocType& get_val_attr() const;
protected:
private:
    static CT_MailMergeDocType* default_instance_;
    bool m_has_val_attr;
    ST_MailMergeDocType* m_val_attr;
};

class CT_MailMergeDataType: public XSD::ComplexType
{
public:
    CT_MailMergeDataType();
    ~CT_MailMergeDataType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MailMergeDataType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_MailMergeDataType& _val_attr);
    const ST_MailMergeDataType& get_val_attr() const;
protected:
private:
    static CT_MailMergeDataType* default_instance_;
    bool m_has_val_attr;
    ST_MailMergeDataType* m_val_attr;
};

class CT_MailMergeDest: public XSD::ComplexType
{
public:
    CT_MailMergeDest();
    ~CT_MailMergeDest();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MailMergeDest& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_MailMergeDest& _val_attr);
    const ST_MailMergeDest& get_val_attr() const;
protected:
private:
    static CT_MailMergeDest* default_instance_;
    bool m_has_val_attr;
    ST_MailMergeDest* m_val_attr;
};

class CT_MailMergeOdsoFMDFieldType: public XSD::ComplexType
{
public:
    CT_MailMergeOdsoFMDFieldType();
    ~CT_MailMergeOdsoFMDFieldType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MailMergeOdsoFMDFieldType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_MailMergeOdsoFMDFieldType& _val_attr);
    const ST_MailMergeOdsoFMDFieldType& get_val_attr() const;
protected:
private:
    static CT_MailMergeOdsoFMDFieldType* default_instance_;
    bool m_has_val_attr;
    ST_MailMergeOdsoFMDFieldType* m_val_attr;
};

class CT_TrackChangesView: public XSD::ComplexType
{
public:
    CT_TrackChangesView();
    ~CT_TrackChangesView();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TrackChangesView& default_instance();
    bool has_markup_attr() const;
    void set_markup_attr(const ns_s::ST_OnOff& _markup_attr);
    const ns_s::ST_OnOff& get_markup_attr() const;
    bool has_comments_attr() const;
    void set_comments_attr(const ns_s::ST_OnOff& _comments_attr);
    const ns_s::ST_OnOff& get_comments_attr() const;
    bool has_insDel_attr() const;
    void set_insDel_attr(const ns_s::ST_OnOff& _insDel_attr);
    const ns_s::ST_OnOff& get_insDel_attr() const;
    bool has_formatting_attr() const;
    void set_formatting_attr(const ns_s::ST_OnOff& _formatting_attr);
    const ns_s::ST_OnOff& get_formatting_attr() const;
    bool has_inkAnnotations_attr() const;
    void set_inkAnnotations_attr(const ns_s::ST_OnOff& _inkAnnotations_attr);
    const ns_s::ST_OnOff& get_inkAnnotations_attr() const;
protected:
private:
    static CT_TrackChangesView* default_instance_;
    bool m_has_markup_attr;
    ns_s::ST_OnOff* m_markup_attr;
    bool m_has_comments_attr;
    ns_s::ST_OnOff* m_comments_attr;
    bool m_has_insDel_attr;
    ns_s::ST_OnOff* m_insDel_attr;
    bool m_has_formatting_attr;
    ns_s::ST_OnOff* m_formatting_attr;
    bool m_has_inkAnnotations_attr;
    ns_s::ST_OnOff* m_inkAnnotations_attr;
};

class CT_Kinsoku: public XSD::ComplexType
{
public:
    CT_Kinsoku();
    ~CT_Kinsoku();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Kinsoku& default_instance();
    bool has_lang_attr() const;
    void set_lang_attr(const ns_s::ST_Lang& _lang_attr);
    const ns_s::ST_Lang& get_lang_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_String& _val_attr);
    const ns_s::ST_String& get_val_attr() const;
protected:
private:
    static CT_Kinsoku* default_instance_;
    bool m_has_lang_attr;
    ns_s::ST_Lang* m_lang_attr;
    bool m_has_val_attr;
    ns_s::ST_String* m_val_attr;
};

class CT_TextDirection: public XSD::ComplexType
{
public:
    CT_TextDirection();
    ~CT_TextDirection();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TextDirection& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_TextDirection& _val_attr);
    const ST_TextDirection& get_val_attr() const;
protected:
private:
    static CT_TextDirection* default_instance_;
    bool m_has_val_attr;
    ST_TextDirection* m_val_attr;
};

class CT_TextAlignment: public XSD::ComplexType
{
public:
    CT_TextAlignment();
    ~CT_TextAlignment();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TextAlignment& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_TextAlignment& _val_attr);
    const ST_TextAlignment& get_val_attr() const;
protected:
private:
    static CT_TextAlignment* default_instance_;
    bool m_has_val_attr;
    ST_TextAlignment* m_val_attr;
};

class CT_Markup: public XSD::ComplexType
{
public:
    CT_Markup();
    ~CT_Markup();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Markup& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
protected:
private:
    static CT_Markup* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
};

class CT_TrackChange: public XSD::ComplexType
{
public:
    CT_TrackChange();
    ~CT_TrackChange();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TrackChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    static CT_TrackChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_CellMergeTrackChange: public XSD::ComplexType
{
public:
    CT_CellMergeTrackChange();
    ~CT_CellMergeTrackChange();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CellMergeTrackChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
    bool has_vMerge_attr() const;
    void set_vMerge_attr(const ST_AnnotationVMerge& _vMerge_attr);
    const ST_AnnotationVMerge& get_vMerge_attr() const;
    bool has_vMergeOrig_attr() const;
    void set_vMergeOrig_attr(const ST_AnnotationVMerge& _vMergeOrig_attr);
    const ST_AnnotationVMerge& get_vMergeOrig_attr() const;
protected:
private:
    static CT_CellMergeTrackChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
    bool m_has_vMerge_attr;
    ST_AnnotationVMerge* m_vMerge_attr;
    bool m_has_vMergeOrig_attr;
    ST_AnnotationVMerge* m_vMergeOrig_attr;
};

class CT_TrackChangeRange: public XSD::ComplexType
{
public:
    CT_TrackChangeRange();
    ~CT_TrackChangeRange();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TrackChangeRange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
    bool has_displacedByCustomXml_attr() const;
    void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr);
    const ST_DisplacedByCustomXml& get_displacedByCustomXml_attr() const;
protected:
private:
    static CT_TrackChangeRange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
    bool m_has_displacedByCustomXml_attr;
    ST_DisplacedByCustomXml* m_displacedByCustomXml_attr;
};

class CT_MarkupRange: public XSD::ComplexType
{
public:
    CT_MarkupRange();
    ~CT_MarkupRange();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MarkupRange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_displacedByCustomXml_attr() const;
    void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr);
    const ST_DisplacedByCustomXml& get_displacedByCustomXml_attr() const;
protected:
private:
    static CT_MarkupRange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_displacedByCustomXml_attr;
    ST_DisplacedByCustomXml* m_displacedByCustomXml_attr;
};

class CT_BookmarkRange: public XSD::ComplexType
{
public:
    CT_BookmarkRange();
    ~CT_BookmarkRange();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BookmarkRange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_displacedByCustomXml_attr() const;
    void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr);
    const ST_DisplacedByCustomXml& get_displacedByCustomXml_attr() const;
    bool has_colFirst_attr() const;
    void set_colFirst_attr(const ST_DecimalNumber& _colFirst_attr);
    const ST_DecimalNumber& get_colFirst_attr() const;
    bool has_colLast_attr() const;
    void set_colLast_attr(const ST_DecimalNumber& _colLast_attr);
    const ST_DecimalNumber& get_colLast_attr() const;
protected:
private:
    static CT_BookmarkRange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_displacedByCustomXml_attr;
    ST_DisplacedByCustomXml* m_displacedByCustomXml_attr;
    bool m_has_colFirst_attr;
    ST_DecimalNumber* m_colFirst_attr;
    bool m_has_colLast_attr;
    ST_DecimalNumber* m_colLast_attr;
};

class CT_Bookmark: public XSD::ComplexType
{
public:
    CT_Bookmark();
    ~CT_Bookmark();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Bookmark& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_displacedByCustomXml_attr() const;
    void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr);
    const ST_DisplacedByCustomXml& get_displacedByCustomXml_attr() const;
    bool has_colFirst_attr() const;
    void set_colFirst_attr(const ST_DecimalNumber& _colFirst_attr);
    const ST_DecimalNumber& get_colFirst_attr() const;
    bool has_colLast_attr() const;
    void set_colLast_attr(const ST_DecimalNumber& _colLast_attr);
    const ST_DecimalNumber& get_colLast_attr() const;
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
protected:
private:
    static CT_Bookmark* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_displacedByCustomXml_attr;
    ST_DisplacedByCustomXml* m_displacedByCustomXml_attr;
    bool m_has_colFirst_attr;
    ST_DecimalNumber* m_colFirst_attr;
    bool m_has_colLast_attr;
    ST_DecimalNumber* m_colLast_attr;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
};

class CT_MoveBookmark: public XSD::ComplexType
{
public:
    CT_MoveBookmark();
    ~CT_MoveBookmark();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MoveBookmark& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_displacedByCustomXml_attr() const;
    void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr);
    const ST_DisplacedByCustomXml& get_displacedByCustomXml_attr() const;
    bool has_colFirst_attr() const;
    void set_colFirst_attr(const ST_DecimalNumber& _colFirst_attr);
    const ST_DecimalNumber& get_colFirst_attr() const;
    bool has_colLast_attr() const;
    void set_colLast_attr(const ST_DecimalNumber& _colLast_attr);
    const ST_DecimalNumber& get_colLast_attr() const;
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    static CT_MoveBookmark* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_displacedByCustomXml_attr;
    ST_DisplacedByCustomXml* m_displacedByCustomXml_attr;
    bool m_has_colFirst_attr;
    ST_DecimalNumber* m_colFirst_attr;
    bool m_has_colLast_attr;
    ST_DecimalNumber* m_colLast_attr;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_Comment: public XSD::ComplexType
{
public:
    CT_Comment();
    ~CT_Comment();
    CT_CustomXmlBlock* add_customXml();
    CT_SdtBlock* add_sdt();
    CT_P* add_p();
    CT_Tbl* add_tbl();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    CT_AltChunk* add_altChunk();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Comment& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
    bool has_initials_attr() const;
    void set_initials_attr(const ns_s::ST_String& _initials_attr);
    const ns_s::ST_String& get_initials_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlBlock* mutable_customXml();
        const CT_CustomXmlBlock& get_customXml() const;
        bool has_sdt() const;
        CT_SdtBlock* mutable_sdt();
        const CT_SdtBlock& get_sdt() const;
        bool has_p() const;
        CT_P* mutable_p();
        const CT_P& get_p() const;
        bool has_tbl() const;
        CT_Tbl* mutable_tbl();
        const CT_Tbl& get_tbl() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_altChunk() const;
        CT_AltChunk* mutable_altChunk();
        const CT_AltChunk& get_altChunk() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlBlock* m_customXml;
        bool m_has_sdt;
        CT_SdtBlock* m_sdt;
        bool m_has_p;
        CT_P* m_p;
        bool m_has_tbl;
        CT_Tbl* m_tbl;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_altChunk;
        CT_AltChunk* m_altChunk;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Comment* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
    bool m_has_initials_attr;
    ns_s::ST_String* m_initials_attr;
};

class CT_TrackChangeNumbering: public XSD::ComplexType
{
public:
    CT_TrackChangeNumbering();
    ~CT_TrackChangeNumbering();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TrackChangeNumbering& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
    bool has_original_attr() const;
    void set_original_attr(const ns_s::ST_String& _original_attr);
    const ns_s::ST_String& get_original_attr() const;
protected:
private:
    static CT_TrackChangeNumbering* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
    bool m_has_original_attr;
    ns_s::ST_String* m_original_attr;
};

class CT_TblPrExChange: public XSD::ComplexType
{
public:
    CT_TblPrExChange();
    ~CT_TblPrExChange();
    bool has_tblPrEx() const;
    CT_TblPrExBase* mutable_tblPrEx();
    const CT_TblPrExBase& get_tblPrEx() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblPrExChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_tblPrEx;
    CT_TblPrExBase* m_tblPrEx;
    static CT_TblPrExChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_TcPrChange: public XSD::ComplexType
{
public:
    CT_TcPrChange();
    ~CT_TcPrChange();
    bool has_tcPr() const;
    CT_TcPrInner* mutable_tcPr();
    const CT_TcPrInner& get_tcPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TcPrChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_tcPr;
    CT_TcPrInner* m_tcPr;
    static CT_TcPrChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_TrPrChange: public XSD::ComplexType
{
public:
    CT_TrPrChange();
    ~CT_TrPrChange();
    bool has_trPr() const;
    CT_TrPrBase* mutable_trPr();
    const CT_TrPrBase& get_trPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TrPrChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_trPr;
    CT_TrPrBase* m_trPr;
    static CT_TrPrChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_TblGridChange: public XSD::ComplexType
{
public:
    CT_TblGridChange();
    ~CT_TblGridChange();
    bool has_tblGrid() const;
    CT_TblGridBase* mutable_tblGrid();
    const CT_TblGridBase& get_tblGrid() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblGridChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
protected:
private:
    bool m_has_tblGrid;
    CT_TblGridBase* m_tblGrid;
    static CT_TblGridChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
};

class CT_TblPrChange: public XSD::ComplexType
{
public:
    CT_TblPrChange();
    ~CT_TblPrChange();
    bool has_tblPr() const;
    CT_TblPrBase* mutable_tblPr();
    const CT_TblPrBase& get_tblPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblPrChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_tblPr;
    CT_TblPrBase* m_tblPr;
    static CT_TblPrChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_SectPrChange: public XSD::ComplexType
{
public:
    CT_SectPrChange();
    ~CT_SectPrChange();
    bool has_sectPr() const;
    CT_SectPrBase* mutable_sectPr();
    const CT_SectPrBase& get_sectPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SectPrChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_sectPr;
    CT_SectPrBase* m_sectPr;
    static CT_SectPrChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_PPrChange: public XSD::ComplexType
{
public:
    CT_PPrChange();
    ~CT_PPrChange();
    bool has_pPr() const;
    CT_PPrBase* mutable_pPr();
    const CT_PPrBase& get_pPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PPrChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_pPr;
    CT_PPrBase* m_pPr;
    static CT_PPrChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_RPrChange: public XSD::ComplexType
{
public:
    CT_RPrChange();
    ~CT_RPrChange();
    bool has_rPr() const;
    CT_RPrOriginal* mutable_rPr();
    const CT_RPrOriginal& get_rPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RPrChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_rPr;
    CT_RPrOriginal* m_rPr;
    static CT_RPrChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_ParaRPrChange: public XSD::ComplexType
{
public:
    CT_ParaRPrChange();
    ~CT_ParaRPrChange();
    bool has_rPr() const;
    CT_ParaRPrOriginal* mutable_rPr();
    const CT_ParaRPrOriginal& get_rPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ParaRPrChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_rPr;
    CT_ParaRPrOriginal* m_rPr;
    static CT_ParaRPrChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_RunTrackChange: public XSD::ComplexType
{
public:
    CT_RunTrackChange();
    ~CT_RunTrackChange();
    CT_CustomXmlRun* add_customXml();
    CT_SmartTagRun* add_smartTag();
    CT_SdtRun* add_sdt();
    CT_DirContentRun* add_dir();
    CT_BdoContentRun* add_bdo();
    CT_R* add_r();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    ns_m::CT_Acc* add_m_acc();
    ns_m::CT_Bar* add_m_bar();
    ns_m::CT_Box* add_m_box();
    ns_m::CT_BorderBox* add_m_borderBox();
    ns_m::CT_D* add_m_d();
    ns_m::CT_EqArr* add_m_eqArr();
    ns_m::CT_F* add_m_f();
    ns_m::CT_Func* add_m_func();
    ns_m::CT_GroupChr* add_m_groupChr();
    ns_m::CT_LimLow* add_m_limLow();
    ns_m::CT_LimUpp* add_m_limUpp();
    ns_m::CT_M* add_m_m();
    ns_m::CT_Nary* add_m_nary();
    ns_m::CT_Phant* add_m_phant();
    ns_m::CT_Rad* add_m_rad();
    ns_m::CT_SPre* add_m_sPre();
    ns_m::CT_SSub* add_m_sSub();
    ns_m::CT_SSubSup* add_m_sSubSup();
    ns_m::CT_SSup* add_m_sSup();
    ns_m::CT_R* add_m_r();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RunTrackChange& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlRun* mutable_customXml();
        const CT_CustomXmlRun& get_customXml() const;
        bool has_smartTag() const;
        CT_SmartTagRun* mutable_smartTag();
        const CT_SmartTagRun& get_smartTag() const;
        bool has_sdt() const;
        CT_SdtRun* mutable_sdt();
        const CT_SdtRun& get_sdt() const;
        bool has_dir() const;
        CT_DirContentRun* mutable_dir();
        const CT_DirContentRun& get_dir() const;
        bool has_bdo() const;
        CT_BdoContentRun* mutable_bdo();
        const CT_BdoContentRun& get_bdo() const;
        bool has_r() const;
        CT_R* mutable_r();
        const CT_R& get_r() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_m_acc() const;
        ns_m::CT_Acc* mutable_m_acc();
        const ns_m::CT_Acc& get_m_acc() const;
        bool has_m_bar() const;
        ns_m::CT_Bar* mutable_m_bar();
        const ns_m::CT_Bar& get_m_bar() const;
        bool has_m_box() const;
        ns_m::CT_Box* mutable_m_box();
        const ns_m::CT_Box& get_m_box() const;
        bool has_m_borderBox() const;
        ns_m::CT_BorderBox* mutable_m_borderBox();
        const ns_m::CT_BorderBox& get_m_borderBox() const;
        bool has_m_d() const;
        ns_m::CT_D* mutable_m_d();
        const ns_m::CT_D& get_m_d() const;
        bool has_m_eqArr() const;
        ns_m::CT_EqArr* mutable_m_eqArr();
        const ns_m::CT_EqArr& get_m_eqArr() const;
        bool has_m_f() const;
        ns_m::CT_F* mutable_m_f();
        const ns_m::CT_F& get_m_f() const;
        bool has_m_func() const;
        ns_m::CT_Func* mutable_m_func();
        const ns_m::CT_Func& get_m_func() const;
        bool has_m_groupChr() const;
        ns_m::CT_GroupChr* mutable_m_groupChr();
        const ns_m::CT_GroupChr& get_m_groupChr() const;
        bool has_m_limLow() const;
        ns_m::CT_LimLow* mutable_m_limLow();
        const ns_m::CT_LimLow& get_m_limLow() const;
        bool has_m_limUpp() const;
        ns_m::CT_LimUpp* mutable_m_limUpp();
        const ns_m::CT_LimUpp& get_m_limUpp() const;
        bool has_m_m() const;
        ns_m::CT_M* mutable_m_m();
        const ns_m::CT_M& get_m_m() const;
        bool has_m_nary() const;
        ns_m::CT_Nary* mutable_m_nary();
        const ns_m::CT_Nary& get_m_nary() const;
        bool has_m_phant() const;
        ns_m::CT_Phant* mutable_m_phant();
        const ns_m::CT_Phant& get_m_phant() const;
        bool has_m_rad() const;
        ns_m::CT_Rad* mutable_m_rad();
        const ns_m::CT_Rad& get_m_rad() const;
        bool has_m_sPre() const;
        ns_m::CT_SPre* mutable_m_sPre();
        const ns_m::CT_SPre& get_m_sPre() const;
        bool has_m_sSub() const;
        ns_m::CT_SSub* mutable_m_sSub();
        const ns_m::CT_SSub& get_m_sSub() const;
        bool has_m_sSubSup() const;
        ns_m::CT_SSubSup* mutable_m_sSubSup();
        const ns_m::CT_SSubSup& get_m_sSubSup() const;
        bool has_m_sSup() const;
        ns_m::CT_SSup* mutable_m_sSup();
        const ns_m::CT_SSup& get_m_sSup() const;
        bool has_m_r() const;
        ns_m::CT_R* mutable_m_r();
        const ns_m::CT_R& get_m_r() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlRun* m_customXml;
        bool m_has_smartTag;
        CT_SmartTagRun* m_smartTag;
        bool m_has_sdt;
        CT_SdtRun* m_sdt;
        bool m_has_dir;
        CT_DirContentRun* m_dir;
        bool m_has_bdo;
        CT_BdoContentRun* m_bdo;
        bool m_has_r;
        CT_R* m_r;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_m_acc;
        ns_m::CT_Acc* m_m_acc;
        bool m_has_m_bar;
        ns_m::CT_Bar* m_m_bar;
        bool m_has_m_box;
        ns_m::CT_Box* m_m_box;
        bool m_has_m_borderBox;
        ns_m::CT_BorderBox* m_m_borderBox;
        bool m_has_m_d;
        ns_m::CT_D* m_m_d;
        bool m_has_m_eqArr;
        ns_m::CT_EqArr* m_m_eqArr;
        bool m_has_m_f;
        ns_m::CT_F* m_m_f;
        bool m_has_m_func;
        ns_m::CT_Func* m_m_func;
        bool m_has_m_groupChr;
        ns_m::CT_GroupChr* m_m_groupChr;
        bool m_has_m_limLow;
        ns_m::CT_LimLow* m_m_limLow;
        bool m_has_m_limUpp;
        ns_m::CT_LimUpp* m_m_limUpp;
        bool m_has_m_m;
        ns_m::CT_M* m_m_m;
        bool m_has_m_nary;
        ns_m::CT_Nary* m_m_nary;
        bool m_has_m_phant;
        ns_m::CT_Phant* m_m_phant;
        bool m_has_m_rad;
        ns_m::CT_Rad* m_m_rad;
        bool m_has_m_sPre;
        ns_m::CT_SPre* m_m_sPre;
        bool m_has_m_sSub;
        ns_m::CT_SSub* m_m_sSub;
        bool m_has_m_sSubSup;
        ns_m::CT_SSubSup* m_m_sSubSup;
        bool m_has_m_sSup;
        ns_m::CT_SSup* m_m_sSup;
        bool m_has_m_r;
        ns_m::CT_R* m_m_r;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_RunTrackChange* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_NumPr: public XSD::ComplexType
{
public:
    CT_NumPr();
    ~CT_NumPr();
    bool has_ilvl() const;
    CT_DecimalNumber* mutable_ilvl();
    const CT_DecimalNumber& get_ilvl() const;
    bool has_numId() const;
    CT_DecimalNumber* mutable_numId();
    const CT_DecimalNumber& get_numId() const;
    bool has_numberingChange() const;
    CT_TrackChangeNumbering* mutable_numberingChange();
    const CT_TrackChangeNumbering& get_numberingChange() const;
    bool has_ins() const;
    CT_TrackChange* mutable_ins();
    const CT_TrackChange& get_ins() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NumPr& default_instance();
protected:
private:
    bool m_has_ilvl;
    CT_DecimalNumber* m_ilvl;
    bool m_has_numId;
    CT_DecimalNumber* m_numId;
    bool m_has_numberingChange;
    CT_TrackChangeNumbering* m_numberingChange;
    bool m_has_ins;
    CT_TrackChange* m_ins;
    static CT_NumPr* default_instance_;
};

class CT_PBdr: public XSD::ComplexType
{
public:
    CT_PBdr();
    ~CT_PBdr();
    bool has_top() const;
    CT_Border* mutable_top();
    const CT_Border& get_top() const;
    bool has_left() const;
    CT_Border* mutable_left();
    const CT_Border& get_left() const;
    bool has_bottom() const;
    CT_Border* mutable_bottom();
    const CT_Border& get_bottom() const;
    bool has_right() const;
    CT_Border* mutable_right();
    const CT_Border& get_right() const;
    bool has_between() const;
    CT_Border* mutable_between();
    const CT_Border& get_between() const;
    bool has_bar() const;
    CT_Border* mutable_bar();
    const CT_Border& get_bar() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PBdr& default_instance();
protected:
private:
    bool m_has_top;
    CT_Border* m_top;
    bool m_has_left;
    CT_Border* m_left;
    bool m_has_bottom;
    CT_Border* m_bottom;
    bool m_has_right;
    CT_Border* m_right;
    bool m_has_between;
    CT_Border* m_between;
    bool m_has_bar;
    CT_Border* m_bar;
    static CT_PBdr* default_instance_;
};

class CT_Tabs: public XSD::ComplexType
{
public:
    CT_Tabs();
    ~CT_Tabs();
    CT_TabStop* add_tab();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Tabs& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tab() const;
        CT_TabStop* mutable_tab();
        const CT_TabStop& get_tab() const;
    protected:
    private:
        bool m_has_tab;
        CT_TabStop* m_tab;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Tabs* default_instance_;
};

class CT_TextboxTightWrap: public XSD::ComplexType
{
public:
    CT_TextboxTightWrap();
    ~CT_TextboxTightWrap();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TextboxTightWrap& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_TextboxTightWrap& _val_attr);
    const ST_TextboxTightWrap& get_val_attr() const;
protected:
private:
    static CT_TextboxTightWrap* default_instance_;
    bool m_has_val_attr;
    ST_TextboxTightWrap* m_val_attr;
};

class CT_PPr: public XSD::ComplexType
{
public:
    CT_PPr();
    ~CT_PPr();
    bool has_pStyle() const;
    CT_String* mutable_pStyle();
    const CT_String& get_pStyle() const;
    bool has_keepNext() const;
    CT_OnOff* mutable_keepNext();
    const CT_OnOff& get_keepNext() const;
    bool has_keepLines() const;
    CT_OnOff* mutable_keepLines();
    const CT_OnOff& get_keepLines() const;
    bool has_pageBreakBefore() const;
    CT_OnOff* mutable_pageBreakBefore();
    const CT_OnOff& get_pageBreakBefore() const;
    bool has_framePr() const;
    CT_FramePr* mutable_framePr();
    const CT_FramePr& get_framePr() const;
    bool has_widowControl() const;
    CT_OnOff* mutable_widowControl();
    const CT_OnOff& get_widowControl() const;
    bool has_numPr() const;
    CT_NumPr* mutable_numPr();
    const CT_NumPr& get_numPr() const;
    bool has_suppressLineNumbers() const;
    CT_OnOff* mutable_suppressLineNumbers();
    const CT_OnOff& get_suppressLineNumbers() const;
    bool has_pBdr() const;
    CT_PBdr* mutable_pBdr();
    const CT_PBdr& get_pBdr() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_tabs() const;
    CT_Tabs* mutable_tabs();
    const CT_Tabs& get_tabs() const;
    bool has_suppressAutoHyphens() const;
    CT_OnOff* mutable_suppressAutoHyphens();
    const CT_OnOff& get_suppressAutoHyphens() const;
    bool has_kinsoku() const;
    CT_OnOff* mutable_kinsoku();
    const CT_OnOff& get_kinsoku() const;
    bool has_wordWrap() const;
    CT_OnOff* mutable_wordWrap();
    const CT_OnOff& get_wordWrap() const;
    bool has_overflowPunct() const;
    CT_OnOff* mutable_overflowPunct();
    const CT_OnOff& get_overflowPunct() const;
    bool has_topLinePunct() const;
    CT_OnOff* mutable_topLinePunct();
    const CT_OnOff& get_topLinePunct() const;
    bool has_autoSpaceDE() const;
    CT_OnOff* mutable_autoSpaceDE();
    const CT_OnOff& get_autoSpaceDE() const;
    bool has_autoSpaceDN() const;
    CT_OnOff* mutable_autoSpaceDN();
    const CT_OnOff& get_autoSpaceDN() const;
    bool has_bidi() const;
    CT_OnOff* mutable_bidi();
    const CT_OnOff& get_bidi() const;
    bool has_adjustRightInd() const;
    CT_OnOff* mutable_adjustRightInd();
    const CT_OnOff& get_adjustRightInd() const;
    bool has_snapToGrid() const;
    CT_OnOff* mutable_snapToGrid();
    const CT_OnOff& get_snapToGrid() const;
    bool has_spacing() const;
    CT_Spacing* mutable_spacing();
    const CT_Spacing& get_spacing() const;
    bool has_ind() const;
    CT_Ind* mutable_ind();
    const CT_Ind& get_ind() const;
    bool has_contextualSpacing() const;
    CT_OnOff* mutable_contextualSpacing();
    const CT_OnOff& get_contextualSpacing() const;
    bool has_mirrorIndents() const;
    CT_OnOff* mutable_mirrorIndents();
    const CT_OnOff& get_mirrorIndents() const;
    bool has_suppressOverlap() const;
    CT_OnOff* mutable_suppressOverlap();
    const CT_OnOff& get_suppressOverlap() const;
    bool has_jc() const;
    CT_Jc* mutable_jc();
    const CT_Jc& get_jc() const;
    bool has_textDirection() const;
    CT_TextDirection* mutable_textDirection();
    const CT_TextDirection& get_textDirection() const;
    bool has_textAlignment() const;
    CT_TextAlignment* mutable_textAlignment();
    const CT_TextAlignment& get_textAlignment() const;
    bool has_textboxTightWrap() const;
    CT_TextboxTightWrap* mutable_textboxTightWrap();
    const CT_TextboxTightWrap& get_textboxTightWrap() const;
    bool has_outlineLvl() const;
    CT_DecimalNumber* mutable_outlineLvl();
    const CT_DecimalNumber& get_outlineLvl() const;
    bool has_divId() const;
    CT_DecimalNumber* mutable_divId();
    const CT_DecimalNumber& get_divId() const;
    bool has_cnfStyle() const;
    CT_Cnf* mutable_cnfStyle();
    const CT_Cnf& get_cnfStyle() const;
    bool has_rPr() const;
    CT_ParaRPr* mutable_rPr();
    const CT_ParaRPr& get_rPr() const;
    bool has_sectPr() const;
    CT_SectPr* mutable_sectPr();
    const CT_SectPr& get_sectPr() const;
    bool has_pPrChange() const;
    CT_PPrChange* mutable_pPrChange();
    const CT_PPrChange& get_pPrChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PPr& default_instance();
protected:
private:
    bool m_has_pStyle;
    CT_String* m_pStyle;
    bool m_has_keepNext;
    CT_OnOff* m_keepNext;
    bool m_has_keepLines;
    CT_OnOff* m_keepLines;
    bool m_has_pageBreakBefore;
    CT_OnOff* m_pageBreakBefore;
    bool m_has_framePr;
    CT_FramePr* m_framePr;
    bool m_has_widowControl;
    CT_OnOff* m_widowControl;
    bool m_has_numPr;
    CT_NumPr* m_numPr;
    bool m_has_suppressLineNumbers;
    CT_OnOff* m_suppressLineNumbers;
    bool m_has_pBdr;
    CT_PBdr* m_pBdr;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_tabs;
    CT_Tabs* m_tabs;
    bool m_has_suppressAutoHyphens;
    CT_OnOff* m_suppressAutoHyphens;
    bool m_has_kinsoku;
    CT_OnOff* m_kinsoku;
    bool m_has_wordWrap;
    CT_OnOff* m_wordWrap;
    bool m_has_overflowPunct;
    CT_OnOff* m_overflowPunct;
    bool m_has_topLinePunct;
    CT_OnOff* m_topLinePunct;
    bool m_has_autoSpaceDE;
    CT_OnOff* m_autoSpaceDE;
    bool m_has_autoSpaceDN;
    CT_OnOff* m_autoSpaceDN;
    bool m_has_bidi;
    CT_OnOff* m_bidi;
    bool m_has_adjustRightInd;
    CT_OnOff* m_adjustRightInd;
    bool m_has_snapToGrid;
    CT_OnOff* m_snapToGrid;
    bool m_has_spacing;
    CT_Spacing* m_spacing;
    bool m_has_ind;
    CT_Ind* m_ind;
    bool m_has_contextualSpacing;
    CT_OnOff* m_contextualSpacing;
    bool m_has_mirrorIndents;
    CT_OnOff* m_mirrorIndents;
    bool m_has_suppressOverlap;
    CT_OnOff* m_suppressOverlap;
    bool m_has_jc;
    CT_Jc* m_jc;
    bool m_has_textDirection;
    CT_TextDirection* m_textDirection;
    bool m_has_textAlignment;
    CT_TextAlignment* m_textAlignment;
    bool m_has_textboxTightWrap;
    CT_TextboxTightWrap* m_textboxTightWrap;
    bool m_has_outlineLvl;
    CT_DecimalNumber* m_outlineLvl;
    bool m_has_divId;
    CT_DecimalNumber* m_divId;
    bool m_has_cnfStyle;
    CT_Cnf* m_cnfStyle;
    bool m_has_rPr;
    CT_ParaRPr* m_rPr;
    bool m_has_sectPr;
    CT_SectPr* m_sectPr;
    bool m_has_pPrChange;
    CT_PPrChange* m_pPrChange;
    static CT_PPr* default_instance_;
};

class CT_PPrBase: public XSD::ComplexType
{
public:
    CT_PPrBase();
    ~CT_PPrBase();
    bool has_pStyle() const;
    CT_String* mutable_pStyle();
    const CT_String& get_pStyle() const;
    bool has_keepNext() const;
    CT_OnOff* mutable_keepNext();
    const CT_OnOff& get_keepNext() const;
    bool has_keepLines() const;
    CT_OnOff* mutable_keepLines();
    const CT_OnOff& get_keepLines() const;
    bool has_pageBreakBefore() const;
    CT_OnOff* mutable_pageBreakBefore();
    const CT_OnOff& get_pageBreakBefore() const;
    bool has_framePr() const;
    CT_FramePr* mutable_framePr();
    const CT_FramePr& get_framePr() const;
    bool has_widowControl() const;
    CT_OnOff* mutable_widowControl();
    const CT_OnOff& get_widowControl() const;
    bool has_numPr() const;
    CT_NumPr* mutable_numPr();
    const CT_NumPr& get_numPr() const;
    bool has_suppressLineNumbers() const;
    CT_OnOff* mutable_suppressLineNumbers();
    const CT_OnOff& get_suppressLineNumbers() const;
    bool has_pBdr() const;
    CT_PBdr* mutable_pBdr();
    const CT_PBdr& get_pBdr() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_tabs() const;
    CT_Tabs* mutable_tabs();
    const CT_Tabs& get_tabs() const;
    bool has_suppressAutoHyphens() const;
    CT_OnOff* mutable_suppressAutoHyphens();
    const CT_OnOff& get_suppressAutoHyphens() const;
    bool has_kinsoku() const;
    CT_OnOff* mutable_kinsoku();
    const CT_OnOff& get_kinsoku() const;
    bool has_wordWrap() const;
    CT_OnOff* mutable_wordWrap();
    const CT_OnOff& get_wordWrap() const;
    bool has_overflowPunct() const;
    CT_OnOff* mutable_overflowPunct();
    const CT_OnOff& get_overflowPunct() const;
    bool has_topLinePunct() const;
    CT_OnOff* mutable_topLinePunct();
    const CT_OnOff& get_topLinePunct() const;
    bool has_autoSpaceDE() const;
    CT_OnOff* mutable_autoSpaceDE();
    const CT_OnOff& get_autoSpaceDE() const;
    bool has_autoSpaceDN() const;
    CT_OnOff* mutable_autoSpaceDN();
    const CT_OnOff& get_autoSpaceDN() const;
    bool has_bidi() const;
    CT_OnOff* mutable_bidi();
    const CT_OnOff& get_bidi() const;
    bool has_adjustRightInd() const;
    CT_OnOff* mutable_adjustRightInd();
    const CT_OnOff& get_adjustRightInd() const;
    bool has_snapToGrid() const;
    CT_OnOff* mutable_snapToGrid();
    const CT_OnOff& get_snapToGrid() const;
    bool has_spacing() const;
    CT_Spacing* mutable_spacing();
    const CT_Spacing& get_spacing() const;
    bool has_ind() const;
    CT_Ind* mutable_ind();
    const CT_Ind& get_ind() const;
    bool has_contextualSpacing() const;
    CT_OnOff* mutable_contextualSpacing();
    const CT_OnOff& get_contextualSpacing() const;
    bool has_mirrorIndents() const;
    CT_OnOff* mutable_mirrorIndents();
    const CT_OnOff& get_mirrorIndents() const;
    bool has_suppressOverlap() const;
    CT_OnOff* mutable_suppressOverlap();
    const CT_OnOff& get_suppressOverlap() const;
    bool has_jc() const;
    CT_Jc* mutable_jc();
    const CT_Jc& get_jc() const;
    bool has_textDirection() const;
    CT_TextDirection* mutable_textDirection();
    const CT_TextDirection& get_textDirection() const;
    bool has_textAlignment() const;
    CT_TextAlignment* mutable_textAlignment();
    const CT_TextAlignment& get_textAlignment() const;
    bool has_textboxTightWrap() const;
    CT_TextboxTightWrap* mutable_textboxTightWrap();
    const CT_TextboxTightWrap& get_textboxTightWrap() const;
    bool has_outlineLvl() const;
    CT_DecimalNumber* mutable_outlineLvl();
    const CT_DecimalNumber& get_outlineLvl() const;
    bool has_divId() const;
    CT_DecimalNumber* mutable_divId();
    const CT_DecimalNumber& get_divId() const;
    bool has_cnfStyle() const;
    CT_Cnf* mutable_cnfStyle();
    const CT_Cnf& get_cnfStyle() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PPrBase& default_instance();
protected:
private:
    bool m_has_pStyle;
    CT_String* m_pStyle;
    bool m_has_keepNext;
    CT_OnOff* m_keepNext;
    bool m_has_keepLines;
    CT_OnOff* m_keepLines;
    bool m_has_pageBreakBefore;
    CT_OnOff* m_pageBreakBefore;
    bool m_has_framePr;
    CT_FramePr* m_framePr;
    bool m_has_widowControl;
    CT_OnOff* m_widowControl;
    bool m_has_numPr;
    CT_NumPr* m_numPr;
    bool m_has_suppressLineNumbers;
    CT_OnOff* m_suppressLineNumbers;
    bool m_has_pBdr;
    CT_PBdr* m_pBdr;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_tabs;
    CT_Tabs* m_tabs;
    bool m_has_suppressAutoHyphens;
    CT_OnOff* m_suppressAutoHyphens;
    bool m_has_kinsoku;
    CT_OnOff* m_kinsoku;
    bool m_has_wordWrap;
    CT_OnOff* m_wordWrap;
    bool m_has_overflowPunct;
    CT_OnOff* m_overflowPunct;
    bool m_has_topLinePunct;
    CT_OnOff* m_topLinePunct;
    bool m_has_autoSpaceDE;
    CT_OnOff* m_autoSpaceDE;
    bool m_has_autoSpaceDN;
    CT_OnOff* m_autoSpaceDN;
    bool m_has_bidi;
    CT_OnOff* m_bidi;
    bool m_has_adjustRightInd;
    CT_OnOff* m_adjustRightInd;
    bool m_has_snapToGrid;
    CT_OnOff* m_snapToGrid;
    bool m_has_spacing;
    CT_Spacing* m_spacing;
    bool m_has_ind;
    CT_Ind* m_ind;
    bool m_has_contextualSpacing;
    CT_OnOff* m_contextualSpacing;
    bool m_has_mirrorIndents;
    CT_OnOff* m_mirrorIndents;
    bool m_has_suppressOverlap;
    CT_OnOff* m_suppressOverlap;
    bool m_has_jc;
    CT_Jc* m_jc;
    bool m_has_textDirection;
    CT_TextDirection* m_textDirection;
    bool m_has_textAlignment;
    CT_TextAlignment* m_textAlignment;
    bool m_has_textboxTightWrap;
    CT_TextboxTightWrap* m_textboxTightWrap;
    bool m_has_outlineLvl;
    CT_DecimalNumber* m_outlineLvl;
    bool m_has_divId;
    CT_DecimalNumber* m_divId;
    bool m_has_cnfStyle;
    CT_Cnf* m_cnfStyle;
    static CT_PPrBase* default_instance_;
};

class CT_PPrGeneral: public XSD::ComplexType
{
public:
    CT_PPrGeneral();
    ~CT_PPrGeneral();
    bool has_pStyle() const;
    CT_String* mutable_pStyle();
    const CT_String& get_pStyle() const;
    bool has_keepNext() const;
    CT_OnOff* mutable_keepNext();
    const CT_OnOff& get_keepNext() const;
    bool has_keepLines() const;
    CT_OnOff* mutable_keepLines();
    const CT_OnOff& get_keepLines() const;
    bool has_pageBreakBefore() const;
    CT_OnOff* mutable_pageBreakBefore();
    const CT_OnOff& get_pageBreakBefore() const;
    bool has_framePr() const;
    CT_FramePr* mutable_framePr();
    const CT_FramePr& get_framePr() const;
    bool has_widowControl() const;
    CT_OnOff* mutable_widowControl();
    const CT_OnOff& get_widowControl() const;
    bool has_numPr() const;
    CT_NumPr* mutable_numPr();
    const CT_NumPr& get_numPr() const;
    bool has_suppressLineNumbers() const;
    CT_OnOff* mutable_suppressLineNumbers();
    const CT_OnOff& get_suppressLineNumbers() const;
    bool has_pBdr() const;
    CT_PBdr* mutable_pBdr();
    const CT_PBdr& get_pBdr() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_tabs() const;
    CT_Tabs* mutable_tabs();
    const CT_Tabs& get_tabs() const;
    bool has_suppressAutoHyphens() const;
    CT_OnOff* mutable_suppressAutoHyphens();
    const CT_OnOff& get_suppressAutoHyphens() const;
    bool has_kinsoku() const;
    CT_OnOff* mutable_kinsoku();
    const CT_OnOff& get_kinsoku() const;
    bool has_wordWrap() const;
    CT_OnOff* mutable_wordWrap();
    const CT_OnOff& get_wordWrap() const;
    bool has_overflowPunct() const;
    CT_OnOff* mutable_overflowPunct();
    const CT_OnOff& get_overflowPunct() const;
    bool has_topLinePunct() const;
    CT_OnOff* mutable_topLinePunct();
    const CT_OnOff& get_topLinePunct() const;
    bool has_autoSpaceDE() const;
    CT_OnOff* mutable_autoSpaceDE();
    const CT_OnOff& get_autoSpaceDE() const;
    bool has_autoSpaceDN() const;
    CT_OnOff* mutable_autoSpaceDN();
    const CT_OnOff& get_autoSpaceDN() const;
    bool has_bidi() const;
    CT_OnOff* mutable_bidi();
    const CT_OnOff& get_bidi() const;
    bool has_adjustRightInd() const;
    CT_OnOff* mutable_adjustRightInd();
    const CT_OnOff& get_adjustRightInd() const;
    bool has_snapToGrid() const;
    CT_OnOff* mutable_snapToGrid();
    const CT_OnOff& get_snapToGrid() const;
    bool has_spacing() const;
    CT_Spacing* mutable_spacing();
    const CT_Spacing& get_spacing() const;
    bool has_ind() const;
    CT_Ind* mutable_ind();
    const CT_Ind& get_ind() const;
    bool has_contextualSpacing() const;
    CT_OnOff* mutable_contextualSpacing();
    const CT_OnOff& get_contextualSpacing() const;
    bool has_mirrorIndents() const;
    CT_OnOff* mutable_mirrorIndents();
    const CT_OnOff& get_mirrorIndents() const;
    bool has_suppressOverlap() const;
    CT_OnOff* mutable_suppressOverlap();
    const CT_OnOff& get_suppressOverlap() const;
    bool has_jc() const;
    CT_Jc* mutable_jc();
    const CT_Jc& get_jc() const;
    bool has_textDirection() const;
    CT_TextDirection* mutable_textDirection();
    const CT_TextDirection& get_textDirection() const;
    bool has_textAlignment() const;
    CT_TextAlignment* mutable_textAlignment();
    const CT_TextAlignment& get_textAlignment() const;
    bool has_textboxTightWrap() const;
    CT_TextboxTightWrap* mutable_textboxTightWrap();
    const CT_TextboxTightWrap& get_textboxTightWrap() const;
    bool has_outlineLvl() const;
    CT_DecimalNumber* mutable_outlineLvl();
    const CT_DecimalNumber& get_outlineLvl() const;
    bool has_divId() const;
    CT_DecimalNumber* mutable_divId();
    const CT_DecimalNumber& get_divId() const;
    bool has_cnfStyle() const;
    CT_Cnf* mutable_cnfStyle();
    const CT_Cnf& get_cnfStyle() const;
    bool has_pPrChange() const;
    CT_PPrChange* mutable_pPrChange();
    const CT_PPrChange& get_pPrChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PPrGeneral& default_instance();
protected:
private:
    bool m_has_pStyle;
    CT_String* m_pStyle;
    bool m_has_keepNext;
    CT_OnOff* m_keepNext;
    bool m_has_keepLines;
    CT_OnOff* m_keepLines;
    bool m_has_pageBreakBefore;
    CT_OnOff* m_pageBreakBefore;
    bool m_has_framePr;
    CT_FramePr* m_framePr;
    bool m_has_widowControl;
    CT_OnOff* m_widowControl;
    bool m_has_numPr;
    CT_NumPr* m_numPr;
    bool m_has_suppressLineNumbers;
    CT_OnOff* m_suppressLineNumbers;
    bool m_has_pBdr;
    CT_PBdr* m_pBdr;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_tabs;
    CT_Tabs* m_tabs;
    bool m_has_suppressAutoHyphens;
    CT_OnOff* m_suppressAutoHyphens;
    bool m_has_kinsoku;
    CT_OnOff* m_kinsoku;
    bool m_has_wordWrap;
    CT_OnOff* m_wordWrap;
    bool m_has_overflowPunct;
    CT_OnOff* m_overflowPunct;
    bool m_has_topLinePunct;
    CT_OnOff* m_topLinePunct;
    bool m_has_autoSpaceDE;
    CT_OnOff* m_autoSpaceDE;
    bool m_has_autoSpaceDN;
    CT_OnOff* m_autoSpaceDN;
    bool m_has_bidi;
    CT_OnOff* m_bidi;
    bool m_has_adjustRightInd;
    CT_OnOff* m_adjustRightInd;
    bool m_has_snapToGrid;
    CT_OnOff* m_snapToGrid;
    bool m_has_spacing;
    CT_Spacing* m_spacing;
    bool m_has_ind;
    CT_Ind* m_ind;
    bool m_has_contextualSpacing;
    CT_OnOff* m_contextualSpacing;
    bool m_has_mirrorIndents;
    CT_OnOff* m_mirrorIndents;
    bool m_has_suppressOverlap;
    CT_OnOff* m_suppressOverlap;
    bool m_has_jc;
    CT_Jc* m_jc;
    bool m_has_textDirection;
    CT_TextDirection* m_textDirection;
    bool m_has_textAlignment;
    CT_TextAlignment* m_textAlignment;
    bool m_has_textboxTightWrap;
    CT_TextboxTightWrap* m_textboxTightWrap;
    bool m_has_outlineLvl;
    CT_DecimalNumber* m_outlineLvl;
    bool m_has_divId;
    CT_DecimalNumber* m_divId;
    bool m_has_cnfStyle;
    CT_Cnf* m_cnfStyle;
    bool m_has_pPrChange;
    CT_PPrChange* m_pPrChange;
    static CT_PPrGeneral* default_instance_;
};

class CT_Control: public XSD::ComplexType
{
public:
    CT_Control();
    ~CT_Control();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Control& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_shapeid_attr() const;
    void set_shapeid_attr(const ns_s::ST_String& _shapeid_attr);
    const ns_s::ST_String& get_shapeid_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
protected:
private:
    static CT_Control* default_instance_;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_shapeid_attr;
    ns_s::ST_String* m_shapeid_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
};

class CT_Background: public XSD::ComplexType
{
public:
    CT_Background();
    ~CT_Background();
    void append_v_any(ns_v::Element* _v_any);
    void append_o_any(ns_o::Element* _o_any);
    bool has_drawing() const;
    CT_Drawing* mutable_drawing();
    const CT_Drawing& get_drawing() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Background& default_instance();
    bool has_color_attr() const;
    void set_color_attr(const ST_HexColor& _color_attr);
    const ST_HexColor& get_color_attr() const;
    bool has_themeColor_attr() const;
    void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr);
    const ST_ThemeColor& get_themeColor_attr() const;
    bool has_themeTint_attr() const;
    void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr);
    const ST_UcharHexNumber& get_themeTint_attr() const;
    bool has_themeShade_attr() const;
    void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr);
    const ST_UcharHexNumber& get_themeShade_attr() const;
protected:
private:
    vector<ns_v::Element*> m_v_any_list;
    vector<ns_o::Element*> m_o_any_list;
    bool m_has_drawing;
    CT_Drawing* m_drawing;
    static CT_Background* default_instance_;
    bool m_has_color_attr;
    ST_HexColor* m_color_attr;
    bool m_has_themeColor_attr;
    ST_ThemeColor* m_themeColor_attr;
    bool m_has_themeTint_attr;
    ST_UcharHexNumber* m_themeTint_attr;
    bool m_has_themeShade_attr;
    ST_UcharHexNumber* m_themeShade_attr;
};

class CT_Rel: public XSD::ComplexType
{
public:
    CT_Rel();
    ~CT_Rel();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Rel& default_instance();
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
protected:
private:
    static CT_Rel* default_instance_;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
};

class CT_Object: public XSD::ComplexType
{
public:
    CT_Object();
    ~CT_Object();
    void append_v_any(ns_v::Element* _v_any);
    void append_o_any(ns_o::Element* _o_any);
    bool has_drawing() const;
    CT_Drawing* mutable_drawing();
    const CT_Drawing& get_drawing() const;
    bool has_control() const;
    CT_Control* mutable_control();
    const CT_Control& get_control() const;
    bool has_objectLink() const;
    CT_ObjectLink* mutable_objectLink();
    const CT_ObjectLink& get_objectLink() const;
    bool has_objectEmbed() const;
    CT_ObjectEmbed* mutable_objectEmbed();
    const CT_ObjectEmbed& get_objectEmbed() const;
    bool has_movie() const;
    CT_Rel* mutable_movie();
    const CT_Rel& get_movie() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Object& default_instance();
    bool has_dxaOrig_attr() const;
    void set_dxaOrig_attr(const ns_s::ST_TwipsMeasure& _dxaOrig_attr);
    const ns_s::ST_TwipsMeasure& get_dxaOrig_attr() const;
    bool has_dyaOrig_attr() const;
    void set_dyaOrig_attr(const ns_s::ST_TwipsMeasure& _dyaOrig_attr);
    const ns_s::ST_TwipsMeasure& get_dyaOrig_attr() const;
protected:
private:
    vector<ns_v::Element*> m_v_any_list;
    vector<ns_o::Element*> m_o_any_list;
    bool m_has_drawing;
    CT_Drawing* m_drawing;
    bool m_has_control;
    CT_Control* m_control;
    bool m_has_objectLink;
    CT_ObjectLink* m_objectLink;
    bool m_has_objectEmbed;
    CT_ObjectEmbed* m_objectEmbed;
    bool m_has_movie;
    CT_Rel* m_movie;
    static CT_Object* default_instance_;
    bool m_has_dxaOrig_attr;
    ns_s::ST_TwipsMeasure* m_dxaOrig_attr;
    bool m_has_dyaOrig_attr;
    ns_s::ST_TwipsMeasure* m_dyaOrig_attr;
};

class CT_Picture: public XSD::ComplexType
{
public:
    CT_Picture();
    ~CT_Picture();
    void append_v_any(ns_v::Element* _v_any);
    void append_o_any(ns_o::Element* _o_any);
    bool has_movie() const;
    CT_Rel* mutable_movie();
    const CT_Rel& get_movie() const;
    bool has_control() const;
    CT_Control* mutable_control();
    const CT_Control& get_control() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Picture& default_instance();
protected:
private:
    vector<ns_v::Element*> m_v_any_list;
    vector<ns_o::Element*> m_o_any_list;
    bool m_has_movie;
    CT_Rel* m_movie;
    bool m_has_control;
    CT_Control* m_control;
    static CT_Picture* default_instance_;
};

class CT_ObjectEmbed: public XSD::ComplexType
{
public:
    CT_ObjectEmbed();
    ~CT_ObjectEmbed();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ObjectEmbed& default_instance();
    bool has_drawAspect_attr() const;
    void set_drawAspect_attr(const ST_ObjectDrawAspect& _drawAspect_attr);
    const ST_ObjectDrawAspect& get_drawAspect_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
    bool has_progId_attr() const;
    void set_progId_attr(const ns_s::ST_String& _progId_attr);
    const ns_s::ST_String& get_progId_attr() const;
    bool has_shapeId_attr() const;
    void set_shapeId_attr(const ns_s::ST_String& _shapeId_attr);
    const ns_s::ST_String& get_shapeId_attr() const;
    bool has_fieldCodes_attr() const;
    void set_fieldCodes_attr(const ns_s::ST_String& _fieldCodes_attr);
    const ns_s::ST_String& get_fieldCodes_attr() const;
protected:
private:
    static CT_ObjectEmbed* default_instance_;
    bool m_has_drawAspect_attr;
    ST_ObjectDrawAspect* m_drawAspect_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
    bool m_has_progId_attr;
    ns_s::ST_String* m_progId_attr;
    bool m_has_shapeId_attr;
    ns_s::ST_String* m_shapeId_attr;
    bool m_has_fieldCodes_attr;
    ns_s::ST_String* m_fieldCodes_attr;
};

class CT_ObjectLink: public XSD::ComplexType
{
public:
    CT_ObjectLink();
    ~CT_ObjectLink();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ObjectLink& default_instance();
    bool has_drawAspect_attr() const;
    void set_drawAspect_attr(const ST_ObjectDrawAspect& _drawAspect_attr);
    const ST_ObjectDrawAspect& get_drawAspect_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
    bool has_progId_attr() const;
    void set_progId_attr(const ns_s::ST_String& _progId_attr);
    const ns_s::ST_String& get_progId_attr() const;
    bool has_shapeId_attr() const;
    void set_shapeId_attr(const ns_s::ST_String& _shapeId_attr);
    const ns_s::ST_String& get_shapeId_attr() const;
    bool has_fieldCodes_attr() const;
    void set_fieldCodes_attr(const ns_s::ST_String& _fieldCodes_attr);
    const ns_s::ST_String& get_fieldCodes_attr() const;
    bool has_updateMode_attr() const;
    void set_updateMode_attr(const ST_ObjectUpdateMode& _updateMode_attr);
    const ST_ObjectUpdateMode& get_updateMode_attr() const;
    bool has_lockedField_attr() const;
    void set_lockedField_attr(const ns_s::ST_OnOff& _lockedField_attr);
    const ns_s::ST_OnOff& get_lockedField_attr() const;
protected:
private:
    static CT_ObjectLink* default_instance_;
    bool m_has_drawAspect_attr;
    ST_ObjectDrawAspect* m_drawAspect_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
    bool m_has_progId_attr;
    ns_s::ST_String* m_progId_attr;
    bool m_has_shapeId_attr;
    ns_s::ST_String* m_shapeId_attr;
    bool m_has_fieldCodes_attr;
    ns_s::ST_String* m_fieldCodes_attr;
    bool m_has_updateMode_attr;
    ST_ObjectUpdateMode* m_updateMode_attr;
    bool m_has_lockedField_attr;
    ns_s::ST_OnOff* m_lockedField_attr;
};

class CT_Drawing: public XSD::ComplexType
{
public:
    CT_Drawing();
    ~CT_Drawing();
    ns_wp::CT_Anchor* add_wp_anchor();
    ns_wp::CT_Inline* add_wp_inline();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Drawing& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_wp_anchor() const;
        ns_wp::CT_Anchor* mutable_wp_anchor();
        const ns_wp::CT_Anchor& get_wp_anchor() const;
        bool has_wp_inline() const;
        ns_wp::CT_Inline* mutable_wp_inline();
        const ns_wp::CT_Inline& get_wp_inline() const;
    protected:
    private:
        bool m_has_wp_anchor;
        ns_wp::CT_Anchor* m_wp_anchor;
        bool m_has_wp_inline;
        ns_wp::CT_Inline* m_wp_inline;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Drawing* default_instance_;
};

class CT_SimpleField: public XSD::ComplexType
{
public:
    CT_SimpleField();
    ~CT_SimpleField();
    bool has_fldData() const;
    CT_Text* mutable_fldData();
    const CT_Text& get_fldData() const;
    CT_CustomXmlRun* add_customXml();
    CT_SmartTagRun* add_smartTag();
    CT_SdtRun* add_sdt();
    CT_DirContentRun* add_dir();
    CT_BdoContentRun* add_bdo();
    CT_R* add_r();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    CT_SimpleField* add_fldSimple();
    CT_Hyperlink* add_hyperlink();
    CT_Rel* add_subDoc();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SimpleField& default_instance();
    bool has_instr_attr() const;
    void set_instr_attr(const ns_s::ST_String& _instr_attr);
    const ns_s::ST_String& get_instr_attr() const;
    bool has_fldLock_attr() const;
    void set_fldLock_attr(const ns_s::ST_OnOff& _fldLock_attr);
    const ns_s::ST_OnOff& get_fldLock_attr() const;
    bool has_dirty_attr() const;
    void set_dirty_attr(const ns_s::ST_OnOff& _dirty_attr);
    const ns_s::ST_OnOff& get_dirty_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlRun* mutable_customXml();
        const CT_CustomXmlRun& get_customXml() const;
        bool has_smartTag() const;
        CT_SmartTagRun* mutable_smartTag();
        const CT_SmartTagRun& get_smartTag() const;
        bool has_sdt() const;
        CT_SdtRun* mutable_sdt();
        const CT_SdtRun& get_sdt() const;
        bool has_dir() const;
        CT_DirContentRun* mutable_dir();
        const CT_DirContentRun& get_dir() const;
        bool has_bdo() const;
        CT_BdoContentRun* mutable_bdo();
        const CT_BdoContentRun& get_bdo() const;
        bool has_r() const;
        CT_R* mutable_r();
        const CT_R& get_r() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_fldSimple() const;
        CT_SimpleField* mutable_fldSimple();
        const CT_SimpleField& get_fldSimple() const;
        bool has_hyperlink() const;
        CT_Hyperlink* mutable_hyperlink();
        const CT_Hyperlink& get_hyperlink() const;
        bool has_subDoc() const;
        CT_Rel* mutable_subDoc();
        const CT_Rel& get_subDoc() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlRun* m_customXml;
        bool m_has_smartTag;
        CT_SmartTagRun* m_smartTag;
        bool m_has_sdt;
        CT_SdtRun* m_sdt;
        bool m_has_dir;
        CT_DirContentRun* m_dir;
        bool m_has_bdo;
        CT_BdoContentRun* m_bdo;
        bool m_has_r;
        CT_R* m_r;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_fldSimple;
        CT_SimpleField* m_fldSimple;
        bool m_has_hyperlink;
        CT_Hyperlink* m_hyperlink;
        bool m_has_subDoc;
        CT_Rel* m_subDoc;
    };
    bool m_has_fldData;
    CT_Text* m_fldData;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SimpleField* default_instance_;
    bool m_has_instr_attr;
    ns_s::ST_String* m_instr_attr;
    bool m_has_fldLock_attr;
    ns_s::ST_OnOff* m_fldLock_attr;
    bool m_has_dirty_attr;
    ns_s::ST_OnOff* m_dirty_attr;
};

class CT_FFTextType: public XSD::ComplexType
{
public:
    CT_FFTextType();
    ~CT_FFTextType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FFTextType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_FFTextType& _val_attr);
    const ST_FFTextType& get_val_attr() const;
protected:
private:
    static CT_FFTextType* default_instance_;
    bool m_has_val_attr;
    ST_FFTextType* m_val_attr;
};

class CT_FFName: public XSD::ComplexType
{
public:
    CT_FFName();
    ~CT_FFName();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FFName& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_FFName& _val_attr);
    const ST_FFName& get_val_attr() const;
protected:
private:
    static CT_FFName* default_instance_;
    bool m_has_val_attr;
    ST_FFName* m_val_attr;
};

class CT_FldChar: public XSD::ComplexType
{
public:
    CT_FldChar();
    ~CT_FldChar();
    bool has_fldData() const;
    CT_Text* mutable_fldData();
    const CT_Text& get_fldData() const;
    bool has_ffData() const;
    CT_FFData* mutable_ffData();
    const CT_FFData& get_ffData() const;
    bool has_numberingChange() const;
    CT_TrackChangeNumbering* mutable_numberingChange();
    const CT_TrackChangeNumbering& get_numberingChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FldChar& default_instance();
    bool has_fldCharType_attr() const;
    void set_fldCharType_attr(const ST_FldCharType& _fldCharType_attr);
    const ST_FldCharType& get_fldCharType_attr() const;
    bool has_fldLock_attr() const;
    void set_fldLock_attr(const ns_s::ST_OnOff& _fldLock_attr);
    const ns_s::ST_OnOff& get_fldLock_attr() const;
    bool has_dirty_attr() const;
    void set_dirty_attr(const ns_s::ST_OnOff& _dirty_attr);
    const ns_s::ST_OnOff& get_dirty_attr() const;
protected:
private:
    bool m_has_fldData;
    CT_Text* m_fldData;
    bool m_has_ffData;
    CT_FFData* m_ffData;
    bool m_has_numberingChange;
    CT_TrackChangeNumbering* m_numberingChange;
    static CT_FldChar* default_instance_;
    bool m_has_fldCharType_attr;
    ST_FldCharType* m_fldCharType_attr;
    bool m_has_fldLock_attr;
    ns_s::ST_OnOff* m_fldLock_attr;
    bool m_has_dirty_attr;
    ns_s::ST_OnOff* m_dirty_attr;
};

class CT_Hyperlink: public XSD::ComplexType
{
public:
    CT_Hyperlink();
    ~CT_Hyperlink();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Hyperlink& default_instance();
    bool has_tgtFrame_attr() const;
    void set_tgtFrame_attr(const ns_s::ST_String& _tgtFrame_attr);
    const ns_s::ST_String& get_tgtFrame_attr() const;
    bool has_tooltip_attr() const;
    void set_tooltip_attr(const ns_s::ST_String& _tooltip_attr);
    const ns_s::ST_String& get_tooltip_attr() const;
    bool has_docLocation_attr() const;
    void set_docLocation_attr(const ns_s::ST_String& _docLocation_attr);
    const ns_s::ST_String& get_docLocation_attr() const;
    bool has_history_attr() const;
    void set_history_attr(const ns_s::ST_OnOff& _history_attr);
    const ns_s::ST_OnOff& get_history_attr() const;
    bool has_anchor_attr() const;
    void set_anchor_attr(const ns_s::ST_String& _anchor_attr);
    const ns_s::ST_String& get_anchor_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
protected:
private:
    static CT_Hyperlink* default_instance_;
    bool m_has_tgtFrame_attr;
    ns_s::ST_String* m_tgtFrame_attr;
    bool m_has_tooltip_attr;
    ns_s::ST_String* m_tooltip_attr;
    bool m_has_docLocation_attr;
    ns_s::ST_String* m_docLocation_attr;
    bool m_has_history_attr;
    ns_s::ST_OnOff* m_history_attr;
    bool m_has_anchor_attr;
    ns_s::ST_String* m_anchor_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
};

class CT_FFData: public XSD::ComplexType
{
public:
    CT_FFData();
    ~CT_FFData();
    CT_FFName* add_name();
    CT_DecimalNumber* add_label();
    CT_UnsignedDecimalNumber* add_tabIndex();
    CT_OnOff* add_enabled();
    CT_OnOff* add_calcOnExit();
    CT_MacroName* add_entryMacro();
    CT_MacroName* add_exitMacro();
    CT_FFHelpText* add_helpText();
    CT_FFStatusText* add_statusText();
    CT_FFCheckBox* add_checkBox();
    CT_FFDDList* add_ddList();
    CT_FFTextInput* add_textInput();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FFData& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_name() const;
        CT_FFName* mutable_name();
        const CT_FFName& get_name() const;
        bool has_label() const;
        CT_DecimalNumber* mutable_label();
        const CT_DecimalNumber& get_label() const;
        bool has_tabIndex() const;
        CT_UnsignedDecimalNumber* mutable_tabIndex();
        const CT_UnsignedDecimalNumber& get_tabIndex() const;
        bool has_enabled() const;
        CT_OnOff* mutable_enabled();
        const CT_OnOff& get_enabled() const;
        bool has_calcOnExit() const;
        CT_OnOff* mutable_calcOnExit();
        const CT_OnOff& get_calcOnExit() const;
        bool has_entryMacro() const;
        CT_MacroName* mutable_entryMacro();
        const CT_MacroName& get_entryMacro() const;
        bool has_exitMacro() const;
        CT_MacroName* mutable_exitMacro();
        const CT_MacroName& get_exitMacro() const;
        bool has_helpText() const;
        CT_FFHelpText* mutable_helpText();
        const CT_FFHelpText& get_helpText() const;
        bool has_statusText() const;
        CT_FFStatusText* mutable_statusText();
        const CT_FFStatusText& get_statusText() const;
        bool has_checkBox() const;
        CT_FFCheckBox* mutable_checkBox();
        const CT_FFCheckBox& get_checkBox() const;
        bool has_ddList() const;
        CT_FFDDList* mutable_ddList();
        const CT_FFDDList& get_ddList() const;
        bool has_textInput() const;
        CT_FFTextInput* mutable_textInput();
        const CT_FFTextInput& get_textInput() const;
    protected:
    private:
        bool m_has_name;
        CT_FFName* m_name;
        bool m_has_label;
        CT_DecimalNumber* m_label;
        bool m_has_tabIndex;
        CT_UnsignedDecimalNumber* m_tabIndex;
        bool m_has_enabled;
        CT_OnOff* m_enabled;
        bool m_has_calcOnExit;
        CT_OnOff* m_calcOnExit;
        bool m_has_entryMacro;
        CT_MacroName* m_entryMacro;
        bool m_has_exitMacro;
        CT_MacroName* m_exitMacro;
        bool m_has_helpText;
        CT_FFHelpText* m_helpText;
        bool m_has_statusText;
        CT_FFStatusText* m_statusText;
        bool m_has_checkBox;
        CT_FFCheckBox* m_checkBox;
        bool m_has_ddList;
        CT_FFDDList* m_ddList;
        bool m_has_textInput;
        CT_FFTextInput* m_textInput;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_FFData* default_instance_;
};

class CT_FFHelpText: public XSD::ComplexType
{
public:
    CT_FFHelpText();
    ~CT_FFHelpText();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FFHelpText& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_InfoTextType& _type_attr);
    const ST_InfoTextType& get_type_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ST_FFHelpTextVal& _val_attr);
    const ST_FFHelpTextVal& get_val_attr() const;
protected:
private:
    static CT_FFHelpText* default_instance_;
    bool m_has_type_attr;
    ST_InfoTextType* m_type_attr;
    bool m_has_val_attr;
    ST_FFHelpTextVal* m_val_attr;
};

class CT_FFStatusText: public XSD::ComplexType
{
public:
    CT_FFStatusText();
    ~CT_FFStatusText();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FFStatusText& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_InfoTextType& _type_attr);
    const ST_InfoTextType& get_type_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ST_FFStatusTextVal& _val_attr);
    const ST_FFStatusTextVal& get_val_attr() const;
protected:
private:
    static CT_FFStatusText* default_instance_;
    bool m_has_type_attr;
    ST_InfoTextType* m_type_attr;
    bool m_has_val_attr;
    ST_FFStatusTextVal* m_val_attr;
};

class CT_FFCheckBox: public XSD::ComplexType
{
public:
    CT_FFCheckBox();
    ~CT_FFCheckBox();
    bool has_size() const;
    CT_HpsMeasure* mutable_size();
    const CT_HpsMeasure& get_size() const;
    bool has_sizeAuto() const;
    CT_OnOff* mutable_sizeAuto();
    const CT_OnOff& get_sizeAuto() const;
    bool has_default() const;
    CT_OnOff* mutable_default();
    const CT_OnOff& get_default() const;
    bool has_checked() const;
    CT_OnOff* mutable_checked();
    const CT_OnOff& get_checked() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FFCheckBox& default_instance();
protected:
private:
    bool m_has_size;
    CT_HpsMeasure* m_size;
    bool m_has_sizeAuto;
    CT_OnOff* m_sizeAuto;
    bool m_has_default;
    CT_OnOff* m_default;
    bool m_has_checked;
    CT_OnOff* m_checked;
    static CT_FFCheckBox* default_instance_;
};

class CT_FFDDList: public XSD::ComplexType
{
public:
    CT_FFDDList();
    ~CT_FFDDList();
    bool has_result() const;
    CT_DecimalNumber* mutable_result();
    const CT_DecimalNumber& get_result() const;
    bool has_default() const;
    CT_DecimalNumber* mutable_default();
    const CT_DecimalNumber& get_default() const;
    CT_String* add_listEntry();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FFDDList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_listEntry() const;
        CT_String* mutable_listEntry();
        const CT_String& get_listEntry() const;
    protected:
    private:
        bool m_has_listEntry;
        CT_String* m_listEntry;
    };
    bool m_has_result;
    CT_DecimalNumber* m_result;
    bool m_has_default;
    CT_DecimalNumber* m_default;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_FFDDList* default_instance_;
};

class CT_FFTextInput: public XSD::ComplexType
{
public:
    CT_FFTextInput();
    ~CT_FFTextInput();
    bool has_type() const;
    CT_FFTextType* mutable_type();
    const CT_FFTextType& get_type() const;
    bool has_default() const;
    CT_String* mutable_default();
    const CT_String& get_default() const;
    bool has_maxLength() const;
    CT_DecimalNumber* mutable_maxLength();
    const CT_DecimalNumber& get_maxLength() const;
    bool has_format() const;
    CT_String* mutable_format();
    const CT_String& get_format() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FFTextInput& default_instance();
protected:
private:
    bool m_has_type;
    CT_FFTextType* m_type;
    bool m_has_default;
    CT_String* m_default;
    bool m_has_maxLength;
    CT_DecimalNumber* m_maxLength;
    bool m_has_format;
    CT_String* m_format;
    static CT_FFTextInput* default_instance_;
};

class CT_SectType: public XSD::ComplexType
{
public:
    CT_SectType();
    ~CT_SectType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SectType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_SectionMark& _val_attr);
    const ST_SectionMark& get_val_attr() const;
protected:
private:
    static CT_SectType* default_instance_;
    bool m_has_val_attr;
    ST_SectionMark* m_val_attr;
};

class CT_PaperSource: public XSD::ComplexType
{
public:
    CT_PaperSource();
    ~CT_PaperSource();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PaperSource& default_instance();
    bool has_first_attr() const;
    void set_first_attr(const ST_DecimalNumber& _first_attr);
    const ST_DecimalNumber& get_first_attr() const;
    bool has_other_attr() const;
    void set_other_attr(const ST_DecimalNumber& _other_attr);
    const ST_DecimalNumber& get_other_attr() const;
protected:
private:
    static CT_PaperSource* default_instance_;
    bool m_has_first_attr;
    ST_DecimalNumber* m_first_attr;
    bool m_has_other_attr;
    ST_DecimalNumber* m_other_attr;
};

class CT_PageSz: public XSD::ComplexType
{
public:
    CT_PageSz();
    ~CT_PageSz();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PageSz& default_instance();
    bool has_w_attr() const;
    void set_w_attr(const ns_s::ST_TwipsMeasure& _w_attr);
    const ns_s::ST_TwipsMeasure& get_w_attr() const;
    bool has_h_attr() const;
    void set_h_attr(const ns_s::ST_TwipsMeasure& _h_attr);
    const ns_s::ST_TwipsMeasure& get_h_attr() const;
    bool has_orient_attr() const;
    void set_orient_attr(const ST_PageOrientation& _orient_attr);
    const ST_PageOrientation& get_orient_attr() const;
    bool has_code_attr() const;
    void set_code_attr(const ST_DecimalNumber& _code_attr);
    const ST_DecimalNumber& get_code_attr() const;
protected:
private:
    static CT_PageSz* default_instance_;
    bool m_has_w_attr;
    ns_s::ST_TwipsMeasure* m_w_attr;
    bool m_has_h_attr;
    ns_s::ST_TwipsMeasure* m_h_attr;
    bool m_has_orient_attr;
    ST_PageOrientation* m_orient_attr;
    bool m_has_code_attr;
    ST_DecimalNumber* m_code_attr;
};

class CT_PageMar: public XSD::ComplexType
{
public:
    CT_PageMar();
    ~CT_PageMar();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PageMar& default_instance();
    bool has_top_attr() const;
    void set_top_attr(const ST_SignedTwipsMeasure& _top_attr);
    const ST_SignedTwipsMeasure& get_top_attr() const;
    bool has_right_attr() const;
    void set_right_attr(const ns_s::ST_TwipsMeasure& _right_attr);
    const ns_s::ST_TwipsMeasure& get_right_attr() const;
    bool has_bottom_attr() const;
    void set_bottom_attr(const ST_SignedTwipsMeasure& _bottom_attr);
    const ST_SignedTwipsMeasure& get_bottom_attr() const;
    bool has_left_attr() const;
    void set_left_attr(const ns_s::ST_TwipsMeasure& _left_attr);
    const ns_s::ST_TwipsMeasure& get_left_attr() const;
    bool has_header_attr() const;
    void set_header_attr(const ns_s::ST_TwipsMeasure& _header_attr);
    const ns_s::ST_TwipsMeasure& get_header_attr() const;
    bool has_footer_attr() const;
    void set_footer_attr(const ns_s::ST_TwipsMeasure& _footer_attr);
    const ns_s::ST_TwipsMeasure& get_footer_attr() const;
    bool has_gutter_attr() const;
    void set_gutter_attr(const ns_s::ST_TwipsMeasure& _gutter_attr);
    const ns_s::ST_TwipsMeasure& get_gutter_attr() const;
protected:
private:
    static CT_PageMar* default_instance_;
    bool m_has_top_attr;
    ST_SignedTwipsMeasure* m_top_attr;
    bool m_has_right_attr;
    ns_s::ST_TwipsMeasure* m_right_attr;
    bool m_has_bottom_attr;
    ST_SignedTwipsMeasure* m_bottom_attr;
    bool m_has_left_attr;
    ns_s::ST_TwipsMeasure* m_left_attr;
    bool m_has_header_attr;
    ns_s::ST_TwipsMeasure* m_header_attr;
    bool m_has_footer_attr;
    ns_s::ST_TwipsMeasure* m_footer_attr;
    bool m_has_gutter_attr;
    ns_s::ST_TwipsMeasure* m_gutter_attr;
};

class CT_PageBorders: public XSD::ComplexType
{
public:
    CT_PageBorders();
    ~CT_PageBorders();
    bool has_top() const;
    CT_TopPageBorder* mutable_top();
    const CT_TopPageBorder& get_top() const;
    bool has_left() const;
    CT_PageBorder* mutable_left();
    const CT_PageBorder& get_left() const;
    bool has_bottom() const;
    CT_BottomPageBorder* mutable_bottom();
    const CT_BottomPageBorder& get_bottom() const;
    bool has_right() const;
    CT_PageBorder* mutable_right();
    const CT_PageBorder& get_right() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PageBorders& default_instance();
    bool has_zOrder_attr() const;
    void set_zOrder_attr(const ST_PageBorderZOrder& _zOrder_attr);
    const ST_PageBorderZOrder& get_zOrder_attr() const;
    bool has_display_attr() const;
    void set_display_attr(const ST_PageBorderDisplay& _display_attr);
    const ST_PageBorderDisplay& get_display_attr() const;
    bool has_offsetFrom_attr() const;
    void set_offsetFrom_attr(const ST_PageBorderOffset& _offsetFrom_attr);
    const ST_PageBorderOffset& get_offsetFrom_attr() const;
protected:
private:
    bool m_has_top;
    CT_TopPageBorder* m_top;
    bool m_has_left;
    CT_PageBorder* m_left;
    bool m_has_bottom;
    CT_BottomPageBorder* m_bottom;
    bool m_has_right;
    CT_PageBorder* m_right;
    static CT_PageBorders* default_instance_;
    bool m_has_zOrder_attr;
    ST_PageBorderZOrder* m_zOrder_attr;
    bool m_has_display_attr;
    ST_PageBorderDisplay* m_display_attr;
    bool m_has_offsetFrom_attr;
    ST_PageBorderOffset* m_offsetFrom_attr;
};

class CT_PageBorder: public XSD::ComplexType
{
public:
    CT_PageBorder();
    ~CT_PageBorder();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PageBorder& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Border& _val_attr);
    const ST_Border& get_val_attr() const;
    bool has_color_attr() const;
    void set_color_attr(const ST_HexColor& _color_attr);
    const ST_HexColor& get_color_attr() const;
    bool has_themeColor_attr() const;
    void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr);
    const ST_ThemeColor& get_themeColor_attr() const;
    bool has_themeTint_attr() const;
    void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr);
    const ST_UcharHexNumber& get_themeTint_attr() const;
    bool has_themeShade_attr() const;
    void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr);
    const ST_UcharHexNumber& get_themeShade_attr() const;
    bool has_sz_attr() const;
    void set_sz_attr(const ST_EighthPointMeasure& _sz_attr);
    const ST_EighthPointMeasure& get_sz_attr() const;
    bool has_space_attr() const;
    void set_space_attr(const ST_PointMeasure& _space_attr);
    const ST_PointMeasure& get_space_attr() const;
    bool has_shadow_attr() const;
    void set_shadow_attr(const ns_s::ST_OnOff& _shadow_attr);
    const ns_s::ST_OnOff& get_shadow_attr() const;
    bool has_frame_attr() const;
    void set_frame_attr(const ns_s::ST_OnOff& _frame_attr);
    const ns_s::ST_OnOff& get_frame_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
protected:
private:
    static CT_PageBorder* default_instance_;
    bool m_has_val_attr;
    ST_Border* m_val_attr;
    bool m_has_color_attr;
    ST_HexColor* m_color_attr;
    bool m_has_themeColor_attr;
    ST_ThemeColor* m_themeColor_attr;
    bool m_has_themeTint_attr;
    ST_UcharHexNumber* m_themeTint_attr;
    bool m_has_themeShade_attr;
    ST_UcharHexNumber* m_themeShade_attr;
    bool m_has_sz_attr;
    ST_EighthPointMeasure* m_sz_attr;
    bool m_has_space_attr;
    ST_PointMeasure* m_space_attr;
    bool m_has_shadow_attr;
    ns_s::ST_OnOff* m_shadow_attr;
    bool m_has_frame_attr;
    ns_s::ST_OnOff* m_frame_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
};

class CT_BottomPageBorder: public XSD::ComplexType
{
public:
    CT_BottomPageBorder();
    ~CT_BottomPageBorder();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BottomPageBorder& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Border& _val_attr);
    const ST_Border& get_val_attr() const;
    bool has_color_attr() const;
    void set_color_attr(const ST_HexColor& _color_attr);
    const ST_HexColor& get_color_attr() const;
    bool has_themeColor_attr() const;
    void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr);
    const ST_ThemeColor& get_themeColor_attr() const;
    bool has_themeTint_attr() const;
    void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr);
    const ST_UcharHexNumber& get_themeTint_attr() const;
    bool has_themeShade_attr() const;
    void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr);
    const ST_UcharHexNumber& get_themeShade_attr() const;
    bool has_sz_attr() const;
    void set_sz_attr(const ST_EighthPointMeasure& _sz_attr);
    const ST_EighthPointMeasure& get_sz_attr() const;
    bool has_space_attr() const;
    void set_space_attr(const ST_PointMeasure& _space_attr);
    const ST_PointMeasure& get_space_attr() const;
    bool has_shadow_attr() const;
    void set_shadow_attr(const ns_s::ST_OnOff& _shadow_attr);
    const ns_s::ST_OnOff& get_shadow_attr() const;
    bool has_frame_attr() const;
    void set_frame_attr(const ns_s::ST_OnOff& _frame_attr);
    const ns_s::ST_OnOff& get_frame_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
    bool has_r_bottomLeft_attr() const;
    void set_r_bottomLeft_attr(const ns_r::ST_RelationshipId& _r_bottomLeft_attr);
    const ns_r::ST_RelationshipId& get_r_bottomLeft_attr() const;
    bool has_r_bottomRight_attr() const;
    void set_r_bottomRight_attr(const ns_r::ST_RelationshipId& _r_bottomRight_attr);
    const ns_r::ST_RelationshipId& get_r_bottomRight_attr() const;
protected:
private:
    static CT_BottomPageBorder* default_instance_;
    bool m_has_val_attr;
    ST_Border* m_val_attr;
    bool m_has_color_attr;
    ST_HexColor* m_color_attr;
    bool m_has_themeColor_attr;
    ST_ThemeColor* m_themeColor_attr;
    bool m_has_themeTint_attr;
    ST_UcharHexNumber* m_themeTint_attr;
    bool m_has_themeShade_attr;
    ST_UcharHexNumber* m_themeShade_attr;
    bool m_has_sz_attr;
    ST_EighthPointMeasure* m_sz_attr;
    bool m_has_space_attr;
    ST_PointMeasure* m_space_attr;
    bool m_has_shadow_attr;
    ns_s::ST_OnOff* m_shadow_attr;
    bool m_has_frame_attr;
    ns_s::ST_OnOff* m_frame_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
    bool m_has_r_bottomLeft_attr;
    ns_r::ST_RelationshipId* m_r_bottomLeft_attr;
    bool m_has_r_bottomRight_attr;
    ns_r::ST_RelationshipId* m_r_bottomRight_attr;
};

class CT_TopPageBorder: public XSD::ComplexType
{
public:
    CT_TopPageBorder();
    ~CT_TopPageBorder();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TopPageBorder& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Border& _val_attr);
    const ST_Border& get_val_attr() const;
    bool has_color_attr() const;
    void set_color_attr(const ST_HexColor& _color_attr);
    const ST_HexColor& get_color_attr() const;
    bool has_themeColor_attr() const;
    void set_themeColor_attr(const ST_ThemeColor& _themeColor_attr);
    const ST_ThemeColor& get_themeColor_attr() const;
    bool has_themeTint_attr() const;
    void set_themeTint_attr(const ST_UcharHexNumber& _themeTint_attr);
    const ST_UcharHexNumber& get_themeTint_attr() const;
    bool has_themeShade_attr() const;
    void set_themeShade_attr(const ST_UcharHexNumber& _themeShade_attr);
    const ST_UcharHexNumber& get_themeShade_attr() const;
    bool has_sz_attr() const;
    void set_sz_attr(const ST_EighthPointMeasure& _sz_attr);
    const ST_EighthPointMeasure& get_sz_attr() const;
    bool has_space_attr() const;
    void set_space_attr(const ST_PointMeasure& _space_attr);
    const ST_PointMeasure& get_space_attr() const;
    bool has_shadow_attr() const;
    void set_shadow_attr(const ns_s::ST_OnOff& _shadow_attr);
    const ns_s::ST_OnOff& get_shadow_attr() const;
    bool has_frame_attr() const;
    void set_frame_attr(const ns_s::ST_OnOff& _frame_attr);
    const ns_s::ST_OnOff& get_frame_attr() const;
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
    bool has_r_topLeft_attr() const;
    void set_r_topLeft_attr(const ns_r::ST_RelationshipId& _r_topLeft_attr);
    const ns_r::ST_RelationshipId& get_r_topLeft_attr() const;
    bool has_r_topRight_attr() const;
    void set_r_topRight_attr(const ns_r::ST_RelationshipId& _r_topRight_attr);
    const ns_r::ST_RelationshipId& get_r_topRight_attr() const;
protected:
private:
    static CT_TopPageBorder* default_instance_;
    bool m_has_val_attr;
    ST_Border* m_val_attr;
    bool m_has_color_attr;
    ST_HexColor* m_color_attr;
    bool m_has_themeColor_attr;
    ST_ThemeColor* m_themeColor_attr;
    bool m_has_themeTint_attr;
    ST_UcharHexNumber* m_themeTint_attr;
    bool m_has_themeShade_attr;
    ST_UcharHexNumber* m_themeShade_attr;
    bool m_has_sz_attr;
    ST_EighthPointMeasure* m_sz_attr;
    bool m_has_space_attr;
    ST_PointMeasure* m_space_attr;
    bool m_has_shadow_attr;
    ns_s::ST_OnOff* m_shadow_attr;
    bool m_has_frame_attr;
    ns_s::ST_OnOff* m_frame_attr;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
    bool m_has_r_topLeft_attr;
    ns_r::ST_RelationshipId* m_r_topLeft_attr;
    bool m_has_r_topRight_attr;
    ns_r::ST_RelationshipId* m_r_topRight_attr;
};

class CT_LineNumber: public XSD::ComplexType
{
public:
    CT_LineNumber();
    ~CT_LineNumber();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LineNumber& default_instance();
    bool has_countBy_attr() const;
    void set_countBy_attr(const ST_DecimalNumber& _countBy_attr);
    const ST_DecimalNumber& get_countBy_attr() const;
    bool has_start_attr() const;
    void set_start_attr(const ST_DecimalNumber& _start_attr);
    const ST_DecimalNumber& get_start_attr() const;
    bool has_distance_attr() const;
    void set_distance_attr(const ns_s::ST_TwipsMeasure& _distance_attr);
    const ns_s::ST_TwipsMeasure& get_distance_attr() const;
    bool has_restart_attr() const;
    void set_restart_attr(const ST_LineNumberRestart& _restart_attr);
    const ST_LineNumberRestart& get_restart_attr() const;
protected:
private:
    static CT_LineNumber* default_instance_;
    bool m_has_countBy_attr;
    ST_DecimalNumber* m_countBy_attr;
    bool m_has_start_attr;
    ST_DecimalNumber* m_start_attr;
    bool m_has_distance_attr;
    ns_s::ST_TwipsMeasure* m_distance_attr;
    bool m_has_restart_attr;
    ST_LineNumberRestart* m_restart_attr;
};

class CT_PageNumber: public XSD::ComplexType
{
public:
    CT_PageNumber();
    ~CT_PageNumber();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PageNumber& default_instance();
    bool has_fmt_attr() const;
    void set_fmt_attr(const ST_NumberFormat& _fmt_attr);
    const ST_NumberFormat& get_fmt_attr() const;
    bool has_start_attr() const;
    void set_start_attr(const ST_DecimalNumber& _start_attr);
    const ST_DecimalNumber& get_start_attr() const;
    bool has_chapStyle_attr() const;
    void set_chapStyle_attr(const ST_DecimalNumber& _chapStyle_attr);
    const ST_DecimalNumber& get_chapStyle_attr() const;
    bool has_chapSep_attr() const;
    void set_chapSep_attr(const ST_ChapterSep& _chapSep_attr);
    const ST_ChapterSep& get_chapSep_attr() const;
protected:
private:
    static CT_PageNumber* default_instance_;
    bool m_has_fmt_attr;
    ST_NumberFormat* m_fmt_attr;
    bool m_has_start_attr;
    ST_DecimalNumber* m_start_attr;
    bool m_has_chapStyle_attr;
    ST_DecimalNumber* m_chapStyle_attr;
    bool m_has_chapSep_attr;
    ST_ChapterSep* m_chapSep_attr;
};

class CT_Column: public XSD::ComplexType
{
public:
    CT_Column();
    ~CT_Column();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Column& default_instance();
    bool has_w_attr() const;
    void set_w_attr(const ns_s::ST_TwipsMeasure& _w_attr);
    const ns_s::ST_TwipsMeasure& get_w_attr() const;
    bool has_space_attr() const;
    void set_space_attr(const ns_s::ST_TwipsMeasure& _space_attr);
    const ns_s::ST_TwipsMeasure& get_space_attr() const;
protected:
private:
    static CT_Column* default_instance_;
    bool m_has_w_attr;
    ns_s::ST_TwipsMeasure* m_w_attr;
    bool m_has_space_attr;
    ns_s::ST_TwipsMeasure* m_space_attr;
};

class CT_Columns: public XSD::ComplexType
{
public:
    CT_Columns();
    ~CT_Columns();
    CT_Column* add_col();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Columns& default_instance();
    bool has_equalWidth_attr() const;
    void set_equalWidth_attr(const ns_s::ST_OnOff& _equalWidth_attr);
    const ns_s::ST_OnOff& get_equalWidth_attr() const;
    bool has_space_attr() const;
    void set_space_attr(const ns_s::ST_TwipsMeasure& _space_attr);
    const ns_s::ST_TwipsMeasure& get_space_attr() const;
    bool has_num_attr() const;
    void set_num_attr(const ST_DecimalNumber& _num_attr);
    const ST_DecimalNumber& get_num_attr() const;
    bool has_sep_attr() const;
    void set_sep_attr(const ns_s::ST_OnOff& _sep_attr);
    const ns_s::ST_OnOff& get_sep_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_col() const;
        CT_Column* mutable_col();
        const CT_Column& get_col() const;
    protected:
    private:
        bool m_has_col;
        CT_Column* m_col;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Columns* default_instance_;
    bool m_has_equalWidth_attr;
    ns_s::ST_OnOff* m_equalWidth_attr;
    bool m_has_space_attr;
    ns_s::ST_TwipsMeasure* m_space_attr;
    bool m_has_num_attr;
    ST_DecimalNumber* m_num_attr;
    bool m_has_sep_attr;
    ns_s::ST_OnOff* m_sep_attr;
};

class CT_VerticalJc: public XSD::ComplexType
{
public:
    CT_VerticalJc();
    ~CT_VerticalJc();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_VerticalJc& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_VerticalJc& _val_attr);
    const ST_VerticalJc& get_val_attr() const;
protected:
private:
    static CT_VerticalJc* default_instance_;
    bool m_has_val_attr;
    ST_VerticalJc* m_val_attr;
};

class CT_DocGrid: public XSD::ComplexType
{
public:
    CT_DocGrid();
    ~CT_DocGrid();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocGrid& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_DocGrid& _type_attr);
    const ST_DocGrid& get_type_attr() const;
    bool has_linePitch_attr() const;
    void set_linePitch_attr(const ST_DecimalNumber& _linePitch_attr);
    const ST_DecimalNumber& get_linePitch_attr() const;
    bool has_charSpace_attr() const;
    void set_charSpace_attr(const ST_DecimalNumber& _charSpace_attr);
    const ST_DecimalNumber& get_charSpace_attr() const;
protected:
private:
    static CT_DocGrid* default_instance_;
    bool m_has_type_attr;
    ST_DocGrid* m_type_attr;
    bool m_has_linePitch_attr;
    ST_DecimalNumber* m_linePitch_attr;
    bool m_has_charSpace_attr;
    ST_DecimalNumber* m_charSpace_attr;
};

class CT_HdrFtrRef: public XSD::ComplexType
{
public:
    CT_HdrFtrRef();
    ~CT_HdrFtrRef();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HdrFtrRef& default_instance();
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
    bool has_type_attr() const;
    void set_type_attr(const ST_HdrFtr& _type_attr);
    const ST_HdrFtr& get_type_attr() const;
protected:
private:
    static CT_HdrFtrRef* default_instance_;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
    bool m_has_type_attr;
    ST_HdrFtr* m_type_attr;
};

class CT_HdrFtr: public XSD::ComplexType
{
public:
    CT_HdrFtr();
    ~CT_HdrFtr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HdrFtr& default_instance();
protected:
private:
    static CT_HdrFtr* default_instance_;
};

class CT_SectPrBase: public XSD::ComplexType
{
public:
    CT_SectPrBase();
    ~CT_SectPrBase();
    bool has_footnotePr() const;
    CT_FtnProps* mutable_footnotePr();
    const CT_FtnProps& get_footnotePr() const;
    bool has_endnotePr() const;
    CT_EdnProps* mutable_endnotePr();
    const CT_EdnProps& get_endnotePr() const;
    bool has_type() const;
    CT_SectType* mutable_type();
    const CT_SectType& get_type() const;
    bool has_pgSz() const;
    CT_PageSz* mutable_pgSz();
    const CT_PageSz& get_pgSz() const;
    bool has_pgMar() const;
    CT_PageMar* mutable_pgMar();
    const CT_PageMar& get_pgMar() const;
    bool has_paperSrc() const;
    CT_PaperSource* mutable_paperSrc();
    const CT_PaperSource& get_paperSrc() const;
    bool has_pgBorders() const;
    CT_PageBorders* mutable_pgBorders();
    const CT_PageBorders& get_pgBorders() const;
    bool has_lnNumType() const;
    CT_LineNumber* mutable_lnNumType();
    const CT_LineNumber& get_lnNumType() const;
    bool has_pgNumType() const;
    CT_PageNumber* mutable_pgNumType();
    const CT_PageNumber& get_pgNumType() const;
    bool has_cols() const;
    CT_Columns* mutable_cols();
    const CT_Columns& get_cols() const;
    bool has_formProt() const;
    CT_OnOff* mutable_formProt();
    const CT_OnOff& get_formProt() const;
    bool has_vAlign() const;
    CT_VerticalJc* mutable_vAlign();
    const CT_VerticalJc& get_vAlign() const;
    bool has_noEndnote() const;
    CT_OnOff* mutable_noEndnote();
    const CT_OnOff& get_noEndnote() const;
    bool has_titlePg() const;
    CT_OnOff* mutable_titlePg();
    const CT_OnOff& get_titlePg() const;
    bool has_textDirection() const;
    CT_TextDirection* mutable_textDirection();
    const CT_TextDirection& get_textDirection() const;
    bool has_bidi() const;
    CT_OnOff* mutable_bidi();
    const CT_OnOff& get_bidi() const;
    bool has_rtlGutter() const;
    CT_OnOff* mutable_rtlGutter();
    const CT_OnOff& get_rtlGutter() const;
    bool has_docGrid() const;
    CT_DocGrid* mutable_docGrid();
    const CT_DocGrid& get_docGrid() const;
    bool has_printerSettings() const;
    CT_Rel* mutable_printerSettings();
    const CT_Rel& get_printerSettings() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SectPrBase& default_instance();
    bool has_rsidRPr_attr() const;
    void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr);
    const ST_LongHexNumber& get_rsidRPr_attr() const;
    bool has_rsidDel_attr() const;
    void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr);
    const ST_LongHexNumber& get_rsidDel_attr() const;
    bool has_rsidR_attr() const;
    void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr);
    const ST_LongHexNumber& get_rsidR_attr() const;
    bool has_rsidSect_attr() const;
    void set_rsidSect_attr(const ST_LongHexNumber& _rsidSect_attr);
    const ST_LongHexNumber& get_rsidSect_attr() const;
protected:
private:
    bool m_has_footnotePr;
    CT_FtnProps* m_footnotePr;
    bool m_has_endnotePr;
    CT_EdnProps* m_endnotePr;
    bool m_has_type;
    CT_SectType* m_type;
    bool m_has_pgSz;
    CT_PageSz* m_pgSz;
    bool m_has_pgMar;
    CT_PageMar* m_pgMar;
    bool m_has_paperSrc;
    CT_PaperSource* m_paperSrc;
    bool m_has_pgBorders;
    CT_PageBorders* m_pgBorders;
    bool m_has_lnNumType;
    CT_LineNumber* m_lnNumType;
    bool m_has_pgNumType;
    CT_PageNumber* m_pgNumType;
    bool m_has_cols;
    CT_Columns* m_cols;
    bool m_has_formProt;
    CT_OnOff* m_formProt;
    bool m_has_vAlign;
    CT_VerticalJc* m_vAlign;
    bool m_has_noEndnote;
    CT_OnOff* m_noEndnote;
    bool m_has_titlePg;
    CT_OnOff* m_titlePg;
    bool m_has_textDirection;
    CT_TextDirection* m_textDirection;
    bool m_has_bidi;
    CT_OnOff* m_bidi;
    bool m_has_rtlGutter;
    CT_OnOff* m_rtlGutter;
    bool m_has_docGrid;
    CT_DocGrid* m_docGrid;
    bool m_has_printerSettings;
    CT_Rel* m_printerSettings;
    static CT_SectPrBase* default_instance_;
    bool m_has_rsidRPr_attr;
    ST_LongHexNumber* m_rsidRPr_attr;
    bool m_has_rsidDel_attr;
    ST_LongHexNumber* m_rsidDel_attr;
    bool m_has_rsidR_attr;
    ST_LongHexNumber* m_rsidR_attr;
    bool m_has_rsidSect_attr;
    ST_LongHexNumber* m_rsidSect_attr;
};

class CT_SectPr: public XSD::ComplexType
{
public:
    CT_SectPr();
    ~CT_SectPr();
    CT_HdrFtrRef* add_headerReference();
    CT_HdrFtrRef* add_footerReference();
    bool has_footnotePr() const;
    CT_FtnProps* mutable_footnotePr();
    const CT_FtnProps& get_footnotePr() const;
    bool has_endnotePr() const;
    CT_EdnProps* mutable_endnotePr();
    const CT_EdnProps& get_endnotePr() const;
    bool has_type() const;
    CT_SectType* mutable_type();
    const CT_SectType& get_type() const;
    bool has_pgSz() const;
    CT_PageSz* mutable_pgSz();
    const CT_PageSz& get_pgSz() const;
    bool has_pgMar() const;
    CT_PageMar* mutable_pgMar();
    const CT_PageMar& get_pgMar() const;
    bool has_paperSrc() const;
    CT_PaperSource* mutable_paperSrc();
    const CT_PaperSource& get_paperSrc() const;
    bool has_pgBorders() const;
    CT_PageBorders* mutable_pgBorders();
    const CT_PageBorders& get_pgBorders() const;
    bool has_lnNumType() const;
    CT_LineNumber* mutable_lnNumType();
    const CT_LineNumber& get_lnNumType() const;
    bool has_pgNumType() const;
    CT_PageNumber* mutable_pgNumType();
    const CT_PageNumber& get_pgNumType() const;
    bool has_cols() const;
    CT_Columns* mutable_cols();
    const CT_Columns& get_cols() const;
    bool has_formProt() const;
    CT_OnOff* mutable_formProt();
    const CT_OnOff& get_formProt() const;
    bool has_vAlign() const;
    CT_VerticalJc* mutable_vAlign();
    const CT_VerticalJc& get_vAlign() const;
    bool has_noEndnote() const;
    CT_OnOff* mutable_noEndnote();
    const CT_OnOff& get_noEndnote() const;
    bool has_titlePg() const;
    CT_OnOff* mutable_titlePg();
    const CT_OnOff& get_titlePg() const;
    bool has_textDirection() const;
    CT_TextDirection* mutable_textDirection();
    const CT_TextDirection& get_textDirection() const;
    bool has_bidi() const;
    CT_OnOff* mutable_bidi();
    const CT_OnOff& get_bidi() const;
    bool has_rtlGutter() const;
    CT_OnOff* mutable_rtlGutter();
    const CT_OnOff& get_rtlGutter() const;
    bool has_docGrid() const;
    CT_DocGrid* mutable_docGrid();
    const CT_DocGrid& get_docGrid() const;
    bool has_printerSettings() const;
    CT_Rel* mutable_printerSettings();
    const CT_Rel& get_printerSettings() const;
    bool has_sectPrChange() const;
    CT_SectPrChange* mutable_sectPrChange();
    const CT_SectPrChange& get_sectPrChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SectPr& default_instance();
    bool has_rsidRPr_attr() const;
    void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr);
    const ST_LongHexNumber& get_rsidRPr_attr() const;
    bool has_rsidDel_attr() const;
    void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr);
    const ST_LongHexNumber& get_rsidDel_attr() const;
    bool has_rsidR_attr() const;
    void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr);
    const ST_LongHexNumber& get_rsidR_attr() const;
    bool has_rsidSect_attr() const;
    void set_rsidSect_attr(const ST_LongHexNumber& _rsidSect_attr);
    const ST_LongHexNumber& get_rsidSect_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_headerReference() const;
        CT_HdrFtrRef* mutable_headerReference();
        const CT_HdrFtrRef& get_headerReference() const;
        bool has_footerReference() const;
        CT_HdrFtrRef* mutable_footerReference();
        const CT_HdrFtrRef& get_footerReference() const;
    protected:
    private:
        bool m_has_headerReference;
        CT_HdrFtrRef* m_headerReference;
        bool m_has_footerReference;
        CT_HdrFtrRef* m_footerReference;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_footnotePr;
    CT_FtnProps* m_footnotePr;
    bool m_has_endnotePr;
    CT_EdnProps* m_endnotePr;
    bool m_has_type;
    CT_SectType* m_type;
    bool m_has_pgSz;
    CT_PageSz* m_pgSz;
    bool m_has_pgMar;
    CT_PageMar* m_pgMar;
    bool m_has_paperSrc;
    CT_PaperSource* m_paperSrc;
    bool m_has_pgBorders;
    CT_PageBorders* m_pgBorders;
    bool m_has_lnNumType;
    CT_LineNumber* m_lnNumType;
    bool m_has_pgNumType;
    CT_PageNumber* m_pgNumType;
    bool m_has_cols;
    CT_Columns* m_cols;
    bool m_has_formProt;
    CT_OnOff* m_formProt;
    bool m_has_vAlign;
    CT_VerticalJc* m_vAlign;
    bool m_has_noEndnote;
    CT_OnOff* m_noEndnote;
    bool m_has_titlePg;
    CT_OnOff* m_titlePg;
    bool m_has_textDirection;
    CT_TextDirection* m_textDirection;
    bool m_has_bidi;
    CT_OnOff* m_bidi;
    bool m_has_rtlGutter;
    CT_OnOff* m_rtlGutter;
    bool m_has_docGrid;
    CT_DocGrid* m_docGrid;
    bool m_has_printerSettings;
    CT_Rel* m_printerSettings;
    bool m_has_sectPrChange;
    CT_SectPrChange* m_sectPrChange;
    static CT_SectPr* default_instance_;
    bool m_has_rsidRPr_attr;
    ST_LongHexNumber* m_rsidRPr_attr;
    bool m_has_rsidDel_attr;
    ST_LongHexNumber* m_rsidDel_attr;
    bool m_has_rsidR_attr;
    ST_LongHexNumber* m_rsidR_attr;
    bool m_has_rsidSect_attr;
    ST_LongHexNumber* m_rsidSect_attr;
};

class CT_Br: public XSD::ComplexType
{
public:
    CT_Br();
    ~CT_Br();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Br& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_BrType& _type_attr);
    const ST_BrType& get_type_attr() const;
    bool has_clear_attr() const;
    void set_clear_attr(const ST_BrClear& _clear_attr);
    const ST_BrClear& get_clear_attr() const;
protected:
private:
    static CT_Br* default_instance_;
    bool m_has_type_attr;
    ST_BrType* m_type_attr;
    bool m_has_clear_attr;
    ST_BrClear* m_clear_attr;
};

class CT_PTab: public XSD::ComplexType
{
public:
    CT_PTab();
    ~CT_PTab();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PTab& default_instance();
    bool has_alignment_attr() const;
    void set_alignment_attr(const ST_PTabAlignment& _alignment_attr);
    const ST_PTabAlignment& get_alignment_attr() const;
    bool has_relativeTo_attr() const;
    void set_relativeTo_attr(const ST_PTabRelativeTo& _relativeTo_attr);
    const ST_PTabRelativeTo& get_relativeTo_attr() const;
    bool has_leader_attr() const;
    void set_leader_attr(const ST_PTabLeader& _leader_attr);
    const ST_PTabLeader& get_leader_attr() const;
protected:
private:
    static CT_PTab* default_instance_;
    bool m_has_alignment_attr;
    ST_PTabAlignment* m_alignment_attr;
    bool m_has_relativeTo_attr;
    ST_PTabRelativeTo* m_relativeTo_attr;
    bool m_has_leader_attr;
    ST_PTabLeader* m_leader_attr;
};

class CT_Sym: public XSD::ComplexType
{
public:
    CT_Sym();
    ~CT_Sym();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Sym& default_instance();
    bool has_font_attr() const;
    void set_font_attr(const ns_s::ST_String& _font_attr);
    const ns_s::ST_String& get_font_attr() const;
    bool has_char_attr() const;
    void set_char_attr(const ST_ShortHexNumber& _char_attr);
    const ST_ShortHexNumber& get_char_attr() const;
protected:
private:
    static CT_Sym* default_instance_;
    bool m_has_font_attr;
    ns_s::ST_String* m_font_attr;
    bool m_has_char_attr;
    ST_ShortHexNumber* m_char_attr;
};

class CT_ProofErr: public XSD::ComplexType
{
public:
    CT_ProofErr();
    ~CT_ProofErr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ProofErr& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_ProofErr& _type_attr);
    const ST_ProofErr& get_type_attr() const;
protected:
private:
    static CT_ProofErr* default_instance_;
    bool m_has_type_attr;
    ST_ProofErr* m_type_attr;
};

class CT_Perm: public XSD::ComplexType
{
public:
    CT_Perm();
    ~CT_Perm();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Perm& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ns_s::ST_String& _id_attr);
    const ns_s::ST_String& get_id_attr() const;
    bool has_displacedByCustomXml_attr() const;
    void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr);
    const ST_DisplacedByCustomXml& get_displacedByCustomXml_attr() const;
protected:
private:
    static CT_Perm* default_instance_;
    bool m_has_id_attr;
    ns_s::ST_String* m_id_attr;
    bool m_has_displacedByCustomXml_attr;
    ST_DisplacedByCustomXml* m_displacedByCustomXml_attr;
};

class CT_PermStart: public XSD::ComplexType
{
public:
    CT_PermStart();
    ~CT_PermStart();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PermStart& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ns_s::ST_String& _id_attr);
    const ns_s::ST_String& get_id_attr() const;
    bool has_displacedByCustomXml_attr() const;
    void set_displacedByCustomXml_attr(const ST_DisplacedByCustomXml& _displacedByCustomXml_attr);
    const ST_DisplacedByCustomXml& get_displacedByCustomXml_attr() const;
    bool has_edGrp_attr() const;
    void set_edGrp_attr(const ST_EdGrp& _edGrp_attr);
    const ST_EdGrp& get_edGrp_attr() const;
    bool has_ed_attr() const;
    void set_ed_attr(const ns_s::ST_String& _ed_attr);
    const ns_s::ST_String& get_ed_attr() const;
    bool has_colFirst_attr() const;
    void set_colFirst_attr(const ST_DecimalNumber& _colFirst_attr);
    const ST_DecimalNumber& get_colFirst_attr() const;
    bool has_colLast_attr() const;
    void set_colLast_attr(const ST_DecimalNumber& _colLast_attr);
    const ST_DecimalNumber& get_colLast_attr() const;
protected:
private:
    static CT_PermStart* default_instance_;
    bool m_has_id_attr;
    ns_s::ST_String* m_id_attr;
    bool m_has_displacedByCustomXml_attr;
    ST_DisplacedByCustomXml* m_displacedByCustomXml_attr;
    bool m_has_edGrp_attr;
    ST_EdGrp* m_edGrp_attr;
    bool m_has_ed_attr;
    ns_s::ST_String* m_ed_attr;
    bool m_has_colFirst_attr;
    ST_DecimalNumber* m_colFirst_attr;
    bool m_has_colLast_attr;
    ST_DecimalNumber* m_colLast_attr;
};

class CT_Text: public XSD::ComplexType, public ns_s::ST_String
{
public:
    CT_Text();
    ~CT_Text();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Text& default_instance();
    bool has_xml_space_attr() const;
    void set_xml_space_attr(const ns_xml::space& _xml_space_attr);
    const ns_xml::space& get_xml_space_attr() const;
protected:
private:
    static CT_Text* default_instance_;
    bool m_has_xml_space_attr;
    ns_xml::space* m_xml_space_attr;
};

class CT_R: public XSD::ComplexType
{
public:
    CT_R();
    ~CT_R();
    bool has_rPr() const;
    CT_RPr* mutable_rPr();
    const CT_RPr& get_rPr() const;
    CT_Br* add_br();
    CT_Text* add_t();
    CT_Rel* add_contentPart();
    CT_Text* add_delText();
    CT_Text* add_instrText();
    CT_Text* add_delInstrText();
    CT_Empty* add_noBreakHyphen();
    CT_Empty* add_softHyphen();
    CT_Empty* add_dayShort();
    CT_Empty* add_monthShort();
    CT_Empty* add_yearShort();
    CT_Empty* add_dayLong();
    CT_Empty* add_monthLong();
    CT_Empty* add_yearLong();
    CT_Empty* add_annotationRef();
    CT_Empty* add_footnoteRef();
    CT_Empty* add_endnoteRef();
    CT_Empty* add_separator();
    CT_Empty* add_continuationSeparator();
    CT_Sym* add_sym();
    CT_Empty* add_pgNum();
    CT_Empty* add_cr();
    CT_Empty* add_tab();
    CT_Object* add_object();
    CT_Picture* add_pict();
    CT_FldChar* add_fldChar();
    CT_Ruby* add_ruby();
    CT_FtnEdnRef* add_footnoteReference();
    CT_FtnEdnRef* add_endnoteReference();
    CT_Markup* add_commentReference();
    CT_Drawing* add_drawing();
    CT_PTab* add_ptab();
    CT_Empty* add_lastRenderedPageBreak();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_R& default_instance();
    bool has_rsidRPr_attr() const;
    void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr);
    const ST_LongHexNumber& get_rsidRPr_attr() const;
    bool has_rsidDel_attr() const;
    void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr);
    const ST_LongHexNumber& get_rsidDel_attr() const;
    bool has_rsidR_attr() const;
    void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr);
    const ST_LongHexNumber& get_rsidR_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_br() const;
        CT_Br* mutable_br();
        const CT_Br& get_br() const;
        bool has_t() const;
        CT_Text* mutable_t();
        const CT_Text& get_t() const;
        bool has_contentPart() const;
        CT_Rel* mutable_contentPart();
        const CT_Rel& get_contentPart() const;
        bool has_delText() const;
        CT_Text* mutable_delText();
        const CT_Text& get_delText() const;
        bool has_instrText() const;
        CT_Text* mutable_instrText();
        const CT_Text& get_instrText() const;
        bool has_delInstrText() const;
        CT_Text* mutable_delInstrText();
        const CT_Text& get_delInstrText() const;
        bool has_noBreakHyphen() const;
        CT_Empty* mutable_noBreakHyphen();
        const CT_Empty& get_noBreakHyphen() const;
        bool has_softHyphen() const;
        CT_Empty* mutable_softHyphen();
        const CT_Empty& get_softHyphen() const;
        bool has_dayShort() const;
        CT_Empty* mutable_dayShort();
        const CT_Empty& get_dayShort() const;
        bool has_monthShort() const;
        CT_Empty* mutable_monthShort();
        const CT_Empty& get_monthShort() const;
        bool has_yearShort() const;
        CT_Empty* mutable_yearShort();
        const CT_Empty& get_yearShort() const;
        bool has_dayLong() const;
        CT_Empty* mutable_dayLong();
        const CT_Empty& get_dayLong() const;
        bool has_monthLong() const;
        CT_Empty* mutable_monthLong();
        const CT_Empty& get_monthLong() const;
        bool has_yearLong() const;
        CT_Empty* mutable_yearLong();
        const CT_Empty& get_yearLong() const;
        bool has_annotationRef() const;
        CT_Empty* mutable_annotationRef();
        const CT_Empty& get_annotationRef() const;
        bool has_footnoteRef() const;
        CT_Empty* mutable_footnoteRef();
        const CT_Empty& get_footnoteRef() const;
        bool has_endnoteRef() const;
        CT_Empty* mutable_endnoteRef();
        const CT_Empty& get_endnoteRef() const;
        bool has_separator() const;
        CT_Empty* mutable_separator();
        const CT_Empty& get_separator() const;
        bool has_continuationSeparator() const;
        CT_Empty* mutable_continuationSeparator();
        const CT_Empty& get_continuationSeparator() const;
        bool has_sym() const;
        CT_Sym* mutable_sym();
        const CT_Sym& get_sym() const;
        bool has_pgNum() const;
        CT_Empty* mutable_pgNum();
        const CT_Empty& get_pgNum() const;
        bool has_cr() const;
        CT_Empty* mutable_cr();
        const CT_Empty& get_cr() const;
        bool has_tab() const;
        CT_Empty* mutable_tab();
        const CT_Empty& get_tab() const;
        bool has_object() const;
        CT_Object* mutable_object();
        const CT_Object& get_object() const;
        bool has_pict() const;
        CT_Picture* mutable_pict();
        const CT_Picture& get_pict() const;
        bool has_fldChar() const;
        CT_FldChar* mutable_fldChar();
        const CT_FldChar& get_fldChar() const;
        bool has_ruby() const;
        CT_Ruby* mutable_ruby();
        const CT_Ruby& get_ruby() const;
        bool has_footnoteReference() const;
        CT_FtnEdnRef* mutable_footnoteReference();
        const CT_FtnEdnRef& get_footnoteReference() const;
        bool has_endnoteReference() const;
        CT_FtnEdnRef* mutable_endnoteReference();
        const CT_FtnEdnRef& get_endnoteReference() const;
        bool has_commentReference() const;
        CT_Markup* mutable_commentReference();
        const CT_Markup& get_commentReference() const;
        bool has_drawing() const;
        CT_Drawing* mutable_drawing();
        const CT_Drawing& get_drawing() const;
        bool has_ptab() const;
        CT_PTab* mutable_ptab();
        const CT_PTab& get_ptab() const;
        bool has_lastRenderedPageBreak() const;
        CT_Empty* mutable_lastRenderedPageBreak();
        const CT_Empty& get_lastRenderedPageBreak() const;
    protected:
    private:
        bool m_has_br;
        CT_Br* m_br;
        bool m_has_t;
        CT_Text* m_t;
        bool m_has_contentPart;
        CT_Rel* m_contentPart;
        bool m_has_delText;
        CT_Text* m_delText;
        bool m_has_instrText;
        CT_Text* m_instrText;
        bool m_has_delInstrText;
        CT_Text* m_delInstrText;
        bool m_has_noBreakHyphen;
        CT_Empty* m_noBreakHyphen;
        bool m_has_softHyphen;
        CT_Empty* m_softHyphen;
        bool m_has_dayShort;
        CT_Empty* m_dayShort;
        bool m_has_monthShort;
        CT_Empty* m_monthShort;
        bool m_has_yearShort;
        CT_Empty* m_yearShort;
        bool m_has_dayLong;
        CT_Empty* m_dayLong;
        bool m_has_monthLong;
        CT_Empty* m_monthLong;
        bool m_has_yearLong;
        CT_Empty* m_yearLong;
        bool m_has_annotationRef;
        CT_Empty* m_annotationRef;
        bool m_has_footnoteRef;
        CT_Empty* m_footnoteRef;
        bool m_has_endnoteRef;
        CT_Empty* m_endnoteRef;
        bool m_has_separator;
        CT_Empty* m_separator;
        bool m_has_continuationSeparator;
        CT_Empty* m_continuationSeparator;
        bool m_has_sym;
        CT_Sym* m_sym;
        bool m_has_pgNum;
        CT_Empty* m_pgNum;
        bool m_has_cr;
        CT_Empty* m_cr;
        bool m_has_tab;
        CT_Empty* m_tab;
        bool m_has_object;
        CT_Object* m_object;
        bool m_has_pict;
        CT_Picture* m_pict;
        bool m_has_fldChar;
        CT_FldChar* m_fldChar;
        bool m_has_ruby;
        CT_Ruby* m_ruby;
        bool m_has_footnoteReference;
        CT_FtnEdnRef* m_footnoteReference;
        bool m_has_endnoteReference;
        CT_FtnEdnRef* m_endnoteReference;
        bool m_has_commentReference;
        CT_Markup* m_commentReference;
        bool m_has_drawing;
        CT_Drawing* m_drawing;
        bool m_has_ptab;
        CT_PTab* m_ptab;
        bool m_has_lastRenderedPageBreak;
        CT_Empty* m_lastRenderedPageBreak;
    };
    bool m_has_rPr;
    CT_RPr* m_rPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_R* default_instance_;
    bool m_has_rsidRPr_attr;
    ST_LongHexNumber* m_rsidRPr_attr;
    bool m_has_rsidDel_attr;
    ST_LongHexNumber* m_rsidDel_attr;
    bool m_has_rsidR_attr;
    ST_LongHexNumber* m_rsidR_attr;
};

class CT_Fonts: public XSD::ComplexType
{
public:
    CT_Fonts();
    ~CT_Fonts();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Fonts& default_instance();
    bool has_hint_attr() const;
    void set_hint_attr(const ST_Hint& _hint_attr);
    const ST_Hint& get_hint_attr() const;
    bool has_ascii_attr() const;
    void set_ascii_attr(const ns_s::ST_String& _ascii_attr);
    const ns_s::ST_String& get_ascii_attr() const;
    bool has_hAnsi_attr() const;
    void set_hAnsi_attr(const ns_s::ST_String& _hAnsi_attr);
    const ns_s::ST_String& get_hAnsi_attr() const;
    bool has_eastAsia_attr() const;
    void set_eastAsia_attr(const ns_s::ST_String& _eastAsia_attr);
    const ns_s::ST_String& get_eastAsia_attr() const;
    bool has_cs_attr() const;
    void set_cs_attr(const ns_s::ST_String& _cs_attr);
    const ns_s::ST_String& get_cs_attr() const;
    bool has_asciiTheme_attr() const;
    void set_asciiTheme_attr(const ST_Theme& _asciiTheme_attr);
    const ST_Theme& get_asciiTheme_attr() const;
    bool has_hAnsiTheme_attr() const;
    void set_hAnsiTheme_attr(const ST_Theme& _hAnsiTheme_attr);
    const ST_Theme& get_hAnsiTheme_attr() const;
    bool has_eastAsiaTheme_attr() const;
    void set_eastAsiaTheme_attr(const ST_Theme& _eastAsiaTheme_attr);
    const ST_Theme& get_eastAsiaTheme_attr() const;
    bool has_cstheme_attr() const;
    void set_cstheme_attr(const ST_Theme& _cstheme_attr);
    const ST_Theme& get_cstheme_attr() const;
protected:
private:
    static CT_Fonts* default_instance_;
    bool m_has_hint_attr;
    ST_Hint* m_hint_attr;
    bool m_has_ascii_attr;
    ns_s::ST_String* m_ascii_attr;
    bool m_has_hAnsi_attr;
    ns_s::ST_String* m_hAnsi_attr;
    bool m_has_eastAsia_attr;
    ns_s::ST_String* m_eastAsia_attr;
    bool m_has_cs_attr;
    ns_s::ST_String* m_cs_attr;
    bool m_has_asciiTheme_attr;
    ST_Theme* m_asciiTheme_attr;
    bool m_has_hAnsiTheme_attr;
    ST_Theme* m_hAnsiTheme_attr;
    bool m_has_eastAsiaTheme_attr;
    ST_Theme* m_eastAsiaTheme_attr;
    bool m_has_cstheme_attr;
    ST_Theme* m_cstheme_attr;
};

class CT_RPr: public XSD::ComplexType
{
public:
    CT_RPr();
    ~CT_RPr();
    CT_String* add_rStyle();
    CT_Fonts* add_rFonts();
    CT_OnOff* add_b();
    CT_OnOff* add_bCs();
    CT_OnOff* add_i();
    CT_OnOff* add_iCs();
    CT_OnOff* add_caps();
    CT_OnOff* add_smallCaps();
    CT_OnOff* add_strike();
    CT_OnOff* add_dstrike();
    CT_OnOff* add_outline();
    CT_OnOff* add_shadow();
    CT_OnOff* add_emboss();
    CT_OnOff* add_imprint();
    CT_OnOff* add_noProof();
    CT_OnOff* add_snapToGrid();
    CT_OnOff* add_vanish();
    CT_OnOff* add_webHidden();
    CT_Color* add_color();
    CT_SignedTwipsMeasure* add_spacing();
    CT_TextScale* add_w();
    CT_HpsMeasure* add_kern();
    CT_SignedHpsMeasure* add_position();
    CT_HpsMeasure* add_sz();
    CT_HpsMeasure* add_szCs();
    CT_Highlight* add_highlight();
    CT_Underline* add_u();
    CT_TextEffect* add_effect();
    CT_Border* add_bdr();
    CT_Shd* add_shd();
    CT_FitText* add_fitText();
    CT_VerticalAlignRun* add_vertAlign();
    CT_OnOff* add_rtl();
    CT_OnOff* add_cs();
    CT_Em* add_em();
    CT_Language* add_lang();
    CT_EastAsianLayout* add_eastAsianLayout();
    CT_OnOff* add_specVanish();
    CT_OnOff* add_oMath();
    bool has_rPrChange() const;
    CT_RPrChange* mutable_rPrChange();
    const CT_RPrChange& get_rPrChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RPr& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_rStyle() const;
        CT_String* mutable_rStyle();
        const CT_String& get_rStyle() const;
        bool has_rFonts() const;
        CT_Fonts* mutable_rFonts();
        const CT_Fonts& get_rFonts() const;
        bool has_b() const;
        CT_OnOff* mutable_b();
        const CT_OnOff& get_b() const;
        bool has_bCs() const;
        CT_OnOff* mutable_bCs();
        const CT_OnOff& get_bCs() const;
        bool has_i() const;
        CT_OnOff* mutable_i();
        const CT_OnOff& get_i() const;
        bool has_iCs() const;
        CT_OnOff* mutable_iCs();
        const CT_OnOff& get_iCs() const;
        bool has_caps() const;
        CT_OnOff* mutable_caps();
        const CT_OnOff& get_caps() const;
        bool has_smallCaps() const;
        CT_OnOff* mutable_smallCaps();
        const CT_OnOff& get_smallCaps() const;
        bool has_strike() const;
        CT_OnOff* mutable_strike();
        const CT_OnOff& get_strike() const;
        bool has_dstrike() const;
        CT_OnOff* mutable_dstrike();
        const CT_OnOff& get_dstrike() const;
        bool has_outline() const;
        CT_OnOff* mutable_outline();
        const CT_OnOff& get_outline() const;
        bool has_shadow() const;
        CT_OnOff* mutable_shadow();
        const CT_OnOff& get_shadow() const;
        bool has_emboss() const;
        CT_OnOff* mutable_emboss();
        const CT_OnOff& get_emboss() const;
        bool has_imprint() const;
        CT_OnOff* mutable_imprint();
        const CT_OnOff& get_imprint() const;
        bool has_noProof() const;
        CT_OnOff* mutable_noProof();
        const CT_OnOff& get_noProof() const;
        bool has_snapToGrid() const;
        CT_OnOff* mutable_snapToGrid();
        const CT_OnOff& get_snapToGrid() const;
        bool has_vanish() const;
        CT_OnOff* mutable_vanish();
        const CT_OnOff& get_vanish() const;
        bool has_webHidden() const;
        CT_OnOff* mutable_webHidden();
        const CT_OnOff& get_webHidden() const;
        bool has_color() const;
        CT_Color* mutable_color();
        const CT_Color& get_color() const;
        bool has_spacing() const;
        CT_SignedTwipsMeasure* mutable_spacing();
        const CT_SignedTwipsMeasure& get_spacing() const;
        bool has_w() const;
        CT_TextScale* mutable_w();
        const CT_TextScale& get_w() const;
        bool has_kern() const;
        CT_HpsMeasure* mutable_kern();
        const CT_HpsMeasure& get_kern() const;
        bool has_position() const;
        CT_SignedHpsMeasure* mutable_position();
        const CT_SignedHpsMeasure& get_position() const;
        bool has_sz() const;
        CT_HpsMeasure* mutable_sz();
        const CT_HpsMeasure& get_sz() const;
        bool has_szCs() const;
        CT_HpsMeasure* mutable_szCs();
        const CT_HpsMeasure& get_szCs() const;
        bool has_highlight() const;
        CT_Highlight* mutable_highlight();
        const CT_Highlight& get_highlight() const;
        bool has_u() const;
        CT_Underline* mutable_u();
        const CT_Underline& get_u() const;
        bool has_effect() const;
        CT_TextEffect* mutable_effect();
        const CT_TextEffect& get_effect() const;
        bool has_bdr() const;
        CT_Border* mutable_bdr();
        const CT_Border& get_bdr() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& get_shd() const;
        bool has_fitText() const;
        CT_FitText* mutable_fitText();
        const CT_FitText& get_fitText() const;
        bool has_vertAlign() const;
        CT_VerticalAlignRun* mutable_vertAlign();
        const CT_VerticalAlignRun& get_vertAlign() const;
        bool has_rtl() const;
        CT_OnOff* mutable_rtl();
        const CT_OnOff& get_rtl() const;
        bool has_cs() const;
        CT_OnOff* mutable_cs();
        const CT_OnOff& get_cs() const;
        bool has_em() const;
        CT_Em* mutable_em();
        const CT_Em& get_em() const;
        bool has_lang() const;
        CT_Language* mutable_lang();
        const CT_Language& get_lang() const;
        bool has_eastAsianLayout() const;
        CT_EastAsianLayout* mutable_eastAsianLayout();
        const CT_EastAsianLayout& get_eastAsianLayout() const;
        bool has_specVanish() const;
        CT_OnOff* mutable_specVanish();
        const CT_OnOff& get_specVanish() const;
        bool has_oMath() const;
        CT_OnOff* mutable_oMath();
        const CT_OnOff& get_oMath() const;
    protected:
    private:
        bool m_has_rStyle;
        CT_String* m_rStyle;
        bool m_has_rFonts;
        CT_Fonts* m_rFonts;
        bool m_has_b;
        CT_OnOff* m_b;
        bool m_has_bCs;
        CT_OnOff* m_bCs;
        bool m_has_i;
        CT_OnOff* m_i;
        bool m_has_iCs;
        CT_OnOff* m_iCs;
        bool m_has_caps;
        CT_OnOff* m_caps;
        bool m_has_smallCaps;
        CT_OnOff* m_smallCaps;
        bool m_has_strike;
        CT_OnOff* m_strike;
        bool m_has_dstrike;
        CT_OnOff* m_dstrike;
        bool m_has_outline;
        CT_OnOff* m_outline;
        bool m_has_shadow;
        CT_OnOff* m_shadow;
        bool m_has_emboss;
        CT_OnOff* m_emboss;
        bool m_has_imprint;
        CT_OnOff* m_imprint;
        bool m_has_noProof;
        CT_OnOff* m_noProof;
        bool m_has_snapToGrid;
        CT_OnOff* m_snapToGrid;
        bool m_has_vanish;
        CT_OnOff* m_vanish;
        bool m_has_webHidden;
        CT_OnOff* m_webHidden;
        bool m_has_color;
        CT_Color* m_color;
        bool m_has_spacing;
        CT_SignedTwipsMeasure* m_spacing;
        bool m_has_w;
        CT_TextScale* m_w;
        bool m_has_kern;
        CT_HpsMeasure* m_kern;
        bool m_has_position;
        CT_SignedHpsMeasure* m_position;
        bool m_has_sz;
        CT_HpsMeasure* m_sz;
        bool m_has_szCs;
        CT_HpsMeasure* m_szCs;
        bool m_has_highlight;
        CT_Highlight* m_highlight;
        bool m_has_u;
        CT_Underline* m_u;
        bool m_has_effect;
        CT_TextEffect* m_effect;
        bool m_has_bdr;
        CT_Border* m_bdr;
        bool m_has_shd;
        CT_Shd* m_shd;
        bool m_has_fitText;
        CT_FitText* m_fitText;
        bool m_has_vertAlign;
        CT_VerticalAlignRun* m_vertAlign;
        bool m_has_rtl;
        CT_OnOff* m_rtl;
        bool m_has_cs;
        CT_OnOff* m_cs;
        bool m_has_em;
        CT_Em* m_em;
        bool m_has_lang;
        CT_Language* m_lang;
        bool m_has_eastAsianLayout;
        CT_EastAsianLayout* m_eastAsianLayout;
        bool m_has_specVanish;
        CT_OnOff* m_specVanish;
        bool m_has_oMath;
        CT_OnOff* m_oMath;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_rPrChange;
    CT_RPrChange* m_rPrChange;
    static CT_RPr* default_instance_;
};

class CT_MathCtrlIns: public XSD::ComplexType
{
public:
    CT_MathCtrlIns();
    ~CT_MathCtrlIns();
    bool has_del() const;
    CT_RPrChange* mutable_del();
    const CT_RPrChange& get_del() const;
    bool has_rPr() const;
    CT_RPr* mutable_rPr();
    const CT_RPr& get_rPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MathCtrlIns& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_del;
    CT_RPrChange* m_del;
    bool m_has_rPr;
    CT_RPr* m_rPr;
    static CT_MathCtrlIns* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_MathCtrlDel: public XSD::ComplexType
{
public:
    CT_MathCtrlDel();
    ~CT_MathCtrlDel();
    bool has_rPr() const;
    CT_RPr* mutable_rPr();
    const CT_RPr& get_rPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MathCtrlDel& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
    bool has_author_attr() const;
    void set_author_attr(const ns_s::ST_String& _author_attr);
    const ns_s::ST_String& get_author_attr() const;
    bool has_date_attr() const;
    void set_date_attr(const ST_DateTime& _date_attr);
    const ST_DateTime& get_date_attr() const;
protected:
private:
    bool m_has_rPr;
    CT_RPr* m_rPr;
    static CT_MathCtrlDel* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
    bool m_has_author_attr;
    ns_s::ST_String* m_author_attr;
    bool m_has_date_attr;
    ST_DateTime* m_date_attr;
};

class CT_RPrOriginal: public XSD::ComplexType
{
public:
    CT_RPrOriginal();
    ~CT_RPrOriginal();
    CT_String* add_rStyle();
    CT_Fonts* add_rFonts();
    CT_OnOff* add_b();
    CT_OnOff* add_bCs();
    CT_OnOff* add_i();
    CT_OnOff* add_iCs();
    CT_OnOff* add_caps();
    CT_OnOff* add_smallCaps();
    CT_OnOff* add_strike();
    CT_OnOff* add_dstrike();
    CT_OnOff* add_outline();
    CT_OnOff* add_shadow();
    CT_OnOff* add_emboss();
    CT_OnOff* add_imprint();
    CT_OnOff* add_noProof();
    CT_OnOff* add_snapToGrid();
    CT_OnOff* add_vanish();
    CT_OnOff* add_webHidden();
    CT_Color* add_color();
    CT_SignedTwipsMeasure* add_spacing();
    CT_TextScale* add_w();
    CT_HpsMeasure* add_kern();
    CT_SignedHpsMeasure* add_position();
    CT_HpsMeasure* add_sz();
    CT_HpsMeasure* add_szCs();
    CT_Highlight* add_highlight();
    CT_Underline* add_u();
    CT_TextEffect* add_effect();
    CT_Border* add_bdr();
    CT_Shd* add_shd();
    CT_FitText* add_fitText();
    CT_VerticalAlignRun* add_vertAlign();
    CT_OnOff* add_rtl();
    CT_OnOff* add_cs();
    CT_Em* add_em();
    CT_Language* add_lang();
    CT_EastAsianLayout* add_eastAsianLayout();
    CT_OnOff* add_specVanish();
    CT_OnOff* add_oMath();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RPrOriginal& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_rStyle() const;
        CT_String* mutable_rStyle();
        const CT_String& get_rStyle() const;
        bool has_rFonts() const;
        CT_Fonts* mutable_rFonts();
        const CT_Fonts& get_rFonts() const;
        bool has_b() const;
        CT_OnOff* mutable_b();
        const CT_OnOff& get_b() const;
        bool has_bCs() const;
        CT_OnOff* mutable_bCs();
        const CT_OnOff& get_bCs() const;
        bool has_i() const;
        CT_OnOff* mutable_i();
        const CT_OnOff& get_i() const;
        bool has_iCs() const;
        CT_OnOff* mutable_iCs();
        const CT_OnOff& get_iCs() const;
        bool has_caps() const;
        CT_OnOff* mutable_caps();
        const CT_OnOff& get_caps() const;
        bool has_smallCaps() const;
        CT_OnOff* mutable_smallCaps();
        const CT_OnOff& get_smallCaps() const;
        bool has_strike() const;
        CT_OnOff* mutable_strike();
        const CT_OnOff& get_strike() const;
        bool has_dstrike() const;
        CT_OnOff* mutable_dstrike();
        const CT_OnOff& get_dstrike() const;
        bool has_outline() const;
        CT_OnOff* mutable_outline();
        const CT_OnOff& get_outline() const;
        bool has_shadow() const;
        CT_OnOff* mutable_shadow();
        const CT_OnOff& get_shadow() const;
        bool has_emboss() const;
        CT_OnOff* mutable_emboss();
        const CT_OnOff& get_emboss() const;
        bool has_imprint() const;
        CT_OnOff* mutable_imprint();
        const CT_OnOff& get_imprint() const;
        bool has_noProof() const;
        CT_OnOff* mutable_noProof();
        const CT_OnOff& get_noProof() const;
        bool has_snapToGrid() const;
        CT_OnOff* mutable_snapToGrid();
        const CT_OnOff& get_snapToGrid() const;
        bool has_vanish() const;
        CT_OnOff* mutable_vanish();
        const CT_OnOff& get_vanish() const;
        bool has_webHidden() const;
        CT_OnOff* mutable_webHidden();
        const CT_OnOff& get_webHidden() const;
        bool has_color() const;
        CT_Color* mutable_color();
        const CT_Color& get_color() const;
        bool has_spacing() const;
        CT_SignedTwipsMeasure* mutable_spacing();
        const CT_SignedTwipsMeasure& get_spacing() const;
        bool has_w() const;
        CT_TextScale* mutable_w();
        const CT_TextScale& get_w() const;
        bool has_kern() const;
        CT_HpsMeasure* mutable_kern();
        const CT_HpsMeasure& get_kern() const;
        bool has_position() const;
        CT_SignedHpsMeasure* mutable_position();
        const CT_SignedHpsMeasure& get_position() const;
        bool has_sz() const;
        CT_HpsMeasure* mutable_sz();
        const CT_HpsMeasure& get_sz() const;
        bool has_szCs() const;
        CT_HpsMeasure* mutable_szCs();
        const CT_HpsMeasure& get_szCs() const;
        bool has_highlight() const;
        CT_Highlight* mutable_highlight();
        const CT_Highlight& get_highlight() const;
        bool has_u() const;
        CT_Underline* mutable_u();
        const CT_Underline& get_u() const;
        bool has_effect() const;
        CT_TextEffect* mutable_effect();
        const CT_TextEffect& get_effect() const;
        bool has_bdr() const;
        CT_Border* mutable_bdr();
        const CT_Border& get_bdr() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& get_shd() const;
        bool has_fitText() const;
        CT_FitText* mutable_fitText();
        const CT_FitText& get_fitText() const;
        bool has_vertAlign() const;
        CT_VerticalAlignRun* mutable_vertAlign();
        const CT_VerticalAlignRun& get_vertAlign() const;
        bool has_rtl() const;
        CT_OnOff* mutable_rtl();
        const CT_OnOff& get_rtl() const;
        bool has_cs() const;
        CT_OnOff* mutable_cs();
        const CT_OnOff& get_cs() const;
        bool has_em() const;
        CT_Em* mutable_em();
        const CT_Em& get_em() const;
        bool has_lang() const;
        CT_Language* mutable_lang();
        const CT_Language& get_lang() const;
        bool has_eastAsianLayout() const;
        CT_EastAsianLayout* mutable_eastAsianLayout();
        const CT_EastAsianLayout& get_eastAsianLayout() const;
        bool has_specVanish() const;
        CT_OnOff* mutable_specVanish();
        const CT_OnOff& get_specVanish() const;
        bool has_oMath() const;
        CT_OnOff* mutable_oMath();
        const CT_OnOff& get_oMath() const;
    protected:
    private:
        bool m_has_rStyle;
        CT_String* m_rStyle;
        bool m_has_rFonts;
        CT_Fonts* m_rFonts;
        bool m_has_b;
        CT_OnOff* m_b;
        bool m_has_bCs;
        CT_OnOff* m_bCs;
        bool m_has_i;
        CT_OnOff* m_i;
        bool m_has_iCs;
        CT_OnOff* m_iCs;
        bool m_has_caps;
        CT_OnOff* m_caps;
        bool m_has_smallCaps;
        CT_OnOff* m_smallCaps;
        bool m_has_strike;
        CT_OnOff* m_strike;
        bool m_has_dstrike;
        CT_OnOff* m_dstrike;
        bool m_has_outline;
        CT_OnOff* m_outline;
        bool m_has_shadow;
        CT_OnOff* m_shadow;
        bool m_has_emboss;
        CT_OnOff* m_emboss;
        bool m_has_imprint;
        CT_OnOff* m_imprint;
        bool m_has_noProof;
        CT_OnOff* m_noProof;
        bool m_has_snapToGrid;
        CT_OnOff* m_snapToGrid;
        bool m_has_vanish;
        CT_OnOff* m_vanish;
        bool m_has_webHidden;
        CT_OnOff* m_webHidden;
        bool m_has_color;
        CT_Color* m_color;
        bool m_has_spacing;
        CT_SignedTwipsMeasure* m_spacing;
        bool m_has_w;
        CT_TextScale* m_w;
        bool m_has_kern;
        CT_HpsMeasure* m_kern;
        bool m_has_position;
        CT_SignedHpsMeasure* m_position;
        bool m_has_sz;
        CT_HpsMeasure* m_sz;
        bool m_has_szCs;
        CT_HpsMeasure* m_szCs;
        bool m_has_highlight;
        CT_Highlight* m_highlight;
        bool m_has_u;
        CT_Underline* m_u;
        bool m_has_effect;
        CT_TextEffect* m_effect;
        bool m_has_bdr;
        CT_Border* m_bdr;
        bool m_has_shd;
        CT_Shd* m_shd;
        bool m_has_fitText;
        CT_FitText* m_fitText;
        bool m_has_vertAlign;
        CT_VerticalAlignRun* m_vertAlign;
        bool m_has_rtl;
        CT_OnOff* m_rtl;
        bool m_has_cs;
        CT_OnOff* m_cs;
        bool m_has_em;
        CT_Em* m_em;
        bool m_has_lang;
        CT_Language* m_lang;
        bool m_has_eastAsianLayout;
        CT_EastAsianLayout* m_eastAsianLayout;
        bool m_has_specVanish;
        CT_OnOff* m_specVanish;
        bool m_has_oMath;
        CT_OnOff* m_oMath;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_RPrOriginal* default_instance_;
};

class CT_ParaRPrOriginal: public XSD::ComplexType
{
public:
    CT_ParaRPrOriginal();
    ~CT_ParaRPrOriginal();
    bool has_ins() const;
    CT_TrackChange* mutable_ins();
    const CT_TrackChange& get_ins() const;
    bool has_del() const;
    CT_TrackChange* mutable_del();
    const CT_TrackChange& get_del() const;
    bool has_moveFrom() const;
    CT_TrackChange* mutable_moveFrom();
    const CT_TrackChange& get_moveFrom() const;
    bool has_moveTo() const;
    CT_TrackChange* mutable_moveTo();
    const CT_TrackChange& get_moveTo() const;
    CT_String* add_rStyle();
    CT_Fonts* add_rFonts();
    CT_OnOff* add_b();
    CT_OnOff* add_bCs();
    CT_OnOff* add_i();
    CT_OnOff* add_iCs();
    CT_OnOff* add_caps();
    CT_OnOff* add_smallCaps();
    CT_OnOff* add_strike();
    CT_OnOff* add_dstrike();
    CT_OnOff* add_outline();
    CT_OnOff* add_shadow();
    CT_OnOff* add_emboss();
    CT_OnOff* add_imprint();
    CT_OnOff* add_noProof();
    CT_OnOff* add_snapToGrid();
    CT_OnOff* add_vanish();
    CT_OnOff* add_webHidden();
    CT_Color* add_color();
    CT_SignedTwipsMeasure* add_spacing();
    CT_TextScale* add_w();
    CT_HpsMeasure* add_kern();
    CT_SignedHpsMeasure* add_position();
    CT_HpsMeasure* add_sz();
    CT_HpsMeasure* add_szCs();
    CT_Highlight* add_highlight();
    CT_Underline* add_u();
    CT_TextEffect* add_effect();
    CT_Border* add_bdr();
    CT_Shd* add_shd();
    CT_FitText* add_fitText();
    CT_VerticalAlignRun* add_vertAlign();
    CT_OnOff* add_rtl();
    CT_OnOff* add_cs();
    CT_Em* add_em();
    CT_Language* add_lang();
    CT_EastAsianLayout* add_eastAsianLayout();
    CT_OnOff* add_specVanish();
    CT_OnOff* add_oMath();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ParaRPrOriginal& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_rStyle() const;
        CT_String* mutable_rStyle();
        const CT_String& get_rStyle() const;
        bool has_rFonts() const;
        CT_Fonts* mutable_rFonts();
        const CT_Fonts& get_rFonts() const;
        bool has_b() const;
        CT_OnOff* mutable_b();
        const CT_OnOff& get_b() const;
        bool has_bCs() const;
        CT_OnOff* mutable_bCs();
        const CT_OnOff& get_bCs() const;
        bool has_i() const;
        CT_OnOff* mutable_i();
        const CT_OnOff& get_i() const;
        bool has_iCs() const;
        CT_OnOff* mutable_iCs();
        const CT_OnOff& get_iCs() const;
        bool has_caps() const;
        CT_OnOff* mutable_caps();
        const CT_OnOff& get_caps() const;
        bool has_smallCaps() const;
        CT_OnOff* mutable_smallCaps();
        const CT_OnOff& get_smallCaps() const;
        bool has_strike() const;
        CT_OnOff* mutable_strike();
        const CT_OnOff& get_strike() const;
        bool has_dstrike() const;
        CT_OnOff* mutable_dstrike();
        const CT_OnOff& get_dstrike() const;
        bool has_outline() const;
        CT_OnOff* mutable_outline();
        const CT_OnOff& get_outline() const;
        bool has_shadow() const;
        CT_OnOff* mutable_shadow();
        const CT_OnOff& get_shadow() const;
        bool has_emboss() const;
        CT_OnOff* mutable_emboss();
        const CT_OnOff& get_emboss() const;
        bool has_imprint() const;
        CT_OnOff* mutable_imprint();
        const CT_OnOff& get_imprint() const;
        bool has_noProof() const;
        CT_OnOff* mutable_noProof();
        const CT_OnOff& get_noProof() const;
        bool has_snapToGrid() const;
        CT_OnOff* mutable_snapToGrid();
        const CT_OnOff& get_snapToGrid() const;
        bool has_vanish() const;
        CT_OnOff* mutable_vanish();
        const CT_OnOff& get_vanish() const;
        bool has_webHidden() const;
        CT_OnOff* mutable_webHidden();
        const CT_OnOff& get_webHidden() const;
        bool has_color() const;
        CT_Color* mutable_color();
        const CT_Color& get_color() const;
        bool has_spacing() const;
        CT_SignedTwipsMeasure* mutable_spacing();
        const CT_SignedTwipsMeasure& get_spacing() const;
        bool has_w() const;
        CT_TextScale* mutable_w();
        const CT_TextScale& get_w() const;
        bool has_kern() const;
        CT_HpsMeasure* mutable_kern();
        const CT_HpsMeasure& get_kern() const;
        bool has_position() const;
        CT_SignedHpsMeasure* mutable_position();
        const CT_SignedHpsMeasure& get_position() const;
        bool has_sz() const;
        CT_HpsMeasure* mutable_sz();
        const CT_HpsMeasure& get_sz() const;
        bool has_szCs() const;
        CT_HpsMeasure* mutable_szCs();
        const CT_HpsMeasure& get_szCs() const;
        bool has_highlight() const;
        CT_Highlight* mutable_highlight();
        const CT_Highlight& get_highlight() const;
        bool has_u() const;
        CT_Underline* mutable_u();
        const CT_Underline& get_u() const;
        bool has_effect() const;
        CT_TextEffect* mutable_effect();
        const CT_TextEffect& get_effect() const;
        bool has_bdr() const;
        CT_Border* mutable_bdr();
        const CT_Border& get_bdr() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& get_shd() const;
        bool has_fitText() const;
        CT_FitText* mutable_fitText();
        const CT_FitText& get_fitText() const;
        bool has_vertAlign() const;
        CT_VerticalAlignRun* mutable_vertAlign();
        const CT_VerticalAlignRun& get_vertAlign() const;
        bool has_rtl() const;
        CT_OnOff* mutable_rtl();
        const CT_OnOff& get_rtl() const;
        bool has_cs() const;
        CT_OnOff* mutable_cs();
        const CT_OnOff& get_cs() const;
        bool has_em() const;
        CT_Em* mutable_em();
        const CT_Em& get_em() const;
        bool has_lang() const;
        CT_Language* mutable_lang();
        const CT_Language& get_lang() const;
        bool has_eastAsianLayout() const;
        CT_EastAsianLayout* mutable_eastAsianLayout();
        const CT_EastAsianLayout& get_eastAsianLayout() const;
        bool has_specVanish() const;
        CT_OnOff* mutable_specVanish();
        const CT_OnOff& get_specVanish() const;
        bool has_oMath() const;
        CT_OnOff* mutable_oMath();
        const CT_OnOff& get_oMath() const;
    protected:
    private:
        bool m_has_rStyle;
        CT_String* m_rStyle;
        bool m_has_rFonts;
        CT_Fonts* m_rFonts;
        bool m_has_b;
        CT_OnOff* m_b;
        bool m_has_bCs;
        CT_OnOff* m_bCs;
        bool m_has_i;
        CT_OnOff* m_i;
        bool m_has_iCs;
        CT_OnOff* m_iCs;
        bool m_has_caps;
        CT_OnOff* m_caps;
        bool m_has_smallCaps;
        CT_OnOff* m_smallCaps;
        bool m_has_strike;
        CT_OnOff* m_strike;
        bool m_has_dstrike;
        CT_OnOff* m_dstrike;
        bool m_has_outline;
        CT_OnOff* m_outline;
        bool m_has_shadow;
        CT_OnOff* m_shadow;
        bool m_has_emboss;
        CT_OnOff* m_emboss;
        bool m_has_imprint;
        CT_OnOff* m_imprint;
        bool m_has_noProof;
        CT_OnOff* m_noProof;
        bool m_has_snapToGrid;
        CT_OnOff* m_snapToGrid;
        bool m_has_vanish;
        CT_OnOff* m_vanish;
        bool m_has_webHidden;
        CT_OnOff* m_webHidden;
        bool m_has_color;
        CT_Color* m_color;
        bool m_has_spacing;
        CT_SignedTwipsMeasure* m_spacing;
        bool m_has_w;
        CT_TextScale* m_w;
        bool m_has_kern;
        CT_HpsMeasure* m_kern;
        bool m_has_position;
        CT_SignedHpsMeasure* m_position;
        bool m_has_sz;
        CT_HpsMeasure* m_sz;
        bool m_has_szCs;
        CT_HpsMeasure* m_szCs;
        bool m_has_highlight;
        CT_Highlight* m_highlight;
        bool m_has_u;
        CT_Underline* m_u;
        bool m_has_effect;
        CT_TextEffect* m_effect;
        bool m_has_bdr;
        CT_Border* m_bdr;
        bool m_has_shd;
        CT_Shd* m_shd;
        bool m_has_fitText;
        CT_FitText* m_fitText;
        bool m_has_vertAlign;
        CT_VerticalAlignRun* m_vertAlign;
        bool m_has_rtl;
        CT_OnOff* m_rtl;
        bool m_has_cs;
        CT_OnOff* m_cs;
        bool m_has_em;
        CT_Em* m_em;
        bool m_has_lang;
        CT_Language* m_lang;
        bool m_has_eastAsianLayout;
        CT_EastAsianLayout* m_eastAsianLayout;
        bool m_has_specVanish;
        CT_OnOff* m_specVanish;
        bool m_has_oMath;
        CT_OnOff* m_oMath;
    };
    bool m_has_ins;
    CT_TrackChange* m_ins;
    bool m_has_del;
    CT_TrackChange* m_del;
    bool m_has_moveFrom;
    CT_TrackChange* m_moveFrom;
    bool m_has_moveTo;
    CT_TrackChange* m_moveTo;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_ParaRPrOriginal* default_instance_;
};

class CT_ParaRPr: public XSD::ComplexType
{
public:
    CT_ParaRPr();
    ~CT_ParaRPr();
    bool has_ins() const;
    CT_TrackChange* mutable_ins();
    const CT_TrackChange& get_ins() const;
    bool has_del() const;
    CT_TrackChange* mutable_del();
    const CT_TrackChange& get_del() const;
    bool has_moveFrom() const;
    CT_TrackChange* mutable_moveFrom();
    const CT_TrackChange& get_moveFrom() const;
    bool has_moveTo() const;
    CT_TrackChange* mutable_moveTo();
    const CT_TrackChange& get_moveTo() const;
    CT_String* add_rStyle();
    CT_Fonts* add_rFonts();
    CT_OnOff* add_b();
    CT_OnOff* add_bCs();
    CT_OnOff* add_i();
    CT_OnOff* add_iCs();
    CT_OnOff* add_caps();
    CT_OnOff* add_smallCaps();
    CT_OnOff* add_strike();
    CT_OnOff* add_dstrike();
    CT_OnOff* add_outline();
    CT_OnOff* add_shadow();
    CT_OnOff* add_emboss();
    CT_OnOff* add_imprint();
    CT_OnOff* add_noProof();
    CT_OnOff* add_snapToGrid();
    CT_OnOff* add_vanish();
    CT_OnOff* add_webHidden();
    CT_Color* add_color();
    CT_SignedTwipsMeasure* add_spacing();
    CT_TextScale* add_w();
    CT_HpsMeasure* add_kern();
    CT_SignedHpsMeasure* add_position();
    CT_HpsMeasure* add_sz();
    CT_HpsMeasure* add_szCs();
    CT_Highlight* add_highlight();
    CT_Underline* add_u();
    CT_TextEffect* add_effect();
    CT_Border* add_bdr();
    CT_Shd* add_shd();
    CT_FitText* add_fitText();
    CT_VerticalAlignRun* add_vertAlign();
    CT_OnOff* add_rtl();
    CT_OnOff* add_cs();
    CT_Em* add_em();
    CT_Language* add_lang();
    CT_EastAsianLayout* add_eastAsianLayout();
    CT_OnOff* add_specVanish();
    CT_OnOff* add_oMath();
    bool has_rPrChange() const;
    CT_ParaRPrChange* mutable_rPrChange();
    const CT_ParaRPrChange& get_rPrChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ParaRPr& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_rStyle() const;
        CT_String* mutable_rStyle();
        const CT_String& get_rStyle() const;
        bool has_rFonts() const;
        CT_Fonts* mutable_rFonts();
        const CT_Fonts& get_rFonts() const;
        bool has_b() const;
        CT_OnOff* mutable_b();
        const CT_OnOff& get_b() const;
        bool has_bCs() const;
        CT_OnOff* mutable_bCs();
        const CT_OnOff& get_bCs() const;
        bool has_i() const;
        CT_OnOff* mutable_i();
        const CT_OnOff& get_i() const;
        bool has_iCs() const;
        CT_OnOff* mutable_iCs();
        const CT_OnOff& get_iCs() const;
        bool has_caps() const;
        CT_OnOff* mutable_caps();
        const CT_OnOff& get_caps() const;
        bool has_smallCaps() const;
        CT_OnOff* mutable_smallCaps();
        const CT_OnOff& get_smallCaps() const;
        bool has_strike() const;
        CT_OnOff* mutable_strike();
        const CT_OnOff& get_strike() const;
        bool has_dstrike() const;
        CT_OnOff* mutable_dstrike();
        const CT_OnOff& get_dstrike() const;
        bool has_outline() const;
        CT_OnOff* mutable_outline();
        const CT_OnOff& get_outline() const;
        bool has_shadow() const;
        CT_OnOff* mutable_shadow();
        const CT_OnOff& get_shadow() const;
        bool has_emboss() const;
        CT_OnOff* mutable_emboss();
        const CT_OnOff& get_emboss() const;
        bool has_imprint() const;
        CT_OnOff* mutable_imprint();
        const CT_OnOff& get_imprint() const;
        bool has_noProof() const;
        CT_OnOff* mutable_noProof();
        const CT_OnOff& get_noProof() const;
        bool has_snapToGrid() const;
        CT_OnOff* mutable_snapToGrid();
        const CT_OnOff& get_snapToGrid() const;
        bool has_vanish() const;
        CT_OnOff* mutable_vanish();
        const CT_OnOff& get_vanish() const;
        bool has_webHidden() const;
        CT_OnOff* mutable_webHidden();
        const CT_OnOff& get_webHidden() const;
        bool has_color() const;
        CT_Color* mutable_color();
        const CT_Color& get_color() const;
        bool has_spacing() const;
        CT_SignedTwipsMeasure* mutable_spacing();
        const CT_SignedTwipsMeasure& get_spacing() const;
        bool has_w() const;
        CT_TextScale* mutable_w();
        const CT_TextScale& get_w() const;
        bool has_kern() const;
        CT_HpsMeasure* mutable_kern();
        const CT_HpsMeasure& get_kern() const;
        bool has_position() const;
        CT_SignedHpsMeasure* mutable_position();
        const CT_SignedHpsMeasure& get_position() const;
        bool has_sz() const;
        CT_HpsMeasure* mutable_sz();
        const CT_HpsMeasure& get_sz() const;
        bool has_szCs() const;
        CT_HpsMeasure* mutable_szCs();
        const CT_HpsMeasure& get_szCs() const;
        bool has_highlight() const;
        CT_Highlight* mutable_highlight();
        const CT_Highlight& get_highlight() const;
        bool has_u() const;
        CT_Underline* mutable_u();
        const CT_Underline& get_u() const;
        bool has_effect() const;
        CT_TextEffect* mutable_effect();
        const CT_TextEffect& get_effect() const;
        bool has_bdr() const;
        CT_Border* mutable_bdr();
        const CT_Border& get_bdr() const;
        bool has_shd() const;
        CT_Shd* mutable_shd();
        const CT_Shd& get_shd() const;
        bool has_fitText() const;
        CT_FitText* mutable_fitText();
        const CT_FitText& get_fitText() const;
        bool has_vertAlign() const;
        CT_VerticalAlignRun* mutable_vertAlign();
        const CT_VerticalAlignRun& get_vertAlign() const;
        bool has_rtl() const;
        CT_OnOff* mutable_rtl();
        const CT_OnOff& get_rtl() const;
        bool has_cs() const;
        CT_OnOff* mutable_cs();
        const CT_OnOff& get_cs() const;
        bool has_em() const;
        CT_Em* mutable_em();
        const CT_Em& get_em() const;
        bool has_lang() const;
        CT_Language* mutable_lang();
        const CT_Language& get_lang() const;
        bool has_eastAsianLayout() const;
        CT_EastAsianLayout* mutable_eastAsianLayout();
        const CT_EastAsianLayout& get_eastAsianLayout() const;
        bool has_specVanish() const;
        CT_OnOff* mutable_specVanish();
        const CT_OnOff& get_specVanish() const;
        bool has_oMath() const;
        CT_OnOff* mutable_oMath();
        const CT_OnOff& get_oMath() const;
    protected:
    private:
        bool m_has_rStyle;
        CT_String* m_rStyle;
        bool m_has_rFonts;
        CT_Fonts* m_rFonts;
        bool m_has_b;
        CT_OnOff* m_b;
        bool m_has_bCs;
        CT_OnOff* m_bCs;
        bool m_has_i;
        CT_OnOff* m_i;
        bool m_has_iCs;
        CT_OnOff* m_iCs;
        bool m_has_caps;
        CT_OnOff* m_caps;
        bool m_has_smallCaps;
        CT_OnOff* m_smallCaps;
        bool m_has_strike;
        CT_OnOff* m_strike;
        bool m_has_dstrike;
        CT_OnOff* m_dstrike;
        bool m_has_outline;
        CT_OnOff* m_outline;
        bool m_has_shadow;
        CT_OnOff* m_shadow;
        bool m_has_emboss;
        CT_OnOff* m_emboss;
        bool m_has_imprint;
        CT_OnOff* m_imprint;
        bool m_has_noProof;
        CT_OnOff* m_noProof;
        bool m_has_snapToGrid;
        CT_OnOff* m_snapToGrid;
        bool m_has_vanish;
        CT_OnOff* m_vanish;
        bool m_has_webHidden;
        CT_OnOff* m_webHidden;
        bool m_has_color;
        CT_Color* m_color;
        bool m_has_spacing;
        CT_SignedTwipsMeasure* m_spacing;
        bool m_has_w;
        CT_TextScale* m_w;
        bool m_has_kern;
        CT_HpsMeasure* m_kern;
        bool m_has_position;
        CT_SignedHpsMeasure* m_position;
        bool m_has_sz;
        CT_HpsMeasure* m_sz;
        bool m_has_szCs;
        CT_HpsMeasure* m_szCs;
        bool m_has_highlight;
        CT_Highlight* m_highlight;
        bool m_has_u;
        CT_Underline* m_u;
        bool m_has_effect;
        CT_TextEffect* m_effect;
        bool m_has_bdr;
        CT_Border* m_bdr;
        bool m_has_shd;
        CT_Shd* m_shd;
        bool m_has_fitText;
        CT_FitText* m_fitText;
        bool m_has_vertAlign;
        CT_VerticalAlignRun* m_vertAlign;
        bool m_has_rtl;
        CT_OnOff* m_rtl;
        bool m_has_cs;
        CT_OnOff* m_cs;
        bool m_has_em;
        CT_Em* m_em;
        bool m_has_lang;
        CT_Language* m_lang;
        bool m_has_eastAsianLayout;
        CT_EastAsianLayout* m_eastAsianLayout;
        bool m_has_specVanish;
        CT_OnOff* m_specVanish;
        bool m_has_oMath;
        CT_OnOff* m_oMath;
    };
    bool m_has_ins;
    CT_TrackChange* m_ins;
    bool m_has_del;
    CT_TrackChange* m_del;
    bool m_has_moveFrom;
    CT_TrackChange* m_moveFrom;
    bool m_has_moveTo;
    CT_TrackChange* m_moveTo;
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_rPrChange;
    CT_ParaRPrChange* m_rPrChange;
    static CT_ParaRPr* default_instance_;
};

class CT_AltChunk: public XSD::ComplexType
{
public:
    CT_AltChunk();
    ~CT_AltChunk();
    bool has_altChunkPr() const;
    CT_AltChunkPr* mutable_altChunkPr();
    const CT_AltChunkPr& get_altChunkPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AltChunk& default_instance();
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
protected:
private:
    bool m_has_altChunkPr;
    CT_AltChunkPr* m_altChunkPr;
    static CT_AltChunk* default_instance_;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
};

class CT_AltChunkPr: public XSD::ComplexType
{
public:
    CT_AltChunkPr();
    ~CT_AltChunkPr();
    bool has_matchSrc() const;
    CT_OnOff* mutable_matchSrc();
    const CT_OnOff& get_matchSrc() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AltChunkPr& default_instance();
protected:
private:
    bool m_has_matchSrc;
    CT_OnOff* m_matchSrc;
    static CT_AltChunkPr* default_instance_;
};

class CT_RubyAlign: public XSD::ComplexType
{
public:
    CT_RubyAlign();
    ~CT_RubyAlign();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RubyAlign& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_RubyAlign& _val_attr);
    const ST_RubyAlign& get_val_attr() const;
protected:
private:
    static CT_RubyAlign* default_instance_;
    bool m_has_val_attr;
    ST_RubyAlign* m_val_attr;
};

class CT_RubyPr: public XSD::ComplexType
{
public:
    CT_RubyPr();
    ~CT_RubyPr();
    bool has_rubyAlign() const;
    CT_RubyAlign* mutable_rubyAlign();
    const CT_RubyAlign& get_rubyAlign() const;
    bool has_hps() const;
    CT_HpsMeasure* mutable_hps();
    const CT_HpsMeasure& get_hps() const;
    bool has_hpsRaise() const;
    CT_HpsMeasure* mutable_hpsRaise();
    const CT_HpsMeasure& get_hpsRaise() const;
    bool has_hpsBaseText() const;
    CT_HpsMeasure* mutable_hpsBaseText();
    const CT_HpsMeasure& get_hpsBaseText() const;
    bool has_lid() const;
    CT_Lang* mutable_lid();
    const CT_Lang& get_lid() const;
    bool has_dirty() const;
    CT_OnOff* mutable_dirty();
    const CT_OnOff& get_dirty() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RubyPr& default_instance();
protected:
private:
    bool m_has_rubyAlign;
    CT_RubyAlign* m_rubyAlign;
    bool m_has_hps;
    CT_HpsMeasure* m_hps;
    bool m_has_hpsRaise;
    CT_HpsMeasure* m_hpsRaise;
    bool m_has_hpsBaseText;
    CT_HpsMeasure* m_hpsBaseText;
    bool m_has_lid;
    CT_Lang* m_lid;
    bool m_has_dirty;
    CT_OnOff* m_dirty;
    static CT_RubyPr* default_instance_;
};

class CT_RubyContent: public XSD::ComplexType
{
public:
    CT_RubyContent();
    ~CT_RubyContent();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RubyContent& default_instance();
protected:
private:
    static CT_RubyContent* default_instance_;
};

class CT_Ruby: public XSD::ComplexType
{
public:
    CT_Ruby();
    ~CT_Ruby();
    bool has_rubyPr() const;
    CT_RubyPr* mutable_rubyPr();
    const CT_RubyPr& get_rubyPr() const;
    bool has_rt() const;
    CT_RubyContent* mutable_rt();
    const CT_RubyContent& get_rt() const;
    bool has_rubyBase() const;
    CT_RubyContent* mutable_rubyBase();
    const CT_RubyContent& get_rubyBase() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Ruby& default_instance();
protected:
private:
    bool m_has_rubyPr;
    CT_RubyPr* m_rubyPr;
    bool m_has_rt;
    CT_RubyContent* m_rt;
    bool m_has_rubyBase;
    CT_RubyContent* m_rubyBase;
    static CT_Ruby* default_instance_;
};

class CT_Lock: public XSD::ComplexType
{
public:
    CT_Lock();
    ~CT_Lock();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Lock& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Lock& _val_attr);
    const ST_Lock& get_val_attr() const;
protected:
private:
    static CT_Lock* default_instance_;
    bool m_has_val_attr;
    ST_Lock* m_val_attr;
};

class CT_SdtListItem: public XSD::ComplexType
{
public:
    CT_SdtListItem();
    ~CT_SdtListItem();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtListItem& default_instance();
    bool has_displayText_attr() const;
    void set_displayText_attr(const ns_s::ST_String& _displayText_attr);
    const ns_s::ST_String& get_displayText_attr() const;
    bool has_value_attr() const;
    void set_value_attr(const ns_s::ST_String& _value_attr);
    const ns_s::ST_String& get_value_attr() const;
protected:
private:
    static CT_SdtListItem* default_instance_;
    bool m_has_displayText_attr;
    ns_s::ST_String* m_displayText_attr;
    bool m_has_value_attr;
    ns_s::ST_String* m_value_attr;
};

class CT_SdtDateMappingType: public XSD::ComplexType
{
public:
    CT_SdtDateMappingType();
    ~CT_SdtDateMappingType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtDateMappingType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_SdtDateMappingType& _val_attr);
    const ST_SdtDateMappingType& get_val_attr() const;
protected:
private:
    static CT_SdtDateMappingType* default_instance_;
    bool m_has_val_attr;
    ST_SdtDateMappingType* m_val_attr;
};

class CT_CalendarType: public XSD::ComplexType
{
public:
    CT_CalendarType();
    ~CT_CalendarType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CalendarType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_CalendarType& _val_attr);
    const ns_s::ST_CalendarType& get_val_attr() const;
protected:
private:
    static CT_CalendarType* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_CalendarType* m_val_attr;
};

class CT_SdtDate: public XSD::ComplexType
{
public:
    CT_SdtDate();
    ~CT_SdtDate();
    bool has_dateFormat() const;
    CT_String* mutable_dateFormat();
    const CT_String& get_dateFormat() const;
    bool has_lid() const;
    CT_Lang* mutable_lid();
    const CT_Lang& get_lid() const;
    bool has_storeMappedDataAs() const;
    CT_SdtDateMappingType* mutable_storeMappedDataAs();
    const CT_SdtDateMappingType& get_storeMappedDataAs() const;
    bool has_calendar() const;
    CT_CalendarType* mutable_calendar();
    const CT_CalendarType& get_calendar() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtDate& default_instance();
    bool has_fullDate_attr() const;
    void set_fullDate_attr(const ST_DateTime& _fullDate_attr);
    const ST_DateTime& get_fullDate_attr() const;
protected:
private:
    bool m_has_dateFormat;
    CT_String* m_dateFormat;
    bool m_has_lid;
    CT_Lang* m_lid;
    bool m_has_storeMappedDataAs;
    CT_SdtDateMappingType* m_storeMappedDataAs;
    bool m_has_calendar;
    CT_CalendarType* m_calendar;
    static CT_SdtDate* default_instance_;
    bool m_has_fullDate_attr;
    ST_DateTime* m_fullDate_attr;
};

class CT_SdtComboBox: public XSD::ComplexType
{
public:
    CT_SdtComboBox();
    ~CT_SdtComboBox();
    CT_SdtListItem* add_listItem();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtComboBox& default_instance();
    bool has_lastValue_attr() const;
    void set_lastValue_attr(const ns_s::ST_String& _lastValue_attr);
    const ns_s::ST_String& get_lastValue_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_listItem() const;
        CT_SdtListItem* mutable_listItem();
        const CT_SdtListItem& get_listItem() const;
    protected:
    private:
        bool m_has_listItem;
        CT_SdtListItem* m_listItem;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SdtComboBox* default_instance_;
    bool m_has_lastValue_attr;
    ns_s::ST_String* m_lastValue_attr;
};

class CT_SdtDocPart: public XSD::ComplexType
{
public:
    CT_SdtDocPart();
    ~CT_SdtDocPart();
    bool has_docPartGallery() const;
    CT_String* mutable_docPartGallery();
    const CT_String& get_docPartGallery() const;
    bool has_docPartCategory() const;
    CT_String* mutable_docPartCategory();
    const CT_String& get_docPartCategory() const;
    bool has_docPartUnique() const;
    CT_OnOff* mutable_docPartUnique();
    const CT_OnOff& get_docPartUnique() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtDocPart& default_instance();
protected:
private:
    bool m_has_docPartGallery;
    CT_String* m_docPartGallery;
    bool m_has_docPartCategory;
    CT_String* m_docPartCategory;
    bool m_has_docPartUnique;
    CT_OnOff* m_docPartUnique;
    static CT_SdtDocPart* default_instance_;
};

class CT_SdtDropDownList: public XSD::ComplexType
{
public:
    CT_SdtDropDownList();
    ~CT_SdtDropDownList();
    CT_SdtListItem* add_listItem();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtDropDownList& default_instance();
    bool has_lastValue_attr() const;
    void set_lastValue_attr(const ns_s::ST_String& _lastValue_attr);
    const ns_s::ST_String& get_lastValue_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_listItem() const;
        CT_SdtListItem* mutable_listItem();
        const CT_SdtListItem& get_listItem() const;
    protected:
    private:
        bool m_has_listItem;
        CT_SdtListItem* m_listItem;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SdtDropDownList* default_instance_;
    bool m_has_lastValue_attr;
    ns_s::ST_String* m_lastValue_attr;
};

class CT_Placeholder: public XSD::ComplexType
{
public:
    CT_Placeholder();
    ~CT_Placeholder();
    bool has_docPart() const;
    CT_String* mutable_docPart();
    const CT_String& get_docPart() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Placeholder& default_instance();
protected:
private:
    bool m_has_docPart;
    CT_String* m_docPart;
    static CT_Placeholder* default_instance_;
};

class CT_SdtText: public XSD::ComplexType
{
public:
    CT_SdtText();
    ~CT_SdtText();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtText& default_instance();
    bool has_multiLine_attr() const;
    void set_multiLine_attr(const ns_s::ST_OnOff& _multiLine_attr);
    const ns_s::ST_OnOff& get_multiLine_attr() const;
protected:
private:
    static CT_SdtText* default_instance_;
    bool m_has_multiLine_attr;
    ns_s::ST_OnOff* m_multiLine_attr;
};

class CT_DataBinding: public XSD::ComplexType
{
public:
    CT_DataBinding();
    ~CT_DataBinding();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DataBinding& default_instance();
    bool has_prefixMappings_attr() const;
    void set_prefixMappings_attr(const ns_s::ST_String& _prefixMappings_attr);
    const ns_s::ST_String& get_prefixMappings_attr() const;
    bool has_xpath_attr() const;
    void set_xpath_attr(const ns_s::ST_String& _xpath_attr);
    const ns_s::ST_String& get_xpath_attr() const;
    bool has_storeItemID_attr() const;
    void set_storeItemID_attr(const ns_s::ST_String& _storeItemID_attr);
    const ns_s::ST_String& get_storeItemID_attr() const;
protected:
private:
    static CT_DataBinding* default_instance_;
    bool m_has_prefixMappings_attr;
    ns_s::ST_String* m_prefixMappings_attr;
    bool m_has_xpath_attr;
    ns_s::ST_String* m_xpath_attr;
    bool m_has_storeItemID_attr;
    ns_s::ST_String* m_storeItemID_attr;
};

class CT_SdtPr: public XSD::ComplexType
{
public:
    CT_SdtPr();
    ~CT_SdtPr();
    bool has_rPr() const;
    CT_RPr* mutable_rPr();
    const CT_RPr& get_rPr() const;
    bool has_alias() const;
    CT_String* mutable_alias();
    const CT_String& get_alias() const;
    bool has_tag() const;
    CT_String* mutable_tag();
    const CT_String& get_tag() const;
    bool has_id() const;
    CT_DecimalNumber* mutable_id();
    const CT_DecimalNumber& get_id() const;
    bool has_lock() const;
    CT_Lock* mutable_lock();
    const CT_Lock& get_lock() const;
    bool has_placeholder() const;
    CT_Placeholder* mutable_placeholder();
    const CT_Placeholder& get_placeholder() const;
    bool has_temporary() const;
    CT_OnOff* mutable_temporary();
    const CT_OnOff& get_temporary() const;
    bool has_showingPlcHdr() const;
    CT_OnOff* mutable_showingPlcHdr();
    const CT_OnOff& get_showingPlcHdr() const;
    bool has_dataBinding() const;
    CT_DataBinding* mutable_dataBinding();
    const CT_DataBinding& get_dataBinding() const;
    bool has_label() const;
    CT_DecimalNumber* mutable_label();
    const CT_DecimalNumber& get_label() const;
    bool has_tabIndex() const;
    CT_UnsignedDecimalNumber* mutable_tabIndex();
    const CT_UnsignedDecimalNumber& get_tabIndex() const;
    bool has_equation() const;
    CT_Empty* mutable_equation();
    const CT_Empty& get_equation() const;
    bool has_comboBox() const;
    CT_SdtComboBox* mutable_comboBox();
    const CT_SdtComboBox& get_comboBox() const;
    bool has_date() const;
    CT_SdtDate* mutable_date();
    const CT_SdtDate& get_date() const;
    bool has_docPartObj() const;
    CT_SdtDocPart* mutable_docPartObj();
    const CT_SdtDocPart& get_docPartObj() const;
    bool has_docPartList() const;
    CT_SdtDocPart* mutable_docPartList();
    const CT_SdtDocPart& get_docPartList() const;
    bool has_dropDownList() const;
    CT_SdtDropDownList* mutable_dropDownList();
    const CT_SdtDropDownList& get_dropDownList() const;
    bool has_picture() const;
    CT_Empty* mutable_picture();
    const CT_Empty& get_picture() const;
    bool has_richText() const;
    CT_Empty* mutable_richText();
    const CT_Empty& get_richText() const;
    bool has_text() const;
    CT_SdtText* mutable_text();
    const CT_SdtText& get_text() const;
    bool has_citation() const;
    CT_Empty* mutable_citation();
    const CT_Empty& get_citation() const;
    bool has_group() const;
    CT_Empty* mutable_group();
    const CT_Empty& get_group() const;
    bool has_bibliography() const;
    CT_Empty* mutable_bibliography();
    const CT_Empty& get_bibliography() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtPr& default_instance();
protected:
private:
    bool m_has_rPr;
    CT_RPr* m_rPr;
    bool m_has_alias;
    CT_String* m_alias;
    bool m_has_tag;
    CT_String* m_tag;
    bool m_has_id;
    CT_DecimalNumber* m_id;
    bool m_has_lock;
    CT_Lock* m_lock;
    bool m_has_placeholder;
    CT_Placeholder* m_placeholder;
    bool m_has_temporary;
    CT_OnOff* m_temporary;
    bool m_has_showingPlcHdr;
    CT_OnOff* m_showingPlcHdr;
    bool m_has_dataBinding;
    CT_DataBinding* m_dataBinding;
    bool m_has_label;
    CT_DecimalNumber* m_label;
    bool m_has_tabIndex;
    CT_UnsignedDecimalNumber* m_tabIndex;
    bool m_has_equation;
    CT_Empty* m_equation;
    bool m_has_comboBox;
    CT_SdtComboBox* m_comboBox;
    bool m_has_date;
    CT_SdtDate* m_date;
    bool m_has_docPartObj;
    CT_SdtDocPart* m_docPartObj;
    bool m_has_docPartList;
    CT_SdtDocPart* m_docPartList;
    bool m_has_dropDownList;
    CT_SdtDropDownList* m_dropDownList;
    bool m_has_picture;
    CT_Empty* m_picture;
    bool m_has_richText;
    CT_Empty* m_richText;
    bool m_has_text;
    CT_SdtText* m_text;
    bool m_has_citation;
    CT_Empty* m_citation;
    bool m_has_group;
    CT_Empty* m_group;
    bool m_has_bibliography;
    CT_Empty* m_bibliography;
    static CT_SdtPr* default_instance_;
};

class CT_SdtEndPr: public XSD::ComplexType
{
public:
    CT_SdtEndPr();
    ~CT_SdtEndPr();
    CT_RPr* add_rPr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtEndPr& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& get_rPr() const;
    protected:
    private:
        bool m_has_rPr;
        CT_RPr* m_rPr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SdtEndPr* default_instance_;
};

class CT_DirContentRun: public XSD::ComplexType
{
public:
    CT_DirContentRun();
    ~CT_DirContentRun();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DirContentRun& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Direction& _val_attr);
    const ST_Direction& get_val_attr() const;
protected:
private:
    static CT_DirContentRun* default_instance_;
    bool m_has_val_attr;
    ST_Direction* m_val_attr;
};

class CT_BdoContentRun: public XSD::ComplexType
{
public:
    CT_BdoContentRun();
    ~CT_BdoContentRun();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_BdoContentRun& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Direction& _val_attr);
    const ST_Direction& get_val_attr() const;
protected:
private:
    static CT_BdoContentRun* default_instance_;
    bool m_has_val_attr;
    ST_Direction* m_val_attr;
};

class CT_SdtContentRun: public XSD::ComplexType
{
public:
    CT_SdtContentRun();
    ~CT_SdtContentRun();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtContentRun& default_instance();
protected:
private:
    static CT_SdtContentRun* default_instance_;
};

class CT_SdtContentBlock: public XSD::ComplexType
{
public:
    CT_SdtContentBlock();
    ~CT_SdtContentBlock();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtContentBlock& default_instance();
protected:
private:
    static CT_SdtContentBlock* default_instance_;
};

class CT_SdtContentRow: public XSD::ComplexType
{
public:
    CT_SdtContentRow();
    ~CT_SdtContentRow();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtContentRow& default_instance();
protected:
private:
    static CT_SdtContentRow* default_instance_;
};

class CT_SdtContentCell: public XSD::ComplexType
{
public:
    CT_SdtContentCell();
    ~CT_SdtContentCell();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtContentCell& default_instance();
protected:
private:
    static CT_SdtContentCell* default_instance_;
};

class CT_SdtBlock: public XSD::ComplexType
{
public:
    CT_SdtBlock();
    ~CT_SdtBlock();
    bool has_sdtPr() const;
    CT_SdtPr* mutable_sdtPr();
    const CT_SdtPr& get_sdtPr() const;
    bool has_sdtEndPr() const;
    CT_SdtEndPr* mutable_sdtEndPr();
    const CT_SdtEndPr& get_sdtEndPr() const;
    bool has_sdtContent() const;
    CT_SdtContentBlock* mutable_sdtContent();
    const CT_SdtContentBlock& get_sdtContent() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtBlock& default_instance();
protected:
private:
    bool m_has_sdtPr;
    CT_SdtPr* m_sdtPr;
    bool m_has_sdtEndPr;
    CT_SdtEndPr* m_sdtEndPr;
    bool m_has_sdtContent;
    CT_SdtContentBlock* m_sdtContent;
    static CT_SdtBlock* default_instance_;
};

class CT_SdtRun: public XSD::ComplexType
{
public:
    CT_SdtRun();
    ~CT_SdtRun();
    bool has_sdtPr() const;
    CT_SdtPr* mutable_sdtPr();
    const CT_SdtPr& get_sdtPr() const;
    bool has_sdtEndPr() const;
    CT_SdtEndPr* mutable_sdtEndPr();
    const CT_SdtEndPr& get_sdtEndPr() const;
    bool has_sdtContent() const;
    CT_SdtContentRun* mutable_sdtContent();
    const CT_SdtContentRun& get_sdtContent() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtRun& default_instance();
protected:
private:
    bool m_has_sdtPr;
    CT_SdtPr* m_sdtPr;
    bool m_has_sdtEndPr;
    CT_SdtEndPr* m_sdtEndPr;
    bool m_has_sdtContent;
    CT_SdtContentRun* m_sdtContent;
    static CT_SdtRun* default_instance_;
};

class CT_SdtCell: public XSD::ComplexType
{
public:
    CT_SdtCell();
    ~CT_SdtCell();
    bool has_sdtPr() const;
    CT_SdtPr* mutable_sdtPr();
    const CT_SdtPr& get_sdtPr() const;
    bool has_sdtEndPr() const;
    CT_SdtEndPr* mutable_sdtEndPr();
    const CT_SdtEndPr& get_sdtEndPr() const;
    bool has_sdtContent() const;
    CT_SdtContentCell* mutable_sdtContent();
    const CT_SdtContentCell& get_sdtContent() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtCell& default_instance();
protected:
private:
    bool m_has_sdtPr;
    CT_SdtPr* m_sdtPr;
    bool m_has_sdtEndPr;
    CT_SdtEndPr* m_sdtEndPr;
    bool m_has_sdtContent;
    CT_SdtContentCell* m_sdtContent;
    static CT_SdtCell* default_instance_;
};

class CT_SdtRow: public XSD::ComplexType
{
public:
    CT_SdtRow();
    ~CT_SdtRow();
    bool has_sdtPr() const;
    CT_SdtPr* mutable_sdtPr();
    const CT_SdtPr& get_sdtPr() const;
    bool has_sdtEndPr() const;
    CT_SdtEndPr* mutable_sdtEndPr();
    const CT_SdtEndPr& get_sdtEndPr() const;
    bool has_sdtContent() const;
    CT_SdtContentRow* mutable_sdtContent();
    const CT_SdtContentRow& get_sdtContent() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SdtRow& default_instance();
protected:
private:
    bool m_has_sdtPr;
    CT_SdtPr* m_sdtPr;
    bool m_has_sdtEndPr;
    CT_SdtEndPr* m_sdtEndPr;
    bool m_has_sdtContent;
    CT_SdtContentRow* m_sdtContent;
    static CT_SdtRow* default_instance_;
};

class CT_Attr: public XSD::ComplexType
{
public:
    CT_Attr();
    ~CT_Attr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Attr& default_instance();
    bool has_uri_attr() const;
    void set_uri_attr(const ns_s::ST_String& _uri_attr);
    const ns_s::ST_String& get_uri_attr() const;
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_String& _val_attr);
    const ns_s::ST_String& get_val_attr() const;
protected:
private:
    static CT_Attr* default_instance_;
    bool m_has_uri_attr;
    ns_s::ST_String* m_uri_attr;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_val_attr;
    ns_s::ST_String* m_val_attr;
};

class CT_CustomXmlRun: public XSD::ComplexType
{
public:
    CT_CustomXmlRun();
    ~CT_CustomXmlRun();
    bool has_customXmlPr() const;
    CT_CustomXmlPr* mutable_customXmlPr();
    const CT_CustomXmlPr& get_customXmlPr() const;
    CT_CustomXmlRun* add_customXml();
    CT_SmartTagRun* add_smartTag();
    CT_SdtRun* add_sdt();
    CT_DirContentRun* add_dir();
    CT_BdoContentRun* add_bdo();
    CT_R* add_r();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    CT_SimpleField* add_fldSimple();
    CT_Hyperlink* add_hyperlink();
    CT_Rel* add_subDoc();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CustomXmlRun& default_instance();
    bool has_uri_attr() const;
    void set_uri_attr(const ns_s::ST_String& _uri_attr);
    const ns_s::ST_String& get_uri_attr() const;
    bool has_element_attr() const;
    void set_element_attr(const ns_s::ST_XmlName& _element_attr);
    const ns_s::ST_XmlName& get_element_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlRun* mutable_customXml();
        const CT_CustomXmlRun& get_customXml() const;
        bool has_smartTag() const;
        CT_SmartTagRun* mutable_smartTag();
        const CT_SmartTagRun& get_smartTag() const;
        bool has_sdt() const;
        CT_SdtRun* mutable_sdt();
        const CT_SdtRun& get_sdt() const;
        bool has_dir() const;
        CT_DirContentRun* mutable_dir();
        const CT_DirContentRun& get_dir() const;
        bool has_bdo() const;
        CT_BdoContentRun* mutable_bdo();
        const CT_BdoContentRun& get_bdo() const;
        bool has_r() const;
        CT_R* mutable_r();
        const CT_R& get_r() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_fldSimple() const;
        CT_SimpleField* mutable_fldSimple();
        const CT_SimpleField& get_fldSimple() const;
        bool has_hyperlink() const;
        CT_Hyperlink* mutable_hyperlink();
        const CT_Hyperlink& get_hyperlink() const;
        bool has_subDoc() const;
        CT_Rel* mutable_subDoc();
        const CT_Rel& get_subDoc() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlRun* m_customXml;
        bool m_has_smartTag;
        CT_SmartTagRun* m_smartTag;
        bool m_has_sdt;
        CT_SdtRun* m_sdt;
        bool m_has_dir;
        CT_DirContentRun* m_dir;
        bool m_has_bdo;
        CT_BdoContentRun* m_bdo;
        bool m_has_r;
        CT_R* m_r;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_fldSimple;
        CT_SimpleField* m_fldSimple;
        bool m_has_hyperlink;
        CT_Hyperlink* m_hyperlink;
        bool m_has_subDoc;
        CT_Rel* m_subDoc;
    };
    bool m_has_customXmlPr;
    CT_CustomXmlPr* m_customXmlPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CustomXmlRun* default_instance_;
    bool m_has_uri_attr;
    ns_s::ST_String* m_uri_attr;
    bool m_has_element_attr;
    ns_s::ST_XmlName* m_element_attr;
};

class CT_SmartTagRun: public XSD::ComplexType
{
public:
    CT_SmartTagRun();
    ~CT_SmartTagRun();
    bool has_smartTagPr() const;
    CT_SmartTagPr* mutable_smartTagPr();
    const CT_SmartTagPr& get_smartTagPr() const;
    CT_CustomXmlRun* add_customXml();
    CT_SmartTagRun* add_smartTag();
    CT_SdtRun* add_sdt();
    CT_DirContentRun* add_dir();
    CT_BdoContentRun* add_bdo();
    CT_R* add_r();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    CT_SimpleField* add_fldSimple();
    CT_Hyperlink* add_hyperlink();
    CT_Rel* add_subDoc();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SmartTagRun& default_instance();
    bool has_uri_attr() const;
    void set_uri_attr(const ns_s::ST_String& _uri_attr);
    const ns_s::ST_String& get_uri_attr() const;
    bool has_element_attr() const;
    void set_element_attr(const ns_s::ST_XmlName& _element_attr);
    const ns_s::ST_XmlName& get_element_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlRun* mutable_customXml();
        const CT_CustomXmlRun& get_customXml() const;
        bool has_smartTag() const;
        CT_SmartTagRun* mutable_smartTag();
        const CT_SmartTagRun& get_smartTag() const;
        bool has_sdt() const;
        CT_SdtRun* mutable_sdt();
        const CT_SdtRun& get_sdt() const;
        bool has_dir() const;
        CT_DirContentRun* mutable_dir();
        const CT_DirContentRun& get_dir() const;
        bool has_bdo() const;
        CT_BdoContentRun* mutable_bdo();
        const CT_BdoContentRun& get_bdo() const;
        bool has_r() const;
        CT_R* mutable_r();
        const CT_R& get_r() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_fldSimple() const;
        CT_SimpleField* mutable_fldSimple();
        const CT_SimpleField& get_fldSimple() const;
        bool has_hyperlink() const;
        CT_Hyperlink* mutable_hyperlink();
        const CT_Hyperlink& get_hyperlink() const;
        bool has_subDoc() const;
        CT_Rel* mutable_subDoc();
        const CT_Rel& get_subDoc() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlRun* m_customXml;
        bool m_has_smartTag;
        CT_SmartTagRun* m_smartTag;
        bool m_has_sdt;
        CT_SdtRun* m_sdt;
        bool m_has_dir;
        CT_DirContentRun* m_dir;
        bool m_has_bdo;
        CT_BdoContentRun* m_bdo;
        bool m_has_r;
        CT_R* m_r;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_fldSimple;
        CT_SimpleField* m_fldSimple;
        bool m_has_hyperlink;
        CT_Hyperlink* m_hyperlink;
        bool m_has_subDoc;
        CT_Rel* m_subDoc;
    };
    bool m_has_smartTagPr;
    CT_SmartTagPr* m_smartTagPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SmartTagRun* default_instance_;
    bool m_has_uri_attr;
    ns_s::ST_String* m_uri_attr;
    bool m_has_element_attr;
    ns_s::ST_XmlName* m_element_attr;
};

class CT_CustomXmlBlock: public XSD::ComplexType
{
public:
    CT_CustomXmlBlock();
    ~CT_CustomXmlBlock();
    bool has_customXmlPr() const;
    CT_CustomXmlPr* mutable_customXmlPr();
    const CT_CustomXmlPr& get_customXmlPr() const;
    CT_CustomXmlBlock* add_customXml();
    CT_SdtBlock* add_sdt();
    CT_P* add_p();
    CT_Tbl* add_tbl();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CustomXmlBlock& default_instance();
    bool has_uri_attr() const;
    void set_uri_attr(const ns_s::ST_String& _uri_attr);
    const ns_s::ST_String& get_uri_attr() const;
    bool has_element_attr() const;
    void set_element_attr(const ns_s::ST_XmlName& _element_attr);
    const ns_s::ST_XmlName& get_element_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlBlock* mutable_customXml();
        const CT_CustomXmlBlock& get_customXml() const;
        bool has_sdt() const;
        CT_SdtBlock* mutable_sdt();
        const CT_SdtBlock& get_sdt() const;
        bool has_p() const;
        CT_P* mutable_p();
        const CT_P& get_p() const;
        bool has_tbl() const;
        CT_Tbl* mutable_tbl();
        const CT_Tbl& get_tbl() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlBlock* m_customXml;
        bool m_has_sdt;
        CT_SdtBlock* m_sdt;
        bool m_has_p;
        CT_P* m_p;
        bool m_has_tbl;
        CT_Tbl* m_tbl;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
    };
    bool m_has_customXmlPr;
    CT_CustomXmlPr* m_customXmlPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CustomXmlBlock* default_instance_;
    bool m_has_uri_attr;
    ns_s::ST_String* m_uri_attr;
    bool m_has_element_attr;
    ns_s::ST_XmlName* m_element_attr;
};

class CT_CustomXmlPr: public XSD::ComplexType
{
public:
    CT_CustomXmlPr();
    ~CT_CustomXmlPr();
    bool has_placeholder() const;
    CT_String* mutable_placeholder();
    const CT_String& get_placeholder() const;
    CT_Attr* add_attr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CustomXmlPr& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_attr() const;
        CT_Attr* mutable_attr();
        const CT_Attr& get_attr() const;
    protected:
    private:
        bool m_has_attr;
        CT_Attr* m_attr;
    };
    bool m_has_placeholder;
    CT_String* m_placeholder;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CustomXmlPr* default_instance_;
};

class CT_CustomXmlRow: public XSD::ComplexType
{
public:
    CT_CustomXmlRow();
    ~CT_CustomXmlRow();
    bool has_customXmlPr() const;
    CT_CustomXmlPr* mutable_customXmlPr();
    const CT_CustomXmlPr& get_customXmlPr() const;
    CT_Row* add_tr();
    CT_CustomXmlRow* add_customXml();
    CT_SdtRow* add_sdt();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CustomXmlRow& default_instance();
    bool has_uri_attr() const;
    void set_uri_attr(const ns_s::ST_String& _uri_attr);
    const ns_s::ST_String& get_uri_attr() const;
    bool has_element_attr() const;
    void set_element_attr(const ns_s::ST_XmlName& _element_attr);
    const ns_s::ST_XmlName& get_element_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tr() const;
        CT_Row* mutable_tr();
        const CT_Row& get_tr() const;
        bool has_customXml() const;
        CT_CustomXmlRow* mutable_customXml();
        const CT_CustomXmlRow& get_customXml() const;
        bool has_sdt() const;
        CT_SdtRow* mutable_sdt();
        const CT_SdtRow& get_sdt() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
    protected:
    private:
        bool m_has_tr;
        CT_Row* m_tr;
        bool m_has_customXml;
        CT_CustomXmlRow* m_customXml;
        bool m_has_sdt;
        CT_SdtRow* m_sdt;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
    };
    bool m_has_customXmlPr;
    CT_CustomXmlPr* m_customXmlPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CustomXmlRow* default_instance_;
    bool m_has_uri_attr;
    ns_s::ST_String* m_uri_attr;
    bool m_has_element_attr;
    ns_s::ST_XmlName* m_element_attr;
};

class CT_CustomXmlCell: public XSD::ComplexType
{
public:
    CT_CustomXmlCell();
    ~CT_CustomXmlCell();
    bool has_customXmlPr() const;
    CT_CustomXmlPr* mutable_customXmlPr();
    const CT_CustomXmlPr& get_customXmlPr() const;
    CT_Tc* add_tc();
    CT_CustomXmlCell* add_customXml();
    CT_SdtCell* add_sdt();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CustomXmlCell& default_instance();
    bool has_uri_attr() const;
    void set_uri_attr(const ns_s::ST_String& _uri_attr);
    const ns_s::ST_String& get_uri_attr() const;
    bool has_element_attr() const;
    void set_element_attr(const ns_s::ST_XmlName& _element_attr);
    const ns_s::ST_XmlName& get_element_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tc() const;
        CT_Tc* mutable_tc();
        const CT_Tc& get_tc() const;
        bool has_customXml() const;
        CT_CustomXmlCell* mutable_customXml();
        const CT_CustomXmlCell& get_customXml() const;
        bool has_sdt() const;
        CT_SdtCell* mutable_sdt();
        const CT_SdtCell& get_sdt() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
    protected:
    private:
        bool m_has_tc;
        CT_Tc* m_tc;
        bool m_has_customXml;
        CT_CustomXmlCell* m_customXml;
        bool m_has_sdt;
        CT_SdtCell* m_sdt;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
    };
    bool m_has_customXmlPr;
    CT_CustomXmlPr* m_customXmlPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_CustomXmlCell* default_instance_;
    bool m_has_uri_attr;
    ns_s::ST_String* m_uri_attr;
    bool m_has_element_attr;
    ns_s::ST_XmlName* m_element_attr;
};

class CT_SmartTagPr: public XSD::ComplexType
{
public:
    CT_SmartTagPr();
    ~CT_SmartTagPr();
    CT_Attr* add_attr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SmartTagPr& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_attr() const;
        CT_Attr* mutable_attr();
        const CT_Attr& get_attr() const;
    protected:
    private:
        bool m_has_attr;
        CT_Attr* m_attr;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_SmartTagPr* default_instance_;
};

class CT_P: public XSD::ComplexType
{
public:
    CT_P();
    ~CT_P();
    bool has_pPr() const;
    CT_PPr* mutable_pPr();
    const CT_PPr& get_pPr() const;
    CT_CustomXmlRun* add_customXml();
    CT_SmartTagRun* add_smartTag();
    CT_SdtRun* add_sdt();
    CT_DirContentRun* add_dir();
    CT_BdoContentRun* add_bdo();
    CT_R* add_r();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    CT_SimpleField* add_fldSimple();
    CT_Hyperlink* add_hyperlink();
    CT_Rel* add_subDoc();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_P& default_instance();
    bool has_rsidRPr_attr() const;
    void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr);
    const ST_LongHexNumber& get_rsidRPr_attr() const;
    bool has_rsidR_attr() const;
    void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr);
    const ST_LongHexNumber& get_rsidR_attr() const;
    bool has_rsidDel_attr() const;
    void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr);
    const ST_LongHexNumber& get_rsidDel_attr() const;
    bool has_rsidP_attr() const;
    void set_rsidP_attr(const ST_LongHexNumber& _rsidP_attr);
    const ST_LongHexNumber& get_rsidP_attr() const;
    bool has_rsidRDefault_attr() const;
    void set_rsidRDefault_attr(const ST_LongHexNumber& _rsidRDefault_attr);
    const ST_LongHexNumber& get_rsidRDefault_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlRun* mutable_customXml();
        const CT_CustomXmlRun& get_customXml() const;
        bool has_smartTag() const;
        CT_SmartTagRun* mutable_smartTag();
        const CT_SmartTagRun& get_smartTag() const;
        bool has_sdt() const;
        CT_SdtRun* mutable_sdt();
        const CT_SdtRun& get_sdt() const;
        bool has_dir() const;
        CT_DirContentRun* mutable_dir();
        const CT_DirContentRun& get_dir() const;
        bool has_bdo() const;
        CT_BdoContentRun* mutable_bdo();
        const CT_BdoContentRun& get_bdo() const;
        bool has_r() const;
        CT_R* mutable_r();
        const CT_R& get_r() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_fldSimple() const;
        CT_SimpleField* mutable_fldSimple();
        const CT_SimpleField& get_fldSimple() const;
        bool has_hyperlink() const;
        CT_Hyperlink* mutable_hyperlink();
        const CT_Hyperlink& get_hyperlink() const;
        bool has_subDoc() const;
        CT_Rel* mutable_subDoc();
        const CT_Rel& get_subDoc() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlRun* m_customXml;
        bool m_has_smartTag;
        CT_SmartTagRun* m_smartTag;
        bool m_has_sdt;
        CT_SdtRun* m_sdt;
        bool m_has_dir;
        CT_DirContentRun* m_dir;
        bool m_has_bdo;
        CT_BdoContentRun* m_bdo;
        bool m_has_r;
        CT_R* m_r;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_fldSimple;
        CT_SimpleField* m_fldSimple;
        bool m_has_hyperlink;
        CT_Hyperlink* m_hyperlink;
        bool m_has_subDoc;
        CT_Rel* m_subDoc;
    };
    bool m_has_pPr;
    CT_PPr* m_pPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_P* default_instance_;
    bool m_has_rsidRPr_attr;
    ST_LongHexNumber* m_rsidRPr_attr;
    bool m_has_rsidR_attr;
    ST_LongHexNumber* m_rsidR_attr;
    bool m_has_rsidDel_attr;
    ST_LongHexNumber* m_rsidDel_attr;
    bool m_has_rsidP_attr;
    ST_LongHexNumber* m_rsidP_attr;
    bool m_has_rsidRDefault_attr;
    ST_LongHexNumber* m_rsidRDefault_attr;
};

class CT_Height: public XSD::ComplexType
{
public:
    CT_Height();
    ~CT_Height();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Height& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_TwipsMeasure& _val_attr);
    const ns_s::ST_TwipsMeasure& get_val_attr() const;
    bool has_hRule_attr() const;
    void set_hRule_attr(const ST_HeightRule& _hRule_attr);
    const ST_HeightRule& get_hRule_attr() const;
protected:
private:
    static CT_Height* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_TwipsMeasure* m_val_attr;
    bool m_has_hRule_attr;
    ST_HeightRule* m_hRule_attr;
};

class CT_TblWidth: public XSD::ComplexType
{
public:
    CT_TblWidth();
    ~CT_TblWidth();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblWidth& default_instance();
    bool has_w_attr() const;
    void set_w_attr(const ST_MeasurementOrPercent& _w_attr);
    const ST_MeasurementOrPercent& get_w_attr() const;
    bool has_type_attr() const;
    void set_type_attr(const ST_TblWidth& _type_attr);
    const ST_TblWidth& get_type_attr() const;
protected:
private:
    static CT_TblWidth* default_instance_;
    bool m_has_w_attr;
    ST_MeasurementOrPercent* m_w_attr;
    bool m_has_type_attr;
    ST_TblWidth* m_type_attr;
};

class CT_TblGridCol: public XSD::ComplexType
{
public:
    CT_TblGridCol();
    ~CT_TblGridCol();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblGridCol& default_instance();
    bool has_w_attr() const;
    void set_w_attr(const ns_s::ST_TwipsMeasure& _w_attr);
    const ns_s::ST_TwipsMeasure& get_w_attr() const;
protected:
private:
    static CT_TblGridCol* default_instance_;
    bool m_has_w_attr;
    ns_s::ST_TwipsMeasure* m_w_attr;
};

class CT_TblGridBase: public XSD::ComplexType
{
public:
    CT_TblGridBase();
    ~CT_TblGridBase();
    CT_TblGridCol* add_gridCol();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblGridBase& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_gridCol() const;
        CT_TblGridCol* mutable_gridCol();
        const CT_TblGridCol& get_gridCol() const;
    protected:
    private:
        bool m_has_gridCol;
        CT_TblGridCol* m_gridCol;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_TblGridBase* default_instance_;
};

class CT_TblGrid: public XSD::ComplexType
{
public:
    CT_TblGrid();
    ~CT_TblGrid();
    CT_TblGridCol* add_gridCol();
    bool has_tblGridChange() const;
    CT_TblGridChange* mutable_tblGridChange();
    const CT_TblGridChange& get_tblGridChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblGrid& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_gridCol() const;
        CT_TblGridCol* mutable_gridCol();
        const CT_TblGridCol& get_gridCol() const;
    protected:
    private:
        bool m_has_gridCol;
        CT_TblGridCol* m_gridCol;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_tblGridChange;
    CT_TblGridChange* m_tblGridChange;
    static CT_TblGrid* default_instance_;
};

class CT_TcBorders: public XSD::ComplexType
{
public:
    CT_TcBorders();
    ~CT_TcBorders();
    bool has_top() const;
    CT_Border* mutable_top();
    const CT_Border& get_top() const;
    bool has_start() const;
    CT_Border* mutable_start();
    const CT_Border& get_start() const;
    bool has_left() const;
    CT_Border* mutable_left();
    const CT_Border& get_left() const;
    bool has_bottom() const;
    CT_Border* mutable_bottom();
    const CT_Border& get_bottom() const;
    bool has_end() const;
    CT_Border* mutable_end();
    const CT_Border& get_end() const;
    bool has_right() const;
    CT_Border* mutable_right();
    const CT_Border& get_right() const;
    bool has_insideH() const;
    CT_Border* mutable_insideH();
    const CT_Border& get_insideH() const;
    bool has_insideV() const;
    CT_Border* mutable_insideV();
    const CT_Border& get_insideV() const;
    bool has_tl2br() const;
    CT_Border* mutable_tl2br();
    const CT_Border& get_tl2br() const;
    bool has_tr2bl() const;
    CT_Border* mutable_tr2bl();
    const CT_Border& get_tr2bl() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TcBorders& default_instance();
protected:
private:
    bool m_has_top;
    CT_Border* m_top;
    bool m_has_start;
    CT_Border* m_start;
    bool m_has_left;
    CT_Border* m_left;
    bool m_has_bottom;
    CT_Border* m_bottom;
    bool m_has_end;
    CT_Border* m_end;
    bool m_has_right;
    CT_Border* m_right;
    bool m_has_insideH;
    CT_Border* m_insideH;
    bool m_has_insideV;
    CT_Border* m_insideV;
    bool m_has_tl2br;
    CT_Border* m_tl2br;
    bool m_has_tr2bl;
    CT_Border* m_tr2bl;
    static CT_TcBorders* default_instance_;
};

class CT_TcMar: public XSD::ComplexType
{
public:
    CT_TcMar();
    ~CT_TcMar();
    bool has_top() const;
    CT_TblWidth* mutable_top();
    const CT_TblWidth& get_top() const;
    bool has_start() const;
    CT_TblWidth* mutable_start();
    const CT_TblWidth& get_start() const;
    bool has_left() const;
    CT_TblWidth* mutable_left();
    const CT_TblWidth& get_left() const;
    bool has_bottom() const;
    CT_TblWidth* mutable_bottom();
    const CT_TblWidth& get_bottom() const;
    bool has_end() const;
    CT_TblWidth* mutable_end();
    const CT_TblWidth& get_end() const;
    bool has_right() const;
    CT_TblWidth* mutable_right();
    const CT_TblWidth& get_right() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TcMar& default_instance();
protected:
private:
    bool m_has_top;
    CT_TblWidth* m_top;
    bool m_has_start;
    CT_TblWidth* m_start;
    bool m_has_left;
    CT_TblWidth* m_left;
    bool m_has_bottom;
    CT_TblWidth* m_bottom;
    bool m_has_end;
    CT_TblWidth* m_end;
    bool m_has_right;
    CT_TblWidth* m_right;
    static CT_TcMar* default_instance_;
};

class CT_VMerge: public XSD::ComplexType
{
public:
    CT_VMerge();
    ~CT_VMerge();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_VMerge& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Merge& _val_attr);
    const ST_Merge& get_val_attr() const;
protected:
private:
    static CT_VMerge* default_instance_;
    bool m_has_val_attr;
    ST_Merge* m_val_attr;
};

class CT_HMerge: public XSD::ComplexType
{
public:
    CT_HMerge();
    ~CT_HMerge();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_HMerge& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Merge& _val_attr);
    const ST_Merge& get_val_attr() const;
protected:
private:
    static CT_HMerge* default_instance_;
    bool m_has_val_attr;
    ST_Merge* m_val_attr;
};

class CT_TcPrBase: public XSD::ComplexType
{
public:
    CT_TcPrBase();
    ~CT_TcPrBase();
    bool has_cnfStyle() const;
    CT_Cnf* mutable_cnfStyle();
    const CT_Cnf& get_cnfStyle() const;
    bool has_tcW() const;
    CT_TblWidth* mutable_tcW();
    const CT_TblWidth& get_tcW() const;
    bool has_gridSpan() const;
    CT_DecimalNumber* mutable_gridSpan();
    const CT_DecimalNumber& get_gridSpan() const;
    bool has_hMerge() const;
    CT_HMerge* mutable_hMerge();
    const CT_HMerge& get_hMerge() const;
    bool has_vMerge() const;
    CT_VMerge* mutable_vMerge();
    const CT_VMerge& get_vMerge() const;
    bool has_tcBorders() const;
    CT_TcBorders* mutable_tcBorders();
    const CT_TcBorders& get_tcBorders() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_noWrap() const;
    CT_OnOff* mutable_noWrap();
    const CT_OnOff& get_noWrap() const;
    bool has_tcMar() const;
    CT_TcMar* mutable_tcMar();
    const CT_TcMar& get_tcMar() const;
    bool has_textDirection() const;
    CT_TextDirection* mutable_textDirection();
    const CT_TextDirection& get_textDirection() const;
    bool has_tcFitText() const;
    CT_OnOff* mutable_tcFitText();
    const CT_OnOff& get_tcFitText() const;
    bool has_vAlign() const;
    CT_VerticalJc* mutable_vAlign();
    const CT_VerticalJc& get_vAlign() const;
    bool has_hideMark() const;
    CT_OnOff* mutable_hideMark();
    const CT_OnOff& get_hideMark() const;
    bool has_headers() const;
    CT_Headers* mutable_headers();
    const CT_Headers& get_headers() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TcPrBase& default_instance();
protected:
private:
    bool m_has_cnfStyle;
    CT_Cnf* m_cnfStyle;
    bool m_has_tcW;
    CT_TblWidth* m_tcW;
    bool m_has_gridSpan;
    CT_DecimalNumber* m_gridSpan;
    bool m_has_hMerge;
    CT_HMerge* m_hMerge;
    bool m_has_vMerge;
    CT_VMerge* m_vMerge;
    bool m_has_tcBorders;
    CT_TcBorders* m_tcBorders;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_noWrap;
    CT_OnOff* m_noWrap;
    bool m_has_tcMar;
    CT_TcMar* m_tcMar;
    bool m_has_textDirection;
    CT_TextDirection* m_textDirection;
    bool m_has_tcFitText;
    CT_OnOff* m_tcFitText;
    bool m_has_vAlign;
    CT_VerticalJc* m_vAlign;
    bool m_has_hideMark;
    CT_OnOff* m_hideMark;
    bool m_has_headers;
    CT_Headers* m_headers;
    static CT_TcPrBase* default_instance_;
};

class CT_TcPr: public XSD::ComplexType
{
public:
    CT_TcPr();
    ~CT_TcPr();
    bool has_cnfStyle() const;
    CT_Cnf* mutable_cnfStyle();
    const CT_Cnf& get_cnfStyle() const;
    bool has_tcW() const;
    CT_TblWidth* mutable_tcW();
    const CT_TblWidth& get_tcW() const;
    bool has_gridSpan() const;
    CT_DecimalNumber* mutable_gridSpan();
    const CT_DecimalNumber& get_gridSpan() const;
    bool has_hMerge() const;
    CT_HMerge* mutable_hMerge();
    const CT_HMerge& get_hMerge() const;
    bool has_vMerge() const;
    CT_VMerge* mutable_vMerge();
    const CT_VMerge& get_vMerge() const;
    bool has_tcBorders() const;
    CT_TcBorders* mutable_tcBorders();
    const CT_TcBorders& get_tcBorders() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_noWrap() const;
    CT_OnOff* mutable_noWrap();
    const CT_OnOff& get_noWrap() const;
    bool has_tcMar() const;
    CT_TcMar* mutable_tcMar();
    const CT_TcMar& get_tcMar() const;
    bool has_textDirection() const;
    CT_TextDirection* mutable_textDirection();
    const CT_TextDirection& get_textDirection() const;
    bool has_tcFitText() const;
    CT_OnOff* mutable_tcFitText();
    const CT_OnOff& get_tcFitText() const;
    bool has_vAlign() const;
    CT_VerticalJc* mutable_vAlign();
    const CT_VerticalJc& get_vAlign() const;
    bool has_hideMark() const;
    CT_OnOff* mutable_hideMark();
    const CT_OnOff& get_hideMark() const;
    bool has_headers() const;
    CT_Headers* mutable_headers();
    const CT_Headers& get_headers() const;
    bool has_cellIns() const;
    CT_TrackChange* mutable_cellIns();
    const CT_TrackChange& get_cellIns() const;
    bool has_cellDel() const;
    CT_TrackChange* mutable_cellDel();
    const CT_TrackChange& get_cellDel() const;
    bool has_cellMerge() const;
    CT_CellMergeTrackChange* mutable_cellMerge();
    const CT_CellMergeTrackChange& get_cellMerge() const;
    bool has_tcPrChange() const;
    CT_TcPrChange* mutable_tcPrChange();
    const CT_TcPrChange& get_tcPrChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TcPr& default_instance();
protected:
private:
    bool m_has_cnfStyle;
    CT_Cnf* m_cnfStyle;
    bool m_has_tcW;
    CT_TblWidth* m_tcW;
    bool m_has_gridSpan;
    CT_DecimalNumber* m_gridSpan;
    bool m_has_hMerge;
    CT_HMerge* m_hMerge;
    bool m_has_vMerge;
    CT_VMerge* m_vMerge;
    bool m_has_tcBorders;
    CT_TcBorders* m_tcBorders;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_noWrap;
    CT_OnOff* m_noWrap;
    bool m_has_tcMar;
    CT_TcMar* m_tcMar;
    bool m_has_textDirection;
    CT_TextDirection* m_textDirection;
    bool m_has_tcFitText;
    CT_OnOff* m_tcFitText;
    bool m_has_vAlign;
    CT_VerticalJc* m_vAlign;
    bool m_has_hideMark;
    CT_OnOff* m_hideMark;
    bool m_has_headers;
    CT_Headers* m_headers;
    bool m_has_cellIns;
    CT_TrackChange* m_cellIns;
    bool m_has_cellDel;
    CT_TrackChange* m_cellDel;
    bool m_has_cellMerge;
    CT_CellMergeTrackChange* m_cellMerge;
    bool m_has_tcPrChange;
    CT_TcPrChange* m_tcPrChange;
    static CT_TcPr* default_instance_;
};

class CT_TcPrInner: public XSD::ComplexType
{
public:
    CT_TcPrInner();
    ~CT_TcPrInner();
    bool has_cnfStyle() const;
    CT_Cnf* mutable_cnfStyle();
    const CT_Cnf& get_cnfStyle() const;
    bool has_tcW() const;
    CT_TblWidth* mutable_tcW();
    const CT_TblWidth& get_tcW() const;
    bool has_gridSpan() const;
    CT_DecimalNumber* mutable_gridSpan();
    const CT_DecimalNumber& get_gridSpan() const;
    bool has_hMerge() const;
    CT_HMerge* mutable_hMerge();
    const CT_HMerge& get_hMerge() const;
    bool has_vMerge() const;
    CT_VMerge* mutable_vMerge();
    const CT_VMerge& get_vMerge() const;
    bool has_tcBorders() const;
    CT_TcBorders* mutable_tcBorders();
    const CT_TcBorders& get_tcBorders() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_noWrap() const;
    CT_OnOff* mutable_noWrap();
    const CT_OnOff& get_noWrap() const;
    bool has_tcMar() const;
    CT_TcMar* mutable_tcMar();
    const CT_TcMar& get_tcMar() const;
    bool has_textDirection() const;
    CT_TextDirection* mutable_textDirection();
    const CT_TextDirection& get_textDirection() const;
    bool has_tcFitText() const;
    CT_OnOff* mutable_tcFitText();
    const CT_OnOff& get_tcFitText() const;
    bool has_vAlign() const;
    CT_VerticalJc* mutable_vAlign();
    const CT_VerticalJc& get_vAlign() const;
    bool has_hideMark() const;
    CT_OnOff* mutable_hideMark();
    const CT_OnOff& get_hideMark() const;
    bool has_headers() const;
    CT_Headers* mutable_headers();
    const CT_Headers& get_headers() const;
    bool has_cellIns() const;
    CT_TrackChange* mutable_cellIns();
    const CT_TrackChange& get_cellIns() const;
    bool has_cellDel() const;
    CT_TrackChange* mutable_cellDel();
    const CT_TrackChange& get_cellDel() const;
    bool has_cellMerge() const;
    CT_CellMergeTrackChange* mutable_cellMerge();
    const CT_CellMergeTrackChange& get_cellMerge() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TcPrInner& default_instance();
protected:
private:
    bool m_has_cnfStyle;
    CT_Cnf* m_cnfStyle;
    bool m_has_tcW;
    CT_TblWidth* m_tcW;
    bool m_has_gridSpan;
    CT_DecimalNumber* m_gridSpan;
    bool m_has_hMerge;
    CT_HMerge* m_hMerge;
    bool m_has_vMerge;
    CT_VMerge* m_vMerge;
    bool m_has_tcBorders;
    CT_TcBorders* m_tcBorders;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_noWrap;
    CT_OnOff* m_noWrap;
    bool m_has_tcMar;
    CT_TcMar* m_tcMar;
    bool m_has_textDirection;
    CT_TextDirection* m_textDirection;
    bool m_has_tcFitText;
    CT_OnOff* m_tcFitText;
    bool m_has_vAlign;
    CT_VerticalJc* m_vAlign;
    bool m_has_hideMark;
    CT_OnOff* m_hideMark;
    bool m_has_headers;
    CT_Headers* m_headers;
    bool m_has_cellIns;
    CT_TrackChange* m_cellIns;
    bool m_has_cellDel;
    CT_TrackChange* m_cellDel;
    bool m_has_cellMerge;
    CT_CellMergeTrackChange* m_cellMerge;
    static CT_TcPrInner* default_instance_;
};

class CT_Tc: public XSD::ComplexType
{
public:
    CT_Tc();
    ~CT_Tc();
    bool has_tcPr() const;
    CT_TcPr* mutable_tcPr();
    const CT_TcPr& get_tcPr() const;
    CT_CustomXmlBlock* add_customXml();
    CT_SdtBlock* add_sdt();
    CT_P* add_p();
    CT_Tbl* add_tbl();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    CT_AltChunk* add_altChunk();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Tc& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ns_s::ST_String& _id_attr);
    const ns_s::ST_String& get_id_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlBlock* mutable_customXml();
        const CT_CustomXmlBlock& get_customXml() const;
        bool has_sdt() const;
        CT_SdtBlock* mutable_sdt();
        const CT_SdtBlock& get_sdt() const;
        bool has_p() const;
        CT_P* mutable_p();
        const CT_P& get_p() const;
        bool has_tbl() const;
        CT_Tbl* mutable_tbl();
        const CT_Tbl& get_tbl() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_altChunk() const;
        CT_AltChunk* mutable_altChunk();
        const CT_AltChunk& get_altChunk() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlBlock* m_customXml;
        bool m_has_sdt;
        CT_SdtBlock* m_sdt;
        bool m_has_p;
        CT_P* m_p;
        bool m_has_tbl;
        CT_Tbl* m_tbl;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_altChunk;
        CT_AltChunk* m_altChunk;
    };
    bool m_has_tcPr;
    CT_TcPr* m_tcPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Tc* default_instance_;
    bool m_has_id_attr;
    ns_s::ST_String* m_id_attr;
};

class CT_Cnf: public XSD::ComplexType
{
public:
    CT_Cnf();
    ~CT_Cnf();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Cnf& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Cnf& _val_attr);
    const ST_Cnf& get_val_attr() const;
    bool has_firstRow_attr() const;
    void set_firstRow_attr(const ns_s::ST_OnOff& _firstRow_attr);
    const ns_s::ST_OnOff& get_firstRow_attr() const;
    bool has_lastRow_attr() const;
    void set_lastRow_attr(const ns_s::ST_OnOff& _lastRow_attr);
    const ns_s::ST_OnOff& get_lastRow_attr() const;
    bool has_firstColumn_attr() const;
    void set_firstColumn_attr(const ns_s::ST_OnOff& _firstColumn_attr);
    const ns_s::ST_OnOff& get_firstColumn_attr() const;
    bool has_lastColumn_attr() const;
    void set_lastColumn_attr(const ns_s::ST_OnOff& _lastColumn_attr);
    const ns_s::ST_OnOff& get_lastColumn_attr() const;
    bool has_oddVBand_attr() const;
    void set_oddVBand_attr(const ns_s::ST_OnOff& _oddVBand_attr);
    const ns_s::ST_OnOff& get_oddVBand_attr() const;
    bool has_evenVBand_attr() const;
    void set_evenVBand_attr(const ns_s::ST_OnOff& _evenVBand_attr);
    const ns_s::ST_OnOff& get_evenVBand_attr() const;
    bool has_oddHBand_attr() const;
    void set_oddHBand_attr(const ns_s::ST_OnOff& _oddHBand_attr);
    const ns_s::ST_OnOff& get_oddHBand_attr() const;
    bool has_evenHBand_attr() const;
    void set_evenHBand_attr(const ns_s::ST_OnOff& _evenHBand_attr);
    const ns_s::ST_OnOff& get_evenHBand_attr() const;
    bool has_firstRowFirstColumn_attr() const;
    void set_firstRowFirstColumn_attr(const ns_s::ST_OnOff& _firstRowFirstColumn_attr);
    const ns_s::ST_OnOff& get_firstRowFirstColumn_attr() const;
    bool has_firstRowLastColumn_attr() const;
    void set_firstRowLastColumn_attr(const ns_s::ST_OnOff& _firstRowLastColumn_attr);
    const ns_s::ST_OnOff& get_firstRowLastColumn_attr() const;
    bool has_lastRowFirstColumn_attr() const;
    void set_lastRowFirstColumn_attr(const ns_s::ST_OnOff& _lastRowFirstColumn_attr);
    const ns_s::ST_OnOff& get_lastRowFirstColumn_attr() const;
    bool has_lastRowLastColumn_attr() const;
    void set_lastRowLastColumn_attr(const ns_s::ST_OnOff& _lastRowLastColumn_attr);
    const ns_s::ST_OnOff& get_lastRowLastColumn_attr() const;
protected:
private:
    static CT_Cnf* default_instance_;
    bool m_has_val_attr;
    ST_Cnf* m_val_attr;
    bool m_has_firstRow_attr;
    ns_s::ST_OnOff* m_firstRow_attr;
    bool m_has_lastRow_attr;
    ns_s::ST_OnOff* m_lastRow_attr;
    bool m_has_firstColumn_attr;
    ns_s::ST_OnOff* m_firstColumn_attr;
    bool m_has_lastColumn_attr;
    ns_s::ST_OnOff* m_lastColumn_attr;
    bool m_has_oddVBand_attr;
    ns_s::ST_OnOff* m_oddVBand_attr;
    bool m_has_evenVBand_attr;
    ns_s::ST_OnOff* m_evenVBand_attr;
    bool m_has_oddHBand_attr;
    ns_s::ST_OnOff* m_oddHBand_attr;
    bool m_has_evenHBand_attr;
    ns_s::ST_OnOff* m_evenHBand_attr;
    bool m_has_firstRowFirstColumn_attr;
    ns_s::ST_OnOff* m_firstRowFirstColumn_attr;
    bool m_has_firstRowLastColumn_attr;
    ns_s::ST_OnOff* m_firstRowLastColumn_attr;
    bool m_has_lastRowFirstColumn_attr;
    ns_s::ST_OnOff* m_lastRowFirstColumn_attr;
    bool m_has_lastRowLastColumn_attr;
    ns_s::ST_OnOff* m_lastRowLastColumn_attr;
};

class CT_Headers: public XSD::ComplexType
{
public:
    CT_Headers();
    ~CT_Headers();
    CT_String* add_header();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Headers& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_header() const;
        CT_String* mutable_header();
        const CT_String& get_header() const;
    protected:
    private:
        bool m_has_header;
        CT_String* m_header;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Headers* default_instance_;
};

class CT_TrPrBase: public XSD::ComplexType
{
public:
    CT_TrPrBase();
    ~CT_TrPrBase();
    CT_Cnf* add_cnfStyle();
    CT_DecimalNumber* add_divId();
    CT_DecimalNumber* add_gridBefore();
    CT_DecimalNumber* add_gridAfter();
    CT_TblWidth* add_wBefore();
    CT_TblWidth* add_wAfter();
    CT_OnOff* add_cantSplit();
    CT_Height* add_trHeight();
    CT_OnOff* add_tblHeader();
    CT_TblWidth* add_tblCellSpacing();
    CT_JcTable* add_jc();
    CT_OnOff* add_hidden();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TrPrBase& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_cnfStyle() const;
        CT_Cnf* mutable_cnfStyle();
        const CT_Cnf& get_cnfStyle() const;
        bool has_divId() const;
        CT_DecimalNumber* mutable_divId();
        const CT_DecimalNumber& get_divId() const;
        bool has_gridBefore() const;
        CT_DecimalNumber* mutable_gridBefore();
        const CT_DecimalNumber& get_gridBefore() const;
        bool has_gridAfter() const;
        CT_DecimalNumber* mutable_gridAfter();
        const CT_DecimalNumber& get_gridAfter() const;
        bool has_wBefore() const;
        CT_TblWidth* mutable_wBefore();
        const CT_TblWidth& get_wBefore() const;
        bool has_wAfter() const;
        CT_TblWidth* mutable_wAfter();
        const CT_TblWidth& get_wAfter() const;
        bool has_cantSplit() const;
        CT_OnOff* mutable_cantSplit();
        const CT_OnOff& get_cantSplit() const;
        bool has_trHeight() const;
        CT_Height* mutable_trHeight();
        const CT_Height& get_trHeight() const;
        bool has_tblHeader() const;
        CT_OnOff* mutable_tblHeader();
        const CT_OnOff& get_tblHeader() const;
        bool has_tblCellSpacing() const;
        CT_TblWidth* mutable_tblCellSpacing();
        const CT_TblWidth& get_tblCellSpacing() const;
        bool has_jc() const;
        CT_JcTable* mutable_jc();
        const CT_JcTable& get_jc() const;
        bool has_hidden() const;
        CT_OnOff* mutable_hidden();
        const CT_OnOff& get_hidden() const;
    protected:
    private:
        bool m_has_cnfStyle;
        CT_Cnf* m_cnfStyle;
        bool m_has_divId;
        CT_DecimalNumber* m_divId;
        bool m_has_gridBefore;
        CT_DecimalNumber* m_gridBefore;
        bool m_has_gridAfter;
        CT_DecimalNumber* m_gridAfter;
        bool m_has_wBefore;
        CT_TblWidth* m_wBefore;
        bool m_has_wAfter;
        CT_TblWidth* m_wAfter;
        bool m_has_cantSplit;
        CT_OnOff* m_cantSplit;
        bool m_has_trHeight;
        CT_Height* m_trHeight;
        bool m_has_tblHeader;
        CT_OnOff* m_tblHeader;
        bool m_has_tblCellSpacing;
        CT_TblWidth* m_tblCellSpacing;
        bool m_has_jc;
        CT_JcTable* m_jc;
        bool m_has_hidden;
        CT_OnOff* m_hidden;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_TrPrBase* default_instance_;
};

class CT_TrPr: public XSD::ComplexType
{
public:
    CT_TrPr();
    ~CT_TrPr();
    CT_Cnf* add_cnfStyle();
    CT_DecimalNumber* add_divId();
    CT_DecimalNumber* add_gridBefore();
    CT_DecimalNumber* add_gridAfter();
    CT_TblWidth* add_wBefore();
    CT_TblWidth* add_wAfter();
    CT_OnOff* add_cantSplit();
    CT_Height* add_trHeight();
    CT_OnOff* add_tblHeader();
    CT_TblWidth* add_tblCellSpacing();
    CT_JcTable* add_jc();
    CT_OnOff* add_hidden();
    bool has_ins() const;
    CT_TrackChange* mutable_ins();
    const CT_TrackChange& get_ins() const;
    bool has_del() const;
    CT_TrackChange* mutable_del();
    const CT_TrackChange& get_del() const;
    bool has_trPrChange() const;
    CT_TrPrChange* mutable_trPrChange();
    const CT_TrPrChange& get_trPrChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TrPr& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_cnfStyle() const;
        CT_Cnf* mutable_cnfStyle();
        const CT_Cnf& get_cnfStyle() const;
        bool has_divId() const;
        CT_DecimalNumber* mutable_divId();
        const CT_DecimalNumber& get_divId() const;
        bool has_gridBefore() const;
        CT_DecimalNumber* mutable_gridBefore();
        const CT_DecimalNumber& get_gridBefore() const;
        bool has_gridAfter() const;
        CT_DecimalNumber* mutable_gridAfter();
        const CT_DecimalNumber& get_gridAfter() const;
        bool has_wBefore() const;
        CT_TblWidth* mutable_wBefore();
        const CT_TblWidth& get_wBefore() const;
        bool has_wAfter() const;
        CT_TblWidth* mutable_wAfter();
        const CT_TblWidth& get_wAfter() const;
        bool has_cantSplit() const;
        CT_OnOff* mutable_cantSplit();
        const CT_OnOff& get_cantSplit() const;
        bool has_trHeight() const;
        CT_Height* mutable_trHeight();
        const CT_Height& get_trHeight() const;
        bool has_tblHeader() const;
        CT_OnOff* mutable_tblHeader();
        const CT_OnOff& get_tblHeader() const;
        bool has_tblCellSpacing() const;
        CT_TblWidth* mutable_tblCellSpacing();
        const CT_TblWidth& get_tblCellSpacing() const;
        bool has_jc() const;
        CT_JcTable* mutable_jc();
        const CT_JcTable& get_jc() const;
        bool has_hidden() const;
        CT_OnOff* mutable_hidden();
        const CT_OnOff& get_hidden() const;
    protected:
    private:
        bool m_has_cnfStyle;
        CT_Cnf* m_cnfStyle;
        bool m_has_divId;
        CT_DecimalNumber* m_divId;
        bool m_has_gridBefore;
        CT_DecimalNumber* m_gridBefore;
        bool m_has_gridAfter;
        CT_DecimalNumber* m_gridAfter;
        bool m_has_wBefore;
        CT_TblWidth* m_wBefore;
        bool m_has_wAfter;
        CT_TblWidth* m_wAfter;
        bool m_has_cantSplit;
        CT_OnOff* m_cantSplit;
        bool m_has_trHeight;
        CT_Height* m_trHeight;
        bool m_has_tblHeader;
        CT_OnOff* m_tblHeader;
        bool m_has_tblCellSpacing;
        CT_TblWidth* m_tblCellSpacing;
        bool m_has_jc;
        CT_JcTable* m_jc;
        bool m_has_hidden;
        CT_OnOff* m_hidden;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_ins;
    CT_TrackChange* m_ins;
    bool m_has_del;
    CT_TrackChange* m_del;
    bool m_has_trPrChange;
    CT_TrPrChange* m_trPrChange;
    static CT_TrPr* default_instance_;
};

class CT_Row: public XSD::ComplexType
{
public:
    CT_Row();
    ~CT_Row();
    bool has_tblPrEx() const;
    CT_TblPrEx* mutable_tblPrEx();
    const CT_TblPrEx& get_tblPrEx() const;
    bool has_trPr() const;
    CT_TrPr* mutable_trPr();
    const CT_TrPr& get_trPr() const;
    CT_Tc* add_tc();
    CT_CustomXmlCell* add_customXml();
    CT_SdtCell* add_sdt();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Row& default_instance();
    bool has_rsidRPr_attr() const;
    void set_rsidRPr_attr(const ST_LongHexNumber& _rsidRPr_attr);
    const ST_LongHexNumber& get_rsidRPr_attr() const;
    bool has_rsidR_attr() const;
    void set_rsidR_attr(const ST_LongHexNumber& _rsidR_attr);
    const ST_LongHexNumber& get_rsidR_attr() const;
    bool has_rsidDel_attr() const;
    void set_rsidDel_attr(const ST_LongHexNumber& _rsidDel_attr);
    const ST_LongHexNumber& get_rsidDel_attr() const;
    bool has_rsidTr_attr() const;
    void set_rsidTr_attr(const ST_LongHexNumber& _rsidTr_attr);
    const ST_LongHexNumber& get_rsidTr_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tc() const;
        CT_Tc* mutable_tc();
        const CT_Tc& get_tc() const;
        bool has_customXml() const;
        CT_CustomXmlCell* mutable_customXml();
        const CT_CustomXmlCell& get_customXml() const;
        bool has_sdt() const;
        CT_SdtCell* mutable_sdt();
        const CT_SdtCell& get_sdt() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
    protected:
    private:
        bool m_has_tc;
        CT_Tc* m_tc;
        bool m_has_customXml;
        CT_CustomXmlCell* m_customXml;
        bool m_has_sdt;
        CT_SdtCell* m_sdt;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
    };
    bool m_has_tblPrEx;
    CT_TblPrEx* m_tblPrEx;
    bool m_has_trPr;
    CT_TrPr* m_trPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Row* default_instance_;
    bool m_has_rsidRPr_attr;
    ST_LongHexNumber* m_rsidRPr_attr;
    bool m_has_rsidR_attr;
    ST_LongHexNumber* m_rsidR_attr;
    bool m_has_rsidDel_attr;
    ST_LongHexNumber* m_rsidDel_attr;
    bool m_has_rsidTr_attr;
    ST_LongHexNumber* m_rsidTr_attr;
};

class CT_TblLayoutType: public XSD::ComplexType
{
public:
    CT_TblLayoutType();
    ~CT_TblLayoutType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblLayoutType& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_TblLayoutType& _type_attr);
    const ST_TblLayoutType& get_type_attr() const;
protected:
private:
    static CT_TblLayoutType* default_instance_;
    bool m_has_type_attr;
    ST_TblLayoutType* m_type_attr;
};

class CT_TblOverlap: public XSD::ComplexType
{
public:
    CT_TblOverlap();
    ~CT_TblOverlap();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblOverlap& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_TblOverlap& _val_attr);
    const ST_TblOverlap& get_val_attr() const;
protected:
private:
    static CT_TblOverlap* default_instance_;
    bool m_has_val_attr;
    ST_TblOverlap* m_val_attr;
};

class CT_TblPPr: public XSD::ComplexType
{
public:
    CT_TblPPr();
    ~CT_TblPPr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblPPr& default_instance();
    bool has_leftFromText_attr() const;
    void set_leftFromText_attr(const ns_s::ST_TwipsMeasure& _leftFromText_attr);
    const ns_s::ST_TwipsMeasure& get_leftFromText_attr() const;
    bool has_rightFromText_attr() const;
    void set_rightFromText_attr(const ns_s::ST_TwipsMeasure& _rightFromText_attr);
    const ns_s::ST_TwipsMeasure& get_rightFromText_attr() const;
    bool has_topFromText_attr() const;
    void set_topFromText_attr(const ns_s::ST_TwipsMeasure& _topFromText_attr);
    const ns_s::ST_TwipsMeasure& get_topFromText_attr() const;
    bool has_bottomFromText_attr() const;
    void set_bottomFromText_attr(const ns_s::ST_TwipsMeasure& _bottomFromText_attr);
    const ns_s::ST_TwipsMeasure& get_bottomFromText_attr() const;
    bool has_vertAnchor_attr() const;
    void set_vertAnchor_attr(const ST_VAnchor& _vertAnchor_attr);
    const ST_VAnchor& get_vertAnchor_attr() const;
    bool has_horzAnchor_attr() const;
    void set_horzAnchor_attr(const ST_HAnchor& _horzAnchor_attr);
    const ST_HAnchor& get_horzAnchor_attr() const;
    bool has_tblpXSpec_attr() const;
    void set_tblpXSpec_attr(const ns_s::ST_XAlign& _tblpXSpec_attr);
    const ns_s::ST_XAlign& get_tblpXSpec_attr() const;
    bool has_tblpX_attr() const;
    void set_tblpX_attr(const ST_SignedTwipsMeasure& _tblpX_attr);
    const ST_SignedTwipsMeasure& get_tblpX_attr() const;
    bool has_tblpYSpec_attr() const;
    void set_tblpYSpec_attr(const ns_s::ST_YAlign& _tblpYSpec_attr);
    const ns_s::ST_YAlign& get_tblpYSpec_attr() const;
    bool has_tblpY_attr() const;
    void set_tblpY_attr(const ST_SignedTwipsMeasure& _tblpY_attr);
    const ST_SignedTwipsMeasure& get_tblpY_attr() const;
protected:
private:
    static CT_TblPPr* default_instance_;
    bool m_has_leftFromText_attr;
    ns_s::ST_TwipsMeasure* m_leftFromText_attr;
    bool m_has_rightFromText_attr;
    ns_s::ST_TwipsMeasure* m_rightFromText_attr;
    bool m_has_topFromText_attr;
    ns_s::ST_TwipsMeasure* m_topFromText_attr;
    bool m_has_bottomFromText_attr;
    ns_s::ST_TwipsMeasure* m_bottomFromText_attr;
    bool m_has_vertAnchor_attr;
    ST_VAnchor* m_vertAnchor_attr;
    bool m_has_horzAnchor_attr;
    ST_HAnchor* m_horzAnchor_attr;
    bool m_has_tblpXSpec_attr;
    ns_s::ST_XAlign* m_tblpXSpec_attr;
    bool m_has_tblpX_attr;
    ST_SignedTwipsMeasure* m_tblpX_attr;
    bool m_has_tblpYSpec_attr;
    ns_s::ST_YAlign* m_tblpYSpec_attr;
    bool m_has_tblpY_attr;
    ST_SignedTwipsMeasure* m_tblpY_attr;
};

class CT_TblCellMar: public XSD::ComplexType
{
public:
    CT_TblCellMar();
    ~CT_TblCellMar();
    bool has_top() const;
    CT_TblWidth* mutable_top();
    const CT_TblWidth& get_top() const;
    bool has_start() const;
    CT_TblWidth* mutable_start();
    const CT_TblWidth& get_start() const;
    bool has_left() const;
    CT_TblWidth* mutable_left();
    const CT_TblWidth& get_left() const;
    bool has_bottom() const;
    CT_TblWidth* mutable_bottom();
    const CT_TblWidth& get_bottom() const;
    bool has_end() const;
    CT_TblWidth* mutable_end();
    const CT_TblWidth& get_end() const;
    bool has_right() const;
    CT_TblWidth* mutable_right();
    const CT_TblWidth& get_right() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblCellMar& default_instance();
protected:
private:
    bool m_has_top;
    CT_TblWidth* m_top;
    bool m_has_start;
    CT_TblWidth* m_start;
    bool m_has_left;
    CT_TblWidth* m_left;
    bool m_has_bottom;
    CT_TblWidth* m_bottom;
    bool m_has_end;
    CT_TblWidth* m_end;
    bool m_has_right;
    CT_TblWidth* m_right;
    static CT_TblCellMar* default_instance_;
};

class CT_TblBorders: public XSD::ComplexType
{
public:
    CT_TblBorders();
    ~CT_TblBorders();
    bool has_top() const;
    CT_Border* mutable_top();
    const CT_Border& get_top() const;
    bool has_start() const;
    CT_Border* mutable_start();
    const CT_Border& get_start() const;
    bool has_left() const;
    CT_Border* mutable_left();
    const CT_Border& get_left() const;
    bool has_bottom() const;
    CT_Border* mutable_bottom();
    const CT_Border& get_bottom() const;
    bool has_end() const;
    CT_Border* mutable_end();
    const CT_Border& get_end() const;
    bool has_right() const;
    CT_Border* mutable_right();
    const CT_Border& get_right() const;
    bool has_insideH() const;
    CT_Border* mutable_insideH();
    const CT_Border& get_insideH() const;
    bool has_insideV() const;
    CT_Border* mutable_insideV();
    const CT_Border& get_insideV() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblBorders& default_instance();
protected:
private:
    bool m_has_top;
    CT_Border* m_top;
    bool m_has_start;
    CT_Border* m_start;
    bool m_has_left;
    CT_Border* m_left;
    bool m_has_bottom;
    CT_Border* m_bottom;
    bool m_has_end;
    CT_Border* m_end;
    bool m_has_right;
    CT_Border* m_right;
    bool m_has_insideH;
    CT_Border* m_insideH;
    bool m_has_insideV;
    CT_Border* m_insideV;
    static CT_TblBorders* default_instance_;
};

class CT_TblPrBase: public XSD::ComplexType
{
public:
    CT_TblPrBase();
    ~CT_TblPrBase();
    bool has_tblStyle() const;
    CT_String* mutable_tblStyle();
    const CT_String& get_tblStyle() const;
    bool has_tblpPr() const;
    CT_TblPPr* mutable_tblpPr();
    const CT_TblPPr& get_tblpPr() const;
    bool has_tblOverlap() const;
    CT_TblOverlap* mutable_tblOverlap();
    const CT_TblOverlap& get_tblOverlap() const;
    bool has_bidiVisual() const;
    CT_OnOff* mutable_bidiVisual();
    const CT_OnOff& get_bidiVisual() const;
    bool has_tblStyleRowBandSize() const;
    CT_DecimalNumber* mutable_tblStyleRowBandSize();
    const CT_DecimalNumber& get_tblStyleRowBandSize() const;
    bool has_tblStyleColBandSize() const;
    CT_DecimalNumber* mutable_tblStyleColBandSize();
    const CT_DecimalNumber& get_tblStyleColBandSize() const;
    bool has_tblW() const;
    CT_TblWidth* mutable_tblW();
    const CT_TblWidth& get_tblW() const;
    bool has_jc() const;
    CT_JcTable* mutable_jc();
    const CT_JcTable& get_jc() const;
    bool has_tblCellSpacing() const;
    CT_TblWidth* mutable_tblCellSpacing();
    const CT_TblWidth& get_tblCellSpacing() const;
    bool has_tblInd() const;
    CT_TblWidth* mutable_tblInd();
    const CT_TblWidth& get_tblInd() const;
    bool has_tblBorders() const;
    CT_TblBorders* mutable_tblBorders();
    const CT_TblBorders& get_tblBorders() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_tblLayout() const;
    CT_TblLayoutType* mutable_tblLayout();
    const CT_TblLayoutType& get_tblLayout() const;
    bool has_tblCellMar() const;
    CT_TblCellMar* mutable_tblCellMar();
    const CT_TblCellMar& get_tblCellMar() const;
    bool has_tblLook() const;
    CT_TblLook* mutable_tblLook();
    const CT_TblLook& get_tblLook() const;
    bool has_tblCaption() const;
    CT_String* mutable_tblCaption();
    const CT_String& get_tblCaption() const;
    bool has_tblDescription() const;
    CT_String* mutable_tblDescription();
    const CT_String& get_tblDescription() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblPrBase& default_instance();
protected:
private:
    bool m_has_tblStyle;
    CT_String* m_tblStyle;
    bool m_has_tblpPr;
    CT_TblPPr* m_tblpPr;
    bool m_has_tblOverlap;
    CT_TblOverlap* m_tblOverlap;
    bool m_has_bidiVisual;
    CT_OnOff* m_bidiVisual;
    bool m_has_tblStyleRowBandSize;
    CT_DecimalNumber* m_tblStyleRowBandSize;
    bool m_has_tblStyleColBandSize;
    CT_DecimalNumber* m_tblStyleColBandSize;
    bool m_has_tblW;
    CT_TblWidth* m_tblW;
    bool m_has_jc;
    CT_JcTable* m_jc;
    bool m_has_tblCellSpacing;
    CT_TblWidth* m_tblCellSpacing;
    bool m_has_tblInd;
    CT_TblWidth* m_tblInd;
    bool m_has_tblBorders;
    CT_TblBorders* m_tblBorders;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_tblLayout;
    CT_TblLayoutType* m_tblLayout;
    bool m_has_tblCellMar;
    CT_TblCellMar* m_tblCellMar;
    bool m_has_tblLook;
    CT_TblLook* m_tblLook;
    bool m_has_tblCaption;
    CT_String* m_tblCaption;
    bool m_has_tblDescription;
    CT_String* m_tblDescription;
    static CT_TblPrBase* default_instance_;
};

class CT_TblPr: public XSD::ComplexType
{
public:
    CT_TblPr();
    ~CT_TblPr();
    bool has_tblStyle() const;
    CT_String* mutable_tblStyle();
    const CT_String& get_tblStyle() const;
    bool has_tblpPr() const;
    CT_TblPPr* mutable_tblpPr();
    const CT_TblPPr& get_tblpPr() const;
    bool has_tblOverlap() const;
    CT_TblOverlap* mutable_tblOverlap();
    const CT_TblOverlap& get_tblOverlap() const;
    bool has_bidiVisual() const;
    CT_OnOff* mutable_bidiVisual();
    const CT_OnOff& get_bidiVisual() const;
    bool has_tblStyleRowBandSize() const;
    CT_DecimalNumber* mutable_tblStyleRowBandSize();
    const CT_DecimalNumber& get_tblStyleRowBandSize() const;
    bool has_tblStyleColBandSize() const;
    CT_DecimalNumber* mutable_tblStyleColBandSize();
    const CT_DecimalNumber& get_tblStyleColBandSize() const;
    bool has_tblW() const;
    CT_TblWidth* mutable_tblW();
    const CT_TblWidth& get_tblW() const;
    bool has_jc() const;
    CT_JcTable* mutable_jc();
    const CT_JcTable& get_jc() const;
    bool has_tblCellSpacing() const;
    CT_TblWidth* mutable_tblCellSpacing();
    const CT_TblWidth& get_tblCellSpacing() const;
    bool has_tblInd() const;
    CT_TblWidth* mutable_tblInd();
    const CT_TblWidth& get_tblInd() const;
    bool has_tblBorders() const;
    CT_TblBorders* mutable_tblBorders();
    const CT_TblBorders& get_tblBorders() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_tblLayout() const;
    CT_TblLayoutType* mutable_tblLayout();
    const CT_TblLayoutType& get_tblLayout() const;
    bool has_tblCellMar() const;
    CT_TblCellMar* mutable_tblCellMar();
    const CT_TblCellMar& get_tblCellMar() const;
    bool has_tblLook() const;
    CT_TblLook* mutable_tblLook();
    const CT_TblLook& get_tblLook() const;
    bool has_tblCaption() const;
    CT_String* mutable_tblCaption();
    const CT_String& get_tblCaption() const;
    bool has_tblDescription() const;
    CT_String* mutable_tblDescription();
    const CT_String& get_tblDescription() const;
    bool has_tblPrChange() const;
    CT_TblPrChange* mutable_tblPrChange();
    const CT_TblPrChange& get_tblPrChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblPr& default_instance();
protected:
private:
    bool m_has_tblStyle;
    CT_String* m_tblStyle;
    bool m_has_tblpPr;
    CT_TblPPr* m_tblpPr;
    bool m_has_tblOverlap;
    CT_TblOverlap* m_tblOverlap;
    bool m_has_bidiVisual;
    CT_OnOff* m_bidiVisual;
    bool m_has_tblStyleRowBandSize;
    CT_DecimalNumber* m_tblStyleRowBandSize;
    bool m_has_tblStyleColBandSize;
    CT_DecimalNumber* m_tblStyleColBandSize;
    bool m_has_tblW;
    CT_TblWidth* m_tblW;
    bool m_has_jc;
    CT_JcTable* m_jc;
    bool m_has_tblCellSpacing;
    CT_TblWidth* m_tblCellSpacing;
    bool m_has_tblInd;
    CT_TblWidth* m_tblInd;
    bool m_has_tblBorders;
    CT_TblBorders* m_tblBorders;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_tblLayout;
    CT_TblLayoutType* m_tblLayout;
    bool m_has_tblCellMar;
    CT_TblCellMar* m_tblCellMar;
    bool m_has_tblLook;
    CT_TblLook* m_tblLook;
    bool m_has_tblCaption;
    CT_String* m_tblCaption;
    bool m_has_tblDescription;
    CT_String* m_tblDescription;
    bool m_has_tblPrChange;
    CT_TblPrChange* m_tblPrChange;
    static CT_TblPr* default_instance_;
};

class CT_TblPrExBase: public XSD::ComplexType
{
public:
    CT_TblPrExBase();
    ~CT_TblPrExBase();
    bool has_tblW() const;
    CT_TblWidth* mutable_tblW();
    const CT_TblWidth& get_tblW() const;
    bool has_jc() const;
    CT_JcTable* mutable_jc();
    const CT_JcTable& get_jc() const;
    bool has_tblCellSpacing() const;
    CT_TblWidth* mutable_tblCellSpacing();
    const CT_TblWidth& get_tblCellSpacing() const;
    bool has_tblInd() const;
    CT_TblWidth* mutable_tblInd();
    const CT_TblWidth& get_tblInd() const;
    bool has_tblBorders() const;
    CT_TblBorders* mutable_tblBorders();
    const CT_TblBorders& get_tblBorders() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_tblLayout() const;
    CT_TblLayoutType* mutable_tblLayout();
    const CT_TblLayoutType& get_tblLayout() const;
    bool has_tblCellMar() const;
    CT_TblCellMar* mutable_tblCellMar();
    const CT_TblCellMar& get_tblCellMar() const;
    bool has_tblLook() const;
    CT_TblLook* mutable_tblLook();
    const CT_TblLook& get_tblLook() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblPrExBase& default_instance();
protected:
private:
    bool m_has_tblW;
    CT_TblWidth* m_tblW;
    bool m_has_jc;
    CT_JcTable* m_jc;
    bool m_has_tblCellSpacing;
    CT_TblWidth* m_tblCellSpacing;
    bool m_has_tblInd;
    CT_TblWidth* m_tblInd;
    bool m_has_tblBorders;
    CT_TblBorders* m_tblBorders;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_tblLayout;
    CT_TblLayoutType* m_tblLayout;
    bool m_has_tblCellMar;
    CT_TblCellMar* m_tblCellMar;
    bool m_has_tblLook;
    CT_TblLook* m_tblLook;
    static CT_TblPrExBase* default_instance_;
};

class CT_TblPrEx: public XSD::ComplexType
{
public:
    CT_TblPrEx();
    ~CT_TblPrEx();
    bool has_tblW() const;
    CT_TblWidth* mutable_tblW();
    const CT_TblWidth& get_tblW() const;
    bool has_jc() const;
    CT_JcTable* mutable_jc();
    const CT_JcTable& get_jc() const;
    bool has_tblCellSpacing() const;
    CT_TblWidth* mutable_tblCellSpacing();
    const CT_TblWidth& get_tblCellSpacing() const;
    bool has_tblInd() const;
    CT_TblWidth* mutable_tblInd();
    const CT_TblWidth& get_tblInd() const;
    bool has_tblBorders() const;
    CT_TblBorders* mutable_tblBorders();
    const CT_TblBorders& get_tblBorders() const;
    bool has_shd() const;
    CT_Shd* mutable_shd();
    const CT_Shd& get_shd() const;
    bool has_tblLayout() const;
    CT_TblLayoutType* mutable_tblLayout();
    const CT_TblLayoutType& get_tblLayout() const;
    bool has_tblCellMar() const;
    CT_TblCellMar* mutable_tblCellMar();
    const CT_TblCellMar& get_tblCellMar() const;
    bool has_tblLook() const;
    CT_TblLook* mutable_tblLook();
    const CT_TblLook& get_tblLook() const;
    bool has_tblPrExChange() const;
    CT_TblPrExChange* mutable_tblPrExChange();
    const CT_TblPrExChange& get_tblPrExChange() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblPrEx& default_instance();
protected:
private:
    bool m_has_tblW;
    CT_TblWidth* m_tblW;
    bool m_has_jc;
    CT_JcTable* m_jc;
    bool m_has_tblCellSpacing;
    CT_TblWidth* m_tblCellSpacing;
    bool m_has_tblInd;
    CT_TblWidth* m_tblInd;
    bool m_has_tblBorders;
    CT_TblBorders* m_tblBorders;
    bool m_has_shd;
    CT_Shd* m_shd;
    bool m_has_tblLayout;
    CT_TblLayoutType* m_tblLayout;
    bool m_has_tblCellMar;
    CT_TblCellMar* m_tblCellMar;
    bool m_has_tblLook;
    CT_TblLook* m_tblLook;
    bool m_has_tblPrExChange;
    CT_TblPrExChange* m_tblPrExChange;
    static CT_TblPrEx* default_instance_;
};

class CT_Tbl: public XSD::ComplexType
{
public:
    CT_Tbl();
    ~CT_Tbl();
    bool has_tblPr() const;
    CT_TblPr* mutable_tblPr();
    const CT_TblPr& get_tblPr() const;
    bool has_tblGrid() const;
    CT_TblGrid* mutable_tblGrid();
    const CT_TblGrid& get_tblGrid() const;
    CT_Row* add_tr();
    CT_CustomXmlRow* add_customXml();
    CT_SdtRow* add_sdt();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Tbl& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tr() const;
        CT_Row* mutable_tr();
        const CT_Row& get_tr() const;
        bool has_customXml() const;
        CT_CustomXmlRow* mutable_customXml();
        const CT_CustomXmlRow& get_customXml() const;
        bool has_sdt() const;
        CT_SdtRow* mutable_sdt();
        const CT_SdtRow& get_sdt() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
    protected:
    private:
        bool m_has_tr;
        CT_Row* m_tr;
        bool m_has_customXml;
        CT_CustomXmlRow* m_customXml;
        bool m_has_sdt;
        CT_SdtRow* m_sdt;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
    };
    bool m_has_tblPr;
    CT_TblPr* m_tblPr;
    bool m_has_tblGrid;
    CT_TblGrid* m_tblGrid;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Tbl* default_instance_;
};

class CT_TblLook: public XSD::ComplexType
{
public:
    CT_TblLook();
    ~CT_TblLook();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblLook& default_instance();
    bool has_firstRow_attr() const;
    void set_firstRow_attr(const ns_s::ST_OnOff& _firstRow_attr);
    const ns_s::ST_OnOff& get_firstRow_attr() const;
    bool has_lastRow_attr() const;
    void set_lastRow_attr(const ns_s::ST_OnOff& _lastRow_attr);
    const ns_s::ST_OnOff& get_lastRow_attr() const;
    bool has_firstColumn_attr() const;
    void set_firstColumn_attr(const ns_s::ST_OnOff& _firstColumn_attr);
    const ns_s::ST_OnOff& get_firstColumn_attr() const;
    bool has_lastColumn_attr() const;
    void set_lastColumn_attr(const ns_s::ST_OnOff& _lastColumn_attr);
    const ns_s::ST_OnOff& get_lastColumn_attr() const;
    bool has_noHBand_attr() const;
    void set_noHBand_attr(const ns_s::ST_OnOff& _noHBand_attr);
    const ns_s::ST_OnOff& get_noHBand_attr() const;
    bool has_noVBand_attr() const;
    void set_noVBand_attr(const ns_s::ST_OnOff& _noVBand_attr);
    const ns_s::ST_OnOff& get_noVBand_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ST_ShortHexNumber& _val_attr);
    const ST_ShortHexNumber& get_val_attr() const;
protected:
private:
    static CT_TblLook* default_instance_;
    bool m_has_firstRow_attr;
    ns_s::ST_OnOff* m_firstRow_attr;
    bool m_has_lastRow_attr;
    ns_s::ST_OnOff* m_lastRow_attr;
    bool m_has_firstColumn_attr;
    ns_s::ST_OnOff* m_firstColumn_attr;
    bool m_has_lastColumn_attr;
    ns_s::ST_OnOff* m_lastColumn_attr;
    bool m_has_noHBand_attr;
    ns_s::ST_OnOff* m_noHBand_attr;
    bool m_has_noVBand_attr;
    ns_s::ST_OnOff* m_noVBand_attr;
    bool m_has_val_attr;
    ST_ShortHexNumber* m_val_attr;
};

class CT_FtnPos: public XSD::ComplexType
{
public:
    CT_FtnPos();
    ~CT_FtnPos();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FtnPos& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_FtnPos& _val_attr);
    const ST_FtnPos& get_val_attr() const;
protected:
private:
    static CT_FtnPos* default_instance_;
    bool m_has_val_attr;
    ST_FtnPos* m_val_attr;
};

class CT_EdnPos: public XSD::ComplexType
{
public:
    CT_EdnPos();
    ~CT_EdnPos();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_EdnPos& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_EdnPos& _val_attr);
    const ST_EdnPos& get_val_attr() const;
protected:
private:
    static CT_EdnPos* default_instance_;
    bool m_has_val_attr;
    ST_EdnPos* m_val_attr;
};

class CT_NumFmt: public XSD::ComplexType
{
public:
    CT_NumFmt();
    ~CT_NumFmt();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NumFmt& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_NumberFormat& _val_attr);
    const ST_NumberFormat& get_val_attr() const;
    bool has_format_attr() const;
    void set_format_attr(const ns_s::ST_String& _format_attr);
    const ns_s::ST_String& get_format_attr() const;
protected:
private:
    static CT_NumFmt* default_instance_;
    bool m_has_val_attr;
    ST_NumberFormat* m_val_attr;
    bool m_has_format_attr;
    ns_s::ST_String* m_format_attr;
};

class CT_NumRestart: public XSD::ComplexType
{
public:
    CT_NumRestart();
    ~CT_NumRestart();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NumRestart& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_RestartNumber& _val_attr);
    const ST_RestartNumber& get_val_attr() const;
protected:
private:
    static CT_NumRestart* default_instance_;
    bool m_has_val_attr;
    ST_RestartNumber* m_val_attr;
};

class CT_FtnEdnRef: public XSD::ComplexType
{
public:
    CT_FtnEdnRef();
    ~CT_FtnEdnRef();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FtnEdnRef& default_instance();
    bool has_customMarkFollows_attr() const;
    void set_customMarkFollows_attr(const ns_s::ST_OnOff& _customMarkFollows_attr);
    const ns_s::ST_OnOff& get_customMarkFollows_attr() const;
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
protected:
private:
    static CT_FtnEdnRef* default_instance_;
    bool m_has_customMarkFollows_attr;
    ns_s::ST_OnOff* m_customMarkFollows_attr;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
};

class CT_FtnEdnSepRef: public XSD::ComplexType
{
public:
    CT_FtnEdnSepRef();
    ~CT_FtnEdnSepRef();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FtnEdnSepRef& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
protected:
private:
    static CT_FtnEdnSepRef* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
};

class CT_FtnEdn: public XSD::ComplexType
{
public:
    CT_FtnEdn();
    ~CT_FtnEdn();
    CT_CustomXmlBlock* add_customXml();
    CT_SdtBlock* add_sdt();
    CT_P* add_p();
    CT_Tbl* add_tbl();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    CT_AltChunk* add_altChunk();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FtnEdn& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_FtnEdn& _type_attr);
    const ST_FtnEdn& get_type_attr() const;
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlBlock* mutable_customXml();
        const CT_CustomXmlBlock& get_customXml() const;
        bool has_sdt() const;
        CT_SdtBlock* mutable_sdt();
        const CT_SdtBlock& get_sdt() const;
        bool has_p() const;
        CT_P* mutable_p();
        const CT_P& get_p() const;
        bool has_tbl() const;
        CT_Tbl* mutable_tbl();
        const CT_Tbl& get_tbl() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_altChunk() const;
        CT_AltChunk* mutable_altChunk();
        const CT_AltChunk& get_altChunk() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlBlock* m_customXml;
        bool m_has_sdt;
        CT_SdtBlock* m_sdt;
        bool m_has_p;
        CT_P* m_p;
        bool m_has_tbl;
        CT_Tbl* m_tbl;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_altChunk;
        CT_AltChunk* m_altChunk;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_FtnEdn* default_instance_;
    bool m_has_type_attr;
    ST_FtnEdn* m_type_attr;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
};

class CT_FtnProps: public XSD::ComplexType
{
public:
    CT_FtnProps();
    ~CT_FtnProps();
    bool has_pos() const;
    CT_FtnPos* mutable_pos();
    const CT_FtnPos& get_pos() const;
    bool has_numFmt() const;
    CT_NumFmt* mutable_numFmt();
    const CT_NumFmt& get_numFmt() const;
    bool has_numStart() const;
    CT_DecimalNumber* mutable_numStart();
    const CT_DecimalNumber& get_numStart() const;
    bool has_numRestart() const;
    CT_NumRestart* mutable_numRestart();
    const CT_NumRestart& get_numRestart() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FtnProps& default_instance();
protected:
private:
    bool m_has_pos;
    CT_FtnPos* m_pos;
    bool m_has_numFmt;
    CT_NumFmt* m_numFmt;
    bool m_has_numStart;
    CT_DecimalNumber* m_numStart;
    bool m_has_numRestart;
    CT_NumRestart* m_numRestart;
    static CT_FtnProps* default_instance_;
};

class CT_EdnProps: public XSD::ComplexType
{
public:
    CT_EdnProps();
    ~CT_EdnProps();
    bool has_pos() const;
    CT_EdnPos* mutable_pos();
    const CT_EdnPos& get_pos() const;
    bool has_numFmt() const;
    CT_NumFmt* mutable_numFmt();
    const CT_NumFmt& get_numFmt() const;
    bool has_numStart() const;
    CT_DecimalNumber* mutable_numStart();
    const CT_DecimalNumber& get_numStart() const;
    bool has_numRestart() const;
    CT_NumRestart* mutable_numRestart();
    const CT_NumRestart& get_numRestart() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_EdnProps& default_instance();
protected:
private:
    bool m_has_pos;
    CT_EdnPos* m_pos;
    bool m_has_numFmt;
    CT_NumFmt* m_numFmt;
    bool m_has_numStart;
    CT_DecimalNumber* m_numStart;
    bool m_has_numRestart;
    CT_NumRestart* m_numRestart;
    static CT_EdnProps* default_instance_;
};

class CT_FtnDocProps: public XSD::ComplexType
{
public:
    CT_FtnDocProps();
    ~CT_FtnDocProps();
    bool has_pos() const;
    CT_FtnPos* mutable_pos();
    const CT_FtnPos& get_pos() const;
    bool has_numFmt() const;
    CT_NumFmt* mutable_numFmt();
    const CT_NumFmt& get_numFmt() const;
    bool has_numStart() const;
    CT_DecimalNumber* mutable_numStart();
    const CT_DecimalNumber& get_numStart() const;
    bool has_numRestart() const;
    CT_NumRestart* mutable_numRestart();
    const CT_NumRestart& get_numRestart() const;
    CT_FtnEdnSepRef* add_footnote();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FtnDocProps& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_footnote() const;
        CT_FtnEdnSepRef* mutable_footnote();
        const CT_FtnEdnSepRef& get_footnote() const;
    protected:
    private:
        bool m_has_footnote;
        CT_FtnEdnSepRef* m_footnote;
    };
    bool m_has_pos;
    CT_FtnPos* m_pos;
    bool m_has_numFmt;
    CT_NumFmt* m_numFmt;
    bool m_has_numStart;
    CT_DecimalNumber* m_numStart;
    bool m_has_numRestart;
    CT_NumRestart* m_numRestart;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_FtnDocProps* default_instance_;
};

class CT_EdnDocProps: public XSD::ComplexType
{
public:
    CT_EdnDocProps();
    ~CT_EdnDocProps();
    bool has_pos() const;
    CT_EdnPos* mutable_pos();
    const CT_EdnPos& get_pos() const;
    bool has_numFmt() const;
    CT_NumFmt* mutable_numFmt();
    const CT_NumFmt& get_numFmt() const;
    bool has_numStart() const;
    CT_DecimalNumber* mutable_numStart();
    const CT_DecimalNumber& get_numStart() const;
    bool has_numRestart() const;
    CT_NumRestart* mutable_numRestart();
    const CT_NumRestart& get_numRestart() const;
    CT_FtnEdnSepRef* add_endnote();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_EdnDocProps& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_endnote() const;
        CT_FtnEdnSepRef* mutable_endnote();
        const CT_FtnEdnSepRef& get_endnote() const;
    protected:
    private:
        bool m_has_endnote;
        CT_FtnEdnSepRef* m_endnote;
    };
    bool m_has_pos;
    CT_EdnPos* m_pos;
    bool m_has_numFmt;
    CT_NumFmt* m_numFmt;
    bool m_has_numStart;
    CT_DecimalNumber* m_numStart;
    bool m_has_numRestart;
    CT_NumRestart* m_numRestart;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_EdnDocProps* default_instance_;
};

class CT_RecipientData: public XSD::ComplexType
{
public:
    CT_RecipientData();
    ~CT_RecipientData();
    bool has_active() const;
    CT_OnOff* mutable_active();
    const CT_OnOff& get_active() const;
    bool has_column() const;
    CT_DecimalNumber* mutable_column();
    const CT_DecimalNumber& get_column() const;
    bool has_uniqueTag() const;
    CT_Base64Binary* mutable_uniqueTag();
    const CT_Base64Binary& get_uniqueTag() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RecipientData& default_instance();
protected:
private:
    bool m_has_active;
    CT_OnOff* m_active;
    bool m_has_column;
    CT_DecimalNumber* m_column;
    bool m_has_uniqueTag;
    CT_Base64Binary* m_uniqueTag;
    static CT_RecipientData* default_instance_;
};

class CT_Base64Binary: public XSD::ComplexType
{
public:
    CT_Base64Binary();
    ~CT_Base64Binary();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Base64Binary& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const XSD::base64Binary_& _val_attr);
    const XSD::base64Binary_& get_val_attr() const;
protected:
private:
    static CT_Base64Binary* default_instance_;
    bool m_has_val_attr;
    XSD::base64Binary_ m_val_attr;
};

class CT_Recipients: public XSD::ComplexType
{
public:
    CT_Recipients();
    ~CT_Recipients();
    CT_RecipientData* add_recipientData();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Recipients& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_recipientData() const;
        CT_RecipientData* mutable_recipientData();
        const CT_RecipientData& get_recipientData() const;
    protected:
    private:
        bool m_has_recipientData;
        CT_RecipientData* m_recipientData;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Recipients* default_instance_;
};

class CT_OdsoFieldMapData: public XSD::ComplexType
{
public:
    CT_OdsoFieldMapData();
    ~CT_OdsoFieldMapData();
    bool has_type() const;
    CT_MailMergeOdsoFMDFieldType* mutable_type();
    const CT_MailMergeOdsoFMDFieldType& get_type() const;
    bool has_name() const;
    CT_String* mutable_name();
    const CT_String& get_name() const;
    bool has_mappedName() const;
    CT_String* mutable_mappedName();
    const CT_String& get_mappedName() const;
    bool has_column() const;
    CT_DecimalNumber* mutable_column();
    const CT_DecimalNumber& get_column() const;
    bool has_lid() const;
    CT_Lang* mutable_lid();
    const CT_Lang& get_lid() const;
    bool has_dynamicAddress() const;
    CT_OnOff* mutable_dynamicAddress();
    const CT_OnOff& get_dynamicAddress() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_OdsoFieldMapData& default_instance();
protected:
private:
    bool m_has_type;
    CT_MailMergeOdsoFMDFieldType* m_type;
    bool m_has_name;
    CT_String* m_name;
    bool m_has_mappedName;
    CT_String* m_mappedName;
    bool m_has_column;
    CT_DecimalNumber* m_column;
    bool m_has_lid;
    CT_Lang* m_lid;
    bool m_has_dynamicAddress;
    CT_OnOff* m_dynamicAddress;
    static CT_OdsoFieldMapData* default_instance_;
};

class CT_MailMergeSourceType: public XSD::ComplexType
{
public:
    CT_MailMergeSourceType();
    ~CT_MailMergeSourceType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MailMergeSourceType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_MailMergeSourceType& _val_attr);
    const ST_MailMergeSourceType& get_val_attr() const;
protected:
private:
    static CT_MailMergeSourceType* default_instance_;
    bool m_has_val_attr;
    ST_MailMergeSourceType* m_val_attr;
};

class CT_Odso: public XSD::ComplexType
{
public:
    CT_Odso();
    ~CT_Odso();
    bool has_udl() const;
    CT_String* mutable_udl();
    const CT_String& get_udl() const;
    bool has_table() const;
    CT_String* mutable_table();
    const CT_String& get_table() const;
    bool has_src() const;
    CT_Rel* mutable_src();
    const CT_Rel& get_src() const;
    bool has_colDelim() const;
    CT_DecimalNumber* mutable_colDelim();
    const CT_DecimalNumber& get_colDelim() const;
    bool has_type() const;
    CT_MailMergeSourceType* mutable_type();
    const CT_MailMergeSourceType& get_type() const;
    bool has_fHdr() const;
    CT_OnOff* mutable_fHdr();
    const CT_OnOff& get_fHdr() const;
    CT_OdsoFieldMapData* add_fieldMapData();
    CT_Rel* add_recipientData();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Odso& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_fieldMapData() const;
        CT_OdsoFieldMapData* mutable_fieldMapData();
        const CT_OdsoFieldMapData& get_fieldMapData() const;
        bool has_recipientData() const;
        CT_Rel* mutable_recipientData();
        const CT_Rel& get_recipientData() const;
    protected:
    private:
        bool m_has_fieldMapData;
        CT_OdsoFieldMapData* m_fieldMapData;
        bool m_has_recipientData;
        CT_Rel* m_recipientData;
    };
    bool m_has_udl;
    CT_String* m_udl;
    bool m_has_table;
    CT_String* m_table;
    bool m_has_src;
    CT_Rel* m_src;
    bool m_has_colDelim;
    CT_DecimalNumber* m_colDelim;
    bool m_has_type;
    CT_MailMergeSourceType* m_type;
    bool m_has_fHdr;
    CT_OnOff* m_fHdr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Odso* default_instance_;
};

class CT_MailMerge: public XSD::ComplexType
{
public:
    CT_MailMerge();
    ~CT_MailMerge();
    bool has_mainDocumentType() const;
    CT_MailMergeDocType* mutable_mainDocumentType();
    const CT_MailMergeDocType& get_mainDocumentType() const;
    bool has_linkToQuery() const;
    CT_OnOff* mutable_linkToQuery();
    const CT_OnOff& get_linkToQuery() const;
    bool has_dataType() const;
    CT_MailMergeDataType* mutable_dataType();
    const CT_MailMergeDataType& get_dataType() const;
    bool has_connectString() const;
    CT_String* mutable_connectString();
    const CT_String& get_connectString() const;
    bool has_query() const;
    CT_String* mutable_query();
    const CT_String& get_query() const;
    bool has_dataSource() const;
    CT_Rel* mutable_dataSource();
    const CT_Rel& get_dataSource() const;
    bool has_headerSource() const;
    CT_Rel* mutable_headerSource();
    const CT_Rel& get_headerSource() const;
    bool has_doNotSuppressBlankLines() const;
    CT_OnOff* mutable_doNotSuppressBlankLines();
    const CT_OnOff& get_doNotSuppressBlankLines() const;
    bool has_destination() const;
    CT_MailMergeDest* mutable_destination();
    const CT_MailMergeDest& get_destination() const;
    bool has_addressFieldName() const;
    CT_String* mutable_addressFieldName();
    const CT_String& get_addressFieldName() const;
    bool has_mailSubject() const;
    CT_String* mutable_mailSubject();
    const CT_String& get_mailSubject() const;
    bool has_mailAsAttachment() const;
    CT_OnOff* mutable_mailAsAttachment();
    const CT_OnOff& get_mailAsAttachment() const;
    bool has_viewMergedData() const;
    CT_OnOff* mutable_viewMergedData();
    const CT_OnOff& get_viewMergedData() const;
    bool has_activeRecord() const;
    CT_DecimalNumber* mutable_activeRecord();
    const CT_DecimalNumber& get_activeRecord() const;
    bool has_checkErrors() const;
    CT_DecimalNumber* mutable_checkErrors();
    const CT_DecimalNumber& get_checkErrors() const;
    bool has_odso() const;
    CT_Odso* mutable_odso();
    const CT_Odso& get_odso() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MailMerge& default_instance();
protected:
private:
    bool m_has_mainDocumentType;
    CT_MailMergeDocType* m_mainDocumentType;
    bool m_has_linkToQuery;
    CT_OnOff* m_linkToQuery;
    bool m_has_dataType;
    CT_MailMergeDataType* m_dataType;
    bool m_has_connectString;
    CT_String* m_connectString;
    bool m_has_query;
    CT_String* m_query;
    bool m_has_dataSource;
    CT_Rel* m_dataSource;
    bool m_has_headerSource;
    CT_Rel* m_headerSource;
    bool m_has_doNotSuppressBlankLines;
    CT_OnOff* m_doNotSuppressBlankLines;
    bool m_has_destination;
    CT_MailMergeDest* m_destination;
    bool m_has_addressFieldName;
    CT_String* m_addressFieldName;
    bool m_has_mailSubject;
    CT_String* m_mailSubject;
    bool m_has_mailAsAttachment;
    CT_OnOff* m_mailAsAttachment;
    bool m_has_viewMergedData;
    CT_OnOff* m_viewMergedData;
    bool m_has_activeRecord;
    CT_DecimalNumber* m_activeRecord;
    bool m_has_checkErrors;
    CT_DecimalNumber* m_checkErrors;
    bool m_has_odso;
    CT_Odso* m_odso;
    static CT_MailMerge* default_instance_;
};

class CT_TargetScreenSz: public XSD::ComplexType
{
public:
    CT_TargetScreenSz();
    ~CT_TargetScreenSz();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TargetScreenSz& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_TargetScreenSz& _val_attr);
    const ST_TargetScreenSz& get_val_attr() const;
protected:
private:
    static CT_TargetScreenSz* default_instance_;
    bool m_has_val_attr;
    ST_TargetScreenSz* m_val_attr;
};

class CT_Compat: public XSD::ComplexType
{
public:
    CT_Compat();
    ~CT_Compat();
    bool has_useSingleBorderforContiguousCells() const;
    CT_OnOff* mutable_useSingleBorderforContiguousCells();
    const CT_OnOff& get_useSingleBorderforContiguousCells() const;
    bool has_wpJustification() const;
    CT_OnOff* mutable_wpJustification();
    const CT_OnOff& get_wpJustification() const;
    bool has_noTabHangInd() const;
    CT_OnOff* mutable_noTabHangInd();
    const CT_OnOff& get_noTabHangInd() const;
    bool has_noLeading() const;
    CT_OnOff* mutable_noLeading();
    const CT_OnOff& get_noLeading() const;
    bool has_spaceForUL() const;
    CT_OnOff* mutable_spaceForUL();
    const CT_OnOff& get_spaceForUL() const;
    bool has_noColumnBalance() const;
    CT_OnOff* mutable_noColumnBalance();
    const CT_OnOff& get_noColumnBalance() const;
    bool has_balanceSingleByteDoubleByteWidth() const;
    CT_OnOff* mutable_balanceSingleByteDoubleByteWidth();
    const CT_OnOff& get_balanceSingleByteDoubleByteWidth() const;
    bool has_noExtraLineSpacing() const;
    CT_OnOff* mutable_noExtraLineSpacing();
    const CT_OnOff& get_noExtraLineSpacing() const;
    bool has_doNotLeaveBackslashAlone() const;
    CT_OnOff* mutable_doNotLeaveBackslashAlone();
    const CT_OnOff& get_doNotLeaveBackslashAlone() const;
    bool has_ulTrailSpace() const;
    CT_OnOff* mutable_ulTrailSpace();
    const CT_OnOff& get_ulTrailSpace() const;
    bool has_doNotExpandShiftReturn() const;
    CT_OnOff* mutable_doNotExpandShiftReturn();
    const CT_OnOff& get_doNotExpandShiftReturn() const;
    bool has_spacingInWholePoints() const;
    CT_OnOff* mutable_spacingInWholePoints();
    const CT_OnOff& get_spacingInWholePoints() const;
    bool has_lineWrapLikeWord6() const;
    CT_OnOff* mutable_lineWrapLikeWord6();
    const CT_OnOff& get_lineWrapLikeWord6() const;
    bool has_printBodyTextBeforeHeader() const;
    CT_OnOff* mutable_printBodyTextBeforeHeader();
    const CT_OnOff& get_printBodyTextBeforeHeader() const;
    bool has_printColBlack() const;
    CT_OnOff* mutable_printColBlack();
    const CT_OnOff& get_printColBlack() const;
    bool has_wpSpaceWidth() const;
    CT_OnOff* mutable_wpSpaceWidth();
    const CT_OnOff& get_wpSpaceWidth() const;
    bool has_showBreaksInFrames() const;
    CT_OnOff* mutable_showBreaksInFrames();
    const CT_OnOff& get_showBreaksInFrames() const;
    bool has_subFontBySize() const;
    CT_OnOff* mutable_subFontBySize();
    const CT_OnOff& get_subFontBySize() const;
    bool has_suppressBottomSpacing() const;
    CT_OnOff* mutable_suppressBottomSpacing();
    const CT_OnOff& get_suppressBottomSpacing() const;
    bool has_suppressTopSpacing() const;
    CT_OnOff* mutable_suppressTopSpacing();
    const CT_OnOff& get_suppressTopSpacing() const;
    bool has_suppressSpacingAtTopOfPage() const;
    CT_OnOff* mutable_suppressSpacingAtTopOfPage();
    const CT_OnOff& get_suppressSpacingAtTopOfPage() const;
    bool has_suppressTopSpacingWP() const;
    CT_OnOff* mutable_suppressTopSpacingWP();
    const CT_OnOff& get_suppressTopSpacingWP() const;
    bool has_suppressSpBfAfterPgBrk() const;
    CT_OnOff* mutable_suppressSpBfAfterPgBrk();
    const CT_OnOff& get_suppressSpBfAfterPgBrk() const;
    bool has_swapBordersFacingPages() const;
    CT_OnOff* mutable_swapBordersFacingPages();
    const CT_OnOff& get_swapBordersFacingPages() const;
    bool has_convMailMergeEsc() const;
    CT_OnOff* mutable_convMailMergeEsc();
    const CT_OnOff& get_convMailMergeEsc() const;
    bool has_truncateFontHeightsLikeWP6() const;
    CT_OnOff* mutable_truncateFontHeightsLikeWP6();
    const CT_OnOff& get_truncateFontHeightsLikeWP6() const;
    bool has_mwSmallCaps() const;
    CT_OnOff* mutable_mwSmallCaps();
    const CT_OnOff& get_mwSmallCaps() const;
    bool has_usePrinterMetrics() const;
    CT_OnOff* mutable_usePrinterMetrics();
    const CT_OnOff& get_usePrinterMetrics() const;
    bool has_doNotSuppressParagraphBorders() const;
    CT_OnOff* mutable_doNotSuppressParagraphBorders();
    const CT_OnOff& get_doNotSuppressParagraphBorders() const;
    bool has_wrapTrailSpaces() const;
    CT_OnOff* mutable_wrapTrailSpaces();
    const CT_OnOff& get_wrapTrailSpaces() const;
    bool has_footnoteLayoutLikeWW8() const;
    CT_OnOff* mutable_footnoteLayoutLikeWW8();
    const CT_OnOff& get_footnoteLayoutLikeWW8() const;
    bool has_shapeLayoutLikeWW8() const;
    CT_OnOff* mutable_shapeLayoutLikeWW8();
    const CT_OnOff& get_shapeLayoutLikeWW8() const;
    bool has_alignTablesRowByRow() const;
    CT_OnOff* mutable_alignTablesRowByRow();
    const CT_OnOff& get_alignTablesRowByRow() const;
    bool has_forgetLastTabAlignment() const;
    CT_OnOff* mutable_forgetLastTabAlignment();
    const CT_OnOff& get_forgetLastTabAlignment() const;
    bool has_adjustLineHeightInTable() const;
    CT_OnOff* mutable_adjustLineHeightInTable();
    const CT_OnOff& get_adjustLineHeightInTable() const;
    bool has_autoSpaceLikeWord95() const;
    CT_OnOff* mutable_autoSpaceLikeWord95();
    const CT_OnOff& get_autoSpaceLikeWord95() const;
    bool has_noSpaceRaiseLower() const;
    CT_OnOff* mutable_noSpaceRaiseLower();
    const CT_OnOff& get_noSpaceRaiseLower() const;
    bool has_doNotUseHTMLParagraphAutoSpacing() const;
    CT_OnOff* mutable_doNotUseHTMLParagraphAutoSpacing();
    const CT_OnOff& get_doNotUseHTMLParagraphAutoSpacing() const;
    bool has_layoutRawTableWidth() const;
    CT_OnOff* mutable_layoutRawTableWidth();
    const CT_OnOff& get_layoutRawTableWidth() const;
    bool has_layoutTableRowsApart() const;
    CT_OnOff* mutable_layoutTableRowsApart();
    const CT_OnOff& get_layoutTableRowsApart() const;
    bool has_useWord97LineBreakRules() const;
    CT_OnOff* mutable_useWord97LineBreakRules();
    const CT_OnOff& get_useWord97LineBreakRules() const;
    bool has_doNotBreakWrappedTables() const;
    CT_OnOff* mutable_doNotBreakWrappedTables();
    const CT_OnOff& get_doNotBreakWrappedTables() const;
    bool has_doNotSnapToGridInCell() const;
    CT_OnOff* mutable_doNotSnapToGridInCell();
    const CT_OnOff& get_doNotSnapToGridInCell() const;
    bool has_selectFldWithFirstOrLastChar() const;
    CT_OnOff* mutable_selectFldWithFirstOrLastChar();
    const CT_OnOff& get_selectFldWithFirstOrLastChar() const;
    bool has_applyBreakingRules() const;
    CT_OnOff* mutable_applyBreakingRules();
    const CT_OnOff& get_applyBreakingRules() const;
    bool has_doNotWrapTextWithPunct() const;
    CT_OnOff* mutable_doNotWrapTextWithPunct();
    const CT_OnOff& get_doNotWrapTextWithPunct() const;
    bool has_doNotUseEastAsianBreakRules() const;
    CT_OnOff* mutable_doNotUseEastAsianBreakRules();
    const CT_OnOff& get_doNotUseEastAsianBreakRules() const;
    bool has_useWord2002TableStyleRules() const;
    CT_OnOff* mutable_useWord2002TableStyleRules();
    const CT_OnOff& get_useWord2002TableStyleRules() const;
    bool has_growAutofit() const;
    CT_OnOff* mutable_growAutofit();
    const CT_OnOff& get_growAutofit() const;
    bool has_useFELayout() const;
    CT_OnOff* mutable_useFELayout();
    const CT_OnOff& get_useFELayout() const;
    bool has_useNormalStyleForList() const;
    CT_OnOff* mutable_useNormalStyleForList();
    const CT_OnOff& get_useNormalStyleForList() const;
    bool has_doNotUseIndentAsNumberingTabStop() const;
    CT_OnOff* mutable_doNotUseIndentAsNumberingTabStop();
    const CT_OnOff& get_doNotUseIndentAsNumberingTabStop() const;
    bool has_useAltKinsokuLineBreakRules() const;
    CT_OnOff* mutable_useAltKinsokuLineBreakRules();
    const CT_OnOff& get_useAltKinsokuLineBreakRules() const;
    bool has_allowSpaceOfSameStyleInTable() const;
    CT_OnOff* mutable_allowSpaceOfSameStyleInTable();
    const CT_OnOff& get_allowSpaceOfSameStyleInTable() const;
    bool has_doNotSuppressIndentation() const;
    CT_OnOff* mutable_doNotSuppressIndentation();
    const CT_OnOff& get_doNotSuppressIndentation() const;
    bool has_doNotAutofitConstrainedTables() const;
    CT_OnOff* mutable_doNotAutofitConstrainedTables();
    const CT_OnOff& get_doNotAutofitConstrainedTables() const;
    bool has_autofitToFirstFixedWidthCell() const;
    CT_OnOff* mutable_autofitToFirstFixedWidthCell();
    const CT_OnOff& get_autofitToFirstFixedWidthCell() const;
    bool has_underlineTabInNumList() const;
    CT_OnOff* mutable_underlineTabInNumList();
    const CT_OnOff& get_underlineTabInNumList() const;
    bool has_displayHangulFixedWidth() const;
    CT_OnOff* mutable_displayHangulFixedWidth();
    const CT_OnOff& get_displayHangulFixedWidth() const;
    bool has_splitPgBreakAndParaMark() const;
    CT_OnOff* mutable_splitPgBreakAndParaMark();
    const CT_OnOff& get_splitPgBreakAndParaMark() const;
    bool has_doNotVertAlignCellWithSp() const;
    CT_OnOff* mutable_doNotVertAlignCellWithSp();
    const CT_OnOff& get_doNotVertAlignCellWithSp() const;
    bool has_doNotBreakConstrainedForcedTable() const;
    CT_OnOff* mutable_doNotBreakConstrainedForcedTable();
    const CT_OnOff& get_doNotBreakConstrainedForcedTable() const;
    bool has_doNotVertAlignInTxbx() const;
    CT_OnOff* mutable_doNotVertAlignInTxbx();
    const CT_OnOff& get_doNotVertAlignInTxbx() const;
    bool has_useAnsiKerningPairs() const;
    CT_OnOff* mutable_useAnsiKerningPairs();
    const CT_OnOff& get_useAnsiKerningPairs() const;
    bool has_cachedColBalance() const;
    CT_OnOff* mutable_cachedColBalance();
    const CT_OnOff& get_cachedColBalance() const;
    CT_CompatSetting* add_compatSetting();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Compat& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_compatSetting() const;
        CT_CompatSetting* mutable_compatSetting();
        const CT_CompatSetting& get_compatSetting() const;
    protected:
    private:
        bool m_has_compatSetting;
        CT_CompatSetting* m_compatSetting;
    };
    bool m_has_useSingleBorderforContiguousCells;
    CT_OnOff* m_useSingleBorderforContiguousCells;
    bool m_has_wpJustification;
    CT_OnOff* m_wpJustification;
    bool m_has_noTabHangInd;
    CT_OnOff* m_noTabHangInd;
    bool m_has_noLeading;
    CT_OnOff* m_noLeading;
    bool m_has_spaceForUL;
    CT_OnOff* m_spaceForUL;
    bool m_has_noColumnBalance;
    CT_OnOff* m_noColumnBalance;
    bool m_has_balanceSingleByteDoubleByteWidth;
    CT_OnOff* m_balanceSingleByteDoubleByteWidth;
    bool m_has_noExtraLineSpacing;
    CT_OnOff* m_noExtraLineSpacing;
    bool m_has_doNotLeaveBackslashAlone;
    CT_OnOff* m_doNotLeaveBackslashAlone;
    bool m_has_ulTrailSpace;
    CT_OnOff* m_ulTrailSpace;
    bool m_has_doNotExpandShiftReturn;
    CT_OnOff* m_doNotExpandShiftReturn;
    bool m_has_spacingInWholePoints;
    CT_OnOff* m_spacingInWholePoints;
    bool m_has_lineWrapLikeWord6;
    CT_OnOff* m_lineWrapLikeWord6;
    bool m_has_printBodyTextBeforeHeader;
    CT_OnOff* m_printBodyTextBeforeHeader;
    bool m_has_printColBlack;
    CT_OnOff* m_printColBlack;
    bool m_has_wpSpaceWidth;
    CT_OnOff* m_wpSpaceWidth;
    bool m_has_showBreaksInFrames;
    CT_OnOff* m_showBreaksInFrames;
    bool m_has_subFontBySize;
    CT_OnOff* m_subFontBySize;
    bool m_has_suppressBottomSpacing;
    CT_OnOff* m_suppressBottomSpacing;
    bool m_has_suppressTopSpacing;
    CT_OnOff* m_suppressTopSpacing;
    bool m_has_suppressSpacingAtTopOfPage;
    CT_OnOff* m_suppressSpacingAtTopOfPage;
    bool m_has_suppressTopSpacingWP;
    CT_OnOff* m_suppressTopSpacingWP;
    bool m_has_suppressSpBfAfterPgBrk;
    CT_OnOff* m_suppressSpBfAfterPgBrk;
    bool m_has_swapBordersFacingPages;
    CT_OnOff* m_swapBordersFacingPages;
    bool m_has_convMailMergeEsc;
    CT_OnOff* m_convMailMergeEsc;
    bool m_has_truncateFontHeightsLikeWP6;
    CT_OnOff* m_truncateFontHeightsLikeWP6;
    bool m_has_mwSmallCaps;
    CT_OnOff* m_mwSmallCaps;
    bool m_has_usePrinterMetrics;
    CT_OnOff* m_usePrinterMetrics;
    bool m_has_doNotSuppressParagraphBorders;
    CT_OnOff* m_doNotSuppressParagraphBorders;
    bool m_has_wrapTrailSpaces;
    CT_OnOff* m_wrapTrailSpaces;
    bool m_has_footnoteLayoutLikeWW8;
    CT_OnOff* m_footnoteLayoutLikeWW8;
    bool m_has_shapeLayoutLikeWW8;
    CT_OnOff* m_shapeLayoutLikeWW8;
    bool m_has_alignTablesRowByRow;
    CT_OnOff* m_alignTablesRowByRow;
    bool m_has_forgetLastTabAlignment;
    CT_OnOff* m_forgetLastTabAlignment;
    bool m_has_adjustLineHeightInTable;
    CT_OnOff* m_adjustLineHeightInTable;
    bool m_has_autoSpaceLikeWord95;
    CT_OnOff* m_autoSpaceLikeWord95;
    bool m_has_noSpaceRaiseLower;
    CT_OnOff* m_noSpaceRaiseLower;
    bool m_has_doNotUseHTMLParagraphAutoSpacing;
    CT_OnOff* m_doNotUseHTMLParagraphAutoSpacing;
    bool m_has_layoutRawTableWidth;
    CT_OnOff* m_layoutRawTableWidth;
    bool m_has_layoutTableRowsApart;
    CT_OnOff* m_layoutTableRowsApart;
    bool m_has_useWord97LineBreakRules;
    CT_OnOff* m_useWord97LineBreakRules;
    bool m_has_doNotBreakWrappedTables;
    CT_OnOff* m_doNotBreakWrappedTables;
    bool m_has_doNotSnapToGridInCell;
    CT_OnOff* m_doNotSnapToGridInCell;
    bool m_has_selectFldWithFirstOrLastChar;
    CT_OnOff* m_selectFldWithFirstOrLastChar;
    bool m_has_applyBreakingRules;
    CT_OnOff* m_applyBreakingRules;
    bool m_has_doNotWrapTextWithPunct;
    CT_OnOff* m_doNotWrapTextWithPunct;
    bool m_has_doNotUseEastAsianBreakRules;
    CT_OnOff* m_doNotUseEastAsianBreakRules;
    bool m_has_useWord2002TableStyleRules;
    CT_OnOff* m_useWord2002TableStyleRules;
    bool m_has_growAutofit;
    CT_OnOff* m_growAutofit;
    bool m_has_useFELayout;
    CT_OnOff* m_useFELayout;
    bool m_has_useNormalStyleForList;
    CT_OnOff* m_useNormalStyleForList;
    bool m_has_doNotUseIndentAsNumberingTabStop;
    CT_OnOff* m_doNotUseIndentAsNumberingTabStop;
    bool m_has_useAltKinsokuLineBreakRules;
    CT_OnOff* m_useAltKinsokuLineBreakRules;
    bool m_has_allowSpaceOfSameStyleInTable;
    CT_OnOff* m_allowSpaceOfSameStyleInTable;
    bool m_has_doNotSuppressIndentation;
    CT_OnOff* m_doNotSuppressIndentation;
    bool m_has_doNotAutofitConstrainedTables;
    CT_OnOff* m_doNotAutofitConstrainedTables;
    bool m_has_autofitToFirstFixedWidthCell;
    CT_OnOff* m_autofitToFirstFixedWidthCell;
    bool m_has_underlineTabInNumList;
    CT_OnOff* m_underlineTabInNumList;
    bool m_has_displayHangulFixedWidth;
    CT_OnOff* m_displayHangulFixedWidth;
    bool m_has_splitPgBreakAndParaMark;
    CT_OnOff* m_splitPgBreakAndParaMark;
    bool m_has_doNotVertAlignCellWithSp;
    CT_OnOff* m_doNotVertAlignCellWithSp;
    bool m_has_doNotBreakConstrainedForcedTable;
    CT_OnOff* m_doNotBreakConstrainedForcedTable;
    bool m_has_doNotVertAlignInTxbx;
    CT_OnOff* m_doNotVertAlignInTxbx;
    bool m_has_useAnsiKerningPairs;
    CT_OnOff* m_useAnsiKerningPairs;
    bool m_has_cachedColBalance;
    CT_OnOff* m_cachedColBalance;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Compat* default_instance_;
};

class CT_CompatSetting: public XSD::ComplexType
{
public:
    CT_CompatSetting();
    ~CT_CompatSetting();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CompatSetting& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_uri_attr() const;
    void set_uri_attr(const ns_s::ST_String& _uri_attr);
    const ns_s::ST_String& get_uri_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_String& _val_attr);
    const ns_s::ST_String& get_val_attr() const;
protected:
private:
    static CT_CompatSetting* default_instance_;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_uri_attr;
    ns_s::ST_String* m_uri_attr;
    bool m_has_val_attr;
    ns_s::ST_String* m_val_attr;
};

class CT_DocVar: public XSD::ComplexType
{
public:
    CT_DocVar();
    ~CT_DocVar();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocVar& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_String& _val_attr);
    const ns_s::ST_String& get_val_attr() const;
protected:
private:
    static CT_DocVar* default_instance_;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_val_attr;
    ns_s::ST_String* m_val_attr;
};

class CT_DocVars: public XSD::ComplexType
{
public:
    CT_DocVars();
    ~CT_DocVars();
    CT_DocVar* add_docVar();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocVars& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_docVar() const;
        CT_DocVar* mutable_docVar();
        const CT_DocVar& get_docVar() const;
    protected:
    private:
        bool m_has_docVar;
        CT_DocVar* m_docVar;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_DocVars* default_instance_;
};

class CT_DocRsids: public XSD::ComplexType
{
public:
    CT_DocRsids();
    ~CT_DocRsids();
    bool has_rsidRoot() const;
    CT_LongHexNumber* mutable_rsidRoot();
    const CT_LongHexNumber& get_rsidRoot() const;
    CT_LongHexNumber* add_rsid();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocRsids& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_rsid() const;
        CT_LongHexNumber* mutable_rsid();
        const CT_LongHexNumber& get_rsid() const;
    protected:
    private:
        bool m_has_rsid;
        CT_LongHexNumber* m_rsid;
    };
    bool m_has_rsidRoot;
    CT_LongHexNumber* m_rsidRoot;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_DocRsids* default_instance_;
};

class CT_CharacterSpacing: public XSD::ComplexType
{
public:
    CT_CharacterSpacing();
    ~CT_CharacterSpacing();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_CharacterSpacing& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_CharacterSpacing& _val_attr);
    const ST_CharacterSpacing& get_val_attr() const;
protected:
private:
    static CT_CharacterSpacing* default_instance_;
    bool m_has_val_attr;
    ST_CharacterSpacing* m_val_attr;
};

class CT_SaveThroughXslt: public XSD::ComplexType
{
public:
    CT_SaveThroughXslt();
    ~CT_SaveThroughXslt();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SaveThroughXslt& default_instance();
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
    bool has_solutionID_attr() const;
    void set_solutionID_attr(const ns_s::ST_String& _solutionID_attr);
    const ns_s::ST_String& get_solutionID_attr() const;
protected:
private:
    static CT_SaveThroughXslt* default_instance_;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
    bool m_has_solutionID_attr;
    ns_s::ST_String* m_solutionID_attr;
};

class CT_RPrDefault: public XSD::ComplexType
{
public:
    CT_RPrDefault();
    ~CT_RPrDefault();
    bool has_rPr() const;
    CT_RPr* mutable_rPr();
    const CT_RPr& get_rPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_RPrDefault& default_instance();
protected:
private:
    bool m_has_rPr;
    CT_RPr* m_rPr;
    static CT_RPrDefault* default_instance_;
};

class CT_PPrDefault: public XSD::ComplexType
{
public:
    CT_PPrDefault();
    ~CT_PPrDefault();
    bool has_pPr() const;
    CT_PPrGeneral* mutable_pPr();
    const CT_PPrGeneral& get_pPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PPrDefault& default_instance();
protected:
private:
    bool m_has_pPr;
    CT_PPrGeneral* m_pPr;
    static CT_PPrDefault* default_instance_;
};

class CT_DocDefaults: public XSD::ComplexType
{
public:
    CT_DocDefaults();
    ~CT_DocDefaults();
    bool has_rPrDefault() const;
    CT_RPrDefault* mutable_rPrDefault();
    const CT_RPrDefault& get_rPrDefault() const;
    bool has_pPrDefault() const;
    CT_PPrDefault* mutable_pPrDefault();
    const CT_PPrDefault& get_pPrDefault() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocDefaults& default_instance();
protected:
private:
    bool m_has_rPrDefault;
    CT_RPrDefault* m_rPrDefault;
    bool m_has_pPrDefault;
    CT_PPrDefault* m_pPrDefault;
    static CT_DocDefaults* default_instance_;
};

class CT_ColorSchemeMapping: public XSD::ComplexType
{
public:
    CT_ColorSchemeMapping();
    ~CT_ColorSchemeMapping();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ColorSchemeMapping& default_instance();
    bool has_bg1_attr() const;
    void set_bg1_attr(const ST_WmlColorSchemeIndex& _bg1_attr);
    const ST_WmlColorSchemeIndex& get_bg1_attr() const;
    bool has_t1_attr() const;
    void set_t1_attr(const ST_WmlColorSchemeIndex& _t1_attr);
    const ST_WmlColorSchemeIndex& get_t1_attr() const;
    bool has_bg2_attr() const;
    void set_bg2_attr(const ST_WmlColorSchemeIndex& _bg2_attr);
    const ST_WmlColorSchemeIndex& get_bg2_attr() const;
    bool has_t2_attr() const;
    void set_t2_attr(const ST_WmlColorSchemeIndex& _t2_attr);
    const ST_WmlColorSchemeIndex& get_t2_attr() const;
    bool has_accent1_attr() const;
    void set_accent1_attr(const ST_WmlColorSchemeIndex& _accent1_attr);
    const ST_WmlColorSchemeIndex& get_accent1_attr() const;
    bool has_accent2_attr() const;
    void set_accent2_attr(const ST_WmlColorSchemeIndex& _accent2_attr);
    const ST_WmlColorSchemeIndex& get_accent2_attr() const;
    bool has_accent3_attr() const;
    void set_accent3_attr(const ST_WmlColorSchemeIndex& _accent3_attr);
    const ST_WmlColorSchemeIndex& get_accent3_attr() const;
    bool has_accent4_attr() const;
    void set_accent4_attr(const ST_WmlColorSchemeIndex& _accent4_attr);
    const ST_WmlColorSchemeIndex& get_accent4_attr() const;
    bool has_accent5_attr() const;
    void set_accent5_attr(const ST_WmlColorSchemeIndex& _accent5_attr);
    const ST_WmlColorSchemeIndex& get_accent5_attr() const;
    bool has_accent6_attr() const;
    void set_accent6_attr(const ST_WmlColorSchemeIndex& _accent6_attr);
    const ST_WmlColorSchemeIndex& get_accent6_attr() const;
    bool has_hyperlink_attr() const;
    void set_hyperlink_attr(const ST_WmlColorSchemeIndex& _hyperlink_attr);
    const ST_WmlColorSchemeIndex& get_hyperlink_attr() const;
    bool has_followedHyperlink_attr() const;
    void set_followedHyperlink_attr(const ST_WmlColorSchemeIndex& _followedHyperlink_attr);
    const ST_WmlColorSchemeIndex& get_followedHyperlink_attr() const;
protected:
private:
    static CT_ColorSchemeMapping* default_instance_;
    bool m_has_bg1_attr;
    ST_WmlColorSchemeIndex* m_bg1_attr;
    bool m_has_t1_attr;
    ST_WmlColorSchemeIndex* m_t1_attr;
    bool m_has_bg2_attr;
    ST_WmlColorSchemeIndex* m_bg2_attr;
    bool m_has_t2_attr;
    ST_WmlColorSchemeIndex* m_t2_attr;
    bool m_has_accent1_attr;
    ST_WmlColorSchemeIndex* m_accent1_attr;
    bool m_has_accent2_attr;
    ST_WmlColorSchemeIndex* m_accent2_attr;
    bool m_has_accent3_attr;
    ST_WmlColorSchemeIndex* m_accent3_attr;
    bool m_has_accent4_attr;
    ST_WmlColorSchemeIndex* m_accent4_attr;
    bool m_has_accent5_attr;
    ST_WmlColorSchemeIndex* m_accent5_attr;
    bool m_has_accent6_attr;
    ST_WmlColorSchemeIndex* m_accent6_attr;
    bool m_has_hyperlink_attr;
    ST_WmlColorSchemeIndex* m_hyperlink_attr;
    bool m_has_followedHyperlink_attr;
    ST_WmlColorSchemeIndex* m_followedHyperlink_attr;
};

class CT_ReadingModeInkLockDown: public XSD::ComplexType
{
public:
    CT_ReadingModeInkLockDown();
    ~CT_ReadingModeInkLockDown();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ReadingModeInkLockDown& default_instance();
    bool has_actualPg_attr() const;
    void set_actualPg_attr(const ns_s::ST_OnOff& _actualPg_attr);
    const ns_s::ST_OnOff& get_actualPg_attr() const;
    bool has_w_attr() const;
    void set_w_attr(const ST_PixelsMeasure& _w_attr);
    const ST_PixelsMeasure& get_w_attr() const;
    bool has_h_attr() const;
    void set_h_attr(const ST_PixelsMeasure& _h_attr);
    const ST_PixelsMeasure& get_h_attr() const;
    bool has_fontSz_attr() const;
    void set_fontSz_attr(const ST_DecimalNumberOrPercent& _fontSz_attr);
    const ST_DecimalNumberOrPercent& get_fontSz_attr() const;
protected:
private:
    static CT_ReadingModeInkLockDown* default_instance_;
    bool m_has_actualPg_attr;
    ns_s::ST_OnOff* m_actualPg_attr;
    bool m_has_w_attr;
    ST_PixelsMeasure* m_w_attr;
    bool m_has_h_attr;
    ST_PixelsMeasure* m_h_attr;
    bool m_has_fontSz_attr;
    ST_DecimalNumberOrPercent* m_fontSz_attr;
};

class CT_WriteProtection: public XSD::ComplexType
{
public:
    CT_WriteProtection();
    ~CT_WriteProtection();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_WriteProtection& default_instance();
    bool has_recommended_attr() const;
    void set_recommended_attr(const ns_s::ST_OnOff& _recommended_attr);
    const ns_s::ST_OnOff& get_recommended_attr() const;
    bool has_algorithmName_attr() const;
    void set_algorithmName_attr(const ns_s::ST_String& _algorithmName_attr);
    const ns_s::ST_String& get_algorithmName_attr() const;
    bool has_hashValue_attr() const;
    void set_hashValue_attr(const XSD::base64Binary_& _hashValue_attr);
    const XSD::base64Binary_& get_hashValue_attr() const;
    bool has_saltValue_attr() const;
    void set_saltValue_attr(const XSD::base64Binary_& _saltValue_attr);
    const XSD::base64Binary_& get_saltValue_attr() const;
    bool has_spinCount_attr() const;
    void set_spinCount_attr(const ST_DecimalNumber& _spinCount_attr);
    const ST_DecimalNumber& get_spinCount_attr() const;
    bool has_cryptProviderType_attr() const;
    void set_cryptProviderType_attr(const ns_s::ST_CryptProv& _cryptProviderType_attr);
    const ns_s::ST_CryptProv& get_cryptProviderType_attr() const;
    bool has_cryptAlgorithmClass_attr() const;
    void set_cryptAlgorithmClass_attr(const ns_s::ST_AlgClass& _cryptAlgorithmClass_attr);
    const ns_s::ST_AlgClass& get_cryptAlgorithmClass_attr() const;
    bool has_cryptAlgorithmType_attr() const;
    void set_cryptAlgorithmType_attr(const ns_s::ST_AlgType& _cryptAlgorithmType_attr);
    const ns_s::ST_AlgType& get_cryptAlgorithmType_attr() const;
    bool has_cryptAlgorithmSid_attr() const;
    void set_cryptAlgorithmSid_attr(const ST_DecimalNumber& _cryptAlgorithmSid_attr);
    const ST_DecimalNumber& get_cryptAlgorithmSid_attr() const;
    bool has_cryptSpinCount_attr() const;
    void set_cryptSpinCount_attr(const ST_DecimalNumber& _cryptSpinCount_attr);
    const ST_DecimalNumber& get_cryptSpinCount_attr() const;
    bool has_cryptProvider_attr() const;
    void set_cryptProvider_attr(const ns_s::ST_String& _cryptProvider_attr);
    const ns_s::ST_String& get_cryptProvider_attr() const;
    bool has_algIdExt_attr() const;
    void set_algIdExt_attr(const ST_LongHexNumber& _algIdExt_attr);
    const ST_LongHexNumber& get_algIdExt_attr() const;
    bool has_algIdExtSource_attr() const;
    void set_algIdExtSource_attr(const ns_s::ST_String& _algIdExtSource_attr);
    const ns_s::ST_String& get_algIdExtSource_attr() const;
    bool has_cryptProviderTypeExt_attr() const;
    void set_cryptProviderTypeExt_attr(const ST_LongHexNumber& _cryptProviderTypeExt_attr);
    const ST_LongHexNumber& get_cryptProviderTypeExt_attr() const;
    bool has_cryptProviderTypeExtSource_attr() const;
    void set_cryptProviderTypeExtSource_attr(const ns_s::ST_String& _cryptProviderTypeExtSource_attr);
    const ns_s::ST_String& get_cryptProviderTypeExtSource_attr() const;
    bool has_hash_attr() const;
    void set_hash_attr(const XSD::base64Binary_& _hash_attr);
    const XSD::base64Binary_& get_hash_attr() const;
    bool has_salt_attr() const;
    void set_salt_attr(const XSD::base64Binary_& _salt_attr);
    const XSD::base64Binary_& get_salt_attr() const;
protected:
private:
    static CT_WriteProtection* default_instance_;
    bool m_has_recommended_attr;
    ns_s::ST_OnOff* m_recommended_attr;
    bool m_has_algorithmName_attr;
    ns_s::ST_String* m_algorithmName_attr;
    bool m_has_hashValue_attr;
    XSD::base64Binary_ m_hashValue_attr;
    bool m_has_saltValue_attr;
    XSD::base64Binary_ m_saltValue_attr;
    bool m_has_spinCount_attr;
    ST_DecimalNumber* m_spinCount_attr;
    bool m_has_cryptProviderType_attr;
    ns_s::ST_CryptProv* m_cryptProviderType_attr;
    bool m_has_cryptAlgorithmClass_attr;
    ns_s::ST_AlgClass* m_cryptAlgorithmClass_attr;
    bool m_has_cryptAlgorithmType_attr;
    ns_s::ST_AlgType* m_cryptAlgorithmType_attr;
    bool m_has_cryptAlgorithmSid_attr;
    ST_DecimalNumber* m_cryptAlgorithmSid_attr;
    bool m_has_cryptSpinCount_attr;
    ST_DecimalNumber* m_cryptSpinCount_attr;
    bool m_has_cryptProvider_attr;
    ns_s::ST_String* m_cryptProvider_attr;
    bool m_has_algIdExt_attr;
    ST_LongHexNumber* m_algIdExt_attr;
    bool m_has_algIdExtSource_attr;
    ns_s::ST_String* m_algIdExtSource_attr;
    bool m_has_cryptProviderTypeExt_attr;
    ST_LongHexNumber* m_cryptProviderTypeExt_attr;
    bool m_has_cryptProviderTypeExtSource_attr;
    ns_s::ST_String* m_cryptProviderTypeExtSource_attr;
    bool m_has_hash_attr;
    XSD::base64Binary_ m_hash_attr;
    bool m_has_salt_attr;
    XSD::base64Binary_ m_salt_attr;
};

class CT_Settings: public XSD::ComplexType
{
public:
    CT_Settings();
    ~CT_Settings();
    bool has_writeProtection() const;
    CT_WriteProtection* mutable_writeProtection();
    const CT_WriteProtection& get_writeProtection() const;
    bool has_view() const;
    CT_View* mutable_view();
    const CT_View& get_view() const;
    bool has_zoom() const;
    CT_Zoom* mutable_zoom();
    const CT_Zoom& get_zoom() const;
    bool has_removePersonalInformation() const;
    CT_OnOff* mutable_removePersonalInformation();
    const CT_OnOff& get_removePersonalInformation() const;
    bool has_removeDateAndTime() const;
    CT_OnOff* mutable_removeDateAndTime();
    const CT_OnOff& get_removeDateAndTime() const;
    bool has_doNotDisplayPageBoundaries() const;
    CT_OnOff* mutable_doNotDisplayPageBoundaries();
    const CT_OnOff& get_doNotDisplayPageBoundaries() const;
    bool has_displayBackgroundShape() const;
    CT_OnOff* mutable_displayBackgroundShape();
    const CT_OnOff& get_displayBackgroundShape() const;
    bool has_printPostScriptOverText() const;
    CT_OnOff* mutable_printPostScriptOverText();
    const CT_OnOff& get_printPostScriptOverText() const;
    bool has_printFractionalCharacterWidth() const;
    CT_OnOff* mutable_printFractionalCharacterWidth();
    const CT_OnOff& get_printFractionalCharacterWidth() const;
    bool has_printFormsData() const;
    CT_OnOff* mutable_printFormsData();
    const CT_OnOff& get_printFormsData() const;
    bool has_embedTrueTypeFonts() const;
    CT_OnOff* mutable_embedTrueTypeFonts();
    const CT_OnOff& get_embedTrueTypeFonts() const;
    bool has_embedSystemFonts() const;
    CT_OnOff* mutable_embedSystemFonts();
    const CT_OnOff& get_embedSystemFonts() const;
    bool has_saveSubsetFonts() const;
    CT_OnOff* mutable_saveSubsetFonts();
    const CT_OnOff& get_saveSubsetFonts() const;
    bool has_saveFormsData() const;
    CT_OnOff* mutable_saveFormsData();
    const CT_OnOff& get_saveFormsData() const;
    bool has_mirrorMargins() const;
    CT_OnOff* mutable_mirrorMargins();
    const CT_OnOff& get_mirrorMargins() const;
    bool has_alignBordersAndEdges() const;
    CT_OnOff* mutable_alignBordersAndEdges();
    const CT_OnOff& get_alignBordersAndEdges() const;
    bool has_bordersDoNotSurroundHeader() const;
    CT_OnOff* mutable_bordersDoNotSurroundHeader();
    const CT_OnOff& get_bordersDoNotSurroundHeader() const;
    bool has_bordersDoNotSurroundFooter() const;
    CT_OnOff* mutable_bordersDoNotSurroundFooter();
    const CT_OnOff& get_bordersDoNotSurroundFooter() const;
    bool has_gutterAtTop() const;
    CT_OnOff* mutable_gutterAtTop();
    const CT_OnOff& get_gutterAtTop() const;
    bool has_hideSpellingErrors() const;
    CT_OnOff* mutable_hideSpellingErrors();
    const CT_OnOff& get_hideSpellingErrors() const;
    bool has_hideGrammaticalErrors() const;
    CT_OnOff* mutable_hideGrammaticalErrors();
    const CT_OnOff& get_hideGrammaticalErrors() const;
    CT_WritingStyle* add_activeWritingStyle();
    bool has_proofState() const;
    CT_Proof* mutable_proofState();
    const CT_Proof& get_proofState() const;
    bool has_formsDesign() const;
    CT_OnOff* mutable_formsDesign();
    const CT_OnOff& get_formsDesign() const;
    bool has_attachedTemplate() const;
    CT_Rel* mutable_attachedTemplate();
    const CT_Rel& get_attachedTemplate() const;
    bool has_linkStyles() const;
    CT_OnOff* mutable_linkStyles();
    const CT_OnOff& get_linkStyles() const;
    bool has_stylePaneFormatFilter() const;
    CT_StylePaneFilter* mutable_stylePaneFormatFilter();
    const CT_StylePaneFilter& get_stylePaneFormatFilter() const;
    bool has_stylePaneSortMethod() const;
    CT_StyleSort* mutable_stylePaneSortMethod();
    const CT_StyleSort& get_stylePaneSortMethod() const;
    bool has_documentType() const;
    CT_DocType* mutable_documentType();
    const CT_DocType& get_documentType() const;
    bool has_mailMerge() const;
    CT_MailMerge* mutable_mailMerge();
    const CT_MailMerge& get_mailMerge() const;
    bool has_revisionView() const;
    CT_TrackChangesView* mutable_revisionView();
    const CT_TrackChangesView& get_revisionView() const;
    bool has_trackRevisions() const;
    CT_OnOff* mutable_trackRevisions();
    const CT_OnOff& get_trackRevisions() const;
    bool has_doNotTrackMoves() const;
    CT_OnOff* mutable_doNotTrackMoves();
    const CT_OnOff& get_doNotTrackMoves() const;
    bool has_doNotTrackFormatting() const;
    CT_OnOff* mutable_doNotTrackFormatting();
    const CT_OnOff& get_doNotTrackFormatting() const;
    bool has_documentProtection() const;
    CT_DocProtect* mutable_documentProtection();
    const CT_DocProtect& get_documentProtection() const;
    bool has_autoFormatOverride() const;
    CT_OnOff* mutable_autoFormatOverride();
    const CT_OnOff& get_autoFormatOverride() const;
    bool has_styleLockTheme() const;
    CT_OnOff* mutable_styleLockTheme();
    const CT_OnOff& get_styleLockTheme() const;
    bool has_styleLockQFSet() const;
    CT_OnOff* mutable_styleLockQFSet();
    const CT_OnOff& get_styleLockQFSet() const;
    bool has_defaultTabStop() const;
    CT_TwipsMeasure* mutable_defaultTabStop();
    const CT_TwipsMeasure& get_defaultTabStop() const;
    bool has_autoHyphenation() const;
    CT_OnOff* mutable_autoHyphenation();
    const CT_OnOff& get_autoHyphenation() const;
    bool has_consecutiveHyphenLimit() const;
    CT_DecimalNumber* mutable_consecutiveHyphenLimit();
    const CT_DecimalNumber& get_consecutiveHyphenLimit() const;
    bool has_hyphenationZone() const;
    CT_TwipsMeasure* mutable_hyphenationZone();
    const CT_TwipsMeasure& get_hyphenationZone() const;
    bool has_doNotHyphenateCaps() const;
    CT_OnOff* mutable_doNotHyphenateCaps();
    const CT_OnOff& get_doNotHyphenateCaps() const;
    bool has_showEnvelope() const;
    CT_OnOff* mutable_showEnvelope();
    const CT_OnOff& get_showEnvelope() const;
    bool has_summaryLength() const;
    CT_DecimalNumberOrPrecent* mutable_summaryLength();
    const CT_DecimalNumberOrPrecent& get_summaryLength() const;
    bool has_clickAndTypeStyle() const;
    CT_String* mutable_clickAndTypeStyle();
    const CT_String& get_clickAndTypeStyle() const;
    bool has_defaultTableStyle() const;
    CT_String* mutable_defaultTableStyle();
    const CT_String& get_defaultTableStyle() const;
    bool has_evenAndOddHeaders() const;
    CT_OnOff* mutable_evenAndOddHeaders();
    const CT_OnOff& get_evenAndOddHeaders() const;
    bool has_bookFoldRevPrinting() const;
    CT_OnOff* mutable_bookFoldRevPrinting();
    const CT_OnOff& get_bookFoldRevPrinting() const;
    bool has_bookFoldPrinting() const;
    CT_OnOff* mutable_bookFoldPrinting();
    const CT_OnOff& get_bookFoldPrinting() const;
    bool has_bookFoldPrintingSheets() const;
    CT_DecimalNumber* mutable_bookFoldPrintingSheets();
    const CT_DecimalNumber& get_bookFoldPrintingSheets() const;
    bool has_drawingGridHorizontalSpacing() const;
    CT_TwipsMeasure* mutable_drawingGridHorizontalSpacing();
    const CT_TwipsMeasure& get_drawingGridHorizontalSpacing() const;
    bool has_drawingGridVerticalSpacing() const;
    CT_TwipsMeasure* mutable_drawingGridVerticalSpacing();
    const CT_TwipsMeasure& get_drawingGridVerticalSpacing() const;
    bool has_displayHorizontalDrawingGridEvery() const;
    CT_DecimalNumber* mutable_displayHorizontalDrawingGridEvery();
    const CT_DecimalNumber& get_displayHorizontalDrawingGridEvery() const;
    bool has_displayVerticalDrawingGridEvery() const;
    CT_DecimalNumber* mutable_displayVerticalDrawingGridEvery();
    const CT_DecimalNumber& get_displayVerticalDrawingGridEvery() const;
    bool has_doNotUseMarginsForDrawingGridOrigin() const;
    CT_OnOff* mutable_doNotUseMarginsForDrawingGridOrigin();
    const CT_OnOff& get_doNotUseMarginsForDrawingGridOrigin() const;
    bool has_drawingGridHorizontalOrigin() const;
    CT_TwipsMeasure* mutable_drawingGridHorizontalOrigin();
    const CT_TwipsMeasure& get_drawingGridHorizontalOrigin() const;
    bool has_drawingGridVerticalOrigin() const;
    CT_TwipsMeasure* mutable_drawingGridVerticalOrigin();
    const CT_TwipsMeasure& get_drawingGridVerticalOrigin() const;
    bool has_doNotShadeFormData() const;
    CT_OnOff* mutable_doNotShadeFormData();
    const CT_OnOff& get_doNotShadeFormData() const;
    bool has_noPunctuationKerning() const;
    CT_OnOff* mutable_noPunctuationKerning();
    const CT_OnOff& get_noPunctuationKerning() const;
    bool has_characterSpacingControl() const;
    CT_CharacterSpacing* mutable_characterSpacingControl();
    const CT_CharacterSpacing& get_characterSpacingControl() const;
    bool has_printTwoOnOne() const;
    CT_OnOff* mutable_printTwoOnOne();
    const CT_OnOff& get_printTwoOnOne() const;
    bool has_strictFirstAndLastChars() const;
    CT_OnOff* mutable_strictFirstAndLastChars();
    const CT_OnOff& get_strictFirstAndLastChars() const;
    bool has_noLineBreaksAfter() const;
    CT_Kinsoku* mutable_noLineBreaksAfter();
    const CT_Kinsoku& get_noLineBreaksAfter() const;
    bool has_noLineBreaksBefore() const;
    CT_Kinsoku* mutable_noLineBreaksBefore();
    const CT_Kinsoku& get_noLineBreaksBefore() const;
    bool has_savePreviewPicture() const;
    CT_OnOff* mutable_savePreviewPicture();
    const CT_OnOff& get_savePreviewPicture() const;
    bool has_doNotValidateAgainstSchema() const;
    CT_OnOff* mutable_doNotValidateAgainstSchema();
    const CT_OnOff& get_doNotValidateAgainstSchema() const;
    bool has_saveInvalidXml() const;
    CT_OnOff* mutable_saveInvalidXml();
    const CT_OnOff& get_saveInvalidXml() const;
    bool has_ignoreMixedContent() const;
    CT_OnOff* mutable_ignoreMixedContent();
    const CT_OnOff& get_ignoreMixedContent() const;
    bool has_alwaysShowPlaceholderText() const;
    CT_OnOff* mutable_alwaysShowPlaceholderText();
    const CT_OnOff& get_alwaysShowPlaceholderText() const;
    bool has_doNotDemarcateInvalidXml() const;
    CT_OnOff* mutable_doNotDemarcateInvalidXml();
    const CT_OnOff& get_doNotDemarcateInvalidXml() const;
    bool has_saveXmlDataOnly() const;
    CT_OnOff* mutable_saveXmlDataOnly();
    const CT_OnOff& get_saveXmlDataOnly() const;
    bool has_useXSLTWhenSaving() const;
    CT_OnOff* mutable_useXSLTWhenSaving();
    const CT_OnOff& get_useXSLTWhenSaving() const;
    bool has_saveThroughXslt() const;
    CT_SaveThroughXslt* mutable_saveThroughXslt();
    const CT_SaveThroughXslt& get_saveThroughXslt() const;
    bool has_showXMLTags() const;
    CT_OnOff* mutable_showXMLTags();
    const CT_OnOff& get_showXMLTags() const;
    bool has_alwaysMergeEmptyNamespace() const;
    CT_OnOff* mutable_alwaysMergeEmptyNamespace();
    const CT_OnOff& get_alwaysMergeEmptyNamespace() const;
    bool has_updateFields() const;
    CT_OnOff* mutable_updateFields();
    const CT_OnOff& get_updateFields() const;
    bool has_hdrShapeDefaults() const;
    CT_ShapeDefaults* mutable_hdrShapeDefaults();
    const CT_ShapeDefaults& get_hdrShapeDefaults() const;
    bool has_footnotePr() const;
    CT_FtnDocProps* mutable_footnotePr();
    const CT_FtnDocProps& get_footnotePr() const;
    bool has_endnotePr() const;
    CT_EdnDocProps* mutable_endnotePr();
    const CT_EdnDocProps& get_endnotePr() const;
    bool has_compat() const;
    CT_Compat* mutable_compat();
    const CT_Compat& get_compat() const;
    bool has_docVars() const;
    CT_DocVars* mutable_docVars();
    const CT_DocVars& get_docVars() const;
    bool has_rsids() const;
    CT_DocRsids* mutable_rsids();
    const CT_DocRsids& get_rsids() const;
    bool has_m_mathPr() const;
    ns_m::CT_MathPr* mutable_m_mathPr();
    const ns_m::CT_MathPr& get_m_mathPr() const;
    CT_String* add_attachedSchema();
    bool has_themeFontLang() const;
    CT_Language* mutable_themeFontLang();
    const CT_Language& get_themeFontLang() const;
    bool has_clrSchemeMapping() const;
    CT_ColorSchemeMapping* mutable_clrSchemeMapping();
    const CT_ColorSchemeMapping& get_clrSchemeMapping() const;
    bool has_doNotIncludeSubdocsInStats() const;
    CT_OnOff* mutable_doNotIncludeSubdocsInStats();
    const CT_OnOff& get_doNotIncludeSubdocsInStats() const;
    bool has_doNotAutoCompressPictures() const;
    CT_OnOff* mutable_doNotAutoCompressPictures();
    const CT_OnOff& get_doNotAutoCompressPictures() const;
    bool has_forceUpgrade() const;
    CT_Empty* mutable_forceUpgrade();
    const CT_Empty& get_forceUpgrade() const;
    bool has_captions() const;
    CT_Captions* mutable_captions();
    const CT_Captions& get_captions() const;
    bool has_readModeInkLockDown() const;
    CT_ReadingModeInkLockDown* mutable_readModeInkLockDown();
    const CT_ReadingModeInkLockDown& get_readModeInkLockDown() const;
    CT_SmartTagType* add_smartTagType();
    bool has_sl_schemaLibrary() const;
    ns_sl::CT_SchemaLibrary* mutable_sl_schemaLibrary();
    const ns_sl::CT_SchemaLibrary& get_sl_schemaLibrary() const;
    bool has_shapeDefaults() const;
    CT_ShapeDefaults* mutable_shapeDefaults();
    const CT_ShapeDefaults& get_shapeDefaults() const;
    bool has_doNotEmbedSmartTags() const;
    CT_OnOff* mutable_doNotEmbedSmartTags();
    const CT_OnOff& get_doNotEmbedSmartTags() const;
    bool has_decimalSymbol() const;
    CT_String* mutable_decimalSymbol();
    const CT_String& get_decimalSymbol() const;
    bool has_listSeparator() const;
    CT_String* mutable_listSeparator();
    const CT_String& get_listSeparator() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Settings& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_activeWritingStyle() const;
        CT_WritingStyle* mutable_activeWritingStyle();
        const CT_WritingStyle& get_activeWritingStyle() const;
    protected:
    private:
        bool m_has_activeWritingStyle;
        CT_WritingStyle* m_activeWritingStyle;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_attachedSchema() const;
        CT_String* mutable_attachedSchema();
        const CT_String& get_attachedSchema() const;
    protected:
    private:
        bool m_has_attachedSchema;
        CT_String* m_attachedSchema;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_smartTagType() const;
        CT_SmartTagType* mutable_smartTagType();
        const CT_SmartTagType& get_smartTagType() const;
    protected:
    private:
        bool m_has_smartTagType;
        CT_SmartTagType* m_smartTagType;
    };
    bool m_has_writeProtection;
    CT_WriteProtection* m_writeProtection;
    bool m_has_view;
    CT_View* m_view;
    bool m_has_zoom;
    CT_Zoom* m_zoom;
    bool m_has_removePersonalInformation;
    CT_OnOff* m_removePersonalInformation;
    bool m_has_removeDateAndTime;
    CT_OnOff* m_removeDateAndTime;
    bool m_has_doNotDisplayPageBoundaries;
    CT_OnOff* m_doNotDisplayPageBoundaries;
    bool m_has_displayBackgroundShape;
    CT_OnOff* m_displayBackgroundShape;
    bool m_has_printPostScriptOverText;
    CT_OnOff* m_printPostScriptOverText;
    bool m_has_printFractionalCharacterWidth;
    CT_OnOff* m_printFractionalCharacterWidth;
    bool m_has_printFormsData;
    CT_OnOff* m_printFormsData;
    bool m_has_embedTrueTypeFonts;
    CT_OnOff* m_embedTrueTypeFonts;
    bool m_has_embedSystemFonts;
    CT_OnOff* m_embedSystemFonts;
    bool m_has_saveSubsetFonts;
    CT_OnOff* m_saveSubsetFonts;
    bool m_has_saveFormsData;
    CT_OnOff* m_saveFormsData;
    bool m_has_mirrorMargins;
    CT_OnOff* m_mirrorMargins;
    bool m_has_alignBordersAndEdges;
    CT_OnOff* m_alignBordersAndEdges;
    bool m_has_bordersDoNotSurroundHeader;
    CT_OnOff* m_bordersDoNotSurroundHeader;
    bool m_has_bordersDoNotSurroundFooter;
    CT_OnOff* m_bordersDoNotSurroundFooter;
    bool m_has_gutterAtTop;
    CT_OnOff* m_gutterAtTop;
    bool m_has_hideSpellingErrors;
    CT_OnOff* m_hideSpellingErrors;
    bool m_has_hideGrammaticalErrors;
    CT_OnOff* m_hideGrammaticalErrors;
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_proofState;
    CT_Proof* m_proofState;
    bool m_has_formsDesign;
    CT_OnOff* m_formsDesign;
    bool m_has_attachedTemplate;
    CT_Rel* m_attachedTemplate;
    bool m_has_linkStyles;
    CT_OnOff* m_linkStyles;
    bool m_has_stylePaneFormatFilter;
    CT_StylePaneFilter* m_stylePaneFormatFilter;
    bool m_has_stylePaneSortMethod;
    CT_StyleSort* m_stylePaneSortMethod;
    bool m_has_documentType;
    CT_DocType* m_documentType;
    bool m_has_mailMerge;
    CT_MailMerge* m_mailMerge;
    bool m_has_revisionView;
    CT_TrackChangesView* m_revisionView;
    bool m_has_trackRevisions;
    CT_OnOff* m_trackRevisions;
    bool m_has_doNotTrackMoves;
    CT_OnOff* m_doNotTrackMoves;
    bool m_has_doNotTrackFormatting;
    CT_OnOff* m_doNotTrackFormatting;
    bool m_has_documentProtection;
    CT_DocProtect* m_documentProtection;
    bool m_has_autoFormatOverride;
    CT_OnOff* m_autoFormatOverride;
    bool m_has_styleLockTheme;
    CT_OnOff* m_styleLockTheme;
    bool m_has_styleLockQFSet;
    CT_OnOff* m_styleLockQFSet;
    bool m_has_defaultTabStop;
    CT_TwipsMeasure* m_defaultTabStop;
    bool m_has_autoHyphenation;
    CT_OnOff* m_autoHyphenation;
    bool m_has_consecutiveHyphenLimit;
    CT_DecimalNumber* m_consecutiveHyphenLimit;
    bool m_has_hyphenationZone;
    CT_TwipsMeasure* m_hyphenationZone;
    bool m_has_doNotHyphenateCaps;
    CT_OnOff* m_doNotHyphenateCaps;
    bool m_has_showEnvelope;
    CT_OnOff* m_showEnvelope;
    bool m_has_summaryLength;
    CT_DecimalNumberOrPrecent* m_summaryLength;
    bool m_has_clickAndTypeStyle;
    CT_String* m_clickAndTypeStyle;
    bool m_has_defaultTableStyle;
    CT_String* m_defaultTableStyle;
    bool m_has_evenAndOddHeaders;
    CT_OnOff* m_evenAndOddHeaders;
    bool m_has_bookFoldRevPrinting;
    CT_OnOff* m_bookFoldRevPrinting;
    bool m_has_bookFoldPrinting;
    CT_OnOff* m_bookFoldPrinting;
    bool m_has_bookFoldPrintingSheets;
    CT_DecimalNumber* m_bookFoldPrintingSheets;
    bool m_has_drawingGridHorizontalSpacing;
    CT_TwipsMeasure* m_drawingGridHorizontalSpacing;
    bool m_has_drawingGridVerticalSpacing;
    CT_TwipsMeasure* m_drawingGridVerticalSpacing;
    bool m_has_displayHorizontalDrawingGridEvery;
    CT_DecimalNumber* m_displayHorizontalDrawingGridEvery;
    bool m_has_displayVerticalDrawingGridEvery;
    CT_DecimalNumber* m_displayVerticalDrawingGridEvery;
    bool m_has_doNotUseMarginsForDrawingGridOrigin;
    CT_OnOff* m_doNotUseMarginsForDrawingGridOrigin;
    bool m_has_drawingGridHorizontalOrigin;
    CT_TwipsMeasure* m_drawingGridHorizontalOrigin;
    bool m_has_drawingGridVerticalOrigin;
    CT_TwipsMeasure* m_drawingGridVerticalOrigin;
    bool m_has_doNotShadeFormData;
    CT_OnOff* m_doNotShadeFormData;
    bool m_has_noPunctuationKerning;
    CT_OnOff* m_noPunctuationKerning;
    bool m_has_characterSpacingControl;
    CT_CharacterSpacing* m_characterSpacingControl;
    bool m_has_printTwoOnOne;
    CT_OnOff* m_printTwoOnOne;
    bool m_has_strictFirstAndLastChars;
    CT_OnOff* m_strictFirstAndLastChars;
    bool m_has_noLineBreaksAfter;
    CT_Kinsoku* m_noLineBreaksAfter;
    bool m_has_noLineBreaksBefore;
    CT_Kinsoku* m_noLineBreaksBefore;
    bool m_has_savePreviewPicture;
    CT_OnOff* m_savePreviewPicture;
    bool m_has_doNotValidateAgainstSchema;
    CT_OnOff* m_doNotValidateAgainstSchema;
    bool m_has_saveInvalidXml;
    CT_OnOff* m_saveInvalidXml;
    bool m_has_ignoreMixedContent;
    CT_OnOff* m_ignoreMixedContent;
    bool m_has_alwaysShowPlaceholderText;
    CT_OnOff* m_alwaysShowPlaceholderText;
    bool m_has_doNotDemarcateInvalidXml;
    CT_OnOff* m_doNotDemarcateInvalidXml;
    bool m_has_saveXmlDataOnly;
    CT_OnOff* m_saveXmlDataOnly;
    bool m_has_useXSLTWhenSaving;
    CT_OnOff* m_useXSLTWhenSaving;
    bool m_has_saveThroughXslt;
    CT_SaveThroughXslt* m_saveThroughXslt;
    bool m_has_showXMLTags;
    CT_OnOff* m_showXMLTags;
    bool m_has_alwaysMergeEmptyNamespace;
    CT_OnOff* m_alwaysMergeEmptyNamespace;
    bool m_has_updateFields;
    CT_OnOff* m_updateFields;
    bool m_has_hdrShapeDefaults;
    CT_ShapeDefaults* m_hdrShapeDefaults;
    bool m_has_footnotePr;
    CT_FtnDocProps* m_footnotePr;
    bool m_has_endnotePr;
    CT_EdnDocProps* m_endnotePr;
    bool m_has_compat;
    CT_Compat* m_compat;
    bool m_has_docVars;
    CT_DocVars* m_docVars;
    bool m_has_rsids;
    CT_DocRsids* m_rsids;
    bool m_has_m_mathPr;
    ns_m::CT_MathPr* m_m_mathPr;
    vector<ChildGroup_2*> m_childGroupList_2;
    bool m_has_themeFontLang;
    CT_Language* m_themeFontLang;
    bool m_has_clrSchemeMapping;
    CT_ColorSchemeMapping* m_clrSchemeMapping;
    bool m_has_doNotIncludeSubdocsInStats;
    CT_OnOff* m_doNotIncludeSubdocsInStats;
    bool m_has_doNotAutoCompressPictures;
    CT_OnOff* m_doNotAutoCompressPictures;
    bool m_has_forceUpgrade;
    CT_Empty* m_forceUpgrade;
    bool m_has_captions;
    CT_Captions* m_captions;
    bool m_has_readModeInkLockDown;
    CT_ReadingModeInkLockDown* m_readModeInkLockDown;
    vector<ChildGroup_3*> m_childGroupList_3;
    bool m_has_sl_schemaLibrary;
    ns_sl::CT_SchemaLibrary* m_sl_schemaLibrary;
    bool m_has_shapeDefaults;
    CT_ShapeDefaults* m_shapeDefaults;
    bool m_has_doNotEmbedSmartTags;
    CT_OnOff* m_doNotEmbedSmartTags;
    bool m_has_decimalSymbol;
    CT_String* m_decimalSymbol;
    bool m_has_listSeparator;
    CT_String* m_listSeparator;
    static CT_Settings* default_instance_;
};

class CT_StyleSort: public XSD::ComplexType
{
public:
    CT_StyleSort();
    ~CT_StyleSort();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_StyleSort& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_StyleSort& _val_attr);
    const ST_StyleSort& get_val_attr() const;
protected:
private:
    static CT_StyleSort* default_instance_;
    bool m_has_val_attr;
    ST_StyleSort* m_val_attr;
};

class CT_StylePaneFilter: public XSD::ComplexType
{
public:
    CT_StylePaneFilter();
    ~CT_StylePaneFilter();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_StylePaneFilter& default_instance();
    bool has_allStyles_attr() const;
    void set_allStyles_attr(const ns_s::ST_OnOff& _allStyles_attr);
    const ns_s::ST_OnOff& get_allStyles_attr() const;
    bool has_customStyles_attr() const;
    void set_customStyles_attr(const ns_s::ST_OnOff& _customStyles_attr);
    const ns_s::ST_OnOff& get_customStyles_attr() const;
    bool has_latentStyles_attr() const;
    void set_latentStyles_attr(const ns_s::ST_OnOff& _latentStyles_attr);
    const ns_s::ST_OnOff& get_latentStyles_attr() const;
    bool has_stylesInUse_attr() const;
    void set_stylesInUse_attr(const ns_s::ST_OnOff& _stylesInUse_attr);
    const ns_s::ST_OnOff& get_stylesInUse_attr() const;
    bool has_headingStyles_attr() const;
    void set_headingStyles_attr(const ns_s::ST_OnOff& _headingStyles_attr);
    const ns_s::ST_OnOff& get_headingStyles_attr() const;
    bool has_numberingStyles_attr() const;
    void set_numberingStyles_attr(const ns_s::ST_OnOff& _numberingStyles_attr);
    const ns_s::ST_OnOff& get_numberingStyles_attr() const;
    bool has_tableStyles_attr() const;
    void set_tableStyles_attr(const ns_s::ST_OnOff& _tableStyles_attr);
    const ns_s::ST_OnOff& get_tableStyles_attr() const;
    bool has_directFormattingOnRuns_attr() const;
    void set_directFormattingOnRuns_attr(const ns_s::ST_OnOff& _directFormattingOnRuns_attr);
    const ns_s::ST_OnOff& get_directFormattingOnRuns_attr() const;
    bool has_directFormattingOnParagraphs_attr() const;
    void set_directFormattingOnParagraphs_attr(const ns_s::ST_OnOff& _directFormattingOnParagraphs_attr);
    const ns_s::ST_OnOff& get_directFormattingOnParagraphs_attr() const;
    bool has_directFormattingOnNumbering_attr() const;
    void set_directFormattingOnNumbering_attr(const ns_s::ST_OnOff& _directFormattingOnNumbering_attr);
    const ns_s::ST_OnOff& get_directFormattingOnNumbering_attr() const;
    bool has_directFormattingOnTables_attr() const;
    void set_directFormattingOnTables_attr(const ns_s::ST_OnOff& _directFormattingOnTables_attr);
    const ns_s::ST_OnOff& get_directFormattingOnTables_attr() const;
    bool has_clearFormatting_attr() const;
    void set_clearFormatting_attr(const ns_s::ST_OnOff& _clearFormatting_attr);
    const ns_s::ST_OnOff& get_clearFormatting_attr() const;
    bool has_top3HeadingStyles_attr() const;
    void set_top3HeadingStyles_attr(const ns_s::ST_OnOff& _top3HeadingStyles_attr);
    const ns_s::ST_OnOff& get_top3HeadingStyles_attr() const;
    bool has_visibleStyles_attr() const;
    void set_visibleStyles_attr(const ns_s::ST_OnOff& _visibleStyles_attr);
    const ns_s::ST_OnOff& get_visibleStyles_attr() const;
    bool has_alternateStyleNames_attr() const;
    void set_alternateStyleNames_attr(const ns_s::ST_OnOff& _alternateStyleNames_attr);
    const ns_s::ST_OnOff& get_alternateStyleNames_attr() const;
    bool has_val_attr() const;
    void set_val_attr(const ST_ShortHexNumber& _val_attr);
    const ST_ShortHexNumber& get_val_attr() const;
protected:
private:
    static CT_StylePaneFilter* default_instance_;
    bool m_has_allStyles_attr;
    ns_s::ST_OnOff* m_allStyles_attr;
    bool m_has_customStyles_attr;
    ns_s::ST_OnOff* m_customStyles_attr;
    bool m_has_latentStyles_attr;
    ns_s::ST_OnOff* m_latentStyles_attr;
    bool m_has_stylesInUse_attr;
    ns_s::ST_OnOff* m_stylesInUse_attr;
    bool m_has_headingStyles_attr;
    ns_s::ST_OnOff* m_headingStyles_attr;
    bool m_has_numberingStyles_attr;
    ns_s::ST_OnOff* m_numberingStyles_attr;
    bool m_has_tableStyles_attr;
    ns_s::ST_OnOff* m_tableStyles_attr;
    bool m_has_directFormattingOnRuns_attr;
    ns_s::ST_OnOff* m_directFormattingOnRuns_attr;
    bool m_has_directFormattingOnParagraphs_attr;
    ns_s::ST_OnOff* m_directFormattingOnParagraphs_attr;
    bool m_has_directFormattingOnNumbering_attr;
    ns_s::ST_OnOff* m_directFormattingOnNumbering_attr;
    bool m_has_directFormattingOnTables_attr;
    ns_s::ST_OnOff* m_directFormattingOnTables_attr;
    bool m_has_clearFormatting_attr;
    ns_s::ST_OnOff* m_clearFormatting_attr;
    bool m_has_top3HeadingStyles_attr;
    ns_s::ST_OnOff* m_top3HeadingStyles_attr;
    bool m_has_visibleStyles_attr;
    ns_s::ST_OnOff* m_visibleStyles_attr;
    bool m_has_alternateStyleNames_attr;
    ns_s::ST_OnOff* m_alternateStyleNames_attr;
    bool m_has_val_attr;
    ST_ShortHexNumber* m_val_attr;
};

class CT_WebSettings: public XSD::ComplexType
{
public:
    CT_WebSettings();
    ~CT_WebSettings();
    bool has_frameset() const;
    CT_Frameset* mutable_frameset();
    const CT_Frameset& get_frameset() const;
    bool has_divs() const;
    CT_Divs* mutable_divs();
    const CT_Divs& get_divs() const;
    bool has_encoding() const;
    CT_String* mutable_encoding();
    const CT_String& get_encoding() const;
    bool has_optimizeForBrowser() const;
    CT_OptimizeForBrowser* mutable_optimizeForBrowser();
    const CT_OptimizeForBrowser& get_optimizeForBrowser() const;
    bool has_relyOnVML() const;
    CT_OnOff* mutable_relyOnVML();
    const CT_OnOff& get_relyOnVML() const;
    bool has_allowPNG() const;
    CT_OnOff* mutable_allowPNG();
    const CT_OnOff& get_allowPNG() const;
    bool has_doNotRelyOnCSS() const;
    CT_OnOff* mutable_doNotRelyOnCSS();
    const CT_OnOff& get_doNotRelyOnCSS() const;
    bool has_doNotSaveAsSingleFile() const;
    CT_OnOff* mutable_doNotSaveAsSingleFile();
    const CT_OnOff& get_doNotSaveAsSingleFile() const;
    bool has_doNotOrganizeInFolder() const;
    CT_OnOff* mutable_doNotOrganizeInFolder();
    const CT_OnOff& get_doNotOrganizeInFolder() const;
    bool has_doNotUseLongFileNames() const;
    CT_OnOff* mutable_doNotUseLongFileNames();
    const CT_OnOff& get_doNotUseLongFileNames() const;
    bool has_pixelsPerInch() const;
    CT_DecimalNumber* mutable_pixelsPerInch();
    const CT_DecimalNumber& get_pixelsPerInch() const;
    bool has_targetScreenSz() const;
    CT_TargetScreenSz* mutable_targetScreenSz();
    const CT_TargetScreenSz& get_targetScreenSz() const;
    bool has_saveSmartTagsAsXml() const;
    CT_OnOff* mutable_saveSmartTagsAsXml();
    const CT_OnOff& get_saveSmartTagsAsXml() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_WebSettings& default_instance();
protected:
private:
    bool m_has_frameset;
    CT_Frameset* m_frameset;
    bool m_has_divs;
    CT_Divs* m_divs;
    bool m_has_encoding;
    CT_String* m_encoding;
    bool m_has_optimizeForBrowser;
    CT_OptimizeForBrowser* m_optimizeForBrowser;
    bool m_has_relyOnVML;
    CT_OnOff* m_relyOnVML;
    bool m_has_allowPNG;
    CT_OnOff* m_allowPNG;
    bool m_has_doNotRelyOnCSS;
    CT_OnOff* m_doNotRelyOnCSS;
    bool m_has_doNotSaveAsSingleFile;
    CT_OnOff* m_doNotSaveAsSingleFile;
    bool m_has_doNotOrganizeInFolder;
    CT_OnOff* m_doNotOrganizeInFolder;
    bool m_has_doNotUseLongFileNames;
    CT_OnOff* m_doNotUseLongFileNames;
    bool m_has_pixelsPerInch;
    CT_DecimalNumber* m_pixelsPerInch;
    bool m_has_targetScreenSz;
    CT_TargetScreenSz* m_targetScreenSz;
    bool m_has_saveSmartTagsAsXml;
    CT_OnOff* m_saveSmartTagsAsXml;
    static CT_WebSettings* default_instance_;
};

class CT_FrameScrollbar: public XSD::ComplexType
{
public:
    CT_FrameScrollbar();
    ~CT_FrameScrollbar();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FrameScrollbar& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_FrameScrollbar& _val_attr);
    const ST_FrameScrollbar& get_val_attr() const;
protected:
private:
    static CT_FrameScrollbar* default_instance_;
    bool m_has_val_attr;
    ST_FrameScrollbar* m_val_attr;
};

class CT_OptimizeForBrowser: public XSD::ComplexType
{
public:
    CT_OptimizeForBrowser();
    ~CT_OptimizeForBrowser();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_OptimizeForBrowser& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_OnOff& _val_attr);
    const ns_s::ST_OnOff& get_val_attr() const;
    bool has_target_attr() const;
    void set_target_attr(const ns_s::ST_String& _target_attr);
    const ns_s::ST_String& get_target_attr() const;
protected:
private:
    static CT_OptimizeForBrowser* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_OnOff* m_val_attr;
    bool m_has_target_attr;
    ns_s::ST_String* m_target_attr;
};

class CT_Frame: public XSD::ComplexType
{
public:
    CT_Frame();
    ~CT_Frame();
    bool has_sz() const;
    CT_String* mutable_sz();
    const CT_String& get_sz() const;
    bool has_name() const;
    CT_String* mutable_name();
    const CT_String& get_name() const;
    bool has_title() const;
    CT_String* mutable_title();
    const CT_String& get_title() const;
    bool has_longDesc() const;
    CT_Rel* mutable_longDesc();
    const CT_Rel& get_longDesc() const;
    bool has_sourceFileName() const;
    CT_Rel* mutable_sourceFileName();
    const CT_Rel& get_sourceFileName() const;
    bool has_marW() const;
    CT_PixelsMeasure* mutable_marW();
    const CT_PixelsMeasure& get_marW() const;
    bool has_marH() const;
    CT_PixelsMeasure* mutable_marH();
    const CT_PixelsMeasure& get_marH() const;
    bool has_scrollbar() const;
    CT_FrameScrollbar* mutable_scrollbar();
    const CT_FrameScrollbar& get_scrollbar() const;
    bool has_noResizeAllowed() const;
    CT_OnOff* mutable_noResizeAllowed();
    const CT_OnOff& get_noResizeAllowed() const;
    bool has_linkedToFile() const;
    CT_OnOff* mutable_linkedToFile();
    const CT_OnOff& get_linkedToFile() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Frame& default_instance();
protected:
private:
    bool m_has_sz;
    CT_String* m_sz;
    bool m_has_name;
    CT_String* m_name;
    bool m_has_title;
    CT_String* m_title;
    bool m_has_longDesc;
    CT_Rel* m_longDesc;
    bool m_has_sourceFileName;
    CT_Rel* m_sourceFileName;
    bool m_has_marW;
    CT_PixelsMeasure* m_marW;
    bool m_has_marH;
    CT_PixelsMeasure* m_marH;
    bool m_has_scrollbar;
    CT_FrameScrollbar* m_scrollbar;
    bool m_has_noResizeAllowed;
    CT_OnOff* m_noResizeAllowed;
    bool m_has_linkedToFile;
    CT_OnOff* m_linkedToFile;
    static CT_Frame* default_instance_;
};

class CT_FrameLayout: public XSD::ComplexType
{
public:
    CT_FrameLayout();
    ~CT_FrameLayout();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FrameLayout& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_FrameLayout& _val_attr);
    const ST_FrameLayout& get_val_attr() const;
protected:
private:
    static CT_FrameLayout* default_instance_;
    bool m_has_val_attr;
    ST_FrameLayout* m_val_attr;
};

class CT_FramesetSplitbar: public XSD::ComplexType
{
public:
    CT_FramesetSplitbar();
    ~CT_FramesetSplitbar();
    bool has_w() const;
    CT_TwipsMeasure* mutable_w();
    const CT_TwipsMeasure& get_w() const;
    bool has_color() const;
    CT_Color* mutable_color();
    const CT_Color& get_color() const;
    bool has_noBorder() const;
    CT_OnOff* mutable_noBorder();
    const CT_OnOff& get_noBorder() const;
    bool has_flatBorders() const;
    CT_OnOff* mutable_flatBorders();
    const CT_OnOff& get_flatBorders() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FramesetSplitbar& default_instance();
protected:
private:
    bool m_has_w;
    CT_TwipsMeasure* m_w;
    bool m_has_color;
    CT_Color* m_color;
    bool m_has_noBorder;
    CT_OnOff* m_noBorder;
    bool m_has_flatBorders;
    CT_OnOff* m_flatBorders;
    static CT_FramesetSplitbar* default_instance_;
};

class CT_Frameset: public XSD::ComplexType
{
public:
    CT_Frameset();
    ~CT_Frameset();
    bool has_sz() const;
    CT_String* mutable_sz();
    const CT_String& get_sz() const;
    bool has_framesetSplitbar() const;
    CT_FramesetSplitbar* mutable_framesetSplitbar();
    const CT_FramesetSplitbar& get_framesetSplitbar() const;
    bool has_frameLayout() const;
    CT_FrameLayout* mutable_frameLayout();
    const CT_FrameLayout& get_frameLayout() const;
    bool has_title() const;
    CT_String* mutable_title();
    const CT_String& get_title() const;
    CT_Frameset* add_frameset();
    CT_Frame* add_frame();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Frameset& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_frameset() const;
        CT_Frameset* mutable_frameset();
        const CT_Frameset& get_frameset() const;
        bool has_frame() const;
        CT_Frame* mutable_frame();
        const CT_Frame& get_frame() const;
    protected:
    private:
        bool m_has_frameset;
        CT_Frameset* m_frameset;
        bool m_has_frame;
        CT_Frame* m_frame;
    };
    bool m_has_sz;
    CT_String* m_sz;
    bool m_has_framesetSplitbar;
    CT_FramesetSplitbar* m_framesetSplitbar;
    bool m_has_frameLayout;
    CT_FrameLayout* m_frameLayout;
    bool m_has_title;
    CT_String* m_title;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Frameset* default_instance_;
};

class CT_NumPicBullet: public XSD::ComplexType
{
public:
    CT_NumPicBullet();
    ~CT_NumPicBullet();
    bool has_pict() const;
    CT_Picture* mutable_pict();
    const CT_Picture& get_pict() const;
    bool has_drawing() const;
    CT_Drawing* mutable_drawing();
    const CT_Drawing& get_drawing() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NumPicBullet& default_instance();
    bool has_numPicBulletId_attr() const;
    void set_numPicBulletId_attr(const ST_DecimalNumber& _numPicBulletId_attr);
    const ST_DecimalNumber& get_numPicBulletId_attr() const;
protected:
private:
    bool m_has_pict;
    CT_Picture* m_pict;
    bool m_has_drawing;
    CT_Drawing* m_drawing;
    static CT_NumPicBullet* default_instance_;
    bool m_has_numPicBulletId_attr;
    ST_DecimalNumber* m_numPicBulletId_attr;
};

class CT_LevelSuffix: public XSD::ComplexType
{
public:
    CT_LevelSuffix();
    ~CT_LevelSuffix();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LevelSuffix& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_LevelSuffix& _val_attr);
    const ST_LevelSuffix& get_val_attr() const;
protected:
private:
    static CT_LevelSuffix* default_instance_;
    bool m_has_val_attr;
    ST_LevelSuffix* m_val_attr;
};

class CT_LevelText: public XSD::ComplexType
{
public:
    CT_LevelText();
    ~CT_LevelText();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LevelText& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_String& _val_attr);
    const ns_s::ST_String& get_val_attr() const;
    bool has_null_attr() const;
    void set_null_attr(const ns_s::ST_OnOff& _null_attr);
    const ns_s::ST_OnOff& get_null_attr() const;
protected:
private:
    static CT_LevelText* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_String* m_val_attr;
    bool m_has_null_attr;
    ns_s::ST_OnOff* m_null_attr;
};

class CT_LvlLegacy: public XSD::ComplexType
{
public:
    CT_LvlLegacy();
    ~CT_LvlLegacy();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LvlLegacy& default_instance();
    bool has_legacy_attr() const;
    void set_legacy_attr(const ns_s::ST_OnOff& _legacy_attr);
    const ns_s::ST_OnOff& get_legacy_attr() const;
    bool has_legacySpace_attr() const;
    void set_legacySpace_attr(const ns_s::ST_TwipsMeasure& _legacySpace_attr);
    const ns_s::ST_TwipsMeasure& get_legacySpace_attr() const;
    bool has_legacyIndent_attr() const;
    void set_legacyIndent_attr(const ST_SignedTwipsMeasure& _legacyIndent_attr);
    const ST_SignedTwipsMeasure& get_legacyIndent_attr() const;
protected:
private:
    static CT_LvlLegacy* default_instance_;
    bool m_has_legacy_attr;
    ns_s::ST_OnOff* m_legacy_attr;
    bool m_has_legacySpace_attr;
    ns_s::ST_TwipsMeasure* m_legacySpace_attr;
    bool m_has_legacyIndent_attr;
    ST_SignedTwipsMeasure* m_legacyIndent_attr;
};

class CT_Lvl: public XSD::ComplexType
{
public:
    CT_Lvl();
    ~CT_Lvl();
    bool has_start() const;
    CT_DecimalNumber* mutable_start();
    const CT_DecimalNumber& get_start() const;
    bool has_numFmt() const;
    CT_NumFmt* mutable_numFmt();
    const CT_NumFmt& get_numFmt() const;
    bool has_lvlRestart() const;
    CT_DecimalNumber* mutable_lvlRestart();
    const CT_DecimalNumber& get_lvlRestart() const;
    bool has_pStyle() const;
    CT_String* mutable_pStyle();
    const CT_String& get_pStyle() const;
    bool has_isLgl() const;
    CT_OnOff* mutable_isLgl();
    const CT_OnOff& get_isLgl() const;
    bool has_suff() const;
    CT_LevelSuffix* mutable_suff();
    const CT_LevelSuffix& get_suff() const;
    bool has_lvlText() const;
    CT_LevelText* mutable_lvlText();
    const CT_LevelText& get_lvlText() const;
    bool has_lvlPicBulletId() const;
    CT_DecimalNumber* mutable_lvlPicBulletId();
    const CT_DecimalNumber& get_lvlPicBulletId() const;
    bool has_legacy() const;
    CT_LvlLegacy* mutable_legacy();
    const CT_LvlLegacy& get_legacy() const;
    bool has_lvlJc() const;
    CT_Jc* mutable_lvlJc();
    const CT_Jc& get_lvlJc() const;
    bool has_pPr() const;
    CT_PPrGeneral* mutable_pPr();
    const CT_PPrGeneral& get_pPr() const;
    bool has_rPr() const;
    CT_RPr* mutable_rPr();
    const CT_RPr& get_rPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Lvl& default_instance();
    bool has_ilvl_attr() const;
    void set_ilvl_attr(const ST_DecimalNumber& _ilvl_attr);
    const ST_DecimalNumber& get_ilvl_attr() const;
    bool has_tplc_attr() const;
    void set_tplc_attr(const ST_LongHexNumber& _tplc_attr);
    const ST_LongHexNumber& get_tplc_attr() const;
    bool has_tentative_attr() const;
    void set_tentative_attr(const ns_s::ST_OnOff& _tentative_attr);
    const ns_s::ST_OnOff& get_tentative_attr() const;
protected:
private:
    bool m_has_start;
    CT_DecimalNumber* m_start;
    bool m_has_numFmt;
    CT_NumFmt* m_numFmt;
    bool m_has_lvlRestart;
    CT_DecimalNumber* m_lvlRestart;
    bool m_has_pStyle;
    CT_String* m_pStyle;
    bool m_has_isLgl;
    CT_OnOff* m_isLgl;
    bool m_has_suff;
    CT_LevelSuffix* m_suff;
    bool m_has_lvlText;
    CT_LevelText* m_lvlText;
    bool m_has_lvlPicBulletId;
    CT_DecimalNumber* m_lvlPicBulletId;
    bool m_has_legacy;
    CT_LvlLegacy* m_legacy;
    bool m_has_lvlJc;
    CT_Jc* m_lvlJc;
    bool m_has_pPr;
    CT_PPrGeneral* m_pPr;
    bool m_has_rPr;
    CT_RPr* m_rPr;
    static CT_Lvl* default_instance_;
    bool m_has_ilvl_attr;
    ST_DecimalNumber* m_ilvl_attr;
    bool m_has_tplc_attr;
    ST_LongHexNumber* m_tplc_attr;
    bool m_has_tentative_attr;
    ns_s::ST_OnOff* m_tentative_attr;
};

class CT_MultiLevelType: public XSD::ComplexType
{
public:
    CT_MultiLevelType();
    ~CT_MultiLevelType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_MultiLevelType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_MultiLevelType& _val_attr);
    const ST_MultiLevelType& get_val_attr() const;
protected:
private:
    static CT_MultiLevelType* default_instance_;
    bool m_has_val_attr;
    ST_MultiLevelType* m_val_attr;
};

class CT_AbstractNum: public XSD::ComplexType
{
public:
    CT_AbstractNum();
    ~CT_AbstractNum();
    bool has_nsid() const;
    CT_LongHexNumber* mutable_nsid();
    const CT_LongHexNumber& get_nsid() const;
    bool has_multiLevelType() const;
    CT_MultiLevelType* mutable_multiLevelType();
    const CT_MultiLevelType& get_multiLevelType() const;
    bool has_tmpl() const;
    CT_LongHexNumber* mutable_tmpl();
    const CT_LongHexNumber& get_tmpl() const;
    bool has_name() const;
    CT_String* mutable_name();
    const CT_String& get_name() const;
    bool has_styleLink() const;
    CT_String* mutable_styleLink();
    const CT_String& get_styleLink() const;
    bool has_numStyleLink() const;
    CT_String* mutable_numStyleLink();
    const CT_String& get_numStyleLink() const;
    CT_Lvl* add_lvl();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AbstractNum& default_instance();
    bool has_abstractNumId_attr() const;
    void set_abstractNumId_attr(const ST_DecimalNumber& _abstractNumId_attr);
    const ST_DecimalNumber& get_abstractNumId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_lvl() const;
        CT_Lvl* mutable_lvl();
        const CT_Lvl& get_lvl() const;
    protected:
    private:
        bool m_has_lvl;
        CT_Lvl* m_lvl;
    };
    bool m_has_nsid;
    CT_LongHexNumber* m_nsid;
    bool m_has_multiLevelType;
    CT_MultiLevelType* m_multiLevelType;
    bool m_has_tmpl;
    CT_LongHexNumber* m_tmpl;
    bool m_has_name;
    CT_String* m_name;
    bool m_has_styleLink;
    CT_String* m_styleLink;
    bool m_has_numStyleLink;
    CT_String* m_numStyleLink;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_AbstractNum* default_instance_;
    bool m_has_abstractNumId_attr;
    ST_DecimalNumber* m_abstractNumId_attr;
};

class CT_NumLvl: public XSD::ComplexType
{
public:
    CT_NumLvl();
    ~CT_NumLvl();
    bool has_startOverride() const;
    CT_DecimalNumber* mutable_startOverride();
    const CT_DecimalNumber& get_startOverride() const;
    bool has_lvl() const;
    CT_Lvl* mutable_lvl();
    const CT_Lvl& get_lvl() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_NumLvl& default_instance();
    bool has_ilvl_attr() const;
    void set_ilvl_attr(const ST_DecimalNumber& _ilvl_attr);
    const ST_DecimalNumber& get_ilvl_attr() const;
protected:
private:
    bool m_has_startOverride;
    CT_DecimalNumber* m_startOverride;
    bool m_has_lvl;
    CT_Lvl* m_lvl;
    static CT_NumLvl* default_instance_;
    bool m_has_ilvl_attr;
    ST_DecimalNumber* m_ilvl_attr;
};

class CT_Num: public XSD::ComplexType
{
public:
    CT_Num();
    ~CT_Num();
    bool has_abstractNumId() const;
    CT_DecimalNumber* mutable_abstractNumId();
    const CT_DecimalNumber& get_abstractNumId() const;
    CT_NumLvl* add_lvlOverride();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Num& default_instance();
    bool has_numId_attr() const;
    void set_numId_attr(const ST_DecimalNumber& _numId_attr);
    const ST_DecimalNumber& get_numId_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_lvlOverride() const;
        CT_NumLvl* mutable_lvlOverride();
        const CT_NumLvl& get_lvlOverride() const;
    protected:
    private:
        bool m_has_lvlOverride;
        CT_NumLvl* m_lvlOverride;
    };
    bool m_has_abstractNumId;
    CT_DecimalNumber* m_abstractNumId;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Num* default_instance_;
    bool m_has_numId_attr;
    ST_DecimalNumber* m_numId_attr;
};

class CT_Numbering: public XSD::ComplexType
{
public:
    CT_Numbering();
    ~CT_Numbering();
    CT_NumPicBullet* add_numPicBullet();
    CT_AbstractNum* add_abstractNum();
    CT_Num* add_num();
    bool has_numIdMacAtCleanup() const;
    CT_DecimalNumber* mutable_numIdMacAtCleanup();
    const CT_DecimalNumber& get_numIdMacAtCleanup() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Numbering& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_numPicBullet() const;
        CT_NumPicBullet* mutable_numPicBullet();
        const CT_NumPicBullet& get_numPicBullet() const;
        bool has_abstractNum() const;
        CT_AbstractNum* mutable_abstractNum();
        const CT_AbstractNum& get_abstractNum() const;
        bool has_num() const;
        CT_Num* mutable_num();
        const CT_Num& get_num() const;
    protected:
    private:
        bool m_has_numPicBullet;
        CT_NumPicBullet* m_numPicBullet;
        bool m_has_abstractNum;
        CT_AbstractNum* m_abstractNum;
        bool m_has_num;
        CT_Num* m_num;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_numIdMacAtCleanup;
    CT_DecimalNumber* m_numIdMacAtCleanup;
    static CT_Numbering* default_instance_;
};

class CT_TblStylePr: public XSD::ComplexType
{
public:
    CT_TblStylePr();
    ~CT_TblStylePr();
    bool has_pPr() const;
    CT_PPrGeneral* mutable_pPr();
    const CT_PPrGeneral& get_pPr() const;
    bool has_rPr() const;
    CT_RPr* mutable_rPr();
    const CT_RPr& get_rPr() const;
    bool has_tblPr() const;
    CT_TblPrBase* mutable_tblPr();
    const CT_TblPrBase& get_tblPr() const;
    bool has_trPr() const;
    CT_TrPr* mutable_trPr();
    const CT_TrPr& get_trPr() const;
    bool has_tcPr() const;
    CT_TcPr* mutable_tcPr();
    const CT_TcPr& get_tcPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TblStylePr& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_TblStyleOverrideType& _type_attr);
    const ST_TblStyleOverrideType& get_type_attr() const;
protected:
private:
    bool m_has_pPr;
    CT_PPrGeneral* m_pPr;
    bool m_has_rPr;
    CT_RPr* m_rPr;
    bool m_has_tblPr;
    CT_TblPrBase* m_tblPr;
    bool m_has_trPr;
    CT_TrPr* m_trPr;
    bool m_has_tcPr;
    CT_TcPr* m_tcPr;
    static CT_TblStylePr* default_instance_;
    bool m_has_type_attr;
    ST_TblStyleOverrideType* m_type_attr;
};

class CT_Style: public XSD::ComplexType
{
public:
    CT_Style();
    ~CT_Style();
    bool has_name() const;
    CT_String* mutable_name();
    const CT_String& get_name() const;
    bool has_aliases() const;
    CT_String* mutable_aliases();
    const CT_String& get_aliases() const;
    bool has_basedOn() const;
    CT_String* mutable_basedOn();
    const CT_String& get_basedOn() const;
    bool has_next() const;
    CT_String* mutable_next();
    const CT_String& get_next() const;
    bool has_link() const;
    CT_String* mutable_link();
    const CT_String& get_link() const;
    bool has_autoRedefine() const;
    CT_OnOff* mutable_autoRedefine();
    const CT_OnOff& get_autoRedefine() const;
    bool has_hidden() const;
    CT_OnOff* mutable_hidden();
    const CT_OnOff& get_hidden() const;
    bool has_uiPriority() const;
    CT_DecimalNumber* mutable_uiPriority();
    const CT_DecimalNumber& get_uiPriority() const;
    bool has_semiHidden() const;
    CT_OnOff* mutable_semiHidden();
    const CT_OnOff& get_semiHidden() const;
    bool has_unhideWhenUsed() const;
    CT_OnOff* mutable_unhideWhenUsed();
    const CT_OnOff& get_unhideWhenUsed() const;
    bool has_qFormat() const;
    CT_OnOff* mutable_qFormat();
    const CT_OnOff& get_qFormat() const;
    bool has_locked() const;
    CT_OnOff* mutable_locked();
    const CT_OnOff& get_locked() const;
    bool has_personal() const;
    CT_OnOff* mutable_personal();
    const CT_OnOff& get_personal() const;
    bool has_personalCompose() const;
    CT_OnOff* mutable_personalCompose();
    const CT_OnOff& get_personalCompose() const;
    bool has_personalReply() const;
    CT_OnOff* mutable_personalReply();
    const CT_OnOff& get_personalReply() const;
    bool has_rsid() const;
    CT_LongHexNumber* mutable_rsid();
    const CT_LongHexNumber& get_rsid() const;
    bool has_pPr() const;
    CT_PPrGeneral* mutable_pPr();
    const CT_PPrGeneral& get_pPr() const;
    bool has_rPr() const;
    CT_RPr* mutable_rPr();
    const CT_RPr& get_rPr() const;
    bool has_tblPr() const;
    CT_TblPrBase* mutable_tblPr();
    const CT_TblPrBase& get_tblPr() const;
    bool has_trPr() const;
    CT_TrPr* mutable_trPr();
    const CT_TrPr& get_trPr() const;
    bool has_tcPr() const;
    CT_TcPr* mutable_tcPr();
    const CT_TcPr& get_tcPr() const;
    CT_TblStylePr* add_tblStylePr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Style& default_instance();
    bool has_type_attr() const;
    void set_type_attr(const ST_StyleType& _type_attr);
    const ST_StyleType& get_type_attr() const;
    bool has_styleId_attr() const;
    void set_styleId_attr(const ns_s::ST_String& _styleId_attr);
    const ns_s::ST_String& get_styleId_attr() const;
    bool has_default_attr() const;
    void set_default_attr(const ns_s::ST_OnOff& _default_attr);
    const ns_s::ST_OnOff& get_default_attr() const;
    bool has_customStyle_attr() const;
    void set_customStyle_attr(const ns_s::ST_OnOff& _customStyle_attr);
    const ns_s::ST_OnOff& get_customStyle_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_tblStylePr() const;
        CT_TblStylePr* mutable_tblStylePr();
        const CT_TblStylePr& get_tblStylePr() const;
    protected:
    private:
        bool m_has_tblStylePr;
        CT_TblStylePr* m_tblStylePr;
    };
    bool m_has_name;
    CT_String* m_name;
    bool m_has_aliases;
    CT_String* m_aliases;
    bool m_has_basedOn;
    CT_String* m_basedOn;
    bool m_has_next;
    CT_String* m_next;
    bool m_has_link;
    CT_String* m_link;
    bool m_has_autoRedefine;
    CT_OnOff* m_autoRedefine;
    bool m_has_hidden;
    CT_OnOff* m_hidden;
    bool m_has_uiPriority;
    CT_DecimalNumber* m_uiPriority;
    bool m_has_semiHidden;
    CT_OnOff* m_semiHidden;
    bool m_has_unhideWhenUsed;
    CT_OnOff* m_unhideWhenUsed;
    bool m_has_qFormat;
    CT_OnOff* m_qFormat;
    bool m_has_locked;
    CT_OnOff* m_locked;
    bool m_has_personal;
    CT_OnOff* m_personal;
    bool m_has_personalCompose;
    CT_OnOff* m_personalCompose;
    bool m_has_personalReply;
    CT_OnOff* m_personalReply;
    bool m_has_rsid;
    CT_LongHexNumber* m_rsid;
    bool m_has_pPr;
    CT_PPrGeneral* m_pPr;
    bool m_has_rPr;
    CT_RPr* m_rPr;
    bool m_has_tblPr;
    CT_TblPrBase* m_tblPr;
    bool m_has_trPr;
    CT_TrPr* m_trPr;
    bool m_has_tcPr;
    CT_TcPr* m_tcPr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Style* default_instance_;
    bool m_has_type_attr;
    ST_StyleType* m_type_attr;
    bool m_has_styleId_attr;
    ns_s::ST_String* m_styleId_attr;
    bool m_has_default_attr;
    ns_s::ST_OnOff* m_default_attr;
    bool m_has_customStyle_attr;
    ns_s::ST_OnOff* m_customStyle_attr;
};

class CT_LsdException: public XSD::ComplexType
{
public:
    CT_LsdException();
    ~CT_LsdException();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LsdException& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_locked_attr() const;
    void set_locked_attr(const ns_s::ST_OnOff& _locked_attr);
    const ns_s::ST_OnOff& get_locked_attr() const;
    bool has_uiPriority_attr() const;
    void set_uiPriority_attr(const ST_DecimalNumber& _uiPriority_attr);
    const ST_DecimalNumber& get_uiPriority_attr() const;
    bool has_semiHidden_attr() const;
    void set_semiHidden_attr(const ns_s::ST_OnOff& _semiHidden_attr);
    const ns_s::ST_OnOff& get_semiHidden_attr() const;
    bool has_unhideWhenUsed_attr() const;
    void set_unhideWhenUsed_attr(const ns_s::ST_OnOff& _unhideWhenUsed_attr);
    const ns_s::ST_OnOff& get_unhideWhenUsed_attr() const;
    bool has_qFormat_attr() const;
    void set_qFormat_attr(const ns_s::ST_OnOff& _qFormat_attr);
    const ns_s::ST_OnOff& get_qFormat_attr() const;
protected:
private:
    static CT_LsdException* default_instance_;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_locked_attr;
    ns_s::ST_OnOff* m_locked_attr;
    bool m_has_uiPriority_attr;
    ST_DecimalNumber* m_uiPriority_attr;
    bool m_has_semiHidden_attr;
    ns_s::ST_OnOff* m_semiHidden_attr;
    bool m_has_unhideWhenUsed_attr;
    ns_s::ST_OnOff* m_unhideWhenUsed_attr;
    bool m_has_qFormat_attr;
    ns_s::ST_OnOff* m_qFormat_attr;
};

class CT_LatentStyles: public XSD::ComplexType
{
public:
    CT_LatentStyles();
    ~CT_LatentStyles();
    CT_LsdException* add_lsdException();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_LatentStyles& default_instance();
    bool has_defLockedState_attr() const;
    void set_defLockedState_attr(const ns_s::ST_OnOff& _defLockedState_attr);
    const ns_s::ST_OnOff& get_defLockedState_attr() const;
    bool has_defUIPriority_attr() const;
    void set_defUIPriority_attr(const ST_DecimalNumber& _defUIPriority_attr);
    const ST_DecimalNumber& get_defUIPriority_attr() const;
    bool has_defSemiHidden_attr() const;
    void set_defSemiHidden_attr(const ns_s::ST_OnOff& _defSemiHidden_attr);
    const ns_s::ST_OnOff& get_defSemiHidden_attr() const;
    bool has_defUnhideWhenUsed_attr() const;
    void set_defUnhideWhenUsed_attr(const ns_s::ST_OnOff& _defUnhideWhenUsed_attr);
    const ns_s::ST_OnOff& get_defUnhideWhenUsed_attr() const;
    bool has_defQFormat_attr() const;
    void set_defQFormat_attr(const ns_s::ST_OnOff& _defQFormat_attr);
    const ns_s::ST_OnOff& get_defQFormat_attr() const;
    bool has_count_attr() const;
    void set_count_attr(const ST_DecimalNumber& _count_attr);
    const ST_DecimalNumber& get_count_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_lsdException() const;
        CT_LsdException* mutable_lsdException();
        const CT_LsdException& get_lsdException() const;
    protected:
    private:
        bool m_has_lsdException;
        CT_LsdException* m_lsdException;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_LatentStyles* default_instance_;
    bool m_has_defLockedState_attr;
    ns_s::ST_OnOff* m_defLockedState_attr;
    bool m_has_defUIPriority_attr;
    ST_DecimalNumber* m_defUIPriority_attr;
    bool m_has_defSemiHidden_attr;
    ns_s::ST_OnOff* m_defSemiHidden_attr;
    bool m_has_defUnhideWhenUsed_attr;
    ns_s::ST_OnOff* m_defUnhideWhenUsed_attr;
    bool m_has_defQFormat_attr;
    ns_s::ST_OnOff* m_defQFormat_attr;
    bool m_has_count_attr;
    ST_DecimalNumber* m_count_attr;
};

class CT_Styles: public XSD::ComplexType
{
public:
    CT_Styles();
    ~CT_Styles();
    bool has_docDefaults() const;
    CT_DocDefaults* mutable_docDefaults();
    const CT_DocDefaults& get_docDefaults() const;
    bool has_latentStyles() const;
    CT_LatentStyles* mutable_latentStyles();
    const CT_LatentStyles& get_latentStyles() const;
    CT_Style* add_style();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Styles& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_style() const;
        CT_Style* mutable_style();
        const CT_Style& get_style() const;
    protected:
    private:
        bool m_has_style;
        CT_Style* m_style;
    };
    bool m_has_docDefaults;
    CT_DocDefaults* m_docDefaults;
    bool m_has_latentStyles;
    CT_LatentStyles* m_latentStyles;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Styles* default_instance_;
};

class CT_Panose: public XSD::ComplexType
{
public:
    CT_Panose();
    ~CT_Panose();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Panose& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_Panose& _val_attr);
    const ns_s::ST_Panose& get_val_attr() const;
protected:
private:
    static CT_Panose* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_Panose* m_val_attr;
};

class CT_FontFamily: public XSD::ComplexType
{
public:
    CT_FontFamily();
    ~CT_FontFamily();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FontFamily& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_FontFamily& _val_attr);
    const ST_FontFamily& get_val_attr() const;
protected:
private:
    static CT_FontFamily* default_instance_;
    bool m_has_val_attr;
    ST_FontFamily* m_val_attr;
};

class CT_Pitch: public XSD::ComplexType
{
public:
    CT_Pitch();
    ~CT_Pitch();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Pitch& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_Pitch& _val_attr);
    const ST_Pitch& get_val_attr() const;
protected:
private:
    static CT_Pitch* default_instance_;
    bool m_has_val_attr;
    ST_Pitch* m_val_attr;
};

class CT_FontSig: public XSD::ComplexType
{
public:
    CT_FontSig();
    ~CT_FontSig();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FontSig& default_instance();
    bool has_usb0_attr() const;
    void set_usb0_attr(const ST_LongHexNumber& _usb0_attr);
    const ST_LongHexNumber& get_usb0_attr() const;
    bool has_usb1_attr() const;
    void set_usb1_attr(const ST_LongHexNumber& _usb1_attr);
    const ST_LongHexNumber& get_usb1_attr() const;
    bool has_usb2_attr() const;
    void set_usb2_attr(const ST_LongHexNumber& _usb2_attr);
    const ST_LongHexNumber& get_usb2_attr() const;
    bool has_usb3_attr() const;
    void set_usb3_attr(const ST_LongHexNumber& _usb3_attr);
    const ST_LongHexNumber& get_usb3_attr() const;
    bool has_csb0_attr() const;
    void set_csb0_attr(const ST_LongHexNumber& _csb0_attr);
    const ST_LongHexNumber& get_csb0_attr() const;
    bool has_csb1_attr() const;
    void set_csb1_attr(const ST_LongHexNumber& _csb1_attr);
    const ST_LongHexNumber& get_csb1_attr() const;
protected:
private:
    static CT_FontSig* default_instance_;
    bool m_has_usb0_attr;
    ST_LongHexNumber* m_usb0_attr;
    bool m_has_usb1_attr;
    ST_LongHexNumber* m_usb1_attr;
    bool m_has_usb2_attr;
    ST_LongHexNumber* m_usb2_attr;
    bool m_has_usb3_attr;
    ST_LongHexNumber* m_usb3_attr;
    bool m_has_csb0_attr;
    ST_LongHexNumber* m_csb0_attr;
    bool m_has_csb1_attr;
    ST_LongHexNumber* m_csb1_attr;
};

class CT_FontRel: public XSD::ComplexType
{
public:
    CT_FontRel();
    ~CT_FontRel();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FontRel& default_instance();
    bool has_r_id_attr() const;
    void set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr);
    const ns_r::ST_RelationshipId& get_r_id_attr() const;
    bool has_fontKey_attr() const;
    void set_fontKey_attr(const ns_s::ST_Guid& _fontKey_attr);
    const ns_s::ST_Guid& get_fontKey_attr() const;
    bool has_subsetted_attr() const;
    void set_subsetted_attr(const ns_s::ST_OnOff& _subsetted_attr);
    const ns_s::ST_OnOff& get_subsetted_attr() const;
protected:
private:
    static CT_FontRel* default_instance_;
    bool m_has_r_id_attr;
    ns_r::ST_RelationshipId* m_r_id_attr;
    bool m_has_fontKey_attr;
    ns_s::ST_Guid* m_fontKey_attr;
    bool m_has_subsetted_attr;
    ns_s::ST_OnOff* m_subsetted_attr;
};

class CT_Font: public XSD::ComplexType
{
public:
    CT_Font();
    ~CT_Font();
    bool has_altName() const;
    CT_String* mutable_altName();
    const CT_String& get_altName() const;
    bool has_panose1() const;
    CT_Panose* mutable_panose1();
    const CT_Panose& get_panose1() const;
    bool has_charset() const;
    CT_Charset* mutable_charset();
    const CT_Charset& get_charset() const;
    bool has_family() const;
    CT_FontFamily* mutable_family();
    const CT_FontFamily& get_family() const;
    bool has_notTrueType() const;
    CT_OnOff* mutable_notTrueType();
    const CT_OnOff& get_notTrueType() const;
    bool has_pitch() const;
    CT_Pitch* mutable_pitch();
    const CT_Pitch& get_pitch() const;
    bool has_sig() const;
    CT_FontSig* mutable_sig();
    const CT_FontSig& get_sig() const;
    bool has_embedRegular() const;
    CT_FontRel* mutable_embedRegular();
    const CT_FontRel& get_embedRegular() const;
    bool has_embedBold() const;
    CT_FontRel* mutable_embedBold();
    const CT_FontRel& get_embedBold() const;
    bool has_embedItalic() const;
    CT_FontRel* mutable_embedItalic();
    const CT_FontRel& get_embedItalic() const;
    bool has_embedBoldItalic() const;
    CT_FontRel* mutable_embedBoldItalic();
    const CT_FontRel& get_embedBoldItalic() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Font& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
protected:
private:
    bool m_has_altName;
    CT_String* m_altName;
    bool m_has_panose1;
    CT_Panose* m_panose1;
    bool m_has_charset;
    CT_Charset* m_charset;
    bool m_has_family;
    CT_FontFamily* m_family;
    bool m_has_notTrueType;
    CT_OnOff* m_notTrueType;
    bool m_has_pitch;
    CT_Pitch* m_pitch;
    bool m_has_sig;
    CT_FontSig* m_sig;
    bool m_has_embedRegular;
    CT_FontRel* m_embedRegular;
    bool m_has_embedBold;
    CT_FontRel* m_embedBold;
    bool m_has_embedItalic;
    CT_FontRel* m_embedItalic;
    bool m_has_embedBoldItalic;
    CT_FontRel* m_embedBoldItalic;
    static CT_Font* default_instance_;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
};

class CT_FontsList: public XSD::ComplexType
{
public:
    CT_FontsList();
    ~CT_FontsList();
    CT_Font* add_font();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_FontsList& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_font() const;
        CT_Font* mutable_font();
        const CT_Font& get_font() const;
    protected:
    private:
        bool m_has_font;
        CT_Font* m_font;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_FontsList* default_instance_;
};

class CT_DivBdr: public XSD::ComplexType
{
public:
    CT_DivBdr();
    ~CT_DivBdr();
    bool has_top() const;
    CT_Border* mutable_top();
    const CT_Border& get_top() const;
    bool has_left() const;
    CT_Border* mutable_left();
    const CT_Border& get_left() const;
    bool has_bottom() const;
    CT_Border* mutable_bottom();
    const CT_Border& get_bottom() const;
    bool has_right() const;
    CT_Border* mutable_right();
    const CT_Border& get_right() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DivBdr& default_instance();
protected:
private:
    bool m_has_top;
    CT_Border* m_top;
    bool m_has_left;
    CT_Border* m_left;
    bool m_has_bottom;
    CT_Border* m_bottom;
    bool m_has_right;
    CT_Border* m_right;
    static CT_DivBdr* default_instance_;
};

class CT_Div: public XSD::ComplexType
{
public:
    CT_Div();
    ~CT_Div();
    bool has_blockQuote() const;
    CT_OnOff* mutable_blockQuote();
    const CT_OnOff& get_blockQuote() const;
    bool has_bodyDiv() const;
    CT_OnOff* mutable_bodyDiv();
    const CT_OnOff& get_bodyDiv() const;
    bool has_marLeft() const;
    CT_SignedTwipsMeasure* mutable_marLeft();
    const CT_SignedTwipsMeasure& get_marLeft() const;
    bool has_marRight() const;
    CT_SignedTwipsMeasure* mutable_marRight();
    const CT_SignedTwipsMeasure& get_marRight() const;
    bool has_marTop() const;
    CT_SignedTwipsMeasure* mutable_marTop();
    const CT_SignedTwipsMeasure& get_marTop() const;
    bool has_marBottom() const;
    CT_SignedTwipsMeasure* mutable_marBottom();
    const CT_SignedTwipsMeasure& get_marBottom() const;
    bool has_divBdr() const;
    CT_DivBdr* mutable_divBdr();
    const CT_DivBdr& get_divBdr() const;
    CT_Divs* add_divsChild();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Div& default_instance();
    bool has_id_attr() const;
    void set_id_attr(const ST_DecimalNumber& _id_attr);
    const ST_DecimalNumber& get_id_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_divsChild() const;
        CT_Divs* mutable_divsChild();
        const CT_Divs& get_divsChild() const;
    protected:
    private:
        bool m_has_divsChild;
        CT_Divs* m_divsChild;
    };
    bool m_has_blockQuote;
    CT_OnOff* m_blockQuote;
    bool m_has_bodyDiv;
    CT_OnOff* m_bodyDiv;
    bool m_has_marLeft;
    CT_SignedTwipsMeasure* m_marLeft;
    bool m_has_marRight;
    CT_SignedTwipsMeasure* m_marRight;
    bool m_has_marTop;
    CT_SignedTwipsMeasure* m_marTop;
    bool m_has_marBottom;
    CT_SignedTwipsMeasure* m_marBottom;
    bool m_has_divBdr;
    CT_DivBdr* m_divBdr;
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Div* default_instance_;
    bool m_has_id_attr;
    ST_DecimalNumber* m_id_attr;
};

class CT_Divs: public XSD::ComplexType
{
public:
    CT_Divs();
    ~CT_Divs();
    CT_Div* add_div();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Divs& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_div() const;
        CT_Div* mutable_div();
        const CT_Div& get_div() const;
    protected:
    private:
        bool m_has_div;
        CT_Div* m_div;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Divs* default_instance_;
};

class CT_TxbxContent: public XSD::ComplexType
{
public:
    CT_TxbxContent();
    ~CT_TxbxContent();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_TxbxContent& default_instance();
protected:
private:
    static CT_TxbxContent* default_instance_;
};

class CT_Body: public XSD::ComplexType
{
public:
    CT_Body();
    ~CT_Body();
    CT_CustomXmlBlock* add_customXml();
    CT_SdtBlock* add_sdt();
    CT_P* add_p();
    CT_Tbl* add_tbl();
    CT_ProofErr* add_proofErr();
    CT_PermStart* add_permStart();
    CT_Perm* add_permEnd();
    CT_Bookmark* add_bookmarkStart();
    CT_MarkupRange* add_bookmarkEnd();
    CT_MoveBookmark* add_moveFromRangeStart();
    CT_MarkupRange* add_moveFromRangeEnd();
    CT_MoveBookmark* add_moveToRangeStart();
    CT_MarkupRange* add_moveToRangeEnd();
    CT_MarkupRange* add_commentRangeStart();
    CT_MarkupRange* add_commentRangeEnd();
    CT_TrackChange* add_customXmlInsRangeStart();
    CT_Markup* add_customXmlInsRangeEnd();
    CT_TrackChange* add_customXmlDelRangeStart();
    CT_Markup* add_customXmlDelRangeEnd();
    CT_TrackChange* add_customXmlMoveFromRangeStart();
    CT_Markup* add_customXmlMoveFromRangeEnd();
    CT_TrackChange* add_customXmlMoveToRangeStart();
    CT_Markup* add_customXmlMoveToRangeEnd();
    CT_RunTrackChange* add_ins();
    CT_RunTrackChange* add_del();
    CT_RunTrackChange* add_moveFrom();
    CT_RunTrackChange* add_moveTo();
    ns_m::CT_OMathPara* add_m_oMathPara();
    ns_m::CT_OMath* add_m_oMath();
    CT_AltChunk* add_altChunk();
    bool has_sectPr() const;
    CT_SectPr* mutable_sectPr();
    const CT_SectPr& get_sectPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Body& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_customXml() const;
        CT_CustomXmlBlock* mutable_customXml();
        const CT_CustomXmlBlock& get_customXml() const;
        bool has_sdt() const;
        CT_SdtBlock* mutable_sdt();
        const CT_SdtBlock& get_sdt() const;
        bool has_p() const;
        CT_P* mutable_p();
        const CT_P& get_p() const;
        bool has_tbl() const;
        CT_Tbl* mutable_tbl();
        const CT_Tbl& get_tbl() const;
        bool has_proofErr() const;
        CT_ProofErr* mutable_proofErr();
        const CT_ProofErr& get_proofErr() const;
        bool has_permStart() const;
        CT_PermStart* mutable_permStart();
        const CT_PermStart& get_permStart() const;
        bool has_permEnd() const;
        CT_Perm* mutable_permEnd();
        const CT_Perm& get_permEnd() const;
        bool has_bookmarkStart() const;
        CT_Bookmark* mutable_bookmarkStart();
        const CT_Bookmark& get_bookmarkStart() const;
        bool has_bookmarkEnd() const;
        CT_MarkupRange* mutable_bookmarkEnd();
        const CT_MarkupRange& get_bookmarkEnd() const;
        bool has_moveFromRangeStart() const;
        CT_MoveBookmark* mutable_moveFromRangeStart();
        const CT_MoveBookmark& get_moveFromRangeStart() const;
        bool has_moveFromRangeEnd() const;
        CT_MarkupRange* mutable_moveFromRangeEnd();
        const CT_MarkupRange& get_moveFromRangeEnd() const;
        bool has_moveToRangeStart() const;
        CT_MoveBookmark* mutable_moveToRangeStart();
        const CT_MoveBookmark& get_moveToRangeStart() const;
        bool has_moveToRangeEnd() const;
        CT_MarkupRange* mutable_moveToRangeEnd();
        const CT_MarkupRange& get_moveToRangeEnd() const;
        bool has_commentRangeStart() const;
        CT_MarkupRange* mutable_commentRangeStart();
        const CT_MarkupRange& get_commentRangeStart() const;
        bool has_commentRangeEnd() const;
        CT_MarkupRange* mutable_commentRangeEnd();
        const CT_MarkupRange& get_commentRangeEnd() const;
        bool has_customXmlInsRangeStart() const;
        CT_TrackChange* mutable_customXmlInsRangeStart();
        const CT_TrackChange& get_customXmlInsRangeStart() const;
        bool has_customXmlInsRangeEnd() const;
        CT_Markup* mutable_customXmlInsRangeEnd();
        const CT_Markup& get_customXmlInsRangeEnd() const;
        bool has_customXmlDelRangeStart() const;
        CT_TrackChange* mutable_customXmlDelRangeStart();
        const CT_TrackChange& get_customXmlDelRangeStart() const;
        bool has_customXmlDelRangeEnd() const;
        CT_Markup* mutable_customXmlDelRangeEnd();
        const CT_Markup& get_customXmlDelRangeEnd() const;
        bool has_customXmlMoveFromRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveFromRangeStart();
        const CT_TrackChange& get_customXmlMoveFromRangeStart() const;
        bool has_customXmlMoveFromRangeEnd() const;
        CT_Markup* mutable_customXmlMoveFromRangeEnd();
        const CT_Markup& get_customXmlMoveFromRangeEnd() const;
        bool has_customXmlMoveToRangeStart() const;
        CT_TrackChange* mutable_customXmlMoveToRangeStart();
        const CT_TrackChange& get_customXmlMoveToRangeStart() const;
        bool has_customXmlMoveToRangeEnd() const;
        CT_Markup* mutable_customXmlMoveToRangeEnd();
        const CT_Markup& get_customXmlMoveToRangeEnd() const;
        bool has_ins() const;
        CT_RunTrackChange* mutable_ins();
        const CT_RunTrackChange& get_ins() const;
        bool has_del() const;
        CT_RunTrackChange* mutable_del();
        const CT_RunTrackChange& get_del() const;
        bool has_moveFrom() const;
        CT_RunTrackChange* mutable_moveFrom();
        const CT_RunTrackChange& get_moveFrom() const;
        bool has_moveTo() const;
        CT_RunTrackChange* mutable_moveTo();
        const CT_RunTrackChange& get_moveTo() const;
        bool has_m_oMathPara() const;
        ns_m::CT_OMathPara* mutable_m_oMathPara();
        const ns_m::CT_OMathPara& get_m_oMathPara() const;
        bool has_m_oMath() const;
        ns_m::CT_OMath* mutable_m_oMath();
        const ns_m::CT_OMath& get_m_oMath() const;
        bool has_altChunk() const;
        CT_AltChunk* mutable_altChunk();
        const CT_AltChunk& get_altChunk() const;
    protected:
    private:
        bool m_has_customXml;
        CT_CustomXmlBlock* m_customXml;
        bool m_has_sdt;
        CT_SdtBlock* m_sdt;
        bool m_has_p;
        CT_P* m_p;
        bool m_has_tbl;
        CT_Tbl* m_tbl;
        bool m_has_proofErr;
        CT_ProofErr* m_proofErr;
        bool m_has_permStart;
        CT_PermStart* m_permStart;
        bool m_has_permEnd;
        CT_Perm* m_permEnd;
        bool m_has_bookmarkStart;
        CT_Bookmark* m_bookmarkStart;
        bool m_has_bookmarkEnd;
        CT_MarkupRange* m_bookmarkEnd;
        bool m_has_moveFromRangeStart;
        CT_MoveBookmark* m_moveFromRangeStart;
        bool m_has_moveFromRangeEnd;
        CT_MarkupRange* m_moveFromRangeEnd;
        bool m_has_moveToRangeStart;
        CT_MoveBookmark* m_moveToRangeStart;
        bool m_has_moveToRangeEnd;
        CT_MarkupRange* m_moveToRangeEnd;
        bool m_has_commentRangeStart;
        CT_MarkupRange* m_commentRangeStart;
        bool m_has_commentRangeEnd;
        CT_MarkupRange* m_commentRangeEnd;
        bool m_has_customXmlInsRangeStart;
        CT_TrackChange* m_customXmlInsRangeStart;
        bool m_has_customXmlInsRangeEnd;
        CT_Markup* m_customXmlInsRangeEnd;
        bool m_has_customXmlDelRangeStart;
        CT_TrackChange* m_customXmlDelRangeStart;
        bool m_has_customXmlDelRangeEnd;
        CT_Markup* m_customXmlDelRangeEnd;
        bool m_has_customXmlMoveFromRangeStart;
        CT_TrackChange* m_customXmlMoveFromRangeStart;
        bool m_has_customXmlMoveFromRangeEnd;
        CT_Markup* m_customXmlMoveFromRangeEnd;
        bool m_has_customXmlMoveToRangeStart;
        CT_TrackChange* m_customXmlMoveToRangeStart;
        bool m_has_customXmlMoveToRangeEnd;
        CT_Markup* m_customXmlMoveToRangeEnd;
        bool m_has_ins;
        CT_RunTrackChange* m_ins;
        bool m_has_del;
        CT_RunTrackChange* m_del;
        bool m_has_moveFrom;
        CT_RunTrackChange* m_moveFrom;
        bool m_has_moveTo;
        CT_RunTrackChange* m_moveTo;
        bool m_has_m_oMathPara;
        ns_m::CT_OMathPara* m_m_oMathPara;
        bool m_has_m_oMath;
        ns_m::CT_OMath* m_m_oMath;
        bool m_has_altChunk;
        CT_AltChunk* m_altChunk;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_sectPr;
    CT_SectPr* m_sectPr;
    static CT_Body* default_instance_;
};

class CT_ShapeDefaults: public XSD::ComplexType
{
public:
    CT_ShapeDefaults();
    ~CT_ShapeDefaults();
    void append_o_any(ns_o::Element* _o_any);
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ShapeDefaults& default_instance();
protected:
private:
    vector<ns_o::Element*> m_o_any_list;
    static CT_ShapeDefaults* default_instance_;
};

class CT_Comments: public XSD::ComplexType
{
public:
    CT_Comments();
    ~CT_Comments();
    CT_Comment* add_comment();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Comments& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_comment() const;
        CT_Comment* mutable_comment();
        const CT_Comment& get_comment() const;
    protected:
    private:
        bool m_has_comment;
        CT_Comment* m_comment;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Comments* default_instance_;
};

class CT_Footnotes: public XSD::ComplexType
{
public:
    CT_Footnotes();
    ~CT_Footnotes();
    CT_FtnEdn* add_footnote();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Footnotes& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_footnote() const;
        CT_FtnEdn* mutable_footnote();
        const CT_FtnEdn& get_footnote() const;
    protected:
    private:
        bool m_has_footnote;
        CT_FtnEdn* m_footnote;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Footnotes* default_instance_;
};

class CT_Endnotes: public XSD::ComplexType
{
public:
    CT_Endnotes();
    ~CT_Endnotes();
    CT_FtnEdn* add_endnote();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Endnotes& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_endnote() const;
        CT_FtnEdn* mutable_endnote();
        const CT_FtnEdn& get_endnote() const;
    protected:
    private:
        bool m_has_endnote;
        CT_FtnEdn* m_endnote;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Endnotes* default_instance_;
};

class CT_SmartTagType: public XSD::ComplexType
{
public:
    CT_SmartTagType();
    ~CT_SmartTagType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_SmartTagType& default_instance();
    bool has_namespaceuri_attr() const;
    void set_namespaceuri_attr(const ns_s::ST_String& _namespaceuri_attr);
    const ns_s::ST_String& get_namespaceuri_attr() const;
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_url_attr() const;
    void set_url_attr(const ns_s::ST_String& _url_attr);
    const ns_s::ST_String& get_url_attr() const;
protected:
private:
    static CT_SmartTagType* default_instance_;
    bool m_has_namespaceuri_attr;
    ns_s::ST_String* m_namespaceuri_attr;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_url_attr;
    ns_s::ST_String* m_url_attr;
};

class CT_DocPartBehavior: public XSD::ComplexType
{
public:
    CT_DocPartBehavior();
    ~CT_DocPartBehavior();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPartBehavior& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_DocPartBehavior& _val_attr);
    const ST_DocPartBehavior& get_val_attr() const;
protected:
private:
    static CT_DocPartBehavior* default_instance_;
    bool m_has_val_attr;
    ST_DocPartBehavior* m_val_attr;
};

class CT_DocPartBehaviors: public XSD::ComplexType
{
public:
    CT_DocPartBehaviors();
    ~CT_DocPartBehaviors();
    bool has_behavior() const;
    CT_DocPartBehavior* mutable_behavior();
    const CT_DocPartBehavior& get_behavior() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPartBehaviors& default_instance();
protected:
private:
    bool m_has_behavior;
    CT_DocPartBehavior* m_behavior;
    static CT_DocPartBehaviors* default_instance_;
};

class CT_DocPartType: public XSD::ComplexType
{
public:
    CT_DocPartType();
    ~CT_DocPartType();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPartType& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_DocPartType& _val_attr);
    const ST_DocPartType& get_val_attr() const;
protected:
private:
    static CT_DocPartType* default_instance_;
    bool m_has_val_attr;
    ST_DocPartType* m_val_attr;
};

class CT_DocPartTypes: public XSD::ComplexType
{
public:
    CT_DocPartTypes();
    ~CT_DocPartTypes();
    bool has_type() const;
    CT_DocPartType* mutable_type();
    const CT_DocPartType& get_type() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPartTypes& default_instance();
    bool has_all_attr() const;
    void set_all_attr(const ns_s::ST_OnOff& _all_attr);
    const ns_s::ST_OnOff& get_all_attr() const;
protected:
private:
    bool m_has_type;
    CT_DocPartType* m_type;
    static CT_DocPartTypes* default_instance_;
    bool m_has_all_attr;
    ns_s::ST_OnOff* m_all_attr;
};

class CT_DocPartGallery: public XSD::ComplexType
{
public:
    CT_DocPartGallery();
    ~CT_DocPartGallery();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPartGallery& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ST_DocPartGallery& _val_attr);
    const ST_DocPartGallery& get_val_attr() const;
protected:
private:
    static CT_DocPartGallery* default_instance_;
    bool m_has_val_attr;
    ST_DocPartGallery* m_val_attr;
};

class CT_DocPartCategory: public XSD::ComplexType
{
public:
    CT_DocPartCategory();
    ~CT_DocPartCategory();
    bool has_name() const;
    CT_String* mutable_name();
    const CT_String& get_name() const;
    bool has_gallery() const;
    CT_DocPartGallery* mutable_gallery();
    const CT_DocPartGallery& get_gallery() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPartCategory& default_instance();
protected:
private:
    bool m_has_name;
    CT_String* m_name;
    bool m_has_gallery;
    CT_DocPartGallery* m_gallery;
    static CT_DocPartCategory* default_instance_;
};

class CT_DocPartName: public XSD::ComplexType
{
public:
    CT_DocPartName();
    ~CT_DocPartName();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPartName& default_instance();
    bool has_val_attr() const;
    void set_val_attr(const ns_s::ST_String& _val_attr);
    const ns_s::ST_String& get_val_attr() const;
    bool has_decorated_attr() const;
    void set_decorated_attr(const ns_s::ST_OnOff& _decorated_attr);
    const ns_s::ST_OnOff& get_decorated_attr() const;
protected:
private:
    static CT_DocPartName* default_instance_;
    bool m_has_val_attr;
    ns_s::ST_String* m_val_attr;
    bool m_has_decorated_attr;
    ns_s::ST_OnOff* m_decorated_attr;
};

class CT_DocPartPr: public XSD::ComplexType
{
public:
    CT_DocPartPr();
    ~CT_DocPartPr();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPartPr& default_instance();
protected:
private:
    static CT_DocPartPr* default_instance_;
};

class CT_DocPart: public XSD::ComplexType
{
public:
    CT_DocPart();
    ~CT_DocPart();
    bool has_docPartPr() const;
    CT_DocPartPr* mutable_docPartPr();
    const CT_DocPartPr& get_docPartPr() const;
    bool has_docPartBody() const;
    CT_Body* mutable_docPartBody();
    const CT_Body& get_docPartBody() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocPart& default_instance();
protected:
private:
    bool m_has_docPartPr;
    CT_DocPartPr* m_docPartPr;
    bool m_has_docPartBody;
    CT_Body* m_docPartBody;
    static CT_DocPart* default_instance_;
};

class CT_DocParts: public XSD::ComplexType
{
public:
    CT_DocParts();
    ~CT_DocParts();
    bool has_docPart() const;
    CT_DocPart* mutable_docPart();
    const CT_DocPart& get_docPart() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocParts& default_instance();
protected:
private:
    bool m_has_docPart;
    CT_DocPart* m_docPart;
    static CT_DocParts* default_instance_;
};

class CT_Caption: public XSD::ComplexType
{
public:
    CT_Caption();
    ~CT_Caption();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Caption& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_pos_attr() const;
    void set_pos_attr(const ST_CaptionPos& _pos_attr);
    const ST_CaptionPos& get_pos_attr() const;
    bool has_chapNum_attr() const;
    void set_chapNum_attr(const ns_s::ST_OnOff& _chapNum_attr);
    const ns_s::ST_OnOff& get_chapNum_attr() const;
    bool has_heading_attr() const;
    void set_heading_attr(const ST_DecimalNumber& _heading_attr);
    const ST_DecimalNumber& get_heading_attr() const;
    bool has_noLabel_attr() const;
    void set_noLabel_attr(const ns_s::ST_OnOff& _noLabel_attr);
    const ns_s::ST_OnOff& get_noLabel_attr() const;
    bool has_numFmt_attr() const;
    void set_numFmt_attr(const ST_NumberFormat& _numFmt_attr);
    const ST_NumberFormat& get_numFmt_attr() const;
    bool has_sep_attr() const;
    void set_sep_attr(const ST_ChapterSep& _sep_attr);
    const ST_ChapterSep& get_sep_attr() const;
protected:
private:
    static CT_Caption* default_instance_;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_pos_attr;
    ST_CaptionPos* m_pos_attr;
    bool m_has_chapNum_attr;
    ns_s::ST_OnOff* m_chapNum_attr;
    bool m_has_heading_attr;
    ST_DecimalNumber* m_heading_attr;
    bool m_has_noLabel_attr;
    ns_s::ST_OnOff* m_noLabel_attr;
    bool m_has_numFmt_attr;
    ST_NumberFormat* m_numFmt_attr;
    bool m_has_sep_attr;
    ST_ChapterSep* m_sep_attr;
};

class CT_AutoCaption: public XSD::ComplexType
{
public:
    CT_AutoCaption();
    ~CT_AutoCaption();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AutoCaption& default_instance();
    bool has_name_attr() const;
    void set_name_attr(const ns_s::ST_String& _name_attr);
    const ns_s::ST_String& get_name_attr() const;
    bool has_caption_attr() const;
    void set_caption_attr(const ns_s::ST_String& _caption_attr);
    const ns_s::ST_String& get_caption_attr() const;
protected:
private:
    static CT_AutoCaption* default_instance_;
    bool m_has_name_attr;
    ns_s::ST_String* m_name_attr;
    bool m_has_caption_attr;
    ns_s::ST_String* m_caption_attr;
};

class CT_AutoCaptions: public XSD::ComplexType
{
public:
    CT_AutoCaptions();
    ~CT_AutoCaptions();
    CT_AutoCaption* add_autoCaption();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_AutoCaptions& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_autoCaption() const;
        CT_AutoCaption* mutable_autoCaption();
        const CT_AutoCaption& get_autoCaption() const;
    protected:
    private:
        bool m_has_autoCaption;
        CT_AutoCaption* m_autoCaption;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_AutoCaptions* default_instance_;
};

class CT_Captions: public XSD::ComplexType
{
public:
    CT_Captions();
    ~CT_Captions();
    CT_Caption* add_caption();
    bool has_autoCaptions() const;
    CT_AutoCaptions* mutable_autoCaptions();
    const CT_AutoCaptions& get_autoCaptions() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Captions& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_caption() const;
        CT_Caption* mutable_caption();
        const CT_Caption& get_caption() const;
    protected:
    private:
        bool m_has_caption;
        CT_Caption* m_caption;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_autoCaptions;
    CT_AutoCaptions* m_autoCaptions;
    static CT_Captions* default_instance_;
};

class CT_DocumentBase: public XSD::ComplexType
{
public:
    CT_DocumentBase();
    ~CT_DocumentBase();
    bool has_background() const;
    CT_Background* mutable_background();
    const CT_Background& get_background() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DocumentBase& default_instance();
protected:
private:
    bool m_has_background;
    CT_Background* m_background;
    static CT_DocumentBase* default_instance_;
};

class CT_Document: public XSD::ComplexType
{
public:
    CT_Document();
    ~CT_Document();
    bool has_background() const;
    CT_Background* mutable_background();
    const CT_Background& get_background() const;
    bool has_body() const;
    CT_Body* mutable_body();
    const CT_Body& get_body() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Document& default_instance();
    bool has_conformance_attr() const;
    void set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr);
    const ns_s::ST_ConformanceClass& get_conformance_attr() const;
protected:
private:
    bool m_has_background;
    CT_Background* m_background;
    bool m_has_body;
    CT_Body* m_body;
    static CT_Document* default_instance_;
    bool m_has_conformance_attr;
    ns_s::ST_ConformanceClass* m_conformance_attr;
};

class CT_GlossaryDocument: public XSD::ComplexType
{
public:
    CT_GlossaryDocument();
    ~CT_GlossaryDocument();
    bool has_background() const;
    CT_Background* mutable_background();
    const CT_Background& get_background() const;
    bool has_docParts() const;
    CT_DocParts* mutable_docParts();
    const CT_DocParts& get_docParts() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_GlossaryDocument& default_instance();
protected:
private:
    bool m_has_background;
    CT_Background* m_background;
    bool m_has_docParts;
    CT_DocParts* m_docParts;
    static CT_GlossaryDocument* default_instance_;
};

class recipients_element: public Element
{
public:
    recipients_element();
    ~recipients_element();
    CT_RecipientData* add_recipientData();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const recipients_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_recipientData() const;
        CT_RecipientData* mutable_recipientData();
        const CT_RecipientData& get_recipientData() const;
    protected:
    private:
        bool m_has_recipientData;
        CT_RecipientData* m_recipientData;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static recipients_element* default_instance_;
};

class txbxContent_element: public Element
{
public:
    txbxContent_element();
    ~txbxContent_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const txbxContent_element& default_instance();
protected:
private:
    static txbxContent_element* default_instance_;
};

class comments_element: public Element
{
public:
    comments_element();
    ~comments_element();
    CT_Comment* add_comment();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const comments_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_comment() const;
        CT_Comment* mutable_comment();
        const CT_Comment& get_comment() const;
    protected:
    private:
        bool m_has_comment;
        CT_Comment* m_comment;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static comments_element* default_instance_;
};

class footnotes_element: public Element
{
public:
    footnotes_element();
    ~footnotes_element();
    CT_FtnEdn* add_footnote();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const footnotes_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_footnote() const;
        CT_FtnEdn* mutable_footnote();
        const CT_FtnEdn& get_footnote() const;
    protected:
    private:
        bool m_has_footnote;
        CT_FtnEdn* m_footnote;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static footnotes_element* default_instance_;
};

class endnotes_element: public Element
{
public:
    endnotes_element();
    ~endnotes_element();
    CT_FtnEdn* add_endnote();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const endnotes_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_endnote() const;
        CT_FtnEdn* mutable_endnote();
        const CT_FtnEdn& get_endnote() const;
    protected:
    private:
        bool m_has_endnote;
        CT_FtnEdn* m_endnote;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static endnotes_element* default_instance_;
};

class hdr_element: public Element
{
public:
    hdr_element();
    ~hdr_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const hdr_element& default_instance();
protected:
private:
    static hdr_element* default_instance_;
};

class ftr_element: public Element
{
public:
    ftr_element();
    ~ftr_element();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const ftr_element& default_instance();
protected:
private:
    static ftr_element* default_instance_;
};

class settings_element: public Element
{
public:
    settings_element();
    ~settings_element();
    bool has_writeProtection() const;
    CT_WriteProtection* mutable_writeProtection();
    const CT_WriteProtection& get_writeProtection() const;
    bool has_view() const;
    CT_View* mutable_view();
    const CT_View& get_view() const;
    bool has_zoom() const;
    CT_Zoom* mutable_zoom();
    const CT_Zoom& get_zoom() const;
    bool has_removePersonalInformation() const;
    CT_OnOff* mutable_removePersonalInformation();
    const CT_OnOff& get_removePersonalInformation() const;
    bool has_removeDateAndTime() const;
    CT_OnOff* mutable_removeDateAndTime();
    const CT_OnOff& get_removeDateAndTime() const;
    bool has_doNotDisplayPageBoundaries() const;
    CT_OnOff* mutable_doNotDisplayPageBoundaries();
    const CT_OnOff& get_doNotDisplayPageBoundaries() const;
    bool has_displayBackgroundShape() const;
    CT_OnOff* mutable_displayBackgroundShape();
    const CT_OnOff& get_displayBackgroundShape() const;
    bool has_printPostScriptOverText() const;
    CT_OnOff* mutable_printPostScriptOverText();
    const CT_OnOff& get_printPostScriptOverText() const;
    bool has_printFractionalCharacterWidth() const;
    CT_OnOff* mutable_printFractionalCharacterWidth();
    const CT_OnOff& get_printFractionalCharacterWidth() const;
    bool has_printFormsData() const;
    CT_OnOff* mutable_printFormsData();
    const CT_OnOff& get_printFormsData() const;
    bool has_embedTrueTypeFonts() const;
    CT_OnOff* mutable_embedTrueTypeFonts();
    const CT_OnOff& get_embedTrueTypeFonts() const;
    bool has_embedSystemFonts() const;
    CT_OnOff* mutable_embedSystemFonts();
    const CT_OnOff& get_embedSystemFonts() const;
    bool has_saveSubsetFonts() const;
    CT_OnOff* mutable_saveSubsetFonts();
    const CT_OnOff& get_saveSubsetFonts() const;
    bool has_saveFormsData() const;
    CT_OnOff* mutable_saveFormsData();
    const CT_OnOff& get_saveFormsData() const;
    bool has_mirrorMargins() const;
    CT_OnOff* mutable_mirrorMargins();
    const CT_OnOff& get_mirrorMargins() const;
    bool has_alignBordersAndEdges() const;
    CT_OnOff* mutable_alignBordersAndEdges();
    const CT_OnOff& get_alignBordersAndEdges() const;
    bool has_bordersDoNotSurroundHeader() const;
    CT_OnOff* mutable_bordersDoNotSurroundHeader();
    const CT_OnOff& get_bordersDoNotSurroundHeader() const;
    bool has_bordersDoNotSurroundFooter() const;
    CT_OnOff* mutable_bordersDoNotSurroundFooter();
    const CT_OnOff& get_bordersDoNotSurroundFooter() const;
    bool has_gutterAtTop() const;
    CT_OnOff* mutable_gutterAtTop();
    const CT_OnOff& get_gutterAtTop() const;
    bool has_hideSpellingErrors() const;
    CT_OnOff* mutable_hideSpellingErrors();
    const CT_OnOff& get_hideSpellingErrors() const;
    bool has_hideGrammaticalErrors() const;
    CT_OnOff* mutable_hideGrammaticalErrors();
    const CT_OnOff& get_hideGrammaticalErrors() const;
    CT_WritingStyle* add_activeWritingStyle();
    bool has_proofState() const;
    CT_Proof* mutable_proofState();
    const CT_Proof& get_proofState() const;
    bool has_formsDesign() const;
    CT_OnOff* mutable_formsDesign();
    const CT_OnOff& get_formsDesign() const;
    bool has_attachedTemplate() const;
    CT_Rel* mutable_attachedTemplate();
    const CT_Rel& get_attachedTemplate() const;
    bool has_linkStyles() const;
    CT_OnOff* mutable_linkStyles();
    const CT_OnOff& get_linkStyles() const;
    bool has_stylePaneFormatFilter() const;
    CT_StylePaneFilter* mutable_stylePaneFormatFilter();
    const CT_StylePaneFilter& get_stylePaneFormatFilter() const;
    bool has_stylePaneSortMethod() const;
    CT_StyleSort* mutable_stylePaneSortMethod();
    const CT_StyleSort& get_stylePaneSortMethod() const;
    bool has_documentType() const;
    CT_DocType* mutable_documentType();
    const CT_DocType& get_documentType() const;
    bool has_mailMerge() const;
    CT_MailMerge* mutable_mailMerge();
    const CT_MailMerge& get_mailMerge() const;
    bool has_revisionView() const;
    CT_TrackChangesView* mutable_revisionView();
    const CT_TrackChangesView& get_revisionView() const;
    bool has_trackRevisions() const;
    CT_OnOff* mutable_trackRevisions();
    const CT_OnOff& get_trackRevisions() const;
    bool has_doNotTrackMoves() const;
    CT_OnOff* mutable_doNotTrackMoves();
    const CT_OnOff& get_doNotTrackMoves() const;
    bool has_doNotTrackFormatting() const;
    CT_OnOff* mutable_doNotTrackFormatting();
    const CT_OnOff& get_doNotTrackFormatting() const;
    bool has_documentProtection() const;
    CT_DocProtect* mutable_documentProtection();
    const CT_DocProtect& get_documentProtection() const;
    bool has_autoFormatOverride() const;
    CT_OnOff* mutable_autoFormatOverride();
    const CT_OnOff& get_autoFormatOverride() const;
    bool has_styleLockTheme() const;
    CT_OnOff* mutable_styleLockTheme();
    const CT_OnOff& get_styleLockTheme() const;
    bool has_styleLockQFSet() const;
    CT_OnOff* mutable_styleLockQFSet();
    const CT_OnOff& get_styleLockQFSet() const;
    bool has_defaultTabStop() const;
    CT_TwipsMeasure* mutable_defaultTabStop();
    const CT_TwipsMeasure& get_defaultTabStop() const;
    bool has_autoHyphenation() const;
    CT_OnOff* mutable_autoHyphenation();
    const CT_OnOff& get_autoHyphenation() const;
    bool has_consecutiveHyphenLimit() const;
    CT_DecimalNumber* mutable_consecutiveHyphenLimit();
    const CT_DecimalNumber& get_consecutiveHyphenLimit() const;
    bool has_hyphenationZone() const;
    CT_TwipsMeasure* mutable_hyphenationZone();
    const CT_TwipsMeasure& get_hyphenationZone() const;
    bool has_doNotHyphenateCaps() const;
    CT_OnOff* mutable_doNotHyphenateCaps();
    const CT_OnOff& get_doNotHyphenateCaps() const;
    bool has_showEnvelope() const;
    CT_OnOff* mutable_showEnvelope();
    const CT_OnOff& get_showEnvelope() const;
    bool has_summaryLength() const;
    CT_DecimalNumberOrPrecent* mutable_summaryLength();
    const CT_DecimalNumberOrPrecent& get_summaryLength() const;
    bool has_clickAndTypeStyle() const;
    CT_String* mutable_clickAndTypeStyle();
    const CT_String& get_clickAndTypeStyle() const;
    bool has_defaultTableStyle() const;
    CT_String* mutable_defaultTableStyle();
    const CT_String& get_defaultTableStyle() const;
    bool has_evenAndOddHeaders() const;
    CT_OnOff* mutable_evenAndOddHeaders();
    const CT_OnOff& get_evenAndOddHeaders() const;
    bool has_bookFoldRevPrinting() const;
    CT_OnOff* mutable_bookFoldRevPrinting();
    const CT_OnOff& get_bookFoldRevPrinting() const;
    bool has_bookFoldPrinting() const;
    CT_OnOff* mutable_bookFoldPrinting();
    const CT_OnOff& get_bookFoldPrinting() const;
    bool has_bookFoldPrintingSheets() const;
    CT_DecimalNumber* mutable_bookFoldPrintingSheets();
    const CT_DecimalNumber& get_bookFoldPrintingSheets() const;
    bool has_drawingGridHorizontalSpacing() const;
    CT_TwipsMeasure* mutable_drawingGridHorizontalSpacing();
    const CT_TwipsMeasure& get_drawingGridHorizontalSpacing() const;
    bool has_drawingGridVerticalSpacing() const;
    CT_TwipsMeasure* mutable_drawingGridVerticalSpacing();
    const CT_TwipsMeasure& get_drawingGridVerticalSpacing() const;
    bool has_displayHorizontalDrawingGridEvery() const;
    CT_DecimalNumber* mutable_displayHorizontalDrawingGridEvery();
    const CT_DecimalNumber& get_displayHorizontalDrawingGridEvery() const;
    bool has_displayVerticalDrawingGridEvery() const;
    CT_DecimalNumber* mutable_displayVerticalDrawingGridEvery();
    const CT_DecimalNumber& get_displayVerticalDrawingGridEvery() const;
    bool has_doNotUseMarginsForDrawingGridOrigin() const;
    CT_OnOff* mutable_doNotUseMarginsForDrawingGridOrigin();
    const CT_OnOff& get_doNotUseMarginsForDrawingGridOrigin() const;
    bool has_drawingGridHorizontalOrigin() const;
    CT_TwipsMeasure* mutable_drawingGridHorizontalOrigin();
    const CT_TwipsMeasure& get_drawingGridHorizontalOrigin() const;
    bool has_drawingGridVerticalOrigin() const;
    CT_TwipsMeasure* mutable_drawingGridVerticalOrigin();
    const CT_TwipsMeasure& get_drawingGridVerticalOrigin() const;
    bool has_doNotShadeFormData() const;
    CT_OnOff* mutable_doNotShadeFormData();
    const CT_OnOff& get_doNotShadeFormData() const;
    bool has_noPunctuationKerning() const;
    CT_OnOff* mutable_noPunctuationKerning();
    const CT_OnOff& get_noPunctuationKerning() const;
    bool has_characterSpacingControl() const;
    CT_CharacterSpacing* mutable_characterSpacingControl();
    const CT_CharacterSpacing& get_characterSpacingControl() const;
    bool has_printTwoOnOne() const;
    CT_OnOff* mutable_printTwoOnOne();
    const CT_OnOff& get_printTwoOnOne() const;
    bool has_strictFirstAndLastChars() const;
    CT_OnOff* mutable_strictFirstAndLastChars();
    const CT_OnOff& get_strictFirstAndLastChars() const;
    bool has_noLineBreaksAfter() const;
    CT_Kinsoku* mutable_noLineBreaksAfter();
    const CT_Kinsoku& get_noLineBreaksAfter() const;
    bool has_noLineBreaksBefore() const;
    CT_Kinsoku* mutable_noLineBreaksBefore();
    const CT_Kinsoku& get_noLineBreaksBefore() const;
    bool has_savePreviewPicture() const;
    CT_OnOff* mutable_savePreviewPicture();
    const CT_OnOff& get_savePreviewPicture() const;
    bool has_doNotValidateAgainstSchema() const;
    CT_OnOff* mutable_doNotValidateAgainstSchema();
    const CT_OnOff& get_doNotValidateAgainstSchema() const;
    bool has_saveInvalidXml() const;
    CT_OnOff* mutable_saveInvalidXml();
    const CT_OnOff& get_saveInvalidXml() const;
    bool has_ignoreMixedContent() const;
    CT_OnOff* mutable_ignoreMixedContent();
    const CT_OnOff& get_ignoreMixedContent() const;
    bool has_alwaysShowPlaceholderText() const;
    CT_OnOff* mutable_alwaysShowPlaceholderText();
    const CT_OnOff& get_alwaysShowPlaceholderText() const;
    bool has_doNotDemarcateInvalidXml() const;
    CT_OnOff* mutable_doNotDemarcateInvalidXml();
    const CT_OnOff& get_doNotDemarcateInvalidXml() const;
    bool has_saveXmlDataOnly() const;
    CT_OnOff* mutable_saveXmlDataOnly();
    const CT_OnOff& get_saveXmlDataOnly() const;
    bool has_useXSLTWhenSaving() const;
    CT_OnOff* mutable_useXSLTWhenSaving();
    const CT_OnOff& get_useXSLTWhenSaving() const;
    bool has_saveThroughXslt() const;
    CT_SaveThroughXslt* mutable_saveThroughXslt();
    const CT_SaveThroughXslt& get_saveThroughXslt() const;
    bool has_showXMLTags() const;
    CT_OnOff* mutable_showXMLTags();
    const CT_OnOff& get_showXMLTags() const;
    bool has_alwaysMergeEmptyNamespace() const;
    CT_OnOff* mutable_alwaysMergeEmptyNamespace();
    const CT_OnOff& get_alwaysMergeEmptyNamespace() const;
    bool has_updateFields() const;
    CT_OnOff* mutable_updateFields();
    const CT_OnOff& get_updateFields() const;
    bool has_hdrShapeDefaults() const;
    CT_ShapeDefaults* mutable_hdrShapeDefaults();
    const CT_ShapeDefaults& get_hdrShapeDefaults() const;
    bool has_footnotePr() const;
    CT_FtnDocProps* mutable_footnotePr();
    const CT_FtnDocProps& get_footnotePr() const;
    bool has_endnotePr() const;
    CT_EdnDocProps* mutable_endnotePr();
    const CT_EdnDocProps& get_endnotePr() const;
    bool has_compat() const;
    CT_Compat* mutable_compat();
    const CT_Compat& get_compat() const;
    bool has_docVars() const;
    CT_DocVars* mutable_docVars();
    const CT_DocVars& get_docVars() const;
    bool has_rsids() const;
    CT_DocRsids* mutable_rsids();
    const CT_DocRsids& get_rsids() const;
    bool has_m_mathPr() const;
    ns_m::CT_MathPr* mutable_m_mathPr();
    const ns_m::CT_MathPr& get_m_mathPr() const;
    CT_String* add_attachedSchema();
    bool has_themeFontLang() const;
    CT_Language* mutable_themeFontLang();
    const CT_Language& get_themeFontLang() const;
    bool has_clrSchemeMapping() const;
    CT_ColorSchemeMapping* mutable_clrSchemeMapping();
    const CT_ColorSchemeMapping& get_clrSchemeMapping() const;
    bool has_doNotIncludeSubdocsInStats() const;
    CT_OnOff* mutable_doNotIncludeSubdocsInStats();
    const CT_OnOff& get_doNotIncludeSubdocsInStats() const;
    bool has_doNotAutoCompressPictures() const;
    CT_OnOff* mutable_doNotAutoCompressPictures();
    const CT_OnOff& get_doNotAutoCompressPictures() const;
    bool has_forceUpgrade() const;
    CT_Empty* mutable_forceUpgrade();
    const CT_Empty& get_forceUpgrade() const;
    bool has_captions() const;
    CT_Captions* mutable_captions();
    const CT_Captions& get_captions() const;
    bool has_readModeInkLockDown() const;
    CT_ReadingModeInkLockDown* mutable_readModeInkLockDown();
    const CT_ReadingModeInkLockDown& get_readModeInkLockDown() const;
    CT_SmartTagType* add_smartTagType();
    bool has_sl_schemaLibrary() const;
    ns_sl::CT_SchemaLibrary* mutable_sl_schemaLibrary();
    const ns_sl::CT_SchemaLibrary& get_sl_schemaLibrary() const;
    bool has_shapeDefaults() const;
    CT_ShapeDefaults* mutable_shapeDefaults();
    const CT_ShapeDefaults& get_shapeDefaults() const;
    bool has_doNotEmbedSmartTags() const;
    CT_OnOff* mutable_doNotEmbedSmartTags();
    const CT_OnOff& get_doNotEmbedSmartTags() const;
    bool has_decimalSymbol() const;
    CT_String* mutable_decimalSymbol();
    const CT_String& get_decimalSymbol() const;
    bool has_listSeparator() const;
    CT_String* mutable_listSeparator();
    const CT_String& get_listSeparator() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const settings_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_activeWritingStyle() const;
        CT_WritingStyle* mutable_activeWritingStyle();
        const CT_WritingStyle& get_activeWritingStyle() const;
    protected:
    private:
        bool m_has_activeWritingStyle;
        CT_WritingStyle* m_activeWritingStyle;
    };
    class ChildGroup_2
    {
    public:
        ChildGroup_2();
        bool has_attachedSchema() const;
        CT_String* mutable_attachedSchema();
        const CT_String& get_attachedSchema() const;
    protected:
    private:
        bool m_has_attachedSchema;
        CT_String* m_attachedSchema;
    };
    class ChildGroup_3
    {
    public:
        ChildGroup_3();
        bool has_smartTagType() const;
        CT_SmartTagType* mutable_smartTagType();
        const CT_SmartTagType& get_smartTagType() const;
    protected:
    private:
        bool m_has_smartTagType;
        CT_SmartTagType* m_smartTagType;
    };
    bool m_has_writeProtection;
    CT_WriteProtection* m_writeProtection;
    bool m_has_view;
    CT_View* m_view;
    bool m_has_zoom;
    CT_Zoom* m_zoom;
    bool m_has_removePersonalInformation;
    CT_OnOff* m_removePersonalInformation;
    bool m_has_removeDateAndTime;
    CT_OnOff* m_removeDateAndTime;
    bool m_has_doNotDisplayPageBoundaries;
    CT_OnOff* m_doNotDisplayPageBoundaries;
    bool m_has_displayBackgroundShape;
    CT_OnOff* m_displayBackgroundShape;
    bool m_has_printPostScriptOverText;
    CT_OnOff* m_printPostScriptOverText;
    bool m_has_printFractionalCharacterWidth;
    CT_OnOff* m_printFractionalCharacterWidth;
    bool m_has_printFormsData;
    CT_OnOff* m_printFormsData;
    bool m_has_embedTrueTypeFonts;
    CT_OnOff* m_embedTrueTypeFonts;
    bool m_has_embedSystemFonts;
    CT_OnOff* m_embedSystemFonts;
    bool m_has_saveSubsetFonts;
    CT_OnOff* m_saveSubsetFonts;
    bool m_has_saveFormsData;
    CT_OnOff* m_saveFormsData;
    bool m_has_mirrorMargins;
    CT_OnOff* m_mirrorMargins;
    bool m_has_alignBordersAndEdges;
    CT_OnOff* m_alignBordersAndEdges;
    bool m_has_bordersDoNotSurroundHeader;
    CT_OnOff* m_bordersDoNotSurroundHeader;
    bool m_has_bordersDoNotSurroundFooter;
    CT_OnOff* m_bordersDoNotSurroundFooter;
    bool m_has_gutterAtTop;
    CT_OnOff* m_gutterAtTop;
    bool m_has_hideSpellingErrors;
    CT_OnOff* m_hideSpellingErrors;
    bool m_has_hideGrammaticalErrors;
    CT_OnOff* m_hideGrammaticalErrors;
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_proofState;
    CT_Proof* m_proofState;
    bool m_has_formsDesign;
    CT_OnOff* m_formsDesign;
    bool m_has_attachedTemplate;
    CT_Rel* m_attachedTemplate;
    bool m_has_linkStyles;
    CT_OnOff* m_linkStyles;
    bool m_has_stylePaneFormatFilter;
    CT_StylePaneFilter* m_stylePaneFormatFilter;
    bool m_has_stylePaneSortMethod;
    CT_StyleSort* m_stylePaneSortMethod;
    bool m_has_documentType;
    CT_DocType* m_documentType;
    bool m_has_mailMerge;
    CT_MailMerge* m_mailMerge;
    bool m_has_revisionView;
    CT_TrackChangesView* m_revisionView;
    bool m_has_trackRevisions;
    CT_OnOff* m_trackRevisions;
    bool m_has_doNotTrackMoves;
    CT_OnOff* m_doNotTrackMoves;
    bool m_has_doNotTrackFormatting;
    CT_OnOff* m_doNotTrackFormatting;
    bool m_has_documentProtection;
    CT_DocProtect* m_documentProtection;
    bool m_has_autoFormatOverride;
    CT_OnOff* m_autoFormatOverride;
    bool m_has_styleLockTheme;
    CT_OnOff* m_styleLockTheme;
    bool m_has_styleLockQFSet;
    CT_OnOff* m_styleLockQFSet;
    bool m_has_defaultTabStop;
    CT_TwipsMeasure* m_defaultTabStop;
    bool m_has_autoHyphenation;
    CT_OnOff* m_autoHyphenation;
    bool m_has_consecutiveHyphenLimit;
    CT_DecimalNumber* m_consecutiveHyphenLimit;
    bool m_has_hyphenationZone;
    CT_TwipsMeasure* m_hyphenationZone;
    bool m_has_doNotHyphenateCaps;
    CT_OnOff* m_doNotHyphenateCaps;
    bool m_has_showEnvelope;
    CT_OnOff* m_showEnvelope;
    bool m_has_summaryLength;
    CT_DecimalNumberOrPrecent* m_summaryLength;
    bool m_has_clickAndTypeStyle;
    CT_String* m_clickAndTypeStyle;
    bool m_has_defaultTableStyle;
    CT_String* m_defaultTableStyle;
    bool m_has_evenAndOddHeaders;
    CT_OnOff* m_evenAndOddHeaders;
    bool m_has_bookFoldRevPrinting;
    CT_OnOff* m_bookFoldRevPrinting;
    bool m_has_bookFoldPrinting;
    CT_OnOff* m_bookFoldPrinting;
    bool m_has_bookFoldPrintingSheets;
    CT_DecimalNumber* m_bookFoldPrintingSheets;
    bool m_has_drawingGridHorizontalSpacing;
    CT_TwipsMeasure* m_drawingGridHorizontalSpacing;
    bool m_has_drawingGridVerticalSpacing;
    CT_TwipsMeasure* m_drawingGridVerticalSpacing;
    bool m_has_displayHorizontalDrawingGridEvery;
    CT_DecimalNumber* m_displayHorizontalDrawingGridEvery;
    bool m_has_displayVerticalDrawingGridEvery;
    CT_DecimalNumber* m_displayVerticalDrawingGridEvery;
    bool m_has_doNotUseMarginsForDrawingGridOrigin;
    CT_OnOff* m_doNotUseMarginsForDrawingGridOrigin;
    bool m_has_drawingGridHorizontalOrigin;
    CT_TwipsMeasure* m_drawingGridHorizontalOrigin;
    bool m_has_drawingGridVerticalOrigin;
    CT_TwipsMeasure* m_drawingGridVerticalOrigin;
    bool m_has_doNotShadeFormData;
    CT_OnOff* m_doNotShadeFormData;
    bool m_has_noPunctuationKerning;
    CT_OnOff* m_noPunctuationKerning;
    bool m_has_characterSpacingControl;
    CT_CharacterSpacing* m_characterSpacingControl;
    bool m_has_printTwoOnOne;
    CT_OnOff* m_printTwoOnOne;
    bool m_has_strictFirstAndLastChars;
    CT_OnOff* m_strictFirstAndLastChars;
    bool m_has_noLineBreaksAfter;
    CT_Kinsoku* m_noLineBreaksAfter;
    bool m_has_noLineBreaksBefore;
    CT_Kinsoku* m_noLineBreaksBefore;
    bool m_has_savePreviewPicture;
    CT_OnOff* m_savePreviewPicture;
    bool m_has_doNotValidateAgainstSchema;
    CT_OnOff* m_doNotValidateAgainstSchema;
    bool m_has_saveInvalidXml;
    CT_OnOff* m_saveInvalidXml;
    bool m_has_ignoreMixedContent;
    CT_OnOff* m_ignoreMixedContent;
    bool m_has_alwaysShowPlaceholderText;
    CT_OnOff* m_alwaysShowPlaceholderText;
    bool m_has_doNotDemarcateInvalidXml;
    CT_OnOff* m_doNotDemarcateInvalidXml;
    bool m_has_saveXmlDataOnly;
    CT_OnOff* m_saveXmlDataOnly;
    bool m_has_useXSLTWhenSaving;
    CT_OnOff* m_useXSLTWhenSaving;
    bool m_has_saveThroughXslt;
    CT_SaveThroughXslt* m_saveThroughXslt;
    bool m_has_showXMLTags;
    CT_OnOff* m_showXMLTags;
    bool m_has_alwaysMergeEmptyNamespace;
    CT_OnOff* m_alwaysMergeEmptyNamespace;
    bool m_has_updateFields;
    CT_OnOff* m_updateFields;
    bool m_has_hdrShapeDefaults;
    CT_ShapeDefaults* m_hdrShapeDefaults;
    bool m_has_footnotePr;
    CT_FtnDocProps* m_footnotePr;
    bool m_has_endnotePr;
    CT_EdnDocProps* m_endnotePr;
    bool m_has_compat;
    CT_Compat* m_compat;
    bool m_has_docVars;
    CT_DocVars* m_docVars;
    bool m_has_rsids;
    CT_DocRsids* m_rsids;
    bool m_has_m_mathPr;
    ns_m::CT_MathPr* m_m_mathPr;
    vector<ChildGroup_2*> m_childGroupList_2;
    bool m_has_themeFontLang;
    CT_Language* m_themeFontLang;
    bool m_has_clrSchemeMapping;
    CT_ColorSchemeMapping* m_clrSchemeMapping;
    bool m_has_doNotIncludeSubdocsInStats;
    CT_OnOff* m_doNotIncludeSubdocsInStats;
    bool m_has_doNotAutoCompressPictures;
    CT_OnOff* m_doNotAutoCompressPictures;
    bool m_has_forceUpgrade;
    CT_Empty* m_forceUpgrade;
    bool m_has_captions;
    CT_Captions* m_captions;
    bool m_has_readModeInkLockDown;
    CT_ReadingModeInkLockDown* m_readModeInkLockDown;
    vector<ChildGroup_3*> m_childGroupList_3;
    bool m_has_sl_schemaLibrary;
    ns_sl::CT_SchemaLibrary* m_sl_schemaLibrary;
    bool m_has_shapeDefaults;
    CT_ShapeDefaults* m_shapeDefaults;
    bool m_has_doNotEmbedSmartTags;
    CT_OnOff* m_doNotEmbedSmartTags;
    bool m_has_decimalSymbol;
    CT_String* m_decimalSymbol;
    bool m_has_listSeparator;
    CT_String* m_listSeparator;
    static settings_element* default_instance_;
};

class webSettings_element: public Element
{
public:
    webSettings_element();
    ~webSettings_element();
    bool has_frameset() const;
    CT_Frameset* mutable_frameset();
    const CT_Frameset& get_frameset() const;
    bool has_divs() const;
    CT_Divs* mutable_divs();
    const CT_Divs& get_divs() const;
    bool has_encoding() const;
    CT_String* mutable_encoding();
    const CT_String& get_encoding() const;
    bool has_optimizeForBrowser() const;
    CT_OptimizeForBrowser* mutable_optimizeForBrowser();
    const CT_OptimizeForBrowser& get_optimizeForBrowser() const;
    bool has_relyOnVML() const;
    CT_OnOff* mutable_relyOnVML();
    const CT_OnOff& get_relyOnVML() const;
    bool has_allowPNG() const;
    CT_OnOff* mutable_allowPNG();
    const CT_OnOff& get_allowPNG() const;
    bool has_doNotRelyOnCSS() const;
    CT_OnOff* mutable_doNotRelyOnCSS();
    const CT_OnOff& get_doNotRelyOnCSS() const;
    bool has_doNotSaveAsSingleFile() const;
    CT_OnOff* mutable_doNotSaveAsSingleFile();
    const CT_OnOff& get_doNotSaveAsSingleFile() const;
    bool has_doNotOrganizeInFolder() const;
    CT_OnOff* mutable_doNotOrganizeInFolder();
    const CT_OnOff& get_doNotOrganizeInFolder() const;
    bool has_doNotUseLongFileNames() const;
    CT_OnOff* mutable_doNotUseLongFileNames();
    const CT_OnOff& get_doNotUseLongFileNames() const;
    bool has_pixelsPerInch() const;
    CT_DecimalNumber* mutable_pixelsPerInch();
    const CT_DecimalNumber& get_pixelsPerInch() const;
    bool has_targetScreenSz() const;
    CT_TargetScreenSz* mutable_targetScreenSz();
    const CT_TargetScreenSz& get_targetScreenSz() const;
    bool has_saveSmartTagsAsXml() const;
    CT_OnOff* mutable_saveSmartTagsAsXml();
    const CT_OnOff& get_saveSmartTagsAsXml() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const webSettings_element& default_instance();
protected:
private:
    bool m_has_frameset;
    CT_Frameset* m_frameset;
    bool m_has_divs;
    CT_Divs* m_divs;
    bool m_has_encoding;
    CT_String* m_encoding;
    bool m_has_optimizeForBrowser;
    CT_OptimizeForBrowser* m_optimizeForBrowser;
    bool m_has_relyOnVML;
    CT_OnOff* m_relyOnVML;
    bool m_has_allowPNG;
    CT_OnOff* m_allowPNG;
    bool m_has_doNotRelyOnCSS;
    CT_OnOff* m_doNotRelyOnCSS;
    bool m_has_doNotSaveAsSingleFile;
    CT_OnOff* m_doNotSaveAsSingleFile;
    bool m_has_doNotOrganizeInFolder;
    CT_OnOff* m_doNotOrganizeInFolder;
    bool m_has_doNotUseLongFileNames;
    CT_OnOff* m_doNotUseLongFileNames;
    bool m_has_pixelsPerInch;
    CT_DecimalNumber* m_pixelsPerInch;
    bool m_has_targetScreenSz;
    CT_TargetScreenSz* m_targetScreenSz;
    bool m_has_saveSmartTagsAsXml;
    CT_OnOff* m_saveSmartTagsAsXml;
    static webSettings_element* default_instance_;
};

class fonts_element: public Element
{
public:
    fonts_element();
    ~fonts_element();
    CT_Font* add_font();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const fonts_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_font() const;
        CT_Font* mutable_font();
        const CT_Font& get_font() const;
    protected:
    private:
        bool m_has_font;
        CT_Font* m_font;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static fonts_element* default_instance_;
};

class numbering_element: public Element
{
public:
    numbering_element();
    ~numbering_element();
    CT_NumPicBullet* add_numPicBullet();
    CT_AbstractNum* add_abstractNum();
    CT_Num* add_num();
    bool has_numIdMacAtCleanup() const;
    CT_DecimalNumber* mutable_numIdMacAtCleanup();
    const CT_DecimalNumber& get_numIdMacAtCleanup() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const numbering_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_numPicBullet() const;
        CT_NumPicBullet* mutable_numPicBullet();
        const CT_NumPicBullet& get_numPicBullet() const;
        bool has_abstractNum() const;
        CT_AbstractNum* mutable_abstractNum();
        const CT_AbstractNum& get_abstractNum() const;
        bool has_num() const;
        CT_Num* mutable_num();
        const CT_Num& get_num() const;
    protected:
    private:
        bool m_has_numPicBullet;
        CT_NumPicBullet* m_numPicBullet;
        bool m_has_abstractNum;
        CT_AbstractNum* m_abstractNum;
        bool m_has_num;
        CT_Num* m_num;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    bool m_has_numIdMacAtCleanup;
    CT_DecimalNumber* m_numIdMacAtCleanup;
    static numbering_element* default_instance_;
};

class styles_element: public Element
{
public:
    styles_element();
    ~styles_element();
    bool has_docDefaults() const;
    CT_DocDefaults* mutable_docDefaults();
    const CT_DocDefaults& get_docDefaults() const;
    bool has_latentStyles() const;
    CT_LatentStyles* mutable_latentStyles();
    const CT_LatentStyles& get_latentStyles() const;
    CT_Style* add_style();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const styles_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_style() const;
        CT_Style* mutable_style();
        const CT_Style& get_style() const;
    protected:
    private:
        bool m_has_style;
        CT_Style* m_style;
    };
    bool m_has_docDefaults;
    CT_DocDefaults* m_docDefaults;
    bool m_has_latentStyles;
    CT_LatentStyles* m_latentStyles;
    vector<ChildGroup_1*> m_childGroupList_1;
    static styles_element* default_instance_;
};

class document_element: public Element
{
public:
    document_element();
    ~document_element();
    bool has_background() const;
    CT_Background* mutable_background();
    const CT_Background& get_background() const;
    bool has_body() const;
    CT_Body* mutable_body();
    const CT_Body& get_body() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const document_element& default_instance();
    bool has_conformance_attr() const;
    void set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr);
    const ns_s::ST_ConformanceClass& get_conformance_attr() const;
protected:
private:
    bool m_has_background;
    CT_Background* m_background;
    bool m_has_body;
    CT_Body* m_body;
    static document_element* default_instance_;
    bool m_has_conformance_attr;
    ns_s::ST_ConformanceClass* m_conformance_attr;
};

class glossaryDocument_element: public Element
{
public:
    glossaryDocument_element();
    ~glossaryDocument_element();
    bool has_background() const;
    CT_Background* mutable_background();
    const CT_Background& get_background() const;
    bool has_docParts() const;
    CT_DocParts* mutable_docParts();
    const CT_DocParts& get_docParts() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const glossaryDocument_element& default_instance();
protected:
private:
    bool m_has_background;
    CT_Background* m_background;
    bool m_has_docParts;
    CT_DocParts* m_docParts;
    static glossaryDocument_element* default_instance_;
};

}
#endif