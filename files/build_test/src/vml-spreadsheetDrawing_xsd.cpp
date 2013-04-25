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

ST_CF* ST_CF::default_instance_ = NULL;

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
ST_ObjectType* ST_ObjectType::default_instance_ = NULL;

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
                _outStream << "<s:MoveWithCells>" << (*iter)->get_s_MoveWithCells().toString() << "</s:MoveWithCells>";
            }
            else if ((*iter)->has_s_SizeWithCells())
            {
                _outStream << "<s:SizeWithCells>" << (*iter)->get_s_SizeWithCells().toString() << "</s:SizeWithCells>";
            }
            else if ((*iter)->has_Anchor())
            {
                _outStream << "<x:Anchor>" << (*iter)->get_Anchor() << "</x:Anchor>";
            }
            else if ((*iter)->has_s_Locked())
            {
                _outStream << "<s:Locked>" << (*iter)->get_s_Locked().toString() << "</s:Locked>";
            }
            else if ((*iter)->has_s_DefaultSize())
            {
                _outStream << "<s:DefaultSize>" << (*iter)->get_s_DefaultSize().toString() << "</s:DefaultSize>";
            }
            else if ((*iter)->has_s_PrintObject())
            {
                _outStream << "<s:PrintObject>" << (*iter)->get_s_PrintObject().toString() << "</s:PrintObject>";
            }
            else if ((*iter)->has_s_Disabled())
            {
                _outStream << "<s:Disabled>" << (*iter)->get_s_Disabled().toString() << "</s:Disabled>";
            }
            else if ((*iter)->has_s_AutoFill())
            {
                _outStream << "<s:AutoFill>" << (*iter)->get_s_AutoFill().toString() << "</s:AutoFill>";
            }
            else if ((*iter)->has_s_AutoLine())
            {
                _outStream << "<s:AutoLine>" << (*iter)->get_s_AutoLine().toString() << "</s:AutoLine>";
            }
            else if ((*iter)->has_s_AutoPict())
            {
                _outStream << "<s:AutoPict>" << (*iter)->get_s_AutoPict().toString() << "</s:AutoPict>";
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
                _outStream << "<s:x>" << (*iter)->get_s_x().toString() << "</s:x>";
            }
            else if ((*iter)->has_s_JustLastX())
            {
                _outStream << "<s:JustLastX>" << (*iter)->get_s_JustLastX().toString() << "</s:JustLastX>";
            }
            else if ((*iter)->has_s_SecretEdit())
            {
                _outStream << "<s:SecretEdit>" << (*iter)->get_s_SecretEdit().toString() << "</s:SecretEdit>";
            }
            else if ((*iter)->has_s_Default())
            {
                _outStream << "<s:Default>" << (*iter)->get_s_Default().toString() << "</s:Default>";
            }
            else if ((*iter)->has_s_Help())
            {
                _outStream << "<s:Help>" << (*iter)->get_s_Help().toString() << "</s:Help>";
            }
            else if ((*iter)->has_s_Cancel())
            {
                _outStream << "<s:Cancel>" << (*iter)->get_s_Cancel().toString() << "</s:Cancel>";
            }
            else if ((*iter)->has_s_Dismiss())
            {
                _outStream << "<s:Dismiss>" << (*iter)->get_s_Dismiss().toString() << "</s:Dismiss>";
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
                _outStream << "<s:Visible>" << (*iter)->get_s_Visible().toString() << "</s:Visible>";
            }
            else if ((*iter)->has_s_RowHidden())
            {
                _outStream << "<s:RowHidden>" << (*iter)->get_s_RowHidden().toString() << "</s:RowHidden>";
            }
            else if ((*iter)->has_s_ColHidden())
            {
                _outStream << "<s:ColHidden>" << (*iter)->get_s_ColHidden().toString() << "</s:ColHidden>";
            }
            else if ((*iter)->has_VTEdit())
            {
                _outStream << "<x:VTEdit>" << (*iter)->get_VTEdit() << "</x:VTEdit>";
            }
            else if ((*iter)->has_s_MultiLine())
            {
                _outStream << "<s:MultiLine>" << (*iter)->get_s_MultiLine().toString() << "</s:MultiLine>";
            }
            else if ((*iter)->has_s_VScroll())
            {
                _outStream << "<s:VScroll>" << (*iter)->get_s_VScroll().toString() << "</s:VScroll>";
            }
            else if ((*iter)->has_s_ValidIds())
            {
                _outStream << "<s:ValidIds>" << (*iter)->get_s_ValidIds().toString() << "</s:ValidIds>";
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
                _outStream << "<s:NoThreeD2>" << (*iter)->get_s_NoThreeD2().toString() << "</s:NoThreeD2>";
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
                _outStream << "<s:Colored>" << (*iter)->get_s_Colored().toString() << "</s:Colored>";
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
                _outStream << "<s:NoThreeD>" << (*iter)->get_s_NoThreeD().toString() << "</s:NoThreeD>";
            }
            else if ((*iter)->has_s_FirstButton())
            {
                _outStream << "<s:FirstButton>" << (*iter)->get_s_FirstButton().toString() << "</s:FirstButton>";
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
                _outStream << "<s:Horiz>" << (*iter)->get_s_Horiz().toString() << "</s:Horiz>";
            }
            else if ((*iter)->has_Dx())
            {
                _outStream << "<x:Dx>" << (*iter)->get_Dx() << "</x:Dx>";
            }
            else if ((*iter)->has_s_MapOCX())
            {
                _outStream << "<s:MapOCX>" << (*iter)->get_s_MapOCX().toString() << "</s:MapOCX>";
            }
            else if ((*iter)->has_CF())
            {
                _outStream << "<CF>" << (*iter)->get_CF().toString() << "</CF>";
            }
            else if ((*iter)->has_s_Camera())
            {
                _outStream << "<s:Camera>" << (*iter)->get_s_Camera().toString() << "</s:Camera>";
            }
            else if ((*iter)->has_s_RecalcAlways())
            {
                _outStream << "<s:RecalcAlways>" << (*iter)->get_s_RecalcAlways().toString() << "</s:RecalcAlways>";
            }
            else if ((*iter)->has_s_AutoScale())
            {
                _outStream << "<s:AutoScale>" << (*iter)->get_s_AutoScale().toString() << "</s:AutoScale>";
            }
            else if ((*iter)->has_s_DDE())
            {
                _outStream << "<s:DDE>" << (*iter)->get_s_DDE().toString() << "</s:DDE>";
            }
            else if ((*iter)->has_s_UIObj())
            {
                _outStream << "<s:UIObj>" << (*iter)->get_s_UIObj().toString() << "</s:UIObj>";
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


    // CT_ClientData::ChildGroup_1
    bool CT_ClientData::ChildGroup_1::has_s_MoveWithCells() const
    {    
    return m_has_s_MoveWithCells;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_MoveWithCells()
    {    
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_MoveWithCells = true;
    if (!m_s_MoveWithCells)
    {
        m_s_MoveWithCells = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_MoveWithCells;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_MoveWithCells() const
    {    
    if (m_s_MoveWithCells)
    {
        return *m_s_MoveWithCells;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_SizeWithCells() const
    {    
    return m_has_s_SizeWithCells;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_SizeWithCells()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_SizeWithCells = true;
    if (!m_s_SizeWithCells)
    {
        m_s_SizeWithCells = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_SizeWithCells;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_SizeWithCells() const
    {    
    if (m_s_SizeWithCells)
    {
        return *m_s_SizeWithCells;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Anchor() const
    {    
    return m_has_Anchor;
    }

    void CT_ClientData::ChildGroup_1::set_Anchor(const XSD::string_& _Anchor)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Anchor = _Anchor;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_Anchor() const
    {    
    return m_Anchor;
    }

    bool CT_ClientData::ChildGroup_1::has_s_Locked() const
    {    
    return m_has_s_Locked;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Locked()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Locked = true;
    if (!m_s_Locked)
    {
        m_s_Locked = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Locked;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Locked() const
    {    
    if (m_s_Locked)
    {
        return *m_s_Locked;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_DefaultSize() const
    {    
    return m_has_s_DefaultSize;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_DefaultSize()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_DefaultSize = true;
    if (!m_s_DefaultSize)
    {
        m_s_DefaultSize = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_DefaultSize;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_DefaultSize() const
    {    
    if (m_s_DefaultSize)
    {
        return *m_s_DefaultSize;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_PrintObject() const
    {    
    return m_has_s_PrintObject;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_PrintObject()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_PrintObject = true;
    if (!m_s_PrintObject)
    {
        m_s_PrintObject = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_PrintObject;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_PrintObject() const
    {    
    if (m_s_PrintObject)
    {
        return *m_s_PrintObject;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_Disabled() const
    {    
    return m_has_s_Disabled;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Disabled()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Disabled = true;
    if (!m_s_Disabled)
    {
        m_s_Disabled = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Disabled;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Disabled() const
    {    
    if (m_s_Disabled)
    {
        return *m_s_Disabled;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_AutoFill() const
    {    
    return m_has_s_AutoFill;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_AutoFill()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_AutoFill = true;
    if (!m_s_AutoFill)
    {
        m_s_AutoFill = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_AutoFill;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_AutoFill() const
    {    
    if (m_s_AutoFill)
    {
        return *m_s_AutoFill;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_AutoLine() const
    {    
    return m_has_s_AutoLine;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_AutoLine()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_AutoLine = true;
    if (!m_s_AutoLine)
    {
        m_s_AutoLine = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_AutoLine;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_AutoLine() const
    {    
    if (m_s_AutoLine)
    {
        return *m_s_AutoLine;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_AutoPict() const
    {    
    return m_has_s_AutoPict;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_AutoPict()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_AutoPict = true;
    if (!m_s_AutoPict)
    {
        m_s_AutoPict = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_AutoPict;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_AutoPict() const
    {    
    if (m_s_AutoPict)
    {
        return *m_s_AutoPict;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaMacro() const
    {    
    return m_has_FmlaMacro;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaMacro(const XSD::string_& _FmlaMacro)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaMacro = _FmlaMacro;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_FmlaMacro() const
    {    
    return m_FmlaMacro;
    }

    bool CT_ClientData::ChildGroup_1::has_TextHAlign() const
    {    
    return m_has_TextHAlign;
    }

    void CT_ClientData::ChildGroup_1::set_TextHAlign(const XSD::string_& _TextHAlign)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_TextHAlign = _TextHAlign;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_TextHAlign() const
    {    
    return m_TextHAlign;
    }

    bool CT_ClientData::ChildGroup_1::has_TextVAlign() const
    {    
    return m_has_TextVAlign;
    }

    void CT_ClientData::ChildGroup_1::set_TextVAlign(const XSD::string_& _TextVAlign)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_TextVAlign = _TextVAlign;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_TextVAlign() const
    {    
    return m_TextVAlign;
    }

    bool CT_ClientData::ChildGroup_1::has_s_x() const
    {    
    return m_has_s_x;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_x()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_x = true;
    if (!m_s_x)
    {
        m_s_x = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_x;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_x() const
    {    
    if (m_s_x)
    {
        return *m_s_x;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_JustLastX() const
    {    
    return m_has_s_JustLastX;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_JustLastX()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_JustLastX = true;
    if (!m_s_JustLastX)
    {
        m_s_JustLastX = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_JustLastX;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_JustLastX() const
    {    
    if (m_s_JustLastX)
    {
        return *m_s_JustLastX;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_SecretEdit() const
    {    
    return m_has_s_SecretEdit;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_SecretEdit()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_SecretEdit = true;
    if (!m_s_SecretEdit)
    {
        m_s_SecretEdit = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_SecretEdit;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_SecretEdit() const
    {    
    if (m_s_SecretEdit)
    {
        return *m_s_SecretEdit;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_Default() const
    {    
    return m_has_s_Default;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Default()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Default = true;
    if (!m_s_Default)
    {
        m_s_Default = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Default;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Default() const
    {    
    if (m_s_Default)
    {
        return *m_s_Default;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_Help() const
    {    
    return m_has_s_Help;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Help()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Help = true;
    if (!m_s_Help)
    {
        m_s_Help = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Help;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Help() const
    {    
    if (m_s_Help)
    {
        return *m_s_Help;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_Cancel() const
    {    
    return m_has_s_Cancel;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Cancel()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Cancel = true;
    if (!m_s_Cancel)
    {
        m_s_Cancel = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Cancel;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Cancel() const
    {    
    if (m_s_Cancel)
    {
        return *m_s_Cancel;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_Dismiss() const
    {    
    return m_has_s_Dismiss;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Dismiss()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Dismiss = true;
    if (!m_s_Dismiss)
    {
        m_s_Dismiss = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Dismiss;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Dismiss() const
    {    
    if (m_s_Dismiss)
    {
        return *m_s_Dismiss;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Accel() const
    {    
    return m_has_Accel;
    }

    void CT_ClientData::ChildGroup_1::set_Accel(const XSD::integer_& _Accel)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
    }
    ;
    
    m_has_Accel2 = false;
    m_Accel2 = 0;;
    
    m_has_Row = false;
    m_Row = 0;;
    
    m_has_Column = false;
    m_Column = 0;;
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Accel = _Accel;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Accel() const
    {    
    return m_Accel;
    }

    bool CT_ClientData::ChildGroup_1::has_Accel2() const
    {    
    return m_has_Accel2;
    }

    void CT_ClientData::ChildGroup_1::set_Accel2(const XSD::integer_& _Accel2)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
    }
    ;
    
    m_has_Accel = false;
    m_Accel = 0;;
    
    m_has_Row = false;
    m_Row = 0;;
    
    m_has_Column = false;
    m_Column = 0;;
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Accel2 = _Accel2;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Accel2() const
    {    
    return m_Accel2;
    }

    bool CT_ClientData::ChildGroup_1::has_Row() const
    {    
    return m_has_Row;
    }

    void CT_ClientData::ChildGroup_1::set_Row(const XSD::integer_& _Row)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
    }
    ;
    
    m_has_Accel = false;
    m_Accel = 0;;
    
    m_has_Accel2 = false;
    m_Accel2 = 0;;
    
    m_has_Column = false;
    m_Column = 0;;
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Row = _Row;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Row() const
    {    
    return m_Row;
    }

    bool CT_ClientData::ChildGroup_1::has_Column() const
    {    
    return m_has_Column;
    }

    void CT_ClientData::ChildGroup_1::set_Column(const XSD::integer_& _Column)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
    }
    ;
    
    m_has_Accel = false;
    m_Accel = 0;;
    
    m_has_Accel2 = false;
    m_Accel2 = 0;;
    
    m_has_Row = false;
    m_Row = 0;;
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Column = _Column;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Column() const
    {    
    return m_Column;
    }

    bool CT_ClientData::ChildGroup_1::has_s_Visible() const
    {    
    return m_has_s_Visible;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Visible()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Visible = true;
    if (!m_s_Visible)
    {
        m_s_Visible = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Visible;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Visible() const
    {    
    if (m_s_Visible)
    {
        return *m_s_Visible;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_RowHidden() const
    {    
    return m_has_s_RowHidden;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_RowHidden()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_RowHidden = true;
    if (!m_s_RowHidden)
    {
        m_s_RowHidden = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_RowHidden;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_RowHidden() const
    {    
    if (m_s_RowHidden)
    {
        return *m_s_RowHidden;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_ColHidden() const
    {    
    return m_has_s_ColHidden;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_ColHidden()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_ColHidden = true;
    if (!m_s_ColHidden)
    {
        m_s_ColHidden = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_ColHidden;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_ColHidden() const
    {    
    if (m_s_ColHidden)
    {
        return *m_s_ColHidden;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_VTEdit() const
    {    
    return m_has_VTEdit;
    }

    void CT_ClientData::ChildGroup_1::set_VTEdit(const XSD::integer_& _VTEdit)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_VTEdit = _VTEdit;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_VTEdit() const
    {    
    return m_VTEdit;
    }

    bool CT_ClientData::ChildGroup_1::has_s_MultiLine() const
    {    
    return m_has_s_MultiLine;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_MultiLine()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_MultiLine = true;
    if (!m_s_MultiLine)
    {
        m_s_MultiLine = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_MultiLine;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_MultiLine() const
    {    
    if (m_s_MultiLine)
    {
        return *m_s_MultiLine;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_VScroll() const
    {    
    return m_has_s_VScroll;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_VScroll()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_VScroll = true;
    if (!m_s_VScroll)
    {
        m_s_VScroll = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_VScroll;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_VScroll() const
    {    
    if (m_s_VScroll)
    {
        return *m_s_VScroll;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_ValidIds() const
    {    
    return m_has_s_ValidIds;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_ValidIds()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_ValidIds = true;
    if (!m_s_ValidIds)
    {
        m_s_ValidIds = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_ValidIds;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_ValidIds() const
    {    
    if (m_s_ValidIds)
    {
        return *m_s_ValidIds;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaRange() const
    {    
    return m_has_FmlaRange;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaRange(const XSD::string_& _FmlaRange)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaRange = _FmlaRange;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_FmlaRange() const
    {    
    return m_FmlaRange;
    }

    bool CT_ClientData::ChildGroup_1::has_WidthMin() const
    {    
    return m_has_WidthMin;
    }

    void CT_ClientData::ChildGroup_1::set_WidthMin(const XSD::integer_& _WidthMin)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_WidthMin = _WidthMin;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_WidthMin() const
    {    
    return m_WidthMin;
    }

    bool CT_ClientData::ChildGroup_1::has_Sel() const
    {    
    return m_has_Sel;
    }

    void CT_ClientData::ChildGroup_1::set_Sel(const XSD::integer_& _Sel)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Sel = _Sel;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Sel() const
    {    
    return m_Sel;
    }

    bool CT_ClientData::ChildGroup_1::has_s_NoThreeD2() const
    {    
    return m_has_s_NoThreeD2;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_NoThreeD2()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_NoThreeD2 = true;
    if (!m_s_NoThreeD2)
    {
        m_s_NoThreeD2 = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_NoThreeD2;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_NoThreeD2() const
    {    
    if (m_s_NoThreeD2)
    {
        return *m_s_NoThreeD2;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_SelType() const
    {    
    return m_has_SelType;
    }

    void CT_ClientData::ChildGroup_1::set_SelType(const XSD::string_& _SelType)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_SelType = _SelType;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_SelType() const
    {    
    return m_SelType;
    }

    bool CT_ClientData::ChildGroup_1::has_MultiSel() const
    {    
    return m_has_MultiSel;
    }

    void CT_ClientData::ChildGroup_1::set_MultiSel(const XSD::string_& _MultiSel)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_MultiSel = _MultiSel;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_MultiSel() const
    {    
    return m_MultiSel;
    }

    bool CT_ClientData::ChildGroup_1::has_LCT() const
    {    
    return m_has_LCT;
    }

    void CT_ClientData::ChildGroup_1::set_LCT(const XSD::string_& _LCT)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_LCT = _LCT;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_LCT() const
    {    
    return m_LCT;
    }

    bool CT_ClientData::ChildGroup_1::has_st() const
    {    
    return m_has_st;
    }

    void CT_ClientData::ChildGroup_1::set_st(const XSD::string_& _st)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_st = _st;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_st() const
    {    
    return m_st;
    }

    bool CT_ClientData::ChildGroup_1::has_DropStyle() const
    {    
    return m_has_DropStyle;
    }

    void CT_ClientData::ChildGroup_1::set_DropStyle(const XSD::string_& _DropStyle)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_DropStyle = _DropStyle;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_DropStyle() const
    {    
    return m_DropStyle;
    }

    bool CT_ClientData::ChildGroup_1::has_s_Colored() const
    {    
    return m_has_s_Colored;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Colored()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Colored = true;
    if (!m_s_Colored)
    {
        m_s_Colored = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Colored;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Colored() const
    {    
    if (m_s_Colored)
    {
        return *m_s_Colored;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_DropLines() const
    {    
    return m_has_DropLines;
    }

    void CT_ClientData::ChildGroup_1::set_DropLines(const XSD::integer_& _DropLines)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
    }
    ;
    
    m_has_Checked = false;
    m_Checked = 0;;
    
    m_has_FmlaLink = false;
    m_FmlaLink.clear();;
    
    m_has_FmlaPict = false;
    m_FmlaPict.clear();;
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_DropLines = _DropLines;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_DropLines() const
    {    
    return m_DropLines;
    }

    bool CT_ClientData::ChildGroup_1::has_Checked() const
    {    
    return m_has_Checked;
    }

    void CT_ClientData::ChildGroup_1::set_Checked(const XSD::integer_& _Checked)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
    }
    ;
    
    m_has_DropLines = false;
    m_DropLines = 0;;
    
    m_has_FmlaLink = false;
    m_FmlaLink.clear();;
    
    m_has_FmlaPict = false;
    m_FmlaPict.clear();;
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Checked = _Checked;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Checked() const
    {    
    return m_Checked;
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaLink() const
    {    
    return m_has_FmlaLink;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaLink(const XSD::string_& _FmlaLink)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
    }
    ;
    
    m_has_DropLines = false;
    m_DropLines = 0;;
    
    m_has_Checked = false;
    m_Checked = 0;;
    
    m_has_FmlaPict = false;
    m_FmlaPict.clear();;
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaLink = _FmlaLink;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_FmlaLink() const
    {    
    return m_FmlaLink;
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaPict() const
    {    
    return m_has_FmlaPict;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaPict(const XSD::string_& _FmlaPict)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
    }
    ;
    
    m_has_DropLines = false;
    m_DropLines = 0;;
    
    m_has_Checked = false;
    m_Checked = 0;;
    
    m_has_FmlaLink = false;
    m_FmlaLink.clear();;
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaPict = _FmlaPict;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_FmlaPict() const
    {    
    return m_FmlaPict;
    }

    bool CT_ClientData::ChildGroup_1::has_s_NoThreeD() const
    {    
    return m_has_s_NoThreeD;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_NoThreeD()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_NoThreeD = true;
    if (!m_s_NoThreeD)
    {
        m_s_NoThreeD = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_NoThreeD;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_NoThreeD() const
    {    
    if (m_s_NoThreeD)
    {
        return *m_s_NoThreeD;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_FirstButton() const
    {    
    return m_has_s_FirstButton;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_FirstButton()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_FirstButton = true;
    if (!m_s_FirstButton)
    {
        m_s_FirstButton = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_FirstButton;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_FirstButton() const
    {    
    if (m_s_FirstButton)
    {
        return *m_s_FirstButton;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaGroup() const
    {    
    return m_has_FmlaGroup;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaGroup(const XSD::string_& _FmlaGroup)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaGroup = _FmlaGroup;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_FmlaGroup() const
    {    
    return m_FmlaGroup;
    }

    bool CT_ClientData::ChildGroup_1::has_Val() const
    {    
    return m_has_Val;
    }

    void CT_ClientData::ChildGroup_1::set_Val(const XSD::integer_& _Val)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Val = _Val;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Val() const
    {    
    return m_Val;
    }

    bool CT_ClientData::ChildGroup_1::has_Min() const
    {    
    return m_has_Min;
    }

    void CT_ClientData::ChildGroup_1::set_Min(const XSD::integer_& _Min)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Min = _Min;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Min() const
    {    
    return m_Min;
    }

    bool CT_ClientData::ChildGroup_1::has_Max() const
    {    
    return m_has_Max;
    }

    void CT_ClientData::ChildGroup_1::set_Max(const XSD::integer_& _Max)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Max = _Max;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Max() const
    {    
    return m_Max;
    }

    bool CT_ClientData::ChildGroup_1::has_Inc() const
    {    
    return m_has_Inc;
    }

    void CT_ClientData::ChildGroup_1::set_Inc(const XSD::integer_& _Inc)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Inc = _Inc;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Inc() const
    {    
    return m_Inc;
    }

    bool CT_ClientData::ChildGroup_1::has_Page() const
    {    
    return m_has_Page;
    }

    void CT_ClientData::ChildGroup_1::set_Page(const XSD::integer_& _Page)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Page = _Page;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Page() const
    {    
    return m_Page;
    }

    bool CT_ClientData::ChildGroup_1::has_s_Horiz() const
    {    
    return m_has_s_Horiz;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Horiz()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Horiz = true;
    if (!m_s_Horiz)
    {
        m_s_Horiz = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Horiz;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Horiz() const
    {    
    if (m_s_Horiz)
    {
        return *m_s_Horiz;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Dx() const
    {    
    return m_has_Dx;
    }

    void CT_ClientData::ChildGroup_1::set_Dx(const XSD::integer_& _Dx)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Dx = _Dx;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Dx() const
    {    
    return m_Dx;
    }

    bool CT_ClientData::ChildGroup_1::has_s_MapOCX() const
    {    
    return m_has_s_MapOCX;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_MapOCX()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
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
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_MapOCX = true;
    if (!m_s_MapOCX)
    {
        m_s_MapOCX = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_MapOCX;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_MapOCX() const
    {    
    if (m_s_MapOCX)
    {
        return *m_s_MapOCX;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_CF() const
    {    
    return m_has_CF;
    }

    ST_CF* CT_ClientData::ChildGroup_1::mutable_CF()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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

    const ST_CF& CT_ClientData::ChildGroup_1::get_CF() const
    {    
    if (m_CF)
    {
        return *m_CF;
    }
    return ST_CF::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_Camera() const
    {    
    return m_has_s_Camera;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_Camera()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Camera = true;
    if (!m_s_Camera)
    {
        m_s_Camera = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Camera;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_Camera() const
    {    
    if (m_s_Camera)
    {
        return *m_s_Camera;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_RecalcAlways() const
    {    
    return m_has_s_RecalcAlways;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_RecalcAlways()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_RecalcAlways = true;
    if (!m_s_RecalcAlways)
    {
        m_s_RecalcAlways = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_RecalcAlways;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_RecalcAlways() const
    {    
    if (m_s_RecalcAlways)
    {
        return *m_s_RecalcAlways;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_AutoScale() const
    {    
    return m_has_s_AutoScale;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_AutoScale()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_AutoScale = true;
    if (!m_s_AutoScale)
    {
        m_s_AutoScale = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_AutoScale;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_AutoScale() const
    {    
    if (m_s_AutoScale)
    {
        return *m_s_AutoScale;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_DDE() const
    {    
    return m_has_s_DDE;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_DDE()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_DDE = true;
    if (!m_s_DDE)
    {
        m_s_DDE = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_DDE;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_DDE() const
    {    
    if (m_s_DDE)
    {
        return *m_s_DDE;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_s_UIObj() const
    {    
    return m_has_s_UIObj;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_s_UIObj()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
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
    
    m_has_s_UIObj = true;
    if (!m_s_UIObj)
    {
        m_s_UIObj = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_UIObj;
    }

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_s_UIObj() const
    {    
    if (m_s_UIObj)
    {
        return *m_s_UIObj;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_ScriptText() const
    {    
    return m_has_ScriptText;
    }

    void CT_ClientData::ChildGroup_1::set_ScriptText(const XSD::string_& _ScriptText)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_ScriptText = _ScriptText;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_ScriptText() const
    {    
    return m_ScriptText;
    }

    bool CT_ClientData::ChildGroup_1::has_ScriptExtended() const
    {    
    return m_has_ScriptExtended;
    }

    void CT_ClientData::ChildGroup_1::set_ScriptExtended(const XSD::string_& _ScriptExtended)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_ScriptExtended = _ScriptExtended;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_ScriptExtended() const
    {    
    return m_ScriptExtended;
    }

    bool CT_ClientData::ChildGroup_1::has_ScriptLanguage() const
    {    
    return m_has_ScriptLanguage;
    }

    void CT_ClientData::ChildGroup_1::set_ScriptLanguage(const XSD::nonNegativeInteger_& _ScriptLanguage)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_ScriptLanguage = _ScriptLanguage;
    }

    const XSD::nonNegativeInteger_& CT_ClientData::ChildGroup_1::get_ScriptLanguage() const
    {    
    return m_ScriptLanguage;
    }

    bool CT_ClientData::ChildGroup_1::has_ScriptLocation() const
    {    
    return m_has_ScriptLocation;
    }

    void CT_ClientData::ChildGroup_1::set_ScriptLocation(const XSD::nonNegativeInteger_& _ScriptLocation)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_ScriptLocation = _ScriptLocation;
    }

    const XSD::nonNegativeInteger_& CT_ClientData::ChildGroup_1::get_ScriptLocation() const
    {    
    return m_ScriptLocation;
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaTxbx() const
    {    
    return m_has_FmlaTxbx;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaTxbx(const XSD::string_& _FmlaTxbx)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaTxbx = _FmlaTxbx;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_FmlaTxbx() const
    {    
    return m_FmlaTxbx;
    }

CT_ClientData* CT_ClientData::default_instance_ = NULL;

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
    _outStream << "<ClientData";
    
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
                _outStream << "<s:MoveWithCells>" << (*iter)->get_s_MoveWithCells().toString() << "</s:MoveWithCells>";
            }
            else if ((*iter)->has_s_SizeWithCells())
            {
                _outStream << "<s:SizeWithCells>" << (*iter)->get_s_SizeWithCells().toString() << "</s:SizeWithCells>";
            }
            else if ((*iter)->has_Anchor())
            {
                _outStream << "<x:Anchor>" << (*iter)->get_Anchor() << "</x:Anchor>";
            }
            else if ((*iter)->has_s_Locked())
            {
                _outStream << "<s:Locked>" << (*iter)->get_s_Locked().toString() << "</s:Locked>";
            }
            else if ((*iter)->has_s_DefaultSize())
            {
                _outStream << "<s:DefaultSize>" << (*iter)->get_s_DefaultSize().toString() << "</s:DefaultSize>";
            }
            else if ((*iter)->has_s_PrintObject())
            {
                _outStream << "<s:PrintObject>" << (*iter)->get_s_PrintObject().toString() << "</s:PrintObject>";
            }
            else if ((*iter)->has_s_Disabled())
            {
                _outStream << "<s:Disabled>" << (*iter)->get_s_Disabled().toString() << "</s:Disabled>";
            }
            else if ((*iter)->has_s_AutoFill())
            {
                _outStream << "<s:AutoFill>" << (*iter)->get_s_AutoFill().toString() << "</s:AutoFill>";
            }
            else if ((*iter)->has_s_AutoLine())
            {
                _outStream << "<s:AutoLine>" << (*iter)->get_s_AutoLine().toString() << "</s:AutoLine>";
            }
            else if ((*iter)->has_s_AutoPict())
            {
                _outStream << "<s:AutoPict>" << (*iter)->get_s_AutoPict().toString() << "</s:AutoPict>";
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
                _outStream << "<s:x>" << (*iter)->get_s_x().toString() << "</s:x>";
            }
            else if ((*iter)->has_s_JustLastX())
            {
                _outStream << "<s:JustLastX>" << (*iter)->get_s_JustLastX().toString() << "</s:JustLastX>";
            }
            else if ((*iter)->has_s_SecretEdit())
            {
                _outStream << "<s:SecretEdit>" << (*iter)->get_s_SecretEdit().toString() << "</s:SecretEdit>";
            }
            else if ((*iter)->has_s_Default())
            {
                _outStream << "<s:Default>" << (*iter)->get_s_Default().toString() << "</s:Default>";
            }
            else if ((*iter)->has_s_Help())
            {
                _outStream << "<s:Help>" << (*iter)->get_s_Help().toString() << "</s:Help>";
            }
            else if ((*iter)->has_s_Cancel())
            {
                _outStream << "<s:Cancel>" << (*iter)->get_s_Cancel().toString() << "</s:Cancel>";
            }
            else if ((*iter)->has_s_Dismiss())
            {
                _outStream << "<s:Dismiss>" << (*iter)->get_s_Dismiss().toString() << "</s:Dismiss>";
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
                _outStream << "<s:Visible>" << (*iter)->get_s_Visible().toString() << "</s:Visible>";
            }
            else if ((*iter)->has_s_RowHidden())
            {
                _outStream << "<s:RowHidden>" << (*iter)->get_s_RowHidden().toString() << "</s:RowHidden>";
            }
            else if ((*iter)->has_s_ColHidden())
            {
                _outStream << "<s:ColHidden>" << (*iter)->get_s_ColHidden().toString() << "</s:ColHidden>";
            }
            else if ((*iter)->has_VTEdit())
            {
                _outStream << "<x:VTEdit>" << (*iter)->get_VTEdit() << "</x:VTEdit>";
            }
            else if ((*iter)->has_s_MultiLine())
            {
                _outStream << "<s:MultiLine>" << (*iter)->get_s_MultiLine().toString() << "</s:MultiLine>";
            }
            else if ((*iter)->has_s_VScroll())
            {
                _outStream << "<s:VScroll>" << (*iter)->get_s_VScroll().toString() << "</s:VScroll>";
            }
            else if ((*iter)->has_s_ValidIds())
            {
                _outStream << "<s:ValidIds>" << (*iter)->get_s_ValidIds().toString() << "</s:ValidIds>";
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
                _outStream << "<s:NoThreeD2>" << (*iter)->get_s_NoThreeD2().toString() << "</s:NoThreeD2>";
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
                _outStream << "<s:Colored>" << (*iter)->get_s_Colored().toString() << "</s:Colored>";
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
                _outStream << "<s:NoThreeD>" << (*iter)->get_s_NoThreeD().toString() << "</s:NoThreeD>";
            }
            else if ((*iter)->has_s_FirstButton())
            {
                _outStream << "<s:FirstButton>" << (*iter)->get_s_FirstButton().toString() << "</s:FirstButton>";
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
                _outStream << "<s:Horiz>" << (*iter)->get_s_Horiz().toString() << "</s:Horiz>";
            }
            else if ((*iter)->has_Dx())
            {
                _outStream << "<x:Dx>" << (*iter)->get_Dx() << "</x:Dx>";
            }
            else if ((*iter)->has_s_MapOCX())
            {
                _outStream << "<s:MapOCX>" << (*iter)->get_s_MapOCX().toString() << "</s:MapOCX>";
            }
            else if ((*iter)->has_CF())
            {
                _outStream << "<CF>" << (*iter)->get_CF().toString() << "</CF>";
            }
            else if ((*iter)->has_s_Camera())
            {
                _outStream << "<s:Camera>" << (*iter)->get_s_Camera().toString() << "</s:Camera>";
            }
            else if ((*iter)->has_s_RecalcAlways())
            {
                _outStream << "<s:RecalcAlways>" << (*iter)->get_s_RecalcAlways().toString() << "</s:RecalcAlways>";
            }
            else if ((*iter)->has_s_AutoScale())
            {
                _outStream << "<s:AutoScale>" << (*iter)->get_s_AutoScale().toString() << "</s:AutoScale>";
            }
            else if ((*iter)->has_s_DDE())
            {
                _outStream << "<s:DDE>" << (*iter)->get_s_DDE().toString() << "</s:DDE>";
            }
            else if ((*iter)->has_s_UIObj())
            {
                _outStream << "<s:UIObj>" << (*iter)->get_s_UIObj().toString() << "</s:UIObj>";
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
    
    _outStream << "</ClientData>";
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


    // ClientData_element::ChildGroup_1
    bool ClientData_element::ChildGroup_1::has_s_MoveWithCells() const
    {    
    return m_has_s_MoveWithCells;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_MoveWithCells()
    {    
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_MoveWithCells = true;
    if (!m_s_MoveWithCells)
    {
        m_s_MoveWithCells = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_MoveWithCells;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_MoveWithCells() const
    {    
    if (m_s_MoveWithCells)
    {
        return *m_s_MoveWithCells;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_SizeWithCells() const
    {    
    return m_has_s_SizeWithCells;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_SizeWithCells()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_SizeWithCells = true;
    if (!m_s_SizeWithCells)
    {
        m_s_SizeWithCells = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_SizeWithCells;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_SizeWithCells() const
    {    
    if (m_s_SizeWithCells)
    {
        return *m_s_SizeWithCells;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Anchor() const
    {    
    return m_has_Anchor;
    }

    void ClientData_element::ChildGroup_1::set_Anchor(const XSD::string_& _Anchor)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Anchor = _Anchor;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_Anchor() const
    {    
    return m_Anchor;
    }

    bool ClientData_element::ChildGroup_1::has_s_Locked() const
    {    
    return m_has_s_Locked;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Locked()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Locked = true;
    if (!m_s_Locked)
    {
        m_s_Locked = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Locked;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Locked() const
    {    
    if (m_s_Locked)
    {
        return *m_s_Locked;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_DefaultSize() const
    {    
    return m_has_s_DefaultSize;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_DefaultSize()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_DefaultSize = true;
    if (!m_s_DefaultSize)
    {
        m_s_DefaultSize = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_DefaultSize;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_DefaultSize() const
    {    
    if (m_s_DefaultSize)
    {
        return *m_s_DefaultSize;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_PrintObject() const
    {    
    return m_has_s_PrintObject;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_PrintObject()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_PrintObject = true;
    if (!m_s_PrintObject)
    {
        m_s_PrintObject = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_PrintObject;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_PrintObject() const
    {    
    if (m_s_PrintObject)
    {
        return *m_s_PrintObject;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_Disabled() const
    {    
    return m_has_s_Disabled;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Disabled()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Disabled = true;
    if (!m_s_Disabled)
    {
        m_s_Disabled = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Disabled;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Disabled() const
    {    
    if (m_s_Disabled)
    {
        return *m_s_Disabled;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_AutoFill() const
    {    
    return m_has_s_AutoFill;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_AutoFill()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_AutoFill = true;
    if (!m_s_AutoFill)
    {
        m_s_AutoFill = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_AutoFill;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_AutoFill() const
    {    
    if (m_s_AutoFill)
    {
        return *m_s_AutoFill;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_AutoLine() const
    {    
    return m_has_s_AutoLine;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_AutoLine()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_AutoLine = true;
    if (!m_s_AutoLine)
    {
        m_s_AutoLine = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_AutoLine;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_AutoLine() const
    {    
    if (m_s_AutoLine)
    {
        return *m_s_AutoLine;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_AutoPict() const
    {    
    return m_has_s_AutoPict;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_AutoPict()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_AutoPict = true;
    if (!m_s_AutoPict)
    {
        m_s_AutoPict = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_AutoPict;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_AutoPict() const
    {    
    if (m_s_AutoPict)
    {
        return *m_s_AutoPict;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_FmlaMacro() const
    {    
    return m_has_FmlaMacro;
    }

    void ClientData_element::ChildGroup_1::set_FmlaMacro(const XSD::string_& _FmlaMacro)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaMacro = _FmlaMacro;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_FmlaMacro() const
    {    
    return m_FmlaMacro;
    }

    bool ClientData_element::ChildGroup_1::has_TextHAlign() const
    {    
    return m_has_TextHAlign;
    }

    void ClientData_element::ChildGroup_1::set_TextHAlign(const XSD::string_& _TextHAlign)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_TextHAlign = _TextHAlign;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_TextHAlign() const
    {    
    return m_TextHAlign;
    }

    bool ClientData_element::ChildGroup_1::has_TextVAlign() const
    {    
    return m_has_TextVAlign;
    }

    void ClientData_element::ChildGroup_1::set_TextVAlign(const XSD::string_& _TextVAlign)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_TextVAlign = _TextVAlign;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_TextVAlign() const
    {    
    return m_TextVAlign;
    }

    bool ClientData_element::ChildGroup_1::has_s_x() const
    {    
    return m_has_s_x;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_x()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_x = true;
    if (!m_s_x)
    {
        m_s_x = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_x;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_x() const
    {    
    if (m_s_x)
    {
        return *m_s_x;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_JustLastX() const
    {    
    return m_has_s_JustLastX;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_JustLastX()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_JustLastX = true;
    if (!m_s_JustLastX)
    {
        m_s_JustLastX = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_JustLastX;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_JustLastX() const
    {    
    if (m_s_JustLastX)
    {
        return *m_s_JustLastX;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_SecretEdit() const
    {    
    return m_has_s_SecretEdit;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_SecretEdit()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_SecretEdit = true;
    if (!m_s_SecretEdit)
    {
        m_s_SecretEdit = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_SecretEdit;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_SecretEdit() const
    {    
    if (m_s_SecretEdit)
    {
        return *m_s_SecretEdit;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_Default() const
    {    
    return m_has_s_Default;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Default()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Default = true;
    if (!m_s_Default)
    {
        m_s_Default = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Default;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Default() const
    {    
    if (m_s_Default)
    {
        return *m_s_Default;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_Help() const
    {    
    return m_has_s_Help;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Help()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Help = true;
    if (!m_s_Help)
    {
        m_s_Help = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Help;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Help() const
    {    
    if (m_s_Help)
    {
        return *m_s_Help;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_Cancel() const
    {    
    return m_has_s_Cancel;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Cancel()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Cancel = true;
    if (!m_s_Cancel)
    {
        m_s_Cancel = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Cancel;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Cancel() const
    {    
    if (m_s_Cancel)
    {
        return *m_s_Cancel;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_Dismiss() const
    {    
    return m_has_s_Dismiss;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Dismiss()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Dismiss = true;
    if (!m_s_Dismiss)
    {
        m_s_Dismiss = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Dismiss;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Dismiss() const
    {    
    if (m_s_Dismiss)
    {
        return *m_s_Dismiss;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Accel() const
    {    
    return m_has_Accel;
    }

    void ClientData_element::ChildGroup_1::set_Accel(const XSD::integer_& _Accel)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
    }
    ;
    
    m_has_Accel2 = false;
    m_Accel2 = 0;;
    
    m_has_Row = false;
    m_Row = 0;;
    
    m_has_Column = false;
    m_Column = 0;;
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Accel = _Accel;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Accel() const
    {    
    return m_Accel;
    }

    bool ClientData_element::ChildGroup_1::has_Accel2() const
    {    
    return m_has_Accel2;
    }

    void ClientData_element::ChildGroup_1::set_Accel2(const XSD::integer_& _Accel2)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
    }
    ;
    
    m_has_Accel = false;
    m_Accel = 0;;
    
    m_has_Row = false;
    m_Row = 0;;
    
    m_has_Column = false;
    m_Column = 0;;
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Accel2 = _Accel2;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Accel2() const
    {    
    return m_Accel2;
    }

    bool ClientData_element::ChildGroup_1::has_Row() const
    {    
    return m_has_Row;
    }

    void ClientData_element::ChildGroup_1::set_Row(const XSD::integer_& _Row)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
    }
    ;
    
    m_has_Accel = false;
    m_Accel = 0;;
    
    m_has_Accel2 = false;
    m_Accel2 = 0;;
    
    m_has_Column = false;
    m_Column = 0;;
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Row = _Row;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Row() const
    {    
    return m_Row;
    }

    bool ClientData_element::ChildGroup_1::has_Column() const
    {    
    return m_has_Column;
    }

    void ClientData_element::ChildGroup_1::set_Column(const XSD::integer_& _Column)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
    }
    ;
    
    m_has_Accel = false;
    m_Accel = 0;;
    
    m_has_Accel2 = false;
    m_Accel2 = 0;;
    
    m_has_Row = false;
    m_Row = 0;;
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Column = _Column;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Column() const
    {    
    return m_Column;
    }

    bool ClientData_element::ChildGroup_1::has_s_Visible() const
    {    
    return m_has_s_Visible;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Visible()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Visible = true;
    if (!m_s_Visible)
    {
        m_s_Visible = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Visible;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Visible() const
    {    
    if (m_s_Visible)
    {
        return *m_s_Visible;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_RowHidden() const
    {    
    return m_has_s_RowHidden;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_RowHidden()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_RowHidden = true;
    if (!m_s_RowHidden)
    {
        m_s_RowHidden = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_RowHidden;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_RowHidden() const
    {    
    if (m_s_RowHidden)
    {
        return *m_s_RowHidden;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_ColHidden() const
    {    
    return m_has_s_ColHidden;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_ColHidden()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_ColHidden = true;
    if (!m_s_ColHidden)
    {
        m_s_ColHidden = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_ColHidden;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_ColHidden() const
    {    
    if (m_s_ColHidden)
    {
        return *m_s_ColHidden;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_VTEdit() const
    {    
    return m_has_VTEdit;
    }

    void ClientData_element::ChildGroup_1::set_VTEdit(const XSD::integer_& _VTEdit)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_VTEdit = _VTEdit;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_VTEdit() const
    {    
    return m_VTEdit;
    }

    bool ClientData_element::ChildGroup_1::has_s_MultiLine() const
    {    
    return m_has_s_MultiLine;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_MultiLine()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_MultiLine = true;
    if (!m_s_MultiLine)
    {
        m_s_MultiLine = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_MultiLine;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_MultiLine() const
    {    
    if (m_s_MultiLine)
    {
        return *m_s_MultiLine;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_VScroll() const
    {    
    return m_has_s_VScroll;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_VScroll()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_VScroll = true;
    if (!m_s_VScroll)
    {
        m_s_VScroll = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_VScroll;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_VScroll() const
    {    
    if (m_s_VScroll)
    {
        return *m_s_VScroll;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_ValidIds() const
    {    
    return m_has_s_ValidIds;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_ValidIds()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_ValidIds = true;
    if (!m_s_ValidIds)
    {
        m_s_ValidIds = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_ValidIds;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_ValidIds() const
    {    
    if (m_s_ValidIds)
    {
        return *m_s_ValidIds;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_FmlaRange() const
    {    
    return m_has_FmlaRange;
    }

    void ClientData_element::ChildGroup_1::set_FmlaRange(const XSD::string_& _FmlaRange)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaRange = _FmlaRange;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_FmlaRange() const
    {    
    return m_FmlaRange;
    }

    bool ClientData_element::ChildGroup_1::has_WidthMin() const
    {    
    return m_has_WidthMin;
    }

    void ClientData_element::ChildGroup_1::set_WidthMin(const XSD::integer_& _WidthMin)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_WidthMin = _WidthMin;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_WidthMin() const
    {    
    return m_WidthMin;
    }

    bool ClientData_element::ChildGroup_1::has_Sel() const
    {    
    return m_has_Sel;
    }

    void ClientData_element::ChildGroup_1::set_Sel(const XSD::integer_& _Sel)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Sel = _Sel;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Sel() const
    {    
    return m_Sel;
    }

    bool ClientData_element::ChildGroup_1::has_s_NoThreeD2() const
    {    
    return m_has_s_NoThreeD2;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_NoThreeD2()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_NoThreeD2 = true;
    if (!m_s_NoThreeD2)
    {
        m_s_NoThreeD2 = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_NoThreeD2;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_NoThreeD2() const
    {    
    if (m_s_NoThreeD2)
    {
        return *m_s_NoThreeD2;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_SelType() const
    {    
    return m_has_SelType;
    }

    void ClientData_element::ChildGroup_1::set_SelType(const XSD::string_& _SelType)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_SelType = _SelType;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_SelType() const
    {    
    return m_SelType;
    }

    bool ClientData_element::ChildGroup_1::has_MultiSel() const
    {    
    return m_has_MultiSel;
    }

    void ClientData_element::ChildGroup_1::set_MultiSel(const XSD::string_& _MultiSel)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_MultiSel = _MultiSel;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_MultiSel() const
    {    
    return m_MultiSel;
    }

    bool ClientData_element::ChildGroup_1::has_LCT() const
    {    
    return m_has_LCT;
    }

    void ClientData_element::ChildGroup_1::set_LCT(const XSD::string_& _LCT)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_LCT = _LCT;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_LCT() const
    {    
    return m_LCT;
    }

    bool ClientData_element::ChildGroup_1::has_st() const
    {    
    return m_has_st;
    }

    void ClientData_element::ChildGroup_1::set_st(const XSD::string_& _st)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_st = _st;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_st() const
    {    
    return m_st;
    }

    bool ClientData_element::ChildGroup_1::has_DropStyle() const
    {    
    return m_has_DropStyle;
    }

    void ClientData_element::ChildGroup_1::set_DropStyle(const XSD::string_& _DropStyle)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_DropStyle = _DropStyle;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_DropStyle() const
    {    
    return m_DropStyle;
    }

    bool ClientData_element::ChildGroup_1::has_s_Colored() const
    {    
    return m_has_s_Colored;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Colored()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Colored = true;
    if (!m_s_Colored)
    {
        m_s_Colored = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Colored;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Colored() const
    {    
    if (m_s_Colored)
    {
        return *m_s_Colored;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_DropLines() const
    {    
    return m_has_DropLines;
    }

    void ClientData_element::ChildGroup_1::set_DropLines(const XSD::integer_& _DropLines)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
    }
    ;
    
    m_has_Checked = false;
    m_Checked = 0;;
    
    m_has_FmlaLink = false;
    m_FmlaLink.clear();;
    
    m_has_FmlaPict = false;
    m_FmlaPict.clear();;
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_DropLines = _DropLines;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_DropLines() const
    {    
    return m_DropLines;
    }

    bool ClientData_element::ChildGroup_1::has_Checked() const
    {    
    return m_has_Checked;
    }

    void ClientData_element::ChildGroup_1::set_Checked(const XSD::integer_& _Checked)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
    }
    ;
    
    m_has_DropLines = false;
    m_DropLines = 0;;
    
    m_has_FmlaLink = false;
    m_FmlaLink.clear();;
    
    m_has_FmlaPict = false;
    m_FmlaPict.clear();;
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Checked = _Checked;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Checked() const
    {    
    return m_Checked;
    }

    bool ClientData_element::ChildGroup_1::has_FmlaLink() const
    {    
    return m_has_FmlaLink;
    }

    void ClientData_element::ChildGroup_1::set_FmlaLink(const XSD::string_& _FmlaLink)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
    }
    ;
    
    m_has_DropLines = false;
    m_DropLines = 0;;
    
    m_has_Checked = false;
    m_Checked = 0;;
    
    m_has_FmlaPict = false;
    m_FmlaPict.clear();;
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaLink = _FmlaLink;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_FmlaLink() const
    {    
    return m_FmlaLink;
    }

    bool ClientData_element::ChildGroup_1::has_FmlaPict() const
    {    
    return m_has_FmlaPict;
    }

    void ClientData_element::ChildGroup_1::set_FmlaPict(const XSD::string_& _FmlaPict)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
    }
    ;
    
    m_has_DropLines = false;
    m_DropLines = 0;;
    
    m_has_Checked = false;
    m_Checked = 0;;
    
    m_has_FmlaLink = false;
    m_FmlaLink.clear();;
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaPict = _FmlaPict;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_FmlaPict() const
    {    
    return m_FmlaPict;
    }

    bool ClientData_element::ChildGroup_1::has_s_NoThreeD() const
    {    
    return m_has_s_NoThreeD;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_NoThreeD()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_NoThreeD = true;
    if (!m_s_NoThreeD)
    {
        m_s_NoThreeD = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_NoThreeD;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_NoThreeD() const
    {    
    if (m_s_NoThreeD)
    {
        return *m_s_NoThreeD;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_FirstButton() const
    {    
    return m_has_s_FirstButton;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_FirstButton()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_FirstButton = true;
    if (!m_s_FirstButton)
    {
        m_s_FirstButton = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_FirstButton;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_FirstButton() const
    {    
    if (m_s_FirstButton)
    {
        return *m_s_FirstButton;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_FmlaGroup() const
    {    
    return m_has_FmlaGroup;
    }

    void ClientData_element::ChildGroup_1::set_FmlaGroup(const XSD::string_& _FmlaGroup)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaGroup = _FmlaGroup;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_FmlaGroup() const
    {    
    return m_FmlaGroup;
    }

    bool ClientData_element::ChildGroup_1::has_Val() const
    {    
    return m_has_Val;
    }

    void ClientData_element::ChildGroup_1::set_Val(const XSD::integer_& _Val)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Val = _Val;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Val() const
    {    
    return m_Val;
    }

    bool ClientData_element::ChildGroup_1::has_Min() const
    {    
    return m_has_Min;
    }

    void ClientData_element::ChildGroup_1::set_Min(const XSD::integer_& _Min)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Min = _Min;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Min() const
    {    
    return m_Min;
    }

    bool ClientData_element::ChildGroup_1::has_Max() const
    {    
    return m_has_Max;
    }

    void ClientData_element::ChildGroup_1::set_Max(const XSD::integer_& _Max)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Max = _Max;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Max() const
    {    
    return m_Max;
    }

    bool ClientData_element::ChildGroup_1::has_Inc() const
    {    
    return m_has_Inc;
    }

    void ClientData_element::ChildGroup_1::set_Inc(const XSD::integer_& _Inc)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Inc = _Inc;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Inc() const
    {    
    return m_Inc;
    }

    bool ClientData_element::ChildGroup_1::has_Page() const
    {    
    return m_has_Page;
    }

    void ClientData_element::ChildGroup_1::set_Page(const XSD::integer_& _Page)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Page = _Page;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Page() const
    {    
    return m_Page;
    }

    bool ClientData_element::ChildGroup_1::has_s_Horiz() const
    {    
    return m_has_s_Horiz;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Horiz()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Horiz = true;
    if (!m_s_Horiz)
    {
        m_s_Horiz = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Horiz;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Horiz() const
    {    
    if (m_s_Horiz)
    {
        return *m_s_Horiz;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Dx() const
    {    
    return m_has_Dx;
    }

    void ClientData_element::ChildGroup_1::set_Dx(const XSD::integer_& _Dx)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_Dx = _Dx;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Dx() const
    {    
    return m_Dx;
    }

    bool ClientData_element::ChildGroup_1::has_s_MapOCX() const
    {    
    return m_has_s_MapOCX;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_MapOCX()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
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
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_MapOCX = true;
    if (!m_s_MapOCX)
    {
        m_s_MapOCX = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_MapOCX;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_MapOCX() const
    {    
    if (m_s_MapOCX)
    {
        return *m_s_MapOCX;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_CF() const
    {    
    return m_has_CF;
    }

    ST_CF* ClientData_element::ChildGroup_1::mutable_CF()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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

    const ST_CF& ClientData_element::ChildGroup_1::get_CF() const
    {    
    if (m_CF)
    {
        return *m_CF;
    }
    return ST_CF::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_Camera() const
    {    
    return m_has_s_Camera;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_Camera()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_Camera = true;
    if (!m_s_Camera)
    {
        m_s_Camera = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_Camera;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_Camera() const
    {    
    if (m_s_Camera)
    {
        return *m_s_Camera;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_RecalcAlways() const
    {    
    return m_has_s_RecalcAlways;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_RecalcAlways()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_RecalcAlways = true;
    if (!m_s_RecalcAlways)
    {
        m_s_RecalcAlways = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_RecalcAlways;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_RecalcAlways() const
    {    
    if (m_s_RecalcAlways)
    {
        return *m_s_RecalcAlways;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_AutoScale() const
    {    
    return m_has_s_AutoScale;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_AutoScale()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_AutoScale = true;
    if (!m_s_AutoScale)
    {
        m_s_AutoScale = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_AutoScale;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_AutoScale() const
    {    
    if (m_s_AutoScale)
    {
        return *m_s_AutoScale;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_DDE() const
    {    
    return m_has_s_DDE;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_DDE()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    
    m_has_s_DDE = true;
    if (!m_s_DDE)
    {
        m_s_DDE = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_DDE;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_DDE() const
    {    
    if (m_s_DDE)
    {
        return *m_s_DDE;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_s_UIObj() const
    {    
    return m_has_s_UIObj;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_s_UIObj()
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
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
    
    m_has_s_UIObj = true;
    if (!m_s_UIObj)
    {
        m_s_UIObj = new ns_s::ST_TrueFalseBlank();
    }
    return m_s_UIObj;
    }

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_s_UIObj() const
    {    
    if (m_s_UIObj)
    {
        return *m_s_UIObj;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_ScriptText() const
    {    
    return m_has_ScriptText;
    }

    void ClientData_element::ChildGroup_1::set_ScriptText(const XSD::string_& _ScriptText)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_ScriptText = _ScriptText;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_ScriptText() const
    {    
    return m_ScriptText;
    }

    bool ClientData_element::ChildGroup_1::has_ScriptExtended() const
    {    
    return m_has_ScriptExtended;
    }

    void ClientData_element::ChildGroup_1::set_ScriptExtended(const XSD::string_& _ScriptExtended)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_ScriptExtended = _ScriptExtended;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_ScriptExtended() const
    {    
    return m_ScriptExtended;
    }

    bool ClientData_element::ChildGroup_1::has_ScriptLanguage() const
    {    
    return m_has_ScriptLanguage;
    }

    void ClientData_element::ChildGroup_1::set_ScriptLanguage(const XSD::nonNegativeInteger_& _ScriptLanguage)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_ScriptLanguage = _ScriptLanguage;
    }

    const XSD::nonNegativeInteger_& ClientData_element::ChildGroup_1::get_ScriptLanguage() const
    {    
    return m_ScriptLanguage;
    }

    bool ClientData_element::ChildGroup_1::has_ScriptLocation() const
    {    
    return m_has_ScriptLocation;
    }

    void ClientData_element::ChildGroup_1::set_ScriptLocation(const XSD::nonNegativeInteger_& _ScriptLocation)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_ScriptLocation = _ScriptLocation;
    }

    const XSD::nonNegativeInteger_& ClientData_element::ChildGroup_1::get_ScriptLocation() const
    {    
    return m_ScriptLocation;
    }

    bool ClientData_element::ChildGroup_1::has_FmlaTxbx() const
    {    
    return m_has_FmlaTxbx;
    }

    void ClientData_element::ChildGroup_1::set_FmlaTxbx(const XSD::string_& _FmlaTxbx)
    {    
    
    m_has_s_MoveWithCells = false;
    
    if (m_s_MoveWithCells)
    {
        delete m_s_MoveWithCells;
        m_s_MoveWithCells = NULL;
    }
    ;
    
    m_has_s_SizeWithCells = false;
    
    if (m_s_SizeWithCells)
    {
        delete m_s_SizeWithCells;
        m_s_SizeWithCells = NULL;
    }
    ;
    
    m_has_Anchor = false;
    m_Anchor.clear();;
    
    m_has_s_Locked = false;
    
    if (m_s_Locked)
    {
        delete m_s_Locked;
        m_s_Locked = NULL;
    }
    ;
    
    m_has_s_DefaultSize = false;
    
    if (m_s_DefaultSize)
    {
        delete m_s_DefaultSize;
        m_s_DefaultSize = NULL;
    }
    ;
    
    m_has_s_PrintObject = false;
    
    if (m_s_PrintObject)
    {
        delete m_s_PrintObject;
        m_s_PrintObject = NULL;
    }
    ;
    
    m_has_s_Disabled = false;
    
    if (m_s_Disabled)
    {
        delete m_s_Disabled;
        m_s_Disabled = NULL;
    }
    ;
    
    m_has_s_AutoFill = false;
    
    if (m_s_AutoFill)
    {
        delete m_s_AutoFill;
        m_s_AutoFill = NULL;
    }
    ;
    
    m_has_s_AutoLine = false;
    
    if (m_s_AutoLine)
    {
        delete m_s_AutoLine;
        m_s_AutoLine = NULL;
    }
    ;
    
    m_has_s_AutoPict = false;
    
    if (m_s_AutoPict)
    {
        delete m_s_AutoPict;
        m_s_AutoPict = NULL;
    }
    ;
    
    m_has_FmlaMacro = false;
    m_FmlaMacro.clear();;
    
    m_has_TextHAlign = false;
    m_TextHAlign.clear();;
    
    m_has_TextVAlign = false;
    m_TextVAlign.clear();;
    
    m_has_s_x = false;
    
    if (m_s_x)
    {
        delete m_s_x;
        m_s_x = NULL;
    }
    ;
    
    m_has_s_JustLastX = false;
    
    if (m_s_JustLastX)
    {
        delete m_s_JustLastX;
        m_s_JustLastX = NULL;
    }
    ;
    
    m_has_s_SecretEdit = false;
    
    if (m_s_SecretEdit)
    {
        delete m_s_SecretEdit;
        m_s_SecretEdit = NULL;
    }
    ;
    
    m_has_s_Default = false;
    
    if (m_s_Default)
    {
        delete m_s_Default;
        m_s_Default = NULL;
    }
    ;
    
    m_has_s_Help = false;
    
    if (m_s_Help)
    {
        delete m_s_Help;
        m_s_Help = NULL;
    }
    ;
    
    m_has_s_Cancel = false;
    
    if (m_s_Cancel)
    {
        delete m_s_Cancel;
        m_s_Cancel = NULL;
    }
    ;
    
    m_has_s_Dismiss = false;
    
    if (m_s_Dismiss)
    {
        delete m_s_Dismiss;
        m_s_Dismiss = NULL;
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
    
    m_has_s_Visible = false;
    
    if (m_s_Visible)
    {
        delete m_s_Visible;
        m_s_Visible = NULL;
    }
    ;
    
    m_has_s_RowHidden = false;
    
    if (m_s_RowHidden)
    {
        delete m_s_RowHidden;
        m_s_RowHidden = NULL;
    }
    ;
    
    m_has_s_ColHidden = false;
    
    if (m_s_ColHidden)
    {
        delete m_s_ColHidden;
        m_s_ColHidden = NULL;
    }
    ;
    
    m_has_VTEdit = false;
    m_VTEdit = 0;;
    
    m_has_s_MultiLine = false;
    
    if (m_s_MultiLine)
    {
        delete m_s_MultiLine;
        m_s_MultiLine = NULL;
    }
    ;
    
    m_has_s_VScroll = false;
    
    if (m_s_VScroll)
    {
        delete m_s_VScroll;
        m_s_VScroll = NULL;
    }
    ;
    
    m_has_s_ValidIds = false;
    
    if (m_s_ValidIds)
    {
        delete m_s_ValidIds;
        m_s_ValidIds = NULL;
    }
    ;
    
    m_has_FmlaRange = false;
    m_FmlaRange.clear();;
    
    m_has_WidthMin = false;
    m_WidthMin = 0;;
    
    m_has_Sel = false;
    m_Sel = 0;;
    
    m_has_s_NoThreeD2 = false;
    
    if (m_s_NoThreeD2)
    {
        delete m_s_NoThreeD2;
        m_s_NoThreeD2 = NULL;
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
    
    m_has_s_Colored = false;
    
    if (m_s_Colored)
    {
        delete m_s_Colored;
        m_s_Colored = NULL;
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
    
    m_has_s_NoThreeD = false;
    
    if (m_s_NoThreeD)
    {
        delete m_s_NoThreeD;
        m_s_NoThreeD = NULL;
    }
    ;
    
    m_has_s_FirstButton = false;
    
    if (m_s_FirstButton)
    {
        delete m_s_FirstButton;
        m_s_FirstButton = NULL;
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
    
    m_has_s_Horiz = false;
    
    if (m_s_Horiz)
    {
        delete m_s_Horiz;
        m_s_Horiz = NULL;
    }
    ;
    
    m_has_Dx = false;
    m_Dx = 0;;
    
    m_has_s_MapOCX = false;
    
    if (m_s_MapOCX)
    {
        delete m_s_MapOCX;
        m_s_MapOCX = NULL;
    }
    ;
    
    m_has_CF = false;
    
    if (m_CF)
    {
        delete m_CF;
        m_CF = NULL;
    }
    ;
    
    m_has_s_Camera = false;
    
    if (m_s_Camera)
    {
        delete m_s_Camera;
        m_s_Camera = NULL;
    }
    ;
    
    m_has_s_RecalcAlways = false;
    
    if (m_s_RecalcAlways)
    {
        delete m_s_RecalcAlways;
        m_s_RecalcAlways = NULL;
    }
    ;
    
    m_has_s_AutoScale = false;
    
    if (m_s_AutoScale)
    {
        delete m_s_AutoScale;
        m_s_AutoScale = NULL;
    }
    ;
    
    m_has_s_DDE = false;
    
    if (m_s_DDE)
    {
        delete m_s_DDE;
        m_s_DDE = NULL;
    }
    ;
    
    m_has_s_UIObj = false;
    
    if (m_s_UIObj)
    {
        delete m_s_UIObj;
        m_s_UIObj = NULL;
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
    m_FmlaTxbx = _FmlaTxbx;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_FmlaTxbx() const
    {    
    return m_FmlaTxbx;
    }

ClientData_element* ClientData_element::default_instance_ = NULL;
}