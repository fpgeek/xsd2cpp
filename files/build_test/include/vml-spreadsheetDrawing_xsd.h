namespace ns_x {
class Element;
class Attribute;
class ST_CF;
class ST_ObjectType;
class CT_ClientData;
class ClientData_element;
}
#ifndef __vml_spreadsheetDrawing_xsd_
#define __vml_spreadsheetDrawing_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_x {
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

class ST_CF: public XSD::SimpleType
{
public:
    ST_CF();
    ST_CF(const XSD::string_& _value);
    ~ST_CF();
    bool has_value() const;
    void set_value(const XSD::string_& _value);
    const XSD::string_& get_value() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_CF& default_instance();
    std::string toString() const;
protected:
private:
    static ST_CF* default_instance_;
    bool m_has_value;
    XSD::string_ m_value;
};

class ST_ObjectType: public XSD::SimpleType
{
public:
    enum  Type
    {
        _Button_ = 0,
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
    };
    ST_ObjectType();
    ST_ObjectType(const ST_ObjectType::Type& _value);
    ~ST_ObjectType();
    bool has_value() const;
    void set_value(const ST_ObjectType::Type& _value);
    const ST_ObjectType::Type& get_value() const;
    std::string toString() const;
    void clear();
    void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
    static const ST_ObjectType& default_instance();
protected:
private:
    static const std::string TypeStrList[];
    static ST_ObjectType* default_instance_;
    bool m_has_value;
    ST_ObjectType::Type m_value;
};

