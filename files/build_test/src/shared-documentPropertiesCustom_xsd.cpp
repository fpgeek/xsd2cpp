#include "shared-documentPropertiesCustom_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_op {
using namespace std;

// Element

// Attribute

// CT_Properties
CT_Properties::CT_Properties()

{
}
CT_Properties::~CT_Properties()
{
    clear();
}
CT_Property* CT_Properties::add_property()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Property* pNewChild = pChildGroup->mutable_property();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_Properties::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_Properties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_property())
            {
                (*iter)->get_property().toXmlElem("op:property", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Properties& CT_Properties::default_instance()
{
    if (!CT_Properties::default_instance_)
    {
        CT_Properties::default_instance_ = new CT_Properties();
    }
    return *CT_Properties::default_instance_;
}


// CT_Properties::ChildGroup_1
CT_Properties::ChildGroup_1::ChildGroup_1()
    :m_has_property(false),
     m_property(NULL)
{
}
bool CT_Properties::ChildGroup_1::has_property() const
{
    return m_has_property;
}

CT_Property* CT_Properties::ChildGroup_1::mutable_property()
{

    m_has_property = true;
    if (!m_property)
    {
        m_property = new CT_Property();
    }
    return m_property;
}

const CT_Property& CT_Properties::ChildGroup_1::get_property() const
{
    if (m_property)
    {
        return *m_property;
    }
    return CT_Property::default_instance();
}

CT_Properties* CT_Properties::default_instance_ = NULL;

// CT_Property
CT_Property::CT_Property()
    :m_has_vt_vector(false),
     m_vt_vector(NULL),
     m_has_vt_array(false),
     m_vt_array(NULL),
     m_has_vt_blob(false),
     m_vt_blob(""),
     m_has_vt_oblob(false),
     m_vt_oblob(""),
     m_has_vt_empty(false),
     m_vt_empty(NULL),
     m_has_vt_null(false),
     m_vt_null(NULL),
     m_has_vt_i1(false),
     m_vt_i1(0),
     m_has_vt_i2(false),
     m_vt_i2(0),
     m_has_vt_i4(false),
     m_vt_i4(0),
     m_has_vt_i8(false),
     m_vt_i8(0),
     m_has_vt_int(false),
     m_vt_int(0),
     m_has_vt_ui1(false),
     m_vt_ui1(0),
     m_has_vt_ui2(false),
     m_vt_ui2(0),
     m_has_vt_ui4(false),
     m_vt_ui4(0),
     m_has_vt_ui8(false),
     m_vt_ui8(0),
     m_has_vt_uint(false),
     m_vt_uint(0),
     m_has_vt_r4(false),
     m_vt_r4(0),
     m_has_vt_r8(false),
     m_vt_r8(0),
     m_has_vt_decimal(false),
     m_vt_decimal(0),
     m_has_vt_lpstr(false),
     m_vt_lpstr(""),
     m_has_vt_lpwstr(false),
     m_vt_lpwstr(""),
     m_has_vt_bstr(false),
     m_vt_bstr(""),
     m_has_vt_date(false),
     m_vt_date(""),
     m_has_vt_filetime(false),
     m_vt_filetime(""),
     m_has_vt_bool(false),
     m_vt_bool(false),
     m_has_vt_cy(false),
     m_vt_cy(NULL),
     m_has_vt_error(false),
     m_vt_error(NULL),
     m_has_vt_stream(false),
     m_vt_stream(""),
     m_has_vt_ostream(false),
     m_vt_ostream(""),
     m_has_vt_storage(false),
     m_vt_storage(""),
     m_has_vt_ostorage(false),
     m_vt_ostorage(""),
     m_has_vt_vstream(false),
     m_vt_vstream(NULL),
     m_has_vt_clsid(false),
     m_vt_clsid(NULL),
     m_has_fmtid_attr(false),
     m_fmtid_attr(NULL),
     m_has_pid_attr(false),
     m_pid_attr(0),
     m_has_name_attr(false),
     m_name_attr(""),
     m_has_linkTarget_attr(false),
     m_linkTarget_attr("")
{
}
CT_Property::~CT_Property()
{
    clear();
}
bool CT_Property::has_vt_vector() const
{
    return m_has_vt_vector;
}

ns_vt::CT_Vector* CT_Property::mutable_vt_vector()
{

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_vector = true;
    if (!m_vt_vector)
    {
        m_vt_vector = new ns_vt::CT_Vector();
    }
    return m_vt_vector;
}

const ns_vt::CT_Vector& CT_Property::get_vt_vector() const
{
    if (m_vt_vector)
    {
        return *m_vt_vector;
    }
    return ns_vt::CT_Vector::default_instance();
}

bool CT_Property::has_vt_array() const
{
    return m_has_vt_array;
}

ns_vt::CT_Array* CT_Property::mutable_vt_array()
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_array = true;
    if (!m_vt_array)
    {
        m_vt_array = new ns_vt::CT_Array();
    }
    return m_vt_array;
}

const ns_vt::CT_Array& CT_Property::get_vt_array() const
{
    if (m_vt_array)
    {
        return *m_vt_array;
    }
    return ns_vt::CT_Array::default_instance();
}

bool CT_Property::has_vt_blob() const
{
    return m_has_vt_blob;
}

void CT_Property::set_vt_blob(const XSD::base64Binary_& _vt_blob)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_blob = true;
    m_vt_blob = _vt_blob;
}

