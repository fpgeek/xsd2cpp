#include "shared-documentPropertiesVariantTypes_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_vt {
 using namespace std;

    // Element

    // Attribute

    // ST_VectorBaseType
    ST_VectorBaseType::ST_VectorBaseType()
    :m_has_type(false)
    {
    }
    ST_VectorBaseType::ST_VectorBaseType(const ST_VectorBaseType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_VectorBaseType::~ST_VectorBaseType()
{
    clear();    }
    bool ST_VectorBaseType::has_type() const
    {    
    return m_has_type;
    }

    void ST_VectorBaseType::set_type(const ST_VectorBaseType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_VectorBaseType::Type& ST_VectorBaseType::get_type() const
    {    
                return m_type;
                }

    std::string ST_VectorBaseType::toString() const
    {    
    return ST_VectorBaseType::TypeStrList[m_type];
    }

    void ST_VectorBaseType::clear()
    {    
    m_has_type = false;
    }

    void ST_VectorBaseType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_VectorBaseType& ST_VectorBaseType::default_instance()
    {    
    if (!ST_VectorBaseType::default_instance_)
    {
        ST_VectorBaseType::default_instance_ = new ST_VectorBaseType();
    }
    return *ST_VectorBaseType::default_instance_;
    }

    const std::string ST_VectorBaseType::TypeStrList[] =
    {
        "variant",
        "i1",
        "i2",
        "i4",
        "i8",
        "ui1",
        "ui2",
        "ui4",
        "ui8",
        "r4",
        "r8",
        "lpstr",
        "lpwstr",
        "bstr",
        "date",
        "filetime",
        "bool",
        "cy",
        "error",
        "clsid"
    };
ST_VectorBaseType* ST_VectorBaseType::default_instance_ = NULL;

    // ST_ArrayBaseType
    ST_ArrayBaseType::ST_ArrayBaseType()
    :m_has_type(false)
    {
    }
    ST_ArrayBaseType::ST_ArrayBaseType(const ST_ArrayBaseType::Type& _type)
    :m_has_type(true),
    m_type(_type)
    {
    }
    ST_ArrayBaseType::~ST_ArrayBaseType()
{
    clear();    }
    bool ST_ArrayBaseType::has_type() const
    {    
    return m_has_type;
    }

    void ST_ArrayBaseType::set_type(const ST_ArrayBaseType::Type& _type)
    {    
    m_has_type = true;
    m_type = _type;
    }

    const ST_ArrayBaseType::Type& ST_ArrayBaseType::get_type() const
    {    
                return m_type;
                }

    std::string ST_ArrayBaseType::toString() const
    {    
    return ST_ArrayBaseType::TypeStrList[m_type];
    }

    void ST_ArrayBaseType::clear()
    {    
    m_has_type = false;
    }

    void ST_ArrayBaseType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_type)
    {
    _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
    }

    const ST_ArrayBaseType& ST_ArrayBaseType::default_instance()
    {    
    if (!ST_ArrayBaseType::default_instance_)
    {
        ST_ArrayBaseType::default_instance_ = new ST_ArrayBaseType();
    }
    return *ST_ArrayBaseType::default_instance_;
    }

    const std::string ST_ArrayBaseType::TypeStrList[] =
    {
        "variant",
        "i1",
        "i2",
        "i4",
        "int",
        "ui1",
        "ui2",
        "ui4",
        "uint",
        "r4",
        "r8",
        "decimal",
        "bstr",
        "date",
        "bool",
        "cy",
        "error"
    };
ST_ArrayBaseType* ST_ArrayBaseType::default_instance_ = NULL;

    // ST_Cy
    ST_Cy::ST_Cy()
    :m_has_string(false),
    m_string("")
    {
    }
    ST_Cy::ST_Cy(const XSD::string_& _string)
    :m_has_string(true)
    {
    
    set_string(_string);
    }
    ST_Cy::~ST_Cy()
{
    clear();    }
    bool ST_Cy::has_string() const
    {    
    return m_has_string;
    }

    void ST_Cy::set_string(const XSD::string_& _string)
    {    
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_Cy::get_string() const
    {    
    return m_string;
    }

    void ST_Cy::clear()
    {    
    m_has_string = false;
    m_string.clear();;
    }

    void ST_Cy::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
    }

    const ST_Cy& ST_Cy::default_instance()
    {    
    if (!ST_Cy::default_instance_)
    {
        ST_Cy::default_instance_ = new ST_Cy();
    }
    return *ST_Cy::default_instance_;
    }

    std::string ST_Cy::toString() const
    {    
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
    }

ST_Cy* ST_Cy::default_instance_ = NULL;

    // ST_Error
    ST_Error::ST_Error()
    :m_has_string(false),
    m_string("")
    {
    }
    ST_Error::ST_Error(const XSD::string_& _string)
    :m_has_string(true)
    {
    
    set_string(_string);
    }
    ST_Error::~ST_Error()
{
    clear();    }
    bool ST_Error::has_string() const
    {    
    return m_has_string;
    }

    void ST_Error::set_string(const XSD::string_& _string)
    {    
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_Error::get_string() const
    {    
    return m_string;
    }

    void ST_Error::clear()
    {    
    m_has_string = false;
    m_string.clear();;
    }

    void ST_Error::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
    }

    const ST_Error& ST_Error::default_instance()
    {    
    if (!ST_Error::default_instance_)
    {
        ST_Error::default_instance_ = new ST_Error();
    }
    return *ST_Error::default_instance_;
    }

    std::string ST_Error::toString() const
    {    
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
    }

ST_Error* ST_Error::default_instance_ = NULL;

    // CT_Empty
    CT_Empty::CT_Empty()

    {
    }
    CT_Empty::~CT_Empty()
{
    clear();    }
    void CT_Empty::clear()
    {    }

    void CT_Empty::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Empty& CT_Empty::default_instance()
    {    
    if (!CT_Empty::default_instance_)
    {
        CT_Empty::default_instance_ = new CT_Empty();
    }
    return *CT_Empty::default_instance_;
    }

CT_Empty* CT_Empty::default_instance_ = NULL;

    // CT_Null
    CT_Null::CT_Null()

    {
    }
    CT_Null::~CT_Null()
{
    clear();    }
    void CT_Null::clear()
    {    }

    void CT_Null::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
            _outStream << "</" << _elemName << ">";
                }

    const CT_Null& CT_Null::default_instance()
    {    
    if (!CT_Null::default_instance_)
    {
        CT_Null::default_instance_ = new CT_Null();
    }
    return *CT_Null::default_instance_;
    }

