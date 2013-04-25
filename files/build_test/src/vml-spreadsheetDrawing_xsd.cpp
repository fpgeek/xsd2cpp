#include "vml-spreadsheetDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_x {
 using namespace std;

    // Element

    // Attribute

    // ST_CF
    ST_CF::ST_CF()
    :m_has_string(false),
    m_string("")
    {
    }
    ST_CF::ST_CF(const XSD::string_& _string)
    :m_has_string(true)
    {
    
    set_string(m_string);
    }
    bool ST_CF::has_string() const
    {    
    return m_has_string;
    }

    void ST_CF::set_string(const XSD::string_& _string)
    {    
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_CF::get_string() const
    {    
    return m_string;
    }

    void ST_CF::clear()
    {    
    m_has_string = false;
    m_string.clear();;
    }

    void ST_CF::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
    }

    const ST_CF& ST_CF::default_instance()
    {    
    if (!ST_CF::default_instance_)
    {
        ST_CF::default_instance_ = new ST_CF();
    }
    return *ST_CF::default_instance_;
    }

    std::string ST_CF::toString() const
    {    
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
    }


    // ST_ObjectType
    ST_ObjectType::ST_ObjectType()
    :m_has_type(false)
    {
    }
    ST_ObjectType::ST_ObjectType(const ST_ObjectType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    bool ST_ObjectType::has_type() const
    {    
    return m_has_type;
    }

    void ST_ObjectType::set_type(const ST_ObjectType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ObjectType::Type& ST_ObjectType::get_type() const
    {    
                return m_type;
                }

    std::string ST_ObjectType::toString() const
    {    
    return ST_ObjectType::TypeStrList[m_type];
    }

    void ST_ObjectType::clear()
    {    
    m_has_type = false;
    }

    void ST_ObjectType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ObjectType& ST_ObjectType::default_instance()
    {    
    if (!ST_ObjectType::default_instance_)
    {
        ST_ObjectType::default_instance_ = new ST_ObjectType();
    }
    return *ST_ObjectType::default_instance_;
    }

    const std::string ST_ObjectType::TypeStrList[] =
    {
        "Button",
        "Checkbox",
        "Dialog",
        "Drop",
        "Edit",
        "GBox",
        "Label",
        "LineA",
        "List",
        "Movie",
        "Note",
        "Pict",
        "Radio",
        "RectA",
        "Scroll",
        "Spin",
        "Shape",
        "Group",
        "Rect"
    };

    // CT_ClientData
    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_MoveWithCells()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_MoveWithCells();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_SizeWithCells()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_SizeWithCells();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_Anchor(const XSD::string_& _Anchor)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Anchor(_Anchor);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Locked()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Locked();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_DefaultSize()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_DefaultSize();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_PrintObject()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_PrintObject();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Disabled()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Disabled();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_AutoFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_AutoFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_AutoLine()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_AutoLine();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_AutoPict()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_AutoPict();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_FmlaMacro(const XSD::string_& _FmlaMacro)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaMacro(_FmlaMacro);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_TextHAlign(const XSD::string_& _TextHAlign)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_TextHAlign(_TextHAlign);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_TextVAlign(const XSD::string_& _TextVAlign)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_TextVAlign(_TextVAlign);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_x()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_x();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_JustLastX()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_JustLastX();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_SecretEdit()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_SecretEdit();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Default()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Default();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Help()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Help();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Cancel()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Cancel();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Dismiss()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Dismiss();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_Accel(const XSD::integer_& _Accel)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Accel(_Accel);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Accel2(const XSD::integer_& _Accel2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Accel2(_Accel2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Row(const XSD::integer_& _Row)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Row(_Row);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Column(const XSD::integer_& _Column)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Column(_Column);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Visible()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Visible();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_RowHidden()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_RowHidden();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_ColHidden()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_ColHidden();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_VTEdit(const XSD::integer_& _VTEdit)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_VTEdit(_VTEdit);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_MultiLine()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_MultiLine();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_VScroll()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_VScroll();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_ValidIds()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_ValidIds();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_FmlaRange(const XSD::string_& _FmlaRange)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaRange(_FmlaRange);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_WidthMin(const XSD::integer_& _WidthMin)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_WidthMin(_WidthMin);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Sel(const XSD::integer_& _Sel)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Sel(_Sel);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_NoThreeD2()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_NoThreeD2();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_SelType(const XSD::string_& _SelType)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_SelType(_SelType);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_MultiSel(const XSD::string_& _MultiSel)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_MultiSel(_MultiSel);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_LCT(const XSD::string_& _LCT)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_LCT(_LCT);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_st(const XSD::string_& _st)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_st(_st);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_DropStyle(const XSD::string_& _DropStyle)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_DropStyle(_DropStyle);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Colored()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Colored();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_DropLines(const XSD::integer_& _DropLines)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_DropLines(_DropLines);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Checked(const XSD::integer_& _Checked)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Checked(_Checked);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_FmlaLink(const XSD::string_& _FmlaLink)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaLink(_FmlaLink);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_FmlaPict(const XSD::string_& _FmlaPict)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaPict(_FmlaPict);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_NoThreeD()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_NoThreeD();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_FirstButton()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_FirstButton();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_FmlaGroup(const XSD::string_& _FmlaGroup)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaGroup(_FmlaGroup);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Val(const XSD::integer_& _Val)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Val(_Val);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Min(const XSD::integer_& _Min)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Min(_Min);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Max(const XSD::integer_& _Max)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Max(_Max);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Inc(const XSD::integer_& _Inc)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Inc(_Inc);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_Page(const XSD::integer_& _Page)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Page(_Page);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Horiz()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Horiz();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_Dx(const XSD::integer_& _Dx)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Dx(_Dx);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_MapOCX()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_MapOCX();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ST_CF* CT_ClientData::add_CF()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_CF* pNewChild = pChildGroup->mutable_CF();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_Camera()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Camera();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_RecalcAlways()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_RecalcAlways();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_AutoScale()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_AutoScale();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_DDE()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_DDE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_s_UIObj()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_UIObj();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_ScriptText(const XSD::string_& _ScriptText)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ScriptText(_ScriptText);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_ScriptExtended(const XSD::string_& _ScriptExtended)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ScriptExtended(_ScriptExtended);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_ScriptLanguage(const XSD::nonNegativeInteger_& _ScriptLanguage)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ScriptLanguage(_ScriptLanguage);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_ScriptLocation(const XSD::nonNegativeInteger_& _ScriptLocation)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ScriptLocation(_ScriptLocation);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::add_FmlaTxbx(const XSD::string_& _FmlaTxbx)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaTxbx(_FmlaTxbx);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_ClientData::clear()
    {    
    m_has_ObjectType_attr = false;
    
    if (m_ObjectType_attr)
    {
        delete m_ObjectType_attr;
        m_ObjectType_attr = NULL;
    }
    
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_ClientData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_ObjectType_attr)
    {
        m_ObjectType_attr->toXmlAttr("ObjectType", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_s_MoveWithCells())
            {
                _outStream << "<x:MoveWithCells>" << (*iter)->get_s_MoveWithCells().toString() << "</x:MoveWithCells>";
            }
            else if ((*iter)->has_s_SizeWithCells())
            {
                _outStream << "<x:SizeWithCells>" << (*iter)->get_s_SizeWithCells().toString() << "</x:SizeWithCells>";
            }
            else if ((*iter)->has_Anchor())
            {
                _outStream << "<x:Anchor>" << (*iter)->get_Anchor() << "</x:Anchor>";
            }
            else if ((*iter)->has_s_Locked())
            {
                _outStream << "<x:Locked>" << (*iter)->get_s_Locked().toString() << "</x:Locked>";
            }
            else if ((*iter)->has_s_DefaultSize())
            {
                _outStream << "<x:DefaultSize>" << (*iter)->get_s_DefaultSize().toString() << "</x:DefaultSize>";
            }
            else if ((*iter)->has_s_PrintObject())
            {
                _outStream << "<x:PrintObject>" << (*iter)->get_s_PrintObject().toString() << "</x:PrintObject>";
            }
            else if ((*iter)->has_s_Disabled())
            {
                _outStream << "<x:Disabled>" << (*iter)->get_s_Disabled().toString() << "</x:Disabled>";
            }
            else if ((*iter)->has_s_AutoFill())
            {
                _outStream << "<x:AutoFill>" << (*iter)->get_s_AutoFill().toString() << "</x:AutoFill>";
            }
            else if ((*iter)->has_s_AutoLine())
            {
                _outStream << "<x:AutoLine>" << (*iter)->get_s_AutoLine().toString() << "</x:AutoLine>";
            }
            else if ((*iter)->has_s_AutoPict())
            {
                _outStream << "<x:AutoPict>" << (*iter)->get_s_AutoPict().toString() << "</x:AutoPict>";
            }
            else if ((*iter)->has_FmlaMacro())
            {
                _outStream << "<x:FmlaMacro>" << (*iter)->get_FmlaMacro() << "</x:FmlaMacro>";
            }
            else if ((*iter)->has_TextHAlign())
            {
                _outStream << "<x:TextHAlign>" << (*iter)->get_TextHAlign() << "</x:TextHAlign>";
            }
            else if ((*iter)->has_TextVAlign())
            {
                _outStream << "<x:TextVAlign>" << (*iter)->get_TextVAlign() << "</x:TextVAlign>";
            }
            else if ((*iter)->has_s_x())
            {
                _outStream << "<x:x>" << (*iter)->get_s_x().toString() << "</x:x>";
            }
            else if ((*iter)->has_s_JustLastX())
            {
                _outStream << "<x:JustLastX>" << (*iter)->get_s_JustLastX().toString() << "</x:JustLastX>";
            }
            else if ((*iter)->has_s_SecretEdit())
            {
                _outStream << "<x:SecretEdit>" << (*iter)->get_s_SecretEdit().toString() << "</x:SecretEdit>";
            }
            else if ((*iter)->has_s_Default())
            {
                _outStream << "<x:Default>" << (*iter)->get_s_Default().toString() << "</x:Default>";
            }
            else if ((*iter)->has_s_Help())
            {
                _outStream << "<x:Help>" << (*iter)->get_s_Help().toString() << "</x:Help>";
            }
            else if ((*iter)->has_s_Cancel())
            {
                _outStream << "<x:Cancel>" << (*iter)->get_s_Cancel().toString() << "</x:Cancel>";
            }
            else if ((*iter)->has_s_Dismiss())
            {
                _outStream << "<x:Dismiss>" << (*iter)->get_s_Dismiss().toString() << "</x:Dismiss>";
            }
            else if ((*iter)->has_Accel())
            {
                _outStream << "<x:Accel>" << (*iter)->get_Accel() << "</x:Accel>";
            }
            else if ((*iter)->has_Accel2())
            {
                _outStream << "<x:Accel2>" << (*iter)->get_Accel2() << "</x:Accel2>";
            }
            else if ((*iter)->has_Row())
            {
                _outStream << "<x:Row>" << (*iter)->get_Row() << "</x:Row>";
            }
            else if ((*iter)->has_Column())
            {
                _outStream << "<x:Column>" << (*iter)->get_Column() << "</x:Column>";
            }
            else if ((*iter)->has_s_Visible())
            {
                _outStream << "<x:Visible>" << (*iter)->get_s_Visible().toString() << "</x:Visible>";
            }
            else if ((*iter)->has_s_RowHidden())
            {
                _outStream << "<x:RowHidden>" << (*iter)->get_s_RowHidden().toString() << "</x:RowHidden>";
            }
            else if ((*iter)->has_s_ColHidden())
            {
                _outStream << "<x:ColHidden>" << (*iter)->get_s_ColHidden().toString() << "</x:ColHidden>";
            }
            else if ((*iter)->has_VTEdit())
            {
                _outStream << "<x:VTEdit>" << (*iter)->get_VTEdit() << "</x:VTEdit>";
            }
            else if ((*iter)->has_s_MultiLine())
            {
                _outStream << "<x:MultiLine>" << (*iter)->get_s_MultiLine().toString() << "</x:MultiLine>";
            }
            else if ((*iter)->has_s_VScroll())
            {
                _outStream << "<x:VScroll>" << (*iter)->get_s_VScroll().toString() << "</x:VScroll>";
            }
            else if ((*iter)->has_s_ValidIds())
            {
                _outStream << "<x:ValidIds>" << (*iter)->get_s_ValidIds().toString() << "</x:ValidIds>";
            }
            else if ((*iter)->has_FmlaRange())
            {
                _outStream << "<x:FmlaRange>" << (*iter)->get_FmlaRange() << "</x:FmlaRange>";
            }
            else if ((*iter)->has_WidthMin())
            {
                _outStream << "<x:WidthMin>" << (*iter)->get_WidthMin() << "</x:WidthMin>";
            }
            else if ((*iter)->has_Sel())
            {
                _outStream << "<x:Sel>" << (*iter)->get_Sel() << "</x:Sel>";
            }
            else if ((*iter)->has_s_NoThreeD2())
            {
                _outStream << "<x:NoThreeD2>" << (*iter)->get_s_NoThreeD2().toString() << "</x:NoThreeD2>";
            }
            else if ((*iter)->has_SelType())
            {
                _outStream << "<x:SelType>" << (*iter)->get_SelType() << "</x:SelType>";
            }
            else if ((*iter)->has_MultiSel())
            {
                _outStream << "<x:MultiSel>" << (*iter)->get_MultiSel() << "</x:MultiSel>";
            }
            else if ((*iter)->has_LCT())
            {
                _outStream << "<x:LCT>" << (*iter)->get_LCT() << "</x:LCT>";
            }
            else if ((*iter)->has_st())
            {
                _outStream << "<x:st>" << (*iter)->get_st() << "</x:st>";
            }
            else if ((*iter)->has_DropStyle())
            {
                _outStream << "<x:DropStyle>" << (*iter)->get_DropStyle() << "</x:DropStyle>";
            }
            else if ((*iter)->has_s_Colored())
            {
                _outStream << "<x:Colored>" << (*iter)->get_s_Colored().toString() << "</x:Colored>";
            }
            else if ((*iter)->has_DropLines())
            {
                _outStream << "<x:DropLines>" << (*iter)->get_DropLines() << "</x:DropLines>";
            }
            else if ((*iter)->has_Checked())
            {
                _outStream << "<x:Checked>" << (*iter)->get_Checked() << "</x:Checked>";
            }
            else if ((*iter)->has_FmlaLink())
            {
                _outStream << "<x:FmlaLink>" << (*iter)->get_FmlaLink() << "</x:FmlaLink>";
            }
            else if ((*iter)->has_FmlaPict())
            {
                _outStream << "<x:FmlaPict>" << (*iter)->get_FmlaPict() << "</x:FmlaPict>";
            }
            else if ((*iter)->has_s_NoThreeD())
            {
                _outStream << "<x:NoThreeD>" << (*iter)->get_s_NoThreeD().toString() << "</x:NoThreeD>";
            }
            else if ((*iter)->has_s_FirstButton())
            {
                _outStream << "<x:FirstButton>" << (*iter)->get_s_FirstButton().toString() << "</x:FirstButton>";
            }
            else if ((*iter)->has_FmlaGroup())
            {
                _outStream << "<x:FmlaGroup>" << (*iter)->get_FmlaGroup() << "</x:FmlaGroup>";
            }
            else if ((*iter)->has_Val())
            {
                _outStream << "<x:Val>" << (*iter)->get_Val() << "</x:Val>";
            }
            else if ((*iter)->has_Min())
            {
                _outStream << "<x:Min>" << (*iter)->get_Min() << "</x:Min>";
            }
            else if ((*iter)->has_Max())
            {
                _outStream << "<x:Max>" << (*iter)->get_Max() << "</x:Max>";
            }
            else if ((*iter)->has_Inc())
            {
                _outStream << "<x:Inc>" << (*iter)->get_Inc() << "</x:Inc>";
            }
            else if ((*iter)->has_Page())
            {
                _outStream << "<x:Page>" << (*iter)->get_Page() << "</x:Page>";
            }
            else if ((*iter)->has_s_Horiz())
            {
                _outStream << "<x:Horiz>" << (*iter)->get_s_Horiz().toString() << "</x:Horiz>";
            }
            else if ((*iter)->has_Dx())
            {
                _outStream << "<x:Dx>" << (*iter)->get_Dx() << "</x:Dx>";
            }
            else if ((*iter)->has_s_MapOCX())
            {
                _outStream << "<x:MapOCX>" << (*iter)->get_s_MapOCX().toString() << "</x:MapOCX>";
            }
            else if ((*iter)->has_CF())
            {
                _outStream << "<x:CF>" << (*iter)->get_CF().toString() << "</x:CF>";
            }
            else if ((*iter)->has_s_Camera())
            {
                _outStream << "<x:Camera>" << (*iter)->get_s_Camera().toString() << "</x:Camera>";
            }
            else if ((*iter)->has_s_RecalcAlways())
            {
                _outStream << "<x:RecalcAlways>" << (*iter)->get_s_RecalcAlways().toString() << "</x:RecalcAlways>";
            }
            else if ((*iter)->has_s_AutoScale())
            {
                _outStream << "<x:AutoScale>" << (*iter)->get_s_AutoScale().toString() << "</x:AutoScale>";
            }
            else if ((*iter)->has_s_DDE())
            {
                _outStream << "<x:DDE>" << (*iter)->get_s_DDE().toString() << "</x:DDE>";
            }
            else if ((*iter)->has_s_UIObj())
            {
                _outStream << "<x:UIObj>" << (*iter)->get_s_UIObj().toString() << "</x:UIObj>";
            }
            else if ((*iter)->has_ScriptText())
            {
                _outStream << "<x:ScriptText>" << (*iter)->get_ScriptText() << "</x:ScriptText>";
            }
            else if ((*iter)->has_ScriptExtended())
            {
                _outStream << "<x:ScriptExtended>" << (*iter)->get_ScriptExtended() << "</x:ScriptExtended>";
            }
            else if ((*iter)->has_ScriptLanguage())
            {
                _outStream << "<x:ScriptLanguage>" << (*iter)->get_ScriptLanguage() << "</x:ScriptLanguage>";
            }
            else if ((*iter)->has_ScriptLocation())
            {
                _outStream << "<x:ScriptLocation>" << (*iter)->get_ScriptLocation() << "</x:ScriptLocation>";
            }
            else if ((*iter)->has_FmlaTxbx())
            {
                _outStream << "<x:FmlaTxbx>" << (*iter)->get_FmlaTxbx() << "</x:FmlaTxbx>";
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_ClientData& CT_ClientData::default_instance()
    {    
    if (!CT_ClientData::default_instance_)
    {
        CT_ClientData::default_instance_ = new CT_ClientData();
    }
    return *CT_ClientData::default_instance_;
    }

    bool CT_ClientData::has_ObjectType_attr() const
    {    
    return m_has_ObjectType_attr;
    }

    void CT_ClientData::set_ObjectType_attr(const ST_ObjectType& _ObjectType_attr)
    {    
    m_has_ObjectType_attr = true;
    m_ObjectType_attr = new ST_ObjectType(_ObjectType_attr);
    }

    const ST_ObjectType& CT_ClientData::get_ObjectType_attr() const
    {    
    if (m_ObjectType_attr)
    {
        return *m_ObjectType_attr;
    }
    return ST_ObjectType::default_instance();
    }


    // ClientData_element
    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_MoveWithCells()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_MoveWithCells();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_SizeWithCells()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_SizeWithCells();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_Anchor(const XSD::string_& _Anchor)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Anchor(_Anchor);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Locked()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Locked();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_DefaultSize()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_DefaultSize();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_PrintObject()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_PrintObject();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Disabled()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Disabled();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_AutoFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_AutoFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_AutoLine()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_AutoLine();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_AutoPict()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_AutoPict();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_FmlaMacro(const XSD::string_& _FmlaMacro)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaMacro(_FmlaMacro);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_TextHAlign(const XSD::string_& _TextHAlign)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_TextHAlign(_TextHAlign);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_TextVAlign(const XSD::string_& _TextVAlign)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_TextVAlign(_TextVAlign);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_x()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_x();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_JustLastX()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_JustLastX();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_SecretEdit()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_SecretEdit();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Default()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Default();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Help()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Help();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Cancel()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Cancel();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Dismiss()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Dismiss();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_Accel(const XSD::integer_& _Accel)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Accel(_Accel);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Accel2(const XSD::integer_& _Accel2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Accel2(_Accel2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Row(const XSD::integer_& _Row)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Row(_Row);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Column(const XSD::integer_& _Column)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Column(_Column);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Visible()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Visible();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_RowHidden()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_RowHidden();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_ColHidden()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_ColHidden();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_VTEdit(const XSD::integer_& _VTEdit)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_VTEdit(_VTEdit);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_MultiLine()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_MultiLine();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_VScroll()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_VScroll();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_ValidIds()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_ValidIds();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_FmlaRange(const XSD::string_& _FmlaRange)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaRange(_FmlaRange);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_WidthMin(const XSD::integer_& _WidthMin)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_WidthMin(_WidthMin);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Sel(const XSD::integer_& _Sel)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Sel(_Sel);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_NoThreeD2()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_NoThreeD2();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_SelType(const XSD::string_& _SelType)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_SelType(_SelType);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_MultiSel(const XSD::string_& _MultiSel)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_MultiSel(_MultiSel);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_LCT(const XSD::string_& _LCT)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_LCT(_LCT);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_st(const XSD::string_& _st)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_st(_st);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_DropStyle(const XSD::string_& _DropStyle)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_DropStyle(_DropStyle);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Colored()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Colored();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_DropLines(const XSD::integer_& _DropLines)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_DropLines(_DropLines);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Checked(const XSD::integer_& _Checked)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Checked(_Checked);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_FmlaLink(const XSD::string_& _FmlaLink)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaLink(_FmlaLink);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_FmlaPict(const XSD::string_& _FmlaPict)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaPict(_FmlaPict);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_NoThreeD()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_NoThreeD();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_FirstButton()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_FirstButton();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_FmlaGroup(const XSD::string_& _FmlaGroup)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaGroup(_FmlaGroup);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Val(const XSD::integer_& _Val)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Val(_Val);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Min(const XSD::integer_& _Min)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Min(_Min);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Max(const XSD::integer_& _Max)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Max(_Max);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Inc(const XSD::integer_& _Inc)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Inc(_Inc);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_Page(const XSD::integer_& _Page)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Page(_Page);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Horiz()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Horiz();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_Dx(const XSD::integer_& _Dx)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Dx(_Dx);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_MapOCX()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_MapOCX();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ST_CF* ClientData_element::add_CF()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_CF* pNewChild = pChildGroup->mutable_CF();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_Camera()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_Camera();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_RecalcAlways()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_RecalcAlways();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_AutoScale()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_AutoScale();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_DDE()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_DDE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_s_UIObj()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_s_UIObj();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_ScriptText(const XSD::string_& _ScriptText)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ScriptText(_ScriptText);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_ScriptExtended(const XSD::string_& _ScriptExtended)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ScriptExtended(_ScriptExtended);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_ScriptLanguage(const XSD::nonNegativeInteger_& _ScriptLanguage)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ScriptLanguage(_ScriptLanguage);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_ScriptLocation(const XSD::nonNegativeInteger_& _ScriptLocation)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ScriptLocation(_ScriptLocation);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::add_FmlaTxbx(const XSD::string_& _FmlaTxbx)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_FmlaTxbx(_FmlaTxbx);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void ClientData_element::clear()
    {    
    m_has_ObjectType_attr = false;
    
    if (m_ObjectType_attr)
    {
        delete m_ObjectType_attr;
        m_ObjectType_attr = NULL;
    }
    
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void ClientData_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<x:ClientData";
    
    _outStream << " " << "xmlns:x=\"urn:schemas-microsoft-com:office:excel\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    if (m_has_ObjectType_attr)
    {
        m_ObjectType_attr->toXmlAttr("ObjectType", _outStream);
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_s_MoveWithCells())
            {
                _outStream << "<x:MoveWithCells>" << (*iter)->get_s_MoveWithCells().toString() << "</x:MoveWithCells>";
            }
            else if ((*iter)->has_s_SizeWithCells())
            {
                _outStream << "<x:SizeWithCells>" << (*iter)->get_s_SizeWithCells().toString() << "</x:SizeWithCells>";
            }
            else if ((*iter)->has_Anchor())
            {
                _outStream << "<x:Anchor>" << (*iter)->get_Anchor() << "</x:Anchor>";
            }
            else if ((*iter)->has_s_Locked())
            {
                _outStream << "<x:Locked>" << (*iter)->get_s_Locked().toString() << "</x:Locked>";
            }
            else if ((*iter)->has_s_DefaultSize())
            {
                _outStream << "<x:DefaultSize>" << (*iter)->get_s_DefaultSize().toString() << "</x:DefaultSize>";
            }
            else if ((*iter)->has_s_PrintObject())
            {
                _outStream << "<x:PrintObject>" << (*iter)->get_s_PrintObject().toString() << "</x:PrintObject>";
            }
            else if ((*iter)->has_s_Disabled())
            {
                _outStream << "<x:Disabled>" << (*iter)->get_s_Disabled().toString() << "</x:Disabled>";
            }
            else if ((*iter)->has_s_AutoFill())
            {
                _outStream << "<x:AutoFill>" << (*iter)->get_s_AutoFill().toString() << "</x:AutoFill>";
            }
            else if ((*iter)->has_s_AutoLine())
            {
                _outStream << "<x:AutoLine>" << (*iter)->get_s_AutoLine().toString() << "</x:AutoLine>";
            }
            else if ((*iter)->has_s_AutoPict())
            {
                _outStream << "<x:AutoPict>" << (*iter)->get_s_AutoPict().toString() << "</x:AutoPict>";
            }
            else if ((*iter)->has_FmlaMacro())
            {
                _outStream << "<x:FmlaMacro>" << (*iter)->get_FmlaMacro() << "</x:FmlaMacro>";
            }
            else if ((*iter)->has_TextHAlign())
            {
                _outStream << "<x:TextHAlign>" << (*iter)->get_TextHAlign() << "</x:TextHAlign>";
            }
            else if ((*iter)->has_TextVAlign())
            {
                _outStream << "<x:TextVAlign>" << (*iter)->get_TextVAlign() << "</x:TextVAlign>";
            }
            else if ((*iter)->has_s_x())
            {
                _outStream << "<x:x>" << (*iter)->get_s_x().toString() << "</x:x>";
            }
            else if ((*iter)->has_s_JustLastX())
            {
                _outStream << "<x:JustLastX>" << (*iter)->get_s_JustLastX().toString() << "</x:JustLastX>";
            }
            else if ((*iter)->has_s_SecretEdit())
            {
                _outStream << "<x:SecretEdit>" << (*iter)->get_s_SecretEdit().toString() << "</x:SecretEdit>";
            }
            else if ((*iter)->has_s_Default())
            {
                _outStream << "<x:Default>" << (*iter)->get_s_Default().toString() << "</x:Default>";
            }
            else if ((*iter)->has_s_Help())
            {
                _outStream << "<x:Help>" << (*iter)->get_s_Help().toString() << "</x:Help>";
            }
            else if ((*iter)->has_s_Cancel())
            {
                _outStream << "<x:Cancel>" << (*iter)->get_s_Cancel().toString() << "</x:Cancel>";
            }
            else if ((*iter)->has_s_Dismiss())
            {
                _outStream << "<x:Dismiss>" << (*iter)->get_s_Dismiss().toString() << "</x:Dismiss>";
            }
            else if ((*iter)->has_Accel())
            {
                _outStream << "<x:Accel>" << (*iter)->get_Accel() << "</x:Accel>";
            }
            else if ((*iter)->has_Accel2())
            {
                _outStream << "<x:Accel2>" << (*iter)->get_Accel2() << "</x:Accel2>";
            }
            else if ((*iter)->has_Row())
            {
                _outStream << "<x:Row>" << (*iter)->get_Row() << "</x:Row>";
            }
            else if ((*iter)->has_Column())
            {
                _outStream << "<x:Column>" << (*iter)->get_Column() << "</x:Column>";
            }
            else if ((*iter)->has_s_Visible())
            {
                _outStream << "<x:Visible>" << (*iter)->get_s_Visible().toString() << "</x:Visible>";
            }
            else if ((*iter)->has_s_RowHidden())
            {
                _outStream << "<x:RowHidden>" << (*iter)->get_s_RowHidden().toString() << "</x:RowHidden>";
            }
            else if ((*iter)->has_s_ColHidden())
            {
                _outStream << "<x:ColHidden>" << (*iter)->get_s_ColHidden().toString() << "</x:ColHidden>";
            }
            else if ((*iter)->has_VTEdit())
            {
                _outStream << "<x:VTEdit>" << (*iter)->get_VTEdit() << "</x:VTEdit>";
            }
            else if ((*iter)->has_s_MultiLine())
            {
                _outStream << "<x:MultiLine>" << (*iter)->get_s_MultiLine().toString() << "</x:MultiLine>";
            }
            else if ((*iter)->has_s_VScroll())
            {
                _outStream << "<x:VScroll>" << (*iter)->get_s_VScroll().toString() << "</x:VScroll>";
            }
            else if ((*iter)->has_s_ValidIds())
            {
                _outStream << "<x:ValidIds>" << (*iter)->get_s_ValidIds().toString() << "</x:ValidIds>";
            }
            else if ((*iter)->has_FmlaRange())
            {
                _outStream << "<x:FmlaRange>" << (*iter)->get_FmlaRange() << "</x:FmlaRange>";
            }
            else if ((*iter)->has_WidthMin())
            {
                _outStream << "<x:WidthMin>" << (*iter)->get_WidthMin() << "</x:WidthMin>";
            }
            else if ((*iter)->has_Sel())
            {
                _outStream << "<x:Sel>" << (*iter)->get_Sel() << "</x:Sel>";
            }
            else if ((*iter)->has_s_NoThreeD2())
            {
                _outStream << "<x:NoThreeD2>" << (*iter)->get_s_NoThreeD2().toString() << "</x:NoThreeD2>";
            }
            else if ((*iter)->has_SelType())
            {
                _outStream << "<x:SelType>" << (*iter)->get_SelType() << "</x:SelType>";
            }
            else if ((*iter)->has_MultiSel())
            {
                _outStream << "<x:MultiSel>" << (*iter)->get_MultiSel() << "</x:MultiSel>";
            }
            else if ((*iter)->has_LCT())
            {
                _outStream << "<x:LCT>" << (*iter)->get_LCT() << "</x:LCT>";
            }
            else if ((*iter)->has_st())
            {
                _outStream << "<x:st>" << (*iter)->get_st() << "</x:st>";
            }
            else if ((*iter)->has_DropStyle())
            {
                _outStream << "<x:DropStyle>" << (*iter)->get_DropStyle() << "</x:DropStyle>";
            }
            else if ((*iter)->has_s_Colored())
            {
                _outStream << "<x:Colored>" << (*iter)->get_s_Colored().toString() << "</x:Colored>";
            }
            else if ((*iter)->has_DropLines())
            {
                _outStream << "<x:DropLines>" << (*iter)->get_DropLines() << "</x:DropLines>";
            }
            else if ((*iter)->has_Checked())
            {
                _outStream << "<x:Checked>" << (*iter)->get_Checked() << "</x:Checked>";
            }
            else if ((*iter)->has_FmlaLink())
            {
                _outStream << "<x:FmlaLink>" << (*iter)->get_FmlaLink() << "</x:FmlaLink>";
            }
            else if ((*iter)->has_FmlaPict())
            {
                _outStream << "<x:FmlaPict>" << (*iter)->get_FmlaPict() << "</x:FmlaPict>";
            }
            else if ((*iter)->has_s_NoThreeD())
            {
                _outStream << "<x:NoThreeD>" << (*iter)->get_s_NoThreeD().toString() << "</x:NoThreeD>";
            }
            else if ((*iter)->has_s_FirstButton())
            {
                _outStream << "<x:FirstButton>" << (*iter)->get_s_FirstButton().toString() << "</x:FirstButton>";
            }
            else if ((*iter)->has_FmlaGroup())
            {
                _outStream << "<x:FmlaGroup>" << (*iter)->get_FmlaGroup() << "</x:FmlaGroup>";
            }
            else if ((*iter)->has_Val())
            {
                _outStream << "<x:Val>" << (*iter)->get_Val() << "</x:Val>";
            }
            else if ((*iter)->has_Min())
            {
                _outStream << "<x:Min>" << (*iter)->get_Min() << "</x:Min>";
            }
            else if ((*iter)->has_Max())
            {
                _outStream << "<x:Max>" << (*iter)->get_Max() << "</x:Max>";
            }
            else if ((*iter)->has_Inc())
            {
                _outStream << "<x:Inc>" << (*iter)->get_Inc() << "</x:Inc>";
            }
            else if ((*iter)->has_Page())
            {
                _outStream << "<x:Page>" << (*iter)->get_Page() << "</x:Page>";
            }
            else if ((*iter)->has_s_Horiz())
            {
                _outStream << "<x:Horiz>" << (*iter)->get_s_Horiz().toString() << "</x:Horiz>";
            }
            else if ((*iter)->has_Dx())
            {
                _outStream << "<x:Dx>" << (*iter)->get_Dx() << "</x:Dx>";
            }
            else if ((*iter)->has_s_MapOCX())
            {
                _outStream << "<x:MapOCX>" << (*iter)->get_s_MapOCX().toString() << "</x:MapOCX>";
            }
            else if ((*iter)->has_CF())
            {
                _outStream << "<x:CF>" << (*iter)->get_CF().toString() << "</x:CF>";
            }
            else if ((*iter)->has_s_Camera())
            {
                _outStream << "<x:Camera>" << (*iter)->get_s_Camera().toString() << "</x:Camera>";
            }
            else if ((*iter)->has_s_RecalcAlways())
            {
                _outStream << "<x:RecalcAlways>" << (*iter)->get_s_RecalcAlways().toString() << "</x:RecalcAlways>";
            }
            else if ((*iter)->has_s_AutoScale())
            {
                _outStream << "<x:AutoScale>" << (*iter)->get_s_AutoScale().toString() << "</x:AutoScale>";
            }
            else if ((*iter)->has_s_DDE())
            {
                _outStream << "<x:DDE>" << (*iter)->get_s_DDE().toString() << "</x:DDE>";
            }
            else if ((*iter)->has_s_UIObj())
            {
                _outStream << "<x:UIObj>" << (*iter)->get_s_UIObj().toString() << "</x:UIObj>";
            }
            else if ((*iter)->has_ScriptText())
            {
                _outStream << "<x:ScriptText>" << (*iter)->get_ScriptText() << "</x:ScriptText>";
            }
            else if ((*iter)->has_ScriptExtended())
            {
                _outStream << "<x:ScriptExtended>" << (*iter)->get_ScriptExtended() << "</x:ScriptExtended>";
            }
            else if ((*iter)->has_ScriptLanguage())
            {
                _outStream << "<x:ScriptLanguage>" << (*iter)->get_ScriptLanguage() << "</x:ScriptLanguage>";
            }
            else if ((*iter)->has_ScriptLocation())
            {
                _outStream << "<x:ScriptLocation>" << (*iter)->get_ScriptLocation() << "</x:ScriptLocation>";
            }
            else if ((*iter)->has_FmlaTxbx())
            {
                _outStream << "<x:FmlaTxbx>" << (*iter)->get_FmlaTxbx() << "</x:FmlaTxbx>";
            }
        }
    }
    
    _outStream << "</x:ClientData>";
    }

    const ClientData_element& ClientData_element::default_instance()
    {    
    if (!ClientData_element::default_instance_)
    {
        ClientData_element::default_instance_ = new ClientData_element();
    }
    return *ClientData_element::default_instance_;
    }

    bool ClientData_element::has_ObjectType_attr() const
    {    
    return m_has_ObjectType_attr;
    }

    void ClientData_element::set_ObjectType_attr(const ST_ObjectType& _ObjectType_attr)
    {    
    m_has_ObjectType_attr = true;
    m_ObjectType_attr = new ST_ObjectType(_ObjectType_attr);
    }

    const ST_ObjectType& ClientData_element::get_ObjectType_attr() const
    {    
    if (m_ObjectType_attr)
    {
        return *m_ObjectType_attr;
    }
    return ST_ObjectType::default_instance();
    }

}