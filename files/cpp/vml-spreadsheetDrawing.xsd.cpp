#include "vml-spreadsheetDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        ST_CF(){
            m_has_string = false
            m_string = 

        }
        ST_CF(const XSD::string& _string ){
            m_has_string = true
            m_string = _string

        }
        bool has_string(){

    return m_has_string;

        }
        void set_string(const string& _string ){

    m_has_string = true;
    m_string = _string;

        }
        const string& string(){

    return m_string;

        }
        void clear(){

    m_has_string = false;
    m_string.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_string)
    {
        _outStream << _attrName << \=\\ << m_string << \\\;;
    }

        }
        const ST_CF& default_instance(){

    if (!ST_CF::default_instance_)
    {
        ST_CF::default_instance_ = new ST_CF();
    }
    return *ST_CF::default_instance_;

        }

    private:
        static ST_CF* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_ObjectType : public XSD::SimpleType{
    public:
        ST_ObjectType(){
            m_has_type = false

        }
        ST_ObjectType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ObjectType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ObjectType& default_instance(){

    if (!ST_ObjectType::default_instance_)
    {
        ST_ObjectType::default_instance_ = new ST_ObjectType();
    }
    return *ST_ObjectType::default_instance_;

        }
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
        ns_s::ST_TrueFalseBlank* add_MoveWithCells(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MoveWithCells();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_SizeWithCells(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_SizeWithCells();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_Anchor(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_Anchor();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Locked(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Locked();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_DefaultSize(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_DefaultSize();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_PrintObject(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_PrintObject();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Disabled(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Disabled();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_AutoFill(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoFill();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_AutoLine(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoLine();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_AutoPict(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoPict();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_FmlaMacro(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_FmlaMacro();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_TextHAlign(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_TextHAlign();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_TextVAlign(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_TextVAlign();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_x(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_x();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_JustLastX(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_JustLastX();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_SecretEdit(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_SecretEdit();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Default(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Default();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Help(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Help();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Cancel(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Cancel();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Dismiss(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Dismiss();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Accel(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Accel();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Accel2(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Accel2();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Row(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Row();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Column(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Column();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Visible(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Visible();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_RowHidden(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_RowHidden();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_ColHidden(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_ColHidden();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_VTEdit(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_VTEdit();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_MultiLine(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MultiLine();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_VScroll(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_VScroll();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_ValidIds(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_ValidIds();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_FmlaRange(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_FmlaRange();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_WidthMin(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_WidthMin();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Sel(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Sel();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_NoThreeD2(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_NoThreeD2();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_SelType(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_SelType();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_MultiSel(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_MultiSel();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_LCT(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_LCT();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_st(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_st();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_DropStyle(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_DropStyle();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Colored(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Colored();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_DropLines(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_DropLines();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Checked(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Checked();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_FmlaLink(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_FmlaLink();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_FmlaPict(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_FmlaPict();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_NoThreeD(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_NoThreeD();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_FirstButton(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_FirstButton();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_FmlaGroup(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_FmlaGroup();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Val(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Val();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Min(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Min();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Max(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Max();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Inc(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Inc();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Page(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Page();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Horiz(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Horiz();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        integer* add_Dx(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            integer* pNewChild = pChildGroup->mutable_Dx();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_MapOCX(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MapOCX();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ST_CF* add_CF(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ST_CF* pNewChild = pChildGroup->mutable_CF();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_Camera(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Camera();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_RecalcAlways(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_RecalcAlways();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_AutoScale(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoScale();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_DDE(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_DDE();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_TrueFalseBlank* add_UIObj(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_UIObj();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_ScriptText(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_ScriptText();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_ScriptExtended(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_ScriptExtended();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        nonNegativeInteger* add_ScriptLanguage(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            nonNegativeInteger* pNewChild = pChildGroup->mutable_ScriptLanguage();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        nonNegativeInteger* add_ScriptLocation(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            nonNegativeInteger* pNewChild = pChildGroup->mutable_ScriptLocation();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_FmlaTxbx(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_FmlaTxbx();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

                m_has_ObjectType_attr = false;
                
        if (m_ObjectType_attr)
        {
            delete m_ObjectType_attr;
            m_ObjectType_attr = NULL;
        }
    
            
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ObjectType_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_MoveWithCells())
            {
                _outStream << \<MoveWithCells>\ << (*iter)->toString() << \</MoveWithCells>\;
            }
            else if ((*iter)->has_SizeWithCells())
            {
                _outStream << \<SizeWithCells>\ << (*iter)->toString() << \</SizeWithCells>\;
            }
            else if ((*iter)->has_Anchor())
            {
                _outStream << \<Anchor>\ << (*iter) << \</Anchor>\;
            }
            else if ((*iter)->has_Locked())
            {
                _outStream << \<Locked>\ << (*iter)->toString() << \</Locked>\;
            }
            else if ((*iter)->has_DefaultSize())
            {
                _outStream << \<DefaultSize>\ << (*iter)->toString() << \</DefaultSize>\;
            }
            else if ((*iter)->has_PrintObject())
            {
                _outStream << \<PrintObject>\ << (*iter)->toString() << \</PrintObject>\;
            }
            else if ((*iter)->has_Disabled())
            {
                _outStream << \<Disabled>\ << (*iter)->toString() << \</Disabled>\;
            }
            else if ((*iter)->has_AutoFill())
            {
                _outStream << \<AutoFill>\ << (*iter)->toString() << \</AutoFill>\;
            }
            else if ((*iter)->has_AutoLine())
            {
                _outStream << \<AutoLine>\ << (*iter)->toString() << \</AutoLine>\;
            }
            else if ((*iter)->has_AutoPict())
            {
                _outStream << \<AutoPict>\ << (*iter)->toString() << \</AutoPict>\;
            }
            else if ((*iter)->has_FmlaMacro())
            {
                _outStream << \<FmlaMacro>\ << (*iter) << \</FmlaMacro>\;
            }
            else if ((*iter)->has_TextHAlign())
            {
                _outStream << \<TextHAlign>\ << (*iter) << \</TextHAlign>\;
            }
            else if ((*iter)->has_TextVAlign())
            {
                _outStream << \<TextVAlign>\ << (*iter) << \</TextVAlign>\;
            }
            else if ((*iter)->has_x())
            {
                _outStream << \<x>\ << (*iter)->toString() << \</x>\;
            }
            else if ((*iter)->has_JustLastX())
            {
                _outStream << \<JustLastX>\ << (*iter)->toString() << \</JustLastX>\;
            }
            else if ((*iter)->has_SecretEdit())
            {
                _outStream << \<SecretEdit>\ << (*iter)->toString() << \</SecretEdit>\;
            }
            else if ((*iter)->has_Default())
            {
                _outStream << \<Default>\ << (*iter)->toString() << \</Default>\;
            }
            else if ((*iter)->has_Help())
            {
                _outStream << \<Help>\ << (*iter)->toString() << \</Help>\;
            }
            else if ((*iter)->has_Cancel())
            {
                _outStream << \<Cancel>\ << (*iter)->toString() << \</Cancel>\;
            }
            else if ((*iter)->has_Dismiss())
            {
                _outStream << \<Dismiss>\ << (*iter)->toString() << \</Dismiss>\;
            }
            else if ((*iter)->has_Accel())
            {
                _outStream << \<Accel>\ << (*iter) << \</Accel>\;
            }
            else if ((*iter)->has_Accel2())
            {
                _outStream << \<Accel2>\ << (*iter) << \</Accel2>\;
            }
            else if ((*iter)->has_Row())
            {
                _outStream << \<Row>\ << (*iter) << \</Row>\;
            }
            else if ((*iter)->has_Column())
            {
                _outStream << \<Column>\ << (*iter) << \</Column>\;
            }
            else if ((*iter)->has_Visible())
            {
                _outStream << \<Visible>\ << (*iter)->toString() << \</Visible>\;
            }
            else if ((*iter)->has_RowHidden())
            {
                _outStream << \<RowHidden>\ << (*iter)->toString() << \</RowHidden>\;
            }
            else if ((*iter)->has_ColHidden())
            {
                _outStream << \<ColHidden>\ << (*iter)->toString() << \</ColHidden>\;
            }
            else if ((*iter)->has_VTEdit())
            {
                _outStream << \<VTEdit>\ << (*iter) << \</VTEdit>\;
            }
            else if ((*iter)->has_MultiLine())
            {
                _outStream << \<MultiLine>\ << (*iter)->toString() << \</MultiLine>\;
            }
            else if ((*iter)->has_VScroll())
            {
                _outStream << \<VScroll>\ << (*iter)->toString() << \</VScroll>\;
            }
            else if ((*iter)->has_ValidIds())
            {
                _outStream << \<ValidIds>\ << (*iter)->toString() << \</ValidIds>\;
            }
            else if ((*iter)->has_FmlaRange())
            {
                _outStream << \<FmlaRange>\ << (*iter) << \</FmlaRange>\;
            }
            else if ((*iter)->has_WidthMin())
            {
                _outStream << \<WidthMin>\ << (*iter) << \</WidthMin>\;
            }
            else if ((*iter)->has_Sel())
            {
                _outStream << \<Sel>\ << (*iter) << \</Sel>\;
            }
            else if ((*iter)->has_NoThreeD2())
            {
                _outStream << \<NoThreeD2>\ << (*iter)->toString() << \</NoThreeD2>\;
            }
            else if ((*iter)->has_SelType())
            {
                _outStream << \<SelType>\ << (*iter) << \</SelType>\;
            }
            else if ((*iter)->has_MultiSel())
            {
                _outStream << \<MultiSel>\ << (*iter) << \</MultiSel>\;
            }
            else if ((*iter)->has_LCT())
            {
                _outStream << \<LCT>\ << (*iter) << \</LCT>\;
            }
            else if ((*iter)->has_st())
            {
                _outStream << \<st>\ << (*iter) << \</st>\;
            }
            else if ((*iter)->has_DropStyle())
            {
                _outStream << \<DropStyle>\ << (*iter) << \</DropStyle>\;
            }
            else if ((*iter)->has_Colored())
            {
                _outStream << \<Colored>\ << (*iter)->toString() << \</Colored>\;
            }
            else if ((*iter)->has_DropLines())
            {
                _outStream << \<DropLines>\ << (*iter) << \</DropLines>\;
            }
            else if ((*iter)->has_Checked())
            {
                _outStream << \<Checked>\ << (*iter) << \</Checked>\;
            }
            else if ((*iter)->has_FmlaLink())
            {
                _outStream << \<FmlaLink>\ << (*iter) << \</FmlaLink>\;
            }
            else if ((*iter)->has_FmlaPict())
            {
                _outStream << \<FmlaPict>\ << (*iter) << \</FmlaPict>\;
            }
            else if ((*iter)->has_NoThreeD())
            {
                _outStream << \<NoThreeD>\ << (*iter)->toString() << \</NoThreeD>\;
            }
            else if ((*iter)->has_FirstButton())
            {
                _outStream << \<FirstButton>\ << (*iter)->toString() << \</FirstButton>\;
            }
            else if ((*iter)->has_FmlaGroup())
            {
                _outStream << \<FmlaGroup>\ << (*iter) << \</FmlaGroup>\;
            }
            else if ((*iter)->has_Val())
            {
                _outStream << \<Val>\ << (*iter) << \</Val>\;
            }
            else if ((*iter)->has_Min())
            {
                _outStream << \<Min>\ << (*iter) << \</Min>\;
            }
            else if ((*iter)->has_Max())
            {
                _outStream << \<Max>\ << (*iter) << \</Max>\;
            }
            else if ((*iter)->has_Inc())
            {
                _outStream << \<Inc>\ << (*iter) << \</Inc>\;
            }
            else if ((*iter)->has_Page())
            {
                _outStream << \<Page>\ << (*iter) << \</Page>\;
            }
            else if ((*iter)->has_Horiz())
            {
                _outStream << \<Horiz>\ << (*iter)->toString() << \</Horiz>\;
            }
            else if ((*iter)->has_Dx())
            {
                _outStream << \<Dx>\ << (*iter) << \</Dx>\;
            }
            else if ((*iter)->has_MapOCX())
            {
                _outStream << \<MapOCX>\ << (*iter)->toString() << \</MapOCX>\;
            }
            else if ((*iter)->has_CF())
            {
                _outStream << \<CF>\ << (*iter)->toString() << \</CF>\;
            }
            else if ((*iter)->has_Camera())
            {
                _outStream << \<Camera>\ << (*iter)->toString() << \</Camera>\;
            }
            else if ((*iter)->has_RecalcAlways())
            {
                _outStream << \<RecalcAlways>\ << (*iter)->toString() << \</RecalcAlways>\;
            }
            else if ((*iter)->has_AutoScale())
            {
                _outStream << \<AutoScale>\ << (*iter)->toString() << \</AutoScale>\;
            }
            else if ((*iter)->has_DDE())
            {
                _outStream << \<DDE>\ << (*iter)->toString() << \</DDE>\;
            }
            else if ((*iter)->has_UIObj())
            {
                _outStream << \<UIObj>\ << (*iter)->toString() << \</UIObj>\;
            }
            else if ((*iter)->has_ScriptText())
            {
                _outStream << \<ScriptText>\ << (*iter) << \</ScriptText>\;
            }
            else if ((*iter)->has_ScriptExtended())
            {
                _outStream << \<ScriptExtended>\ << (*iter) << \</ScriptExtended>\;
            }
            else if ((*iter)->has_ScriptLanguage())
            {
                _outStream << \<ScriptLanguage>\ << (*iter) << \</ScriptLanguage>\;
            }
            else if ((*iter)->has_ScriptLocation())
            {
                _outStream << \<ScriptLocation>\ << (*iter) << \</ScriptLocation>\;
            }
            else if ((*iter)->has_FmlaTxbx())
            {
                _outStream << \<FmlaTxbx>\ << (*iter) << \</FmlaTxbx>\;
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ClientData& default_instance(){

    if (!CT_ClientData::default_instance_)
    {
        CT_ClientData::default_instance_ = new CT_ClientData();
    }
    return *CT_ClientData::default_instance_;

        }
        bool has_ObjectType_attr(){

            return m_has_ObjectType_attr;
        
        }
        void set_ObjectType_attr(const ST_ObjectType& _ObjectType_attr ){

            m_has_ObjectType_attr = true;
            m_ObjectType_attr = new ST_ObjectType(_ObjectType_attr);
        
        }
        const ST_ObjectType& ObjectType_attr(){

            if (m_ObjectType_attr)
            {
                return *m_ObjectType_attr;
            }
            return ST_ObjectType::default_instance();
        
        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_ClientData* default_instance_ ;
        bool m_has_ObjectType_attr ;
        ST_ObjectType* m_ObjectType_attr ;
        class ChildGroup_1{
        public:
            bool has_MoveWithCells(){

            return m_has_MoveWithCells;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_MoveWithCells(){

                
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_MoveWithCells = true;
                if (!m_MoveWithCells)
                {
                    m_MoveWithCells = new ns_s::ST_TrueFalseBlank();
                }
                return m_MoveWithCells;
            
            }
            const ns_s::ST_TrueFalseBlank& MoveWithCells(){

            if (m_MoveWithCells)
            {
                return *m_MoveWithCells;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_SizeWithCells(){

            return m_has_SizeWithCells;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_SizeWithCells(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_SizeWithCells = true;
                if (!m_SizeWithCells)
                {
                    m_SizeWithCells = new ns_s::ST_TrueFalseBlank();
                }
                return m_SizeWithCells;
            
            }
            const ns_s::ST_TrueFalseBlank& SizeWithCells(){

            if (m_SizeWithCells)
            {
                return *m_SizeWithCells;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_Anchor(){

        return m_has_Anchor;
    
            }
            void set_Anchor(const string& _Anchor ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Anchor = true;
                string = _Anchor;
            
            }
            const string& Anchor(){

        return type: \string\nname: \m_Anchor\n;
    
            }
            bool has_Locked(){

            return m_has_Locked;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Locked(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Locked = true;
                if (!m_Locked)
                {
                    m_Locked = new ns_s::ST_TrueFalseBlank();
                }
                return m_Locked;
            
            }
            const ns_s::ST_TrueFalseBlank& Locked(){

            if (m_Locked)
            {
                return *m_Locked;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_DefaultSize(){

            return m_has_DefaultSize;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_DefaultSize(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_DefaultSize = true;
                if (!m_DefaultSize)
                {
                    m_DefaultSize = new ns_s::ST_TrueFalseBlank();
                }
                return m_DefaultSize;
            
            }
            const ns_s::ST_TrueFalseBlank& DefaultSize(){

            if (m_DefaultSize)
            {
                return *m_DefaultSize;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_PrintObject(){

            return m_has_PrintObject;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_PrintObject(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_PrintObject = true;
                if (!m_PrintObject)
                {
                    m_PrintObject = new ns_s::ST_TrueFalseBlank();
                }
                return m_PrintObject;
            
            }
            const ns_s::ST_TrueFalseBlank& PrintObject(){

            if (m_PrintObject)
            {
                return *m_PrintObject;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_Disabled(){

            return m_has_Disabled;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Disabled(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Disabled = true;
                if (!m_Disabled)
                {
                    m_Disabled = new ns_s::ST_TrueFalseBlank();
                }
                return m_Disabled;
            
            }
            const ns_s::ST_TrueFalseBlank& Disabled(){

            if (m_Disabled)
            {
                return *m_Disabled;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_AutoFill(){

            return m_has_AutoFill;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_AutoFill(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_AutoFill = true;
                if (!m_AutoFill)
                {
                    m_AutoFill = new ns_s::ST_TrueFalseBlank();
                }
                return m_AutoFill;
            
            }
            const ns_s::ST_TrueFalseBlank& AutoFill(){

            if (m_AutoFill)
            {
                return *m_AutoFill;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_AutoLine(){

            return m_has_AutoLine;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_AutoLine(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_AutoLine = true;
                if (!m_AutoLine)
                {
                    m_AutoLine = new ns_s::ST_TrueFalseBlank();
                }
                return m_AutoLine;
            
            }
            const ns_s::ST_TrueFalseBlank& AutoLine(){

            if (m_AutoLine)
            {
                return *m_AutoLine;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_AutoPict(){

            return m_has_AutoPict;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_AutoPict(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_AutoPict = true;
                if (!m_AutoPict)
                {
                    m_AutoPict = new ns_s::ST_TrueFalseBlank();
                }
                return m_AutoPict;
            
            }
            const ns_s::ST_TrueFalseBlank& AutoPict(){

            if (m_AutoPict)
            {
                return *m_AutoPict;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_FmlaMacro(){

        return m_has_FmlaMacro;
    
            }
            void set_FmlaMacro(const string& _FmlaMacro ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_FmlaMacro = true;
                string = _FmlaMacro;
            
            }
            const string& FmlaMacro(){

        return type: \string\nname: \m_FmlaMacro\n;
    
            }
            bool has_TextHAlign(){

        return m_has_TextHAlign;
    
            }
            void set_TextHAlign(const string& _TextHAlign ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_TextHAlign = true;
                string = _TextHAlign;
            
            }
            const string& TextHAlign(){

        return type: \string\nname: \m_TextHAlign\n;
    
            }
            bool has_TextVAlign(){

        return m_has_TextVAlign;
    
            }
            void set_TextVAlign(const string& _TextVAlign ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_TextVAlign = true;
                string = _TextVAlign;
            
            }
            const string& TextVAlign(){

        return type: \string\nname: \m_TextVAlign\n;
    
            }
            bool has_x(){

            return m_has_x;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_x(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_x = true;
                if (!m_x)
                {
                    m_x = new ns_s::ST_TrueFalseBlank();
                }
                return m_x;
            
            }
            const ns_s::ST_TrueFalseBlank& x(){

            if (m_x)
            {
                return *m_x;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_JustLastX(){

            return m_has_JustLastX;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_JustLastX(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_JustLastX = true;
                if (!m_JustLastX)
                {
                    m_JustLastX = new ns_s::ST_TrueFalseBlank();
                }
                return m_JustLastX;
            
            }
            const ns_s::ST_TrueFalseBlank& JustLastX(){

            if (m_JustLastX)
            {
                return *m_JustLastX;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_SecretEdit(){

            return m_has_SecretEdit;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_SecretEdit(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_SecretEdit = true;
                if (!m_SecretEdit)
                {
                    m_SecretEdit = new ns_s::ST_TrueFalseBlank();
                }
                return m_SecretEdit;
            
            }
            const ns_s::ST_TrueFalseBlank& SecretEdit(){

            if (m_SecretEdit)
            {
                return *m_SecretEdit;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_Default(){

            return m_has_Default;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Default(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Default = true;
                if (!m_Default)
                {
                    m_Default = new ns_s::ST_TrueFalseBlank();
                }
                return m_Default;
            
            }
            const ns_s::ST_TrueFalseBlank& Default(){

            if (m_Default)
            {
                return *m_Default;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_Help(){

            return m_has_Help;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Help(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Help = true;
                if (!m_Help)
                {
                    m_Help = new ns_s::ST_TrueFalseBlank();
                }
                return m_Help;
            
            }
            const ns_s::ST_TrueFalseBlank& Help(){

            if (m_Help)
            {
                return *m_Help;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_Cancel(){

            return m_has_Cancel;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Cancel(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Cancel = true;
                if (!m_Cancel)
                {
                    m_Cancel = new ns_s::ST_TrueFalseBlank();
                }
                return m_Cancel;
            
            }
            const ns_s::ST_TrueFalseBlank& Cancel(){

            if (m_Cancel)
            {
                return *m_Cancel;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_Dismiss(){

            return m_has_Dismiss;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Dismiss(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Dismiss = true;
                if (!m_Dismiss)
                {
                    m_Dismiss = new ns_s::ST_TrueFalseBlank();
                }
                return m_Dismiss;
            
            }
            const ns_s::ST_TrueFalseBlank& Dismiss(){

            if (m_Dismiss)
            {
                return *m_Dismiss;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_Accel(){

        return m_has_Accel;
    
            }
            void set_Accel(const integer& _Accel ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Accel = true;
                integer = _Accel;
            
            }
            const integer& Accel(){

        return type: \integer\nname: \m_Accel\n;
    
            }
            bool has_Accel2(){

        return m_has_Accel2;
    
            }
            void set_Accel2(const integer& _Accel2 ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Accel2 = true;
                integer = _Accel2;
            
            }
            const integer& Accel2(){

        return type: \integer\nname: \m_Accel2\n;
    
            }
            bool has_Row(){

        return m_has_Row;
    
            }
            void set_Row(const integer& _Row ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Row = true;
                integer = _Row;
            
            }
            const integer& Row(){

        return type: \integer\nname: \m_Row\n;
    
            }
            bool has_Column(){

        return m_has_Column;
    
            }
            void set_Column(const integer& _Column ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Column = true;
                integer = _Column;
            
            }
            const integer& Column(){

        return type: \integer\nname: \m_Column\n;
    
            }
            bool has_Visible(){

            return m_has_Visible;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Visible(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Visible = true;
                if (!m_Visible)
                {
                    m_Visible = new ns_s::ST_TrueFalseBlank();
                }
                return m_Visible;
            
            }
            const ns_s::ST_TrueFalseBlank& Visible(){

            if (m_Visible)
            {
                return *m_Visible;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_RowHidden(){

            return m_has_RowHidden;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_RowHidden(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_RowHidden = true;
                if (!m_RowHidden)
                {
                    m_RowHidden = new ns_s::ST_TrueFalseBlank();
                }
                return m_RowHidden;
            
            }
            const ns_s::ST_TrueFalseBlank& RowHidden(){

            if (m_RowHidden)
            {
                return *m_RowHidden;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_ColHidden(){

            return m_has_ColHidden;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_ColHidden(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_ColHidden = true;
                if (!m_ColHidden)
                {
                    m_ColHidden = new ns_s::ST_TrueFalseBlank();
                }
                return m_ColHidden;
            
            }
            const ns_s::ST_TrueFalseBlank& ColHidden(){

            if (m_ColHidden)
            {
                return *m_ColHidden;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_VTEdit(){

        return m_has_VTEdit;
    
            }
            void set_VTEdit(const integer& _VTEdit ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_VTEdit = true;
                integer = _VTEdit;
            
            }
            const integer& VTEdit(){

        return type: \integer\nname: \m_VTEdit\n;
    
            }
            bool has_MultiLine(){

            return m_has_MultiLine;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_MultiLine(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_MultiLine = true;
                if (!m_MultiLine)
                {
                    m_MultiLine = new ns_s::ST_TrueFalseBlank();
                }
                return m_MultiLine;
            
            }
            const ns_s::ST_TrueFalseBlank& MultiLine(){

            if (m_MultiLine)
            {
                return *m_MultiLine;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_VScroll(){

            return m_has_VScroll;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_VScroll(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_VScroll = true;
                if (!m_VScroll)
                {
                    m_VScroll = new ns_s::ST_TrueFalseBlank();
                }
                return m_VScroll;
            
            }
            const ns_s::ST_TrueFalseBlank& VScroll(){

            if (m_VScroll)
            {
                return *m_VScroll;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_ValidIds(){

            return m_has_ValidIds;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_ValidIds(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_ValidIds = true;
                if (!m_ValidIds)
                {
                    m_ValidIds = new ns_s::ST_TrueFalseBlank();
                }
                return m_ValidIds;
            
            }
            const ns_s::ST_TrueFalseBlank& ValidIds(){

            if (m_ValidIds)
            {
                return *m_ValidIds;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_FmlaRange(){

        return m_has_FmlaRange;
    
            }
            void set_FmlaRange(const string& _FmlaRange ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_FmlaRange = true;
                string = _FmlaRange;
            
            }
            const string& FmlaRange(){

        return type: \string\nname: \m_FmlaRange\n;
    
            }
            bool has_WidthMin(){

        return m_has_WidthMin;
    
            }
            void set_WidthMin(const integer& _WidthMin ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_WidthMin = true;
                integer = _WidthMin;
            
            }
            const integer& WidthMin(){

        return type: \integer\nname: \m_WidthMin\n;
    
            }
            bool has_Sel(){

        return m_has_Sel;
    
            }
            void set_Sel(const integer& _Sel ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Sel = true;
                integer = _Sel;
            
            }
            const integer& Sel(){

        return type: \integer\nname: \m_Sel\n;
    
            }
            bool has_NoThreeD2(){

            return m_has_NoThreeD2;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_NoThreeD2(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_NoThreeD2 = true;
                if (!m_NoThreeD2)
                {
                    m_NoThreeD2 = new ns_s::ST_TrueFalseBlank();
                }
                return m_NoThreeD2;
            
            }
            const ns_s::ST_TrueFalseBlank& NoThreeD2(){

            if (m_NoThreeD2)
            {
                return *m_NoThreeD2;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_SelType(){

        return m_has_SelType;
    
            }
            void set_SelType(const string& _SelType ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_SelType = true;
                string = _SelType;
            
            }
            const string& SelType(){

        return type: \string\nname: \m_SelType\n;
    
            }
            bool has_MultiSel(){

        return m_has_MultiSel;
    
            }
            void set_MultiSel(const string& _MultiSel ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_MultiSel = true;
                string = _MultiSel;
            
            }
            const string& MultiSel(){

        return type: \string\nname: \m_MultiSel\n;
    
            }
            bool has_LCT(){

        return m_has_LCT;
    
            }
            void set_LCT(const string& _LCT ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_LCT = true;
                string = _LCT;
            
            }
            const string& LCT(){

        return type: \string\nname: \m_LCT\n;
    
            }
            bool has_st(){

        return m_has_st;
    
            }
            void set_st(const string& _st ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_st = true;
                string = _st;
            
            }
            const string& st(){

        return type: \string\nname: \m_st\n;
    
            }
            bool has_DropStyle(){

        return m_has_DropStyle;
    
            }
            void set_DropStyle(const string& _DropStyle ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_DropStyle = true;
                string = _DropStyle;
            
            }
            const string& DropStyle(){

        return type: \string\nname: \m_DropStyle\n;
    
            }
            bool has_Colored(){

            return m_has_Colored;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Colored(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Colored = true;
                if (!m_Colored)
                {
                    m_Colored = new ns_s::ST_TrueFalseBlank();
                }
                return m_Colored;
            
            }
            const ns_s::ST_TrueFalseBlank& Colored(){

            if (m_Colored)
            {
                return *m_Colored;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_DropLines(){

        return m_has_DropLines;
    
            }
            void set_DropLines(const integer& _DropLines ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_DropLines = true;
                integer = _DropLines;
            
            }
            const integer& DropLines(){

        return type: \integer\nname: \m_DropLines\n;
    
            }
            bool has_Checked(){

        return m_has_Checked;
    
            }
            void set_Checked(const integer& _Checked ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Checked = true;
                integer = _Checked;
            
            }
            const integer& Checked(){

        return type: \integer\nname: \m_Checked\n;
    
            }
            bool has_FmlaLink(){

        return m_has_FmlaLink;
    
            }
            void set_FmlaLink(const string& _FmlaLink ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_FmlaLink = true;
                string = _FmlaLink;
            
            }
            const string& FmlaLink(){

        return type: \string\nname: \m_FmlaLink\n;
    
            }
            bool has_FmlaPict(){

        return m_has_FmlaPict;
    
            }
            void set_FmlaPict(const string& _FmlaPict ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_FmlaPict = true;
                string = _FmlaPict;
            
            }
            const string& FmlaPict(){

        return type: \string\nname: \m_FmlaPict\n;
    
            }
            bool has_NoThreeD(){

            return m_has_NoThreeD;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_NoThreeD(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_NoThreeD = true;
                if (!m_NoThreeD)
                {
                    m_NoThreeD = new ns_s::ST_TrueFalseBlank();
                }
                return m_NoThreeD;
            
            }
            const ns_s::ST_TrueFalseBlank& NoThreeD(){

            if (m_NoThreeD)
            {
                return *m_NoThreeD;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_FirstButton(){

            return m_has_FirstButton;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_FirstButton(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_FirstButton = true;
                if (!m_FirstButton)
                {
                    m_FirstButton = new ns_s::ST_TrueFalseBlank();
                }
                return m_FirstButton;
            
            }
            const ns_s::ST_TrueFalseBlank& FirstButton(){

            if (m_FirstButton)
            {
                return *m_FirstButton;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_FmlaGroup(){

        return m_has_FmlaGroup;
    
            }
            void set_FmlaGroup(const string& _FmlaGroup ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_FmlaGroup = true;
                string = _FmlaGroup;
            
            }
            const string& FmlaGroup(){

        return type: \string\nname: \m_FmlaGroup\n;
    
            }
            bool has_Val(){

        return m_has_Val;
    
            }
            void set_Val(const integer& _Val ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Val = true;
                integer = _Val;
            
            }
            const integer& Val(){

        return type: \integer\nname: \m_Val\n;
    
            }
            bool has_Min(){

        return m_has_Min;
    
            }
            void set_Min(const integer& _Min ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Min = true;
                integer = _Min;
            
            }
            const integer& Min(){

        return type: \integer\nname: \m_Min\n;
    
            }
            bool has_Max(){

        return m_has_Max;
    
            }
            void set_Max(const integer& _Max ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Max = true;
                integer = _Max;
            
            }
            const integer& Max(){

        return type: \integer\nname: \m_Max\n;
    
            }
            bool has_Inc(){

        return m_has_Inc;
    
            }
            void set_Inc(const integer& _Inc ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Inc = true;
                integer = _Inc;
            
            }
            const integer& Inc(){

        return type: \integer\nname: \m_Inc\n;
    
            }
            bool has_Page(){

        return m_has_Page;
    
            }
            void set_Page(const integer& _Page ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Page = true;
                integer = _Page;
            
            }
            const integer& Page(){

        return type: \integer\nname: \m_Page\n;
    
            }
            bool has_Horiz(){

            return m_has_Horiz;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Horiz(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Horiz = true;
                if (!m_Horiz)
                {
                    m_Horiz = new ns_s::ST_TrueFalseBlank();
                }
                return m_Horiz;
            
            }
            const ns_s::ST_TrueFalseBlank& Horiz(){

            if (m_Horiz)
            {
                return *m_Horiz;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_Dx(){

        return m_has_Dx;
    
            }
            void set_Dx(const integer& _Dx ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Dx = true;
                integer = _Dx;
            
            }
            const integer& Dx(){

        return type: \integer\nname: \m_Dx\n;
    
            }
            bool has_MapOCX(){

            return m_has_MapOCX;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_MapOCX(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_MapOCX = true;
                if (!m_MapOCX)
                {
                    m_MapOCX = new ns_s::ST_TrueFalseBlank();
                }
                return m_MapOCX;
            
            }
            const ns_s::ST_TrueFalseBlank& MapOCX(){

            if (m_MapOCX)
            {
                return *m_MapOCX;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_CF(){

            return m_has_CF;
        
            }
            ST_CF* mutable_CF(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_CF = true;
                if (!m_CF)
                {
                    m_CF = new ST_CF();
                }
                return m_CF;
            
            }
            const ST_CF& CF(){

            if (m_CF)
            {
                return *m_CF;
            }
            return ST_CF::default_instance();
        
            }
            bool has_Camera(){

            return m_has_Camera;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_Camera(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_Camera = true;
                if (!m_Camera)
                {
                    m_Camera = new ns_s::ST_TrueFalseBlank();
                }
                return m_Camera;
            
            }
            const ns_s::ST_TrueFalseBlank& Camera(){

            if (m_Camera)
            {
                return *m_Camera;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_RecalcAlways(){

            return m_has_RecalcAlways;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_RecalcAlways(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_RecalcAlways = true;
                if (!m_RecalcAlways)
                {
                    m_RecalcAlways = new ns_s::ST_TrueFalseBlank();
                }
                return m_RecalcAlways;
            
            }
            const ns_s::ST_TrueFalseBlank& RecalcAlways(){

            if (m_RecalcAlways)
            {
                return *m_RecalcAlways;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_AutoScale(){

            return m_has_AutoScale;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_AutoScale(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_AutoScale = true;
                if (!m_AutoScale)
                {
                    m_AutoScale = new ns_s::ST_TrueFalseBlank();
                }
                return m_AutoScale;
            
            }
            const ns_s::ST_TrueFalseBlank& AutoScale(){

            if (m_AutoScale)
            {
                return *m_AutoScale;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_DDE(){

            return m_has_DDE;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_DDE(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_DDE = true;
                if (!m_DDE)
                {
                    m_DDE = new ns_s::ST_TrueFalseBlank();
                }
                return m_DDE;
            
            }
            const ns_s::ST_TrueFalseBlank& DDE(){

            if (m_DDE)
            {
                return *m_DDE;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_UIObj(){

            return m_has_UIObj;
        
            }
            ns_s::ST_TrueFalseBlank* mutable_UIObj(){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_UIObj = true;
                if (!m_UIObj)
                {
                    m_UIObj = new ns_s::ST_TrueFalseBlank();
                }
                return m_UIObj;
            
            }
            const ns_s::ST_TrueFalseBlank& UIObj(){

            if (m_UIObj)
            {
                return *m_UIObj;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
            }
            bool has_ScriptText(){

        return m_has_ScriptText;
    
            }
            void set_ScriptText(const string& _ScriptText ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_ScriptText = true;
                string = _ScriptText;
            
            }
            const string& ScriptText(){

        return type: \string\nname: \m_ScriptText\n;
    
            }
            bool has_ScriptExtended(){

        return m_has_ScriptExtended;
    
            }
            void set_ScriptExtended(const string& _ScriptExtended ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_ScriptExtended = true;
                string = _ScriptExtended;
            
            }
            const string& ScriptExtended(){

        return type: \string\nname: \m_ScriptExtended\n;
    
            }
            bool has_ScriptLanguage(){

        return m_has_ScriptLanguage;
    
            }
            void set_ScriptLanguage(const nonNegativeInteger& _ScriptLanguage ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_ScriptLanguage = true;
                nonNegativeInteger = _ScriptLanguage;
            
            }
            const nonNegativeInteger& ScriptLanguage(){

        return type: 
onNegativeInteger\nname: \m_ScriptLanguage\n;
    
            }
            bool has_ScriptLocation(){

        return m_has_ScriptLocation;
    
            }
            void set_ScriptLocation(const nonNegativeInteger& _ScriptLocation ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_FmlaTxbx = false;
                m_FmlaTxbx.clear();;
            
                m_has_ScriptLocation = true;
                nonNegativeInteger = _ScriptLocation;
            
            }
            const nonNegativeInteger& ScriptLocation(){

        return type: 
onNegativeInteger\nname: \m_ScriptLocation\n;
    
            }
            bool has_FmlaTxbx(){

        return m_has_FmlaTxbx;
    
            }
            void set_FmlaTxbx(const string& _FmlaTxbx ){

                
                m_has_MoveWithCells = false;
                
        if (m_MoveWithCells)
        {
            delete m_MoveWithCells;
            m_MoveWithCells = NULL;
        }
    ;
            
                m_has_SizeWithCells = false;
                
        if (m_SizeWithCells)
        {
            delete m_SizeWithCells;
            m_SizeWithCells = NULL;
        }
    ;
            
                m_has_Anchor = false;
                m_Anchor.clear();;
            
                m_has_Locked = false;
                
        if (m_Locked)
        {
            delete m_Locked;
            m_Locked = NULL;
        }
    ;
            
                m_has_DefaultSize = false;
                
        if (m_DefaultSize)
        {
            delete m_DefaultSize;
            m_DefaultSize = NULL;
        }
    ;
            
                m_has_PrintObject = false;
                
        if (m_PrintObject)
        {
            delete m_PrintObject;
            m_PrintObject = NULL;
        }
    ;
            
                m_has_Disabled = false;
                
        if (m_Disabled)
        {
            delete m_Disabled;
            m_Disabled = NULL;
        }
    ;
            
                m_has_AutoFill = false;
                
        if (m_AutoFill)
        {
            delete m_AutoFill;
            m_AutoFill = NULL;
        }
    ;
            
                m_has_AutoLine = false;
                
        if (m_AutoLine)
        {
            delete m_AutoLine;
            m_AutoLine = NULL;
        }
    ;
            
                m_has_AutoPict = false;
                
        if (m_AutoPict)
        {
            delete m_AutoPict;
            m_AutoPict = NULL;
        }
    ;
            
                m_has_FmlaMacro = false;
                m_FmlaMacro.clear();;
            
                m_has_TextHAlign = false;
                m_TextHAlign.clear();;
            
                m_has_TextVAlign = false;
                m_TextVAlign.clear();;
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    ;
            
                m_has_JustLastX = false;
                
        if (m_JustLastX)
        {
            delete m_JustLastX;
            m_JustLastX = NULL;
        }
    ;
            
                m_has_SecretEdit = false;
                
        if (m_SecretEdit)
        {
            delete m_SecretEdit;
            m_SecretEdit = NULL;
        }
    ;
            
                m_has_Default = false;
                
        if (m_Default)
        {
            delete m_Default;
            m_Default = NULL;
        }
    ;
            
                m_has_Help = false;
                
        if (m_Help)
        {
            delete m_Help;
            m_Help = NULL;
        }
    ;
            
                m_has_Cancel = false;
                
        if (m_Cancel)
        {
            delete m_Cancel;
            m_Cancel = NULL;
        }
    ;
            
                m_has_Dismiss = false;
                
        if (m_Dismiss)
        {
            delete m_Dismiss;
            m_Dismiss = NULL;
        }
    ;
            
                m_has_Accel = false;
                m_Accel = 0;;
            
                m_has_Accel2 = false;
                m_Accel2 = 0;;
            
                m_has_Row = false;
                m_Row = 0;;
            
                m_has_Column = false;
                m_Column = 0;;
            
                m_has_Visible = false;
                
        if (m_Visible)
        {
            delete m_Visible;
            m_Visible = NULL;
        }
    ;
            
                m_has_RowHidden = false;
                
        if (m_RowHidden)
        {
            delete m_RowHidden;
            m_RowHidden = NULL;
        }
    ;
            
                m_has_ColHidden = false;
                
        if (m_ColHidden)
        {
            delete m_ColHidden;
            m_ColHidden = NULL;
        }
    ;
            
                m_has_VTEdit = false;
                m_VTEdit = 0;;
            
                m_has_MultiLine = false;
                
        if (m_MultiLine)
        {
            delete m_MultiLine;
            m_MultiLine = NULL;
        }
    ;
            
                m_has_VScroll = false;
                
        if (m_VScroll)
        {
            delete m_VScroll;
            m_VScroll = NULL;
        }
    ;
            
                m_has_ValidIds = false;
                
        if (m_ValidIds)
        {
            delete m_ValidIds;
            m_ValidIds = NULL;
        }
    ;
            
                m_has_FmlaRange = false;
                m_FmlaRange.clear();;
            
                m_has_WidthMin = false;
                m_WidthMin = 0;;
            
                m_has_Sel = false;
                m_Sel = 0;;
            
                m_has_NoThreeD2 = false;
                
        if (m_NoThreeD2)
        {
            delete m_NoThreeD2;
            m_NoThreeD2 = NULL;
        }
    ;
            
                m_has_SelType = false;
                m_SelType.clear();;
            
                m_has_MultiSel = false;
                m_MultiSel.clear();;
            
                m_has_LCT = false;
                m_LCT.clear();;
            
                m_has_st = false;
                m_st.clear();;
            
                m_has_DropStyle = false;
                m_DropStyle.clear();;
            
                m_has_Colored = false;
                
        if (m_Colored)
        {
            delete m_Colored;
            m_Colored = NULL;
        }
    ;
            
                m_has_DropLines = false;
                m_DropLines = 0;;
            
                m_has_Checked = false;
                m_Checked = 0;;
            
                m_has_FmlaLink = false;
                m_FmlaLink.clear();;
            
                m_has_FmlaPict = false;
                m_FmlaPict.clear();;
            
                m_has_NoThreeD = false;
                
        if (m_NoThreeD)
        {
            delete m_NoThreeD;
            m_NoThreeD = NULL;
        }
    ;
            
                m_has_FirstButton = false;
                
        if (m_FirstButton)
        {
            delete m_FirstButton;
            m_FirstButton = NULL;
        }
    ;
            
                m_has_FmlaGroup = false;
                m_FmlaGroup.clear();;
            
                m_has_Val = false;
                m_Val = 0;;
            
                m_has_Min = false;
                m_Min = 0;;
            
                m_has_Max = false;
                m_Max = 0;;
            
                m_has_Inc = false;
                m_Inc = 0;;
            
                m_has_Page = false;
                m_Page = 0;;
            
                m_has_Horiz = false;
                
        if (m_Horiz)
        {
            delete m_Horiz;
            m_Horiz = NULL;
        }
    ;
            
                m_has_Dx = false;
                m_Dx = 0;;
            
                m_has_MapOCX = false;
                
        if (m_MapOCX)
        {
            delete m_MapOCX;
            m_MapOCX = NULL;
        }
    ;
            
                m_has_CF = false;
                
        if (m_CF)
        {
            delete m_CF;
            m_CF = NULL;
        }
    ;
            
                m_has_Camera = false;
                
        if (m_Camera)
        {
            delete m_Camera;
            m_Camera = NULL;
        }
    ;
            
                m_has_RecalcAlways = false;
                
        if (m_RecalcAlways)
        {
            delete m_RecalcAlways;
            m_RecalcAlways = NULL;
        }
    ;
            
                m_has_AutoScale = false;
                
        if (m_AutoScale)
        {
            delete m_AutoScale;
            m_AutoScale = NULL;
        }
    ;
            
                m_has_DDE = false;
                
        if (m_DDE)
        {
            delete m_DDE;
            m_DDE = NULL;
        }
    ;
            
                m_has_UIObj = false;
                
        if (m_UIObj)
        {
            delete m_UIObj;
            m_UIObj = NULL;
        }
    ;
            
                m_has_ScriptText = false;
                m_ScriptText.clear();;
            
                m_has_ScriptExtended = false;
                m_ScriptExtended.clear();;
            
                m_has_ScriptLanguage = false;
                m_ScriptLanguage = 0;;
            
                m_has_ScriptLocation = false;
                m_ScriptLocation = 0;;
            
                m_has_FmlaTxbx = true;
                string = _FmlaTxbx;
            
            }
            const string& FmlaTxbx(){

        return type: \string\nname: \m_FmlaTxbx\n;
    
            }

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
        void toXml(ostream& _outStream ){

        CT_ClientData::toXml(\ClientData\, _outStream);
    
        }

    private:

    }

}