const XSD::base64Binary_& CT_Property::get_vt_blob() const
{
    return m_vt_blob;
}

bool CT_Property::has_vt_oblob() const
{
    return m_has_vt_oblob;
}

void CT_Property::set_vt_oblob(const XSD::base64Binary_& _vt_oblob)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_oblob = true;
    m_vt_oblob = _vt_oblob;
}

const XSD::base64Binary_& CT_Property::get_vt_oblob() const
{
    return m_vt_oblob;
}

bool CT_Property::has_vt_empty() const
{
    return m_has_vt_empty;
}

ns_vt::CT_Empty* CT_Property::mutable_vt_empty()
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_empty = true;
    if (!m_vt_empty)
    {
        m_vt_empty = new ns_vt::CT_Empty();
    }
    return m_vt_empty;
}

const ns_vt::CT_Empty& CT_Property::get_vt_empty() const
{
    if (m_vt_empty)
    {
        return *m_vt_empty;
    }
    return ns_vt::CT_Empty::default_instance();
}

bool CT_Property::has_vt_null() const
{
    return m_has_vt_null;
}

ns_vt::CT_Null* CT_Property::mutable_vt_null()
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_null = true;
    if (!m_vt_null)
    {
        m_vt_null = new ns_vt::CT_Null();
    }
    return m_vt_null;
}

const ns_vt::CT_Null& CT_Property::get_vt_null() const
{
    if (m_vt_null)
    {
        return *m_vt_null;
    }
    return ns_vt::CT_Null::default_instance();
}

bool CT_Property::has_vt_i1() const
{
    return m_has_vt_i1;
}

void CT_Property::set_vt_i1(const XSD::byte_& _vt_i1)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_i1 = true;
    m_vt_i1 = _vt_i1;
}

const XSD::byte_& CT_Property::get_vt_i1() const
{
    return m_vt_i1;
}

bool CT_Property::has_vt_i2() const
{
    return m_has_vt_i2;
}

void CT_Property::set_vt_i2(const XSD::short_& _vt_i2)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_i2 = true;
    m_vt_i2 = _vt_i2;
}

const XSD::short_& CT_Property::get_vt_i2() const
{
    return m_vt_i2;
}

bool CT_Property::has_vt_i4() const
{
    return m_has_vt_i4;
}

void CT_Property::set_vt_i4(const XSD::int_& _vt_i4)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_i4 = true;
    m_vt_i4 = _vt_i4;
}

const XSD::int_& CT_Property::get_vt_i4() const
{
    return m_vt_i4;
}

bool CT_Property::has_vt_i8() const
{
    return m_has_vt_i8;
}

void CT_Property::set_vt_i8(const XSD::long_& _vt_i8)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_i8 = true;
    m_vt_i8 = _vt_i8;
}

const XSD::long_& CT_Property::get_vt_i8() const
{
    return m_vt_i8;
}

bool CT_Property::has_vt_int() const
{
    return m_has_vt_int;
}

void CT_Property::set_vt_int(const XSD::int_& _vt_int)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_int = true;
    m_vt_int = _vt_int;
}

const XSD::int_& CT_Property::get_vt_int() const
{
    return m_vt_int;
}

bool CT_Property::has_vt_ui1() const
{
    return m_has_vt_ui1;
}

