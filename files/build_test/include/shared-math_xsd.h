namespace ns_m {
    class Element;
    class Attribute;
    class ST_Integer255;
    class ST_Integer2;
    class ST_SpacingRule;
    class ST_UnSignedInteger;
    class ST_Char;
    class ST_Shp;
    class ST_FType;
    class ST_LimLoc;
    class ST_TopBot;
    class ST_Script;
    class ST_Style;
    class ST_Jc;
    class ST_BreakBin;
    class ST_BreakBinSub;
    class CT_Integer255;
    class CT_Integer2;
    class CT_SpacingRule;
    class CT_UnSignedInteger;
    class CT_Char;
    class CT_OnOff;
    class CT_String;
    class CT_XAlign;
    class CT_YAlign;
    class CT_Shp;
    class CT_FType;
    class CT_LimLoc;
    class CT_TopBot;
    class CT_Script;
    class CT_Style;
    class CT_ManualBreak;
    class CT_RPR;
    class CT_Text;
    class CT_R;
    class CT_CtrlPr;
    class CT_AccPr;
    class CT_Acc;
    class CT_BarPr;
    class CT_Bar;
    class CT_BoxPr;
    class CT_Box;
    class CT_BorderBoxPr;
    class CT_BorderBox;
    class CT_DPr;
    class CT_D;
    class CT_EqArrPr;
    class CT_EqArr;
    class CT_FPr;
    class CT_F;
    class CT_FuncPr;
    class CT_Func;
    class CT_GroupChrPr;
    class CT_GroupChr;
    class CT_LimLowPr;
    class CT_LimLow;
    class CT_LimUppPr;
    class CT_LimUpp;
    class CT_MCPr;
    class CT_MC;
    class CT_MCS;
    class CT_MPr;
    class CT_MR;
    class CT_M;
    class CT_NaryPr;
    class CT_Nary;
    class CT_PhantPr;
    class CT_Phant;
    class CT_RadPr;
    class CT_Rad;
    class CT_SPrePr;
    class CT_SPre;
    class CT_SSubPr;
    class CT_SSub;
    class CT_SSubSupPr;
    class CT_SSubSup;
    class CT_SSupPr;
    class CT_SSup;
    class CT_OMathArgPr;
    class CT_OMathArg;
    class CT_OMathJc;
    class CT_OMathParaPr;
    class CT_TwipsMeasure;
    class CT_BreakBin;
    class CT_BreakBinSub;
    class CT_MathPr;
    class CT_OMathPara;
    class CT_OMath;
    class mathPr_element;
    class oMathPara_element;
    class oMath_element;
}
#ifndef __shared_math_xsd_
#define __shared_math_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "wml_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_m {
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

    class ST_Integer255: public XSD::SimpleType
    {
    public:
        ST_Integer255();
        ST_Integer255(const XSD::integer_& _integer);
        ~ST_Integer255();
        bool has_integer() const;
        void set_integer(const XSD::integer_& _integer);
        const XSD::integer_& get_integer() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Integer255& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Integer255* default_instance_;
        bool m_has_integer;
        XSD::integer_ m_integer;
    };

    class ST_Integer2: public XSD::SimpleType
    {
    public:
        ST_Integer2();
        ST_Integer2(const XSD::integer_& _integer);
        ~ST_Integer2();
        bool has_integer() const;
        void set_integer(const XSD::integer_& _integer);
        const XSD::integer_& get_integer() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Integer2& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Integer2* default_instance_;
        bool m_has_integer;
        XSD::integer_ m_integer;
    };

    class ST_SpacingRule: public XSD::SimpleType
    {
    public:
        ST_SpacingRule();
        ST_SpacingRule(const XSD::integer_& _integer);
        ~ST_SpacingRule();
        bool has_integer() const;
        void set_integer(const XSD::integer_& _integer);
        const XSD::integer_& get_integer() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_SpacingRule& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_SpacingRule* default_instance_;
        bool m_has_integer;
        XSD::integer_ m_integer;
    };

    class ST_UnSignedInteger: public XSD::SimpleType
    {
    public:
        ST_UnSignedInteger();
        ST_UnSignedInteger(const XSD::unsignedInt_& _unsignedInt);
        ~ST_UnSignedInteger();
        bool has_unsignedInt() const;
        void set_unsignedInt(const XSD::unsignedInt_& _unsignedInt);
        const XSD::unsignedInt_& get_unsignedInt() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_UnSignedInteger& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_UnSignedInteger* default_instance_;
        bool m_has_unsignedInt;
        XSD::unsignedInt_ m_unsignedInt;
    };

    class ST_Char: public XSD::SimpleType
    {
    public:
        ST_Char();
        ST_Char(const XSD::string_& _string);
        ~ST_Char();
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Char& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Char* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_Shp: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _centered_ = 0,
            _match_
        };
        ST_Shp();
        ST_Shp(const ST_Shp::Type& _type);
        ~ST_Shp();
        bool has_type() const;
        void set_type(const ST_Shp::Type& _type);
        const ST_Shp::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Shp& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_Shp* default_instance_;
        bool m_has_type;
        ST_Shp::Type m_type;
    };

    class ST_FType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _bar_ = 0,
            _skw_,
            _lin_,
            _noBar_
        };
        ST_FType();
        ST_FType(const ST_FType::Type& _type);
        ~ST_FType();
        bool has_type() const;
        void set_type(const ST_FType::Type& _type);
        const ST_FType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_FType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_FType* default_instance_;
        bool m_has_type;
        ST_FType::Type m_type;
    };

    class ST_LimLoc: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _undOvr_ = 0,
            _subSup_
        };
        ST_LimLoc();
        ST_LimLoc(const ST_LimLoc::Type& _type);
        ~ST_LimLoc();
        bool has_type() const;
        void set_type(const ST_LimLoc::Type& _type);
        const ST_LimLoc::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_LimLoc& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_LimLoc* default_instance_;
        bool m_has_type;
        ST_LimLoc::Type m_type;
    };

    class ST_TopBot: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _top_ = 0,
            _bot_
        };
        ST_TopBot();
        ST_TopBot(const ST_TopBot::Type& _type);
        ~ST_TopBot();
        bool has_type() const;
        void set_type(const ST_TopBot::Type& _type);
        const ST_TopBot::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_TopBot& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_TopBot* default_instance_;
        bool m_has_type;
        ST_TopBot::Type m_type;
    };

    class ST_Script: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _roman_ = 0,
            _script_,
            _fraktur_,
            _double_struck_,
            _sans_serif_,
            _monospace_
        };
        ST_Script();
        ST_Script(const ST_Script::Type& _type);
        ~ST_Script();
        bool has_type() const;
        void set_type(const ST_Script::Type& _type);
        const ST_Script::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Script& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_Script* default_instance_;
        bool m_has_type;
        ST_Script::Type m_type;
    };

    class ST_Style: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _p_ = 0,
            _b_,
            _i_,
            _bi_
        };
        ST_Style();
        ST_Style(const ST_Style::Type& _type);
        ~ST_Style();
        bool has_type() const;
        void set_type(const ST_Style::Type& _type);
        const ST_Style::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Style& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_Style* default_instance_;
        bool m_has_type;
        ST_Style::Type m_type;
    };

    class ST_Jc: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _left_ = 0,
            _right_,
            _center_,
            _centerGroup_
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

    class ST_BreakBin: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _before_ = 0,
            _after_,
            _repeat_
        };
        ST_BreakBin();
        ST_BreakBin(const ST_BreakBin::Type& _type);
        ~ST_BreakBin();
        bool has_type() const;
        void set_type(const ST_BreakBin::Type& _type);
        const ST_BreakBin::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_BreakBin& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_BreakBin* default_instance_;
        bool m_has_type;
        ST_BreakBin::Type m_type;
    };

    class ST_BreakBinSub: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            ____ = 0,
            __plus_,
            _plus__
        };
        ST_BreakBinSub();
        ST_BreakBinSub(const ST_BreakBinSub::Type& _type);
        ~ST_BreakBinSub();
        bool has_type() const;
        void set_type(const ST_BreakBinSub::Type& _type);
        const ST_BreakBinSub::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_BreakBinSub& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_BreakBinSub* default_instance_;
        bool m_has_type;
        ST_BreakBinSub::Type m_type;
    };

    class CT_Integer255: public XSD::ComplexType
    {
    public:
        CT_Integer255();
        ~CT_Integer255();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Integer255& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_Integer255& _val_attr);
        const ST_Integer255& get_val_attr() const;
    protected:
    private:
        static CT_Integer255* default_instance_;
        bool m_has_val_attr;
        ST_Integer255* m_val_attr;
    };

    class CT_Integer2: public XSD::ComplexType
    {
    public:
        CT_Integer2();
        ~CT_Integer2();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Integer2& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_Integer2& _val_attr);
        const ST_Integer2& get_val_attr() const;
    protected:
    private:
        static CT_Integer2* default_instance_;
        bool m_has_val_attr;
        ST_Integer2* m_val_attr;
    };

    class CT_SpacingRule: public XSD::ComplexType
    {
    public:
        CT_SpacingRule();
        ~CT_SpacingRule();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SpacingRule& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_SpacingRule& _val_attr);
        const ST_SpacingRule& get_val_attr() const;
    protected:
    private:
        static CT_SpacingRule* default_instance_;
        bool m_has_val_attr;
        ST_SpacingRule* m_val_attr;
    };

    class CT_UnSignedInteger: public XSD::ComplexType
    {
    public:
        CT_UnSignedInteger();
        ~CT_UnSignedInteger();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_UnSignedInteger& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_UnSignedInteger& _val_attr);
        const ST_UnSignedInteger& get_val_attr() const;
    protected:
    private:
        static CT_UnSignedInteger* default_instance_;
        bool m_has_val_attr;
        ST_UnSignedInteger* m_val_attr;
    };

    class CT_Char: public XSD::ComplexType
    {
    public:
        CT_Char();
        ~CT_Char();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Char& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_Char& _val_attr);
        const ST_Char& get_val_attr() const;
    protected:
    private:
        static CT_Char* default_instance_;
        bool m_has_val_attr;
        ST_Char* m_val_attr;
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

    class CT_XAlign: public XSD::ComplexType
    {
    public:
        CT_XAlign();
        ~CT_XAlign();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_XAlign& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_XAlign& _val_attr);
        const ns_s::ST_XAlign& get_val_attr() const;
    protected:
    private:
        static CT_XAlign* default_instance_;
        bool m_has_val_attr;
        ns_s::ST_XAlign* m_val_attr;
    };

    class CT_YAlign: public XSD::ComplexType
    {
    public:
        CT_YAlign();
        ~CT_YAlign();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_YAlign& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_YAlign& _val_attr);
        const ns_s::ST_YAlign& get_val_attr() const;
    protected:
    private:
        static CT_YAlign* default_instance_;
        bool m_has_val_attr;
        ns_s::ST_YAlign* m_val_attr;
    };

    class CT_Shp: public XSD::ComplexType
    {
    public:
        CT_Shp();
        ~CT_Shp();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Shp& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_Shp& _val_attr);
        const ST_Shp& get_val_attr() const;
    protected:
    private:
        static CT_Shp* default_instance_;
        bool m_has_val_attr;
        ST_Shp* m_val_attr;
    };

    class CT_FType: public XSD::ComplexType
    {
    public:
        CT_FType();
        ~CT_FType();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_FType& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_FType& _val_attr);
        const ST_FType& get_val_attr() const;
    protected:
    private:
        static CT_FType* default_instance_;
        bool m_has_val_attr;
        ST_FType* m_val_attr;
    };

    class CT_LimLoc: public XSD::ComplexType
    {
    public:
        CT_LimLoc();
        ~CT_LimLoc();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_LimLoc& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_LimLoc& _val_attr);
        const ST_LimLoc& get_val_attr() const;
    protected:
    private:
        static CT_LimLoc* default_instance_;
        bool m_has_val_attr;
        ST_LimLoc* m_val_attr;
    };

    class CT_TopBot: public XSD::ComplexType
    {
    public:
        CT_TopBot();
        ~CT_TopBot();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_TopBot& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_TopBot& _val_attr);
        const ST_TopBot& get_val_attr() const;
    protected:
    private:
        static CT_TopBot* default_instance_;
        bool m_has_val_attr;
        ST_TopBot* m_val_attr;
    };

    class CT_Script: public XSD::ComplexType
    {
    public:
        CT_Script();
        ~CT_Script();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Script& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_Script& _val_attr);
        const ST_Script& get_val_attr() const;
    protected:
    private:
        static CT_Script* default_instance_;
        bool m_has_val_attr;
        ST_Script* m_val_attr;
    };

    class CT_Style: public XSD::ComplexType
    {
    public:
        CT_Style();
        ~CT_Style();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Style& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_Style& _val_attr);
        const ST_Style& get_val_attr() const;
    protected:
    private:
        static CT_Style* default_instance_;
        bool m_has_val_attr;
        ST_Style* m_val_attr;
    };

    class CT_ManualBreak: public XSD::ComplexType
    {
    public:
        CT_ManualBreak();
        ~CT_ManualBreak();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_ManualBreak& default_instance();
        bool has_alnAt_attr() const;
        void set_alnAt_attr(const ST_Integer255& _alnAt_attr);
        const ST_Integer255& get_alnAt_attr() const;
    protected:
    private:
        static CT_ManualBreak* default_instance_;
        bool m_has_alnAt_attr;
        ST_Integer255* m_alnAt_attr;
    };

    class CT_RPR: public XSD::ComplexType
    {
    public:
        CT_RPR();
        ~CT_RPR();
        bool has_lit() const;
        CT_OnOff* mutable_lit();
        const CT_OnOff& get_lit() const;
        bool has_nor() const;
        CT_OnOff* mutable_nor();
        const CT_OnOff& get_nor() const;
        bool has_brk() const;
        CT_ManualBreak* mutable_brk();
        const CT_ManualBreak& get_brk() const;
        bool has_aln() const;
        CT_OnOff* mutable_aln();
        const CT_OnOff& get_aln() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_RPR& default_instance();
    protected:
    private:
        bool m_has_lit;
        CT_OnOff* m_lit;
        bool m_has_nor;
        CT_OnOff* m_nor;
        bool m_has_brk;
        CT_ManualBreak* m_brk;
        bool m_has_aln;
        CT_OnOff* m_aln;
        static CT_RPR* default_instance_;
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
        CT_RPR* mutable_rPr();
        const CT_RPR& get_rPr() const;
        bool has_w_rPr() const;
        ns_w::CT_RPr* mutable_w_rPr();
        const ns_w::CT_RPr& get_w_rPr() const;
        ns_w::CT_Br* add_w_br();
        ns_w::CT_Text* add_w_t();
        ns_w::CT_Rel* add_w_contentPart();
        ns_w::CT_Text* add_w_delText();
        ns_w::CT_Text* add_w_instrText();
        ns_w::CT_Text* add_w_delInstrText();
        ns_w::CT_Empty* add_w_noBreakHyphen();
        ns_w::CT_Empty* add_w_softHyphen();
        ns_w::CT_Empty* add_w_dayShort();
        ns_w::CT_Empty* add_w_monthShort();
        ns_w::CT_Empty* add_w_yearShort();
        ns_w::CT_Empty* add_w_dayLong();
        ns_w::CT_Empty* add_w_monthLong();
        ns_w::CT_Empty* add_w_yearLong();
        ns_w::CT_Empty* add_w_annotationRef();
        ns_w::CT_Empty* add_w_footnoteRef();
        ns_w::CT_Empty* add_w_endnoteRef();
        ns_w::CT_Empty* add_w_separator();
        ns_w::CT_Empty* add_w_continuationSeparator();
        ns_w::CT_Sym* add_w_sym();
        ns_w::CT_Empty* add_w_pgNum();
        ns_w::CT_Empty* add_w_cr();
        ns_w::CT_Empty* add_w_tab();
        ns_w::CT_Object* add_w_object();
        ns_w::CT_Picture* add_w_pict();
        ns_w::CT_FldChar* add_w_fldChar();
        ns_w::CT_Ruby* add_w_ruby();
        ns_w::CT_FtnEdnRef* add_w_footnoteReference();
        ns_w::CT_FtnEdnRef* add_w_endnoteReference();
        ns_w::CT_Markup* add_w_commentReference();
        ns_w::CT_Drawing* add_w_drawing();
        ns_w::CT_PTab* add_w_ptab();
        ns_w::CT_Empty* add_w_lastRenderedPageBreak();
        CT_Text* add_t();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_R& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_w_br() const;
            ns_w::CT_Br* mutable_w_br();
            const ns_w::CT_Br& get_w_br() const;
            bool has_w_t() const;
            ns_w::CT_Text* mutable_w_t();
            const ns_w::CT_Text& get_w_t() const;
            bool has_w_contentPart() const;
            ns_w::CT_Rel* mutable_w_contentPart();
            const ns_w::CT_Rel& get_w_contentPart() const;
            bool has_w_delText() const;
            ns_w::CT_Text* mutable_w_delText();
            const ns_w::CT_Text& get_w_delText() const;
            bool has_w_instrText() const;
            ns_w::CT_Text* mutable_w_instrText();
            const ns_w::CT_Text& get_w_instrText() const;
            bool has_w_delInstrText() const;
            ns_w::CT_Text* mutable_w_delInstrText();
            const ns_w::CT_Text& get_w_delInstrText() const;
            bool has_w_noBreakHyphen() const;
            ns_w::CT_Empty* mutable_w_noBreakHyphen();
            const ns_w::CT_Empty& get_w_noBreakHyphen() const;
            bool has_w_softHyphen() const;
            ns_w::CT_Empty* mutable_w_softHyphen();
            const ns_w::CT_Empty& get_w_softHyphen() const;
            bool has_w_dayShort() const;
            ns_w::CT_Empty* mutable_w_dayShort();
            const ns_w::CT_Empty& get_w_dayShort() const;
            bool has_w_monthShort() const;
            ns_w::CT_Empty* mutable_w_monthShort();
            const ns_w::CT_Empty& get_w_monthShort() const;
            bool has_w_yearShort() const;
            ns_w::CT_Empty* mutable_w_yearShort();
            const ns_w::CT_Empty& get_w_yearShort() const;
            bool has_w_dayLong() const;
            ns_w::CT_Empty* mutable_w_dayLong();
            const ns_w::CT_Empty& get_w_dayLong() const;
            bool has_w_monthLong() const;
            ns_w::CT_Empty* mutable_w_monthLong();
            const ns_w::CT_Empty& get_w_monthLong() const;
            bool has_w_yearLong() const;
            ns_w::CT_Empty* mutable_w_yearLong();
            const ns_w::CT_Empty& get_w_yearLong() const;
            bool has_w_annotationRef() const;
            ns_w::CT_Empty* mutable_w_annotationRef();
            const ns_w::CT_Empty& get_w_annotationRef() const;
            bool has_w_footnoteRef() const;
            ns_w::CT_Empty* mutable_w_footnoteRef();
            const ns_w::CT_Empty& get_w_footnoteRef() const;
            bool has_w_endnoteRef() const;
            ns_w::CT_Empty* mutable_w_endnoteRef();
            const ns_w::CT_Empty& get_w_endnoteRef() const;
            bool has_w_separator() const;
            ns_w::CT_Empty* mutable_w_separator();
            const ns_w::CT_Empty& get_w_separator() const;
            bool has_w_continuationSeparator() const;
            ns_w::CT_Empty* mutable_w_continuationSeparator();
            const ns_w::CT_Empty& get_w_continuationSeparator() const;
            bool has_w_sym() const;
            ns_w::CT_Sym* mutable_w_sym();
            const ns_w::CT_Sym& get_w_sym() const;
            bool has_w_pgNum() const;
            ns_w::CT_Empty* mutable_w_pgNum();
            const ns_w::CT_Empty& get_w_pgNum() const;
            bool has_w_cr() const;
            ns_w::CT_Empty* mutable_w_cr();
            const ns_w::CT_Empty& get_w_cr() const;
            bool has_w_tab() const;
            ns_w::CT_Empty* mutable_w_tab();
            const ns_w::CT_Empty& get_w_tab() const;
            bool has_w_object() const;
            ns_w::CT_Object* mutable_w_object();
            const ns_w::CT_Object& get_w_object() const;
            bool has_w_pict() const;
            ns_w::CT_Picture* mutable_w_pict();
            const ns_w::CT_Picture& get_w_pict() const;
            bool has_w_fldChar() const;
            ns_w::CT_FldChar* mutable_w_fldChar();
            const ns_w::CT_FldChar& get_w_fldChar() const;
            bool has_w_ruby() const;
            ns_w::CT_Ruby* mutable_w_ruby();
            const ns_w::CT_Ruby& get_w_ruby() const;
            bool has_w_footnoteReference() const;
            ns_w::CT_FtnEdnRef* mutable_w_footnoteReference();
            const ns_w::CT_FtnEdnRef& get_w_footnoteReference() const;
            bool has_w_endnoteReference() const;
            ns_w::CT_FtnEdnRef* mutable_w_endnoteReference();
            const ns_w::CT_FtnEdnRef& get_w_endnoteReference() const;
            bool has_w_commentReference() const;
            ns_w::CT_Markup* mutable_w_commentReference();
            const ns_w::CT_Markup& get_w_commentReference() const;
            bool has_w_drawing() const;
            ns_w::CT_Drawing* mutable_w_drawing();
            const ns_w::CT_Drawing& get_w_drawing() const;
            bool has_w_ptab() const;
            ns_w::CT_PTab* mutable_w_ptab();
            const ns_w::CT_PTab& get_w_ptab() const;
            bool has_w_lastRenderedPageBreak() const;
            ns_w::CT_Empty* mutable_w_lastRenderedPageBreak();
            const ns_w::CT_Empty& get_w_lastRenderedPageBreak() const;
            bool has_t() const;
            CT_Text* mutable_t();
            const CT_Text& get_t() const;
        protected:
        private:
            bool m_has_w_br;
            ns_w::CT_Br* m_w_br;
            bool m_has_w_t;
            ns_w::CT_Text* m_w_t;
            bool m_has_w_contentPart;
            ns_w::CT_Rel* m_w_contentPart;
            bool m_has_w_delText;
            ns_w::CT_Text* m_w_delText;
            bool m_has_w_instrText;
            ns_w::CT_Text* m_w_instrText;
            bool m_has_w_delInstrText;
            ns_w::CT_Text* m_w_delInstrText;
            bool m_has_w_noBreakHyphen;
            ns_w::CT_Empty* m_w_noBreakHyphen;
            bool m_has_w_softHyphen;
            ns_w::CT_Empty* m_w_softHyphen;
            bool m_has_w_dayShort;
            ns_w::CT_Empty* m_w_dayShort;
            bool m_has_w_monthShort;
            ns_w::CT_Empty* m_w_monthShort;
            bool m_has_w_yearShort;
            ns_w::CT_Empty* m_w_yearShort;
            bool m_has_w_dayLong;
            ns_w::CT_Empty* m_w_dayLong;
            bool m_has_w_monthLong;
            ns_w::CT_Empty* m_w_monthLong;
            bool m_has_w_yearLong;
            ns_w::CT_Empty* m_w_yearLong;
            bool m_has_w_annotationRef;
            ns_w::CT_Empty* m_w_annotationRef;
            bool m_has_w_footnoteRef;
            ns_w::CT_Empty* m_w_footnoteRef;
            bool m_has_w_endnoteRef;
            ns_w::CT_Empty* m_w_endnoteRef;
            bool m_has_w_separator;
            ns_w::CT_Empty* m_w_separator;
            bool m_has_w_continuationSeparator;
            ns_w::CT_Empty* m_w_continuationSeparator;
            bool m_has_w_sym;
            ns_w::CT_Sym* m_w_sym;
            bool m_has_w_pgNum;
            ns_w::CT_Empty* m_w_pgNum;
            bool m_has_w_cr;
            ns_w::CT_Empty* m_w_cr;
            bool m_has_w_tab;
            ns_w::CT_Empty* m_w_tab;
            bool m_has_w_object;
            ns_w::CT_Object* m_w_object;
            bool m_has_w_pict;
            ns_w::CT_Picture* m_w_pict;
            bool m_has_w_fldChar;
            ns_w::CT_FldChar* m_w_fldChar;
            bool m_has_w_ruby;
            ns_w::CT_Ruby* m_w_ruby;
            bool m_has_w_footnoteReference;
            ns_w::CT_FtnEdnRef* m_w_footnoteReference;
            bool m_has_w_endnoteReference;
            ns_w::CT_FtnEdnRef* m_w_endnoteReference;
            bool m_has_w_commentReference;
            ns_w::CT_Markup* m_w_commentReference;
            bool m_has_w_drawing;
            ns_w::CT_Drawing* m_w_drawing;
            bool m_has_w_ptab;
            ns_w::CT_PTab* m_w_ptab;
            bool m_has_w_lastRenderedPageBreak;
            ns_w::CT_Empty* m_w_lastRenderedPageBreak;
            bool m_has_t;
            CT_Text* m_t;
        };
        bool m_has_rPr;
        CT_RPR* m_rPr;
        bool m_has_w_rPr;
        ns_w::CT_RPr* m_w_rPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_R* default_instance_;
    };

    class CT_CtrlPr: public XSD::ComplexType
    {
    public:
        CT_CtrlPr();
        ~CT_CtrlPr();
        bool has_w_ins() const;
        ns_w::CT_MathCtrlIns* mutable_w_ins();
        const ns_w::CT_MathCtrlIns& get_w_ins() const;
        bool has_w_del() const;
        ns_w::CT_MathCtrlDel* mutable_w_del();
        const ns_w::CT_MathCtrlDel& get_w_del() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_CtrlPr& default_instance();
    protected:
    private:
        bool m_has_w_ins;
        ns_w::CT_MathCtrlIns* m_w_ins;
        bool m_has_w_del;
        ns_w::CT_MathCtrlDel* m_w_del;
        static CT_CtrlPr* default_instance_;
    };

    class CT_AccPr: public XSD::ComplexType
    {
    public:
        CT_AccPr();
        ~CT_AccPr();
        bool has_chr() const;
        CT_Char* mutable_chr();
        const CT_Char& get_chr() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_AccPr& default_instance();
    protected:
    private:
        bool m_has_chr;
        CT_Char* m_chr;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_AccPr* default_instance_;
    };

    class CT_Acc: public XSD::ComplexType
    {
    public:
        CT_Acc();
        ~CT_Acc();
        bool has_accPr() const;
        CT_AccPr* mutable_accPr();
        const CT_AccPr& get_accPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Acc& default_instance();
    protected:
    private:
        bool m_has_accPr;
        CT_AccPr* m_accPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_Acc* default_instance_;
    };

    class CT_BarPr: public XSD::ComplexType
    {
    public:
        CT_BarPr();
        ~CT_BarPr();
        bool has_pos() const;
        CT_TopBot* mutable_pos();
        const CT_TopBot& get_pos() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_BarPr& default_instance();
    protected:
    private:
        bool m_has_pos;
        CT_TopBot* m_pos;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_BarPr* default_instance_;
    };

    class CT_Bar: public XSD::ComplexType
    {
    public:
        CT_Bar();
        ~CT_Bar();
        bool has_barPr() const;
        CT_BarPr* mutable_barPr();
        const CT_BarPr& get_barPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Bar& default_instance();
    protected:
    private:
        bool m_has_barPr;
        CT_BarPr* m_barPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_Bar* default_instance_;
    };

    class CT_BoxPr: public XSD::ComplexType
    {
    public:
        CT_BoxPr();
        ~CT_BoxPr();
        bool has_opEmu() const;
        CT_OnOff* mutable_opEmu();
        const CT_OnOff& get_opEmu() const;
        bool has_noBreak() const;
        CT_OnOff* mutable_noBreak();
        const CT_OnOff& get_noBreak() const;
        bool has_diff() const;
        CT_OnOff* mutable_diff();
        const CT_OnOff& get_diff() const;
        bool has_brk() const;
        CT_ManualBreak* mutable_brk();
        const CT_ManualBreak& get_brk() const;
        bool has_aln() const;
        CT_OnOff* mutable_aln();
        const CT_OnOff& get_aln() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_BoxPr& default_instance();
    protected:
    private:
        bool m_has_opEmu;
        CT_OnOff* m_opEmu;
        bool m_has_noBreak;
        CT_OnOff* m_noBreak;
        bool m_has_diff;
        CT_OnOff* m_diff;
        bool m_has_brk;
        CT_ManualBreak* m_brk;
        bool m_has_aln;
        CT_OnOff* m_aln;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_BoxPr* default_instance_;
    };

    class CT_Box: public XSD::ComplexType
    {
    public:
        CT_Box();
        ~CT_Box();
        bool has_boxPr() const;
        CT_BoxPr* mutable_boxPr();
        const CT_BoxPr& get_boxPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Box& default_instance();
    protected:
    private:
        bool m_has_boxPr;
        CT_BoxPr* m_boxPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_Box* default_instance_;
    };

    class CT_BorderBoxPr: public XSD::ComplexType
    {
    public:
        CT_BorderBoxPr();
        ~CT_BorderBoxPr();
        bool has_hideTop() const;
        CT_OnOff* mutable_hideTop();
        const CT_OnOff& get_hideTop() const;
        bool has_hideBot() const;
        CT_OnOff* mutable_hideBot();
        const CT_OnOff& get_hideBot() const;
        bool has_hideLeft() const;
        CT_OnOff* mutable_hideLeft();
        const CT_OnOff& get_hideLeft() const;
        bool has_hideRight() const;
        CT_OnOff* mutable_hideRight();
        const CT_OnOff& get_hideRight() const;
        bool has_strikeH() const;
        CT_OnOff* mutable_strikeH();
        const CT_OnOff& get_strikeH() const;
        bool has_strikeV() const;
        CT_OnOff* mutable_strikeV();
        const CT_OnOff& get_strikeV() const;
        bool has_strikeBLTR() const;
        CT_OnOff* mutable_strikeBLTR();
        const CT_OnOff& get_strikeBLTR() const;
        bool has_strikeTLBR() const;
        CT_OnOff* mutable_strikeTLBR();
        const CT_OnOff& get_strikeTLBR() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_BorderBoxPr& default_instance();
    protected:
    private:
        bool m_has_hideTop;
        CT_OnOff* m_hideTop;
        bool m_has_hideBot;
        CT_OnOff* m_hideBot;
        bool m_has_hideLeft;
        CT_OnOff* m_hideLeft;
        bool m_has_hideRight;
        CT_OnOff* m_hideRight;
        bool m_has_strikeH;
        CT_OnOff* m_strikeH;
        bool m_has_strikeV;
        CT_OnOff* m_strikeV;
        bool m_has_strikeBLTR;
        CT_OnOff* m_strikeBLTR;
        bool m_has_strikeTLBR;
        CT_OnOff* m_strikeTLBR;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_BorderBoxPr* default_instance_;
    };

    class CT_BorderBox: public XSD::ComplexType
    {
    public:
        CT_BorderBox();
        ~CT_BorderBox();
        bool has_borderBoxPr() const;
        CT_BorderBoxPr* mutable_borderBoxPr();
        const CT_BorderBoxPr& get_borderBoxPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_BorderBox& default_instance();
    protected:
    private:
        bool m_has_borderBoxPr;
        CT_BorderBoxPr* m_borderBoxPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_BorderBox* default_instance_;
    };

    class CT_DPr: public XSD::ComplexType
    {
    public:
        CT_DPr();
        ~CT_DPr();
        bool has_begChr() const;
        CT_Char* mutable_begChr();
        const CT_Char& get_begChr() const;
        bool has_sepChr() const;
        CT_Char* mutable_sepChr();
        const CT_Char& get_sepChr() const;
        bool has_endChr() const;
        CT_Char* mutable_endChr();
        const CT_Char& get_endChr() const;
        bool has_grow() const;
        CT_OnOff* mutable_grow();
        const CT_OnOff& get_grow() const;
        bool has_shp() const;
        CT_Shp* mutable_shp();
        const CT_Shp& get_shp() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_DPr& default_instance();
    protected:
    private:
        bool m_has_begChr;
        CT_Char* m_begChr;
        bool m_has_sepChr;
        CT_Char* m_sepChr;
        bool m_has_endChr;
        CT_Char* m_endChr;
        bool m_has_grow;
        CT_OnOff* m_grow;
        bool m_has_shp;
        CT_Shp* m_shp;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_DPr* default_instance_;
    };

    class CT_D: public XSD::ComplexType
    {
    public:
        CT_D();
        ~CT_D();
        bool has_dPr() const;
        CT_DPr* mutable_dPr();
        const CT_DPr& get_dPr() const;
        CT_OMathArg* add_e();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_D& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_e() const;
            CT_OMathArg* mutable_e();
            const CT_OMathArg& get_e() const;
        protected:
        private:
            bool m_has_e;
            CT_OMathArg* m_e;
        };
        bool m_has_dPr;
        CT_DPr* m_dPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_D* default_instance_;
    };

    class CT_EqArrPr: public XSD::ComplexType
    {
    public:
        CT_EqArrPr();
        ~CT_EqArrPr();
        bool has_baseJc() const;
        CT_YAlign* mutable_baseJc();
        const CT_YAlign& get_baseJc() const;
        bool has_maxDist() const;
        CT_OnOff* mutable_maxDist();
        const CT_OnOff& get_maxDist() const;
        bool has_objDist() const;
        CT_OnOff* mutable_objDist();
        const CT_OnOff& get_objDist() const;
        bool has_rSpRule() const;
        CT_SpacingRule* mutable_rSpRule();
        const CT_SpacingRule& get_rSpRule() const;
        bool has_rSp() const;
        CT_UnSignedInteger* mutable_rSp();
        const CT_UnSignedInteger& get_rSp() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_EqArrPr& default_instance();
    protected:
    private:
        bool m_has_baseJc;
        CT_YAlign* m_baseJc;
        bool m_has_maxDist;
        CT_OnOff* m_maxDist;
        bool m_has_objDist;
        CT_OnOff* m_objDist;
        bool m_has_rSpRule;
        CT_SpacingRule* m_rSpRule;
        bool m_has_rSp;
        CT_UnSignedInteger* m_rSp;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_EqArrPr* default_instance_;
    };

    class CT_EqArr: public XSD::ComplexType
    {
    public:
        CT_EqArr();
        ~CT_EqArr();
        bool has_eqArrPr() const;
        CT_EqArrPr* mutable_eqArrPr();
        const CT_EqArrPr& get_eqArrPr() const;
        CT_OMathArg* add_e();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_EqArr& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_e() const;
            CT_OMathArg* mutable_e();
            const CT_OMathArg& get_e() const;
        protected:
        private:
            bool m_has_e;
            CT_OMathArg* m_e;
        };
        bool m_has_eqArrPr;
        CT_EqArrPr* m_eqArrPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_EqArr* default_instance_;
    };

    class CT_FPr: public XSD::ComplexType
    {
    public:
        CT_FPr();
        ~CT_FPr();
        bool has_type() const;
        CT_FType* mutable_type();
        const CT_FType& get_type() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_FPr& default_instance();
    protected:
    private:
        bool m_has_type;
        CT_FType* m_type;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_FPr* default_instance_;
    };

    class CT_F: public XSD::ComplexType
    {
    public:
        CT_F();
        ~CT_F();
        bool has_fPr() const;
        CT_FPr* mutable_fPr();
        const CT_FPr& get_fPr() const;
        bool has_num() const;
        CT_OMathArg* mutable_num();
        const CT_OMathArg& get_num() const;
        bool has_den() const;
        CT_OMathArg* mutable_den();
        const CT_OMathArg& get_den() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_F& default_instance();
    protected:
    private:
        bool m_has_fPr;
        CT_FPr* m_fPr;
        bool m_has_num;
        CT_OMathArg* m_num;
        bool m_has_den;
        CT_OMathArg* m_den;
        static CT_F* default_instance_;
    };

    class CT_FuncPr: public XSD::ComplexType
    {
    public:
        CT_FuncPr();
        ~CT_FuncPr();
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_FuncPr& default_instance();
    protected:
    private:
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_FuncPr* default_instance_;
    };

    class CT_Func: public XSD::ComplexType
    {
    public:
        CT_Func();
        ~CT_Func();
        bool has_funcPr() const;
        CT_FuncPr* mutable_funcPr();
        const CT_FuncPr& get_funcPr() const;
        bool has_fName() const;
        CT_OMathArg* mutable_fName();
        const CT_OMathArg& get_fName() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Func& default_instance();
    protected:
    private:
        bool m_has_funcPr;
        CT_FuncPr* m_funcPr;
        bool m_has_fName;
        CT_OMathArg* m_fName;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_Func* default_instance_;
    };

    class CT_GroupChrPr: public XSD::ComplexType
    {
    public:
        CT_GroupChrPr();
        ~CT_GroupChrPr();
        bool has_chr() const;
        CT_Char* mutable_chr();
        const CT_Char& get_chr() const;
        bool has_pos() const;
        CT_TopBot* mutable_pos();
        const CT_TopBot& get_pos() const;
        bool has_vertJc() const;
        CT_TopBot* mutable_vertJc();
        const CT_TopBot& get_vertJc() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GroupChrPr& default_instance();
    protected:
    private:
        bool m_has_chr;
        CT_Char* m_chr;
        bool m_has_pos;
        CT_TopBot* m_pos;
        bool m_has_vertJc;
        CT_TopBot* m_vertJc;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_GroupChrPr* default_instance_;
    };

    class CT_GroupChr: public XSD::ComplexType
    {
    public:
        CT_GroupChr();
        ~CT_GroupChr();
        bool has_groupChrPr() const;
        CT_GroupChrPr* mutable_groupChrPr();
        const CT_GroupChrPr& get_groupChrPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_GroupChr& default_instance();
    protected:
    private:
        bool m_has_groupChrPr;
        CT_GroupChrPr* m_groupChrPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_GroupChr* default_instance_;
    };

    class CT_LimLowPr: public XSD::ComplexType
    {
    public:
        CT_LimLowPr();
        ~CT_LimLowPr();
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_LimLowPr& default_instance();
    protected:
    private:
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_LimLowPr* default_instance_;
    };

    class CT_LimLow: public XSD::ComplexType
    {
    public:
        CT_LimLow();
        ~CT_LimLow();
        bool has_limLowPr() const;
        CT_LimLowPr* mutable_limLowPr();
        const CT_LimLowPr& get_limLowPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        bool has_lim() const;
        CT_OMathArg* mutable_lim();
        const CT_OMathArg& get_lim() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_LimLow& default_instance();
    protected:
    private:
        bool m_has_limLowPr;
        CT_LimLowPr* m_limLowPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        bool m_has_lim;
        CT_OMathArg* m_lim;
        static CT_LimLow* default_instance_;
    };

    class CT_LimUppPr: public XSD::ComplexType
    {
    public:
        CT_LimUppPr();
        ~CT_LimUppPr();
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_LimUppPr& default_instance();
    protected:
    private:
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_LimUppPr* default_instance_;
    };

    class CT_LimUpp: public XSD::ComplexType
    {
    public:
        CT_LimUpp();
        ~CT_LimUpp();
        bool has_limUppPr() const;
        CT_LimUppPr* mutable_limUppPr();
        const CT_LimUppPr& get_limUppPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        bool has_lim() const;
        CT_OMathArg* mutable_lim();
        const CT_OMathArg& get_lim() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_LimUpp& default_instance();
    protected:
    private:
        bool m_has_limUppPr;
        CT_LimUppPr* m_limUppPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        bool m_has_lim;
        CT_OMathArg* m_lim;
        static CT_LimUpp* default_instance_;
    };

    class CT_MCPr: public XSD::ComplexType
    {
    public:
        CT_MCPr();
        ~CT_MCPr();
        bool has_count() const;
        CT_Integer255* mutable_count();
        const CT_Integer255& get_count() const;
        bool has_mcJc() const;
        CT_XAlign* mutable_mcJc();
        const CT_XAlign& get_mcJc() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_MCPr& default_instance();
    protected:
    private:
        bool m_has_count;
        CT_Integer255* m_count;
        bool m_has_mcJc;
        CT_XAlign* m_mcJc;
        static CT_MCPr* default_instance_;
    };

    class CT_MC: public XSD::ComplexType
    {
    public:
        CT_MC();
        ~CT_MC();
        bool has_mcPr() const;
        CT_MCPr* mutable_mcPr();
        const CT_MCPr& get_mcPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_MC& default_instance();
    protected:
    private:
        bool m_has_mcPr;
        CT_MCPr* m_mcPr;
        static CT_MC* default_instance_;
    };

    class CT_MCS: public XSD::ComplexType
    {
    public:
        CT_MCS();
        ~CT_MCS();
        CT_MC* add_mc();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_MCS& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_mc() const;
            CT_MC* mutable_mc();
            const CT_MC& get_mc() const;
        protected:
        private:
            bool m_has_mc;
            CT_MC* m_mc;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_MCS* default_instance_;
    };

    class CT_MPr: public XSD::ComplexType
    {
    public:
        CT_MPr();
        ~CT_MPr();
        bool has_baseJc() const;
        CT_YAlign* mutable_baseJc();
        const CT_YAlign& get_baseJc() const;
        bool has_plcHide() const;
        CT_OnOff* mutable_plcHide();
        const CT_OnOff& get_plcHide() const;
        bool has_rSpRule() const;
        CT_SpacingRule* mutable_rSpRule();
        const CT_SpacingRule& get_rSpRule() const;
        bool has_cGpRule() const;
        CT_SpacingRule* mutable_cGpRule();
        const CT_SpacingRule& get_cGpRule() const;
        bool has_rSp() const;
        CT_UnSignedInteger* mutable_rSp();
        const CT_UnSignedInteger& get_rSp() const;
        bool has_cSp() const;
        CT_UnSignedInteger* mutable_cSp();
        const CT_UnSignedInteger& get_cSp() const;
        bool has_cGp() const;
        CT_UnSignedInteger* mutable_cGp();
        const CT_UnSignedInteger& get_cGp() const;
        bool has_mcs() const;
        CT_MCS* mutable_mcs();
        const CT_MCS& get_mcs() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_MPr& default_instance();
    protected:
    private:
        bool m_has_baseJc;
        CT_YAlign* m_baseJc;
        bool m_has_plcHide;
        CT_OnOff* m_plcHide;
        bool m_has_rSpRule;
        CT_SpacingRule* m_rSpRule;
        bool m_has_cGpRule;
        CT_SpacingRule* m_cGpRule;
        bool m_has_rSp;
        CT_UnSignedInteger* m_rSp;
        bool m_has_cSp;
        CT_UnSignedInteger* m_cSp;
        bool m_has_cGp;
        CT_UnSignedInteger* m_cGp;
        bool m_has_mcs;
        CT_MCS* m_mcs;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_MPr* default_instance_;
    };

    class CT_MR: public XSD::ComplexType
    {
    public:
        CT_MR();
        ~CT_MR();
        CT_OMathArg* add_e();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_MR& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_e() const;
            CT_OMathArg* mutable_e();
            const CT_OMathArg& get_e() const;
        protected:
        private:
            bool m_has_e;
            CT_OMathArg* m_e;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_MR* default_instance_;
    };

    class CT_M: public XSD::ComplexType
    {
    public:
        CT_M();
        ~CT_M();
        bool has_mPr() const;
        CT_MPr* mutable_mPr();
        const CT_MPr& get_mPr() const;
        CT_MR* add_mr();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_M& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_mr() const;
            CT_MR* mutable_mr();
            const CT_MR& get_mr() const;
        protected:
        private:
            bool m_has_mr;
            CT_MR* m_mr;
        };
        bool m_has_mPr;
        CT_MPr* m_mPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_M* default_instance_;
    };

    class CT_NaryPr: public XSD::ComplexType
    {
    public:
        CT_NaryPr();
        ~CT_NaryPr();
        bool has_chr() const;
        CT_Char* mutable_chr();
        const CT_Char& get_chr() const;
        bool has_limLoc() const;
        CT_LimLoc* mutable_limLoc();
        const CT_LimLoc& get_limLoc() const;
        bool has_grow() const;
        CT_OnOff* mutable_grow();
        const CT_OnOff& get_grow() const;
        bool has_subHide() const;
        CT_OnOff* mutable_subHide();
        const CT_OnOff& get_subHide() const;
        bool has_supHide() const;
        CT_OnOff* mutable_supHide();
        const CT_OnOff& get_supHide() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NaryPr& default_instance();
    protected:
    private:
        bool m_has_chr;
        CT_Char* m_chr;
        bool m_has_limLoc;
        CT_LimLoc* m_limLoc;
        bool m_has_grow;
        CT_OnOff* m_grow;
        bool m_has_subHide;
        CT_OnOff* m_subHide;
        bool m_has_supHide;
        CT_OnOff* m_supHide;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_NaryPr* default_instance_;
    };

    class CT_Nary: public XSD::ComplexType
    {
    public:
        CT_Nary();
        ~CT_Nary();
        bool has_naryPr() const;
        CT_NaryPr* mutable_naryPr();
        const CT_NaryPr& get_naryPr() const;
        bool has_sub() const;
        CT_OMathArg* mutable_sub();
        const CT_OMathArg& get_sub() const;
        bool has_sup() const;
        CT_OMathArg* mutable_sup();
        const CT_OMathArg& get_sup() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Nary& default_instance();
    protected:
    private:
        bool m_has_naryPr;
        CT_NaryPr* m_naryPr;
        bool m_has_sub;
        CT_OMathArg* m_sub;
        bool m_has_sup;
        CT_OMathArg* m_sup;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_Nary* default_instance_;
    };

    class CT_PhantPr: public XSD::ComplexType
    {
    public:
        CT_PhantPr();
        ~CT_PhantPr();
        bool has_show() const;
        CT_OnOff* mutable_show();
        const CT_OnOff& get_show() const;
        bool has_zeroWid() const;
        CT_OnOff* mutable_zeroWid();
        const CT_OnOff& get_zeroWid() const;
        bool has_zeroAsc() const;
        CT_OnOff* mutable_zeroAsc();
        const CT_OnOff& get_zeroAsc() const;
        bool has_zeroDesc() const;
        CT_OnOff* mutable_zeroDesc();
        const CT_OnOff& get_zeroDesc() const;
        bool has_transp() const;
        CT_OnOff* mutable_transp();
        const CT_OnOff& get_transp() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PhantPr& default_instance();
    protected:
    private:
        bool m_has_show;
        CT_OnOff* m_show;
        bool m_has_zeroWid;
        CT_OnOff* m_zeroWid;
        bool m_has_zeroAsc;
        CT_OnOff* m_zeroAsc;
        bool m_has_zeroDesc;
        CT_OnOff* m_zeroDesc;
        bool m_has_transp;
        CT_OnOff* m_transp;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_PhantPr* default_instance_;
    };

    class CT_Phant: public XSD::ComplexType
    {
    public:
        CT_Phant();
        ~CT_Phant();
        bool has_phantPr() const;
        CT_PhantPr* mutable_phantPr();
        const CT_PhantPr& get_phantPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Phant& default_instance();
    protected:
    private:
        bool m_has_phantPr;
        CT_PhantPr* m_phantPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_Phant* default_instance_;
    };

    class CT_RadPr: public XSD::ComplexType
    {
    public:
        CT_RadPr();
        ~CT_RadPr();
        bool has_degHide() const;
        CT_OnOff* mutable_degHide();
        const CT_OnOff& get_degHide() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_RadPr& default_instance();
    protected:
    private:
        bool m_has_degHide;
        CT_OnOff* m_degHide;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_RadPr* default_instance_;
    };

    class CT_Rad: public XSD::ComplexType
    {
    public:
        CT_Rad();
        ~CT_Rad();
        bool has_radPr() const;
        CT_RadPr* mutable_radPr();
        const CT_RadPr& get_radPr() const;
        bool has_deg() const;
        CT_OMathArg* mutable_deg();
        const CT_OMathArg& get_deg() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Rad& default_instance();
    protected:
    private:
        bool m_has_radPr;
        CT_RadPr* m_radPr;
        bool m_has_deg;
        CT_OMathArg* m_deg;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_Rad* default_instance_;
    };

    class CT_SPrePr: public XSD::ComplexType
    {
    public:
        CT_SPrePr();
        ~CT_SPrePr();
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SPrePr& default_instance();
    protected:
    private:
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_SPrePr* default_instance_;
    };

    class CT_SPre: public XSD::ComplexType
    {
    public:
        CT_SPre();
        ~CT_SPre();
        bool has_sPrePr() const;
        CT_SPrePr* mutable_sPrePr();
        const CT_SPrePr& get_sPrePr() const;
        bool has_sub() const;
        CT_OMathArg* mutable_sub();
        const CT_OMathArg& get_sub() const;
        bool has_sup() const;
        CT_OMathArg* mutable_sup();
        const CT_OMathArg& get_sup() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SPre& default_instance();
    protected:
    private:
        bool m_has_sPrePr;
        CT_SPrePr* m_sPrePr;
        bool m_has_sub;
        CT_OMathArg* m_sub;
        bool m_has_sup;
        CT_OMathArg* m_sup;
        bool m_has_e;
        CT_OMathArg* m_e;
        static CT_SPre* default_instance_;
    };

    class CT_SSubPr: public XSD::ComplexType
    {
    public:
        CT_SSubPr();
        ~CT_SSubPr();
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SSubPr& default_instance();
    protected:
    private:
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_SSubPr* default_instance_;
    };

    class CT_SSub: public XSD::ComplexType
    {
    public:
        CT_SSub();
        ~CT_SSub();
        bool has_sSubPr() const;
        CT_SSubPr* mutable_sSubPr();
        const CT_SSubPr& get_sSubPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        bool has_sub() const;
        CT_OMathArg* mutable_sub();
        const CT_OMathArg& get_sub() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SSub& default_instance();
    protected:
    private:
        bool m_has_sSubPr;
        CT_SSubPr* m_sSubPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        bool m_has_sub;
        CT_OMathArg* m_sub;
        static CT_SSub* default_instance_;
    };

    class CT_SSubSupPr: public XSD::ComplexType
    {
    public:
        CT_SSubSupPr();
        ~CT_SSubSupPr();
        bool has_alnScr() const;
        CT_OnOff* mutable_alnScr();
        const CT_OnOff& get_alnScr() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SSubSupPr& default_instance();
    protected:
    private:
        bool m_has_alnScr;
        CT_OnOff* m_alnScr;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_SSubSupPr* default_instance_;
    };

    class CT_SSubSup: public XSD::ComplexType
    {
    public:
        CT_SSubSup();
        ~CT_SSubSup();
        bool has_sSubSupPr() const;
        CT_SSubSupPr* mutable_sSubSupPr();
        const CT_SSubSupPr& get_sSubSupPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        bool has_sub() const;
        CT_OMathArg* mutable_sub();
        const CT_OMathArg& get_sub() const;
        bool has_sup() const;
        CT_OMathArg* mutable_sup();
        const CT_OMathArg& get_sup() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SSubSup& default_instance();
    protected:
    private:
        bool m_has_sSubSupPr;
        CT_SSubSupPr* m_sSubSupPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        bool m_has_sub;
        CT_OMathArg* m_sub;
        bool m_has_sup;
        CT_OMathArg* m_sup;
        static CT_SSubSup* default_instance_;
    };

    class CT_SSupPr: public XSD::ComplexType
    {
    public:
        CT_SSupPr();
        ~CT_SSupPr();
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SSupPr& default_instance();
    protected:
    private:
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_SSupPr* default_instance_;
    };

    class CT_SSup: public XSD::ComplexType
    {
    public:
        CT_SSup();
        ~CT_SSup();
        bool has_sSupPr() const;
        CT_SSupPr* mutable_sSupPr();
        const CT_SSupPr& get_sSupPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& get_e() const;
        bool has_sup() const;
        CT_OMathArg* mutable_sup();
        const CT_OMathArg& get_sup() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SSup& default_instance();
    protected:
    private:
        bool m_has_sSupPr;
        CT_SSupPr* m_sSupPr;
        bool m_has_e;
        CT_OMathArg* m_e;
        bool m_has_sup;
        CT_OMathArg* m_sup;
        static CT_SSup* default_instance_;
    };

    class CT_OMathArgPr: public XSD::ComplexType
    {
    public:
        CT_OMathArgPr();
        ~CT_OMathArgPr();
        bool has_argSz() const;
        CT_Integer2* mutable_argSz();
        const CT_Integer2& get_argSz() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OMathArgPr& default_instance();
    protected:
    private:
        bool m_has_argSz;
        CT_Integer2* m_argSz;
        static CT_OMathArgPr* default_instance_;
    };

    class CT_OMathArg: public XSD::ComplexType
    {
    public:
        CT_OMathArg();
        ~CT_OMathArg();
        bool has_argPr() const;
        CT_OMathArgPr* mutable_argPr();
        const CT_OMathArgPr& get_argPr() const;
        CT_Acc* add_acc();
        CT_Bar* add_bar();
        CT_Box* add_box();
        CT_BorderBox* add_borderBox();
        CT_D* add_d();
        CT_EqArr* add_eqArr();
        CT_F* add_f();
        CT_Func* add_func();
        CT_GroupChr* add_groupChr();
        CT_LimLow* add_limLow();
        CT_LimUpp* add_limUpp();
        CT_M* add_m();
        CT_Nary* add_nary();
        CT_Phant* add_phant();
        CT_Rad* add_rad();
        CT_SPre* add_sPre();
        CT_SSub* add_sSub();
        CT_SSubSup* add_sSubSup();
        CT_SSup* add_sSup();
        CT_R* add_r();
        ns_w::CT_CustomXmlRun* add_w_customXml();
        ns_w::CT_SimpleField* add_w_fldSimple();
        ns_w::CT_Hyperlink* add_w_hyperlink();
        ns_w::CT_SmartTagRun* add_w_smartTag();
        ns_w::CT_SdtRun* add_w_sdt();
        ns_w::CT_ProofErr* add_w_proofErr();
        ns_w::CT_PermStart* add_w_permStart();
        ns_w::CT_Perm* add_w_permEnd();
        ns_w::CT_Bookmark* add_w_bookmarkStart();
        ns_w::CT_MarkupRange* add_w_bookmarkEnd();
        ns_w::CT_MoveBookmark* add_w_moveFromRangeStart();
        ns_w::CT_MarkupRange* add_w_moveFromRangeEnd();
        ns_w::CT_MoveBookmark* add_w_moveToRangeStart();
        ns_w::CT_MarkupRange* add_w_moveToRangeEnd();
        ns_w::CT_MarkupRange* add_w_commentRangeStart();
        ns_w::CT_MarkupRange* add_w_commentRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlInsRangeStart();
        ns_w::CT_Markup* add_w_customXmlInsRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlDelRangeStart();
        ns_w::CT_Markup* add_w_customXmlDelRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlMoveFromRangeStart();
        ns_w::CT_Markup* add_w_customXmlMoveFromRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlMoveToRangeStart();
        ns_w::CT_Markup* add_w_customXmlMoveToRangeEnd();
        ns_w::CT_RunTrackChange* add_w_ins();
        ns_w::CT_RunTrackChange* add_w_del();
        ns_w::CT_RunTrackChange* add_w_moveFrom();
        ns_w::CT_RunTrackChange* add_w_moveTo();
        ns_m::CT_OMathPara* add_m_oMathPara();
        ns_m::CT_OMath* add_m_oMath();
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& get_ctrlPr() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OMathArg& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_acc() const;
            CT_Acc* mutable_acc();
            const CT_Acc& get_acc() const;
            bool has_bar() const;
            CT_Bar* mutable_bar();
            const CT_Bar& get_bar() const;
            bool has_box() const;
            CT_Box* mutable_box();
            const CT_Box& get_box() const;
            bool has_borderBox() const;
            CT_BorderBox* mutable_borderBox();
            const CT_BorderBox& get_borderBox() const;
            bool has_d() const;
            CT_D* mutable_d();
            const CT_D& get_d() const;
            bool has_eqArr() const;
            CT_EqArr* mutable_eqArr();
            const CT_EqArr& get_eqArr() const;
            bool has_f() const;
            CT_F* mutable_f();
            const CT_F& get_f() const;
            bool has_func() const;
            CT_Func* mutable_func();
            const CT_Func& get_func() const;
            bool has_groupChr() const;
            CT_GroupChr* mutable_groupChr();
            const CT_GroupChr& get_groupChr() const;
            bool has_limLow() const;
            CT_LimLow* mutable_limLow();
            const CT_LimLow& get_limLow() const;
            bool has_limUpp() const;
            CT_LimUpp* mutable_limUpp();
            const CT_LimUpp& get_limUpp() const;
            bool has_m() const;
            CT_M* mutable_m();
            const CT_M& get_m() const;
            bool has_nary() const;
            CT_Nary* mutable_nary();
            const CT_Nary& get_nary() const;
            bool has_phant() const;
            CT_Phant* mutable_phant();
            const CT_Phant& get_phant() const;
            bool has_rad() const;
            CT_Rad* mutable_rad();
            const CT_Rad& get_rad() const;
            bool has_sPre() const;
            CT_SPre* mutable_sPre();
            const CT_SPre& get_sPre() const;
            bool has_sSub() const;
            CT_SSub* mutable_sSub();
            const CT_SSub& get_sSub() const;
            bool has_sSubSup() const;
            CT_SSubSup* mutable_sSubSup();
            const CT_SSubSup& get_sSubSup() const;
            bool has_sSup() const;
            CT_SSup* mutable_sSup();
            const CT_SSup& get_sSup() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& get_r() const;
            bool has_w_customXml() const;
            ns_w::CT_CustomXmlRun* mutable_w_customXml();
            const ns_w::CT_CustomXmlRun& get_w_customXml() const;
            bool has_w_fldSimple() const;
            ns_w::CT_SimpleField* mutable_w_fldSimple();
            const ns_w::CT_SimpleField& get_w_fldSimple() const;
            bool has_w_hyperlink() const;
            ns_w::CT_Hyperlink* mutable_w_hyperlink();
            const ns_w::CT_Hyperlink& get_w_hyperlink() const;
            bool has_w_smartTag() const;
            ns_w::CT_SmartTagRun* mutable_w_smartTag();
            const ns_w::CT_SmartTagRun& get_w_smartTag() const;
            bool has_w_sdt() const;
            ns_w::CT_SdtRun* mutable_w_sdt();
            const ns_w::CT_SdtRun& get_w_sdt() const;
            bool has_w_proofErr() const;
            ns_w::CT_ProofErr* mutable_w_proofErr();
            const ns_w::CT_ProofErr& get_w_proofErr() const;
            bool has_w_permStart() const;
            ns_w::CT_PermStart* mutable_w_permStart();
            const ns_w::CT_PermStart& get_w_permStart() const;
            bool has_w_permEnd() const;
            ns_w::CT_Perm* mutable_w_permEnd();
            const ns_w::CT_Perm& get_w_permEnd() const;
            bool has_w_bookmarkStart() const;
            ns_w::CT_Bookmark* mutable_w_bookmarkStart();
            const ns_w::CT_Bookmark& get_w_bookmarkStart() const;
            bool has_w_bookmarkEnd() const;
            ns_w::CT_MarkupRange* mutable_w_bookmarkEnd();
            const ns_w::CT_MarkupRange& get_w_bookmarkEnd() const;
            bool has_w_moveFromRangeStart() const;
            ns_w::CT_MoveBookmark* mutable_w_moveFromRangeStart();
            const ns_w::CT_MoveBookmark& get_w_moveFromRangeStart() const;
            bool has_w_moveFromRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_moveFromRangeEnd();
            const ns_w::CT_MarkupRange& get_w_moveFromRangeEnd() const;
            bool has_w_moveToRangeStart() const;
            ns_w::CT_MoveBookmark* mutable_w_moveToRangeStart();
            const ns_w::CT_MoveBookmark& get_w_moveToRangeStart() const;
            bool has_w_moveToRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_moveToRangeEnd();
            const ns_w::CT_MarkupRange& get_w_moveToRangeEnd() const;
            bool has_w_commentRangeStart() const;
            ns_w::CT_MarkupRange* mutable_w_commentRangeStart();
            const ns_w::CT_MarkupRange& get_w_commentRangeStart() const;
            bool has_w_commentRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_commentRangeEnd();
            const ns_w::CT_MarkupRange& get_w_commentRangeEnd() const;
            bool has_w_customXmlInsRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlInsRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlInsRangeStart() const;
            bool has_w_customXmlInsRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlInsRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlInsRangeEnd() const;
            bool has_w_customXmlDelRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlDelRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlDelRangeStart() const;
            bool has_w_customXmlDelRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlDelRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlDelRangeEnd() const;
            bool has_w_customXmlMoveFromRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlMoveFromRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlMoveFromRangeStart() const;
            bool has_w_customXmlMoveFromRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlMoveFromRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlMoveFromRangeEnd() const;
            bool has_w_customXmlMoveToRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlMoveToRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlMoveToRangeStart() const;
            bool has_w_customXmlMoveToRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlMoveToRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlMoveToRangeEnd() const;
            bool has_w_ins() const;
            ns_w::CT_RunTrackChange* mutable_w_ins();
            const ns_w::CT_RunTrackChange& get_w_ins() const;
            bool has_w_del() const;
            ns_w::CT_RunTrackChange* mutable_w_del();
            const ns_w::CT_RunTrackChange& get_w_del() const;
            bool has_w_moveFrom() const;
            ns_w::CT_RunTrackChange* mutable_w_moveFrom();
            const ns_w::CT_RunTrackChange& get_w_moveFrom() const;
            bool has_w_moveTo() const;
            ns_w::CT_RunTrackChange* mutable_w_moveTo();
            const ns_w::CT_RunTrackChange& get_w_moveTo() const;
            bool has_m_oMathPara() const;
            ns_m::CT_OMathPara* mutable_m_oMathPara();
            const ns_m::CT_OMathPara& get_m_oMathPara() const;
            bool has_m_oMath() const;
            ns_m::CT_OMath* mutable_m_oMath();
            const ns_m::CT_OMath& get_m_oMath() const;
        protected:
        private:
            bool m_has_acc;
            CT_Acc* m_acc;
            bool m_has_bar;
            CT_Bar* m_bar;
            bool m_has_box;
            CT_Box* m_box;
            bool m_has_borderBox;
            CT_BorderBox* m_borderBox;
            bool m_has_d;
            CT_D* m_d;
            bool m_has_eqArr;
            CT_EqArr* m_eqArr;
            bool m_has_f;
            CT_F* m_f;
            bool m_has_func;
            CT_Func* m_func;
            bool m_has_groupChr;
            CT_GroupChr* m_groupChr;
            bool m_has_limLow;
            CT_LimLow* m_limLow;
            bool m_has_limUpp;
            CT_LimUpp* m_limUpp;
            bool m_has_m;
            CT_M* m_m;
            bool m_has_nary;
            CT_Nary* m_nary;
            bool m_has_phant;
            CT_Phant* m_phant;
            bool m_has_rad;
            CT_Rad* m_rad;
            bool m_has_sPre;
            CT_SPre* m_sPre;
            bool m_has_sSub;
            CT_SSub* m_sSub;
            bool m_has_sSubSup;
            CT_SSubSup* m_sSubSup;
            bool m_has_sSup;
            CT_SSup* m_sSup;
            bool m_has_r;
            CT_R* m_r;
            bool m_has_w_customXml;
            ns_w::CT_CustomXmlRun* m_w_customXml;
            bool m_has_w_fldSimple;
            ns_w::CT_SimpleField* m_w_fldSimple;
            bool m_has_w_hyperlink;
            ns_w::CT_Hyperlink* m_w_hyperlink;
            bool m_has_w_smartTag;
            ns_w::CT_SmartTagRun* m_w_smartTag;
            bool m_has_w_sdt;
            ns_w::CT_SdtRun* m_w_sdt;
            bool m_has_w_proofErr;
            ns_w::CT_ProofErr* m_w_proofErr;
            bool m_has_w_permStart;
            ns_w::CT_PermStart* m_w_permStart;
            bool m_has_w_permEnd;
            ns_w::CT_Perm* m_w_permEnd;
            bool m_has_w_bookmarkStart;
            ns_w::CT_Bookmark* m_w_bookmarkStart;
            bool m_has_w_bookmarkEnd;
            ns_w::CT_MarkupRange* m_w_bookmarkEnd;
            bool m_has_w_moveFromRangeStart;
            ns_w::CT_MoveBookmark* m_w_moveFromRangeStart;
            bool m_has_w_moveFromRangeEnd;
            ns_w::CT_MarkupRange* m_w_moveFromRangeEnd;
            bool m_has_w_moveToRangeStart;
            ns_w::CT_MoveBookmark* m_w_moveToRangeStart;
            bool m_has_w_moveToRangeEnd;
            ns_w::CT_MarkupRange* m_w_moveToRangeEnd;
            bool m_has_w_commentRangeStart;
            ns_w::CT_MarkupRange* m_w_commentRangeStart;
            bool m_has_w_commentRangeEnd;
            ns_w::CT_MarkupRange* m_w_commentRangeEnd;
            bool m_has_w_customXmlInsRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlInsRangeStart;
            bool m_has_w_customXmlInsRangeEnd;
            ns_w::CT_Markup* m_w_customXmlInsRangeEnd;
            bool m_has_w_customXmlDelRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlDelRangeStart;
            bool m_has_w_customXmlDelRangeEnd;
            ns_w::CT_Markup* m_w_customXmlDelRangeEnd;
            bool m_has_w_customXmlMoveFromRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlMoveFromRangeStart;
            bool m_has_w_customXmlMoveFromRangeEnd;
            ns_w::CT_Markup* m_w_customXmlMoveFromRangeEnd;
            bool m_has_w_customXmlMoveToRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlMoveToRangeStart;
            bool m_has_w_customXmlMoveToRangeEnd;
            ns_w::CT_Markup* m_w_customXmlMoveToRangeEnd;
            bool m_has_w_ins;
            ns_w::CT_RunTrackChange* m_w_ins;
            bool m_has_w_del;
            ns_w::CT_RunTrackChange* m_w_del;
            bool m_has_w_moveFrom;
            ns_w::CT_RunTrackChange* m_w_moveFrom;
            bool m_has_w_moveTo;
            ns_w::CT_RunTrackChange* m_w_moveTo;
            bool m_has_m_oMathPara;
            ns_m::CT_OMathPara* m_m_oMathPara;
            bool m_has_m_oMath;
            ns_m::CT_OMath* m_m_oMath;
        };
        bool m_has_argPr;
        CT_OMathArgPr* m_argPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        bool m_has_ctrlPr;
        CT_CtrlPr* m_ctrlPr;
        static CT_OMathArg* default_instance_;
    };

    class CT_OMathJc: public XSD::ComplexType
    {
    public:
        CT_OMathJc();
        ~CT_OMathJc();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OMathJc& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_Jc& _val_attr);
        const ST_Jc& get_val_attr() const;
    protected:
    private:
        static CT_OMathJc* default_instance_;
        bool m_has_val_attr;
        ST_Jc* m_val_attr;
    };

    class CT_OMathParaPr: public XSD::ComplexType
    {
    public:
        CT_OMathParaPr();
        ~CT_OMathParaPr();
        bool has_jc() const;
        CT_OMathJc* mutable_jc();
        const CT_OMathJc& get_jc() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OMathParaPr& default_instance();
    protected:
    private:
        bool m_has_jc;
        CT_OMathJc* m_jc;
        static CT_OMathParaPr* default_instance_;
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

    class CT_BreakBin: public XSD::ComplexType
    {
    public:
        CT_BreakBin();
        ~CT_BreakBin();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_BreakBin& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_BreakBin& _val_attr);
        const ST_BreakBin& get_val_attr() const;
    protected:
    private:
        static CT_BreakBin* default_instance_;
        bool m_has_val_attr;
        ST_BreakBin* m_val_attr;
    };

    class CT_BreakBinSub: public XSD::ComplexType
    {
    public:
        CT_BreakBinSub();
        ~CT_BreakBinSub();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_BreakBinSub& default_instance();
        bool has_val_attr() const;
        void set_val_attr(const ST_BreakBinSub& _val_attr);
        const ST_BreakBinSub& get_val_attr() const;
    protected:
    private:
        static CT_BreakBinSub* default_instance_;
        bool m_has_val_attr;
        ST_BreakBinSub* m_val_attr;
    };

    class CT_MathPr: public XSD::ComplexType
    {
    public:
        CT_MathPr();
        ~CT_MathPr();
        bool has_mathFont() const;
        CT_String* mutable_mathFont();
        const CT_String& get_mathFont() const;
        bool has_brkBin() const;
        CT_BreakBin* mutable_brkBin();
        const CT_BreakBin& get_brkBin() const;
        bool has_brkBinSub() const;
        CT_BreakBinSub* mutable_brkBinSub();
        const CT_BreakBinSub& get_brkBinSub() const;
        bool has_smallFrac() const;
        CT_OnOff* mutable_smallFrac();
        const CT_OnOff& get_smallFrac() const;
        bool has_dispDef() const;
        CT_OnOff* mutable_dispDef();
        const CT_OnOff& get_dispDef() const;
        bool has_lMargin() const;
        CT_TwipsMeasure* mutable_lMargin();
        const CT_TwipsMeasure& get_lMargin() const;
        bool has_rMargin() const;
        CT_TwipsMeasure* mutable_rMargin();
        const CT_TwipsMeasure& get_rMargin() const;
        bool has_defJc() const;
        CT_OMathJc* mutable_defJc();
        const CT_OMathJc& get_defJc() const;
        bool has_preSp() const;
        CT_TwipsMeasure* mutable_preSp();
        const CT_TwipsMeasure& get_preSp() const;
        bool has_postSp() const;
        CT_TwipsMeasure* mutable_postSp();
        const CT_TwipsMeasure& get_postSp() const;
        bool has_interSp() const;
        CT_TwipsMeasure* mutable_interSp();
        const CT_TwipsMeasure& get_interSp() const;
        bool has_intraSp() const;
        CT_TwipsMeasure* mutable_intraSp();
        const CT_TwipsMeasure& get_intraSp() const;
        bool has_wrapIndent() const;
        CT_TwipsMeasure* mutable_wrapIndent();
        const CT_TwipsMeasure& get_wrapIndent() const;
        bool has_wrapRight() const;
        CT_OnOff* mutable_wrapRight();
        const CT_OnOff& get_wrapRight() const;
        bool has_intLim() const;
        CT_LimLoc* mutable_intLim();
        const CT_LimLoc& get_intLim() const;
        bool has_naryLim() const;
        CT_LimLoc* mutable_naryLim();
        const CT_LimLoc& get_naryLim() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_MathPr& default_instance();
    protected:
    private:
        bool m_has_mathFont;
        CT_String* m_mathFont;
        bool m_has_brkBin;
        CT_BreakBin* m_brkBin;
        bool m_has_brkBinSub;
        CT_BreakBinSub* m_brkBinSub;
        bool m_has_smallFrac;
        CT_OnOff* m_smallFrac;
        bool m_has_dispDef;
        CT_OnOff* m_dispDef;
        bool m_has_lMargin;
        CT_TwipsMeasure* m_lMargin;
        bool m_has_rMargin;
        CT_TwipsMeasure* m_rMargin;
        bool m_has_defJc;
        CT_OMathJc* m_defJc;
        bool m_has_preSp;
        CT_TwipsMeasure* m_preSp;
        bool m_has_postSp;
        CT_TwipsMeasure* m_postSp;
        bool m_has_interSp;
        CT_TwipsMeasure* m_interSp;
        bool m_has_intraSp;
        CT_TwipsMeasure* m_intraSp;
        bool m_has_wrapIndent;
        CT_TwipsMeasure* m_wrapIndent;
        bool m_has_wrapRight;
        CT_OnOff* m_wrapRight;
        bool m_has_intLim;
        CT_LimLoc* m_intLim;
        bool m_has_naryLim;
        CT_LimLoc* m_naryLim;
        static CT_MathPr* default_instance_;
    };

    class CT_OMathPara: public XSD::ComplexType
    {
    public:
        CT_OMathPara();
        ~CT_OMathPara();
        bool has_oMathParaPr() const;
        CT_OMathParaPr* mutable_oMathParaPr();
        const CT_OMathParaPr& get_oMathParaPr() const;
        CT_OMath* add_oMath();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OMathPara& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& get_oMath() const;
        protected:
        private:
            bool m_has_oMath;
            CT_OMath* m_oMath;
        };
        bool m_has_oMathParaPr;
        CT_OMathParaPr* m_oMathParaPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_OMathPara* default_instance_;
    };

    class CT_OMath: public XSD::ComplexType
    {
    public:
        CT_OMath();
        ~CT_OMath();
        CT_Acc* add_acc();
        CT_Bar* add_bar();
        CT_Box* add_box();
        CT_BorderBox* add_borderBox();
        CT_D* add_d();
        CT_EqArr* add_eqArr();
        CT_F* add_f();
        CT_Func* add_func();
        CT_GroupChr* add_groupChr();
        CT_LimLow* add_limLow();
        CT_LimUpp* add_limUpp();
        CT_M* add_m();
        CT_Nary* add_nary();
        CT_Phant* add_phant();
        CT_Rad* add_rad();
        CT_SPre* add_sPre();
        CT_SSub* add_sSub();
        CT_SSubSup* add_sSubSup();
        CT_SSup* add_sSup();
        CT_R* add_r();
        ns_w::CT_CustomXmlRun* add_w_customXml();
        ns_w::CT_SimpleField* add_w_fldSimple();
        ns_w::CT_Hyperlink* add_w_hyperlink();
        ns_w::CT_SmartTagRun* add_w_smartTag();
        ns_w::CT_SdtRun* add_w_sdt();
        ns_w::CT_ProofErr* add_w_proofErr();
        ns_w::CT_PermStart* add_w_permStart();
        ns_w::CT_Perm* add_w_permEnd();
        ns_w::CT_Bookmark* add_w_bookmarkStart();
        ns_w::CT_MarkupRange* add_w_bookmarkEnd();
        ns_w::CT_MoveBookmark* add_w_moveFromRangeStart();
        ns_w::CT_MarkupRange* add_w_moveFromRangeEnd();
        ns_w::CT_MoveBookmark* add_w_moveToRangeStart();
        ns_w::CT_MarkupRange* add_w_moveToRangeEnd();
        ns_w::CT_MarkupRange* add_w_commentRangeStart();
        ns_w::CT_MarkupRange* add_w_commentRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlInsRangeStart();
        ns_w::CT_Markup* add_w_customXmlInsRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlDelRangeStart();
        ns_w::CT_Markup* add_w_customXmlDelRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlMoveFromRangeStart();
        ns_w::CT_Markup* add_w_customXmlMoveFromRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlMoveToRangeStart();
        ns_w::CT_Markup* add_w_customXmlMoveToRangeEnd();
        ns_w::CT_RunTrackChange* add_w_ins();
        ns_w::CT_RunTrackChange* add_w_del();
        ns_w::CT_RunTrackChange* add_w_moveFrom();
        ns_w::CT_RunTrackChange* add_w_moveTo();
        ns_m::CT_OMathPara* add_m_oMathPara();
        ns_m::CT_OMath* add_m_oMath();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_OMath& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_acc() const;
            CT_Acc* mutable_acc();
            const CT_Acc& get_acc() const;
            bool has_bar() const;
            CT_Bar* mutable_bar();
            const CT_Bar& get_bar() const;
            bool has_box() const;
            CT_Box* mutable_box();
            const CT_Box& get_box() const;
            bool has_borderBox() const;
            CT_BorderBox* mutable_borderBox();
            const CT_BorderBox& get_borderBox() const;
            bool has_d() const;
            CT_D* mutable_d();
            const CT_D& get_d() const;
            bool has_eqArr() const;
            CT_EqArr* mutable_eqArr();
            const CT_EqArr& get_eqArr() const;
            bool has_f() const;
            CT_F* mutable_f();
            const CT_F& get_f() const;
            bool has_func() const;
            CT_Func* mutable_func();
            const CT_Func& get_func() const;
            bool has_groupChr() const;
            CT_GroupChr* mutable_groupChr();
            const CT_GroupChr& get_groupChr() const;
            bool has_limLow() const;
            CT_LimLow* mutable_limLow();
            const CT_LimLow& get_limLow() const;
            bool has_limUpp() const;
            CT_LimUpp* mutable_limUpp();
            const CT_LimUpp& get_limUpp() const;
            bool has_m() const;
            CT_M* mutable_m();
            const CT_M& get_m() const;
            bool has_nary() const;
            CT_Nary* mutable_nary();
            const CT_Nary& get_nary() const;
            bool has_phant() const;
            CT_Phant* mutable_phant();
            const CT_Phant& get_phant() const;
            bool has_rad() const;
            CT_Rad* mutable_rad();
            const CT_Rad& get_rad() const;
            bool has_sPre() const;
            CT_SPre* mutable_sPre();
            const CT_SPre& get_sPre() const;
            bool has_sSub() const;
            CT_SSub* mutable_sSub();
            const CT_SSub& get_sSub() const;
            bool has_sSubSup() const;
            CT_SSubSup* mutable_sSubSup();
            const CT_SSubSup& get_sSubSup() const;
            bool has_sSup() const;
            CT_SSup* mutable_sSup();
            const CT_SSup& get_sSup() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& get_r() const;
            bool has_w_customXml() const;
            ns_w::CT_CustomXmlRun* mutable_w_customXml();
            const ns_w::CT_CustomXmlRun& get_w_customXml() const;
            bool has_w_fldSimple() const;
            ns_w::CT_SimpleField* mutable_w_fldSimple();
            const ns_w::CT_SimpleField& get_w_fldSimple() const;
            bool has_w_hyperlink() const;
            ns_w::CT_Hyperlink* mutable_w_hyperlink();
            const ns_w::CT_Hyperlink& get_w_hyperlink() const;
            bool has_w_smartTag() const;
            ns_w::CT_SmartTagRun* mutable_w_smartTag();
            const ns_w::CT_SmartTagRun& get_w_smartTag() const;
            bool has_w_sdt() const;
            ns_w::CT_SdtRun* mutable_w_sdt();
            const ns_w::CT_SdtRun& get_w_sdt() const;
            bool has_w_proofErr() const;
            ns_w::CT_ProofErr* mutable_w_proofErr();
            const ns_w::CT_ProofErr& get_w_proofErr() const;
            bool has_w_permStart() const;
            ns_w::CT_PermStart* mutable_w_permStart();
            const ns_w::CT_PermStart& get_w_permStart() const;
            bool has_w_permEnd() const;
            ns_w::CT_Perm* mutable_w_permEnd();
            const ns_w::CT_Perm& get_w_permEnd() const;
            bool has_w_bookmarkStart() const;
            ns_w::CT_Bookmark* mutable_w_bookmarkStart();
            const ns_w::CT_Bookmark& get_w_bookmarkStart() const;
            bool has_w_bookmarkEnd() const;
            ns_w::CT_MarkupRange* mutable_w_bookmarkEnd();
            const ns_w::CT_MarkupRange& get_w_bookmarkEnd() const;
            bool has_w_moveFromRangeStart() const;
            ns_w::CT_MoveBookmark* mutable_w_moveFromRangeStart();
            const ns_w::CT_MoveBookmark& get_w_moveFromRangeStart() const;
            bool has_w_moveFromRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_moveFromRangeEnd();
            const ns_w::CT_MarkupRange& get_w_moveFromRangeEnd() const;
            bool has_w_moveToRangeStart() const;
            ns_w::CT_MoveBookmark* mutable_w_moveToRangeStart();
            const ns_w::CT_MoveBookmark& get_w_moveToRangeStart() const;
            bool has_w_moveToRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_moveToRangeEnd();
            const ns_w::CT_MarkupRange& get_w_moveToRangeEnd() const;
            bool has_w_commentRangeStart() const;
            ns_w::CT_MarkupRange* mutable_w_commentRangeStart();
            const ns_w::CT_MarkupRange& get_w_commentRangeStart() const;
            bool has_w_commentRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_commentRangeEnd();
            const ns_w::CT_MarkupRange& get_w_commentRangeEnd() const;
            bool has_w_customXmlInsRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlInsRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlInsRangeStart() const;
            bool has_w_customXmlInsRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlInsRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlInsRangeEnd() const;
            bool has_w_customXmlDelRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlDelRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlDelRangeStart() const;
            bool has_w_customXmlDelRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlDelRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlDelRangeEnd() const;
            bool has_w_customXmlMoveFromRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlMoveFromRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlMoveFromRangeStart() const;
            bool has_w_customXmlMoveFromRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlMoveFromRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlMoveFromRangeEnd() const;
            bool has_w_customXmlMoveToRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlMoveToRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlMoveToRangeStart() const;
            bool has_w_customXmlMoveToRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlMoveToRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlMoveToRangeEnd() const;
            bool has_w_ins() const;
            ns_w::CT_RunTrackChange* mutable_w_ins();
            const ns_w::CT_RunTrackChange& get_w_ins() const;
            bool has_w_del() const;
            ns_w::CT_RunTrackChange* mutable_w_del();
            const ns_w::CT_RunTrackChange& get_w_del() const;
            bool has_w_moveFrom() const;
            ns_w::CT_RunTrackChange* mutable_w_moveFrom();
            const ns_w::CT_RunTrackChange& get_w_moveFrom() const;
            bool has_w_moveTo() const;
            ns_w::CT_RunTrackChange* mutable_w_moveTo();
            const ns_w::CT_RunTrackChange& get_w_moveTo() const;
            bool has_m_oMathPara() const;
            ns_m::CT_OMathPara* mutable_m_oMathPara();
            const ns_m::CT_OMathPara& get_m_oMathPara() const;
            bool has_m_oMath() const;
            ns_m::CT_OMath* mutable_m_oMath();
            const ns_m::CT_OMath& get_m_oMath() const;
        protected:
        private:
            bool m_has_acc;
            CT_Acc* m_acc;
            bool m_has_bar;
            CT_Bar* m_bar;
            bool m_has_box;
            CT_Box* m_box;
            bool m_has_borderBox;
            CT_BorderBox* m_borderBox;
            bool m_has_d;
            CT_D* m_d;
            bool m_has_eqArr;
            CT_EqArr* m_eqArr;
            bool m_has_f;
            CT_F* m_f;
            bool m_has_func;
            CT_Func* m_func;
            bool m_has_groupChr;
            CT_GroupChr* m_groupChr;
            bool m_has_limLow;
            CT_LimLow* m_limLow;
            bool m_has_limUpp;
            CT_LimUpp* m_limUpp;
            bool m_has_m;
            CT_M* m_m;
            bool m_has_nary;
            CT_Nary* m_nary;
            bool m_has_phant;
            CT_Phant* m_phant;
            bool m_has_rad;
            CT_Rad* m_rad;
            bool m_has_sPre;
            CT_SPre* m_sPre;
            bool m_has_sSub;
            CT_SSub* m_sSub;
            bool m_has_sSubSup;
            CT_SSubSup* m_sSubSup;
            bool m_has_sSup;
            CT_SSup* m_sSup;
            bool m_has_r;
            CT_R* m_r;
            bool m_has_w_customXml;
            ns_w::CT_CustomXmlRun* m_w_customXml;
            bool m_has_w_fldSimple;
            ns_w::CT_SimpleField* m_w_fldSimple;
            bool m_has_w_hyperlink;
            ns_w::CT_Hyperlink* m_w_hyperlink;
            bool m_has_w_smartTag;
            ns_w::CT_SmartTagRun* m_w_smartTag;
            bool m_has_w_sdt;
            ns_w::CT_SdtRun* m_w_sdt;
            bool m_has_w_proofErr;
            ns_w::CT_ProofErr* m_w_proofErr;
            bool m_has_w_permStart;
            ns_w::CT_PermStart* m_w_permStart;
            bool m_has_w_permEnd;
            ns_w::CT_Perm* m_w_permEnd;
            bool m_has_w_bookmarkStart;
            ns_w::CT_Bookmark* m_w_bookmarkStart;
            bool m_has_w_bookmarkEnd;
            ns_w::CT_MarkupRange* m_w_bookmarkEnd;
            bool m_has_w_moveFromRangeStart;
            ns_w::CT_MoveBookmark* m_w_moveFromRangeStart;
            bool m_has_w_moveFromRangeEnd;
            ns_w::CT_MarkupRange* m_w_moveFromRangeEnd;
            bool m_has_w_moveToRangeStart;
            ns_w::CT_MoveBookmark* m_w_moveToRangeStart;
            bool m_has_w_moveToRangeEnd;
            ns_w::CT_MarkupRange* m_w_moveToRangeEnd;
            bool m_has_w_commentRangeStart;
            ns_w::CT_MarkupRange* m_w_commentRangeStart;
            bool m_has_w_commentRangeEnd;
            ns_w::CT_MarkupRange* m_w_commentRangeEnd;
            bool m_has_w_customXmlInsRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlInsRangeStart;
            bool m_has_w_customXmlInsRangeEnd;
            ns_w::CT_Markup* m_w_customXmlInsRangeEnd;
            bool m_has_w_customXmlDelRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlDelRangeStart;
            bool m_has_w_customXmlDelRangeEnd;
            ns_w::CT_Markup* m_w_customXmlDelRangeEnd;
            bool m_has_w_customXmlMoveFromRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlMoveFromRangeStart;
            bool m_has_w_customXmlMoveFromRangeEnd;
            ns_w::CT_Markup* m_w_customXmlMoveFromRangeEnd;
            bool m_has_w_customXmlMoveToRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlMoveToRangeStart;
            bool m_has_w_customXmlMoveToRangeEnd;
            ns_w::CT_Markup* m_w_customXmlMoveToRangeEnd;
            bool m_has_w_ins;
            ns_w::CT_RunTrackChange* m_w_ins;
            bool m_has_w_del;
            ns_w::CT_RunTrackChange* m_w_del;
            bool m_has_w_moveFrom;
            ns_w::CT_RunTrackChange* m_w_moveFrom;
            bool m_has_w_moveTo;
            ns_w::CT_RunTrackChange* m_w_moveTo;
            bool m_has_m_oMathPara;
            ns_m::CT_OMathPara* m_m_oMathPara;
            bool m_has_m_oMath;
            ns_m::CT_OMath* m_m_oMath;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_OMath* default_instance_;
    };

    class mathPr_element: public Element
    {
    public:
        mathPr_element();
        ~mathPr_element();
        bool has_mathFont() const;
        CT_String* mutable_mathFont();
        const CT_String& get_mathFont() const;
        bool has_brkBin() const;
        CT_BreakBin* mutable_brkBin();
        const CT_BreakBin& get_brkBin() const;
        bool has_brkBinSub() const;
        CT_BreakBinSub* mutable_brkBinSub();
        const CT_BreakBinSub& get_brkBinSub() const;
        bool has_smallFrac() const;
        CT_OnOff* mutable_smallFrac();
        const CT_OnOff& get_smallFrac() const;
        bool has_dispDef() const;
        CT_OnOff* mutable_dispDef();
        const CT_OnOff& get_dispDef() const;
        bool has_lMargin() const;
        CT_TwipsMeasure* mutable_lMargin();
        const CT_TwipsMeasure& get_lMargin() const;
        bool has_rMargin() const;
        CT_TwipsMeasure* mutable_rMargin();
        const CT_TwipsMeasure& get_rMargin() const;
        bool has_defJc() const;
        CT_OMathJc* mutable_defJc();
        const CT_OMathJc& get_defJc() const;
        bool has_preSp() const;
        CT_TwipsMeasure* mutable_preSp();
        const CT_TwipsMeasure& get_preSp() const;
        bool has_postSp() const;
        CT_TwipsMeasure* mutable_postSp();
        const CT_TwipsMeasure& get_postSp() const;
        bool has_interSp() const;
        CT_TwipsMeasure* mutable_interSp();
        const CT_TwipsMeasure& get_interSp() const;
        bool has_intraSp() const;
        CT_TwipsMeasure* mutable_intraSp();
        const CT_TwipsMeasure& get_intraSp() const;
        bool has_wrapIndent() const;
        CT_TwipsMeasure* mutable_wrapIndent();
        const CT_TwipsMeasure& get_wrapIndent() const;
        bool has_wrapRight() const;
        CT_OnOff* mutable_wrapRight();
        const CT_OnOff& get_wrapRight() const;
        bool has_intLim() const;
        CT_LimLoc* mutable_intLim();
        const CT_LimLoc& get_intLim() const;
        bool has_naryLim() const;
        CT_LimLoc* mutable_naryLim();
        const CT_LimLoc& get_naryLim() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const mathPr_element& default_instance();
    protected:
    private:
        bool m_has_mathFont;
        CT_String* m_mathFont;
        bool m_has_brkBin;
        CT_BreakBin* m_brkBin;
        bool m_has_brkBinSub;
        CT_BreakBinSub* m_brkBinSub;
        bool m_has_smallFrac;
        CT_OnOff* m_smallFrac;
        bool m_has_dispDef;
        CT_OnOff* m_dispDef;
        bool m_has_lMargin;
        CT_TwipsMeasure* m_lMargin;
        bool m_has_rMargin;
        CT_TwipsMeasure* m_rMargin;
        bool m_has_defJc;
        CT_OMathJc* m_defJc;
        bool m_has_preSp;
        CT_TwipsMeasure* m_preSp;
        bool m_has_postSp;
        CT_TwipsMeasure* m_postSp;
        bool m_has_interSp;
        CT_TwipsMeasure* m_interSp;
        bool m_has_intraSp;
        CT_TwipsMeasure* m_intraSp;
        bool m_has_wrapIndent;
        CT_TwipsMeasure* m_wrapIndent;
        bool m_has_wrapRight;
        CT_OnOff* m_wrapRight;
        bool m_has_intLim;
        CT_LimLoc* m_intLim;
        bool m_has_naryLim;
        CT_LimLoc* m_naryLim;
        static mathPr_element* default_instance_;
    };

    class oMathPara_element: public Element
    {
    public:
        oMathPara_element();
        ~oMathPara_element();
        bool has_oMathParaPr() const;
        CT_OMathParaPr* mutable_oMathParaPr();
        const CT_OMathParaPr& get_oMathParaPr() const;
        CT_OMath* add_oMath();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const oMathPara_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& get_oMath() const;
        protected:
        private:
            bool m_has_oMath;
            CT_OMath* m_oMath;
        };
        bool m_has_oMathParaPr;
        CT_OMathParaPr* m_oMathParaPr;
        vector<ChildGroup_1*> m_childGroupList_1;
        static oMathPara_element* default_instance_;
    };

    class oMath_element: public Element
    {
    public:
        oMath_element();
        ~oMath_element();
        CT_Acc* add_acc();
        CT_Bar* add_bar();
        CT_Box* add_box();
        CT_BorderBox* add_borderBox();
        CT_D* add_d();
        CT_EqArr* add_eqArr();
        CT_F* add_f();
        CT_Func* add_func();
        CT_GroupChr* add_groupChr();
        CT_LimLow* add_limLow();
        CT_LimUpp* add_limUpp();
        CT_M* add_m();
        CT_Nary* add_nary();
        CT_Phant* add_phant();
        CT_Rad* add_rad();
        CT_SPre* add_sPre();
        CT_SSub* add_sSub();
        CT_SSubSup* add_sSubSup();
        CT_SSup* add_sSup();
        CT_R* add_r();
        ns_w::CT_CustomXmlRun* add_w_customXml();
        ns_w::CT_SimpleField* add_w_fldSimple();
        ns_w::CT_Hyperlink* add_w_hyperlink();
        ns_w::CT_SmartTagRun* add_w_smartTag();
        ns_w::CT_SdtRun* add_w_sdt();
        ns_w::CT_ProofErr* add_w_proofErr();
        ns_w::CT_PermStart* add_w_permStart();
        ns_w::CT_Perm* add_w_permEnd();
        ns_w::CT_Bookmark* add_w_bookmarkStart();
        ns_w::CT_MarkupRange* add_w_bookmarkEnd();
        ns_w::CT_MoveBookmark* add_w_moveFromRangeStart();
        ns_w::CT_MarkupRange* add_w_moveFromRangeEnd();
        ns_w::CT_MoveBookmark* add_w_moveToRangeStart();
        ns_w::CT_MarkupRange* add_w_moveToRangeEnd();
        ns_w::CT_MarkupRange* add_w_commentRangeStart();
        ns_w::CT_MarkupRange* add_w_commentRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlInsRangeStart();
        ns_w::CT_Markup* add_w_customXmlInsRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlDelRangeStart();
        ns_w::CT_Markup* add_w_customXmlDelRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlMoveFromRangeStart();
        ns_w::CT_Markup* add_w_customXmlMoveFromRangeEnd();
        ns_w::CT_TrackChange* add_w_customXmlMoveToRangeStart();
        ns_w::CT_Markup* add_w_customXmlMoveToRangeEnd();
        ns_w::CT_RunTrackChange* add_w_ins();
        ns_w::CT_RunTrackChange* add_w_del();
        ns_w::CT_RunTrackChange* add_w_moveFrom();
        ns_w::CT_RunTrackChange* add_w_moveTo();
        ns_m::CT_OMathPara* add_m_oMathPara();
        ns_m::CT_OMath* add_m_oMath();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const oMath_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_acc() const;
            CT_Acc* mutable_acc();
            const CT_Acc& get_acc() const;
            bool has_bar() const;
            CT_Bar* mutable_bar();
            const CT_Bar& get_bar() const;
            bool has_box() const;
            CT_Box* mutable_box();
            const CT_Box& get_box() const;
            bool has_borderBox() const;
            CT_BorderBox* mutable_borderBox();
            const CT_BorderBox& get_borderBox() const;
            bool has_d() const;
            CT_D* mutable_d();
            const CT_D& get_d() const;
            bool has_eqArr() const;
            CT_EqArr* mutable_eqArr();
            const CT_EqArr& get_eqArr() const;
            bool has_f() const;
            CT_F* mutable_f();
            const CT_F& get_f() const;
            bool has_func() const;
            CT_Func* mutable_func();
            const CT_Func& get_func() const;
            bool has_groupChr() const;
            CT_GroupChr* mutable_groupChr();
            const CT_GroupChr& get_groupChr() const;
            bool has_limLow() const;
            CT_LimLow* mutable_limLow();
            const CT_LimLow& get_limLow() const;
            bool has_limUpp() const;
            CT_LimUpp* mutable_limUpp();
            const CT_LimUpp& get_limUpp() const;
            bool has_m() const;
            CT_M* mutable_m();
            const CT_M& get_m() const;
            bool has_nary() const;
            CT_Nary* mutable_nary();
            const CT_Nary& get_nary() const;
            bool has_phant() const;
            CT_Phant* mutable_phant();
            const CT_Phant& get_phant() const;
            bool has_rad() const;
            CT_Rad* mutable_rad();
            const CT_Rad& get_rad() const;
            bool has_sPre() const;
            CT_SPre* mutable_sPre();
            const CT_SPre& get_sPre() const;
            bool has_sSub() const;
            CT_SSub* mutable_sSub();
            const CT_SSub& get_sSub() const;
            bool has_sSubSup() const;
            CT_SSubSup* mutable_sSubSup();
            const CT_SSubSup& get_sSubSup() const;
            bool has_sSup() const;
            CT_SSup* mutable_sSup();
            const CT_SSup& get_sSup() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& get_r() const;
            bool has_w_customXml() const;
            ns_w::CT_CustomXmlRun* mutable_w_customXml();
            const ns_w::CT_CustomXmlRun& get_w_customXml() const;
            bool has_w_fldSimple() const;
            ns_w::CT_SimpleField* mutable_w_fldSimple();
            const ns_w::CT_SimpleField& get_w_fldSimple() const;
            bool has_w_hyperlink() const;
            ns_w::CT_Hyperlink* mutable_w_hyperlink();
            const ns_w::CT_Hyperlink& get_w_hyperlink() const;
            bool has_w_smartTag() const;
            ns_w::CT_SmartTagRun* mutable_w_smartTag();
            const ns_w::CT_SmartTagRun& get_w_smartTag() const;
            bool has_w_sdt() const;
            ns_w::CT_SdtRun* mutable_w_sdt();
            const ns_w::CT_SdtRun& get_w_sdt() const;
            bool has_w_proofErr() const;
            ns_w::CT_ProofErr* mutable_w_proofErr();
            const ns_w::CT_ProofErr& get_w_proofErr() const;
            bool has_w_permStart() const;
            ns_w::CT_PermStart* mutable_w_permStart();
            const ns_w::CT_PermStart& get_w_permStart() const;
            bool has_w_permEnd() const;
            ns_w::CT_Perm* mutable_w_permEnd();
            const ns_w::CT_Perm& get_w_permEnd() const;
            bool has_w_bookmarkStart() const;
            ns_w::CT_Bookmark* mutable_w_bookmarkStart();
            const ns_w::CT_Bookmark& get_w_bookmarkStart() const;
            bool has_w_bookmarkEnd() const;
            ns_w::CT_MarkupRange* mutable_w_bookmarkEnd();
            const ns_w::CT_MarkupRange& get_w_bookmarkEnd() const;
            bool has_w_moveFromRangeStart() const;
            ns_w::CT_MoveBookmark* mutable_w_moveFromRangeStart();
            const ns_w::CT_MoveBookmark& get_w_moveFromRangeStart() const;
            bool has_w_moveFromRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_moveFromRangeEnd();
            const ns_w::CT_MarkupRange& get_w_moveFromRangeEnd() const;
            bool has_w_moveToRangeStart() const;
            ns_w::CT_MoveBookmark* mutable_w_moveToRangeStart();
            const ns_w::CT_MoveBookmark& get_w_moveToRangeStart() const;
            bool has_w_moveToRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_moveToRangeEnd();
            const ns_w::CT_MarkupRange& get_w_moveToRangeEnd() const;
            bool has_w_commentRangeStart() const;
            ns_w::CT_MarkupRange* mutable_w_commentRangeStart();
            const ns_w::CT_MarkupRange& get_w_commentRangeStart() const;
            bool has_w_commentRangeEnd() const;
            ns_w::CT_MarkupRange* mutable_w_commentRangeEnd();
            const ns_w::CT_MarkupRange& get_w_commentRangeEnd() const;
            bool has_w_customXmlInsRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlInsRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlInsRangeStart() const;
            bool has_w_customXmlInsRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlInsRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlInsRangeEnd() const;
            bool has_w_customXmlDelRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlDelRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlDelRangeStart() const;
            bool has_w_customXmlDelRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlDelRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlDelRangeEnd() const;
            bool has_w_customXmlMoveFromRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlMoveFromRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlMoveFromRangeStart() const;
            bool has_w_customXmlMoveFromRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlMoveFromRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlMoveFromRangeEnd() const;
            bool has_w_customXmlMoveToRangeStart() const;
            ns_w::CT_TrackChange* mutable_w_customXmlMoveToRangeStart();
            const ns_w::CT_TrackChange& get_w_customXmlMoveToRangeStart() const;
            bool has_w_customXmlMoveToRangeEnd() const;
            ns_w::CT_Markup* mutable_w_customXmlMoveToRangeEnd();
            const ns_w::CT_Markup& get_w_customXmlMoveToRangeEnd() const;
            bool has_w_ins() const;
            ns_w::CT_RunTrackChange* mutable_w_ins();
            const ns_w::CT_RunTrackChange& get_w_ins() const;
            bool has_w_del() const;
            ns_w::CT_RunTrackChange* mutable_w_del();
            const ns_w::CT_RunTrackChange& get_w_del() const;
            bool has_w_moveFrom() const;
            ns_w::CT_RunTrackChange* mutable_w_moveFrom();
            const ns_w::CT_RunTrackChange& get_w_moveFrom() const;
            bool has_w_moveTo() const;
            ns_w::CT_RunTrackChange* mutable_w_moveTo();
            const ns_w::CT_RunTrackChange& get_w_moveTo() const;
            bool has_m_oMathPara() const;
            ns_m::CT_OMathPara* mutable_m_oMathPara();
            const ns_m::CT_OMathPara& get_m_oMathPara() const;
            bool has_m_oMath() const;
            ns_m::CT_OMath* mutable_m_oMath();
            const ns_m::CT_OMath& get_m_oMath() const;
        protected:
        private:
            bool m_has_acc;
            CT_Acc* m_acc;
            bool m_has_bar;
            CT_Bar* m_bar;
            bool m_has_box;
            CT_Box* m_box;
            bool m_has_borderBox;
            CT_BorderBox* m_borderBox;
            bool m_has_d;
            CT_D* m_d;
            bool m_has_eqArr;
            CT_EqArr* m_eqArr;
            bool m_has_f;
            CT_F* m_f;
            bool m_has_func;
            CT_Func* m_func;
            bool m_has_groupChr;
            CT_GroupChr* m_groupChr;
            bool m_has_limLow;
            CT_LimLow* m_limLow;
            bool m_has_limUpp;
            CT_LimUpp* m_limUpp;
            bool m_has_m;
            CT_M* m_m;
            bool m_has_nary;
            CT_Nary* m_nary;
            bool m_has_phant;
            CT_Phant* m_phant;
            bool m_has_rad;
            CT_Rad* m_rad;
            bool m_has_sPre;
            CT_SPre* m_sPre;
            bool m_has_sSub;
            CT_SSub* m_sSub;
            bool m_has_sSubSup;
            CT_SSubSup* m_sSubSup;
            bool m_has_sSup;
            CT_SSup* m_sSup;
            bool m_has_r;
            CT_R* m_r;
            bool m_has_w_customXml;
            ns_w::CT_CustomXmlRun* m_w_customXml;
            bool m_has_w_fldSimple;
            ns_w::CT_SimpleField* m_w_fldSimple;
            bool m_has_w_hyperlink;
            ns_w::CT_Hyperlink* m_w_hyperlink;
            bool m_has_w_smartTag;
            ns_w::CT_SmartTagRun* m_w_smartTag;
            bool m_has_w_sdt;
            ns_w::CT_SdtRun* m_w_sdt;
            bool m_has_w_proofErr;
            ns_w::CT_ProofErr* m_w_proofErr;
            bool m_has_w_permStart;
            ns_w::CT_PermStart* m_w_permStart;
            bool m_has_w_permEnd;
            ns_w::CT_Perm* m_w_permEnd;
            bool m_has_w_bookmarkStart;
            ns_w::CT_Bookmark* m_w_bookmarkStart;
            bool m_has_w_bookmarkEnd;
            ns_w::CT_MarkupRange* m_w_bookmarkEnd;
            bool m_has_w_moveFromRangeStart;
            ns_w::CT_MoveBookmark* m_w_moveFromRangeStart;
            bool m_has_w_moveFromRangeEnd;
            ns_w::CT_MarkupRange* m_w_moveFromRangeEnd;
            bool m_has_w_moveToRangeStart;
            ns_w::CT_MoveBookmark* m_w_moveToRangeStart;
            bool m_has_w_moveToRangeEnd;
            ns_w::CT_MarkupRange* m_w_moveToRangeEnd;
            bool m_has_w_commentRangeStart;
            ns_w::CT_MarkupRange* m_w_commentRangeStart;
            bool m_has_w_commentRangeEnd;
            ns_w::CT_MarkupRange* m_w_commentRangeEnd;
            bool m_has_w_customXmlInsRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlInsRangeStart;
            bool m_has_w_customXmlInsRangeEnd;
            ns_w::CT_Markup* m_w_customXmlInsRangeEnd;
            bool m_has_w_customXmlDelRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlDelRangeStart;
            bool m_has_w_customXmlDelRangeEnd;
            ns_w::CT_Markup* m_w_customXmlDelRangeEnd;
            bool m_has_w_customXmlMoveFromRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlMoveFromRangeStart;
            bool m_has_w_customXmlMoveFromRangeEnd;
            ns_w::CT_Markup* m_w_customXmlMoveFromRangeEnd;
            bool m_has_w_customXmlMoveToRangeStart;
            ns_w::CT_TrackChange* m_w_customXmlMoveToRangeStart;
            bool m_has_w_customXmlMoveToRangeEnd;
            ns_w::CT_Markup* m_w_customXmlMoveToRangeEnd;
            bool m_has_w_ins;
            ns_w::CT_RunTrackChange* m_w_ins;
            bool m_has_w_del;
            ns_w::CT_RunTrackChange* m_w_del;
            bool m_has_w_moveFrom;
            ns_w::CT_RunTrackChange* m_w_moveFrom;
            bool m_has_w_moveTo;
            ns_w::CT_RunTrackChange* m_w_moveTo;
            bool m_has_m_oMathPara;
            ns_m::CT_OMathPara* m_m_oMathPara;
            bool m_has_m_oMath;
            ns_m::CT_OMath* m_m_oMath;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static oMath_element* default_instance_;
    };

}
#endif