CT_Null* CT_Null::default_instance_ = NULL;

    // CT_Vector
    CT_Vector::CT_Vector()
    :m_has_baseType_attr(false),
    m_baseType_attr(NULL),
    m_has_size_attr(false),
    m_size_attr(0)
    {
    }
    CT_Vector::~CT_Vector()
{
    clear();    }
    CT_Variant* CT_Vector::add_variant()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Variant* pNewChild = pChildGroup->mutable_variant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Vector::add_i1(const XSD::byte_& _i1)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i1(_i1);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_i2(const XSD::short_& _i2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i2(_i2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_i4(const XSD::int_& _i4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i4(_i4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_i8(const XSD::long_& _i8)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i8(_i8);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_ui1(const XSD::unsignedByte_& _ui1)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui1(_ui1);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_ui2(const XSD::unsignedShort_& _ui2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui2(_ui2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_ui4(const XSD::unsignedInt_& _ui4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui4(_ui4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_ui8(const XSD::unsignedLong_& _ui8)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui8(_ui8);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_r4(const XSD::float_& _r4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_r4(_r4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_r8(const XSD::double_& _r8)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_r8(_r8);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_lpstr(const XSD::string_& _lpstr)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_lpstr(_lpstr);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_lpwstr(const XSD::string_& _lpwstr)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_lpwstr(_lpwstr);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_bstr(const XSD::string_& _bstr)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_bstr(_bstr);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_date(const XSD::dateTime_& _date)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_date(_date);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_filetime(const XSD::dateTime_& _filetime)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_filetime(_filetime);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Vector::add_bool(const XSD::boolean_& _bool)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_bool(_bool);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ST_Cy* CT_Vector::add_cy()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_Cy* pNewChild = pChildGroup->mutable_cy();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ST_Error* CT_Vector::add_error()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_Error* pNewChild = pChildGroup->mutable_error();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_Guid* CT_Vector::add_clsid()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_Guid* pNewChild = pChildGroup->mutable_clsid();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Vector::clear()
    {    
    m_has_baseType_attr = false;
    
    if (m_baseType_attr)
    {
        delete m_baseType_attr;
        m_baseType_attr = NULL;
    }
    
    
    m_has_size_attr = false;
    m_size_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_Vector::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    assert(m_has_baseType_attr);
    if (m_has_baseType_attr)
    {
        m_baseType_attr->toXmlAttr("baseType", _outStream);
    }
    
    
    assert(m_has_size_attr);
    if (m_has_size_attr)
    {
        _outStream << " " << "size" << "=\"" << m_size_attr << "\"";
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_variant())
    {
        (*iter)->get_variant().toXmlElem("vt:variant", "", _outStream);
    }
    
    
    else if ((*iter)->has_i1())
    {
        _outStream << "<vt:i1>" << (*iter)->get_i1() << "</vt:i1>";
    }
    
    
    else if ((*iter)->has_i2())
    {
        _outStream << "<vt:i2>" << (*iter)->get_i2() << "</vt:i2>";
    }
    
    
    else if ((*iter)->has_i4())
    {
        _outStream << "<vt:i4>" << (*iter)->get_i4() << "</vt:i4>";
    }
    
    
    else if ((*iter)->has_i8())
    {
        _outStream << "<vt:i8>" << (*iter)->get_i8() << "</vt:i8>";
    }
    
    
    else if ((*iter)->has_ui1())
    {
        _outStream << "<vt:ui1>" << (*iter)->get_ui1() << "</vt:ui1>";
    }
    
    
    else if ((*iter)->has_ui2())
    {
        _outStream << "<vt:ui2>" << (*iter)->get_ui2() << "</vt:ui2>";
    }
    
    
    else if ((*iter)->has_ui4())
    {
        _outStream << "<vt:ui4>" << (*iter)->get_ui4() << "</vt:ui4>";
    }
    
    
    else if ((*iter)->has_ui8())
    {
        _outStream << "<vt:ui8>" << (*iter)->get_ui8() << "</vt:ui8>";
    }
    
    
    else if ((*iter)->has_r4())
    {
        _outStream << "<vt:r4>" << (*iter)->get_r4() << "</vt:r4>";
    }
    
    
    else if ((*iter)->has_r8())
    {
        _outStream << "<vt:r8>" << (*iter)->get_r8() << "</vt:r8>";
    }
    
    
    else if ((*iter)->has_lpstr())
    {
        _outStream << "<vt:lpstr>" << (*iter)->get_lpstr() << "</vt:lpstr>";
    }
    
    
    else if ((*iter)->has_lpwstr())
    {
        _outStream << "<vt:lpwstr>" << (*iter)->get_lpwstr() << "</vt:lpwstr>";
    }
    
    
    else if ((*iter)->has_bstr())
    {
        _outStream << "<vt:bstr>" << (*iter)->get_bstr() << "</vt:bstr>";
    }
    
    
    else if ((*iter)->has_date())
    {
        _outStream << "<vt:date>" << (*iter)->get_date() << "</vt:date>";
    }
    
    
    else if ((*iter)->has_filetime())
    {
        _outStream << "<vt:filetime>" << (*iter)->get_filetime() << "</vt:filetime>";
    }
    
    
    else if ((*iter)->has_bool())
    {
        _outStream << "<vt:bool>" << (*iter)->get_bool() << "</vt:bool>";
    }
    
    
    else if ((*iter)->has_cy())
    {
        _outStream << "<vt:cy>" << (*iter)->get_cy().toString() << "</vt:cy>";
    }
    
    
    else if ((*iter)->has_error())
    {
        _outStream << "<vt:error>" << (*iter)->get_error().toString() << "</vt:error>";
    }
    
    
    else if ((*iter)->has_clsid())
    {
        _outStream << "<vt:clsid>" << (*iter)->get_clsid().toString() << "</vt:clsid>";
    }
    
    
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Vector& CT_Vector::default_instance()
    {    
    if (!CT_Vector::default_instance_)
    {
        CT_Vector::default_instance_ = new CT_Vector();
    }
    return *CT_Vector::default_instance_;
    }

    bool CT_Vector::has_baseType_attr() const
    {    
    return m_has_baseType_attr;
    }

    void CT_Vector::set_baseType_attr(const ST_VectorBaseType& _baseType_attr)
    {    
    m_has_baseType_attr = true;
    m_baseType_attr = new ST_VectorBaseType(_baseType_attr);
    }

    const ST_VectorBaseType& CT_Vector::get_baseType_attr() const
    {    
    if (m_baseType_attr)
    {
        return *m_baseType_attr;
    }
    return ST_VectorBaseType::default_instance();
    }

    bool CT_Vector::has_size_attr() const
    {    
    return m_has_size_attr;
    }

    void CT_Vector::set_size_attr(const XSD::unsignedInt_& _size_attr)
    {    
    m_has_size_attr = true;
    m_size_attr = _size_attr;
    }

    const XSD::unsignedInt_& CT_Vector::get_size_attr() const
    {    
    return m_size_attr;
    }


    // CT_Vector::ChildGroup_1
    CT_Vector::ChildGroup_1::ChildGroup_1()
    :m_has_variant(false),
    m_variant(NULL),
    m_has_i1(false),
    m_i1(0),
    m_has_i2(false),
    m_i2(0),
    m_has_i4(false),
    m_i4(0),
    m_has_i8(false),
    m_i8(0),
    m_has_ui1(false),
    m_ui1(0),
    m_has_ui2(false),
    m_ui2(0),
    m_has_ui4(false),
    m_ui4(0),
    m_has_ui8(false),
    m_ui8(0),
    m_has_r4(false),
    m_r4(0),
    m_has_r8(false),
    m_r8(0),
    m_has_lpstr(false),
    m_lpstr(""),
    m_has_lpwstr(false),
    m_lpwstr(""),
    m_has_bstr(false),
    m_bstr(""),
    m_has_date(false),
    m_date(""),
    m_has_filetime(false),
    m_filetime(""),
    m_has_bool(false),
    m_bool(false),
    m_has_cy(false),
    m_cy(NULL),
    m_has_error(false),
    m_error(NULL),
    m_has_clsid(false),
    m_clsid(NULL)
    {
    }
    bool CT_Vector::ChildGroup_1::has_variant() const
    {    
    return m_has_variant;
    }

    CT_Variant* CT_Vector::ChildGroup_1::mutable_variant()
    {    
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_variant = true;
    if (!m_variant)
    {
        m_variant = new CT_Variant();
    }
    return m_variant;
    }

    const CT_Variant& CT_Vector::ChildGroup_1::get_variant() const
    {    
    if (m_variant)
    {
        return *m_variant;
    }
    return CT_Variant::default_instance();
    }

    bool CT_Vector::ChildGroup_1::has_i1() const
    {    
    return m_has_i1;
    }

    void CT_Vector::ChildGroup_1::set_i1(const XSD::byte_& _i1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i1 = true;
    m_i1 = _i1;
    }

    const XSD::byte_& CT_Vector::ChildGroup_1::get_i1() const
    {    
    return m_i1;
    }

    bool CT_Vector::ChildGroup_1::has_i2() const
    {    
    return m_has_i2;
    }

    void CT_Vector::ChildGroup_1::set_i2(const XSD::short_& _i2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i2 = true;
    m_i2 = _i2;
    }

    const XSD::short_& CT_Vector::ChildGroup_1::get_i2() const
    {    
    return m_i2;
    }

    bool CT_Vector::ChildGroup_1::has_i4() const
    {    
    return m_has_i4;
    }

    void CT_Vector::ChildGroup_1::set_i4(const XSD::int_& _i4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i4 = true;
    m_i4 = _i4;
    }

    const XSD::int_& CT_Vector::ChildGroup_1::get_i4() const
    {    
    return m_i4;
    }

    bool CT_Vector::ChildGroup_1::has_i8() const
    {    
    return m_has_i8;
    }

    void CT_Vector::ChildGroup_1::set_i8(const XSD::long_& _i8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i8 = true;
    m_i8 = _i8;
    }

    const XSD::long_& CT_Vector::ChildGroup_1::get_i8() const
    {    
    return m_i8;
    }

    bool CT_Vector::ChildGroup_1::has_ui1() const
    {    
    return m_has_ui1;
    }

    void CT_Vector::ChildGroup_1::set_ui1(const XSD::unsignedByte_& _ui1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui1 = true;
    m_ui1 = _ui1;
    }

    const XSD::unsignedByte_& CT_Vector::ChildGroup_1::get_ui1() const
    {    
    return m_ui1;
    }

    bool CT_Vector::ChildGroup_1::has_ui2() const
    {    
    return m_has_ui2;
    }

    void CT_Vector::ChildGroup_1::set_ui2(const XSD::unsignedShort_& _ui2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui2 = true;
    m_ui2 = _ui2;
    }

    const XSD::unsignedShort_& CT_Vector::ChildGroup_1::get_ui2() const
    {    
    return m_ui2;
    }

    bool CT_Vector::ChildGroup_1::has_ui4() const
    {    
    return m_has_ui4;
    }

    void CT_Vector::ChildGroup_1::set_ui4(const XSD::unsignedInt_& _ui4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui4 = true;
    m_ui4 = _ui4;
    }

    const XSD::unsignedInt_& CT_Vector::ChildGroup_1::get_ui4() const
    {    
    return m_ui4;
    }

    bool CT_Vector::ChildGroup_1::has_ui8() const
    {    
    return m_has_ui8;
    }

    void CT_Vector::ChildGroup_1::set_ui8(const XSD::unsignedLong_& _ui8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui8 = true;
    m_ui8 = _ui8;
    }

    const XSD::unsignedLong_& CT_Vector::ChildGroup_1::get_ui8() const
    {    
    return m_ui8;
    }

    bool CT_Vector::ChildGroup_1::has_r4() const
    {    
    return m_has_r4;
    }

    void CT_Vector::ChildGroup_1::set_r4(const XSD::float_& _r4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_r4 = true;
    m_r4 = _r4;
    }

    const XSD::float_& CT_Vector::ChildGroup_1::get_r4() const
    {    
    return m_r4;
    }

    bool CT_Vector::ChildGroup_1::has_r8() const
    {    
    return m_has_r8;
    }

    void CT_Vector::ChildGroup_1::set_r8(const XSD::double_& _r8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_r8 = true;
    m_r8 = _r8;
    }

    const XSD::double_& CT_Vector::ChildGroup_1::get_r8() const
    {    
    return m_r8;
    }

    bool CT_Vector::ChildGroup_1::has_lpstr() const
    {    
    return m_has_lpstr;
    }

    void CT_Vector::ChildGroup_1::set_lpstr(const XSD::string_& _lpstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_lpstr = true;
    m_lpstr = _lpstr;
    }

    const XSD::string_& CT_Vector::ChildGroup_1::get_lpstr() const
    {    
    return m_lpstr;
    }

    bool CT_Vector::ChildGroup_1::has_lpwstr() const
    {    
    return m_has_lpwstr;
    }

    void CT_Vector::ChildGroup_1::set_lpwstr(const XSD::string_& _lpwstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_lpwstr = true;
    m_lpwstr = _lpwstr;
    }

    const XSD::string_& CT_Vector::ChildGroup_1::get_lpwstr() const
    {    
    return m_lpwstr;
    }

    bool CT_Vector::ChildGroup_1::has_bstr() const
    {    
    return m_has_bstr;
    }

    void CT_Vector::ChildGroup_1::set_bstr(const XSD::string_& _bstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_bstr = true;
    m_bstr = _bstr;
    }

    const XSD::string_& CT_Vector::ChildGroup_1::get_bstr() const
    {    
    return m_bstr;
    }

    bool CT_Vector::ChildGroup_1::has_date() const
    {    
    return m_has_date;
    }

    void CT_Vector::ChildGroup_1::set_date(const XSD::dateTime_& _date)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_date = true;
    m_date = _date;
    }

    const XSD::dateTime_& CT_Vector::ChildGroup_1::get_date() const
    {    
    return m_date;
    }

    bool CT_Vector::ChildGroup_1::has_filetime() const
    {    
    return m_has_filetime;
    }

    void CT_Vector::ChildGroup_1::set_filetime(const XSD::dateTime_& _filetime)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_filetime = true;
    m_filetime = _filetime;
    }

    const XSD::dateTime_& CT_Vector::ChildGroup_1::get_filetime() const
    {    
    return m_filetime;
    }

    bool CT_Vector::ChildGroup_1::has_bool() const
    {    
    return m_has_bool;
    }

    void CT_Vector::ChildGroup_1::set_bool(const XSD::boolean_& _bool)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_bool = true;
    m_bool = _bool;
    }

    const XSD::boolean_& CT_Vector::ChildGroup_1::get_bool() const
    {    
    return m_bool;
    }

    bool CT_Vector::ChildGroup_1::has_cy() const
    {    
    return m_has_cy;
    }

    ST_Cy* CT_Vector::ChildGroup_1::mutable_cy()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_cy = true;
    if (!m_cy)
    {
        m_cy = new ST_Cy();
    }
    return m_cy;
    }

    const ST_Cy& CT_Vector::ChildGroup_1::get_cy() const
    {    
    if (m_cy)
    {
        return *m_cy;
    }
    return ST_Cy::default_instance();
    }

    bool CT_Vector::ChildGroup_1::has_error() const
    {    
    return m_has_error;
    }

    ST_Error* CT_Vector::ChildGroup_1::mutable_error()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_error = true;
    if (!m_error)
    {
        m_error = new ST_Error();
    }
    return m_error;
    }

    const ST_Error& CT_Vector::ChildGroup_1::get_error() const
    {    
    if (m_error)
    {
        return *m_error;
    }
    return ST_Error::default_instance();
    }

    bool CT_Vector::ChildGroup_1::has_clsid() const
    {    
    return m_has_clsid;
    }

    ns_s::ST_Guid* CT_Vector::ChildGroup_1::mutable_clsid()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = true;
    if (!m_clsid)
    {
        m_clsid = new ns_s::ST_Guid();
    }
    return m_clsid;
    }

    const ns_s::ST_Guid& CT_Vector::ChildGroup_1::get_clsid() const
    {    
    if (m_clsid)
    {
        return *m_clsid;
    }
    return ns_s::ST_Guid::default_instance();
    }

CT_Vector* CT_Vector::default_instance_ = NULL;

    // CT_Array
    CT_Array::CT_Array()
    :m_has_lBounds_attr(false),
    m_lBounds_attr(0),
    m_has_uBounds_attr(false),
    m_uBounds_attr(0),
    m_has_baseType_attr(false),
    m_baseType_attr(NULL)
    {
    }
    CT_Array::~CT_Array()
{
    clear();    }
    CT_Variant* CT_Array::add_variant()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Variant* pNewChild = pChildGroup->mutable_variant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Array::add_i1(const XSD::byte_& _i1)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i1(_i1);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_i2(const XSD::short_& _i2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i2(_i2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_i4(const XSD::int_& _i4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i4(_i4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_int(const XSD::int_& _int)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_int(_int);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_ui1(const XSD::unsignedByte_& _ui1)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui1(_ui1);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_ui2(const XSD::unsignedShort_& _ui2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui2(_ui2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_ui4(const XSD::unsignedInt_& _ui4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui4(_ui4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_uint(const XSD::unsignedInt_& _uint)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_uint(_uint);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_r4(const XSD::float_& _r4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_r4(_r4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_r8(const XSD::double_& _r8)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_r8(_r8);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_decimal(const XSD::decimal_& _decimal)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_decimal(_decimal);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_bstr(const XSD::string_& _bstr)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_bstr(_bstr);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_date(const XSD::dateTime_& _date)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_date(_date);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void CT_Array::add_bool(const XSD::boolean_& _bool)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_bool(_bool);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ST_Error* CT_Array::add_error()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_Error* pNewChild = pChildGroup->mutable_error();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ST_Cy* CT_Array::add_cy()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_Cy* pNewChild = pChildGroup->mutable_cy();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Array::clear()
    {    
    m_has_lBounds_attr = false;
    m_lBounds_attr = 0;
    
    m_has_uBounds_attr = false;
    m_uBounds_attr = 0;
    
    m_has_baseType_attr = false;
    
    if (m_baseType_attr)
    {
        delete m_baseType_attr;
        m_baseType_attr = NULL;
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

    void CT_Array::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    assert(m_has_lBounds_attr);
    if (m_has_lBounds_attr)
    {
        _outStream << " " << "lBounds" << "=\"" << m_lBounds_attr << "\"";
    }
    
    
    assert(m_has_uBounds_attr);
    if (m_has_uBounds_attr)
    {
        _outStream << " " << "uBounds" << "=\"" << m_uBounds_attr << "\"";
    }
    
    
    assert(m_has_baseType_attr);
    if (m_has_baseType_attr)
    {
        m_baseType_attr->toXmlAttr("baseType", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_variant())
    {
        (*iter)->get_variant().toXmlElem("vt:variant", "", _outStream);
    }
    
    
    else if ((*iter)->has_i1())
    {
        _outStream << "<vt:i1>" << (*iter)->get_i1() << "</vt:i1>";
    }
    
    
    else if ((*iter)->has_i2())
    {
        _outStream << "<vt:i2>" << (*iter)->get_i2() << "</vt:i2>";
    }
    
    
    else if ((*iter)->has_i4())
    {
        _outStream << "<vt:i4>" << (*iter)->get_i4() << "</vt:i4>";
    }
    
    
    else if ((*iter)->has_int())
    {
        _outStream << "<vt:int>" << (*iter)->get_int() << "</vt:int>";
    }
    
    
    else if ((*iter)->has_ui1())
    {
        _outStream << "<vt:ui1>" << (*iter)->get_ui1() << "</vt:ui1>";
    }
    
    
    else if ((*iter)->has_ui2())
    {
        _outStream << "<vt:ui2>" << (*iter)->get_ui2() << "</vt:ui2>";
    }
    
    
    else if ((*iter)->has_ui4())
    {
        _outStream << "<vt:ui4>" << (*iter)->get_ui4() << "</vt:ui4>";
    }
    
    
    else if ((*iter)->has_uint())
    {
        _outStream << "<vt:uint>" << (*iter)->get_uint() << "</vt:uint>";
    }
    
    
    else if ((*iter)->has_r4())
    {
        _outStream << "<vt:r4>" << (*iter)->get_r4() << "</vt:r4>";
    }
    
    
    else if ((*iter)->has_r8())
    {
        _outStream << "<vt:r8>" << (*iter)->get_r8() << "</vt:r8>";
    }
    
    
    else if ((*iter)->has_decimal())
    {
        _outStream << "<vt:decimal>" << (*iter)->get_decimal() << "</vt:decimal>";
    }
    
    
    else if ((*iter)->has_bstr())
    {
        _outStream << "<vt:bstr>" << (*iter)->get_bstr() << "</vt:bstr>";
    }
    
    
    else if ((*iter)->has_date())
    {
        _outStream << "<vt:date>" << (*iter)->get_date() << "</vt:date>";
    }
    
    
    else if ((*iter)->has_bool())
    {
        _outStream << "<vt:bool>" << (*iter)->get_bool() << "</vt:bool>";
    }
    
    
    else if ((*iter)->has_error())
    {
        _outStream << "<vt:error>" << (*iter)->get_error().toString() << "</vt:error>";
    }
    
    
    else if ((*iter)->has_cy())
    {
        _outStream << "<vt:cy>" << (*iter)->get_cy().toString() << "</vt:cy>";
    }
    
    
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Array& CT_Array::default_instance()
    {    
    if (!CT_Array::default_instance_)
    {
        CT_Array::default_instance_ = new CT_Array();
    }
    return *CT_Array::default_instance_;
    }

    bool CT_Array::has_lBounds_attr() const
    {    
    return m_has_lBounds_attr;
    }

    void CT_Array::set_lBounds_attr(const XSD::int_& _lBounds_attr)
    {    
    m_has_lBounds_attr = true;
    m_lBounds_attr = _lBounds_attr;
    }

    const XSD::int_& CT_Array::get_lBounds_attr() const
    {    
    return m_lBounds_attr;
    }

    bool CT_Array::has_uBounds_attr() const
    {    
    return m_has_uBounds_attr;
    }

    void CT_Array::set_uBounds_attr(const XSD::int_& _uBounds_attr)
    {    
    m_has_uBounds_attr = true;
    m_uBounds_attr = _uBounds_attr;
    }

    const XSD::int_& CT_Array::get_uBounds_attr() const
    {    
    return m_uBounds_attr;
    }

    bool CT_Array::has_baseType_attr() const
    {    
    return m_has_baseType_attr;
    }

    void CT_Array::set_baseType_attr(const ST_ArrayBaseType& _baseType_attr)
    {    
    m_has_baseType_attr = true;
    m_baseType_attr = new ST_ArrayBaseType(_baseType_attr);
    }

    const ST_ArrayBaseType& CT_Array::get_baseType_attr() const
    {    
    if (m_baseType_attr)
    {
        return *m_baseType_attr;
    }
    return ST_ArrayBaseType::default_instance();
    }


    // CT_Array::ChildGroup_1
    CT_Array::ChildGroup_1::ChildGroup_1()
    :m_has_variant(false),
    m_variant(NULL),
    m_has_i1(false),
    m_i1(0),
    m_has_i2(false),
    m_i2(0),
    m_has_i4(false),
    m_i4(0),
    m_has_int(false),
    m_int(0),
    m_has_ui1(false),
    m_ui1(0),
    m_has_ui2(false),
    m_ui2(0),
    m_has_ui4(false),
    m_ui4(0),
    m_has_uint(false),
    m_uint(0),
    m_has_r4(false),
    m_r4(0),
    m_has_r8(false),
    m_r8(0),
    m_has_decimal(false),
    m_decimal(0),
    m_has_bstr(false),
    m_bstr(""),
    m_has_date(false),
    m_date(""),
    m_has_bool(false),
    m_bool(false),
    m_has_error(false),
    m_error(NULL),
    m_has_cy(false),
    m_cy(NULL)
    {
    }
    bool CT_Array::ChildGroup_1::has_variant() const
    {    
    return m_has_variant;
    }

    CT_Variant* CT_Array::ChildGroup_1::mutable_variant()
    {    
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_variant = true;
    if (!m_variant)
    {
        m_variant = new CT_Variant();
    }
    return m_variant;
    }

    const CT_Variant& CT_Array::ChildGroup_1::get_variant() const
    {    
    if (m_variant)
    {
        return *m_variant;
    }
    return CT_Variant::default_instance();
    }

    bool CT_Array::ChildGroup_1::has_i1() const
    {    
    return m_has_i1;
    }

    void CT_Array::ChildGroup_1::set_i1(const XSD::byte_& _i1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_i1 = true;
    m_i1 = _i1;
    }

    const XSD::byte_& CT_Array::ChildGroup_1::get_i1() const
    {    
    return m_i1;
    }

    bool CT_Array::ChildGroup_1::has_i2() const
    {    
    return m_has_i2;
    }

    void CT_Array::ChildGroup_1::set_i2(const XSD::short_& _i2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_i2 = true;
    m_i2 = _i2;
    }

    const XSD::short_& CT_Array::ChildGroup_1::get_i2() const
    {    
    return m_i2;
    }

    bool CT_Array::ChildGroup_1::has_i4() const
    {    
    return m_has_i4;
    }

    void CT_Array::ChildGroup_1::set_i4(const XSD::int_& _i4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_i4 = true;
    m_i4 = _i4;
    }

    const XSD::int_& CT_Array::ChildGroup_1::get_i4() const
    {    
    return m_i4;
    }

    bool CT_Array::ChildGroup_1::has_int() const
    {    
    return m_has_int;
    }

    void CT_Array::ChildGroup_1::set_int(const XSD::int_& _int)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& CT_Array::ChildGroup_1::get_int() const
    {    
    return m_int;
    }

    bool CT_Array::ChildGroup_1::has_ui1() const
    {    
    return m_has_ui1;
    }

    void CT_Array::ChildGroup_1::set_ui1(const XSD::unsignedByte_& _ui1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_ui1 = true;
    m_ui1 = _ui1;
    }

    const XSD::unsignedByte_& CT_Array::ChildGroup_1::get_ui1() const
    {    
    return m_ui1;
    }

    bool CT_Array::ChildGroup_1::has_ui2() const
    {    
    return m_has_ui2;
    }

    void CT_Array::ChildGroup_1::set_ui2(const XSD::unsignedShort_& _ui2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_ui2 = true;
    m_ui2 = _ui2;
    }

    const XSD::unsignedShort_& CT_Array::ChildGroup_1::get_ui2() const
    {    
    return m_ui2;
    }

    bool CT_Array::ChildGroup_1::has_ui4() const
    {    
    return m_has_ui4;
    }

    void CT_Array::ChildGroup_1::set_ui4(const XSD::unsignedInt_& _ui4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_ui4 = true;
    m_ui4 = _ui4;
    }

    const XSD::unsignedInt_& CT_Array::ChildGroup_1::get_ui4() const
    {    
    return m_ui4;
    }

    bool CT_Array::ChildGroup_1::has_uint() const
    {    
    return m_has_uint;
    }

    void CT_Array::ChildGroup_1::set_uint(const XSD::unsignedInt_& _uint)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_uint = true;
    m_uint = _uint;
    }

    const XSD::unsignedInt_& CT_Array::ChildGroup_1::get_uint() const
    {    
    return m_uint;
    }

    bool CT_Array::ChildGroup_1::has_r4() const
    {    
    return m_has_r4;
    }

    void CT_Array::ChildGroup_1::set_r4(const XSD::float_& _r4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_r4 = true;
    m_r4 = _r4;
    }

    const XSD::float_& CT_Array::ChildGroup_1::get_r4() const
    {    
    return m_r4;
    }

    bool CT_Array::ChildGroup_1::has_r8() const
    {    
    return m_has_r8;
    }

    void CT_Array::ChildGroup_1::set_r8(const XSD::double_& _r8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_r8 = true;
    m_r8 = _r8;
    }

    const XSD::double_& CT_Array::ChildGroup_1::get_r8() const
    {    
    return m_r8;
    }

    bool CT_Array::ChildGroup_1::has_decimal() const
    {    
    return m_has_decimal;
    }

    void CT_Array::ChildGroup_1::set_decimal(const XSD::decimal_& _decimal)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_decimal = true;
    m_decimal = _decimal;
    }

    const XSD::decimal_& CT_Array::ChildGroup_1::get_decimal() const
    {    
    return m_decimal;
    }

    bool CT_Array::ChildGroup_1::has_bstr() const
    {    
    return m_has_bstr;
    }

    void CT_Array::ChildGroup_1::set_bstr(const XSD::string_& _bstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_bstr = true;
    m_bstr = _bstr;
    }

    const XSD::string_& CT_Array::ChildGroup_1::get_bstr() const
    {    
    return m_bstr;
    }

    bool CT_Array::ChildGroup_1::has_date() const
    {    
    return m_has_date;
    }

    void CT_Array::ChildGroup_1::set_date(const XSD::dateTime_& _date)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_date = true;
    m_date = _date;
    }

    const XSD::dateTime_& CT_Array::ChildGroup_1::get_date() const
    {    
    return m_date;
    }

    bool CT_Array::ChildGroup_1::has_bool() const
    {    
    return m_has_bool;
    }

    void CT_Array::ChildGroup_1::set_bool(const XSD::boolean_& _bool)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_bool = true;
    m_bool = _bool;
    }

    const XSD::boolean_& CT_Array::ChildGroup_1::get_bool() const
    {    
    return m_bool;
    }

    bool CT_Array::ChildGroup_1::has_error() const
    {    
    return m_has_error;
    }

    ST_Error* CT_Array::ChildGroup_1::mutable_error()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = true;
    if (!m_error)
    {
        m_error = new ST_Error();
    }
    return m_error;
    }

    const ST_Error& CT_Array::ChildGroup_1::get_error() const
    {    
    if (m_error)
    {
        return *m_error;
    }
    return ST_Error::default_instance();
    }

    bool CT_Array::ChildGroup_1::has_cy() const
    {    
    return m_has_cy;
    }

    ST_Cy* CT_Array::ChildGroup_1::mutable_cy()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = true;
    if (!m_cy)
    {
        m_cy = new ST_Cy();
    }
    return m_cy;
    }

    const ST_Cy& CT_Array::ChildGroup_1::get_cy() const
    {    
    if (m_cy)
    {
        return *m_cy;
    }
    return ST_Cy::default_instance();
    }

CT_Array* CT_Array::default_instance_ = NULL;

    // CT_Variant
    CT_Variant::CT_Variant()
    :m_has_variant(false),
    m_variant(NULL),
    m_has_vector(false),
    m_vector(NULL),
    m_has_array(false),
    m_array(NULL),
    m_has_blob(false),
    m_blob(""),
    m_has_oblob(false),
    m_oblob(""),
    m_has_empty(false),
    m_empty(NULL),
    m_has_null(false),
    m_null(NULL),
    m_has_i1(false),
    m_i1(0),
    m_has_i2(false),
    m_i2(0),
    m_has_i4(false),
    m_i4(0),
    m_has_i8(false),
    m_i8(0),
    m_has_int(false),
    m_int(0),
    m_has_ui1(false),
    m_ui1(0),
    m_has_ui2(false),
    m_ui2(0),
    m_has_ui4(false),
    m_ui4(0),
    m_has_ui8(false),
    m_ui8(0),
    m_has_uint(false),
    m_uint(0),
    m_has_r4(false),
    m_r4(0),
    m_has_r8(false),
    m_r8(0),
    m_has_decimal(false),
    m_decimal(0),
    m_has_lpstr(false),
    m_lpstr(""),
    m_has_lpwstr(false),
    m_lpwstr(""),
    m_has_bstr(false),
    m_bstr(""),
    m_has_date(false),
    m_date(""),
    m_has_filetime(false),
    m_filetime(""),
    m_has_bool(false),
    m_bool(false),
    m_has_cy(false),
    m_cy(NULL),
    m_has_error(false),
    m_error(NULL),
    m_has_stream(false),
    m_stream(""),
    m_has_ostream(false),
    m_ostream(""),
    m_has_storage(false),
    m_storage(""),
    m_has_ostorage(false),
    m_ostorage(""),
    m_has_vstream(false),
    m_vstream(NULL),
    m_has_clsid(false),
    m_clsid(NULL)
    {
    }
    CT_Variant::~CT_Variant()
{
    clear();    }
    bool CT_Variant::has_variant() const
    {    
    return m_has_variant;
    }

    CT_Variant* CT_Variant::mutable_variant()
    {    
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_variant = true;
    if (!m_variant)
    {
        m_variant = new CT_Variant();
    }
    return m_variant;
    }

    const CT_Variant& CT_Variant::get_variant() const
    {    
    if (m_variant)
    {
        return *m_variant;
    }
    return CT_Variant::default_instance();
    }

    bool CT_Variant::has_vector() const
    {    
    return m_has_vector;
    }

    CT_Vector* CT_Variant::mutable_vector()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_vector = true;
    if (!m_vector)
    {
        m_vector = new CT_Vector();
    }
    return m_vector;
    }

    const CT_Vector& CT_Variant::get_vector() const
    {    
    if (m_vector)
    {
        return *m_vector;
    }
    return CT_Vector::default_instance();
    }

    bool CT_Variant::has_array() const
    {    
    return m_has_array;
    }

    CT_Array* CT_Variant::mutable_array()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_array = true;
    if (!m_array)
    {
        m_array = new CT_Array();
    }
    return m_array;
    }

    const CT_Array& CT_Variant::get_array() const
    {    
    if (m_array)
    {
        return *m_array;
    }
    return CT_Array::default_instance();
    }

    bool CT_Variant::has_blob() const
    {    
    return m_has_blob;
    }

    void CT_Variant::set_blob(const XSD::base64Binary_& _blob)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_blob = true;
    m_blob = _blob;
    }

    const XSD::base64Binary_& CT_Variant::get_blob() const
    {    
    return m_blob;
    }

    bool CT_Variant::has_oblob() const
    {    
    return m_has_oblob;
    }

    void CT_Variant::set_oblob(const XSD::base64Binary_& _oblob)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_oblob = true;
    m_oblob = _oblob;
    }

    const XSD::base64Binary_& CT_Variant::get_oblob() const
    {    
    return m_oblob;
    }

    bool CT_Variant::has_empty() const
    {    
    return m_has_empty;
    }

    CT_Empty* CT_Variant::mutable_empty()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_empty = true;
    if (!m_empty)
    {
        m_empty = new CT_Empty();
    }
    return m_empty;
    }

    const CT_Empty& CT_Variant::get_empty() const
    {    
    if (m_empty)
    {
        return *m_empty;
    }
    return CT_Empty::default_instance();
    }

    bool CT_Variant::has_null() const
    {    
    return m_has_null;
    }

    CT_Null* CT_Variant::mutable_null()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_null = true;
    if (!m_null)
    {
        m_null = new CT_Null();
    }
    return m_null;
    }

    const CT_Null& CT_Variant::get_null() const
    {    
    if (m_null)
    {
        return *m_null;
    }
    return CT_Null::default_instance();
    }

    bool CT_Variant::has_i1() const
    {    
    return m_has_i1;
    }

    void CT_Variant::set_i1(const XSD::byte_& _i1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i1 = true;
    m_i1 = _i1;
    }

    const XSD::byte_& CT_Variant::get_i1() const
    {    
    return m_i1;
    }

    bool CT_Variant::has_i2() const
    {    
    return m_has_i2;
    }

    void CT_Variant::set_i2(const XSD::short_& _i2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i2 = true;
    m_i2 = _i2;
    }

    const XSD::short_& CT_Variant::get_i2() const
    {    
    return m_i2;
    }

    bool CT_Variant::has_i4() const
    {    
    return m_has_i4;
    }

    void CT_Variant::set_i4(const XSD::int_& _i4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i4 = true;
    m_i4 = _i4;
    }

    const XSD::int_& CT_Variant::get_i4() const
    {    
    return m_i4;
    }

    bool CT_Variant::has_i8() const
    {    
    return m_has_i8;
    }

    void CT_Variant::set_i8(const XSD::long_& _i8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i8 = true;
    m_i8 = _i8;
    }

    const XSD::long_& CT_Variant::get_i8() const
    {    
    return m_i8;
    }

    bool CT_Variant::has_int() const
    {    
    return m_has_int;
    }

    void CT_Variant::set_int(const XSD::int_& _int)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& CT_Variant::get_int() const
    {    
    return m_int;
    }

    bool CT_Variant::has_ui1() const
    {    
    return m_has_ui1;
    }

    void CT_Variant::set_ui1(const XSD::unsignedByte_& _ui1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui1 = true;
    m_ui1 = _ui1;
    }

    const XSD::unsignedByte_& CT_Variant::get_ui1() const
    {    
    return m_ui1;
    }

    bool CT_Variant::has_ui2() const
    {    
    return m_has_ui2;
    }

    void CT_Variant::set_ui2(const XSD::unsignedShort_& _ui2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui2 = true;
    m_ui2 = _ui2;
    }

    const XSD::unsignedShort_& CT_Variant::get_ui2() const
    {    
    return m_ui2;
    }

    bool CT_Variant::has_ui4() const
    {    
    return m_has_ui4;
    }

    void CT_Variant::set_ui4(const XSD::unsignedInt_& _ui4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui4 = true;
    m_ui4 = _ui4;
    }

    const XSD::unsignedInt_& CT_Variant::get_ui4() const
    {    
    return m_ui4;
    }

    bool CT_Variant::has_ui8() const
    {    
    return m_has_ui8;
    }

    void CT_Variant::set_ui8(const XSD::unsignedLong_& _ui8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui8 = true;
    m_ui8 = _ui8;
    }

    const XSD::unsignedLong_& CT_Variant::get_ui8() const
    {    
    return m_ui8;
    }

    bool CT_Variant::has_uint() const
    {    
    return m_has_uint;
    }

    void CT_Variant::set_uint(const XSD::unsignedInt_& _uint)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_uint = true;
    m_uint = _uint;
    }

    const XSD::unsignedInt_& CT_Variant::get_uint() const
    {    
    return m_uint;
    }

    bool CT_Variant::has_r4() const
    {    
    return m_has_r4;
    }

    void CT_Variant::set_r4(const XSD::float_& _r4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_r4 = true;
    m_r4 = _r4;
    }

    const XSD::float_& CT_Variant::get_r4() const
    {    
    return m_r4;
    }

    bool CT_Variant::has_r8() const
    {    
    return m_has_r8;
    }

    void CT_Variant::set_r8(const XSD::double_& _r8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_r8 = true;
    m_r8 = _r8;
    }

    const XSD::double_& CT_Variant::get_r8() const
    {    
    return m_r8;
    }

    bool CT_Variant::has_decimal() const
    {    
    return m_has_decimal;
    }

    void CT_Variant::set_decimal(const XSD::decimal_& _decimal)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_decimal = true;
    m_decimal = _decimal;
    }

    const XSD::decimal_& CT_Variant::get_decimal() const
    {    
    return m_decimal;
    }

    bool CT_Variant::has_lpstr() const
    {    
    return m_has_lpstr;
    }

    void CT_Variant::set_lpstr(const XSD::string_& _lpstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_lpstr = true;
    m_lpstr = _lpstr;
    }

    const XSD::string_& CT_Variant::get_lpstr() const
    {    
    return m_lpstr;
    }

    bool CT_Variant::has_lpwstr() const
    {    
    return m_has_lpwstr;
    }

    void CT_Variant::set_lpwstr(const XSD::string_& _lpwstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_lpwstr = true;
    m_lpwstr = _lpwstr;
    }

    const XSD::string_& CT_Variant::get_lpwstr() const
    {    
    return m_lpwstr;
    }

    bool CT_Variant::has_bstr() const
    {    
    return m_has_bstr;
    }

    void CT_Variant::set_bstr(const XSD::string_& _bstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_bstr = true;
    m_bstr = _bstr;
    }

    const XSD::string_& CT_Variant::get_bstr() const
    {    
    return m_bstr;
    }

    bool CT_Variant::has_date() const
    {    
    return m_has_date;
    }

    void CT_Variant::set_date(const XSD::dateTime_& _date)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_date = true;
    m_date = _date;
    }

    const XSD::dateTime_& CT_Variant::get_date() const
    {    
    return m_date;
    }

    bool CT_Variant::has_filetime() const
    {    
    return m_has_filetime;
    }

    void CT_Variant::set_filetime(const XSD::dateTime_& _filetime)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_filetime = true;
    m_filetime = _filetime;
    }

    const XSD::dateTime_& CT_Variant::get_filetime() const
    {    
    return m_filetime;
    }

    bool CT_Variant::has_bool() const
    {    
    return m_has_bool;
    }

    void CT_Variant::set_bool(const XSD::boolean_& _bool)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_bool = true;
    m_bool = _bool;
    }

    const XSD::boolean_& CT_Variant::get_bool() const
    {    
    return m_bool;
    }

    bool CT_Variant::has_cy() const
    {    
    return m_has_cy;
    }

    ST_Cy* CT_Variant::mutable_cy()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_cy = true;
    if (!m_cy)
    {
        m_cy = new ST_Cy();
    }
    return m_cy;
    }

    const ST_Cy& CT_Variant::get_cy() const
    {    
    if (m_cy)
    {
        return *m_cy;
    }
    return ST_Cy::default_instance();
    }

    bool CT_Variant::has_error() const
    {    
    return m_has_error;
    }

    ST_Error* CT_Variant::mutable_error()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_error = true;
    if (!m_error)
    {
        m_error = new ST_Error();
    }
    return m_error;
    }

    const ST_Error& CT_Variant::get_error() const
    {    
    if (m_error)
    {
        return *m_error;
    }
    return ST_Error::default_instance();
    }

    bool CT_Variant::has_stream() const
    {    
    return m_has_stream;
    }

    void CT_Variant::set_stream(const XSD::base64Binary_& _stream)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_stream = true;
    m_stream = _stream;
    }

    const XSD::base64Binary_& CT_Variant::get_stream() const
    {    
    return m_stream;
    }

    bool CT_Variant::has_ostream() const
    {    
    return m_has_ostream;
    }

    void CT_Variant::set_ostream(const XSD::base64Binary_& _ostream)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ostream = true;
    m_ostream = _ostream;
    }

    const XSD::base64Binary_& CT_Variant::get_ostream() const
    {    
    return m_ostream;
    }

    bool CT_Variant::has_storage() const
    {    
    return m_has_storage;
    }

    void CT_Variant::set_storage(const XSD::base64Binary_& _storage)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_storage = true;
    m_storage = _storage;
    }

    const XSD::base64Binary_& CT_Variant::get_storage() const
    {    
    return m_storage;
    }

    bool CT_Variant::has_ostorage() const
    {    
    return m_has_ostorage;
    }

    void CT_Variant::set_ostorage(const XSD::base64Binary_& _ostorage)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ostorage = true;
    m_ostorage = _ostorage;
    }

    const XSD::base64Binary_& CT_Variant::get_ostorage() const
    {    
    return m_ostorage;
    }

    bool CT_Variant::has_vstream() const
    {    
    return m_has_vstream;
    }

    CT_Vstream* CT_Variant::mutable_vstream()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_vstream = true;
    if (!m_vstream)
    {
        m_vstream = new CT_Vstream();
    }
    return m_vstream;
    }

    const CT_Vstream& CT_Variant::get_vstream() const
    {    
    if (m_vstream)
    {
        return *m_vstream;
    }
    return CT_Vstream::default_instance();
    }

    bool CT_Variant::has_clsid() const
    {    
    return m_has_clsid;
    }

    ns_s::ST_Guid* CT_Variant::mutable_clsid()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = true;
    if (!m_clsid)
    {
        m_clsid = new ns_s::ST_Guid();
    }
    return m_clsid;
    }

    const ns_s::ST_Guid& CT_Variant::get_clsid() const
    {    
    if (m_clsid)
    {
        return *m_clsid;
    }
    return ns_s::ST_Guid::default_instance();
    }

    void CT_Variant::clear()
    {    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    
    
    m_has_blob = false;
    m_blob.clear();
    
    m_has_oblob = false;
    m_oblob.clear();
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    
    
    m_has_i1 = false;
    m_i1 = 0;
    
    m_has_i2 = false;
    m_i2 = 0;
    
    m_has_i4 = false;
    m_i4 = 0;
    
    m_has_i8 = false;
    m_i8 = 0;
    
    m_has_int = false;
    m_int = 0;
    
    m_has_ui1 = false;
    m_ui1 = 0;
    
    m_has_ui2 = false;
    m_ui2 = 0;
    
    m_has_ui4 = false;
    m_ui4 = 0;
    
    m_has_ui8 = false;
    m_ui8 = 0;
    
    m_has_uint = false;
    m_uint = 0;
    
    m_has_r4 = false;
    m_r4 = 0;
    
    m_has_r8 = false;
    m_r8 = 0;
    
    m_has_decimal = false;
    m_decimal = 0;
    
    m_has_lpstr = false;
    m_lpstr.clear();
    
    m_has_lpwstr = false;
    m_lpwstr.clear();
    
    m_has_bstr = false;
    m_bstr.clear();
    
    m_has_date = false;
    m_date.clear();
    
    m_has_filetime = false;
    m_filetime.clear();
    
    m_has_bool = false;
    m_bool = false;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    
    
    m_has_stream = false;
    m_stream.clear();
    
    m_has_ostream = false;
    m_ostream.clear();
    
    m_has_storage = false;
    m_storage.clear();
    
    m_has_ostorage = false;
    m_ostorage.clear();
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    
    }

    void CT_Variant::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    {
        bool elemHasValueList[34] = {m_has_variant, m_has_vector, m_has_array, m_has_blob, m_has_oblob, m_has_empty, m_has_null, m_has_i1, m_has_i2, m_has_i4, m_has_i8, m_has_int, m_has_ui1, m_has_ui2, m_has_ui4, m_has_ui8, m_has_uint, m_has_r4, m_has_r8, m_has_decimal, m_has_lpstr, m_has_lpwstr, m_has_bstr, m_has_date, m_has_filetime, m_has_bool, m_has_cy, m_has_error, m_has_stream, m_has_ostream, m_has_storage, m_has_ostorage, m_has_vstream, m_has_clsid};
        int cnt = count(elemHasValueList, elemHasValueList + 34, true);
        assert(cnt == 1);
    }
    
    
    if (m_has_variant)
    {
        m_variant->toXmlElem("vt:variant", "", _outStream);
    }
    
    
    if (m_has_vector)
    {
        m_vector->toXmlElem("vt:vector", "", _outStream);
    }
    
    
    if (m_has_array)
    {
        m_array->toXmlElem("vt:array", "", _outStream);
    }
    
    
    if (m_has_blob)
    {
        _outStream << "<vt:blob>" << m_blob << "</vt:blob>";
    }
    
    
    if (m_has_oblob)
    {
        _outStream << "<vt:oblob>" << m_oblob << "</vt:oblob>";
    }
    
    
    if (m_has_empty)
    {
        m_empty->toXmlElem("vt:empty", "", _outStream);
    }
    
    
    if (m_has_null)
    {
        m_null->toXmlElem("vt:null", "", _outStream);
    }
    
    
    if (m_has_i1)
    {
        _outStream << "<vt:i1>" << m_i1 << "</vt:i1>";
    }
    
    
    if (m_has_i2)
    {
        _outStream << "<vt:i2>" << m_i2 << "</vt:i2>";
    }
    
    
    if (m_has_i4)
    {
        _outStream << "<vt:i4>" << m_i4 << "</vt:i4>";
    }
    
    
    if (m_has_i8)
    {
        _outStream << "<vt:i8>" << m_i8 << "</vt:i8>";
    }
    
    
    if (m_has_int)
    {
        _outStream << "<vt:int>" << m_int << "</vt:int>";
    }
    
    
    if (m_has_ui1)
    {
        _outStream << "<vt:ui1>" << m_ui1 << "</vt:ui1>";
    }
    
    
    if (m_has_ui2)
    {
        _outStream << "<vt:ui2>" << m_ui2 << "</vt:ui2>";
    }
    
    
    if (m_has_ui4)
    {
        _outStream << "<vt:ui4>" << m_ui4 << "</vt:ui4>";
    }
    
    
    if (m_has_ui8)
    {
        _outStream << "<vt:ui8>" << m_ui8 << "</vt:ui8>";
    }
    
    
    if (m_has_uint)
    {
        _outStream << "<vt:uint>" << m_uint << "</vt:uint>";
    }
    
    
    if (m_has_r4)
    {
        _outStream << "<vt:r4>" << m_r4 << "</vt:r4>";
    }
    
    
    if (m_has_r8)
    {
        _outStream << "<vt:r8>" << m_r8 << "</vt:r8>";
    }
    
    
    if (m_has_decimal)
    {
        _outStream << "<vt:decimal>" << m_decimal << "</vt:decimal>";
    }
    
    
    if (m_has_lpstr)
    {
        _outStream << "<vt:lpstr>" << m_lpstr << "</vt:lpstr>";
    }
    
    
    if (m_has_lpwstr)
    {
        _outStream << "<vt:lpwstr>" << m_lpwstr << "</vt:lpwstr>";
    }
    
    
    if (m_has_bstr)
    {
        _outStream << "<vt:bstr>" << m_bstr << "</vt:bstr>";
    }
    
    
    if (m_has_date)
    {
        _outStream << "<vt:date>" << m_date << "</vt:date>";
    }
    
    
    if (m_has_filetime)
    {
        _outStream << "<vt:filetime>" << m_filetime << "</vt:filetime>";
    }
    
    
    if (m_has_bool)
    {
        _outStream << "<vt:bool>" << m_bool << "</vt:bool>";
    }
    
    
    if (m_has_cy)
    {
        _outStream << "<vt:cy>" << m_cy->toString() << "</vt:cy>";
    }
    
    
    if (m_has_error)
    {
        _outStream << "<vt:error>" << m_error->toString() << "</vt:error>";
    }
    
    
    if (m_has_stream)
    {
        _outStream << "<vt:stream>" << m_stream << "</vt:stream>";
    }
    
    
    if (m_has_ostream)
    {
        _outStream << "<vt:ostream>" << m_ostream << "</vt:ostream>";
    }
    
    
    if (m_has_storage)
    {
        _outStream << "<vt:storage>" << m_storage << "</vt:storage>";
    }
    
    
    if (m_has_ostorage)
    {
        _outStream << "<vt:ostorage>" << m_ostorage << "</vt:ostorage>";
    }
    
    
    if (m_has_vstream)
    {
        m_vstream->toXmlElem("vt:vstream", "", _outStream);
    }
    
    
    if (m_has_clsid)
    {
        _outStream << "<vt:clsid>" << m_clsid->toString() << "</vt:clsid>";
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Variant& CT_Variant::default_instance()
    {    
    if (!CT_Variant::default_instance_)
    {
        CT_Variant::default_instance_ = new CT_Variant();
    }
    return *CT_Variant::default_instance_;
    }

CT_Variant* CT_Variant::default_instance_ = NULL;

    // CT_Vstream
    CT_Vstream::CT_Vstream()
    :m_has_version_attr(false),
    m_version_attr(NULL),
    m_has_base64Binary(false),
    m_base64Binary("")
    {
    }
    CT_Vstream::~CT_Vstream()
{
    clear();    }
    void CT_Vstream::clear()
    {    
    m_has_version_attr = false;
    
    if (m_version_attr)
    {
        delete m_version_attr;
        m_version_attr = NULL;
    }
    
    m_base64Binary.clear();    }

    void CT_Vstream::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    
    if (m_has_version_attr)
    {
        m_version_attr->toXmlAttr("version", _outStream);
    }
    
            _outStream << ">";
            _outStream << m_base64Binary;
            _outStream << "</" << _elemName << ">";
                }

    const CT_Vstream& CT_Vstream::default_instance()
    {    
    if (!CT_Vstream::default_instance_)
    {
        CT_Vstream::default_instance_ = new CT_Vstream();
    }
    return *CT_Vstream::default_instance_;
    }

    bool CT_Vstream::has_version_attr() const
    {    
    return m_has_version_attr;
    }

    void CT_Vstream::set_version_attr(const ns_s::ST_Guid& _version_attr)
    {    
    m_has_version_attr = true;
    m_version_attr = new ns_s::ST_Guid(_version_attr);
    }

    const ns_s::ST_Guid& CT_Vstream::get_version_attr() const
    {    
    if (m_version_attr)
    {
        return *m_version_attr;
    }
    return ns_s::ST_Guid::default_instance();
    }

    bool CT_Vstream::has_base64Binary() const
    {    
    return m_has_base64Binary;
    }

    void CT_Vstream::set_base64Binary(const XSD::base64Binary_& _base64Binary)
    {    
    m_has_base64Binary = true;
    m_base64Binary = _base64Binary;
    }

    const XSD::base64Binary_& CT_Vstream::get_base64Binary() const
    {    
    return m_base64Binary;
    }

    std::string CT_Vstream::toString() const
    {    
    std::stringstream strStream;
    strStream << get_base64Binary();
    return strStream.str();
    }