class CT_ClientData: public XSD::ComplexType
{
public:
    CT_ClientData();
    ~CT_ClientData();
    ns_s::ST_TrueFalseBlank* add_MoveWithCells();
    ns_s::ST_TrueFalseBlank* add_SizeWithCells();
    void add_Anchor(const XSD::string_& _Anchor);
    ns_s::ST_TrueFalseBlank* add_Locked();
    ns_s::ST_TrueFalseBlank* add_DefaultSize();
    ns_s::ST_TrueFalseBlank* add_PrintObject();
    ns_s::ST_TrueFalseBlank* add_Disabled();
    ns_s::ST_TrueFalseBlank* add_AutoFill();
    ns_s::ST_TrueFalseBlank* add_AutoLine();
    ns_s::ST_TrueFalseBlank* add_AutoPict();
    void add_FmlaMacro(const XSD::string_& _FmlaMacro);
    void add_TextHAlign(const XSD::string_& _TextHAlign);
    void add_TextVAlign(const XSD::string_& _TextVAlign);
    ns_s::ST_TrueFalseBlank* add_x();
    ns_s::ST_TrueFalseBlank* add_JustLastX();
    ns_s::ST_TrueFalseBlank* add_SecretEdit();
    ns_s::ST_TrueFalseBlank* add_Default();
    ns_s::ST_TrueFalseBlank* add_Help();
    ns_s::ST_TrueFalseBlank* add_Cancel();
    ns_s::ST_TrueFalseBlank* add_Dismiss();
    void add_Accel(const XSD::integer_& _Accel);
    void add_Accel2(const XSD::integer_& _Accel2);
    void add_Row(const XSD::integer_& _Row);
    void add_Column(const XSD::integer_& _Column);
    ns_s::ST_TrueFalseBlank* add_Visible();
    ns_s::ST_TrueFalseBlank* add_RowHidden();
    ns_s::ST_TrueFalseBlank* add_ColHidden();
    void add_VTEdit(const XSD::integer_& _VTEdit);
    ns_s::ST_TrueFalseBlank* add_MultiLine();
    ns_s::ST_TrueFalseBlank* add_VScroll();
    ns_s::ST_TrueFalseBlank* add_ValidIds();
    void add_FmlaRange(const XSD::string_& _FmlaRange);
    void add_WidthMin(const XSD::integer_& _WidthMin);
    void add_Sel(const XSD::integer_& _Sel);
    ns_s::ST_TrueFalseBlank* add_NoThreeD2();
    void add_SelType(const XSD::string_& _SelType);
    void add_MultiSel(const XSD::string_& _MultiSel);
    void add_LCT(const XSD::string_& _LCT);
    void add_st(const XSD::string_& _st);
    void add_DropStyle(const XSD::string_& _DropStyle);
    ns_s::ST_TrueFalseBlank* add_Colored();
    void add_DropLines(const XSD::integer_& _DropLines);
    void add_Checked(const XSD::integer_& _Checked);
    void add_FmlaLink(const XSD::string_& _FmlaLink);
    void add_FmlaPict(const XSD::string_& _FmlaPict);
    ns_s::ST_TrueFalseBlank* add_NoThreeD();
    ns_s::ST_TrueFalseBlank* add_FirstButton();
    void add_FmlaGroup(const XSD::string_& _FmlaGroup);
    void add_Val(const XSD::integer_& _Val);
    void add_Min(const XSD::integer_& _Min);
    void add_Max(const XSD::integer_& _Max);
    void add_Inc(const XSD::integer_& _Inc);
    void add_Page(const XSD::integer_& _Page);
    ns_s::ST_TrueFalseBlank* add_Horiz();
    void add_Dx(const XSD::integer_& _Dx);
    ns_s::ST_TrueFalseBlank* add_MapOCX();
    ST_CF* add_CF();
    ns_s::ST_TrueFalseBlank* add_Camera();
    ns_s::ST_TrueFalseBlank* add_RecalcAlways();
    ns_s::ST_TrueFalseBlank* add_AutoScale();
    ns_s::ST_TrueFalseBlank* add_DDE();
    ns_s::ST_TrueFalseBlank* add_UIObj();
    void add_ScriptText(const XSD::string_& _ScriptText);
    void add_ScriptExtended(const XSD::string_& _ScriptExtended);
    void add_ScriptLanguage(const XSD::nonNegativeInteger_& _ScriptLanguage);
    void add_ScriptLocation(const XSD::nonNegativeInteger_& _ScriptLocation);
    void add_FmlaTxbx(const XSD::string_& _FmlaTxbx);
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_ClientData& default_instance();
    bool has_ObjectType_attr() const;
    void set_ObjectType_attr(const ST_ObjectType& _ObjectType_attr);
    const ST_ObjectType& get_ObjectType_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_MoveWithCells() const;
        ns_s::ST_TrueFalseBlank* mutable_MoveWithCells();
        const ns_s::ST_TrueFalseBlank& get_MoveWithCells() const;
        bool has_SizeWithCells() const;
        ns_s::ST_TrueFalseBlank* mutable_SizeWithCells();
        const ns_s::ST_TrueFalseBlank& get_SizeWithCells() const;
        bool has_Anchor() const;
        void set_Anchor(const XSD::string_& _Anchor);
        const XSD::string_& get_Anchor() const;
        bool has_Locked() const;
        ns_s::ST_TrueFalseBlank* mutable_Locked();
        const ns_s::ST_TrueFalseBlank& get_Locked() const;
        bool has_DefaultSize() const;
        ns_s::ST_TrueFalseBlank* mutable_DefaultSize();
        const ns_s::ST_TrueFalseBlank& get_DefaultSize() const;
        bool has_PrintObject() const;
        ns_s::ST_TrueFalseBlank* mutable_PrintObject();
        const ns_s::ST_TrueFalseBlank& get_PrintObject() const;
        bool has_Disabled() const;
        ns_s::ST_TrueFalseBlank* mutable_Disabled();
        const ns_s::ST_TrueFalseBlank& get_Disabled() const;
        bool has_AutoFill() const;
        ns_s::ST_TrueFalseBlank* mutable_AutoFill();
        const ns_s::ST_TrueFalseBlank& get_AutoFill() const;
        bool has_AutoLine() const;
        ns_s::ST_TrueFalseBlank* mutable_AutoLine();
        const ns_s::ST_TrueFalseBlank& get_AutoLine() const;
        bool has_AutoPict() const;
        ns_s::ST_TrueFalseBlank* mutable_AutoPict();
        const ns_s::ST_TrueFalseBlank& get_AutoPict() const;
        bool has_FmlaMacro() const;
        void set_FmlaMacro(const XSD::string_& _FmlaMacro);
        const XSD::string_& get_FmlaMacro() const;
        bool has_TextHAlign() const;
        void set_TextHAlign(const XSD::string_& _TextHAlign);
        const XSD::string_& get_TextHAlign() const;
        bool has_TextVAlign() const;
        void set_TextVAlign(const XSD::string_& _TextVAlign);
        const XSD::string_& get_TextVAlign() const;
        bool has_x() const;
        ns_s::ST_TrueFalseBlank* mutable_x();
        const ns_s::ST_TrueFalseBlank& get_x() const;
        bool has_JustLastX() const;
        ns_s::ST_TrueFalseBlank* mutable_JustLastX();
        const ns_s::ST_TrueFalseBlank& get_JustLastX() const;
        bool has_SecretEdit() const;
        ns_s::ST_TrueFalseBlank* mutable_SecretEdit();
        const ns_s::ST_TrueFalseBlank& get_SecretEdit() const;
        bool has_Default() const;
        ns_s::ST_TrueFalseBlank* mutable_Default();
        const ns_s::ST_TrueFalseBlank& get_Default() const;
        bool has_Help() const;
        ns_s::ST_TrueFalseBlank* mutable_Help();
        const ns_s::ST_TrueFalseBlank& get_Help() const;
        bool has_Cancel() const;
        ns_s::ST_TrueFalseBlank* mutable_Cancel();
        const ns_s::ST_TrueFalseBlank& get_Cancel() const;
        bool has_Dismiss() const;
        ns_s::ST_TrueFalseBlank* mutable_Dismiss();
        const ns_s::ST_TrueFalseBlank& get_Dismiss() const;
        bool has_Accel() const;
        void set_Accel(const XSD::integer_& _Accel);
        const XSD::integer_& get_Accel() const;
        bool has_Accel2() const;
        void set_Accel2(const XSD::integer_& _Accel2);
        const XSD::integer_& get_Accel2() const;
        bool has_Row() const;
        void set_Row(const XSD::integer_& _Row);
        const XSD::integer_& get_Row() const;
        bool has_Column() const;
        void set_Column(const XSD::integer_& _Column);
        const XSD::integer_& get_Column() const;
        bool has_Visible() const;
        ns_s::ST_TrueFalseBlank* mutable_Visible();
        const ns_s::ST_TrueFalseBlank& get_Visible() const;
        bool has_RowHidden() const;
        ns_s::ST_TrueFalseBlank* mutable_RowHidden();
        const ns_s::ST_TrueFalseBlank& get_RowHidden() const;
        bool has_ColHidden() const;
        ns_s::ST_TrueFalseBlank* mutable_ColHidden();
        const ns_s::ST_TrueFalseBlank& get_ColHidden() const;
        bool has_VTEdit() const;
        void set_VTEdit(const XSD::integer_& _VTEdit);
        const XSD::integer_& get_VTEdit() const;
        bool has_MultiLine() const;
        ns_s::ST_TrueFalseBlank* mutable_MultiLine();
        const ns_s::ST_TrueFalseBlank& get_MultiLine() const;
        bool has_VScroll() const;
        ns_s::ST_TrueFalseBlank* mutable_VScroll();
        const ns_s::ST_TrueFalseBlank& get_VScroll() const;
        bool has_ValidIds() const;
        ns_s::ST_TrueFalseBlank* mutable_ValidIds();
        const ns_s::ST_TrueFalseBlank& get_ValidIds() const;
        bool has_FmlaRange() const;
        void set_FmlaRange(const XSD::string_& _FmlaRange);
        const XSD::string_& get_FmlaRange() const;
        bool has_WidthMin() const;
        void set_WidthMin(const XSD::integer_& _WidthMin);
        const XSD::integer_& get_WidthMin() const;
        bool has_Sel() const;
        void set_Sel(const XSD::integer_& _Sel);
        const XSD::integer_& get_Sel() const;
        bool has_NoThreeD2() const;
        ns_s::ST_TrueFalseBlank* mutable_NoThreeD2();
        const ns_s::ST_TrueFalseBlank& get_NoThreeD2() const;
        bool has_SelType() const;
        void set_SelType(const XSD::string_& _SelType);
        const XSD::string_& get_SelType() const;
        bool has_MultiSel() const;
        void set_MultiSel(const XSD::string_& _MultiSel);
        const XSD::string_& get_MultiSel() const;
        bool has_LCT() const;
        void set_LCT(const XSD::string_& _LCT);
        const XSD::string_& get_LCT() const;
        bool has_st() const;
        void set_st(const XSD::string_& _st);
        const XSD::string_& get_st() const;
        bool has_DropStyle() const;
        void set_DropStyle(const XSD::string_& _DropStyle);
        const XSD::string_& get_DropStyle() const;
        bool has_Colored() const;
        ns_s::ST_TrueFalseBlank* mutable_Colored();
        const ns_s::ST_TrueFalseBlank& get_Colored() const;
        bool has_DropLines() const;
        void set_DropLines(const XSD::integer_& _DropLines);
        const XSD::integer_& get_DropLines() const;
        bool has_Checked() const;
        void set_Checked(const XSD::integer_& _Checked);
        const XSD::integer_& get_Checked() const;
        bool has_FmlaLink() const;
        void set_FmlaLink(const XSD::string_& _FmlaLink);
        const XSD::string_& get_FmlaLink() const;
        bool has_FmlaPict() const;
        void set_FmlaPict(const XSD::string_& _FmlaPict);
        const XSD::string_& get_FmlaPict() const;
        bool has_NoThreeD() const;
        ns_s::ST_TrueFalseBlank* mutable_NoThreeD();
        const ns_s::ST_TrueFalseBlank& get_NoThreeD() const;
        bool has_FirstButton() const;
        ns_s::ST_TrueFalseBlank* mutable_FirstButton();
        const ns_s::ST_TrueFalseBlank& get_FirstButton() const;
        bool has_FmlaGroup() const;
        void set_FmlaGroup(const XSD::string_& _FmlaGroup);
        const XSD::string_& get_FmlaGroup() const;
        bool has_Val() const;
        void set_Val(const XSD::integer_& _Val);
        const XSD::integer_& get_Val() const;
        bool has_Min() const;
        void set_Min(const XSD::integer_& _Min);
        const XSD::integer_& get_Min() const;
        bool has_Max() const;
        void set_Max(const XSD::integer_& _Max);
        const XSD::integer_& get_Max() const;
        bool has_Inc() const;
        void set_Inc(const XSD::integer_& _Inc);
        const XSD::integer_& get_Inc() const;
        bool has_Page() const;
        void set_Page(const XSD::integer_& _Page);
        const XSD::integer_& get_Page() const;
        bool has_Horiz() const;
        ns_s::ST_TrueFalseBlank* mutable_Horiz();
        const ns_s::ST_TrueFalseBlank& get_Horiz() const;
        bool has_Dx() const;
        void set_Dx(const XSD::integer_& _Dx);
        const XSD::integer_& get_Dx() const;
        bool has_MapOCX() const;
        ns_s::ST_TrueFalseBlank* mutable_MapOCX();
        const ns_s::ST_TrueFalseBlank& get_MapOCX() const;
        bool has_CF() const;
        ST_CF* mutable_CF();
        const ST_CF& get_CF() const;
        bool has_Camera() const;
        ns_s::ST_TrueFalseBlank* mutable_Camera();
        const ns_s::ST_TrueFalseBlank& get_Camera() const;
        bool has_RecalcAlways() const;
        ns_s::ST_TrueFalseBlank* mutable_RecalcAlways();
        const ns_s::ST_TrueFalseBlank& get_RecalcAlways() const;
        bool has_AutoScale() const;
        ns_s::ST_TrueFalseBlank* mutable_AutoScale();
        const ns_s::ST_TrueFalseBlank& get_AutoScale() const;
        bool has_DDE() const;
        ns_s::ST_TrueFalseBlank* mutable_DDE();
        const ns_s::ST_TrueFalseBlank& get_DDE() const;
        bool has_UIObj() const;
        ns_s::ST_TrueFalseBlank* mutable_UIObj();
        const ns_s::ST_TrueFalseBlank& get_UIObj() const;
        bool has_ScriptText() const;
        void set_ScriptText(const XSD::string_& _ScriptText);
        const XSD::string_& get_ScriptText() const;
        bool has_ScriptExtended() const;
        void set_ScriptExtended(const XSD::string_& _ScriptExtended);
        const XSD::string_& get_ScriptExtended() const;
        bool has_ScriptLanguage() const;
        void set_ScriptLanguage(const XSD::nonNegativeInteger_& _ScriptLanguage);
        const XSD::nonNegativeInteger_& get_ScriptLanguage() const;
        bool has_ScriptLocation() const;
        void set_ScriptLocation(const XSD::nonNegativeInteger_& _ScriptLocation);
        const XSD::nonNegativeInteger_& get_ScriptLocation() const;
        bool has_FmlaTxbx() const;
        void set_FmlaTxbx(const XSD::string_& _FmlaTxbx);
        const XSD::string_& get_FmlaTxbx() const;
    protected:
    private:
        bool m_has_MoveWithCells;
        ns_s::ST_TrueFalseBlank* m_MoveWithCells;
        bool m_has_SizeWithCells;
        ns_s::ST_TrueFalseBlank* m_SizeWithCells;
        bool m_has_Anchor;
        XSD::string_ m_Anchor;
        bool m_has_Locked;
        ns_s::ST_TrueFalseBlank* m_Locked;
        bool m_has_DefaultSize;
        ns_s::ST_TrueFalseBlank* m_DefaultSize;
        bool m_has_PrintObject;
        ns_s::ST_TrueFalseBlank* m_PrintObject;
        bool m_has_Disabled;
        ns_s::ST_TrueFalseBlank* m_Disabled;
        bool m_has_AutoFill;
        ns_s::ST_TrueFalseBlank* m_AutoFill;
        bool m_has_AutoLine;
        ns_s::ST_TrueFalseBlank* m_AutoLine;
        bool m_has_AutoPict;
        ns_s::ST_TrueFalseBlank* m_AutoPict;
        bool m_has_FmlaMacro;
        XSD::string_ m_FmlaMacro;
        bool m_has_TextHAlign;
        XSD::string_ m_TextHAlign;
        bool m_has_TextVAlign;
        XSD::string_ m_TextVAlign;
        bool m_has_x;
        ns_s::ST_TrueFalseBlank* m_x;
        bool m_has_JustLastX;
        ns_s::ST_TrueFalseBlank* m_JustLastX;
        bool m_has_SecretEdit;
        ns_s::ST_TrueFalseBlank* m_SecretEdit;
        bool m_has_Default;
        ns_s::ST_TrueFalseBlank* m_Default;
        bool m_has_Help;
        ns_s::ST_TrueFalseBlank* m_Help;
        bool m_has_Cancel;
        ns_s::ST_TrueFalseBlank* m_Cancel;
        bool m_has_Dismiss;
        ns_s::ST_TrueFalseBlank* m_Dismiss;
        bool m_has_Accel;
        XSD::integer_ m_Accel;
        bool m_has_Accel2;
        XSD::integer_ m_Accel2;
        bool m_has_Row;
        XSD::integer_ m_Row;
        bool m_has_Column;
        XSD::integer_ m_Column;
        bool m_has_Visible;
        ns_s::ST_TrueFalseBlank* m_Visible;
        bool m_has_RowHidden;
        ns_s::ST_TrueFalseBlank* m_RowHidden;
        bool m_has_ColHidden;
        ns_s::ST_TrueFalseBlank* m_ColHidden;
        bool m_has_VTEdit;
        XSD::integer_ m_VTEdit;
        bool m_has_MultiLine;
        ns_s::ST_TrueFalseBlank* m_MultiLine;
        bool m_has_VScroll;
        ns_s::ST_TrueFalseBlank* m_VScroll;
        bool m_has_ValidIds;
        ns_s::ST_TrueFalseBlank* m_ValidIds;
        bool m_has_FmlaRange;
        XSD::string_ m_FmlaRange;
        bool m_has_WidthMin;
        XSD::integer_ m_WidthMin;
        bool m_has_Sel;
        XSD::integer_ m_Sel;
        bool m_has_NoThreeD2;
        ns_s::ST_TrueFalseBlank* m_NoThreeD2;
        bool m_has_SelType;
        XSD::string_ m_SelType;
        bool m_has_MultiSel;
        XSD::string_ m_MultiSel;
        bool m_has_LCT;
        XSD::string_ m_LCT;
        bool m_has_st;
        XSD::string_ m_st;
        bool m_has_DropStyle;
        XSD::string_ m_DropStyle;
        bool m_has_Colored;
        ns_s::ST_TrueFalseBlank* m_Colored;
        bool m_has_DropLines;
        XSD::integer_ m_DropLines;
        bool m_has_Checked;
        XSD::integer_ m_Checked;
        bool m_has_FmlaLink;
        XSD::string_ m_FmlaLink;
        bool m_has_FmlaPict;
        XSD::string_ m_FmlaPict;
        bool m_has_NoThreeD;
        ns_s::ST_TrueFalseBlank* m_NoThreeD;
        bool m_has_FirstButton;
        ns_s::ST_TrueFalseBlank* m_FirstButton;
        bool m_has_FmlaGroup;
        XSD::string_ m_FmlaGroup;
        bool m_has_Val;
        XSD::integer_ m_Val;
        bool m_has_Min;
        XSD::integer_ m_Min;
        bool m_has_Max;
        XSD::integer_ m_Max;
        bool m_has_Inc;
        XSD::integer_ m_Inc;
        bool m_has_Page;
        XSD::integer_ m_Page;
        bool m_has_Horiz;
        ns_s::ST_TrueFalseBlank* m_Horiz;
        bool m_has_Dx;
        XSD::integer_ m_Dx;
        bool m_has_MapOCX;
        ns_s::ST_TrueFalseBlank* m_MapOCX;
        bool m_has_CF;
        ST_CF* m_CF;
        bool m_has_Camera;
        ns_s::ST_TrueFalseBlank* m_Camera;
        bool m_has_RecalcAlways;
        ns_s::ST_TrueFalseBlank* m_RecalcAlways;
        bool m_has_AutoScale;
        ns_s::ST_TrueFalseBlank* m_AutoScale;
        bool m_has_DDE;
        ns_s::ST_TrueFalseBlank* m_DDE;
        bool m_has_UIObj;
        ns_s::ST_TrueFalseBlank* m_UIObj;
        bool m_has_ScriptText;
        XSD::string_ m_ScriptText;
        bool m_has_ScriptExtended;
        XSD::string_ m_ScriptExtended;
        bool m_has_ScriptLanguage;
        XSD::nonNegativeInteger_ m_ScriptLanguage;
        bool m_has_ScriptLocation;
        XSD::nonNegativeInteger_ m_ScriptLocation;
        bool m_has_FmlaTxbx;
        XSD::string_ m_FmlaTxbx;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_ClientData* default_instance_;
    bool m_has_ObjectType_attr;
    ST_ObjectType* m_ObjectType_attr;
};

