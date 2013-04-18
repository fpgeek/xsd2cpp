#ifndef vml-spreadsheetDrawing_xsd 
#define vml-spreadsheetDrawing_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_x{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_CF : public XSD::SimpleType{
    public:
        ST_CF();
        ST_CF(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_CF& default_instance() const;

    private:
        static ST_CF* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_ObjectType : public XSD::SimpleType{
    public:
        ST_ObjectType();
        ST_ObjectType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ObjectType& default_instance() const;
        enum Type{
            _Button_ = 1,
            _Checkbox_,
            _Dialog_,
            _Drop_,
            _Edit_,
            _GBox_,
            _Label_,
            _LineA_,
            _List_,
            _Movie_,
            _Note_,
            _Pict_,
            _Radio_,
            _RectA_,
            _Scroll_,
            _Spin_,
            _Shape_,
            _Group_,
            _Rect_
        }

    private:
        static const string TypeStrList [];
        static ST_ObjectType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_ClientData : public XSD::ComplexType{
    public:
        ns_s::ST_TrueFalseBlank* add_MoveWithCells();
        ns_s::ST_TrueFalseBlank* add_SizeWithCells();
        string* add_Anchor();
        ns_s::ST_TrueFalseBlank* add_Locked();
        ns_s::ST_TrueFalseBlank* add_DefaultSize();
        ns_s::ST_TrueFalseBlank* add_PrintObject();
        ns_s::ST_TrueFalseBlank* add_Disabled();
        ns_s::ST_TrueFalseBlank* add_AutoFill();
        ns_s::ST_TrueFalseBlank* add_AutoLine();
        ns_s::ST_TrueFalseBlank* add_AutoPict();
        string* add_FmlaMacro();
        string* add_TextHAlign();
        string* add_TextVAlign();
        ns_s::ST_TrueFalseBlank* add_x();
        ns_s::ST_TrueFalseBlank* add_JustLastX();
        ns_s::ST_TrueFalseBlank* add_SecretEdit();
        ns_s::ST_TrueFalseBlank* add_Default();
        ns_s::ST_TrueFalseBlank* add_Help();
        ns_s::ST_TrueFalseBlank* add_Cancel();
        ns_s::ST_TrueFalseBlank* add_Dismiss();
        integer* add_Accel();
        integer* add_Accel2();
        integer* add_Row();
        integer* add_Column();
        ns_s::ST_TrueFalseBlank* add_Visible();
        ns_s::ST_TrueFalseBlank* add_RowHidden();
        ns_s::ST_TrueFalseBlank* add_ColHidden();
        integer* add_VTEdit();
        ns_s::ST_TrueFalseBlank* add_MultiLine();
        ns_s::ST_TrueFalseBlank* add_VScroll();
        ns_s::ST_TrueFalseBlank* add_ValidIds();
        string* add_FmlaRange();
        integer* add_WidthMin();
        integer* add_Sel();
        ns_s::ST_TrueFalseBlank* add_NoThreeD2();
        string* add_SelType();
        string* add_MultiSel();
        string* add_LCT();
        string* add_st();
        string* add_DropStyle();
        ns_s::ST_TrueFalseBlank* add_Colored();
        integer* add_DropLines();
        integer* add_Checked();
        string* add_FmlaLink();
        string* add_FmlaPict();
        ns_s::ST_TrueFalseBlank* add_NoThreeD();
        ns_s::ST_TrueFalseBlank* add_FirstButton();
        string* add_FmlaGroup();
        integer* add_Val();
        integer* add_Min();
        integer* add_Max();
        integer* add_Inc();
        integer* add_Page();
        ns_s::ST_TrueFalseBlank* add_Horiz();
        integer* add_Dx();
        ns_s::ST_TrueFalseBlank* add_MapOCX();
        ST_CF* add_CF();
        ns_s::ST_TrueFalseBlank* add_Camera();
        ns_s::ST_TrueFalseBlank* add_RecalcAlways();
        ns_s::ST_TrueFalseBlank* add_AutoScale();
        ns_s::ST_TrueFalseBlank* add_DDE();
        ns_s::ST_TrueFalseBlank* add_UIObj();
        string* add_ScriptText();
        string* add_ScriptExtended();
        nonNegativeInteger* add_ScriptLanguage();
        nonNegativeInteger* add_ScriptLocation();
        string* add_FmlaTxbx();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_ClientData& default_instance() const;
        bool has_ObjectType_attr() const;
        void set_ObjectType_attr(const ST_ObjectType& _ObjectType_attr );
        const ST_ObjectType& ObjectType_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_ClientData* default_instance_ ;
        bool m_has_ObjectType_attr ;
        ST_ObjectType* m_ObjectType_attr ;
        class ChildGroup_1{
        public:
            bool has_MoveWithCells() const;
            ns_s::ST_TrueFalseBlank* mutable_MoveWithCells();
            const ns_s::ST_TrueFalseBlank& MoveWithCells() const;
            bool has_SizeWithCells() const;
            ns_s::ST_TrueFalseBlank* mutable_SizeWithCells();
            const ns_s::ST_TrueFalseBlank& SizeWithCells() const;
            bool has_Anchor() const;
            void set_Anchor(const string& _Anchor );
            const string& Anchor() const;
            bool has_Locked() const;
            ns_s::ST_TrueFalseBlank* mutable_Locked();
            const ns_s::ST_TrueFalseBlank& Locked() const;
            bool has_DefaultSize() const;
            ns_s::ST_TrueFalseBlank* mutable_DefaultSize();
            const ns_s::ST_TrueFalseBlank& DefaultSize() const;
            bool has_PrintObject() const;
            ns_s::ST_TrueFalseBlank* mutable_PrintObject();
            const ns_s::ST_TrueFalseBlank& PrintObject() const;
            bool has_Disabled() const;
            ns_s::ST_TrueFalseBlank* mutable_Disabled();
            const ns_s::ST_TrueFalseBlank& Disabled() const;
            bool has_AutoFill() const;
            ns_s::ST_TrueFalseBlank* mutable_AutoFill();
            const ns_s::ST_TrueFalseBlank& AutoFill() const;
            bool has_AutoLine() const;
            ns_s::ST_TrueFalseBlank* mutable_AutoLine();
            const ns_s::ST_TrueFalseBlank& AutoLine() const;
            bool has_AutoPict() const;
            ns_s::ST_TrueFalseBlank* mutable_AutoPict();
            const ns_s::ST_TrueFalseBlank& AutoPict() const;
            bool has_FmlaMacro() const;
            void set_FmlaMacro(const string& _FmlaMacro );
            const string& FmlaMacro() const;
            bool has_TextHAlign() const;
            void set_TextHAlign(const string& _TextHAlign );
            const string& TextHAlign() const;
            bool has_TextVAlign() const;
            void set_TextVAlign(const string& _TextVAlign );
            const string& TextVAlign() const;
            bool has_x() const;
            ns_s::ST_TrueFalseBlank* mutable_x();
            const ns_s::ST_TrueFalseBlank& x() const;
            bool has_JustLastX() const;
            ns_s::ST_TrueFalseBlank* mutable_JustLastX();
            const ns_s::ST_TrueFalseBlank& JustLastX() const;
            bool has_SecretEdit() const;
            ns_s::ST_TrueFalseBlank* mutable_SecretEdit();
            const ns_s::ST_TrueFalseBlank& SecretEdit() const;
            bool has_Default() const;
            ns_s::ST_TrueFalseBlank* mutable_Default();
            const ns_s::ST_TrueFalseBlank& Default() const;
            bool has_Help() const;
            ns_s::ST_TrueFalseBlank* mutable_Help();
            const ns_s::ST_TrueFalseBlank& Help() const;
            bool has_Cancel() const;
            ns_s::ST_TrueFalseBlank* mutable_Cancel();
            const ns_s::ST_TrueFalseBlank& Cancel() const;
            bool has_Dismiss() const;
            ns_s::ST_TrueFalseBlank* mutable_Dismiss();
            const ns_s::ST_TrueFalseBlank& Dismiss() const;
            bool has_Accel() const;
            void set_Accel(const integer& _Accel );
            const integer& Accel() const;
            bool has_Accel2() const;
            void set_Accel2(const integer& _Accel2 );
            const integer& Accel2() const;
            bool has_Row() const;
            void set_Row(const integer& _Row );
            const integer& Row() const;
            bool has_Column() const;
            void set_Column(const integer& _Column );
            const integer& Column() const;
            bool has_Visible() const;
            ns_s::ST_TrueFalseBlank* mutable_Visible();
            const ns_s::ST_TrueFalseBlank& Visible() const;
            bool has_RowHidden() const;
            ns_s::ST_TrueFalseBlank* mutable_RowHidden();
            const ns_s::ST_TrueFalseBlank& RowHidden() const;
            bool has_ColHidden() const;
            ns_s::ST_TrueFalseBlank* mutable_ColHidden();
            const ns_s::ST_TrueFalseBlank& ColHidden() const;
            bool has_VTEdit() const;
            void set_VTEdit(const integer& _VTEdit );
            const integer& VTEdit() const;
            bool has_MultiLine() const;
            ns_s::ST_TrueFalseBlank* mutable_MultiLine();
            const ns_s::ST_TrueFalseBlank& MultiLine() const;
            bool has_VScroll() const;
            ns_s::ST_TrueFalseBlank* mutable_VScroll();
            const ns_s::ST_TrueFalseBlank& VScroll() const;
            bool has_ValidIds() const;
            ns_s::ST_TrueFalseBlank* mutable_ValidIds();
            const ns_s::ST_TrueFalseBlank& ValidIds() const;
            bool has_FmlaRange() const;
            void set_FmlaRange(const string& _FmlaRange );
            const string& FmlaRange() const;
            bool has_WidthMin() const;
            void set_WidthMin(const integer& _WidthMin );
            const integer& WidthMin() const;
            bool has_Sel() const;
            void set_Sel(const integer& _Sel );
            const integer& Sel() const;
            bool has_NoThreeD2() const;
            ns_s::ST_TrueFalseBlank* mutable_NoThreeD2();
            const ns_s::ST_TrueFalseBlank& NoThreeD2() const;
            bool has_SelType() const;
            void set_SelType(const string& _SelType );
            const string& SelType() const;
            bool has_MultiSel() const;
            void set_MultiSel(const string& _MultiSel );
            const string& MultiSel() const;
            bool has_LCT() const;
            void set_LCT(const string& _LCT );
            const string& LCT() const;
            bool has_st() const;
            void set_st(const string& _st );
            const string& st() const;
            bool has_DropStyle() const;
            void set_DropStyle(const string& _DropStyle );
            const string& DropStyle() const;
            bool has_Colored() const;
            ns_s::ST_TrueFalseBlank* mutable_Colored();
            const ns_s::ST_TrueFalseBlank& Colored() const;
            bool has_DropLines() const;
            void set_DropLines(const integer& _DropLines );
            const integer& DropLines() const;
            bool has_Checked() const;
            void set_Checked(const integer& _Checked );
            const integer& Checked() const;
            bool has_FmlaLink() const;
            void set_FmlaLink(const string& _FmlaLink );
            const string& FmlaLink() const;
            bool has_FmlaPict() const;
            void set_FmlaPict(const string& _FmlaPict );
            const string& FmlaPict() const;
            bool has_NoThreeD() const;
            ns_s::ST_TrueFalseBlank* mutable_NoThreeD();
            const ns_s::ST_TrueFalseBlank& NoThreeD() const;
            bool has_FirstButton() const;
            ns_s::ST_TrueFalseBlank* mutable_FirstButton();
            const ns_s::ST_TrueFalseBlank& FirstButton() const;
            bool has_FmlaGroup() const;
            void set_FmlaGroup(const string& _FmlaGroup );
            const string& FmlaGroup() const;
            bool has_Val() const;
            void set_Val(const integer& _Val );
            const integer& Val() const;
            bool has_Min() const;
            void set_Min(const integer& _Min );
            const integer& Min() const;
            bool has_Max() const;
            void set_Max(const integer& _Max );
            const integer& Max() const;
            bool has_Inc() const;
            void set_Inc(const integer& _Inc );
            const integer& Inc() const;
            bool has_Page() const;
            void set_Page(const integer& _Page );
            const integer& Page() const;
            bool has_Horiz() const;
            ns_s::ST_TrueFalseBlank* mutable_Horiz();
            const ns_s::ST_TrueFalseBlank& Horiz() const;
            bool has_Dx() const;
            void set_Dx(const integer& _Dx );
            const integer& Dx() const;
            bool has_MapOCX() const;
            ns_s::ST_TrueFalseBlank* mutable_MapOCX();
            const ns_s::ST_TrueFalseBlank& MapOCX() const;
            bool has_CF() const;
            ST_CF* mutable_CF();
            const ST_CF& CF() const;
            bool has_Camera() const;
            ns_s::ST_TrueFalseBlank* mutable_Camera();
            const ns_s::ST_TrueFalseBlank& Camera() const;
            bool has_RecalcAlways() const;
            ns_s::ST_TrueFalseBlank* mutable_RecalcAlways();
            const ns_s::ST_TrueFalseBlank& RecalcAlways() const;
            bool has_AutoScale() const;
            ns_s::ST_TrueFalseBlank* mutable_AutoScale();
            const ns_s::ST_TrueFalseBlank& AutoScale() const;
            bool has_DDE() const;
            ns_s::ST_TrueFalseBlank* mutable_DDE();
            const ns_s::ST_TrueFalseBlank& DDE() const;
            bool has_UIObj() const;
            ns_s::ST_TrueFalseBlank* mutable_UIObj();
            const ns_s::ST_TrueFalseBlank& UIObj() const;
            bool has_ScriptText() const;
            void set_ScriptText(const string& _ScriptText );
            const string& ScriptText() const;
            bool has_ScriptExtended() const;
            void set_ScriptExtended(const string& _ScriptExtended );
            const string& ScriptExtended() const;
            bool has_ScriptLanguage() const;
            void set_ScriptLanguage(const nonNegativeInteger& _ScriptLanguage );
            const nonNegativeInteger& ScriptLanguage() const;
            bool has_ScriptLocation() const;
            void set_ScriptLocation(const nonNegativeInteger& _ScriptLocation );
            const nonNegativeInteger& ScriptLocation() const;
            bool has_FmlaTxbx() const;
            void set_FmlaTxbx(const string& _FmlaTxbx );
            const string& FmlaTxbx() const;

        private:
            bool m_has_MoveWithCells ;
            ns_s::ST_TrueFalseBlank* m_MoveWithCells ;
            bool m_has_SizeWithCells ;
            ns_s::ST_TrueFalseBlank* m_SizeWithCells ;
            bool m_has_Anchor ;
            string m_Anchor ;
            bool m_has_Locked ;
            ns_s::ST_TrueFalseBlank* m_Locked ;
            bool m_has_DefaultSize ;
            ns_s::ST_TrueFalseBlank* m_DefaultSize ;
            bool m_has_PrintObject ;
            ns_s::ST_TrueFalseBlank* m_PrintObject ;
            bool m_has_Disabled ;
            ns_s::ST_TrueFalseBlank* m_Disabled ;
            bool m_has_AutoFill ;
            ns_s::ST_TrueFalseBlank* m_AutoFill ;
            bool m_has_AutoLine ;
            ns_s::ST_TrueFalseBlank* m_AutoLine ;
            bool m_has_AutoPict ;
            ns_s::ST_TrueFalseBlank* m_AutoPict ;
            bool m_has_FmlaMacro ;
            string m_FmlaMacro ;
            bool m_has_TextHAlign ;
            string m_TextHAlign ;
            bool m_has_TextVAlign ;
            string m_TextVAlign ;
            bool m_has_x ;
            ns_s::ST_TrueFalseBlank* m_x ;
            bool m_has_JustLastX ;
            ns_s::ST_TrueFalseBlank* m_JustLastX ;
            bool m_has_SecretEdit ;
            ns_s::ST_TrueFalseBlank* m_SecretEdit ;
            bool m_has_Default ;
            ns_s::ST_TrueFalseBlank* m_Default ;
            bool m_has_Help ;
            ns_s::ST_TrueFalseBlank* m_Help ;
            bool m_has_Cancel ;
            ns_s::ST_TrueFalseBlank* m_Cancel ;
            bool m_has_Dismiss ;
            ns_s::ST_TrueFalseBlank* m_Dismiss ;
            bool m_has_Accel ;
            integer m_Accel ;
            bool m_has_Accel2 ;
            integer m_Accel2 ;
            bool m_has_Row ;
            integer m_Row ;
            bool m_has_Column ;
            integer m_Column ;
            bool m_has_Visible ;
            ns_s::ST_TrueFalseBlank* m_Visible ;
            bool m_has_RowHidden ;
            ns_s::ST_TrueFalseBlank* m_RowHidden ;
            bool m_has_ColHidden ;
            ns_s::ST_TrueFalseBlank* m_ColHidden ;
            bool m_has_VTEdit ;
            integer m_VTEdit ;
            bool m_has_MultiLine ;
            ns_s::ST_TrueFalseBlank* m_MultiLine ;
            bool m_has_VScroll ;
            ns_s::ST_TrueFalseBlank* m_VScroll ;
            bool m_has_ValidIds ;
            ns_s::ST_TrueFalseBlank* m_ValidIds ;
            bool m_has_FmlaRange ;
            string m_FmlaRange ;
            bool m_has_WidthMin ;
            integer m_WidthMin ;
            bool m_has_Sel ;
            integer m_Sel ;
            bool m_has_NoThreeD2 ;
            ns_s::ST_TrueFalseBlank* m_NoThreeD2 ;
            bool m_has_SelType ;
            string m_SelType ;
            bool m_has_MultiSel ;
            string m_MultiSel ;
            bool m_has_LCT ;
            string m_LCT ;
            bool m_has_st ;
            string m_st ;
            bool m_has_DropStyle ;
            string m_DropStyle ;
            bool m_has_Colored ;
            ns_s::ST_TrueFalseBlank* m_Colored ;
            bool m_has_DropLines ;
            integer m_DropLines ;
            bool m_has_Checked ;
            integer m_Checked ;
            bool m_has_FmlaLink ;
            string m_FmlaLink ;
            bool m_has_FmlaPict ;
            string m_FmlaPict ;
            bool m_has_NoThreeD ;
            ns_s::ST_TrueFalseBlank* m_NoThreeD ;
            bool m_has_FirstButton ;
            ns_s::ST_TrueFalseBlank* m_FirstButton ;
            bool m_has_FmlaGroup ;
            string m_FmlaGroup ;
            bool m_has_Val ;
            integer m_Val ;
            bool m_has_Min ;
            integer m_Min ;
            bool m_has_Max ;
            integer m_Max ;
            bool m_has_Inc ;
            integer m_Inc ;
            bool m_has_Page ;
            integer m_Page ;
            bool m_has_Horiz ;
            ns_s::ST_TrueFalseBlank* m_Horiz ;
            bool m_has_Dx ;
            integer m_Dx ;
            bool m_has_MapOCX ;
            ns_s::ST_TrueFalseBlank* m_MapOCX ;
            bool m_has_CF ;
            ST_CF* m_CF ;
            bool m_has_Camera ;
            ns_s::ST_TrueFalseBlank* m_Camera ;
            bool m_has_RecalcAlways ;
            ns_s::ST_TrueFalseBlank* m_RecalcAlways ;
            bool m_has_AutoScale ;
            ns_s::ST_TrueFalseBlank* m_AutoScale ;
            bool m_has_DDE ;
            ns_s::ST_TrueFalseBlank* m_DDE ;
            bool m_has_UIObj ;
            ns_s::ST_TrueFalseBlank* m_UIObj ;
            bool m_has_ScriptText ;
            string m_ScriptText ;
            bool m_has_ScriptExtended ;
            string m_ScriptExtended ;
            bool m_has_ScriptLanguage ;
            nonNegativeInteger m_ScriptLanguage ;
            bool m_has_ScriptLocation ;
            nonNegativeInteger m_ScriptLocation ;
            bool m_has_FmlaTxbx ;
            string m_FmlaTxbx ;

        }


    }

    class ClientData : public CT_ClientData : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}