CT_Vstream* CT_Vstream::default_instance_ = NULL;

    // variant_element
    variant_element::variant_element()
    :m_has_variant(false),
    m_variant(NULL),
    m_has_vector(false),
    m_vector(NULL),
    m_has_array(false),
    m_array(NULL),
    m_has_blob(false),
    m_blob(""),
    m_has_oblob(false),
    m_oblob(""),
    m_has_empty(false),
    m_empty(NULL),
    m_has_null(false),
    m_null(NULL),
    m_has_i1(false),
    m_i1(0),
    m_has_i2(false),
    m_i2(0),
    m_has_i4(false),
    m_i4(0),
    m_has_i8(false),
    m_i8(0),
    m_has_int(false),
    m_int(0),
    m_has_ui1(false),
    m_ui1(0),
    m_has_ui2(false),
    m_ui2(0),
    m_has_ui4(false),
    m_ui4(0),
    m_has_ui8(false),
    m_ui8(0),
    m_has_uint(false),
    m_uint(0),
    m_has_r4(false),
    m_r4(0),
    m_has_r8(false),
    m_r8(0),
    m_has_decimal(false),
    m_decimal(0),
    m_has_lpstr(false),
    m_lpstr(""),
    m_has_lpwstr(false),
    m_lpwstr(""),
    m_has_bstr(false),
    m_bstr(""),
    m_has_date(false),
    m_date(""),
    m_has_filetime(false),
    m_filetime(""),
    m_has_bool(false),
    m_bool(false),
    m_has_cy(false),
    m_cy(NULL),
    m_has_error(false),
    m_error(NULL),
    m_has_stream(false),
    m_stream(""),
    m_has_ostream(false),
    m_ostream(""),
    m_has_storage(false),
    m_storage(""),
    m_has_ostorage(false),
    m_ostorage(""),
    m_has_vstream(false),
    m_vstream(NULL),
    m_has_clsid(false),
    m_clsid(NULL)
    {
    }
    variant_element::~variant_element()
{
    clear();    }
    bool variant_element::has_variant() const
    {    
    return m_has_variant;
    }

    CT_Variant* variant_element::mutable_variant()
    {    
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_variant = true;
    if (!m_variant)
    {
        m_variant = new CT_Variant();
    }
    return m_variant;
    }

    const CT_Variant& variant_element::get_variant() const
    {    
    if (m_variant)
    {
        return *m_variant;
    }
    return CT_Variant::default_instance();
    }

    bool variant_element::has_vector() const
    {    
    return m_has_vector;
    }

    CT_Vector* variant_element::mutable_vector()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_vector = true;
    if (!m_vector)
    {
        m_vector = new CT_Vector();
    }
    return m_vector;
    }

    const CT_Vector& variant_element::get_vector() const
    {    
    if (m_vector)
    {
        return *m_vector;
    }
    return CT_Vector::default_instance();
    }

    bool variant_element::has_array() const
    {    
    return m_has_array;
    }

    CT_Array* variant_element::mutable_array()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_array = true;
    if (!m_array)
    {
        m_array = new CT_Array();
    }
    return m_array;
    }

    const CT_Array& variant_element::get_array() const
    {    
    if (m_array)
    {
        return *m_array;
    }
    return CT_Array::default_instance();
    }

    bool variant_element::has_blob() const
    {    
    return m_has_blob;
    }

    void variant_element::set_blob(const XSD::base64Binary_& _blob)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_blob = true;
    m_blob = _blob;
    }

    const XSD::base64Binary_& variant_element::get_blob() const
    {    
    return m_blob;
    }

    bool variant_element::has_oblob() const
    {    
    return m_has_oblob;
    }

    void variant_element::set_oblob(const XSD::base64Binary_& _oblob)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_oblob = true;
    m_oblob = _oblob;
    }

    const XSD::base64Binary_& variant_element::get_oblob() const
    {    
    return m_oblob;
    }

    bool variant_element::has_empty() const
    {    
    return m_has_empty;
    }

    CT_Empty* variant_element::mutable_empty()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_empty = true;
    if (!m_empty)
    {
        m_empty = new CT_Empty();
    }
    return m_empty;
    }

    const CT_Empty& variant_element::get_empty() const
    {    
    if (m_empty)
    {
        return *m_empty;
    }
    return CT_Empty::default_instance();
    }

    bool variant_element::has_null() const
    {    
    return m_has_null;
    }

    CT_Null* variant_element::mutable_null()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_null = true;
    if (!m_null)
    {
        m_null = new CT_Null();
    }
    return m_null;
    }

    const CT_Null& variant_element::get_null() const
    {    
    if (m_null)
    {
        return *m_null;
    }
    return CT_Null::default_instance();
    }

    bool variant_element::has_i1() const
    {    
    return m_has_i1;
    }

    void variant_element::set_i1(const XSD::byte_& _i1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i1 = true;
    m_i1 = _i1;
    }

    const XSD::byte_& variant_element::get_i1() const
    {    
    return m_i1;
    }

    bool variant_element::has_i2() const
    {    
    return m_has_i2;
    }

    void variant_element::set_i2(const XSD::short_& _i2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i2 = true;
    m_i2 = _i2;
    }

    const XSD::short_& variant_element::get_i2() const
    {    
    return m_i2;
    }

    bool variant_element::has_i4() const
    {    
    return m_has_i4;
    }

    void variant_element::set_i4(const XSD::int_& _i4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i4 = true;
    m_i4 = _i4;
    }

    const XSD::int_& variant_element::get_i4() const
    {    
    return m_i4;
    }

    bool variant_element::has_i8() const
    {    
    return m_has_i8;
    }

    void variant_element::set_i8(const XSD::long_& _i8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i8 = true;
    m_i8 = _i8;
    }

    const XSD::long_& variant_element::get_i8() const
    {    
    return m_i8;
    }

    bool variant_element::has_int() const
    {    
    return m_has_int;
    }

    void variant_element::set_int(const XSD::int_& _int)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& variant_element::get_int() const
    {    
    return m_int;
    }

    bool variant_element::has_ui1() const
    {    
    return m_has_ui1;
    }

    void variant_element::set_ui1(const XSD::unsignedByte_& _ui1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui1 = true;
    m_ui1 = _ui1;
    }

    const XSD::unsignedByte_& variant_element::get_ui1() const
    {    
    return m_ui1;
    }

    bool variant_element::has_ui2() const
    {    
    return m_has_ui2;
    }

    void variant_element::set_ui2(const XSD::unsignedShort_& _ui2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui2 = true;
    m_ui2 = _ui2;
    }

    const XSD::unsignedShort_& variant_element::get_ui2() const
    {    
    return m_ui2;
    }

    bool variant_element::has_ui4() const
    {    
    return m_has_ui4;
    }

    void variant_element::set_ui4(const XSD::unsignedInt_& _ui4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui4 = true;
    m_ui4 = _ui4;
    }

    const XSD::unsignedInt_& variant_element::get_ui4() const
    {    
    return m_ui4;
    }

    bool variant_element::has_ui8() const
    {    
    return m_has_ui8;
    }

    void variant_element::set_ui8(const XSD::unsignedLong_& _ui8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui8 = true;
    m_ui8 = _ui8;
    }

    const XSD::unsignedLong_& variant_element::get_ui8() const
    {    
    return m_ui8;
    }

    bool variant_element::has_uint() const
    {    
    return m_has_uint;
    }

    void variant_element::set_uint(const XSD::unsignedInt_& _uint)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_uint = true;
    m_uint = _uint;
    }

    const XSD::unsignedInt_& variant_element::get_uint() const
    {    
    return m_uint;
    }

    bool variant_element::has_r4() const
    {    
    return m_has_r4;
    }

    void variant_element::set_r4(const XSD::float_& _r4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_r4 = true;
    m_r4 = _r4;
    }

    const XSD::float_& variant_element::get_r4() const
    {    
    return m_r4;
    }

    bool variant_element::has_r8() const
    {    
    return m_has_r8;
    }

    void variant_element::set_r8(const XSD::double_& _r8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_r8 = true;
    m_r8 = _r8;
    }

    const XSD::double_& variant_element::get_r8() const
    {    
    return m_r8;
    }

    bool variant_element::has_decimal() const
    {    
    return m_has_decimal;
    }

    void variant_element::set_decimal(const XSD::decimal_& _decimal)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_decimal = true;
    m_decimal = _decimal;
    }

    const XSD::decimal_& variant_element::get_decimal() const
    {    
    return m_decimal;
    }

    bool variant_element::has_lpstr() const
    {    
    return m_has_lpstr;
    }

    void variant_element::set_lpstr(const XSD::string_& _lpstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_lpstr = true;
    m_lpstr = _lpstr;
    }

    const XSD::string_& variant_element::get_lpstr() const
    {    
    return m_lpstr;
    }

    bool variant_element::has_lpwstr() const
    {    
    return m_has_lpwstr;
    }

    void variant_element::set_lpwstr(const XSD::string_& _lpwstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_lpwstr = true;
    m_lpwstr = _lpwstr;
    }

    const XSD::string_& variant_element::get_lpwstr() const
    {    
    return m_lpwstr;
    }

    bool variant_element::has_bstr() const
    {    
    return m_has_bstr;
    }

    void variant_element::set_bstr(const XSD::string_& _bstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_bstr = true;
    m_bstr = _bstr;
    }

    const XSD::string_& variant_element::get_bstr() const
    {    
    return m_bstr;
    }

    bool variant_element::has_date() const
    {    
    return m_has_date;
    }

    void variant_element::set_date(const XSD::dateTime_& _date)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_date = true;
    m_date = _date;
    }

    const XSD::dateTime_& variant_element::get_date() const
    {    
    return m_date;
    }

    bool variant_element::has_filetime() const
    {    
    return m_has_filetime;
    }

    void variant_element::set_filetime(const XSD::dateTime_& _filetime)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_filetime = true;
    m_filetime = _filetime;
    }

    const XSD::dateTime_& variant_element::get_filetime() const
    {    
    return m_filetime;
    }

    bool variant_element::has_bool() const
    {    
    return m_has_bool;
    }

    void variant_element::set_bool(const XSD::boolean_& _bool)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_bool = true;
    m_bool = _bool;
    }

    const XSD::boolean_& variant_element::get_bool() const
    {    
    return m_bool;
    }

    bool variant_element::has_cy() const
    {    
    return m_has_cy;
    }

    ST_Cy* variant_element::mutable_cy()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_cy = true;
    if (!m_cy)
    {
        m_cy = new ST_Cy();
    }
    return m_cy;
    }

    const ST_Cy& variant_element::get_cy() const
    {    
    if (m_cy)
    {
        return *m_cy;
    }
    return ST_Cy::default_instance();
    }

    bool variant_element::has_error() const
    {    
    return m_has_error;
    }

    ST_Error* variant_element::mutable_error()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_error = true;
    if (!m_error)
    {
        m_error = new ST_Error();
    }
    return m_error;
    }

    const ST_Error& variant_element::get_error() const
    {    
    if (m_error)
    {
        return *m_error;
    }
    return ST_Error::default_instance();
    }

    bool variant_element::has_stream() const
    {    
    return m_has_stream;
    }

    void variant_element::set_stream(const XSD::base64Binary_& _stream)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_stream = true;
    m_stream = _stream;
    }

    const XSD::base64Binary_& variant_element::get_stream() const
    {    
    return m_stream;
    }

    bool variant_element::has_ostream() const
    {    
    return m_has_ostream;
    }

    void variant_element::set_ostream(const XSD::base64Binary_& _ostream)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ostream = true;
    m_ostream = _ostream;
    }

    const XSD::base64Binary_& variant_element::get_ostream() const
    {    
    return m_ostream;
    }

    bool variant_element::has_storage() const
    {    
    return m_has_storage;
    }

    void variant_element::set_storage(const XSD::base64Binary_& _storage)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_storage = true;
    m_storage = _storage;
    }

    const XSD::base64Binary_& variant_element::get_storage() const
    {    
    return m_storage;
    }

    bool variant_element::has_ostorage() const
    {    
    return m_has_ostorage;
    }

    void variant_element::set_ostorage(const XSD::base64Binary_& _ostorage)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ostorage = true;
    m_ostorage = _ostorage;
    }

    const XSD::base64Binary_& variant_element::get_ostorage() const
    {    
    return m_ostorage;
    }

    bool variant_element::has_vstream() const
    {    
    return m_has_vstream;
    }

    CT_Vstream* variant_element::mutable_vstream()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_vstream = true;
    if (!m_vstream)
    {
        m_vstream = new CT_Vstream();
    }
    return m_vstream;
    }

    const CT_Vstream& variant_element::get_vstream() const
    {    
    if (m_vstream)
    {
        return *m_vstream;
    }
    return CT_Vstream::default_instance();
    }

    bool variant_element::has_clsid() const
    {    
    return m_has_clsid;
    }

    ns_s::ST_Guid* variant_element::mutable_clsid()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    ;
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    ;
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    ;
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    ;
    
    m_has_clsid = true;
    if (!m_clsid)
    {
        m_clsid = new ns_s::ST_Guid();
    }
    return m_clsid;
    }

    const ns_s::ST_Guid& variant_element::get_clsid() const
    {    
    if (m_clsid)
    {
        return *m_clsid;
    }
    return ns_s::ST_Guid::default_instance();
    }

    void variant_element::clear()
    {    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    
    
    m_has_vector = false;
    
    if (m_vector)
    {
        delete m_vector;
        m_vector = NULL;
    }
    
    
    m_has_array = false;
    
    if (m_array)
    {
        delete m_array;
        m_array = NULL;
    }
    
    
    m_has_blob = false;
    m_blob.clear();
    
    m_has_oblob = false;
    m_oblob.clear();
    
    m_has_empty = false;
    
    if (m_empty)
    {
        delete m_empty;
        m_empty = NULL;
    }
    
    
    m_has_null = false;
    
    if (m_null)
    {
        delete m_null;
        m_null = NULL;
    }
    
    
    m_has_i1 = false;
    m_i1 = 0;
    
    m_has_i2 = false;
    m_i2 = 0;
    
    m_has_i4 = false;
    m_i4 = 0;
    
    m_has_i8 = false;
    m_i8 = 0;
    
    m_has_int = false;
    m_int = 0;
    
    m_has_ui1 = false;
    m_ui1 = 0;
    
    m_has_ui2 = false;
    m_ui2 = 0;
    
    m_has_ui4 = false;
    m_ui4 = 0;
    
    m_has_ui8 = false;
    m_ui8 = 0;
    
    m_has_uint = false;
    m_uint = 0;
    
    m_has_r4 = false;
    m_r4 = 0;
    
    m_has_r8 = false;
    m_r8 = 0;
    
    m_has_decimal = false;
    m_decimal = 0;
    
    m_has_lpstr = false;
    m_lpstr.clear();
    
    m_has_lpwstr = false;
    m_lpwstr.clear();
    
    m_has_bstr = false;
    m_bstr.clear();
    
    m_has_date = false;
    m_date.clear();
    
    m_has_filetime = false;
    m_filetime.clear();
    
    m_has_bool = false;
    m_bool = false;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    
    
    m_has_stream = false;
    m_stream.clear();
    
    m_has_ostream = false;
    m_ostream.clear();
    
    m_has_storage = false;
    m_storage.clear();
    
    m_has_ostorage = false;
    m_ostorage.clear();
    
    m_has_vstream = false;
    
    if (m_vstream)
    {
        delete m_vstream;
        m_vstream = NULL;
    }
    
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    
    }

    void variant_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<vt:variant";
    
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    _outStream << ">";
    
    {
        bool elemHasValueList[34] = {m_has_variant, m_has_vector, m_has_array, m_has_blob, m_has_oblob, m_has_empty, m_has_null, m_has_i1, m_has_i2, m_has_i4, m_has_i8, m_has_int, m_has_ui1, m_has_ui2, m_has_ui4, m_has_ui8, m_has_uint, m_has_r4, m_has_r8, m_has_decimal, m_has_lpstr, m_has_lpwstr, m_has_bstr, m_has_date, m_has_filetime, m_has_bool, m_has_cy, m_has_error, m_has_stream, m_has_ostream, m_has_storage, m_has_ostorage, m_has_vstream, m_has_clsid};
        int cnt = count(elemHasValueList, elemHasValueList + 34, true);
        assert(cnt == 1);
    }
    
    
    if (m_has_variant)
    {
        m_variant->toXmlElem("vt:variant", "", _outStream);
    }
    
    
    if (m_has_vector)
    {
        m_vector->toXmlElem("vt:vector", "", _outStream);
    }
    
    
    if (m_has_array)
    {
        m_array->toXmlElem("vt:array", "", _outStream);
    }
    
    
    if (m_has_blob)
    {
        _outStream << "<vt:blob>" << m_blob << "</vt:blob>";
    }
    
    
    if (m_has_oblob)
    {
        _outStream << "<vt:oblob>" << m_oblob << "</vt:oblob>";
    }
    
    
    if (m_has_empty)
    {
        m_empty->toXmlElem("vt:empty", "", _outStream);
    }
    
    
    if (m_has_null)
    {
        m_null->toXmlElem("vt:null", "", _outStream);
    }
    
    
    if (m_has_i1)
    {
        _outStream << "<vt:i1>" << m_i1 << "</vt:i1>";
    }
    
    
    if (m_has_i2)
    {
        _outStream << "<vt:i2>" << m_i2 << "</vt:i2>";
    }
    
    
    if (m_has_i4)
    {
        _outStream << "<vt:i4>" << m_i4 << "</vt:i4>";
    }
    
    
    if (m_has_i8)
    {
        _outStream << "<vt:i8>" << m_i8 << "</vt:i8>";
    }
    
    
    if (m_has_int)
    {
        _outStream << "<vt:int>" << m_int << "</vt:int>";
    }
    
    
    if (m_has_ui1)
    {
        _outStream << "<vt:ui1>" << m_ui1 << "</vt:ui1>";
    }
    
    
    if (m_has_ui2)
    {
        _outStream << "<vt:ui2>" << m_ui2 << "</vt:ui2>";
    }
    
    
    if (m_has_ui4)
    {
        _outStream << "<vt:ui4>" << m_ui4 << "</vt:ui4>";
    }
    
    
    if (m_has_ui8)
    {
        _outStream << "<vt:ui8>" << m_ui8 << "</vt:ui8>";
    }
    
    
    if (m_has_uint)
    {
        _outStream << "<vt:uint>" << m_uint << "</vt:uint>";
    }
    
    
    if (m_has_r4)
    {
        _outStream << "<vt:r4>" << m_r4 << "</vt:r4>";
    }
    
    
    if (m_has_r8)
    {
        _outStream << "<vt:r8>" << m_r8 << "</vt:r8>";
    }
    
    
    if (m_has_decimal)
    {
        _outStream << "<vt:decimal>" << m_decimal << "</vt:decimal>";
    }
    
    
    if (m_has_lpstr)
    {
        _outStream << "<vt:lpstr>" << m_lpstr << "</vt:lpstr>";
    }
    
    
    if (m_has_lpwstr)
    {
        _outStream << "<vt:lpwstr>" << m_lpwstr << "</vt:lpwstr>";
    }
    
    
    if (m_has_bstr)
    {
        _outStream << "<vt:bstr>" << m_bstr << "</vt:bstr>";
    }
    
    
    if (m_has_date)
    {
        _outStream << "<vt:date>" << m_date << "</vt:date>";
    }
    
    
    if (m_has_filetime)
    {
        _outStream << "<vt:filetime>" << m_filetime << "</vt:filetime>";
    }
    
    
    if (m_has_bool)
    {
        _outStream << "<vt:bool>" << m_bool << "</vt:bool>";
    }
    
    
    if (m_has_cy)
    {
        _outStream << "<vt:cy>" << m_cy->toString() << "</vt:cy>";
    }
    
    
    if (m_has_error)
    {
        _outStream << "<vt:error>" << m_error->toString() << "</vt:error>";
    }
    
    
    if (m_has_stream)
    {
        _outStream << "<vt:stream>" << m_stream << "</vt:stream>";
    }
    
    
    if (m_has_ostream)
    {
        _outStream << "<vt:ostream>" << m_ostream << "</vt:ostream>";
    }
    
    
    if (m_has_storage)
    {
        _outStream << "<vt:storage>" << m_storage << "</vt:storage>";
    }
    
    
    if (m_has_ostorage)
    {
        _outStream << "<vt:ostorage>" << m_ostorage << "</vt:ostorage>";
    }
    
    
    if (m_has_vstream)
    {
        m_vstream->toXmlElem("vt:vstream", "", _outStream);
    }
    
    
    if (m_has_clsid)
    {
        _outStream << "<vt:clsid>" << m_clsid->toString() << "</vt:clsid>";
    }
    
    _outStream << "</vt:variant>";
    }

    const variant_element& variant_element::default_instance()
    {    
    if (!variant_element::default_instance_)
    {
        variant_element::default_instance_ = new variant_element();
    }
    return *variant_element::default_instance_;
    }