void CT_Property::set_vt_ui1(const XSD::unsignedByte_& _vt_ui1)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_ui1 = true;
    m_vt_ui1 = _vt_ui1;
}

const XSD::unsignedByte_& CT_Property::get_vt_ui1() const
{
    return m_vt_ui1;
}

bool CT_Property::has_vt_ui2() const
{
    return m_has_vt_ui2;
}

void CT_Property::set_vt_ui2(const XSD::unsignedShort_& _vt_ui2)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_ui2 = true;
    m_vt_ui2 = _vt_ui2;
}

const XSD::unsignedShort_& CT_Property::get_vt_ui2() const
{
    return m_vt_ui2;
}

bool CT_Property::has_vt_ui4() const
{
    return m_has_vt_ui4;
}

void CT_Property::set_vt_ui4(const XSD::unsignedInt_& _vt_ui4)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_ui4 = true;
    m_vt_ui4 = _vt_ui4;
}

const XSD::unsignedInt_& CT_Property::get_vt_ui4() const
{
    return m_vt_ui4;
}

bool CT_Property::has_vt_ui8() const
{
    return m_has_vt_ui8;
}

void CT_Property::set_vt_ui8(const XSD::unsignedLong_& _vt_ui8)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_ui8 = true;
    m_vt_ui8 = _vt_ui8;
}

const XSD::unsignedLong_& CT_Property::get_vt_ui8() const
{
    return m_vt_ui8;
}

bool CT_Property::has_vt_uint() const
{
    return m_has_vt_uint;
}

void CT_Property::set_vt_uint(const XSD::unsignedInt_& _vt_uint)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_uint = true;
    m_vt_uint = _vt_uint;
}

const XSD::unsignedInt_& CT_Property::get_vt_uint() const
{
    return m_vt_uint;
}

bool CT_Property::has_vt_r4() const
{
    return m_has_vt_r4;
}

void CT_Property::set_vt_r4(const XSD::float_& _vt_r4)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_r4 = true;
    m_vt_r4 = _vt_r4;
}

const XSD::float_& CT_Property::get_vt_r4() const
{
    return m_vt_r4;
}

bool CT_Property::has_vt_r8() const
{
    return m_has_vt_r8;
}

void CT_Property::set_vt_r8(const XSD::double_& _vt_r8)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_r8 = true;
    m_vt_r8 = _vt_r8;
}

const XSD::double_& CT_Property::get_vt_r8() const
{
    return m_vt_r8;
}

bool CT_Property::has_vt_decimal() const
{
    return m_has_vt_decimal;
}

void CT_Property::set_vt_decimal(const XSD::decimal_& _vt_decimal)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_decimal = true;
    m_vt_decimal = _vt_decimal;
}

const XSD::decimal_& CT_Property::get_vt_decimal() const
{
    return m_vt_decimal;
}

bool CT_Property::has_vt_lpstr() const
{
    return m_has_vt_lpstr;
}

void CT_Property::set_vt_lpstr(const XSD::string_& _vt_lpstr)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_lpstr = true;
    m_vt_lpstr = _vt_lpstr;
}

const XSD::string_& CT_Property::get_vt_lpstr() const
{
    return m_vt_lpstr;
}

bool CT_Property::has_vt_lpwstr() const
{
    return m_has_vt_lpwstr;
}

void CT_Property::set_vt_lpwstr(const XSD::string_& _vt_lpwstr)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_lpwstr = true;
    m_vt_lpwstr = _vt_lpwstr;
}

const XSD::string_& CT_Property::get_vt_lpwstr() const
{
    return m_vt_lpwstr;
}

bool CT_Property::has_vt_bstr() const
{
    return m_has_vt_bstr;
}

void CT_Property::set_vt_bstr(const XSD::string_& _vt_bstr)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_bstr = true;
    m_vt_bstr = _vt_bstr;
}

const XSD::string_& CT_Property::get_vt_bstr() const
{
    return m_vt_bstr;
}

bool CT_Property::has_vt_date() const
{
    return m_has_vt_date;
}

void CT_Property::set_vt_date(const XSD::dateTime_& _vt_date)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_date = true;
    m_vt_date = _vt_date;
}

const XSD::dateTime_& CT_Property::get_vt_date() const
{
    return m_vt_date;
}

