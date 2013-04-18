#ifndef shared-math_xsd 
#define shared-math_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "wml_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "xml.h"
namespace ns_m{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_Integer255 : public XSD::SimpleType{
    public:
        ST_Integer255();
        ST_Integer255(const XSD::integer& _integer );
        bool has_integer() const;
        void set_integer(const integer& _integer );
        const integer& integer() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Integer255& default_instance() const;

    private:
        static ST_Integer255* default_instance_ ;
        bool m_has_integer ;
        integer m_integer ;

    }

    class ST_Integer2 : public XSD::SimpleType{
    public:
        ST_Integer2();
        ST_Integer2(const XSD::integer& _integer );
        bool has_integer() const;
        void set_integer(const integer& _integer );
        const integer& integer() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Integer2& default_instance() const;

    private:
        static ST_Integer2* default_instance_ ;
        bool m_has_integer ;
        integer m_integer ;

    }

    class ST_SpacingRule : public XSD::SimpleType{
    public:
        ST_SpacingRule();
        ST_SpacingRule(const XSD::integer& _integer );
        bool has_integer() const;
        void set_integer(const integer& _integer );
        const integer& integer() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_SpacingRule& default_instance() const;

    private:
        static ST_SpacingRule* default_instance_ ;
        bool m_has_integer ;
        integer m_integer ;

    }

    class ST_UnSignedInteger : public XSD::SimpleType{
    public:
        ST_UnSignedInteger();
        ST_UnSignedInteger(const XSD::unsignedInt& _unsignedInt );
        bool has_unsignedInt() const;
        void set_unsignedInt(const unsignedInt& _unsignedInt );
        const unsignedInt& unsignedInt() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_UnSignedInteger& default_instance() const;

    private:
        static ST_UnSignedInteger* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_Char : public XSD::SimpleType{
    public:
        ST_Char();
        ST_Char(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Char& default_instance() const;

    private:
        static ST_Char* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_Shp : public XSD::SimpleType{
    public:
        ST_Shp();
        ST_Shp(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Shp& default_instance() const;
        enum Type{
            _centered_ = 1,
            _match_
        }

    private:
        static const string TypeStrList [];
        static ST_Shp* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FType : public XSD::SimpleType{
    public:
        ST_FType();
        ST_FType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_FType& default_instance() const;
        enum Type{
            _bar_ = 1,
            _skw_,
            _lin_,
            _noBar_
        }

    private:
        static const string TypeStrList [];
        static ST_FType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LimLoc : public XSD::SimpleType{
    public:
        ST_LimLoc();
        ST_LimLoc(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_LimLoc& default_instance() const;
        enum Type{
            _undOvr_ = 1,
            _subSup_
        }

    private:
        static const string TypeStrList [];
        static ST_LimLoc* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TopBot : public XSD::SimpleType{
    public:
        ST_TopBot();
        ST_TopBot(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_TopBot& default_instance() const;
        enum Type{
            _top_ = 1,
            _bot_
        }

    private:
        static const string TypeStrList [];
        static ST_TopBot* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Script : public XSD::SimpleType{
    public:
        ST_Script();
        ST_Script(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Script& default_instance() const;
        enum Type{
            _roman_ = 1,
            _script_,
            _fraktur_,
            _double-struck_,
            _sans-serif_,
            _monospace_
        }

    private:
        static const string TypeStrList [];
        static ST_Script* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Style : public XSD::SimpleType{
    public:
        ST_Style();
        ST_Style(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Style& default_instance() const;
        enum Type{
            _p_ = 1,
            _b_,
            _i_,
            _bi_
        }

    private:
        static const string TypeStrList [];
        static ST_Style* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Jc : public XSD::SimpleType{
    public:
        ST_Jc();
        ST_Jc(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Jc& default_instance() const;
        enum Type{
            _left_ = 1,
            _right_,
            _center_,
            _centerGroup_
        }

    private:
        static const string TypeStrList [];
        static ST_Jc* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BreakBin : public XSD::SimpleType{
    public:
        ST_BreakBin();
        ST_BreakBin(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BreakBin& default_instance() const;
        enum Type{
            _before_ = 1,
            _after_,
            _repeat_
        }

    private:
        static const string TypeStrList [];
        static ST_BreakBin* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BreakBinSub : public XSD::SimpleType{
    public:
        ST_BreakBinSub();
        ST_BreakBinSub(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_BreakBinSub& default_instance() const;
        enum Type{
            _--_ = 1,
            _-+_,
            _+-_
        }

    private:
        static const string TypeStrList [];
        static ST_BreakBinSub* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_Integer255 : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Integer255& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Integer255& _val_attr );
        const ST_Integer255& val_attr() const;

    private:
        static CT_Integer255* default_instance_ ;
        bool m_has_val_attr ;
        ST_Integer255* m_val_attr ;

    }

    class CT_Integer2 : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Integer2& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Integer2& _val_attr );
        const ST_Integer2& val_attr() const;

    private:
        static CT_Integer2* default_instance_ ;
        bool m_has_val_attr ;
        ST_Integer2* m_val_attr ;

    }

    class CT_SpacingRule : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SpacingRule& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_SpacingRule& _val_attr );
        const ST_SpacingRule& val_attr() const;

    private:
        static CT_SpacingRule* default_instance_ ;
        bool m_has_val_attr ;
        ST_SpacingRule* m_val_attr ;

    }

    class CT_UnSignedInteger : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_UnSignedInteger& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_UnSignedInteger& _val_attr );
        const ST_UnSignedInteger& val_attr() const;

    private:
        static CT_UnSignedInteger* default_instance_ ;
        bool m_has_val_attr ;
        ST_UnSignedInteger* m_val_attr ;

    }

    class CT_Char : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Char& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Char& _val_attr );
        const ST_Char& val_attr() const;

    private:
        static CT_Char* default_instance_ ;
        bool m_has_val_attr ;
        ST_Char* m_val_attr ;

    }

    class CT_OnOff : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OnOff& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_OnOff& _val_attr );
        const ns_s::ST_OnOff& val_attr() const;

    private:
        static CT_OnOff* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_OnOff* m_val_attr ;

    }

    class CT_String : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_String& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_String& _val_attr );
        const ns_s::ST_String& val_attr() const;

    private:
        static CT_String* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_String* m_val_attr ;

    }

    class CT_XAlign : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_XAlign& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_XAlign& _val_attr );
        const ns_s::ST_XAlign& val_attr() const;

    private:
        static CT_XAlign* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_XAlign* m_val_attr ;

    }

    class CT_YAlign : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_YAlign& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_YAlign& _val_attr );
        const ns_s::ST_YAlign& val_attr() const;

    private:
        static CT_YAlign* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_YAlign* m_val_attr ;

    }

    class CT_Shp : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Shp& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Shp& _val_attr );
        const ST_Shp& val_attr() const;

    private:
        static CT_Shp* default_instance_ ;
        bool m_has_val_attr ;
        ST_Shp* m_val_attr ;

    }

