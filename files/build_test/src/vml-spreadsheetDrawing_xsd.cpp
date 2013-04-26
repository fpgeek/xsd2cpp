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
    
    set_string(_string);
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
    CT_ClientData::CT_ClientData()
    :m_has_ObjectType_attr(false),
    m_ObjectType_attr(NULL)
    {
    }
    ns_s::ST_TrueFalseBlank* CT_ClientData::add_MoveWithCells()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MoveWithCells();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_SizeWithCells()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_SizeWithCells();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_Anchor(const XSD::string_& _Anchor)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Anchor(_Anchor);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Locked()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Locked();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_DefaultSize()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_DefaultSize();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_PrintObject()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_PrintObject();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Disabled()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Disabled();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_AutoFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_AutoLine()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoLine();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_AutoPict()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoPict();
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

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_x()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_x();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_JustLastX()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_JustLastX();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_SecretEdit()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_SecretEdit();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Default()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Default();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Help()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Help();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Cancel()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Cancel();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Dismiss()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Dismiss();
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

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Visible()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Visible();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_RowHidden()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_RowHidden();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_ColHidden()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_ColHidden();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_VTEdit(const XSD::integer_& _VTEdit)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_VTEdit(_VTEdit);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_MultiLine()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MultiLine();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_VScroll()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_VScroll();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_ValidIds()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_ValidIds();
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

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_NoThreeD2()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_NoThreeD2();
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

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Colored()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Colored();
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

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_NoThreeD()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_NoThreeD();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_FirstButton()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_FirstButton();
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

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Horiz()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Horiz();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_ClientData::add_Dx(const XSD::integer_& _Dx)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Dx(_Dx);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_MapOCX()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MapOCX();
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

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_Camera()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Camera();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_RecalcAlways()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_RecalcAlways();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_AutoScale()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoScale();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_DDE()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_DDE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::add_UIObj()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_UIObj();
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
            if ((*iter)->has_MoveWithCells())
            {
                _outStream << "<x:MoveWithCells>" << (*iter)->get_MoveWithCells().toString() << "</x:MoveWithCells>";
            }
            else if ((*iter)->has_SizeWithCells())
            {
                _outStream << "<x:SizeWithCells>" << (*iter)->get_SizeWithCells().toString() << "</x:SizeWithCells>";
            }
            else if ((*iter)->has_Anchor())
            {
                _outStream << "<x:Anchor>" << (*iter)->get_Anchor() << "</x:Anchor>";
            }
            else if ((*iter)->has_Locked())
            {
                _outStream << "<x:Locked>" << (*iter)->get_Locked().toString() << "</x:Locked>";
            }
            else if ((*iter)->has_DefaultSize())
            {
                _outStream << "<x:DefaultSize>" << (*iter)->get_DefaultSize().toString() << "</x:DefaultSize>";
            }
            else if ((*iter)->has_PrintObject())
            {
                _outStream << "<x:PrintObject>" << (*iter)->get_PrintObject().toString() << "</x:PrintObject>";
            }
            else if ((*iter)->has_Disabled())
            {
                _outStream << "<x:Disabled>" << (*iter)->get_Disabled().toString() << "</x:Disabled>";
            }
            else if ((*iter)->has_AutoFill())
            {
                _outStream << "<x:AutoFill>" << (*iter)->get_AutoFill().toString() << "</x:AutoFill>";
            }
            else if ((*iter)->has_AutoLine())
            {
                _outStream << "<x:AutoLine>" << (*iter)->get_AutoLine().toString() << "</x:AutoLine>";
            }
            else if ((*iter)->has_AutoPict())
            {
                _outStream << "<x:AutoPict>" << (*iter)->get_AutoPict().toString() << "</x:AutoPict>";
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
            else if ((*iter)->has_x())
            {
                _outStream << "<x:x>" << (*iter)->get_x().toString() << "</x:x>";
            }
            else if ((*iter)->has_JustLastX())
            {
                _outStream << "<x:JustLastX>" << (*iter)->get_JustLastX().toString() << "</x:JustLastX>";
            }
            else if ((*iter)->has_SecretEdit())
            {
                _outStream << "<x:SecretEdit>" << (*iter)->get_SecretEdit().toString() << "</x:SecretEdit>";
            }
            else if ((*iter)->has_Default())
            {
                _outStream << "<x:Default>" << (*iter)->get_Default().toString() << "</x:Default>";
            }
            else if ((*iter)->has_Help())
            {
                _outStream << "<x:Help>" << (*iter)->get_Help().toString() << "</x:Help>";
            }
            else if ((*iter)->has_Cancel())
            {
                _outStream << "<x:Cancel>" << (*iter)->get_Cancel().toString() << "</x:Cancel>";
            }
            else if ((*iter)->has_Dismiss())
            {
                _outStream << "<x:Dismiss>" << (*iter)->get_Dismiss().toString() << "</x:Dismiss>";
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
            else if ((*iter)->has_Visible())
            {
                _outStream << "<x:Visible>" << (*iter)->get_Visible().toString() << "</x:Visible>";
            }
            else if ((*iter)->has_RowHidden())
            {
                _outStream << "<x:RowHidden>" << (*iter)->get_RowHidden().toString() << "</x:RowHidden>";
            }
            else if ((*iter)->has_ColHidden())
            {
                _outStream << "<x:ColHidden>" << (*iter)->get_ColHidden().toString() << "</x:ColHidden>";
            }
            else if ((*iter)->has_VTEdit())
            {
                _outStream << "<x:VTEdit>" << (*iter)->get_VTEdit() << "</x:VTEdit>";
            }
            else if ((*iter)->has_MultiLine())
            {
                _outStream << "<x:MultiLine>" << (*iter)->get_MultiLine().toString() << "</x:MultiLine>";
            }
            else if ((*iter)->has_VScroll())
            {
                _outStream << "<x:VScroll>" << (*iter)->get_VScroll().toString() << "</x:VScroll>";
            }
            else if ((*iter)->has_ValidIds())
            {
                _outStream << "<x:ValidIds>" << (*iter)->get_ValidIds().toString() << "</x:ValidIds>";
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
            else if ((*iter)->has_NoThreeD2())
            {
                _outStream << "<x:NoThreeD2>" << (*iter)->get_NoThreeD2().toString() << "</x:NoThreeD2>";
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
            else if ((*iter)->has_Colored())
            {
                _outStream << "<x:Colored>" << (*iter)->get_Colored().toString() << "</x:Colored>";
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
            else if ((*iter)->has_NoThreeD())
            {
                _outStream << "<x:NoThreeD>" << (*iter)->get_NoThreeD().toString() << "</x:NoThreeD>";
            }
            else if ((*iter)->has_FirstButton())
            {
                _outStream << "<x:FirstButton>" << (*iter)->get_FirstButton().toString() << "</x:FirstButton>";
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
            else if ((*iter)->has_Horiz())
            {
                _outStream << "<x:Horiz>" << (*iter)->get_Horiz().toString() << "</x:Horiz>";
            }
            else if ((*iter)->has_Dx())
            {
                _outStream << "<x:Dx>" << (*iter)->get_Dx() << "</x:Dx>";
            }
            else if ((*iter)->has_MapOCX())
            {
                _outStream << "<x:MapOCX>" << (*iter)->get_MapOCX().toString() << "</x:MapOCX>";
            }
            else if ((*iter)->has_CF())
            {
                _outStream << "<x:CF>" << (*iter)->get_CF().toString() << "</x:CF>";
            }
            else if ((*iter)->has_Camera())
            {
                _outStream << "<x:Camera>" << (*iter)->get_Camera().toString() << "</x:Camera>";
            }
            else if ((*iter)->has_RecalcAlways())
            {
                _outStream << "<x:RecalcAlways>" << (*iter)->get_RecalcAlways().toString() << "</x:RecalcAlways>";
            }
            else if ((*iter)->has_AutoScale())
            {
                _outStream << "<x:AutoScale>" << (*iter)->get_AutoScale().toString() << "</x:AutoScale>";
            }
            else if ((*iter)->has_DDE())
            {
                _outStream << "<x:DDE>" << (*iter)->get_DDE().toString() << "</x:DDE>";
            }
            else if ((*iter)->has_UIObj())
            {
                _outStream << "<x:UIObj>" << (*iter)->get_UIObj().toString() << "</x:UIObj>";
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
    CT_ClientData::ChildGroup_1::ChildGroup_1()
    :m_has_MoveWithCells(false),
    m_MoveWithCells(NULL),
    m_has_SizeWithCells(false),
    m_SizeWithCells(NULL),
    m_has_Anchor(false),
    m_Anchor(""),
    m_has_Locked(false),
    m_Locked(NULL),
    m_has_DefaultSize(false),
    m_DefaultSize(NULL),
    m_has_PrintObject(false),
    m_PrintObject(NULL),
    m_has_Disabled(false),
    m_Disabled(NULL),
    m_has_AutoFill(false),
    m_AutoFill(NULL),
    m_has_AutoLine(false),
    m_AutoLine(NULL),
    m_has_AutoPict(false),
    m_AutoPict(NULL),
    m_has_FmlaMacro(false),
    m_FmlaMacro(""),
    m_has_TextHAlign(false),
    m_TextHAlign(""),
    m_has_TextVAlign(false),
    m_TextVAlign(""),
    m_has_x(false),
    m_x(NULL),
    m_has_JustLastX(false),
    m_JustLastX(NULL),
    m_has_SecretEdit(false),
    m_SecretEdit(NULL),
    m_has_Default(false),
    m_Default(NULL),
    m_has_Help(false),
    m_Help(NULL),
    m_has_Cancel(false),
    m_Cancel(NULL),
    m_has_Dismiss(false),
    m_Dismiss(NULL),
    m_has_Accel(false),
    m_Accel(0),
    m_has_Accel2(false),
    m_Accel2(0),
    m_has_Row(false),
    m_Row(0),
    m_has_Column(false),
    m_Column(0),
    m_has_Visible(false),
    m_Visible(NULL),
    m_has_RowHidden(false),
    m_RowHidden(NULL),
    m_has_ColHidden(false),
    m_ColHidden(NULL),
    m_has_VTEdit(false),
    m_VTEdit(0),
    m_has_MultiLine(false),
    m_MultiLine(NULL),
    m_has_VScroll(false),
    m_VScroll(NULL),
    m_has_ValidIds(false),
    m_ValidIds(NULL),
    m_has_FmlaRange(false),
    m_FmlaRange(""),
    m_has_WidthMin(false),
    m_WidthMin(0),
    m_has_Sel(false),
    m_Sel(0),
    m_has_NoThreeD2(false),
    m_NoThreeD2(NULL),
    m_has_SelType(false),
    m_SelType(""),
    m_has_MultiSel(false),
    m_MultiSel(""),
    m_has_LCT(false),
    m_LCT(""),
    m_has_st(false),
    m_st(""),
    m_has_DropStyle(false),
    m_DropStyle(""),
    m_has_Colored(false),
    m_Colored(NULL),
    m_has_DropLines(false),
    m_DropLines(0),
    m_has_Checked(false),
    m_Checked(0),
    m_has_FmlaLink(false),
    m_FmlaLink(""),
    m_has_FmlaPict(false),
    m_FmlaPict(""),
    m_has_NoThreeD(false),
    m_NoThreeD(NULL),
    m_has_FirstButton(false),
    m_FirstButton(NULL),
    m_has_FmlaGroup(false),
    m_FmlaGroup(""),
    m_has_Val(false),
    m_Val(0),
    m_has_Min(false),
    m_Min(0),
    m_has_Max(false),
    m_Max(0),
    m_has_Inc(false),
    m_Inc(0),
    m_has_Page(false),
    m_Page(0),
    m_has_Horiz(false),
    m_Horiz(NULL),
    m_has_Dx(false),
    m_Dx(0),
    m_has_MapOCX(false),
    m_MapOCX(NULL),
    m_has_CF(false),
    m_CF(NULL),
    m_has_Camera(false),
    m_Camera(NULL),
    m_has_RecalcAlways(false),
    m_RecalcAlways(NULL),
    m_has_AutoScale(false),
    m_AutoScale(NULL),
    m_has_DDE(false),
    m_DDE(NULL),
    m_has_UIObj(false),
    m_UIObj(NULL),
    m_has_ScriptText(false),
    m_ScriptText(""),
    m_has_ScriptExtended(false),
    m_ScriptExtended(""),
    m_has_ScriptLanguage(false),
    m_ScriptLanguage(0),
    m_has_ScriptLocation(false),
    m_ScriptLocation(0),
    m_has_FmlaTxbx(false),
    m_FmlaTxbx("")
    {
    }
    bool CT_ClientData::ChildGroup_1::has_MoveWithCells() const
    {    
    return m_has_MoveWithCells;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_MoveWithCells()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_MoveWithCells() const
    {    
    if (m_MoveWithCells)
    {
        return *m_MoveWithCells;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_SizeWithCells() const
    {    
    return m_has_SizeWithCells;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_SizeWithCells()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_SizeWithCells() const
    {    
    if (m_SizeWithCells)
    {
        return *m_SizeWithCells;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Anchor() const
    {    
    return m_has_Anchor;
    }

    void CT_ClientData::ChildGroup_1::set_Anchor(const XSD::string_& _Anchor)
    {    
    
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
    m_Anchor = _Anchor;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_Anchor() const
    {    
    return m_Anchor;
    }

    bool CT_ClientData::ChildGroup_1::has_Locked() const
    {    
    return m_has_Locked;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Locked()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Locked() const
    {    
    if (m_Locked)
    {
        return *m_Locked;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_DefaultSize() const
    {    
    return m_has_DefaultSize;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_DefaultSize()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_DefaultSize() const
    {    
    if (m_DefaultSize)
    {
        return *m_DefaultSize;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_PrintObject() const
    {    
    return m_has_PrintObject;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_PrintObject()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_PrintObject() const
    {    
    if (m_PrintObject)
    {
        return *m_PrintObject;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Disabled() const
    {    
    return m_has_Disabled;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Disabled()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Disabled() const
    {    
    if (m_Disabled)
    {
        return *m_Disabled;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_AutoFill() const
    {    
    return m_has_AutoFill;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_AutoFill()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_AutoFill() const
    {    
    if (m_AutoFill)
    {
        return *m_AutoFill;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_AutoLine() const
    {    
    return m_has_AutoLine;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_AutoLine()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_AutoLine() const
    {    
    if (m_AutoLine)
    {
        return *m_AutoLine;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_AutoPict() const
    {    
    return m_has_AutoPict;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_AutoPict()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_AutoPict() const
    {    
    if (m_AutoPict)
    {
        return *m_AutoPict;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaMacro() const
    {    
    return m_has_FmlaMacro;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaMacro(const XSD::string_& _FmlaMacro)
    {    
    
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
    m_TextVAlign = _TextVAlign;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_TextVAlign() const
    {    
    return m_TextVAlign;
    }

    bool CT_ClientData::ChildGroup_1::has_x() const
    {    
    return m_has_x;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_x()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_x() const
    {    
    if (m_x)
    {
        return *m_x;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_JustLastX() const
    {    
    return m_has_JustLastX;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_JustLastX()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_JustLastX() const
    {    
    if (m_JustLastX)
    {
        return *m_JustLastX;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_SecretEdit() const
    {    
    return m_has_SecretEdit;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_SecretEdit()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_SecretEdit() const
    {    
    if (m_SecretEdit)
    {
        return *m_SecretEdit;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Default() const
    {    
    return m_has_Default;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Default()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Default() const
    {    
    if (m_Default)
    {
        return *m_Default;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Help() const
    {    
    return m_has_Help;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Help()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Help() const
    {    
    if (m_Help)
    {
        return *m_Help;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Cancel() const
    {    
    return m_has_Cancel;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Cancel()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Cancel() const
    {    
    if (m_Cancel)
    {
        return *m_Cancel;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Dismiss() const
    {    
    return m_has_Dismiss;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Dismiss()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Dismiss() const
    {    
    if (m_Dismiss)
    {
        return *m_Dismiss;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Accel() const
    {    
    return m_has_Accel;
    }

    void CT_ClientData::ChildGroup_1::set_Accel(const XSD::integer_& _Accel)
    {    
    
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
    m_Column = _Column;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Column() const
    {    
    return m_Column;
    }

    bool CT_ClientData::ChildGroup_1::has_Visible() const
    {    
    return m_has_Visible;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Visible()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Visible() const
    {    
    if (m_Visible)
    {
        return *m_Visible;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_RowHidden() const
    {    
    return m_has_RowHidden;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_RowHidden()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_RowHidden() const
    {    
    if (m_RowHidden)
    {
        return *m_RowHidden;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_ColHidden() const
    {    
    return m_has_ColHidden;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_ColHidden()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_ColHidden() const
    {    
    if (m_ColHidden)
    {
        return *m_ColHidden;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_VTEdit() const
    {    
    return m_has_VTEdit;
    }

    void CT_ClientData::ChildGroup_1::set_VTEdit(const XSD::integer_& _VTEdit)
    {    
    
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
    m_VTEdit = _VTEdit;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_VTEdit() const
    {    
    return m_VTEdit;
    }

    bool CT_ClientData::ChildGroup_1::has_MultiLine() const
    {    
    return m_has_MultiLine;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_MultiLine()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_MultiLine() const
    {    
    if (m_MultiLine)
    {
        return *m_MultiLine;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_VScroll() const
    {    
    return m_has_VScroll;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_VScroll()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_VScroll() const
    {    
    if (m_VScroll)
    {
        return *m_VScroll;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_ValidIds() const
    {    
    return m_has_ValidIds;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_ValidIds()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_ValidIds() const
    {    
    if (m_ValidIds)
    {
        return *m_ValidIds;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaRange() const
    {    
    return m_has_FmlaRange;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaRange(const XSD::string_& _FmlaRange)
    {    
    
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
    m_Sel = _Sel;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Sel() const
    {    
    return m_Sel;
    }

    bool CT_ClientData::ChildGroup_1::has_NoThreeD2() const
    {    
    return m_has_NoThreeD2;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_NoThreeD2()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_NoThreeD2() const
    {    
    if (m_NoThreeD2)
    {
        return *m_NoThreeD2;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_SelType() const
    {    
    return m_has_SelType;
    }

    void CT_ClientData::ChildGroup_1::set_SelType(const XSD::string_& _SelType)
    {    
    
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
    m_DropStyle = _DropStyle;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_DropStyle() const
    {    
    return m_DropStyle;
    }

    bool CT_ClientData::ChildGroup_1::has_Colored() const
    {    
    return m_has_Colored;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Colored()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Colored() const
    {    
    if (m_Colored)
    {
        return *m_Colored;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_DropLines() const
    {    
    return m_has_DropLines;
    }

    void CT_ClientData::ChildGroup_1::set_DropLines(const XSD::integer_& _DropLines)
    {    
    
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
    m_FmlaPict = _FmlaPict;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_FmlaPict() const
    {    
    return m_FmlaPict;
    }

    bool CT_ClientData::ChildGroup_1::has_NoThreeD() const
    {    
    return m_has_NoThreeD;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_NoThreeD()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_NoThreeD() const
    {    
    if (m_NoThreeD)
    {
        return *m_NoThreeD;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_FirstButton() const
    {    
    return m_has_FirstButton;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_FirstButton()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_FirstButton() const
    {    
    if (m_FirstButton)
    {
        return *m_FirstButton;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_FmlaGroup() const
    {    
    return m_has_FmlaGroup;
    }

    void CT_ClientData::ChildGroup_1::set_FmlaGroup(const XSD::string_& _FmlaGroup)
    {    
    
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
    m_Page = _Page;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Page() const
    {    
    return m_Page;
    }

    bool CT_ClientData::ChildGroup_1::has_Horiz() const
    {    
    return m_has_Horiz;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Horiz()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Horiz() const
    {    
    if (m_Horiz)
    {
        return *m_Horiz;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Dx() const
    {    
    return m_has_Dx;
    }

    void CT_ClientData::ChildGroup_1::set_Dx(const XSD::integer_& _Dx)
    {    
    
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
    m_Dx = _Dx;
    }

    const XSD::integer_& CT_ClientData::ChildGroup_1::get_Dx() const
    {    
    return m_Dx;
    }

    bool CT_ClientData::ChildGroup_1::has_MapOCX() const
    {    
    return m_has_MapOCX;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_MapOCX()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_MapOCX() const
    {    
    if (m_MapOCX)
    {
        return *m_MapOCX;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_CF() const
    {    
    return m_has_CF;
    }

    ST_CF* CT_ClientData::ChildGroup_1::mutable_CF()
    {    
    
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

    const ST_CF& CT_ClientData::ChildGroup_1::get_CF() const
    {    
    if (m_CF)
    {
        return *m_CF;
    }
    return ST_CF::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_Camera() const
    {    
    return m_has_Camera;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_Camera()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_Camera() const
    {    
    if (m_Camera)
    {
        return *m_Camera;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_RecalcAlways() const
    {    
    return m_has_RecalcAlways;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_RecalcAlways()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_RecalcAlways() const
    {    
    if (m_RecalcAlways)
    {
        return *m_RecalcAlways;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_AutoScale() const
    {    
    return m_has_AutoScale;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_AutoScale()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_AutoScale() const
    {    
    if (m_AutoScale)
    {
        return *m_AutoScale;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_DDE() const
    {    
    return m_has_DDE;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_DDE()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_DDE() const
    {    
    if (m_DDE)
    {
        return *m_DDE;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_UIObj() const
    {    
    return m_has_UIObj;
    }

    ns_s::ST_TrueFalseBlank* CT_ClientData::ChildGroup_1::mutable_UIObj()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& CT_ClientData::ChildGroup_1::get_UIObj() const
    {    
    if (m_UIObj)
    {
        return *m_UIObj;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool CT_ClientData::ChildGroup_1::has_ScriptText() const
    {    
    return m_has_ScriptText;
    }

    void CT_ClientData::ChildGroup_1::set_ScriptText(const XSD::string_& _ScriptText)
    {    
    
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
    m_FmlaTxbx = _FmlaTxbx;
    }

    const XSD::string_& CT_ClientData::ChildGroup_1::get_FmlaTxbx() const
    {    
    return m_FmlaTxbx;
    }

CT_ClientData* CT_ClientData::default_instance_ = NULL;

    // ClientData_element
    ClientData_element::ClientData_element()
    :m_has_ObjectType_attr(false),
    m_ObjectType_attr(NULL)
    {
    }
    ns_s::ST_TrueFalseBlank* ClientData_element::add_MoveWithCells()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MoveWithCells();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_SizeWithCells()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_SizeWithCells();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_Anchor(const XSD::string_& _Anchor)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Anchor(_Anchor);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Locked()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Locked();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_DefaultSize()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_DefaultSize();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_PrintObject()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_PrintObject();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Disabled()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Disabled();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_AutoFill()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoFill();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_AutoLine()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoLine();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_AutoPict()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoPict();
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

    ns_s::ST_TrueFalseBlank* ClientData_element::add_x()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_x();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_JustLastX()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_JustLastX();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_SecretEdit()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_SecretEdit();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Default()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Default();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Help()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Help();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Cancel()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Cancel();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Dismiss()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Dismiss();
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

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Visible()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Visible();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_RowHidden()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_RowHidden();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_ColHidden()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_ColHidden();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_VTEdit(const XSD::integer_& _VTEdit)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_VTEdit(_VTEdit);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_MultiLine()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MultiLine();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_VScroll()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_VScroll();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_ValidIds()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_ValidIds();
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

    ns_s::ST_TrueFalseBlank* ClientData_element::add_NoThreeD2()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_NoThreeD2();
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

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Colored()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Colored();
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

    ns_s::ST_TrueFalseBlank* ClientData_element::add_NoThreeD()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_NoThreeD();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_FirstButton()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_FirstButton();
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

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Horiz()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Horiz();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void ClientData_element::add_Dx(const XSD::integer_& _Dx)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_Dx(_Dx);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_MapOCX()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_MapOCX();
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

    ns_s::ST_TrueFalseBlank* ClientData_element::add_Camera()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_Camera();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_RecalcAlways()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_RecalcAlways();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_AutoScale()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_AutoScale();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_DDE()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_DDE();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::add_UIObj()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_TrueFalseBlank* pNewChild = pChildGroup->mutable_UIObj();
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
            if ((*iter)->has_MoveWithCells())
            {
                _outStream << "<x:MoveWithCells>" << (*iter)->get_MoveWithCells().toString() << "</x:MoveWithCells>";
            }
            else if ((*iter)->has_SizeWithCells())
            {
                _outStream << "<x:SizeWithCells>" << (*iter)->get_SizeWithCells().toString() << "</x:SizeWithCells>";
            }
            else if ((*iter)->has_Anchor())
            {
                _outStream << "<x:Anchor>" << (*iter)->get_Anchor() << "</x:Anchor>";
            }
            else if ((*iter)->has_Locked())
            {
                _outStream << "<x:Locked>" << (*iter)->get_Locked().toString() << "</x:Locked>";
            }
            else if ((*iter)->has_DefaultSize())
            {
                _outStream << "<x:DefaultSize>" << (*iter)->get_DefaultSize().toString() << "</x:DefaultSize>";
            }
            else if ((*iter)->has_PrintObject())
            {
                _outStream << "<x:PrintObject>" << (*iter)->get_PrintObject().toString() << "</x:PrintObject>";
            }
            else if ((*iter)->has_Disabled())
            {
                _outStream << "<x:Disabled>" << (*iter)->get_Disabled().toString() << "</x:Disabled>";
            }
            else if ((*iter)->has_AutoFill())
            {
                _outStream << "<x:AutoFill>" << (*iter)->get_AutoFill().toString() << "</x:AutoFill>";
            }
            else if ((*iter)->has_AutoLine())
            {
                _outStream << "<x:AutoLine>" << (*iter)->get_AutoLine().toString() << "</x:AutoLine>";
            }
            else if ((*iter)->has_AutoPict())
            {
                _outStream << "<x:AutoPict>" << (*iter)->get_AutoPict().toString() << "</x:AutoPict>";
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
            else if ((*iter)->has_x())
            {
                _outStream << "<x:x>" << (*iter)->get_x().toString() << "</x:x>";
            }
            else if ((*iter)->has_JustLastX())
            {
                _outStream << "<x:JustLastX>" << (*iter)->get_JustLastX().toString() << "</x:JustLastX>";
            }
            else if ((*iter)->has_SecretEdit())
            {
                _outStream << "<x:SecretEdit>" << (*iter)->get_SecretEdit().toString() << "</x:SecretEdit>";
            }
            else if ((*iter)->has_Default())
            {
                _outStream << "<x:Default>" << (*iter)->get_Default().toString() << "</x:Default>";
            }
            else if ((*iter)->has_Help())
            {
                _outStream << "<x:Help>" << (*iter)->get_Help().toString() << "</x:Help>";
            }
            else if ((*iter)->has_Cancel())
            {
                _outStream << "<x:Cancel>" << (*iter)->get_Cancel().toString() << "</x:Cancel>";
            }
            else if ((*iter)->has_Dismiss())
            {
                _outStream << "<x:Dismiss>" << (*iter)->get_Dismiss().toString() << "</x:Dismiss>";
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
            else if ((*iter)->has_Visible())
            {
                _outStream << "<x:Visible>" << (*iter)->get_Visible().toString() << "</x:Visible>";
            }
            else if ((*iter)->has_RowHidden())
            {
                _outStream << "<x:RowHidden>" << (*iter)->get_RowHidden().toString() << "</x:RowHidden>";
            }
            else if ((*iter)->has_ColHidden())
            {
                _outStream << "<x:ColHidden>" << (*iter)->get_ColHidden().toString() << "</x:ColHidden>";
            }
            else if ((*iter)->has_VTEdit())
            {
                _outStream << "<x:VTEdit>" << (*iter)->get_VTEdit() << "</x:VTEdit>";
            }
            else if ((*iter)->has_MultiLine())
            {
                _outStream << "<x:MultiLine>" << (*iter)->get_MultiLine().toString() << "</x:MultiLine>";
            }
            else if ((*iter)->has_VScroll())
            {
                _outStream << "<x:VScroll>" << (*iter)->get_VScroll().toString() << "</x:VScroll>";
            }
            else if ((*iter)->has_ValidIds())
            {
                _outStream << "<x:ValidIds>" << (*iter)->get_ValidIds().toString() << "</x:ValidIds>";
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
            else if ((*iter)->has_NoThreeD2())
            {
                _outStream << "<x:NoThreeD2>" << (*iter)->get_NoThreeD2().toString() << "</x:NoThreeD2>";
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
            else if ((*iter)->has_Colored())
            {
                _outStream << "<x:Colored>" << (*iter)->get_Colored().toString() << "</x:Colored>";
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
            else if ((*iter)->has_NoThreeD())
            {
                _outStream << "<x:NoThreeD>" << (*iter)->get_NoThreeD().toString() << "</x:NoThreeD>";
            }
            else if ((*iter)->has_FirstButton())
            {
                _outStream << "<x:FirstButton>" << (*iter)->get_FirstButton().toString() << "</x:FirstButton>";
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
            else if ((*iter)->has_Horiz())
            {
                _outStream << "<x:Horiz>" << (*iter)->get_Horiz().toString() << "</x:Horiz>";
            }
            else if ((*iter)->has_Dx())
            {
                _outStream << "<x:Dx>" << (*iter)->get_Dx() << "</x:Dx>";
            }
            else if ((*iter)->has_MapOCX())
            {
                _outStream << "<x:MapOCX>" << (*iter)->get_MapOCX().toString() << "</x:MapOCX>";
            }
            else if ((*iter)->has_CF())
            {
                _outStream << "<x:CF>" << (*iter)->get_CF().toString() << "</x:CF>";
            }
            else if ((*iter)->has_Camera())
            {
                _outStream << "<x:Camera>" << (*iter)->get_Camera().toString() << "</x:Camera>";
            }
            else if ((*iter)->has_RecalcAlways())
            {
                _outStream << "<x:RecalcAlways>" << (*iter)->get_RecalcAlways().toString() << "</x:RecalcAlways>";
            }
            else if ((*iter)->has_AutoScale())
            {
                _outStream << "<x:AutoScale>" << (*iter)->get_AutoScale().toString() << "</x:AutoScale>";
            }
            else if ((*iter)->has_DDE())
            {
                _outStream << "<x:DDE>" << (*iter)->get_DDE().toString() << "</x:DDE>";
            }
            else if ((*iter)->has_UIObj())
            {
                _outStream << "<x:UIObj>" << (*iter)->get_UIObj().toString() << "</x:UIObj>";
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


    // ClientData_element::ChildGroup_1
    ClientData_element::ChildGroup_1::ChildGroup_1()
    :m_has_MoveWithCells(false),
    m_MoveWithCells(NULL),
    m_has_SizeWithCells(false),
    m_SizeWithCells(NULL),
    m_has_Anchor(false),
    m_Anchor(""),
    m_has_Locked(false),
    m_Locked(NULL),
    m_has_DefaultSize(false),
    m_DefaultSize(NULL),
    m_has_PrintObject(false),
    m_PrintObject(NULL),
    m_has_Disabled(false),
    m_Disabled(NULL),
    m_has_AutoFill(false),
    m_AutoFill(NULL),
    m_has_AutoLine(false),
    m_AutoLine(NULL),
    m_has_AutoPict(false),
    m_AutoPict(NULL),
    m_has_FmlaMacro(false),
    m_FmlaMacro(""),
    m_has_TextHAlign(false),
    m_TextHAlign(""),
    m_has_TextVAlign(false),
    m_TextVAlign(""),
    m_has_x(false),
    m_x(NULL),
    m_has_JustLastX(false),
    m_JustLastX(NULL),
    m_has_SecretEdit(false),
    m_SecretEdit(NULL),
    m_has_Default(false),
    m_Default(NULL),
    m_has_Help(false),
    m_Help(NULL),
    m_has_Cancel(false),
    m_Cancel(NULL),
    m_has_Dismiss(false),
    m_Dismiss(NULL),
    m_has_Accel(false),
    m_Accel(0),
    m_has_Accel2(false),
    m_Accel2(0),
    m_has_Row(false),
    m_Row(0),
    m_has_Column(false),
    m_Column(0),
    m_has_Visible(false),
    m_Visible(NULL),
    m_has_RowHidden(false),
    m_RowHidden(NULL),
    m_has_ColHidden(false),
    m_ColHidden(NULL),
    m_has_VTEdit(false),
    m_VTEdit(0),
    m_has_MultiLine(false),
    m_MultiLine(NULL),
    m_has_VScroll(false),
    m_VScroll(NULL),
    m_has_ValidIds(false),
    m_ValidIds(NULL),
    m_has_FmlaRange(false),
    m_FmlaRange(""),
    m_has_WidthMin(false),
    m_WidthMin(0),
    m_has_Sel(false),
    m_Sel(0),
    m_has_NoThreeD2(false),
    m_NoThreeD2(NULL),
    m_has_SelType(false),
    m_SelType(""),
    m_has_MultiSel(false),
    m_MultiSel(""),
    m_has_LCT(false),
    m_LCT(""),
    m_has_st(false),
    m_st(""),
    m_has_DropStyle(false),
    m_DropStyle(""),
    m_has_Colored(false),
    m_Colored(NULL),
    m_has_DropLines(false),
    m_DropLines(0),
    m_has_Checked(false),
    m_Checked(0),
    m_has_FmlaLink(false),
    m_FmlaLink(""),
    m_has_FmlaPict(false),
    m_FmlaPict(""),
    m_has_NoThreeD(false),
    m_NoThreeD(NULL),
    m_has_FirstButton(false),
    m_FirstButton(NULL),
    m_has_FmlaGroup(false),
    m_FmlaGroup(""),
    m_has_Val(false),
    m_Val(0),
    m_has_Min(false),
    m_Min(0),
    m_has_Max(false),
    m_Max(0),
    m_has_Inc(false),
    m_Inc(0),
    m_has_Page(false),
    m_Page(0),
    m_has_Horiz(false),
    m_Horiz(NULL),
    m_has_Dx(false),
    m_Dx(0),
    m_has_MapOCX(false),
    m_MapOCX(NULL),
    m_has_CF(false),
    m_CF(NULL),
    m_has_Camera(false),
    m_Camera(NULL),
    m_has_RecalcAlways(false),
    m_RecalcAlways(NULL),
    m_has_AutoScale(false),
    m_AutoScale(NULL),
    m_has_DDE(false),
    m_DDE(NULL),
    m_has_UIObj(false),
    m_UIObj(NULL),
    m_has_ScriptText(false),
    m_ScriptText(""),
    m_has_ScriptExtended(false),
    m_ScriptExtended(""),
    m_has_ScriptLanguage(false),
    m_ScriptLanguage(0),
    m_has_ScriptLocation(false),
    m_ScriptLocation(0),
    m_has_FmlaTxbx(false),
    m_FmlaTxbx("")
    {
    }
    bool ClientData_element::ChildGroup_1::has_MoveWithCells() const
    {    
    return m_has_MoveWithCells;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_MoveWithCells()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_MoveWithCells() const
    {    
    if (m_MoveWithCells)
    {
        return *m_MoveWithCells;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_SizeWithCells() const
    {    
    return m_has_SizeWithCells;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_SizeWithCells()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_SizeWithCells() const
    {    
    if (m_SizeWithCells)
    {
        return *m_SizeWithCells;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Anchor() const
    {    
    return m_has_Anchor;
    }

    void ClientData_element::ChildGroup_1::set_Anchor(const XSD::string_& _Anchor)
    {    
    
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
    m_Anchor = _Anchor;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_Anchor() const
    {    
    return m_Anchor;
    }

    bool ClientData_element::ChildGroup_1::has_Locked() const
    {    
    return m_has_Locked;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Locked()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Locked() const
    {    
    if (m_Locked)
    {
        return *m_Locked;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_DefaultSize() const
    {    
    return m_has_DefaultSize;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_DefaultSize()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_DefaultSize() const
    {    
    if (m_DefaultSize)
    {
        return *m_DefaultSize;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_PrintObject() const
    {    
    return m_has_PrintObject;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_PrintObject()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_PrintObject() const
    {    
    if (m_PrintObject)
    {
        return *m_PrintObject;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Disabled() const
    {    
    return m_has_Disabled;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Disabled()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Disabled() const
    {    
    if (m_Disabled)
    {
        return *m_Disabled;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_AutoFill() const
    {    
    return m_has_AutoFill;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_AutoFill()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_AutoFill() const
    {    
    if (m_AutoFill)
    {
        return *m_AutoFill;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_AutoLine() const
    {    
    return m_has_AutoLine;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_AutoLine()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_AutoLine() const
    {    
    if (m_AutoLine)
    {
        return *m_AutoLine;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_AutoPict() const
    {    
    return m_has_AutoPict;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_AutoPict()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_AutoPict() const
    {    
    if (m_AutoPict)
    {
        return *m_AutoPict;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_FmlaMacro() const
    {    
    return m_has_FmlaMacro;
    }

    void ClientData_element::ChildGroup_1::set_FmlaMacro(const XSD::string_& _FmlaMacro)
    {    
    
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
    m_TextVAlign = _TextVAlign;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_TextVAlign() const
    {    
    return m_TextVAlign;
    }

    bool ClientData_element::ChildGroup_1::has_x() const
    {    
    return m_has_x;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_x()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_x() const
    {    
    if (m_x)
    {
        return *m_x;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_JustLastX() const
    {    
    return m_has_JustLastX;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_JustLastX()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_JustLastX() const
    {    
    if (m_JustLastX)
    {
        return *m_JustLastX;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_SecretEdit() const
    {    
    return m_has_SecretEdit;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_SecretEdit()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_SecretEdit() const
    {    
    if (m_SecretEdit)
    {
        return *m_SecretEdit;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Default() const
    {    
    return m_has_Default;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Default()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Default() const
    {    
    if (m_Default)
    {
        return *m_Default;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Help() const
    {    
    return m_has_Help;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Help()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Help() const
    {    
    if (m_Help)
    {
        return *m_Help;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Cancel() const
    {    
    return m_has_Cancel;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Cancel()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Cancel() const
    {    
    if (m_Cancel)
    {
        return *m_Cancel;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Dismiss() const
    {    
    return m_has_Dismiss;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Dismiss()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Dismiss() const
    {    
    if (m_Dismiss)
    {
        return *m_Dismiss;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Accel() const
    {    
    return m_has_Accel;
    }

    void ClientData_element::ChildGroup_1::set_Accel(const XSD::integer_& _Accel)
    {    
    
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
    m_Column = _Column;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Column() const
    {    
    return m_Column;
    }

    bool ClientData_element::ChildGroup_1::has_Visible() const
    {    
    return m_has_Visible;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Visible()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Visible() const
    {    
    if (m_Visible)
    {
        return *m_Visible;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_RowHidden() const
    {    
    return m_has_RowHidden;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_RowHidden()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_RowHidden() const
    {    
    if (m_RowHidden)
    {
        return *m_RowHidden;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_ColHidden() const
    {    
    return m_has_ColHidden;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_ColHidden()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_ColHidden() const
    {    
    if (m_ColHidden)
    {
        return *m_ColHidden;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_VTEdit() const
    {    
    return m_has_VTEdit;
    }

    void ClientData_element::ChildGroup_1::set_VTEdit(const XSD::integer_& _VTEdit)
    {    
    
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
    m_VTEdit = _VTEdit;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_VTEdit() const
    {    
    return m_VTEdit;
    }

    bool ClientData_element::ChildGroup_1::has_MultiLine() const
    {    
    return m_has_MultiLine;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_MultiLine()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_MultiLine() const
    {    
    if (m_MultiLine)
    {
        return *m_MultiLine;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_VScroll() const
    {    
    return m_has_VScroll;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_VScroll()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_VScroll() const
    {    
    if (m_VScroll)
    {
        return *m_VScroll;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_ValidIds() const
    {    
    return m_has_ValidIds;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_ValidIds()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_ValidIds() const
    {    
    if (m_ValidIds)
    {
        return *m_ValidIds;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_FmlaRange() const
    {    
    return m_has_FmlaRange;
    }

    void ClientData_element::ChildGroup_1::set_FmlaRange(const XSD::string_& _FmlaRange)
    {    
    
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
    m_Sel = _Sel;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Sel() const
    {    
    return m_Sel;
    }

    bool ClientData_element::ChildGroup_1::has_NoThreeD2() const
    {    
    return m_has_NoThreeD2;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_NoThreeD2()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_NoThreeD2() const
    {    
    if (m_NoThreeD2)
    {
        return *m_NoThreeD2;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_SelType() const
    {    
    return m_has_SelType;
    }

    void ClientData_element::ChildGroup_1::set_SelType(const XSD::string_& _SelType)
    {    
    
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
    m_DropStyle = _DropStyle;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_DropStyle() const
    {    
    return m_DropStyle;
    }

    bool ClientData_element::ChildGroup_1::has_Colored() const
    {    
    return m_has_Colored;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Colored()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Colored() const
    {    
    if (m_Colored)
    {
        return *m_Colored;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_DropLines() const
    {    
    return m_has_DropLines;
    }

    void ClientData_element::ChildGroup_1::set_DropLines(const XSD::integer_& _DropLines)
    {    
    
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
    m_FmlaPict = _FmlaPict;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_FmlaPict() const
    {    
    return m_FmlaPict;
    }

    bool ClientData_element::ChildGroup_1::has_NoThreeD() const
    {    
    return m_has_NoThreeD;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_NoThreeD()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_NoThreeD() const
    {    
    if (m_NoThreeD)
    {
        return *m_NoThreeD;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_FirstButton() const
    {    
    return m_has_FirstButton;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_FirstButton()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_FirstButton() const
    {    
    if (m_FirstButton)
    {
        return *m_FirstButton;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_FmlaGroup() const
    {    
    return m_has_FmlaGroup;
    }

    void ClientData_element::ChildGroup_1::set_FmlaGroup(const XSD::string_& _FmlaGroup)
    {    
    
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
    m_Page = _Page;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Page() const
    {    
    return m_Page;
    }

    bool ClientData_element::ChildGroup_1::has_Horiz() const
    {    
    return m_has_Horiz;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Horiz()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Horiz() const
    {    
    if (m_Horiz)
    {
        return *m_Horiz;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Dx() const
    {    
    return m_has_Dx;
    }

    void ClientData_element::ChildGroup_1::set_Dx(const XSD::integer_& _Dx)
    {    
    
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
    m_Dx = _Dx;
    }

    const XSD::integer_& ClientData_element::ChildGroup_1::get_Dx() const
    {    
    return m_Dx;
    }

    bool ClientData_element::ChildGroup_1::has_MapOCX() const
    {    
    return m_has_MapOCX;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_MapOCX()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_MapOCX() const
    {    
    if (m_MapOCX)
    {
        return *m_MapOCX;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_CF() const
    {    
    return m_has_CF;
    }

    ST_CF* ClientData_element::ChildGroup_1::mutable_CF()
    {    
    
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

    const ST_CF& ClientData_element::ChildGroup_1::get_CF() const
    {    
    if (m_CF)
    {
        return *m_CF;
    }
    return ST_CF::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_Camera() const
    {    
    return m_has_Camera;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_Camera()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_Camera() const
    {    
    if (m_Camera)
    {
        return *m_Camera;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_RecalcAlways() const
    {    
    return m_has_RecalcAlways;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_RecalcAlways()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_RecalcAlways() const
    {    
    if (m_RecalcAlways)
    {
        return *m_RecalcAlways;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_AutoScale() const
    {    
    return m_has_AutoScale;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_AutoScale()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_AutoScale() const
    {    
    if (m_AutoScale)
    {
        return *m_AutoScale;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_DDE() const
    {    
    return m_has_DDE;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_DDE()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_DDE() const
    {    
    if (m_DDE)
    {
        return *m_DDE;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_UIObj() const
    {    
    return m_has_UIObj;
    }

    ns_s::ST_TrueFalseBlank* ClientData_element::ChildGroup_1::mutable_UIObj()
    {    
    
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

    const ns_s::ST_TrueFalseBlank& ClientData_element::ChildGroup_1::get_UIObj() const
    {    
    if (m_UIObj)
    {
        return *m_UIObj;
    }
    return ns_s::ST_TrueFalseBlank::default_instance();
    }

    bool ClientData_element::ChildGroup_1::has_ScriptText() const
    {    
    return m_has_ScriptText;
    }

    void ClientData_element::ChildGroup_1::set_ScriptText(const XSD::string_& _ScriptText)
    {    
    
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
    m_FmlaTxbx = _FmlaTxbx;
    }

    const XSD::string_& ClientData_element::ChildGroup_1::get_FmlaTxbx() const
    {    
    return m_FmlaTxbx;
    }

ClientData_element* ClientData_element::default_instance_ = NULL;
}