bool CT_Property::has_vt_filetime() const
{
    return m_has_vt_filetime;
}

void CT_Property::set_vt_filetime(const XSD::dateTime_& _vt_filetime)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_filetime = true;
    m_vt_filetime = _vt_filetime;
}

const XSD::dateTime_& CT_Property::get_vt_filetime() const
{
    return m_vt_filetime;
}

bool CT_Property::has_vt_bool() const
{
    return m_has_vt_bool;
}

void CT_Property::set_vt_bool(const XSD::boolean_& _vt_bool)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_bool = true;
    m_vt_bool = _vt_bool;
}

const XSD::boolean_& CT_Property::get_vt_bool() const
{
    return m_vt_bool;
}

bool CT_Property::has_vt_cy() const
{
    return m_has_vt_cy;
}

ns_vt::ST_Cy* CT_Property::mutable_vt_cy()
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_cy = true;
    if (!m_vt_cy)
    {
        m_vt_cy = new ns_vt::ST_Cy();
    }
    return m_vt_cy;
}

const ns_vt::ST_Cy& CT_Property::get_vt_cy() const
{
    if (m_vt_cy)
    {
        return *m_vt_cy;
    }
    return ns_vt::ST_Cy::default_instance();
}

bool CT_Property::has_vt_error() const
{
    return m_has_vt_error;
}

ns_vt::ST_Error* CT_Property::mutable_vt_error()
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_error = true;
    if (!m_vt_error)
    {
        m_vt_error = new ns_vt::ST_Error();
    }
    return m_vt_error;
}

const ns_vt::ST_Error& CT_Property::get_vt_error() const
{
    if (m_vt_error)
    {
        return *m_vt_error;
    }
    return ns_vt::ST_Error::default_instance();
}

bool CT_Property::has_vt_stream() const
{
    return m_has_vt_stream;
}

void CT_Property::set_vt_stream(const XSD::base64Binary_& _vt_stream)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_stream = true;
    m_vt_stream = _vt_stream;
}

const XSD::base64Binary_& CT_Property::get_vt_stream() const
{
    return m_vt_stream;
}

bool CT_Property::has_vt_ostream() const
{
    return m_has_vt_ostream;
}

void CT_Property::set_vt_ostream(const XSD::base64Binary_& _vt_ostream)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_ostream = true;
    m_vt_ostream = _vt_ostream;
}

const XSD::base64Binary_& CT_Property::get_vt_ostream() const
{
    return m_vt_ostream;
}

bool CT_Property::has_vt_storage() const
{
    return m_has_vt_storage;
}

void CT_Property::set_vt_storage(const XSD::base64Binary_& _vt_storage)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_storage = true;
    m_vt_storage = _vt_storage;
}

const XSD::base64Binary_& CT_Property::get_vt_storage() const
{
    return m_vt_storage;
}

bool CT_Property::has_vt_ostorage() const
{
    return m_has_vt_ostorage;
}

void CT_Property::set_vt_ostorage(const XSD::base64Binary_& _vt_ostorage)
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_ostorage = true;
    m_vt_ostorage = _vt_ostorage;
}

const XSD::base64Binary_& CT_Property::get_vt_ostorage() const
{
    return m_vt_ostorage;
}

bool CT_Property::has_vt_vstream() const
{
    return m_has_vt_vstream;
}

ns_vt::CT_Vstream* CT_Property::mutable_vt_vstream()
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }
    ;

    m_has_vt_vstream = true;
    if (!m_vt_vstream)
    {
        m_vt_vstream = new ns_vt::CT_Vstream();
    }
    return m_vt_vstream;
}

const ns_vt::CT_Vstream& CT_Property::get_vt_vstream() const
{
    if (m_vt_vstream)
    {
        return *m_vt_vstream;
    }
    return ns_vt::CT_Vstream::default_instance();
}

bool CT_Property::has_vt_clsid() const
{
    return m_has_vt_clsid;
}