    class CT_FType : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FType& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_FType& _val_attr );
        const ST_FType& val_attr() const;

    private:
        static CT_FType* default_instance_ ;
        bool m_has_val_attr ;
        ST_FType* m_val_attr ;

    }

    class CT_LimLoc : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LimLoc& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_LimLoc& _val_attr );
        const ST_LimLoc& val_attr() const;

    private:
        static CT_LimLoc* default_instance_ ;
        bool m_has_val_attr ;
        ST_LimLoc* m_val_attr ;

    }

    class CT_TopBot : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TopBot& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_TopBot& _val_attr );
        const ST_TopBot& val_attr() const;

    private:
        static CT_TopBot* default_instance_ ;
        bool m_has_val_attr ;
        ST_TopBot* m_val_attr ;

    }

    class CT_Script : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Script& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Script& _val_attr );
        const ST_Script& val_attr() const;

    private:
        static CT_Script* default_instance_ ;
        bool m_has_val_attr ;
        ST_Script* m_val_attr ;

    }

    class CT_Style : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Style& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Style& _val_attr );
        const ST_Style& val_attr() const;

    private:
        static CT_Style* default_instance_ ;
        bool m_has_val_attr ;
        ST_Style* m_val_attr ;

    }

    class CT_ManualBreak : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ManualBreak& default_instance() const;
        bool has_alnAt_attr() const;
        void set_alnAt_attr(const ST_Integer255& _alnAt_attr );
        const ST_Integer255& alnAt_attr() const;

    private:
        static CT_ManualBreak* default_instance_ ;
        bool m_has_alnAt_attr ;
        ST_Integer255* m_alnAt_attr ;

    }

    class CT_RPR : public XSD::ComplexType{
    public:
        bool has_lit() const;
        CT_OnOff* mutable_lit();
        const CT_OnOff& lit() const;
        bool has_nor() const;
        CT_OnOff* mutable_nor();
        const CT_OnOff& nor() const;
        bool has_scr() const;
        CT_Script* mutable_scr();
        const CT_Script& scr() const;
        bool has_sty() const;
        CT_Style* mutable_sty();
        const CT_Style& sty() const;
        bool has_brk() const;
        CT_ManualBreak* mutable_brk();
        const CT_ManualBreak& brk() const;
        bool has_aln() const;
        CT_OnOff* mutable_aln();
        const CT_OnOff& aln() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RPR& default_instance() const;

    private:
        bool m_has_lit ;
        CT_OnOff* m_lit ;
        bool m_has_nor ;
        CT_OnOff* m_nor ;
        bool m_has_scr ;
        CT_Script* m_scr ;
        bool m_has_sty ;
        CT_Style* m_sty ;
        bool m_has_brk ;
        CT_ManualBreak* m_brk ;
        bool m_has_aln ;
        CT_OnOff* m_aln ;
        static CT_RPR* default_instance_ ;

    }

    class CT_Text : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Text& default_instance() const;

    private:
        static CT_Text* default_instance_ ;

    }

    class CT_R : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_RPR* mutable_rPr();
        const CT_RPR& rPr() const;
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
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
        CT_Text* add_t();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_R& default_instance() const;

    private:
        bool m_has_rPr ;
        CT_RPR* m_rPr ;
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_R* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_br() const;
            CT_Br* mutable_br();
            const CT_Br& br() const;
            bool has_t() const;
            CT_Text* mutable_t();
            const CT_Text& t() const;
            bool has_contentPart() const;
            CT_Rel* mutable_contentPart();
            const CT_Rel& contentPart() const;
            bool has_delText() const;
            CT_Text* mutable_delText();
            const CT_Text& delText() const;
            bool has_instrText() const;
            CT_Text* mutable_instrText();
            const CT_Text& instrText() const;
            bool has_delInstrText() const;
            CT_Text* mutable_delInstrText();
            const CT_Text& delInstrText() const;
            bool has_noBreakHyphen() const;
            CT_Empty* mutable_noBreakHyphen();
            const CT_Empty& noBreakHyphen() const;
            bool has_softHyphen() const;
            CT_Empty* mutable_softHyphen();
            const CT_Empty& softHyphen() const;
            bool has_dayShort() const;
            CT_Empty* mutable_dayShort();
            const CT_Empty& dayShort() const;
            bool has_monthShort() const;
            CT_Empty* mutable_monthShort();
            const CT_Empty& monthShort() const;
            bool has_yearShort() const;
            CT_Empty* mutable_yearShort();
            const CT_Empty& yearShort() const;
            bool has_dayLong() const;
            CT_Empty* mutable_dayLong();
            const CT_Empty& dayLong() const;
            bool has_monthLong() const;
            CT_Empty* mutable_monthLong();
            const CT_Empty& monthLong() const;
            bool has_yearLong() const;
            CT_Empty* mutable_yearLong();
            const CT_Empty& yearLong() const;
            bool has_annotationRef() const;
            CT_Empty* mutable_annotationRef();
            const CT_Empty& annotationRef() const;
            bool has_footnoteRef() const;
            CT_Empty* mutable_footnoteRef();
            const CT_Empty& footnoteRef() const;
            bool has_endnoteRef() const;
            CT_Empty* mutable_endnoteRef();
            const CT_Empty& endnoteRef() const;
            bool has_separator() const;
            CT_Empty* mutable_separator();
            const CT_Empty& separator() const;
            bool has_continuationSeparator() const;
            CT_Empty* mutable_continuationSeparator();
            const CT_Empty& continuationSeparator() const;
            bool has_sym() const;
            CT_Sym* mutable_sym();
            const CT_Sym& sym() const;
            bool has_pgNum() const;
            CT_Empty* mutable_pgNum();
            const CT_Empty& pgNum() const;
            bool has_cr() const;
            CT_Empty* mutable_cr();
            const CT_Empty& cr() const;
            bool has_tab() const;
            CT_Empty* mutable_tab();
            const CT_Empty& tab() const;
            bool has_object() const;
            CT_Object* mutable_object();
            const CT_Object& object() const;
            bool has_pict() const;
            CT_Picture* mutable_pict();
            const CT_Picture& pict() const;
            bool has_fldChar() const;
            CT_FldChar* mutable_fldChar();
            const CT_FldChar& fldChar() const;
            bool has_ruby() const;
            CT_Ruby* mutable_ruby();
            const CT_Ruby& ruby() const;
            bool has_footnoteReference() const;
            CT_FtnEdnRef* mutable_footnoteReference();
            const CT_FtnEdnRef& footnoteReference() const;
            bool has_endnoteReference() const;
            CT_FtnEdnRef* mutable_endnoteReference();
            const CT_FtnEdnRef& endnoteReference() const;
            bool has_commentReference() const;
            CT_Markup* mutable_commentReference();
            const CT_Markup& commentReference() const;
            bool has_drawing() const;
            CT_Drawing* mutable_drawing();
            const CT_Drawing& drawing() const;
            bool has_ptab() const;
            CT_PTab* mutable_ptab();
            const CT_PTab& ptab() const;
            bool has_lastRenderedPageBreak() const;
            CT_Empty* mutable_lastRenderedPageBreak();
            const CT_Empty& lastRenderedPageBreak() const;
            bool has_t() const;
            CT_Text* mutable_t();
            const CT_Text& t() const;

        private:
            bool m_has_br ;
            CT_Br* m_br ;
            bool m_has_t ;
            CT_Text* m_t ;
            bool m_has_contentPart ;
            CT_Rel* m_contentPart ;
            bool m_has_delText ;
            CT_Text* m_delText ;
            bool m_has_instrText ;
            CT_Text* m_instrText ;
            bool m_has_delInstrText ;
            CT_Text* m_delInstrText ;
            bool m_has_noBreakHyphen ;
            CT_Empty* m_noBreakHyphen ;
            bool m_has_softHyphen ;
            CT_Empty* m_softHyphen ;
            bool m_has_dayShort ;
            CT_Empty* m_dayShort ;
            bool m_has_monthShort ;
            CT_Empty* m_monthShort ;
            bool m_has_yearShort ;
            CT_Empty* m_yearShort ;
            bool m_has_dayLong ;
            CT_Empty* m_dayLong ;
            bool m_has_monthLong ;
            CT_Empty* m_monthLong ;
            bool m_has_yearLong ;
            CT_Empty* m_yearLong ;
            bool m_has_annotationRef ;
            CT_Empty* m_annotationRef ;
            bool m_has_footnoteRef ;
            CT_Empty* m_footnoteRef ;
            bool m_has_endnoteRef ;
            CT_Empty* m_endnoteRef ;
            bool m_has_separator ;
            CT_Empty* m_separator ;
            bool m_has_continuationSeparator ;
            CT_Empty* m_continuationSeparator ;
            bool m_has_sym ;
            CT_Sym* m_sym ;
            bool m_has_pgNum ;
            CT_Empty* m_pgNum ;
            bool m_has_cr ;
            CT_Empty* m_cr ;
            bool m_has_tab ;
            CT_Empty* m_tab ;
            bool m_has_object ;
            CT_Object* m_object ;
            bool m_has_pict ;
            CT_Picture* m_pict ;
            bool m_has_fldChar ;
            CT_FldChar* m_fldChar ;
            bool m_has_ruby ;
            CT_Ruby* m_ruby ;
            bool m_has_footnoteReference ;
            CT_FtnEdnRef* m_footnoteReference ;
            bool m_has_endnoteReference ;
            CT_FtnEdnRef* m_endnoteReference ;
            bool m_has_commentReference ;
            CT_Markup* m_commentReference ;
            bool m_has_drawing ;
            CT_Drawing* m_drawing ;
            bool m_has_ptab ;
            CT_PTab* m_ptab ;
            bool m_has_lastRenderedPageBreak ;
            CT_Empty* m_lastRenderedPageBreak ;
            bool m_has_t ;
            CT_Text* m_t ;

        }


    }

    class CT_CtrlPr : public XSD::ComplexType{
    public:
        bool has_rPr() const;
        CT_RPr* mutable_rPr();
        const CT_RPr& rPr() const;
        bool has_ins() const;
        CT_MathCtrlIns* mutable_ins();
        const CT_MathCtrlIns& ins() const;
        bool has_del() const;
        CT_MathCtrlDel* mutable_del();
        const CT_MathCtrlDel& del() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_CtrlPr& default_instance() const;

    private:
        bool m_has_rPr ;
        CT_RPr* m_rPr ;
        bool m_has_ins ;
        CT_MathCtrlIns* m_ins ;
        bool m_has_del ;
        CT_MathCtrlDel* m_del ;
        static CT_CtrlPr* default_instance_ ;

    }

    class CT_AccPr : public XSD::ComplexType{
    public:
        bool has_chr() const;
        CT_Char* mutable_chr();
        const CT_Char& chr() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AccPr& default_instance() const;

    private:
        bool m_has_chr ;
        CT_Char* m_chr ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_AccPr* default_instance_ ;

    }

    class CT_Acc : public XSD::ComplexType{
    public:
        bool has_accPr() const;
        CT_AccPr* mutable_accPr();
        const CT_AccPr& accPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Acc& default_instance() const;

    private:
        bool m_has_accPr ;
        CT_AccPr* m_accPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_Acc* default_instance_ ;

    }

    class CT_BarPr : public XSD::ComplexType{
    public:
        bool has_pos() const;
        CT_TopBot* mutable_pos();
        const CT_TopBot& pos() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BarPr& default_instance() const;

    private:
        bool m_has_pos ;
        CT_TopBot* m_pos ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_BarPr* default_instance_ ;

    }

    class CT_Bar : public XSD::ComplexType{
    public:
        bool has_barPr() const;
        CT_BarPr* mutable_barPr();
        const CT_BarPr& barPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Bar& default_instance() const;

    private:
        bool m_has_barPr ;
        CT_BarPr* m_barPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_Bar* default_instance_ ;

    }

    class CT_BoxPr : public XSD::ComplexType{
    public:
        bool has_opEmu() const;
        CT_OnOff* mutable_opEmu();
        const CT_OnOff& opEmu() const;
        bool has_noBreak() const;
        CT_OnOff* mutable_noBreak();
        const CT_OnOff& noBreak() const;
        bool has_diff() const;
        CT_OnOff* mutable_diff();
        const CT_OnOff& diff() const;
        bool has_brk() const;
        CT_ManualBreak* mutable_brk();
        const CT_ManualBreak& brk() const;
        bool has_aln() const;
        CT_OnOff* mutable_aln();
        const CT_OnOff& aln() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BoxPr& default_instance() const;

    private:
        bool m_has_opEmu ;
        CT_OnOff* m_opEmu ;
        bool m_has_noBreak ;
        CT_OnOff* m_noBreak ;
        bool m_has_diff ;
        CT_OnOff* m_diff ;
        bool m_has_brk ;
        CT_ManualBreak* m_brk ;
        bool m_has_aln ;
        CT_OnOff* m_aln ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_BoxPr* default_instance_ ;

    }

    class CT_Box : public XSD::ComplexType{
    public:
        bool has_boxPr() const;
        CT_BoxPr* mutable_boxPr();
        const CT_BoxPr& boxPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Box& default_instance() const;

    private:
        bool m_has_boxPr ;
        CT_BoxPr* m_boxPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_Box* default_instance_ ;

    }

    class CT_BorderBoxPr : public XSD::ComplexType{
    public:
        bool has_hideTop() const;
        CT_OnOff* mutable_hideTop();
        const CT_OnOff& hideTop() const;
        bool has_hideBot() const;
        CT_OnOff* mutable_hideBot();
        const CT_OnOff& hideBot() const;
        bool has_hideLeft() const;
        CT_OnOff* mutable_hideLeft();
        const CT_OnOff& hideLeft() const;
        bool has_hideRight() const;
        CT_OnOff* mutable_hideRight();
        const CT_OnOff& hideRight() const;
        bool has_strikeH() const;
        CT_OnOff* mutable_strikeH();
        const CT_OnOff& strikeH() const;
        bool has_strikeV() const;
        CT_OnOff* mutable_strikeV();
        const CT_OnOff& strikeV() const;
        bool has_strikeBLTR() const;
        CT_OnOff* mutable_strikeBLTR();
        const CT_OnOff& strikeBLTR() const;
        bool has_strikeTLBR() const;
        CT_OnOff* mutable_strikeTLBR();
        const CT_OnOff& strikeTLBR() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BorderBoxPr& default_instance() const;

    private:
        bool m_has_hideTop ;
        CT_OnOff* m_hideTop ;
        bool m_has_hideBot ;
        CT_OnOff* m_hideBot ;
        bool m_has_hideLeft ;
        CT_OnOff* m_hideLeft ;
        bool m_has_hideRight ;
        CT_OnOff* m_hideRight ;
        bool m_has_strikeH ;
        CT_OnOff* m_strikeH ;
        bool m_has_strikeV ;
        CT_OnOff* m_strikeV ;
        bool m_has_strikeBLTR ;
        CT_OnOff* m_strikeBLTR ;
        bool m_has_strikeTLBR ;
        CT_OnOff* m_strikeTLBR ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_BorderBoxPr* default_instance_ ;

    }

    class CT_BorderBox : public XSD::ComplexType{
    public:
        bool has_borderBoxPr() const;
        CT_BorderBoxPr* mutable_borderBoxPr();
        const CT_BorderBoxPr& borderBoxPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BorderBox& default_instance() const;

    private:
        bool m_has_borderBoxPr ;
        CT_BorderBoxPr* m_borderBoxPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_BorderBox* default_instance_ ;

    }

    class CT_DPr : public XSD::ComplexType{
    public:
        bool has_begChr() const;
        CT_Char* mutable_begChr();
        const CT_Char& begChr() const;
        bool has_sepChr() const;
        CT_Char* mutable_sepChr();
        const CT_Char& sepChr() const;
        bool has_endChr() const;
        CT_Char* mutable_endChr();
        const CT_Char& endChr() const;
        bool has_grow() const;
        CT_OnOff* mutable_grow();
        const CT_OnOff& grow() const;
        bool has_shp() const;
        CT_Shp* mutable_shp();
        const CT_Shp& shp() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DPr& default_instance() const;

    private:
        bool m_has_begChr ;
        CT_Char* m_begChr ;
        bool m_has_sepChr ;
        CT_Char* m_sepChr ;
        bool m_has_endChr ;
        CT_Char* m_endChr ;
        bool m_has_grow ;
        CT_OnOff* m_grow ;
        bool m_has_shp ;
        CT_Shp* m_shp ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_DPr* default_instance_ ;

    }

    class CT_D : public XSD::ComplexType{
    public:
        bool has_dPr() const;
        CT_DPr* mutable_dPr();
        const CT_DPr& dPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_D& default_instance() const;

    private:
        bool m_has_dPr ;
        CT_DPr* m_dPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_D* default_instance_ ;

    }

    class CT_EqArrPr : public XSD::ComplexType{
    public:
        bool has_baseJc() const;
        CT_YAlign* mutable_baseJc();
        const CT_YAlign& baseJc() const;
        bool has_maxDist() const;
        CT_OnOff* mutable_maxDist();
        const CT_OnOff& maxDist() const;
        bool has_objDist() const;
        CT_OnOff* mutable_objDist();
        const CT_OnOff& objDist() const;
        bool has_rSpRule() const;
        CT_SpacingRule* mutable_rSpRule();
        const CT_SpacingRule& rSpRule() const;
        bool has_rSp() const;
        CT_UnSignedInteger* mutable_rSp();
        const CT_UnSignedInteger& rSp() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EqArrPr& default_instance() const;

    private:
        bool m_has_baseJc ;
        CT_YAlign* m_baseJc ;
        bool m_has_maxDist ;
        CT_OnOff* m_maxDist ;
        bool m_has_objDist ;
        CT_OnOff* m_objDist ;
        bool m_has_rSpRule ;
        CT_SpacingRule* m_rSpRule ;
        bool m_has_rSp ;
        CT_UnSignedInteger* m_rSp ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_EqArrPr* default_instance_ ;

    }

    class CT_EqArr : public XSD::ComplexType{
    public:
        bool has_eqArrPr() const;
        CT_EqArrPr* mutable_eqArrPr();
        const CT_EqArrPr& eqArrPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_EqArr& default_instance() const;

    private:
        bool m_has_eqArrPr ;
        CT_EqArrPr* m_eqArrPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_EqArr* default_instance_ ;

    }

    class CT_FPr : public XSD::ComplexType{
    public:
        bool has_type() const;
        CT_FType* mutable_type();
        const CT_FType& type() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FPr& default_instance() const;

    private:
        bool m_has_type ;
        CT_FType* m_type ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_FPr* default_instance_ ;

    }

    class CT_F : public XSD::ComplexType{
    public:
        bool has_fPr() const;
        CT_FPr* mutable_fPr();
        const CT_FPr& fPr() const;
        bool has_num() const;
        CT_OMathArg* mutable_num();
        const CT_OMathArg& num() const;
        bool has_den() const;
        CT_OMathArg* mutable_den();
        const CT_OMathArg& den() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_F& default_instance() const;

    private:
        bool m_has_fPr ;
        CT_FPr* m_fPr ;
        bool m_has_num ;
        CT_OMathArg* m_num ;
        bool m_has_den ;
        CT_OMathArg* m_den ;
        static CT_F* default_instance_ ;

    }

    class CT_FuncPr : public XSD::ComplexType{
    public:
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_FuncPr& default_instance() const;

    private:
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_FuncPr* default_instance_ ;

    }

    class CT_Func : public XSD::ComplexType{
    public:
        bool has_funcPr() const;
        CT_FuncPr* mutable_funcPr();
        const CT_FuncPr& funcPr() const;
        bool has_fName() const;
        CT_OMathArg* mutable_fName();
        const CT_OMathArg& fName() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Func& default_instance() const;

    private:
        bool m_has_funcPr ;
        CT_FuncPr* m_funcPr ;
        bool m_has_fName ;
        CT_OMathArg* m_fName ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_Func* default_instance_ ;

    }

    class CT_GroupChrPr : public XSD::ComplexType{
    public:
        bool has_chr() const;
        CT_Char* mutable_chr();
        const CT_Char& chr() const;
        bool has_pos() const;
        CT_TopBot* mutable_pos();
        const CT_TopBot& pos() const;
        bool has_vertJc() const;
        CT_TopBot* mutable_vertJc();
        const CT_TopBot& vertJc() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupChrPr& default_instance() const;

    private:
        bool m_has_chr ;
        CT_Char* m_chr ;
        bool m_has_pos ;
        CT_TopBot* m_pos ;
        bool m_has_vertJc ;
        CT_TopBot* m_vertJc ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_GroupChrPr* default_instance_ ;

    }

    class CT_GroupChr : public XSD::ComplexType{
    public:
        bool has_groupChrPr() const;
        CT_GroupChrPr* mutable_groupChrPr();
        const CT_GroupChrPr& groupChrPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_GroupChr& default_instance() const;

    private:
        bool m_has_groupChrPr ;
        CT_GroupChrPr* m_groupChrPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_GroupChr* default_instance_ ;

    }

    class CT_LimLowPr : public XSD::ComplexType{
    public:
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LimLowPr& default_instance() const;

    private:
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_LimLowPr* default_instance_ ;

    }

    class CT_LimLow : public XSD::ComplexType{
    public:
        bool has_limLowPr() const;
        CT_LimLowPr* mutable_limLowPr();
        const CT_LimLowPr& limLowPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        bool has_lim() const;
        CT_OMathArg* mutable_lim();
        const CT_OMathArg& lim() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LimLow& default_instance() const;

    private:
        bool m_has_limLowPr ;
        CT_LimLowPr* m_limLowPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        bool m_has_lim ;
        CT_OMathArg* m_lim ;
        static CT_LimLow* default_instance_ ;

    }

    class CT_LimUppPr : public XSD::ComplexType{
    public:
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LimUppPr& default_instance() const;

    private:
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_LimUppPr* default_instance_ ;

    }

    class CT_LimUpp : public XSD::ComplexType{
    public:
        bool has_limUppPr() const;
        CT_LimUppPr* mutable_limUppPr();
        const CT_LimUppPr& limUppPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        bool has_lim() const;
        CT_OMathArg* mutable_lim();
        const CT_OMathArg& lim() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_LimUpp& default_instance() const;

    private:
        bool m_has_limUppPr ;
        CT_LimUppPr* m_limUppPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        bool m_has_lim ;
        CT_OMathArg* m_lim ;
        static CT_LimUpp* default_instance_ ;

    }

    class CT_MCPr : public XSD::ComplexType{
    public:
        bool has_count() const;
        CT_Integer255* mutable_count();
        const CT_Integer255& count() const;
        bool has_mcJc() const;
        CT_XAlign* mutable_mcJc();
        const CT_XAlign& mcJc() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MCPr& default_instance() const;

    private:
        bool m_has_count ;
        CT_Integer255* m_count ;
        bool m_has_mcJc ;
        CT_XAlign* m_mcJc ;
        static CT_MCPr* default_instance_ ;

    }

    class CT_MC : public XSD::ComplexType{
    public:
        bool has_mcPr() const;
        CT_MCPr* mutable_mcPr();
        const CT_MCPr& mcPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MC& default_instance() const;

    private:
        bool m_has_mcPr ;
        CT_MCPr* m_mcPr ;
        static CT_MC* default_instance_ ;

    }

    class CT_MCS : public XSD::ComplexType{
    public:
        bool has_mc() const;
        CT_MC* mutable_mc();
        const CT_MC& mc() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MCS& default_instance() const;

    private:
        bool m_has_mc ;
        CT_MC* m_mc ;
        static CT_MCS* default_instance_ ;

    }

    class CT_MPr : public XSD::ComplexType{
    public:
        bool has_baseJc() const;
        CT_YAlign* mutable_baseJc();
        const CT_YAlign& baseJc() const;
        bool has_plcHide() const;
        CT_OnOff* mutable_plcHide();
        const CT_OnOff& plcHide() const;
        bool has_rSpRule() const;
        CT_SpacingRule* mutable_rSpRule();
        const CT_SpacingRule& rSpRule() const;
        bool has_cGpRule() const;
        CT_SpacingRule* mutable_cGpRule();
        const CT_SpacingRule& cGpRule() const;
        bool has_rSp() const;
        CT_UnSignedInteger* mutable_rSp();
        const CT_UnSignedInteger& rSp() const;
        bool has_cSp() const;
        CT_UnSignedInteger* mutable_cSp();
        const CT_UnSignedInteger& cSp() const;
        bool has_cGp() const;
        CT_UnSignedInteger* mutable_cGp();
        const CT_UnSignedInteger& cGp() const;
        bool has_mcs() const;
        CT_MCS* mutable_mcs();
        const CT_MCS& mcs() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MPr& default_instance() const;

    private:
        bool m_has_baseJc ;
        CT_YAlign* m_baseJc ;
        bool m_has_plcHide ;
        CT_OnOff* m_plcHide ;
        bool m_has_rSpRule ;
        CT_SpacingRule* m_rSpRule ;
        bool m_has_cGpRule ;
        CT_SpacingRule* m_cGpRule ;
        bool m_has_rSp ;
        CT_UnSignedInteger* m_rSp ;
        bool m_has_cSp ;
        CT_UnSignedInteger* m_cSp ;
        bool m_has_cGp ;
        CT_UnSignedInteger* m_cGp ;
        bool m_has_mcs ;
        CT_MCS* m_mcs ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_MPr* default_instance_ ;

    }

    class CT_MR : public XSD::ComplexType{
    public:
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MR& default_instance() const;

    private:
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_MR* default_instance_ ;

    }

    class CT_M : public XSD::ComplexType{
    public:
        bool has_mPr() const;
        CT_MPr* mutable_mPr();
        const CT_MPr& mPr() const;
        bool has_mr() const;
        CT_MR* mutable_mr();
        const CT_MR& mr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_M& default_instance() const;

    private:
        bool m_has_mPr ;
        CT_MPr* m_mPr ;
        bool m_has_mr ;
        CT_MR* m_mr ;
        static CT_M* default_instance_ ;

    }

    class CT_NaryPr : public XSD::ComplexType{
    public:
        bool has_chr() const;
        CT_Char* mutable_chr();
        const CT_Char& chr() const;
        bool has_limLoc() const;
        CT_LimLoc* mutable_limLoc();
        const CT_LimLoc& limLoc() const;
        bool has_grow() const;
        CT_OnOff* mutable_grow();
        const CT_OnOff& grow() const;
        bool has_subHide() const;
        CT_OnOff* mutable_subHide();
        const CT_OnOff& subHide() const;
        bool has_supHide() const;
        CT_OnOff* mutable_supHide();
        const CT_OnOff& supHide() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_NaryPr& default_instance() const;

    private:
        bool m_has_chr ;
        CT_Char* m_chr ;
        bool m_has_limLoc ;
        CT_LimLoc* m_limLoc ;
        bool m_has_grow ;
        CT_OnOff* m_grow ;
        bool m_has_subHide ;
        CT_OnOff* m_subHide ;
        bool m_has_supHide ;
        CT_OnOff* m_supHide ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_NaryPr* default_instance_ ;

    }

    class CT_Nary : public XSD::ComplexType{
    public:
        bool has_naryPr() const;
        CT_NaryPr* mutable_naryPr();
        const CT_NaryPr& naryPr() const;
        bool has_sub() const;
        CT_OMathArg* mutable_sub();
        const CT_OMathArg& sub() const;
        bool has_sup() const;
        CT_OMathArg* mutable_sup();
        const CT_OMathArg& sup() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Nary& default_instance() const;

    private:
        bool m_has_naryPr ;
        CT_NaryPr* m_naryPr ;
        bool m_has_sub ;
        CT_OMathArg* m_sub ;
        bool m_has_sup ;
        CT_OMathArg* m_sup ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_Nary* default_instance_ ;

    }

    class CT_PhantPr : public XSD::ComplexType{
    public:
        bool has_show() const;
        CT_OnOff* mutable_show();
        const CT_OnOff& show() const;
        bool has_zeroWid() const;
        CT_OnOff* mutable_zeroWid();
        const CT_OnOff& zeroWid() const;
        bool has_zeroAsc() const;
        CT_OnOff* mutable_zeroAsc();
        const CT_OnOff& zeroAsc() const;
        bool has_zeroDesc() const;
        CT_OnOff* mutable_zeroDesc();
        const CT_OnOff& zeroDesc() const;
        bool has_transp() const;
        CT_OnOff* mutable_transp();
        const CT_OnOff& transp() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_PhantPr& default_instance() const;

    private:
        bool m_has_show ;
        CT_OnOff* m_show ;
        bool m_has_zeroWid ;
        CT_OnOff* m_zeroWid ;
        bool m_has_zeroAsc ;
        CT_OnOff* m_zeroAsc ;
        bool m_has_zeroDesc ;
        CT_OnOff* m_zeroDesc ;
        bool m_has_transp ;
        CT_OnOff* m_transp ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_PhantPr* default_instance_ ;

    }

    class CT_Phant : public XSD::ComplexType{
    public:
        bool has_phantPr() const;
        CT_PhantPr* mutable_phantPr();
        const CT_PhantPr& phantPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Phant& default_instance() const;

    private:
        bool m_has_phantPr ;
        CT_PhantPr* m_phantPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_Phant* default_instance_ ;

    }

    class CT_RadPr : public XSD::ComplexType{
    public:
        bool has_degHide() const;
        CT_OnOff* mutable_degHide();
        const CT_OnOff& degHide() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_RadPr& default_instance() const;

    private:
        bool m_has_degHide ;
        CT_OnOff* m_degHide ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_RadPr* default_instance_ ;

    }

    class CT_Rad : public XSD::ComplexType{
    public:
        bool has_radPr() const;
        CT_RadPr* mutable_radPr();
        const CT_RadPr& radPr() const;
        bool has_deg() const;
        CT_OMathArg* mutable_deg();
        const CT_OMathArg& deg() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Rad& default_instance() const;

    private:
        bool m_has_radPr ;
        CT_RadPr* m_radPr ;
        bool m_has_deg ;
        CT_OMathArg* m_deg ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_Rad* default_instance_ ;

    }

    class CT_SPrePr : public XSD::ComplexType{
    public:
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SPrePr& default_instance() const;

    private:
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_SPrePr* default_instance_ ;

    }

    class CT_SPre : public XSD::ComplexType{
    public:
        bool has_sPrePr() const;
        CT_SPrePr* mutable_sPrePr();
        const CT_SPrePr& sPrePr() const;
        bool has_sub() const;
        CT_OMathArg* mutable_sub();
        const CT_OMathArg& sub() const;
        bool has_sup() const;
        CT_OMathArg* mutable_sup();
        const CT_OMathArg& sup() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SPre& default_instance() const;

    private:
        bool m_has_sPrePr ;
        CT_SPrePr* m_sPrePr ;
        bool m_has_sub ;
        CT_OMathArg* m_sub ;
        bool m_has_sup ;
        CT_OMathArg* m_sup ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        static CT_SPre* default_instance_ ;

    }

    class CT_SSubPr : public XSD::ComplexType{
    public:
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SSubPr& default_instance() const;

    private:
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_SSubPr* default_instance_ ;

    }

    class CT_SSub : public XSD::ComplexType{
    public:
        bool has_sSubPr() const;
        CT_SSubPr* mutable_sSubPr();
        const CT_SSubPr& sSubPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        bool has_sub() const;
        CT_OMathArg* mutable_sub();
        const CT_OMathArg& sub() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SSub& default_instance() const;

    private:
        bool m_has_sSubPr ;
        CT_SSubPr* m_sSubPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        bool m_has_sub ;
        CT_OMathArg* m_sub ;
        static CT_SSub* default_instance_ ;

    }

    class CT_SSubSupPr : public XSD::ComplexType{
    public:
        bool has_alnScr() const;
        CT_OnOff* mutable_alnScr();
        const CT_OnOff& alnScr() const;
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SSubSupPr& default_instance() const;

    private:
        bool m_has_alnScr ;
        CT_OnOff* m_alnScr ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_SSubSupPr* default_instance_ ;

    }

    class CT_SSubSup : public XSD::ComplexType{
    public:
        bool has_sSubSupPr() const;
        CT_SSubSupPr* mutable_sSubSupPr();
        const CT_SSubSupPr& sSubSupPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        bool has_sub() const;
        CT_OMathArg* mutable_sub();
        const CT_OMathArg& sub() const;
        bool has_sup() const;
        CT_OMathArg* mutable_sup();
        const CT_OMathArg& sup() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SSubSup& default_instance() const;

    private:
        bool m_has_sSubSupPr ;
        CT_SSubSupPr* m_sSubSupPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        bool m_has_sub ;
        CT_OMathArg* m_sub ;
        bool m_has_sup ;
        CT_OMathArg* m_sup ;
        static CT_SSubSup* default_instance_ ;

    }

    class CT_SSupPr : public XSD::ComplexType{
    public:
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SSupPr& default_instance() const;

    private:
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_SSupPr* default_instance_ ;

    }

    class CT_SSup : public XSD::ComplexType{
    public:
        bool has_sSupPr() const;
        CT_SSupPr* mutable_sSupPr();
        const CT_SSupPr& sSupPr() const;
        bool has_e() const;
        CT_OMathArg* mutable_e();
        const CT_OMathArg& e() const;
        bool has_sup() const;
        CT_OMathArg* mutable_sup();
        const CT_OMathArg& sup() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_SSup& default_instance() const;

    private:
        bool m_has_sSupPr ;
        CT_SSupPr* m_sSupPr ;
        bool m_has_e ;
        CT_OMathArg* m_e ;
        bool m_has_sup ;
        CT_OMathArg* m_sup ;
        static CT_SSup* default_instance_ ;

    }

    class CT_OMathArgPr : public XSD::ComplexType{
    public:
        bool has_argSz() const;
        CT_Integer2* mutable_argSz();
        const CT_Integer2& argSz() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OMathArgPr& default_instance() const;

    private:
        bool m_has_argSz ;
        CT_Integer2* m_argSz ;
        static CT_OMathArgPr* default_instance_ ;

    }

    class CT_OMathArg : public XSD::ComplexType{
    public:
        bool has_argPr() const;
        CT_OMathArgPr* mutable_argPr();
        const CT_OMathArgPr& argPr() const;
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
        CT_CustomXmlRun* add_customXml();
        CT_SimpleField* add_fldSimple();
        CT_Hyperlink* add_hyperlink();
        CT_SmartTagRun* add_smartTag();
        CT_SdtRun* add_sdt();
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
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        bool has_ctrlPr() const;
        CT_CtrlPr* mutable_ctrlPr();
        const CT_CtrlPr& ctrlPr() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OMathArg& default_instance() const;

    private:
        bool m_has_argPr ;
        CT_OMathArgPr* m_argPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_ctrlPr ;
        CT_CtrlPr* m_ctrlPr ;
        static CT_OMathArg* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_acc() const;
            CT_Acc* mutable_acc();
            const CT_Acc& acc() const;
            bool has_bar() const;
            CT_Bar* mutable_bar();
            const CT_Bar& bar() const;
            bool has_box() const;
            CT_Box* mutable_box();
            const CT_Box& box() const;
            bool has_borderBox() const;
            CT_BorderBox* mutable_borderBox();
            const CT_BorderBox& borderBox() const;
            bool has_d() const;
            CT_D* mutable_d();
            const CT_D& d() const;
            bool has_eqArr() const;
            CT_EqArr* mutable_eqArr();
            const CT_EqArr& eqArr() const;
            bool has_f() const;
            CT_F* mutable_f();
            const CT_F& f() const;
            bool has_func() const;
            CT_Func* mutable_func();
            const CT_Func& func() const;
            bool has_groupChr() const;
            CT_GroupChr* mutable_groupChr();
            const CT_GroupChr& groupChr() const;
            bool has_limLow() const;
            CT_LimLow* mutable_limLow();
            const CT_LimLow& limLow() const;
            bool has_limUpp() const;
            CT_LimUpp* mutable_limUpp();
            const CT_LimUpp& limUpp() const;
            bool has_m() const;
            CT_M* mutable_m();
            const CT_M& m() const;
            bool has_nary() const;
            CT_Nary* mutable_nary();
            const CT_Nary& nary() const;
            bool has_phant() const;
            CT_Phant* mutable_phant();
            const CT_Phant& phant() const;
            bool has_rad() const;
            CT_Rad* mutable_rad();
            const CT_Rad& rad() const;
            bool has_sPre() const;
            CT_SPre* mutable_sPre();
            const CT_SPre& sPre() const;
            bool has_sSub() const;
            CT_SSub* mutable_sSub();
            const CT_SSub& sSub() const;
            bool has_sSubSup() const;
            CT_SSubSup* mutable_sSubSup();
            const CT_SSubSup& sSubSup() const;
            bool has_sSup() const;
            CT_SSup* mutable_sSup();
            const CT_SSup& sSup() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& r() const;
            bool has_customXml() const;
            CT_CustomXmlRun* mutable_customXml();
            const CT_CustomXmlRun& customXml() const;
            bool has_fldSimple() const;
            CT_SimpleField* mutable_fldSimple();
            const CT_SimpleField& fldSimple() const;
            bool has_hyperlink() const;
            CT_Hyperlink* mutable_hyperlink();
            const CT_Hyperlink& hyperlink() const;
            bool has_smartTag() const;
            CT_SmartTagRun* mutable_smartTag();
            const CT_SmartTagRun& smartTag() const;
            bool has_sdt() const;
            CT_SdtRun* mutable_sdt();
            const CT_SdtRun& sdt() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;

        private:
            bool m_has_acc ;
            CT_Acc* m_acc ;
            bool m_has_bar ;
            CT_Bar* m_bar ;
            bool m_has_box ;
            CT_Box* m_box ;
            bool m_has_borderBox ;
            CT_BorderBox* m_borderBox ;
            bool m_has_d ;
            CT_D* m_d ;
            bool m_has_eqArr ;
            CT_EqArr* m_eqArr ;
            bool m_has_f ;
            CT_F* m_f ;
            bool m_has_func ;
            CT_Func* m_func ;
            bool m_has_groupChr ;
            CT_GroupChr* m_groupChr ;
            bool m_has_limLow ;
            CT_LimLow* m_limLow ;
            bool m_has_limUpp ;
            CT_LimUpp* m_limUpp ;
            bool m_has_m ;
            CT_M* m_m ;
            bool m_has_nary ;
            CT_Nary* m_nary ;
            bool m_has_phant ;
            CT_Phant* m_phant ;
            bool m_has_rad ;
            CT_Rad* m_rad ;
            bool m_has_sPre ;
            CT_SPre* m_sPre ;
            bool m_has_sSub ;
            CT_SSub* m_sSub ;
            bool m_has_sSubSup ;
            CT_SSubSup* m_sSubSup ;
            bool m_has_sSup ;
            CT_SSup* m_sSup ;
            bool m_has_r ;
            CT_R* m_r ;
            bool m_has_customXml ;
            CT_CustomXmlRun* m_customXml ;
            bool m_has_fldSimple ;
            CT_SimpleField* m_fldSimple ;
            bool m_has_hyperlink ;
            CT_Hyperlink* m_hyperlink ;
            bool m_has_smartTag ;
            CT_SmartTagRun* m_smartTag ;
            bool m_has_sdt ;
            CT_SdtRun* m_sdt ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;

        }


    }

    class CT_OMathJc : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OMathJc& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_Jc& _val_attr );
        const ST_Jc& val_attr() const;

    private:
        static CT_OMathJc* default_instance_ ;
        bool m_has_val_attr ;
        ST_Jc* m_val_attr ;

    }

    class CT_OMathParaPr : public XSD::ComplexType{
    public:
        bool has_jc() const;
        CT_OMathJc* mutable_jc();
        const CT_OMathJc& jc() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OMathParaPr& default_instance() const;

    private:
        bool m_has_jc ;
        CT_OMathJc* m_jc ;
        static CT_OMathParaPr* default_instance_ ;

    }

    class CT_TwipsMeasure : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_TwipsMeasure& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ns_s::ST_TwipsMeasure& _val_attr );
        const ns_s::ST_TwipsMeasure& val_attr() const;

    private:
        static CT_TwipsMeasure* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_TwipsMeasure* m_val_attr ;

    }

    class CT_BreakBin : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BreakBin& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_BreakBin& _val_attr );
        const ST_BreakBin& val_attr() const;

    private:
        static CT_BreakBin* default_instance_ ;
        bool m_has_val_attr ;
        ST_BreakBin* m_val_attr ;

    }

    class CT_BreakBinSub : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_BreakBinSub& default_instance() const;
        bool has_val_attr() const;
        void set_val_attr(const ST_BreakBinSub& _val_attr );
        const ST_BreakBinSub& val_attr() const;

    private:
        static CT_BreakBinSub* default_instance_ ;
        bool m_has_val_attr ;
        ST_BreakBinSub* m_val_attr ;

    }

    class CT_MathPr : public XSD::ComplexType{
    public:
        bool has_mathFont() const;
        CT_String* mutable_mathFont();
        const CT_String& mathFont() const;
        bool has_brkBin() const;
        CT_BreakBin* mutable_brkBin();
        const CT_BreakBin& brkBin() const;
        bool has_brkBinSub() const;
        CT_BreakBinSub* mutable_brkBinSub();
        const CT_BreakBinSub& brkBinSub() const;
        bool has_smallFrac() const;
        CT_OnOff* mutable_smallFrac();
        const CT_OnOff& smallFrac() const;
        bool has_dispDef() const;
        CT_OnOff* mutable_dispDef();
        const CT_OnOff& dispDef() const;
        bool has_lMargin() const;
        CT_TwipsMeasure* mutable_lMargin();
        const CT_TwipsMeasure& lMargin() const;
        bool has_rMargin() const;
        CT_TwipsMeasure* mutable_rMargin();
        const CT_TwipsMeasure& rMargin() const;
        bool has_defJc() const;
        CT_OMathJc* mutable_defJc();
        const CT_OMathJc& defJc() const;
        bool has_preSp() const;
        CT_TwipsMeasure* mutable_preSp();
        const CT_TwipsMeasure& preSp() const;
        bool has_postSp() const;
        CT_TwipsMeasure* mutable_postSp();
        const CT_TwipsMeasure& postSp() const;
        bool has_interSp() const;
        CT_TwipsMeasure* mutable_interSp();
        const CT_TwipsMeasure& interSp() const;
        bool has_intraSp() const;
        CT_TwipsMeasure* mutable_intraSp();
        const CT_TwipsMeasure& intraSp() const;
        bool has_wrapIndent() const;
        CT_TwipsMeasure* mutable_wrapIndent();
        const CT_TwipsMeasure& wrapIndent() const;
        bool has_wrapRight() const;
        CT_OnOff* mutable_wrapRight();
        const CT_OnOff& wrapRight() const;
        bool has_intLim() const;
        CT_LimLoc* mutable_intLim();
        const CT_LimLoc& intLim() const;
        bool has_naryLim() const;
        CT_LimLoc* mutable_naryLim();
        const CT_LimLoc& naryLim() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_MathPr& default_instance() const;

    private:
        bool m_has_mathFont ;
        CT_String* m_mathFont ;
        bool m_has_brkBin ;
        CT_BreakBin* m_brkBin ;
        bool m_has_brkBinSub ;
        CT_BreakBinSub* m_brkBinSub ;
        bool m_has_smallFrac ;
        CT_OnOff* m_smallFrac ;
        bool m_has_dispDef ;
        CT_OnOff* m_dispDef ;
        bool m_has_lMargin ;
        CT_TwipsMeasure* m_lMargin ;
        bool m_has_rMargin ;
        CT_TwipsMeasure* m_rMargin ;
        bool m_has_defJc ;
        CT_OMathJc* m_defJc ;
        bool m_has_preSp ;
        CT_TwipsMeasure* m_preSp ;
        bool m_has_postSp ;
        CT_TwipsMeasure* m_postSp ;
        bool m_has_interSp ;
        CT_TwipsMeasure* m_interSp ;
        bool m_has_intraSp ;
        CT_TwipsMeasure* m_intraSp ;
        bool m_has_wrapIndent ;
        CT_TwipsMeasure* m_wrapIndent ;
        bool m_has_wrapRight ;
        CT_OnOff* m_wrapRight ;
        bool m_has_intLim ;
        CT_LimLoc* m_intLim ;
        bool m_has_naryLim ;
        CT_LimLoc* m_naryLim ;
        static CT_MathPr* default_instance_ ;

    }

    class CT_OMathPara : public XSD::ComplexType{
    public:
        bool has_oMathParaPr() const;
        CT_OMathParaPr* mutable_oMathParaPr();
        const CT_OMathParaPr& oMathParaPr() const;
        bool has_oMath() const;
        CT_OMath* mutable_oMath();
        const CT_OMath& oMath() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OMathPara& default_instance() const;

    private:
        bool m_has_oMathParaPr ;
        CT_OMathParaPr* m_oMathParaPr ;
        bool m_has_oMath ;
        CT_OMath* m_oMath ;
        static CT_OMathPara* default_instance_ ;

    }

    class CT_OMath : public XSD::ComplexType{
    public:
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
        CT_CustomXmlRun* add_customXml();
        CT_SimpleField* add_fldSimple();
        CT_Hyperlink* add_hyperlink();
        CT_SmartTagRun* add_smartTag();
        CT_SdtRun* add_sdt();
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
        CT_OMathPara* add_oMathPara();
        CT_OMath* add_oMath();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_OMath& default_instance() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_OMath* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_acc() const;
            CT_Acc* mutable_acc();
            const CT_Acc& acc() const;
            bool has_bar() const;
            CT_Bar* mutable_bar();
            const CT_Bar& bar() const;
            bool has_box() const;
            CT_Box* mutable_box();
            const CT_Box& box() const;
            bool has_borderBox() const;
            CT_BorderBox* mutable_borderBox();
            const CT_BorderBox& borderBox() const;
            bool has_d() const;
            CT_D* mutable_d();
            const CT_D& d() const;
            bool has_eqArr() const;
            CT_EqArr* mutable_eqArr();
            const CT_EqArr& eqArr() const;
            bool has_f() const;
            CT_F* mutable_f();
            const CT_F& f() const;
            bool has_func() const;
            CT_Func* mutable_func();
            const CT_Func& func() const;
            bool has_groupChr() const;
            CT_GroupChr* mutable_groupChr();
            const CT_GroupChr& groupChr() const;
            bool has_limLow() const;
            CT_LimLow* mutable_limLow();
            const CT_LimLow& limLow() const;
            bool has_limUpp() const;
            CT_LimUpp* mutable_limUpp();
            const CT_LimUpp& limUpp() const;
            bool has_m() const;
            CT_M* mutable_m();
            const CT_M& m() const;
            bool has_nary() const;
            CT_Nary* mutable_nary();
            const CT_Nary& nary() const;
            bool has_phant() const;
            CT_Phant* mutable_phant();
            const CT_Phant& phant() const;
            bool has_rad() const;
            CT_Rad* mutable_rad();
            const CT_Rad& rad() const;
            bool has_sPre() const;
            CT_SPre* mutable_sPre();
            const CT_SPre& sPre() const;
            bool has_sSub() const;
            CT_SSub* mutable_sSub();
            const CT_SSub& sSub() const;
            bool has_sSubSup() const;
            CT_SSubSup* mutable_sSubSup();
            const CT_SSubSup& sSubSup() const;
            bool has_sSup() const;
            CT_SSup* mutable_sSup();
            const CT_SSup& sSup() const;
            bool has_r() const;
            CT_R* mutable_r();
            const CT_R& r() const;
            bool has_customXml() const;
            CT_CustomXmlRun* mutable_customXml();
            const CT_CustomXmlRun& customXml() const;
            bool has_fldSimple() const;
            CT_SimpleField* mutable_fldSimple();
            const CT_SimpleField& fldSimple() const;
            bool has_hyperlink() const;
            CT_Hyperlink* mutable_hyperlink();
            const CT_Hyperlink& hyperlink() const;
            bool has_smartTag() const;
            CT_SmartTagRun* mutable_smartTag();
            const CT_SmartTagRun& smartTag() const;
            bool has_sdt() const;
            CT_SdtRun* mutable_sdt();
            const CT_SdtRun& sdt() const;
            bool has_proofErr() const;
            CT_ProofErr* mutable_proofErr();
            const CT_ProofErr& proofErr() const;
            bool has_permStart() const;
            CT_PermStart* mutable_permStart();
            const CT_PermStart& permStart() const;
            bool has_permEnd() const;
            CT_Perm* mutable_permEnd();
            const CT_Perm& permEnd() const;
            bool has_bookmarkStart() const;
            CT_Bookmark* mutable_bookmarkStart();
            const CT_Bookmark& bookmarkStart() const;
            bool has_bookmarkEnd() const;
            CT_MarkupRange* mutable_bookmarkEnd();
            const CT_MarkupRange& bookmarkEnd() const;
            bool has_moveFromRangeStart() const;
            CT_MoveBookmark* mutable_moveFromRangeStart();
            const CT_MoveBookmark& moveFromRangeStart() const;
            bool has_moveFromRangeEnd() const;
            CT_MarkupRange* mutable_moveFromRangeEnd();
            const CT_MarkupRange& moveFromRangeEnd() const;
            bool has_moveToRangeStart() const;
            CT_MoveBookmark* mutable_moveToRangeStart();
            const CT_MoveBookmark& moveToRangeStart() const;
            bool has_moveToRangeEnd() const;
            CT_MarkupRange* mutable_moveToRangeEnd();
            const CT_MarkupRange& moveToRangeEnd() const;
            bool has_commentRangeStart() const;
            CT_MarkupRange* mutable_commentRangeStart();
            const CT_MarkupRange& commentRangeStart() const;
            bool has_commentRangeEnd() const;
            CT_MarkupRange* mutable_commentRangeEnd();
            const CT_MarkupRange& commentRangeEnd() const;
            bool has_customXmlInsRangeStart() const;
            CT_TrackChange* mutable_customXmlInsRangeStart();
            const CT_TrackChange& customXmlInsRangeStart() const;
            bool has_customXmlInsRangeEnd() const;
            CT_Markup* mutable_customXmlInsRangeEnd();
            const CT_Markup& customXmlInsRangeEnd() const;
            bool has_customXmlDelRangeStart() const;
            CT_TrackChange* mutable_customXmlDelRangeStart();
            const CT_TrackChange& customXmlDelRangeStart() const;
            bool has_customXmlDelRangeEnd() const;
            CT_Markup* mutable_customXmlDelRangeEnd();
            const CT_Markup& customXmlDelRangeEnd() const;
            bool has_customXmlMoveFromRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveFromRangeStart();
            const CT_TrackChange& customXmlMoveFromRangeStart() const;
            bool has_customXmlMoveFromRangeEnd() const;
            CT_Markup* mutable_customXmlMoveFromRangeEnd();
            const CT_Markup& customXmlMoveFromRangeEnd() const;
            bool has_customXmlMoveToRangeStart() const;
            CT_TrackChange* mutable_customXmlMoveToRangeStart();
            const CT_TrackChange& customXmlMoveToRangeStart() const;
            bool has_customXmlMoveToRangeEnd() const;
            CT_Markup* mutable_customXmlMoveToRangeEnd();
            const CT_Markup& customXmlMoveToRangeEnd() const;
            bool has_ins() const;
            CT_RunTrackChange* mutable_ins();
            const CT_RunTrackChange& ins() const;
            bool has_del() const;
            CT_RunTrackChange* mutable_del();
            const CT_RunTrackChange& del() const;
            bool has_moveFrom() const;
            CT_RunTrackChange* mutable_moveFrom();
            const CT_RunTrackChange& moveFrom() const;
            bool has_moveTo() const;
            CT_RunTrackChange* mutable_moveTo();
            const CT_RunTrackChange& moveTo() const;
            bool has_oMathPara() const;
            CT_OMathPara* mutable_oMathPara();
            const CT_OMathPara& oMathPara() const;
            bool has_oMath() const;
            CT_OMath* mutable_oMath();
            const CT_OMath& oMath() const;

        private:
            bool m_has_acc ;
            CT_Acc* m_acc ;
            bool m_has_bar ;
            CT_Bar* m_bar ;
            bool m_has_box ;
            CT_Box* m_box ;
            bool m_has_borderBox ;
            CT_BorderBox* m_borderBox ;
            bool m_has_d ;
            CT_D* m_d ;
            bool m_has_eqArr ;
            CT_EqArr* m_eqArr ;
            bool m_has_f ;
            CT_F* m_f ;
            bool m_has_func ;
            CT_Func* m_func ;
            bool m_has_groupChr ;
            CT_GroupChr* m_groupChr ;
            bool m_has_limLow ;
            CT_LimLow* m_limLow ;
            bool m_has_limUpp ;
            CT_LimUpp* m_limUpp ;
            bool m_has_m ;
            CT_M* m_m ;
            bool m_has_nary ;
            CT_Nary* m_nary ;
            bool m_has_phant ;
            CT_Phant* m_phant ;
            bool m_has_rad ;
            CT_Rad* m_rad ;
            bool m_has_sPre ;
            CT_SPre* m_sPre ;
            bool m_has_sSub ;
            CT_SSub* m_sSub ;
            bool m_has_sSubSup ;
            CT_SSubSup* m_sSubSup ;
            bool m_has_sSup ;
            CT_SSup* m_sSup ;
            bool m_has_r ;
            CT_R* m_r ;
            bool m_has_customXml ;
            CT_CustomXmlRun* m_customXml ;
            bool m_has_fldSimple ;
            CT_SimpleField* m_fldSimple ;
            bool m_has_hyperlink ;
            CT_Hyperlink* m_hyperlink ;
            bool m_has_smartTag ;
            CT_SmartTagRun* m_smartTag ;
            bool m_has_sdt ;
            CT_SdtRun* m_sdt ;
            bool m_has_proofErr ;
            CT_ProofErr* m_proofErr ;
            bool m_has_permStart ;
            CT_PermStart* m_permStart ;
            bool m_has_permEnd ;
            CT_Perm* m_permEnd ;
            bool m_has_bookmarkStart ;
            CT_Bookmark* m_bookmarkStart ;
            bool m_has_bookmarkEnd ;
            CT_MarkupRange* m_bookmarkEnd ;
            bool m_has_moveFromRangeStart ;
            CT_MoveBookmark* m_moveFromRangeStart ;
            bool m_has_moveFromRangeEnd ;
            CT_MarkupRange* m_moveFromRangeEnd ;
            bool m_has_moveToRangeStart ;
            CT_MoveBookmark* m_moveToRangeStart ;
            bool m_has_moveToRangeEnd ;
            CT_MarkupRange* m_moveToRangeEnd ;
            bool m_has_commentRangeStart ;
            CT_MarkupRange* m_commentRangeStart ;
            bool m_has_commentRangeEnd ;
            CT_MarkupRange* m_commentRangeEnd ;
            bool m_has_customXmlInsRangeStart ;
            CT_TrackChange* m_customXmlInsRangeStart ;
            bool m_has_customXmlInsRangeEnd ;
            CT_Markup* m_customXmlInsRangeEnd ;
            bool m_has_customXmlDelRangeStart ;
            CT_TrackChange* m_customXmlDelRangeStart ;
            bool m_has_customXmlDelRangeEnd ;
            CT_Markup* m_customXmlDelRangeEnd ;
            bool m_has_customXmlMoveFromRangeStart ;
            CT_TrackChange* m_customXmlMoveFromRangeStart ;
            bool m_has_customXmlMoveFromRangeEnd ;
            CT_Markup* m_customXmlMoveFromRangeEnd ;
            bool m_has_customXmlMoveToRangeStart ;
            CT_TrackChange* m_customXmlMoveToRangeStart ;
            bool m_has_customXmlMoveToRangeEnd ;
            CT_Markup* m_customXmlMoveToRangeEnd ;
            bool m_has_ins ;
            CT_RunTrackChange* m_ins ;
            bool m_has_del ;
            CT_RunTrackChange* m_del ;
            bool m_has_moveFrom ;
            CT_RunTrackChange* m_moveFrom ;
            bool m_has_moveTo ;
            CT_RunTrackChange* m_moveTo ;
            bool m_has_oMathPara ;
            CT_OMathPara* m_oMathPara ;
            bool m_has_oMath ;
            CT_OMath* m_oMath ;

        }


    }

    class mathPr : public CT_MathPr : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class oMathPara : public CT_OMathPara : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class oMath : public CT_OMath : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}