variant_element* variant_element::default_instance_ = NULL;

    // vector_element
    vector_element::vector_element()
    :m_has_baseType_attr(false),
    m_baseType_attr(NULL),
    m_has_size_attr(false),
    m_size_attr(0)
    {
    }
    vector_element::~vector_element()
{
    clear();    }
    CT_Variant* vector_element::add_variant()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Variant* pNewChild = pChildGroup->mutable_variant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void vector_element::add_i1(const XSD::byte_& _i1)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i1(_i1);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_i2(const XSD::short_& _i2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i2(_i2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_i4(const XSD::int_& _i4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i4(_i4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_i8(const XSD::long_& _i8)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i8(_i8);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_ui1(const XSD::unsignedByte_& _ui1)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui1(_ui1);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_ui2(const XSD::unsignedShort_& _ui2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui2(_ui2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_ui4(const XSD::unsignedInt_& _ui4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui4(_ui4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_ui8(const XSD::unsignedLong_& _ui8)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui8(_ui8);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_r4(const XSD::float_& _r4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_r4(_r4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_r8(const XSD::double_& _r8)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_r8(_r8);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_lpstr(const XSD::string_& _lpstr)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_lpstr(_lpstr);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_lpwstr(const XSD::string_& _lpwstr)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_lpwstr(_lpwstr);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_bstr(const XSD::string_& _bstr)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_bstr(_bstr);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_date(const XSD::dateTime_& _date)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_date(_date);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_filetime(const XSD::dateTime_& _filetime)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_filetime(_filetime);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void vector_element::add_bool(const XSD::boolean_& _bool)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_bool(_bool);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ST_Cy* vector_element::add_cy()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_Cy* pNewChild = pChildGroup->mutable_cy();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ST_Error* vector_element::add_error()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_Error* pNewChild = pChildGroup->mutable_error();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_Guid* vector_element::add_clsid()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_Guid* pNewChild = pChildGroup->mutable_clsid();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void vector_element::clear()
    {    
    m_has_baseType_attr = false;
    
    if (m_baseType_attr)
    {
        delete m_baseType_attr;
        m_baseType_attr = NULL;
    }
    
    
    m_has_size_attr = false;
    m_size_attr = 0;
    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void vector_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<vt:vector";
    
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    assert(m_has_baseType_attr);
    if (m_has_baseType_attr)
    {
        m_baseType_attr->toXmlAttr("baseType", _outStream);
    }
    
    
    assert(m_has_size_attr);
    if (m_has_size_attr)
    {
        _outStream << " " << "size" << "=\"" << m_size_attr << "\"";
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_variant())
    {
        (*iter)->get_variant().toXmlElem("vt:variant", "", _outStream);
    }
    
    
    else if ((*iter)->has_i1())
    {
        _outStream << "<vt:i1>" << (*iter)->get_i1() << "</vt:i1>";
    }
    
    
    else if ((*iter)->has_i2())
    {
        _outStream << "<vt:i2>" << (*iter)->get_i2() << "</vt:i2>";
    }
    
    
    else if ((*iter)->has_i4())
    {
        _outStream << "<vt:i4>" << (*iter)->get_i4() << "</vt:i4>";
    }
    
    
    else if ((*iter)->has_i8())
    {
        _outStream << "<vt:i8>" << (*iter)->get_i8() << "</vt:i8>";
    }
    
    
    else if ((*iter)->has_ui1())
    {
        _outStream << "<vt:ui1>" << (*iter)->get_ui1() << "</vt:ui1>";
    }
    
    
    else if ((*iter)->has_ui2())
    {
        _outStream << "<vt:ui2>" << (*iter)->get_ui2() << "</vt:ui2>";
    }
    
    
    else if ((*iter)->has_ui4())
    {
        _outStream << "<vt:ui4>" << (*iter)->get_ui4() << "</vt:ui4>";
    }
    
    
    else if ((*iter)->has_ui8())
    {
        _outStream << "<vt:ui8>" << (*iter)->get_ui8() << "</vt:ui8>";
    }
    
    
    else if ((*iter)->has_r4())
    {
        _outStream << "<vt:r4>" << (*iter)->get_r4() << "</vt:r4>";
    }
    
    
    else if ((*iter)->has_r8())
    {
        _outStream << "<vt:r8>" << (*iter)->get_r8() << "</vt:r8>";
    }
    
    
    else if ((*iter)->has_lpstr())
    {
        _outStream << "<vt:lpstr>" << (*iter)->get_lpstr() << "</vt:lpstr>";
    }
    
    
    else if ((*iter)->has_lpwstr())
    {
        _outStream << "<vt:lpwstr>" << (*iter)->get_lpwstr() << "</vt:lpwstr>";
    }
    
    
    else if ((*iter)->has_bstr())
    {
        _outStream << "<vt:bstr>" << (*iter)->get_bstr() << "</vt:bstr>";
    }
    
    
    else if ((*iter)->has_date())
    {
        _outStream << "<vt:date>" << (*iter)->get_date() << "</vt:date>";
    }
    
    
    else if ((*iter)->has_filetime())
    {
        _outStream << "<vt:filetime>" << (*iter)->get_filetime() << "</vt:filetime>";
    }
    
    
    else if ((*iter)->has_bool())
    {
        _outStream << "<vt:bool>" << (*iter)->get_bool() << "</vt:bool>";
    }
    
    
    else if ((*iter)->has_cy())
    {
        _outStream << "<vt:cy>" << (*iter)->get_cy().toString() << "</vt:cy>";
    }
    
    
    else if ((*iter)->has_error())
    {
        _outStream << "<vt:error>" << (*iter)->get_error().toString() << "</vt:error>";
    }
    
    
    else if ((*iter)->has_clsid())
    {
        _outStream << "<vt:clsid>" << (*iter)->get_clsid().toString() << "</vt:clsid>";
    }
    
    
        }
    }
    
    _outStream << "</vt:vector>";
    }

    const vector_element& vector_element::default_instance()
    {    
    if (!vector_element::default_instance_)
    {
        vector_element::default_instance_ = new vector_element();
    }
    return *vector_element::default_instance_;
    }

    bool vector_element::has_baseType_attr() const
    {    
    return m_has_baseType_attr;
    }

    void vector_element::set_baseType_attr(const ST_VectorBaseType& _baseType_attr)
    {    
    m_has_baseType_attr = true;
    m_baseType_attr = new ST_VectorBaseType(_baseType_attr);
    }

    const ST_VectorBaseType& vector_element::get_baseType_attr() const
    {    
    if (m_baseType_attr)
    {
        return *m_baseType_attr;
    }
    return ST_VectorBaseType::default_instance();
    }

    bool vector_element::has_size_attr() const
    {    
    return m_has_size_attr;
    }

    void vector_element::set_size_attr(const XSD::unsignedInt_& _size_attr)
    {    
    m_has_size_attr = true;
    m_size_attr = _size_attr;
    }

    const XSD::unsignedInt_& vector_element::get_size_attr() const
    {    
    return m_size_attr;
    }


    // vector_element::ChildGroup_1
    vector_element::ChildGroup_1::ChildGroup_1()
    :m_has_variant(false),
    m_variant(NULL),
    m_has_i1(false),
    m_i1(0),
    m_has_i2(false),
    m_i2(0),
    m_has_i4(false),
    m_i4(0),
    m_has_i8(false),
    m_i8(0),
    m_has_ui1(false),
    m_ui1(0),
    m_has_ui2(false),
    m_ui2(0),
    m_has_ui4(false),
    m_ui4(0),
    m_has_ui8(false),
    m_ui8(0),
    m_has_r4(false),
    m_r4(0),
    m_has_r8(false),
    m_r8(0),
    m_has_lpstr(false),
    m_lpstr(""),
    m_has_lpwstr(false),
    m_lpwstr(""),
    m_has_bstr(false),
    m_bstr(""),
    m_has_date(false),
    m_date(""),
    m_has_filetime(false),
    m_filetime(""),
    m_has_bool(false),
    m_bool(false),
    m_has_cy(false),
    m_cy(NULL),
    m_has_error(false),
    m_error(NULL),
    m_has_clsid(false),
    m_clsid(NULL)
    {
    }
    bool vector_element::ChildGroup_1::has_variant() const
    {    
    return m_has_variant;
    }

    CT_Variant* vector_element::ChildGroup_1::mutable_variant()
    {    
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_variant = true;
    if (!m_variant)
    {
        m_variant = new CT_Variant();
    }
    return m_variant;
    }

    const CT_Variant& vector_element::ChildGroup_1::get_variant() const
    {    
    if (m_variant)
    {
        return *m_variant;
    }
    return CT_Variant::default_instance();
    }

    bool vector_element::ChildGroup_1::has_i1() const
    {    
    return m_has_i1;
    }

    void vector_element::ChildGroup_1::set_i1(const XSD::byte_& _i1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i1 = true;
    m_i1 = _i1;
    }

    const XSD::byte_& vector_element::ChildGroup_1::get_i1() const
    {    
    return m_i1;
    }

    bool vector_element::ChildGroup_1::has_i2() const
    {    
    return m_has_i2;
    }

    void vector_element::ChildGroup_1::set_i2(const XSD::short_& _i2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i2 = true;
    m_i2 = _i2;
    }

    const XSD::short_& vector_element::ChildGroup_1::get_i2() const
    {    
    return m_i2;
    }

    bool vector_element::ChildGroup_1::has_i4() const
    {    
    return m_has_i4;
    }

    void vector_element::ChildGroup_1::set_i4(const XSD::int_& _i4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i4 = true;
    m_i4 = _i4;
    }

    const XSD::int_& vector_element::ChildGroup_1::get_i4() const
    {    
    return m_i4;
    }

    bool vector_element::ChildGroup_1::has_i8() const
    {    
    return m_has_i8;
    }

    void vector_element::ChildGroup_1::set_i8(const XSD::long_& _i8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_i8 = true;
    m_i8 = _i8;
    }

    const XSD::long_& vector_element::ChildGroup_1::get_i8() const
    {    
    return m_i8;
    }

    bool vector_element::ChildGroup_1::has_ui1() const
    {    
    return m_has_ui1;
    }

    void vector_element::ChildGroup_1::set_ui1(const XSD::unsignedByte_& _ui1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui1 = true;
    m_ui1 = _ui1;
    }

    const XSD::unsignedByte_& vector_element::ChildGroup_1::get_ui1() const
    {    
    return m_ui1;
    }

    bool vector_element::ChildGroup_1::has_ui2() const
    {    
    return m_has_ui2;
    }

    void vector_element::ChildGroup_1::set_ui2(const XSD::unsignedShort_& _ui2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui2 = true;
    m_ui2 = _ui2;
    }

    const XSD::unsignedShort_& vector_element::ChildGroup_1::get_ui2() const
    {    
    return m_ui2;
    }

    bool vector_element::ChildGroup_1::has_ui4() const
    {    
    return m_has_ui4;
    }

    void vector_element::ChildGroup_1::set_ui4(const XSD::unsignedInt_& _ui4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui4 = true;
    m_ui4 = _ui4;
    }

    const XSD::unsignedInt_& vector_element::ChildGroup_1::get_ui4() const
    {    
    return m_ui4;
    }

    bool vector_element::ChildGroup_1::has_ui8() const
    {    
    return m_has_ui8;
    }

    void vector_element::ChildGroup_1::set_ui8(const XSD::unsignedLong_& _ui8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_ui8 = true;
    m_ui8 = _ui8;
    }

    const XSD::unsignedLong_& vector_element::ChildGroup_1::get_ui8() const
    {    
    return m_ui8;
    }

    bool vector_element::ChildGroup_1::has_r4() const
    {    
    return m_has_r4;
    }

    void vector_element::ChildGroup_1::set_r4(const XSD::float_& _r4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_r4 = true;
    m_r4 = _r4;
    }

    const XSD::float_& vector_element::ChildGroup_1::get_r4() const
    {    
    return m_r4;
    }

    bool vector_element::ChildGroup_1::has_r8() const
    {    
    return m_has_r8;
    }

    void vector_element::ChildGroup_1::set_r8(const XSD::double_& _r8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_r8 = true;
    m_r8 = _r8;
    }

    const XSD::double_& vector_element::ChildGroup_1::get_r8() const
    {    
    return m_r8;
    }

    bool vector_element::ChildGroup_1::has_lpstr() const
    {    
    return m_has_lpstr;
    }

    void vector_element::ChildGroup_1::set_lpstr(const XSD::string_& _lpstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_lpstr = true;
    m_lpstr = _lpstr;
    }

    const XSD::string_& vector_element::ChildGroup_1::get_lpstr() const
    {    
    return m_lpstr;
    }

    bool vector_element::ChildGroup_1::has_lpwstr() const
    {    
    return m_has_lpwstr;
    }

    void vector_element::ChildGroup_1::set_lpwstr(const XSD::string_& _lpwstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_lpwstr = true;
    m_lpwstr = _lpwstr;
    }

    const XSD::string_& vector_element::ChildGroup_1::get_lpwstr() const
    {    
    return m_lpwstr;
    }

    bool vector_element::ChildGroup_1::has_bstr() const
    {    
    return m_has_bstr;
    }

    void vector_element::ChildGroup_1::set_bstr(const XSD::string_& _bstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_bstr = true;
    m_bstr = _bstr;
    }

    const XSD::string_& vector_element::ChildGroup_1::get_bstr() const
    {    
    return m_bstr;
    }

    bool vector_element::ChildGroup_1::has_date() const
    {    
    return m_has_date;
    }

    void vector_element::ChildGroup_1::set_date(const XSD::dateTime_& _date)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_date = true;
    m_date = _date;
    }

    const XSD::dateTime_& vector_element::ChildGroup_1::get_date() const
    {    
    return m_date;
    }

    bool vector_element::ChildGroup_1::has_filetime() const
    {    
    return m_has_filetime;
    }

    void vector_element::ChildGroup_1::set_filetime(const XSD::dateTime_& _filetime)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_filetime = true;
    m_filetime = _filetime;
    }

    const XSD::dateTime_& vector_element::ChildGroup_1::get_filetime() const
    {    
    return m_filetime;
    }

    bool vector_element::ChildGroup_1::has_bool() const
    {    
    return m_has_bool;
    }

    void vector_element::ChildGroup_1::set_bool(const XSD::boolean_& _bool)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_bool = true;
    m_bool = _bool;
    }

    const XSD::boolean_& vector_element::ChildGroup_1::get_bool() const
    {    
    return m_bool;
    }

    bool vector_element::ChildGroup_1::has_cy() const
    {    
    return m_has_cy;
    }

    ST_Cy* vector_element::ChildGroup_1::mutable_cy()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_cy = true;
    if (!m_cy)
    {
        m_cy = new ST_Cy();
    }
    return m_cy;
    }

    const ST_Cy& vector_element::ChildGroup_1::get_cy() const
    {    
    if (m_cy)
    {
        return *m_cy;
    }
    return ST_Cy::default_instance();
    }

    bool vector_element::ChildGroup_1::has_error() const
    {    
    return m_has_error;
    }

    ST_Error* vector_element::ChildGroup_1::mutable_error()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_clsid = false;
    
    if (m_clsid)
    {
        delete m_clsid;
        m_clsid = NULL;
    }
    ;
    
    m_has_error = true;
    if (!m_error)
    {
        m_error = new ST_Error();
    }
    return m_error;
    }

    const ST_Error& vector_element::ChildGroup_1::get_error() const
    {    
    if (m_error)
    {
        return *m_error;
    }
    return ST_Error::default_instance();
    }

    bool vector_element::ChildGroup_1::has_clsid() const
    {    
    return m_has_clsid;
    }

    ns_s::ST_Guid* vector_element::ChildGroup_1::mutable_clsid()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_i8 = false;
    m_i8 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_ui8 = false;
    m_ui8 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_lpstr = false;
    m_lpstr.clear();;
    
    m_has_lpwstr = false;
    m_lpwstr.clear();;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_filetime = false;
    m_filetime.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_clsid = true;
    if (!m_clsid)
    {
        m_clsid = new ns_s::ST_Guid();
    }
    return m_clsid;
    }

    const ns_s::ST_Guid& vector_element::ChildGroup_1::get_clsid() const
    {    
    if (m_clsid)
    {
        return *m_clsid;
    }
    return ns_s::ST_Guid::default_instance();
    }

vector_element* vector_element::default_instance_ = NULL;

    // array_element
    array_element::array_element()
    :m_has_lBounds_attr(false),
    m_lBounds_attr(0),
    m_has_uBounds_attr(false),
    m_uBounds_attr(0),
    m_has_baseType_attr(false),
    m_baseType_attr(NULL)
    {
    }
    array_element::~array_element()
{
    clear();    }
    CT_Variant* array_element::add_variant()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Variant* pNewChild = pChildGroup->mutable_variant();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void array_element::add_i1(const XSD::byte_& _i1)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i1(_i1);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_i2(const XSD::short_& _i2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i2(_i2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_i4(const XSD::int_& _i4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_i4(_i4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_int(const XSD::int_& _int)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_int(_int);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_ui1(const XSD::unsignedByte_& _ui1)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui1(_ui1);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_ui2(const XSD::unsignedShort_& _ui2)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui2(_ui2);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_ui4(const XSD::unsignedInt_& _ui4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_ui4(_ui4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_uint(const XSD::unsignedInt_& _uint)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_uint(_uint);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_r4(const XSD::float_& _r4)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_r4(_r4);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_r8(const XSD::double_& _r8)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_r8(_r8);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_decimal(const XSD::decimal_& _decimal)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_decimal(_decimal);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_bstr(const XSD::string_& _bstr)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_bstr(_bstr);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_date(const XSD::dateTime_& _date)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_date(_date);
    m_childGroupList_1.push_back(pChildGroup);
    }

    void array_element::add_bool(const XSD::boolean_& _bool)
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_bool(_bool);
    m_childGroupList_1.push_back(pChildGroup);
    }

    ST_Error* array_element::add_error()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_Error* pNewChild = pChildGroup->mutable_error();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ST_Cy* array_element::add_cy()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_Cy* pNewChild = pChildGroup->mutable_cy();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void array_element::clear()
    {    
    m_has_lBounds_attr = false;
    m_lBounds_attr = 0;
    
    m_has_uBounds_attr = false;
    m_uBounds_attr = 0;
    
    m_has_baseType_attr = false;
    
    if (m_baseType_attr)
    {
        delete m_baseType_attr;
        m_baseType_attr = NULL;
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

    void array_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<vt:array";
    
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    assert(m_has_lBounds_attr);
    if (m_has_lBounds_attr)
    {
        _outStream << " " << "lBounds" << "=\"" << m_lBounds_attr << "\"";
    }
    
    
    assert(m_has_uBounds_attr);
    if (m_has_uBounds_attr)
    {
        _outStream << " " << "uBounds" << "=\"" << m_uBounds_attr << "\"";
    }
    
    
    assert(m_has_baseType_attr);
    if (m_has_baseType_attr)
    {
        m_baseType_attr->toXmlAttr("baseType", _outStream);
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
    if ((*iter)->has_variant())
    {
        (*iter)->get_variant().toXmlElem("vt:variant", "", _outStream);
    }
    
    
    else if ((*iter)->has_i1())
    {
        _outStream << "<vt:i1>" << (*iter)->get_i1() << "</vt:i1>";
    }
    
    
    else if ((*iter)->has_i2())
    {
        _outStream << "<vt:i2>" << (*iter)->get_i2() << "</vt:i2>";
    }
    
    
    else if ((*iter)->has_i4())
    {
        _outStream << "<vt:i4>" << (*iter)->get_i4() << "</vt:i4>";
    }
    
    
    else if ((*iter)->has_int())
    {
        _outStream << "<vt:int>" << (*iter)->get_int() << "</vt:int>";
    }
    
    
    else if ((*iter)->has_ui1())
    {
        _outStream << "<vt:ui1>" << (*iter)->get_ui1() << "</vt:ui1>";
    }
    
    
    else if ((*iter)->has_ui2())
    {
        _outStream << "<vt:ui2>" << (*iter)->get_ui2() << "</vt:ui2>";
    }
    
    
    else if ((*iter)->has_ui4())
    {
        _outStream << "<vt:ui4>" << (*iter)->get_ui4() << "</vt:ui4>";
    }
    
    
    else if ((*iter)->has_uint())
    {
        _outStream << "<vt:uint>" << (*iter)->get_uint() << "</vt:uint>";
    }
    
    
    else if ((*iter)->has_r4())
    {
        _outStream << "<vt:r4>" << (*iter)->get_r4() << "</vt:r4>";
    }
    
    
    else if ((*iter)->has_r8())
    {
        _outStream << "<vt:r8>" << (*iter)->get_r8() << "</vt:r8>";
    }
    
    
    else if ((*iter)->has_decimal())
    {
        _outStream << "<vt:decimal>" << (*iter)->get_decimal() << "</vt:decimal>";
    }
    
    
    else if ((*iter)->has_bstr())
    {
        _outStream << "<vt:bstr>" << (*iter)->get_bstr() << "</vt:bstr>";
    }
    
    
    else if ((*iter)->has_date())
    {
        _outStream << "<vt:date>" << (*iter)->get_date() << "</vt:date>";
    }
    
    
    else if ((*iter)->has_bool())
    {
        _outStream << "<vt:bool>" << (*iter)->get_bool() << "</vt:bool>";
    }
    
    
    else if ((*iter)->has_error())
    {
        _outStream << "<vt:error>" << (*iter)->get_error().toString() << "</vt:error>";
    }
    
    
    else if ((*iter)->has_cy())
    {
        _outStream << "<vt:cy>" << (*iter)->get_cy().toString() << "</vt:cy>";
    }
    
    
        }
    }
    
    _outStream << "</vt:array>";
    }

    const array_element& array_element::default_instance()
    {    
    if (!array_element::default_instance_)
    {
        array_element::default_instance_ = new array_element();
    }
    return *array_element::default_instance_;
    }

    bool array_element::has_lBounds_attr() const
    {    
    return m_has_lBounds_attr;
    }

    void array_element::set_lBounds_attr(const XSD::int_& _lBounds_attr)
    {    
    m_has_lBounds_attr = true;
    m_lBounds_attr = _lBounds_attr;
    }

    const XSD::int_& array_element::get_lBounds_attr() const
    {    
    return m_lBounds_attr;
    }

    bool array_element::has_uBounds_attr() const
    {    
    return m_has_uBounds_attr;
    }

    void array_element::set_uBounds_attr(const XSD::int_& _uBounds_attr)
    {    
    m_has_uBounds_attr = true;
    m_uBounds_attr = _uBounds_attr;
    }

    const XSD::int_& array_element::get_uBounds_attr() const
    {    
    return m_uBounds_attr;
    }

    bool array_element::has_baseType_attr() const
    {    
    return m_has_baseType_attr;
    }

    void array_element::set_baseType_attr(const ST_ArrayBaseType& _baseType_attr)
    {    
    m_has_baseType_attr = true;
    m_baseType_attr = new ST_ArrayBaseType(_baseType_attr);
    }

    const ST_ArrayBaseType& array_element::get_baseType_attr() const
    {    
    if (m_baseType_attr)
    {
        return *m_baseType_attr;
    }
    return ST_ArrayBaseType::default_instance();
    }


    // array_element::ChildGroup_1
    array_element::ChildGroup_1::ChildGroup_1()
    :m_has_variant(false),
    m_variant(NULL),
    m_has_i1(false),
    m_i1(0),
    m_has_i2(false),
    m_i2(0),
    m_has_i4(false),
    m_i4(0),
    m_has_int(false),
    m_int(0),
    m_has_ui1(false),
    m_ui1(0),
    m_has_ui2(false),
    m_ui2(0),
    m_has_ui4(false),
    m_ui4(0),
    m_has_uint(false),
    m_uint(0),
    m_has_r4(false),
    m_r4(0),
    m_has_r8(false),
    m_r8(0),
    m_has_decimal(false),
    m_decimal(0),
    m_has_bstr(false),
    m_bstr(""),
    m_has_date(false),
    m_date(""),
    m_has_bool(false),
    m_bool(false),
    m_has_error(false),
    m_error(NULL),
    m_has_cy(false),
    m_cy(NULL)
    {
    }
    bool array_element::ChildGroup_1::has_variant() const
    {    
    return m_has_variant;
    }

    CT_Variant* array_element::ChildGroup_1::mutable_variant()
    {    
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_variant = true;
    if (!m_variant)
    {
        m_variant = new CT_Variant();
    }
    return m_variant;
    }

    const CT_Variant& array_element::ChildGroup_1::get_variant() const
    {    
    if (m_variant)
    {
        return *m_variant;
    }
    return CT_Variant::default_instance();
    }

    bool array_element::ChildGroup_1::has_i1() const
    {    
    return m_has_i1;
    }

    void array_element::ChildGroup_1::set_i1(const XSD::byte_& _i1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_i1 = true;
    m_i1 = _i1;
    }

    const XSD::byte_& array_element::ChildGroup_1::get_i1() const
    {    
    return m_i1;
    }

    bool array_element::ChildGroup_1::has_i2() const
    {    
    return m_has_i2;
    }

    void array_element::ChildGroup_1::set_i2(const XSD::short_& _i2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_i2 = true;
    m_i2 = _i2;
    }

    const XSD::short_& array_element::ChildGroup_1::get_i2() const
    {    
    return m_i2;
    }

    bool array_element::ChildGroup_1::has_i4() const
    {    
    return m_has_i4;
    }

    void array_element::ChildGroup_1::set_i4(const XSD::int_& _i4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_i4 = true;
    m_i4 = _i4;
    }

    const XSD::int_& array_element::ChildGroup_1::get_i4() const
    {    
    return m_i4;
    }

    bool array_element::ChildGroup_1::has_int() const
    {    
    return m_has_int;
    }

    void array_element::ChildGroup_1::set_int(const XSD::int_& _int)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& array_element::ChildGroup_1::get_int() const
    {    
    return m_int;
    }

    bool array_element::ChildGroup_1::has_ui1() const
    {    
    return m_has_ui1;
    }

    void array_element::ChildGroup_1::set_ui1(const XSD::unsignedByte_& _ui1)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_ui1 = true;
    m_ui1 = _ui1;
    }

    const XSD::unsignedByte_& array_element::ChildGroup_1::get_ui1() const
    {    
    return m_ui1;
    }

    bool array_element::ChildGroup_1::has_ui2() const
    {    
    return m_has_ui2;
    }

    void array_element::ChildGroup_1::set_ui2(const XSD::unsignedShort_& _ui2)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_ui2 = true;
    m_ui2 = _ui2;
    }

    const XSD::unsignedShort_& array_element::ChildGroup_1::get_ui2() const
    {    
    return m_ui2;
    }

    bool array_element::ChildGroup_1::has_ui4() const
    {    
    return m_has_ui4;
    }

    void array_element::ChildGroup_1::set_ui4(const XSD::unsignedInt_& _ui4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_ui4 = true;
    m_ui4 = _ui4;
    }

    const XSD::unsignedInt_& array_element::ChildGroup_1::get_ui4() const
    {    
    return m_ui4;
    }

    bool array_element::ChildGroup_1::has_uint() const
    {    
    return m_has_uint;
    }

    void array_element::ChildGroup_1::set_uint(const XSD::unsignedInt_& _uint)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_uint = true;
    m_uint = _uint;
    }

    const XSD::unsignedInt_& array_element::ChildGroup_1::get_uint() const
    {    
    return m_uint;
    }

    bool array_element::ChildGroup_1::has_r4() const
    {    
    return m_has_r4;
    }

    void array_element::ChildGroup_1::set_r4(const XSD::float_& _r4)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_r4 = true;
    m_r4 = _r4;
    }

    const XSD::float_& array_element::ChildGroup_1::get_r4() const
    {    
    return m_r4;
    }

    bool array_element::ChildGroup_1::has_r8() const
    {    
    return m_has_r8;
    }

    void array_element::ChildGroup_1::set_r8(const XSD::double_& _r8)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_r8 = true;
    m_r8 = _r8;
    }

    const XSD::double_& array_element::ChildGroup_1::get_r8() const
    {    
    return m_r8;
    }

    bool array_element::ChildGroup_1::has_decimal() const
    {    
    return m_has_decimal;
    }

    void array_element::ChildGroup_1::set_decimal(const XSD::decimal_& _decimal)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_decimal = true;
    m_decimal = _decimal;
    }

    const XSD::decimal_& array_element::ChildGroup_1::get_decimal() const
    {    
    return m_decimal;
    }

    bool array_element::ChildGroup_1::has_bstr() const
    {    
    return m_has_bstr;
    }

    void array_element::ChildGroup_1::set_bstr(const XSD::string_& _bstr)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_bstr = true;
    m_bstr = _bstr;
    }

    const XSD::string_& array_element::ChildGroup_1::get_bstr() const
    {    
    return m_bstr;
    }

    bool array_element::ChildGroup_1::has_date() const
    {    
    return m_has_date;
    }

    void array_element::ChildGroup_1::set_date(const XSD::dateTime_& _date)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_date = true;
    m_date = _date;
    }

    const XSD::dateTime_& array_element::ChildGroup_1::get_date() const
    {    
    return m_date;
    }

    bool array_element::ChildGroup_1::has_bool() const
    {    
    return m_has_bool;
    }

    void array_element::ChildGroup_1::set_bool(const XSD::boolean_& _bool)
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_bool = true;
    m_bool = _bool;
    }

    const XSD::boolean_& array_element::ChildGroup_1::get_bool() const
    {    
    return m_bool;
    }

    bool array_element::ChildGroup_1::has_error() const
    {    
    return m_has_error;
    }

    ST_Error* array_element::ChildGroup_1::mutable_error()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_cy = false;
    
    if (m_cy)
    {
        delete m_cy;
        m_cy = NULL;
    }
    ;
    
    m_has_error = true;
    if (!m_error)
    {
        m_error = new ST_Error();
    }
    return m_error;
    }

    const ST_Error& array_element::ChildGroup_1::get_error() const
    {    
    if (m_error)
    {
        return *m_error;
    }
    return ST_Error::default_instance();
    }

    bool array_element::ChildGroup_1::has_cy() const
    {    
    return m_has_cy;
    }

    ST_Cy* array_element::ChildGroup_1::mutable_cy()
    {    
    
    m_has_variant = false;
    
    if (m_variant)
    {
        delete m_variant;
        m_variant = NULL;
    }
    ;
    
    m_has_i1 = false;
    m_i1 = 0;;
    
    m_has_i2 = false;
    m_i2 = 0;;
    
    m_has_i4 = false;
    m_i4 = 0;;
    
    m_has_int = false;
    m_int = 0;;
    
    m_has_ui1 = false;
    m_ui1 = 0;;
    
    m_has_ui2 = false;
    m_ui2 = 0;;
    
    m_has_ui4 = false;
    m_ui4 = 0;;
    
    m_has_uint = false;
    m_uint = 0;;
    
    m_has_r4 = false;
    m_r4 = 0;;
    
    m_has_r8 = false;
    m_r8 = 0;;
    
    m_has_decimal = false;
    m_decimal = 0;;
    
    m_has_bstr = false;
    m_bstr.clear();;
    
    m_has_date = false;
    m_date.clear();;
    
    m_has_bool = false;
    m_bool = false;;
    
    m_has_error = false;
    
    if (m_error)
    {
        delete m_error;
        m_error = NULL;
    }
    ;
    
    m_has_cy = true;
    if (!m_cy)
    {
        m_cy = new ST_Cy();
    }
    return m_cy;
    }

    const ST_Cy& array_element::ChildGroup_1::get_cy() const
    {    
    if (m_cy)
    {
        return *m_cy;
    }
    return ST_Cy::default_instance();
    }