ns_s::ST_Guid* CT_Property::mutable_vt_clsid()
{

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }
    ;

    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }
    ;

    m_has_vt_blob = false;
    m_vt_blob.clear();;

    m_has_vt_oblob = false;
    m_vt_oblob.clear();;

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }
    ;

    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }
    ;

    m_has_vt_i1 = false;
    m_vt_i1 = 0;;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;;

    m_has_vt_int = false;
    m_vt_int = 0;;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;;

    m_has_vt_uint = false;
    m_vt_uint = 0;;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();;

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();;

    m_has_vt_bstr = false;
    m_vt_bstr.clear();;

    m_has_vt_date = false;
    m_vt_date.clear();;

    m_has_vt_filetime = false;
    m_vt_filetime.clear();;

    m_has_vt_bool = false;
    m_vt_bool = false;;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }
    ;

    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }
    ;

    m_has_vt_stream = false;
    m_vt_stream.clear();;

    m_has_vt_ostream = false;
    m_vt_ostream.clear();;

    m_has_vt_storage = false;
    m_vt_storage.clear();;

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();;

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;

    m_has_vt_clsid = true;
    if (!m_vt_clsid)
    {
        m_vt_clsid = new ns_s::ST_Guid();
    }
    return m_vt_clsid;
}

const ns_s::ST_Guid& CT_Property::get_vt_clsid() const
{
    if (m_vt_clsid)
    {
        return *m_vt_clsid;
    }
    return ns_s::ST_Guid::default_instance();
}

void CT_Property::clear()
{
    m_has_fmtid_attr = false;

    if (m_fmtid_attr)
    {
        delete m_fmtid_attr;
        m_fmtid_attr = NULL;
    }


    m_has_pid_attr = false;
    m_pid_attr = 0;

    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_linkTarget_attr = false;
    m_linkTarget_attr.clear();

    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }


    m_has_vt_array = false;

    if (m_vt_array)
    {
        delete m_vt_array;
        m_vt_array = NULL;
    }


    m_has_vt_blob = false;
    m_vt_blob.clear();

    m_has_vt_oblob = false;
    m_vt_oblob.clear();

    m_has_vt_empty = false;

    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
    }


    m_has_vt_null = false;

    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
    }


    m_has_vt_i1 = false;
    m_vt_i1 = 0;

    m_has_vt_i2 = false;
    m_vt_i2 = 0;

    m_has_vt_i4 = false;
    m_vt_i4 = 0;

    m_has_vt_i8 = false;
    m_vt_i8 = 0;

    m_has_vt_int = false;
    m_vt_int = 0;

    m_has_vt_ui1 = false;
    m_vt_ui1 = 0;

    m_has_vt_ui2 = false;
    m_vt_ui2 = 0;

    m_has_vt_ui4 = false;
    m_vt_ui4 = 0;

    m_has_vt_ui8 = false;
    m_vt_ui8 = 0;

    m_has_vt_uint = false;
    m_vt_uint = 0;

    m_has_vt_r4 = false;
    m_vt_r4 = 0;

    m_has_vt_r8 = false;
    m_vt_r8 = 0;

    m_has_vt_decimal = false;
    m_vt_decimal = 0;

    m_has_vt_lpstr = false;
    m_vt_lpstr.clear();

    m_has_vt_lpwstr = false;
    m_vt_lpwstr.clear();

    m_has_vt_bstr = false;
    m_vt_bstr.clear();

    m_has_vt_date = false;
    m_vt_date.clear();

    m_has_vt_filetime = false;
    m_vt_filetime.clear();

    m_has_vt_bool = false;
    m_vt_bool = false;

    m_has_vt_cy = false;

    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
    }


    m_has_vt_error = false;

    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
    }


    m_has_vt_stream = false;
    m_vt_stream.clear();

    m_has_vt_ostream = false;
    m_vt_ostream.clear();

    m_has_vt_storage = false;
    m_vt_storage.clear();

    m_has_vt_ostorage = false;
    m_vt_ostorage.clear();

    m_has_vt_vstream = false;

    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }


    m_has_vt_clsid = false;

    if (m_vt_clsid)
    {
        delete m_vt_clsid;
        m_vt_clsid = NULL;
    }

}