class ClientData_element: public Element
{
public:
    ClientData_element();
    ~ClientData_element();
    ns_s::ST_TrueFalseBlank* add_MoveWithCells();
    ns_s::ST_TrueFalseBlank* add_SizeWithCells();
    void add_Anchor(const XSD::string_& _Anchor);
    ns_s::ST_TrueFalseBlank* add_Locked();
    ns_s::ST_TrueFalseBlank* add_DefaultSize();
    ns_s::ST_TrueFalseBlank* add_PrintObject();
    ns_s::ST_TrueFalseBlank* add_Disabled();
    ns_s::ST_TrueFalseBlank* add_AutoFill();
    ns_s::ST_TrueFalseBlank* add_AutoLine();
    ns_s::ST_TrueFalseBlank* add_AutoPict();
    void add_FmlaMacro(const XSD::string_& _FmlaMacro);
    void add_TextHAlign(const XSD::string_& _TextHAlign);
    void add_TextVAlign(const XSD::string_& _TextVAlign);
    ns_s::ST_TrueFalseBlank* add_x();
    ns_s::ST_TrueFalseBlank* add_JustLastX();
    ns_s::ST_TrueFalseBlank* add_SecretEdit();
    ns_s::ST_TrueFalseBlank* add_Default();
    ns_s::ST_TrueFalseBlank* add_Help();
    ns_s::ST_TrueFalseBlank* add_Cancel();
    ns_s::ST_TrueFalseBlank* add_Dismiss();
    void add_Accel(const XSD::integer_& _Accel);
    void add_Accel2(const XSD::integer_& _Accel2);
    void add_Row(const XSD::integer_& _Row);
    void add_Column(const XSD::integer_& _Column);
    ns_s::ST_TrueFalseBlank* add_Visible();
    ns_s::ST_TrueFalseBlank* add_RowHidden();
    ns_s::ST_TrueFalseBlank* add_ColHidden();
    void add_VTEdit(const XSD::integer_& _VTEdit);
    ns_s::ST_TrueFalseBlank* add_MultiLine();
    ns_s::ST_TrueFalseBlank* add_VScroll();
    ns_s::ST_TrueFalseBlank* add_ValidIds();
    void add_FmlaRange(const XSD::string_& _FmlaRange);
    void add_WidthMin(const XSD::integer_& _WidthMin);
    void add_Sel(const XSD::integer_& _Sel);
    ns_s::ST_TrueFalseBlank* add_NoThreeD2();
    void add_SelType(const XSD::string_& _SelType);
    void add_MultiSel(const XSD::string_& _MultiSel);
    void add_LCT(const XSD::string_& _LCT);
    void add_st(const XSD::string_& _st);
    void add_DropStyle(const XSD::string_& _DropStyle);
    ns_s::ST_TrueFalseBlank* add_Colored();
    void add_DropLines(const XSD::integer_& _DropLines);
    void add_Checked(const XSD::integer_& _Checked);
    void add_FmlaLink(const XSD::string_& _FmlaLink);
    void add_FmlaPict(const XSD::string_& _FmlaPict);
    ns_s::ST_TrueFalseBlank* add_NoThreeD();
    ns_s::ST_TrueFalseBlank* add_FirstButton();
    void add_FmlaGroup(const XSD::string_& _FmlaGroup);
    void add_Val(const XSD::integer_& _Val);
    void add_Min(const XSD::integer_& _Min);
    void add_Max(const XSD::integer_& _Max);
    void add_Inc(const XSD::integer_& _Inc);
    void add_Page(const XSD::integer_& _Page);
    ns_s::ST_TrueFalseBlank* add_Horiz();
    void add_Dx(const XSD::integer_& _Dx);
    ns_s::ST_TrueFalseBlank* add_MapOCX();
    ST_CF* add_CF();
    ns_s::ST_TrueFalseBlank* add_Camera();
    ns_s::ST_TrueFalseBlank* add_RecalcAlways();
    ns_s::ST_TrueFalseBlank* add_AutoScale();
    ns_s::ST_TrueFalseBlank* add_DDE();
    ns_s::ST_TrueFalseBlank* add_UIObj();
    void add_ScriptText(const XSD::string_& _ScriptText);
    void add_ScriptExtended(const XSD::string_& _ScriptExtended);
    void add_ScriptLanguage(const XSD::nonNegativeInteger_& _ScriptLanguage);
    void add_ScriptLocation(const XSD::nonNegativeInteger_& _ScriptLocation);
    void add_FmlaTxbx(const XSD::string_& _FmlaTxbx);
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const ClientData_element& default_instance();
    bool has_ObjectType_attr() const;
    void set_ObjectType_attr(const ST_ObjectType& _ObjectType_attr);
    const ST_ObjectType& get_ObjectType_attr() const;
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_MoveWithCells() const;
        ns_s::ST_TrueFalseBlank* mutable_MoveWithCells();
        const ns_s::ST_TrueFalseBlank& get_MoveWithCells() const;
        bool has_SizeWithCells() const;
        ns_s::ST_TrueFalseBlank* mutable_SizeWithCells();
        const ns_s::ST_TrueFalseBlank& get_SizeWithCells() const;
        bool has_Anchor() const;
        void set_Anchor(const XSD::string_& _Anchor);
        const XSD::string_& get_Anchor() const;
        bool has_Locked() const;
        ns_s::ST_TrueFalseBlank* mutable_Locked();
        const ns_s::ST_TrueFalseBlank& get_Locked() const;
        bool has_DefaultSize() const;
        ns_s::ST_TrueFalseBlank* mutable_DefaultSize();
        const ns_s::ST_TrueFalseBlank& get_DefaultSize() const;
        bool has_PrintObject() const;
        ns_s::ST_TrueFalseBlank* mutable_PrintObject();
        const ns_s::ST_TrueFalseBlank& get_PrintObject() const;
        bool has_Disabled() const;
        ns_s::ST_TrueFalseBlank* mutable_Disabled();
        const ns_s::ST_TrueFalseBlank& get_Disabled() const;
        bool has_AutoFill() const;
        ns_s::ST_TrueFalseBlank* mutable_AutoFill();
        const ns_s::ST_TrueFalseBlank& get_AutoFill() const;
        bool has_AutoLine() const;
        ns_s::ST_TrueFalseBlank* mutable_AutoLine();
        const ns_s::ST_TrueFalseBlank& get_AutoLine() const;
        bool has_AutoPict() const;
        ns_s::ST_TrueFalseBlank* mutable_AutoPict();
        const ns_s::ST_TrueFalseBlank& get_AutoPict() const;
        bool has_FmlaMacro() const;
        void set_FmlaMacro(const XSD::string_& _FmlaMacro);
        const XSD::string_& get_FmlaMacro() const;
        bool has_TextHAlign() const;
        void set_TextHAlign(const XSD::string_& _TextHAlign);
        const XSD::string_& get_TextHAlign() const;
        bool has_TextVAlign() const;
        void set_TextVAlign(const XSD::string_& _TextVAlign);
        const XSD::string_& get_TextVAlign() const;
        bool has_x() const;
        ns_s::ST_TrueFalseBlank* mutable_x();
        const ns_s::ST_TrueFalseBlank& get_x() const;
        bool has_JustLastX() const;
        ns_s::ST_TrueFalseBlank* mutable_JustLastX();
        const ns_s::ST_TrueFalseBlank& get_JustLastX() const;
        bool has_SecretEdit() const;
        ns_s::ST_TrueFalseBlank* mutable_SecretEdit();
        const ns_s::ST_TrueFalseBlank& get_SecretEdit() const;
        bool has_Default() const;
        ns_s::ST_TrueFalseBlank* mutable_Default();
        const ns_s::ST_TrueFalseBlank& get_Default() const;
        bool has_Help() const;
        ns_s::ST_TrueFalseBlank* mutable_Help();
        const ns_s::ST_TrueFalseBlank& get_Help() const;
        bool has_Cancel() const;
        ns_s::ST_TrueFalseBlank* mutable_Cancel();
        const ns_s::ST_TrueFalseBlank& get_Cancel() const;
        bool has_Dismiss() const;
        ns_s::ST_TrueFalseBlank* mutable_Dismiss();
        const ns_s::ST_TrueFalseBlank& get_Dismiss() const;
        bool has_Accel() const;
        void set_Accel(const XSD::integer_& _Accel);
        const XSD::integer_& get_Accel() const;
        bool has_Accel2() const;
        void set_Accel2(const XSD::integer_& _Accel2);
        const XSD::integer_& get_Accel2() const;
        bool has_Row() const;
        void set_Row(const XSD::integer_& _Row);
        const XSD::integer_& get_Row() const;
        bool has_Column() const;
        void set_Column(const XSD::integer_& _Column);
        const XSD::integer_& get_Column() const;
        bool has_Visible() const;
        ns_s::ST_TrueFalseBlank* mutable_Visible();
        const ns_s::ST_TrueFalseBlank& get_Visible() const;
        bool has_RowHidden() const;
        ns_s::ST_TrueFalseBlank* mutable_RowHidden();
        const ns_s::ST_TrueFalseBlank& get_RowHidden() const;
        bool has_ColHidden() const;
        ns_s::ST_TrueFalseBlank* mutable_ColHidden();
        const ns_s::ST_TrueFalseBlank& get_ColHidden() const;
        bool has_VTEdit() const;
        void set_VTEdit(const XSD::integer_& _VTEdit);
        const XSD::integer_& get_VTEdit() const;
        bool has_MultiLine() const;
        ns_s::ST_TrueFalseBlank* mutable_MultiLine();
        const ns_s::ST_TrueFalseBlank& get_MultiLine() const;
        bool has_VScroll() const;
        ns_s::ST_TrueFalseBlank* mutable_VScroll();
        const ns_s::ST_TrueFalseBlank& get_VScroll() const;
        bool has_ValidIds() const;
        ns_s::ST_TrueFalseBlank* mutable_ValidIds();
        const ns_s::ST_TrueFalseBlank& get_ValidIds() const;
        bool has_FmlaRange() const;
        void set_FmlaRange(const XSD::string_& _FmlaRange);
        const XSD::string_& get_FmlaRange() const;
        bool has_WidthMin() const;
        void set_WidthMin(const XSD::integer_& _WidthMin);
        const XSD::integer_& get_WidthMin() const;
        bool has_Sel() const;
        void set_Sel(const XSD::integer_& _Sel);
        const XSD::integer_& get_Sel() const;
        bool has_NoThreeD2() const;
        ns_s::ST_TrueFalseBlank* mutable_NoThreeD2();
        const ns_s::ST_TrueFalseBlank& get_NoThreeD2() const;
        bool has_SelType() const;
        void set_SelType(const XSD::string_& _SelType);
        const XSD::string_& get_SelType() const;
        bool has_MultiSel() const;
        void set_MultiSel(const XSD::string_& _MultiSel);
        const XSD::string_& get_MultiSel() const;
        bool has_LCT() const;
        void set_LCT(const XSD::string_& _LCT);
        const XSD::string_& get_LCT() const;
        bool has_st() const;
        void set_st(const XSD::string_& _st);
        const XSD::string_& get_st() const;
        bool has_DropStyle() const;
        void set_DropStyle(const XSD::string_& _DropStyle);
        const XSD::string_& get_DropStyle() const;
        bool has_Colored() const;
        ns_s::ST_TrueFalseBlank* mutable_Colored();
        const ns_s::ST_TrueFalseBlank& get_Colored() const;
        bool has_DropLines() const;
        void set_DropLines(const XSD::integer_& _DropLines);
        const XSD::integer_& get_DropLines() const;
        bool has_Checked() const;
        void set_Checked(const XSD::integer_& _Checked);
        const XSD::integer_& get_Checked() const;
        bool has_FmlaLink() const;
        void set_FmlaLink(const XSD::string_& _FmlaLink);
        const XSD::string_& get_FmlaLink() const;
        bool has_FmlaPict() const;
        void set_FmlaPict(const XSD::string_& _FmlaPict);
        const XSD::string_& get_FmlaPict() const;
        bool has_NoThreeD() const;
        ns_s::ST_TrueFalseBlank* mutable_NoThreeD();
        const ns_s::ST_TrueFalseBlank& get_NoThreeD() const;
        bool has_FirstButton() const;
        ns_s::ST_TrueFalseBlank* mutable_FirstButton();
        const ns_s::ST_TrueFalseBlank& get_FirstButton() const;
        bool has_FmlaGroup() const;
        void set_FmlaGroup(const XSD::string_& _FmlaGroup);
        const XSD::string_& get_FmlaGroup() const;
        bool has_Val() const;
        void set_Val(const XSD::integer_& _Val);
        const XSD::integer_& get_Val() const;
        bool has_Min() const;
        void set_Min(const XSD::integer_& _Min);
        const XSD::integer_& get_Min() const;
        bool has_Max() const;
        void set_Max(const XSD::integer_& _Max);
        const XSD::integer_& get_Max() const;
        bool has_Inc() const;
        void set_Inc(const XSD::integer_& _Inc);
        const XSD::integer_& get_Inc() const;
        bool has_Page() const;
        void set_Page(const XSD::integer_& _Page);
        const XSD::integer_& get_Page() const;
        bool has_Horiz() const;
        ns_s::ST_TrueFalseBlank* mutable_Horiz();
        const ns_s::ST_TrueFalseBlank& get_Horiz() const;
        bool has_Dx() const;
        void set_Dx(const XSD::integer_& _Dx);
        const XSD::integer_& get_Dx() const;
        bool has_MapOCX() const;
        ns_s::ST_TrueFalseBlank* mutable_MapOCX();
        const ns_s::ST_TrueFalseBlank& get_MapOCX() const;
        bool has_CF() const;
        ST_CF* mutable_CF();
        const ST_CF& get_CF() const;
        bool has_Camera() const;
        ns_s::ST_TrueFalseBlank* mutable_Camera();
        const ns_s::ST_TrueFalseBlank& get_Camera() const;
        bool has_RecalcAlways() const;
        ns_s::ST_TrueFalseBlank* mutable_RecalcAlways();
        const ns_s::ST_TrueFalseBlank& get_RecalcAlways() const;
        bool has_AutoScale() const;
        ns_s::ST_TrueFalseBlank* mutable_AutoScale();
        const ns_s::ST_TrueFalseBlank& get_AutoScale() const;
        bool has_DDE() const;
        ns_s::ST_TrueFalseBlank* mutable_DDE();
        const ns_s::ST_TrueFalseBlank& get_DDE() const;
        bool has_UIObj() const;
        ns_s::ST_TrueFalseBlank* mutable_UIObj();
        const ns_s::ST_TrueFalseBlank& get_UIObj() const;
        bool has_ScriptText() const;
        void set_ScriptText(const XSD::string_& _ScriptText);
        const XSD::string_& get_ScriptText() const;
        bool has_ScriptExtended() const;
        void set_ScriptExtended(const XSD::string_& _ScriptExtended);
        const XSD::string_& get_ScriptExtended() const;
        bool has_ScriptLanguage() const;
        void set_ScriptLanguage(const XSD::nonNegativeInteger_& _ScriptLanguage);
        const XSD::nonNegativeInteger_& get_ScriptLanguage() const;
        bool has_ScriptLocation() const;
        void set_ScriptLocation(const XSD::nonNegativeInteger_& _ScriptLocation);
        const XSD::nonNegativeInteger_& get_ScriptLocation() const;
        bool has_FmlaTxbx() const;
        void set_FmlaTxbx(const XSD::string_& _FmlaTxbx);
        const XSD::string_& get_FmlaTxbx() const;
    protected:
    private:
        bool m_has_MoveWithCells;
        ns_s::ST_TrueFalseBlank* m_MoveWithCells;
        bool m_has_SizeWithCells;
        ns_s::ST_TrueFalseBlank* m_SizeWithCells;
        bool m_has_Anchor;
        XSD::string_ m_Anchor;
        bool m_has_Locked;
        ns_s::ST_TrueFalseBlank* m_Locked;
        bool m_has_DefaultSize;
        ns_s::ST_TrueFalseBlank* m_DefaultSize;
        bool m_has_PrintObject;
        ns_s::ST_TrueFalseBlank* m_PrintObject;
        bool m_has_Disabled;
        ns_s::ST_TrueFalseBlank* m_Disabled;
        bool m_has_AutoFill;
        ns_s::ST_TrueFalseBlank* m_AutoFill;
        bool m_has_AutoLine;
        ns_s::ST_TrueFalseBlank* m_AutoLine;
        bool m_has_AutoPict;
        ns_s::ST_TrueFalseBlank* m_AutoPict;
        bool m_has_FmlaMacro;
        XSD::string_ m_FmlaMacro;
        bool m_has_TextHAlign;
        XSD::string_ m_TextHAlign;
        bool m_has_TextVAlign;
        XSD::string_ m_TextVAlign;
        bool m_has_x;
        ns_s::ST_TrueFalseBlank* m_x;
        bool m_has_JustLastX;
        ns_s::ST_TrueFalseBlank* m_JustLastX;
        bool m_has_SecretEdit;
        ns_s::ST_TrueFalseBlank* m_SecretEdit;
        bool m_has_Default;
        ns_s::ST_TrueFalseBlank* m_Default;
        bool m_has_Help;
        ns_s::ST_TrueFalseBlank* m_Help;
        bool m_has_Cancel;
        ns_s::ST_TrueFalseBlank* m_Cancel;
        bool m_has_Dismiss;
        ns_s::ST_TrueFalseBlank* m_Dismiss;
        bool m_has_Accel;
        XSD::integer_ m_Accel;
        bool m_has_Accel2;
        XSD::integer_ m_Accel2;
        bool m_has_Row;
        XSD::integer_ m_Row;
        bool m_has_Column;
        XSD::integer_ m_Column;
        bool m_has_Visible;
        ns_s::ST_TrueFalseBlank* m_Visible;
        bool m_has_RowHidden;
        ns_s::ST_TrueFalseBlank* m_RowHidden;
        bool m_has_ColHidden;
        ns_s::ST_TrueFalseBlank* m_ColHidden;
        bool m_has_VTEdit;
        XSD::integer_ m_VTEdit;
        bool m_has_MultiLine;
        ns_s::ST_TrueFalseBlank* m_MultiLine;
        bool m_has_VScroll;
        ns_s::ST_TrueFalseBlank* m_VScroll;
        bool m_has_ValidIds;
        ns_s::ST_TrueFalseBlank* m_ValidIds;
        bool m_has_FmlaRange;
        XSD::string_ m_FmlaRange;
        bool m_has_WidthMin;
        XSD::integer_ m_WidthMin;
        bool m_has_Sel;
        XSD::integer_ m_Sel;
        bool m_has_NoThreeD2;
        ns_s::ST_TrueFalseBlank* m_NoThreeD2;
        bool m_has_SelType;
        XSD::string_ m_SelType;
        bool m_has_MultiSel;
        XSD::string_ m_MultiSel;
        bool m_has_LCT;
        XSD::string_ m_LCT;
        bool m_has_st;
        XSD::string_ m_st;
        bool m_has_DropStyle;
        XSD::string_ m_DropStyle;
        bool m_has_Colored;
        ns_s::ST_TrueFalseBlank* m_Colored;
        bool m_has_DropLines;
        XSD::integer_ m_DropLines;
        bool m_has_Checked;
        XSD::integer_ m_Checked;
        bool m_has_FmlaLink;
        XSD::string_ m_FmlaLink;
        bool m_has_FmlaPict;
        XSD::string_ m_FmlaPict;
        bool m_has_NoThreeD;
        ns_s::ST_TrueFalseBlank* m_NoThreeD;
        bool m_has_FirstButton;
        ns_s::ST_TrueFalseBlank* m_FirstButton;
        bool m_has_FmlaGroup;
        XSD::string_ m_FmlaGroup;
        bool m_has_Val;
        XSD::integer_ m_Val;
        bool m_has_Min;
        XSD::integer_ m_Min;
        bool m_has_Max;
        XSD::integer_ m_Max;
        bool m_has_Inc;
        XSD::integer_ m_Inc;
        bool m_has_Page;
        XSD::integer_ m_Page;
        bool m_has_Horiz;
        ns_s::ST_TrueFalseBlank* m_Horiz;
        bool m_has_Dx;
        XSD::integer_ m_Dx;
        bool m_has_MapOCX;
        ns_s::ST_TrueFalseBlank* m_MapOCX;
        bool m_has_CF;
        ST_CF* m_CF;
        bool m_has_Camera;
        ns_s::ST_TrueFalseBlank* m_Camera;
        bool m_has_RecalcAlways;
        ns_s::ST_TrueFalseBlank* m_RecalcAlways;
        bool m_has_AutoScale;
        ns_s::ST_TrueFalseBlank* m_AutoScale;
        bool m_has_DDE;
        ns_s::ST_TrueFalseBlank* m_DDE;
        bool m_has_UIObj;
        ns_s::ST_TrueFalseBlank* m_UIObj;
        bool m_has_ScriptText;
        XSD::string_ m_ScriptText;
        bool m_has_ScriptExtended;
        XSD::string_ m_ScriptExtended;
        bool m_has_ScriptLanguage;
        XSD::nonNegativeInteger_ m_ScriptLanguage;
        bool m_has_ScriptLocation;
        XSD::nonNegativeInteger_ m_ScriptLocation;
        bool m_has_FmlaTxbx;
        XSD::string_ m_FmlaTxbx;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static ClientData_element* default_instance_;
    bool m_has_ObjectType_attr;
    ST_ObjectType* m_ObjectType_attr;
};

}
#endif