array_element* array_element::default_instance_ = NULL;

    // blob_element

    // oblob_element

    // empty_element
    empty_element::empty_element()

    {
    }
    empty_element::~empty_element()
{
    clear();    }
    void empty_element::clear()
    {    }

    void empty_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<vt:empty";
    
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    _outStream << ">";
    
    _outStream << "</vt:empty>";
    }

    const empty_element& empty_element::default_instance()
    {    
    if (!empty_element::default_instance_)
    {
        empty_element::default_instance_ = new empty_element();
    }
    return *empty_element::default_instance_;
    }

empty_element* empty_element::default_instance_ = NULL;

    // null_element
    null_element::null_element()

    {
    }
    null_element::~null_element()
{
    clear();    }
    void null_element::clear()
    {    }

    void null_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<vt:null";
    
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    _outStream << ">";
    
    _outStream << "</vt:null>";
    }

    const null_element& null_element::default_instance()
    {    
    if (!null_element::default_instance_)
    {
        null_element::default_instance_ = new null_element();
    }
    return *null_element::default_instance_;
    }

null_element* null_element::default_instance_ = NULL;

    // i1_element

    // i2_element

    // i4_element

    // i8_element

    // int_element

    // ui1_element

    // ui2_element

    // ui4_element

    // ui8_element

    // uint_element

    // r4_element

    // r8_element

    // decimal_element

    // lpstr_element

    // lpwstr_element

    // bstr_element

    // date_element

    // filetime_element

    // bool_element

    // cy_element

    // error_element

    // stream_element

    // ostream_element

    // storage_element

    // ostorage_element

    // vstream_element
    vstream_element::vstream_element()
    :m_has_version_attr(false),
    m_version_attr(NULL),
    m_has_base64Binary(false),
    m_base64Binary("")
    {
    }
    vstream_element::~vstream_element()
{
    clear();    }
    void vstream_element::clear()
    {    
    m_has_version_attr = false;
    
    if (m_version_attr)
    {
        delete m_version_attr;
        m_version_attr = NULL;
    }
    
    m_base64Binary.clear();    }

    void vstream_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<vt:vstream";
    
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    
    if (m_has_version_attr)
    {
        m_version_attr->toXmlAttr("version", _outStream);
    }
    
    _outStream << ">";
    
    _outStream << "</vt:vstream>";
    }

    const vstream_element& vstream_element::default_instance()
    {    
    if (!vstream_element::default_instance_)
    {
        vstream_element::default_instance_ = new vstream_element();
    }
    return *vstream_element::default_instance_;
    }

    bool vstream_element::has_version_attr() const
    {    
    return m_has_version_attr;
    }

    void vstream_element::set_version_attr(const ns_s::ST_Guid& _version_attr)
    {    
    m_has_version_attr = true;
    m_version_attr = new ns_s::ST_Guid(_version_attr);
    }

    const ns_s::ST_Guid& vstream_element::get_version_attr() const
    {    
    if (m_version_attr)
    {
        return *m_version_attr;
    }
    return ns_s::ST_Guid::default_instance();
    }

    bool vstream_element::has_base64Binary() const
    {    
    return m_has_base64Binary;
    }

    void vstream_element::set_base64Binary(const XSD::base64Binary_& _base64Binary)
    {    
    m_has_base64Binary = true;
    m_base64Binary = _base64Binary;
    }

    const XSD::base64Binary_& vstream_element::get_base64Binary() const
    {    
    return m_base64Binary;
    }

    std::string vstream_element::toString() const
    {    
    std::stringstream strStream;
    strStream << get_base64Binary();
    return strStream.str();
    }

vstream_element* vstream_element::default_instance_ = NULL;

    // clsid_element
}