void CT_Property::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_fmtid_attr);
    if (m_has_fmtid_attr)
    {
        m_fmtid_attr->toXmlAttr("fmtid", _outStream);
    }


    assert(m_has_pid_attr);
    if (m_has_pid_attr)
    {
        _outStream << " " << "pid" << "=\"" << m_pid_attr << "\"";
    }



    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }



    if (m_has_linkTarget_attr)
    {
        _outStream << " " << "linkTarget" << "=\"" << m_linkTarget_attr << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[33] = {m_has_vt_vector, m_has_vt_array, m_has_vt_blob, m_has_vt_oblob, m_has_vt_empty, m_has_vt_null, m_has_vt_i1, m_has_vt_i2, m_has_vt_i4, m_has_vt_i8, m_has_vt_int, m_has_vt_ui1, m_has_vt_ui2, m_has_vt_ui4, m_has_vt_ui8, m_has_vt_uint, m_has_vt_r4, m_has_vt_r8, m_has_vt_decimal, m_has_vt_lpstr, m_has_vt_lpwstr, m_has_vt_bstr, m_has_vt_date, m_has_vt_filetime, m_has_vt_bool, m_has_vt_cy, m_has_vt_error, m_has_vt_stream, m_has_vt_ostream, m_has_vt_storage, m_has_vt_ostorage, m_has_vt_vstream, m_has_vt_clsid};
        int cnt = count(elemHasValueList, elemHasValueList + 33, true);
        assert(cnt == 1);
    }


    if (m_has_vt_vector)
    {
        m_vt_vector->toXmlElem("vt:vector", "", _outStream);
    }


    if (m_has_vt_array)
    {
        m_vt_array->toXmlElem("vt:array", "", _outStream);
    }


    if (m_has_vt_blob)
    {
        _outStream << "<vt:blob>" << m_vt_blob << "</vt:blob>";
    }


    if (m_has_vt_oblob)
    {
        _outStream << "<vt:oblob>" << m_vt_oblob << "</vt:oblob>";
    }


    if (m_has_vt_empty)
    {
        m_vt_empty->toXmlElem("vt:empty", "", _outStream);
    }


    if (m_has_vt_null)
    {
        m_vt_null->toXmlElem("vt:null", "", _outStream);
    }


    if (m_has_vt_i1)
    {
        _outStream << "<vt:i1>" << m_vt_i1 << "</vt:i1>";
    }


    if (m_has_vt_i2)
    {
        _outStream << "<vt:i2>" << m_vt_i2 << "</vt:i2>";
    }


    if (m_has_vt_i4)
    {
        _outStream << "<vt:i4>" << m_vt_i4 << "</vt:i4>";
    }


    if (m_has_vt_i8)
    {
        _outStream << "<vt:i8>" << m_vt_i8 << "</vt:i8>";
    }


    if (m_has_vt_int)
    {
        _outStream << "<vt:int>" << m_vt_int << "</vt:int>";
    }


    if (m_has_vt_ui1)
    {
        _outStream << "<vt:ui1>" << m_vt_ui1 << "</vt:ui1>";
    }


    if (m_has_vt_ui2)
    {
        _outStream << "<vt:ui2>" << m_vt_ui2 << "</vt:ui2>";
    }


    if (m_has_vt_ui4)
    {
        _outStream << "<vt:ui4>" << m_vt_ui4 << "</vt:ui4>";
    }


    if (m_has_vt_ui8)
    {
        _outStream << "<vt:ui8>" << m_vt_ui8 << "</vt:ui8>";
    }


    if (m_has_vt_uint)
    {
        _outStream << "<vt:uint>" << m_vt_uint << "</vt:uint>";
    }


    if (m_has_vt_r4)
    {
        _outStream << "<vt:r4>" << m_vt_r4 << "</vt:r4>";
    }


    if (m_has_vt_r8)
    {
        _outStream << "<vt:r8>" << m_vt_r8 << "</vt:r8>";
    }


    if (m_has_vt_decimal)
    {
        _outStream << "<vt:decimal>" << m_vt_decimal << "</vt:decimal>";
    }


    if (m_has_vt_lpstr)
    {
        _outStream << "<vt:lpstr>" << m_vt_lpstr << "</vt:lpstr>";
    }


    if (m_has_vt_lpwstr)
    {
        _outStream << "<vt:lpwstr>" << m_vt_lpwstr << "</vt:lpwstr>";
    }


    if (m_has_vt_bstr)
    {
        _outStream << "<vt:bstr>" << m_vt_bstr << "</vt:bstr>";
    }


    if (m_has_vt_date)
    {
        _outStream << "<vt:date>" << m_vt_date << "</vt:date>";
    }


    if (m_has_vt_filetime)
    {
        _outStream << "<vt:filetime>" << m_vt_filetime << "</vt:filetime>";
    }


    if (m_has_vt_bool)
    {
        _outStream << "<vt:bool>" << m_vt_bool << "</vt:bool>";
    }


    if (m_has_vt_cy)
    {
        _outStream << "<vt:cy>" << m_vt_cy->toString() << "</vt:cy>";
    }


    if (m_has_vt_error)
    {
        _outStream << "<vt:error>" << m_vt_error->toString() << "</vt:error>";
    }


    if (m_has_vt_stream)
    {
        _outStream << "<vt:stream>" << m_vt_stream << "</vt:stream>";
    }


    if (m_has_vt_ostream)
    {
        _outStream << "<vt:ostream>" << m_vt_ostream << "</vt:ostream>";
    }


    if (m_has_vt_storage)
    {
        _outStream << "<vt:storage>" << m_vt_storage << "</vt:storage>";
    }


    if (m_has_vt_ostorage)
    {
        _outStream << "<vt:ostorage>" << m_vt_ostorage << "</vt:ostorage>";
    }


    if (m_has_vt_vstream)
    {
        m_vt_vstream->toXmlElem("vt:vstream", "", _outStream);
    }


    if (m_has_vt_clsid)
    {
        _outStream << "<vt:clsid>" << m_vt_clsid->toString() << "</vt:clsid>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Property& CT_Property::default_instance()
{
    if (!CT_Property::default_instance_)
    {
        CT_Property::default_instance_ = new CT_Property();
    }
    return *CT_Property::default_instance_;
}

bool CT_Property::has_fmtid_attr() const
{
    return m_has_fmtid_attr;
}

void CT_Property::set_fmtid_attr(const ns_s::ST_Guid& _fmtid_attr)
{
    m_has_fmtid_attr = true;
    m_fmtid_attr = new ns_s::ST_Guid(_fmtid_attr);
}

const ns_s::ST_Guid& CT_Property::get_fmtid_attr() const
{
    if (m_fmtid_attr)
    {
        return *m_fmtid_attr;
    }
    return ns_s::ST_Guid::default_instance();
}

bool CT_Property::has_pid_attr() const
{
    return m_has_pid_attr;
}

void CT_Property::set_pid_attr(const XSD::int_& _pid_attr)
{
    m_has_pid_attr = true;
    m_pid_attr = _pid_attr;
}

const XSD::int_& CT_Property::get_pid_attr() const
{
    return m_pid_attr;
}

bool CT_Property::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_Property::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& CT_Property::get_name_attr() const
{
    return m_name_attr;
}

bool CT_Property::has_linkTarget_attr() const
{
    return m_has_linkTarget_attr;
}

void CT_Property::set_linkTarget_attr(const XSD::string_& _linkTarget_attr)
{
    m_has_linkTarget_attr = true;
    m_linkTarget_attr = _linkTarget_attr;
}

const XSD::string_& CT_Property::get_linkTarget_attr() const
{
    return m_linkTarget_attr;
}

CT_Property* CT_Property::default_instance_ = NULL;

// Properties_element
Properties_element::Properties_element()

{
}
Properties_element::~Properties_element()
{
    clear();
}
CT_Property* Properties_element::add_property()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Property* pNewChild = pChildGroup->mutable_property();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void Properties_element::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void Properties_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<op:Properties";

    _outStream << " " << "xmlns:op=\"http://schemas.openxmlformats.org/officeDocument/2006/custom-properties\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_property())
            {
                (*iter)->get_property().toXmlElem("op:property", "", _outStream);
            }


        }
    }

    _outStream << "</op:Properties>";
}

const Properties_element& Properties_element::default_instance()
{
    if (!Properties_element::default_instance_)
    {
        Properties_element::default_instance_ = new Properties_element();
    }
    return *Properties_element::default_instance_;
}


// Properties_element::ChildGroup_1
Properties_element::ChildGroup_1::ChildGroup_1()
    :m_has_property(false),
     m_property(NULL)
{
}
bool Properties_element::ChildGroup_1::has_property() const
{
    return m_has_property;
}

CT_Property* Properties_element::ChildGroup_1::mutable_property()
{

    m_has_property = true;
    if (!m_property)
    {
        m_property = new CT_Property();
    }
    return m_property;
}

const CT_Property& Properties_element::ChildGroup_1::get_property() const
{
    if (m_property)
    {
        return *m_property;
    }
    return CT_Property::default_instance();
}

Properties_element* Properties_element::default_instance_ = NULL;
}