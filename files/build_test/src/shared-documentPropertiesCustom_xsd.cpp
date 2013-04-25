#include "shared-documentPropertiesCustom_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "shared-documentPropertiesVariantTypes_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_custom_properties {
 using namespace std;

    // Element

    // Attribute

    // CT_Properties
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
                (*iter)->get_property().toXmlElem("custom_properties:property", "", _outStream);
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


    // CT_Property
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
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

    bool CT_Property::has_blob() const
    {    
    return m_has_blob;
    }

    void CT_Property::set_blob(const XSD::base64Binary_& _blob)
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
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_blob = true;
    m_blob = _blob;
    }

    const XSD::base64Binary_& CT_Property::get_blob() const
    {    
    return m_blob;
    }

    bool CT_Property::has_oblob() const
    {    
    return m_has_oblob;
    }

    void CT_Property::set_oblob(const XSD::base64Binary_& _oblob)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_oblob = true;
    m_oblob = _oblob;
    }

    const XSD::base64Binary_& CT_Property::get_oblob() const
    {    
    return m_oblob;
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_vt_null = false;
    
    if (m_vt_null)
    {
        delete m_vt_null;
        m_vt_null = NULL;
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
    m_has_vt_empty = false;
    
    if (m_vt_empty)
    {
        delete m_vt_empty;
        m_vt_empty = NULL;
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
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

    bool CT_Property::has_i1() const
    {    
    return m_has_i1;
    }

    void CT_Property::set_i1(const XSD::byte_& _i1)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_i1 = true;
    m_i1 = _i1;
    }

    const XSD::byte_& CT_Property::get_i1() const
    {    
    return m_i1;
    }

    bool CT_Property::has_i2() const
    {    
    return m_has_i2;
    }

    void CT_Property::set_i2(const XSD::short_& _i2)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_i2 = true;
    m_i2 = _i2;
    }

    const XSD::short_& CT_Property::get_i2() const
    {    
    return m_i2;
    }

    bool CT_Property::has_i4() const
    {    
    return m_has_i4;
    }

    void CT_Property::set_i4(const XSD::int_& _i4)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_i4 = true;
    m_i4 = _i4;
    }

    const XSD::int_& CT_Property::get_i4() const
    {    
    return m_i4;
    }

    bool CT_Property::has_i8() const
    {    
    return m_has_i8;
    }

    void CT_Property::set_i8(const XSD::long_& _i8)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_i8 = true;
    m_i8 = _i8;
    }

    const XSD::long_& CT_Property::get_i8() const
    {    
    return m_i8;
    }

    bool CT_Property::has_int() const
    {    
    return m_has_int;
    }

    void CT_Property::set_int(const XSD::int_& _int)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_int = true;
    m_int = _int;
    }

    const XSD::int_& CT_Property::get_int() const
    {    
    return m_int;
    }

    bool CT_Property::has_ui1() const
    {    
    return m_has_ui1;
    }

    void CT_Property::set_ui1(const XSD::unsignedByte_& _ui1)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_ui1 = true;
    m_ui1 = _ui1;
    }

    const XSD::unsignedByte_& CT_Property::get_ui1() const
    {    
    return m_ui1;
    }

    bool CT_Property::has_ui2() const
    {    
    return m_has_ui2;
    }

    void CT_Property::set_ui2(const XSD::unsignedShort_& _ui2)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_ui2 = true;
    m_ui2 = _ui2;
    }

    const XSD::unsignedShort_& CT_Property::get_ui2() const
    {    
    return m_ui2;
    }

    bool CT_Property::has_ui4() const
    {    
    return m_has_ui4;
    }

    void CT_Property::set_ui4(const XSD::unsignedInt_& _ui4)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_ui4 = true;
    m_ui4 = _ui4;
    }

    const XSD::unsignedInt_& CT_Property::get_ui4() const
    {    
    return m_ui4;
    }

    bool CT_Property::has_ui8() const
    {    
    return m_has_ui8;
    }

    void CT_Property::set_ui8(const XSD::unsignedLong_& _ui8)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_ui8 = true;
    m_ui8 = _ui8;
    }

    const XSD::unsignedLong_& CT_Property::get_ui8() const
    {    
    return m_ui8;
    }

    bool CT_Property::has_uint() const
    {    
    return m_has_uint;
    }

    void CT_Property::set_uint(const XSD::unsignedInt_& _uint)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_uint = true;
    m_uint = _uint;
    }

    const XSD::unsignedInt_& CT_Property::get_uint() const
    {    
    return m_uint;
    }

    bool CT_Property::has_r4() const
    {    
    return m_has_r4;
    }

    void CT_Property::set_r4(const XSD::float_& _r4)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_r4 = true;
    m_r4 = _r4;
    }

    const XSD::float_& CT_Property::get_r4() const
    {    
    return m_r4;
    }

    bool CT_Property::has_r8() const
    {    
    return m_has_r8;
    }

    void CT_Property::set_r8(const XSD::double_& _r8)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_r8 = true;
    m_r8 = _r8;
    }

    const XSD::double_& CT_Property::get_r8() const
    {    
    return m_r8;
    }

    bool CT_Property::has_decimal() const
    {    
    return m_has_decimal;
    }

    void CT_Property::set_decimal(const XSD::decimal_& _decimal)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_decimal = true;
    m_decimal = _decimal;
    }

    const XSD::decimal_& CT_Property::get_decimal() const
    {    
    return m_decimal;
    }

    bool CT_Property::has_lpstr() const
    {    
    return m_has_lpstr;
    }

    void CT_Property::set_lpstr(const XSD::string_& _lpstr)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_lpstr = true;
    m_lpstr = _lpstr;
    }

    const XSD::string_& CT_Property::get_lpstr() const
    {    
    return m_lpstr;
    }

    bool CT_Property::has_lpwstr() const
    {    
    return m_has_lpwstr;
    }

    void CT_Property::set_lpwstr(const XSD::string_& _lpwstr)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_lpwstr = true;
    m_lpwstr = _lpwstr;
    }

    const XSD::string_& CT_Property::get_lpwstr() const
    {    
    return m_lpwstr;
    }

    bool CT_Property::has_bstr() const
    {    
    return m_has_bstr;
    }

    void CT_Property::set_bstr(const XSD::string_& _bstr)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_bstr = true;
    m_bstr = _bstr;
    }

    const XSD::string_& CT_Property::get_bstr() const
    {    
    return m_bstr;
    }

    bool CT_Property::has_date() const
    {    
    return m_has_date;
    }

    void CT_Property::set_date(const XSD::dateTime_& _date)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_date = true;
    m_date = _date;
    }

    const XSD::dateTime_& CT_Property::get_date() const
    {    
    return m_date;
    }

    bool CT_Property::has_filetime() const
    {    
    return m_has_filetime;
    }

    void CT_Property::set_filetime(const XSD::dateTime_& _filetime)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_filetime = true;
    m_filetime = _filetime;
    }

    const XSD::dateTime_& CT_Property::get_filetime() const
    {    
    return m_filetime;
    }

    bool CT_Property::has_bool() const
    {    
    return m_has_bool;
    }

    void CT_Property::set_bool(const XSD::boolean_& _bool)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_bool = true;
    m_bool = _bool;
    }

    const XSD::boolean_& CT_Property::get_bool() const
    {    
    return m_bool;
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_vt_error = false;
    
    if (m_vt_error)
    {
        delete m_vt_error;
        m_vt_error = NULL;
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
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_vt_cy = false;
    
    if (m_vt_cy)
    {
        delete m_vt_cy;
        m_vt_cy = NULL;
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
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
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

    bool CT_Property::has_stream() const
    {    
    return m_has_stream;
    }

    void CT_Property::set_stream(const XSD::base64Binary_& _stream)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_stream = true;
    m_stream = _stream;
    }

    const XSD::base64Binary_& CT_Property::get_stream() const
    {    
    return m_stream;
    }

    bool CT_Property::has_ostream() const
    {    
    return m_has_ostream;
    }

    void CT_Property::set_ostream(const XSD::base64Binary_& _ostream)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_ostream = true;
    m_ostream = _ostream;
    }

    const XSD::base64Binary_& CT_Property::get_ostream() const
    {    
    return m_ostream;
    }

    bool CT_Property::has_storage() const
    {    
    return m_has_storage;
    }

    void CT_Property::set_storage(const XSD::base64Binary_& _storage)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_storage = true;
    m_storage = _storage;
    }

    const XSD::base64Binary_& CT_Property::get_storage() const
    {    
    return m_storage;
    }

    bool CT_Property::has_ostorage() const
    {    
    return m_has_ostorage;
    }

    void CT_Property::set_ostorage(const XSD::base64Binary_& _ostorage)
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    ;
    
    m_has_ostorage = true;
    m_ostorage = _ostorage;
    }

    const XSD::base64Binary_& CT_Property::get_ostorage() const
    {    
    return m_ostorage;
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
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

    bool CT_Property::has_s_clsid() const
    {    
    return m_has_s_clsid;
    }

    ns_s::ST_Guid* CT_Property::mutable_s_clsid()
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
    
    m_has_blob = false;
    m_blob.clear();;
    
    m_has_oblob = false;
    m_oblob.clear();;
    
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
    
    m_has_stream = false;
    m_stream.clear();;
    
    m_has_ostream = false;
    m_ostream.clear();;
    
    m_has_storage = false;
    m_storage.clear();;
    
    m_has_ostorage = false;
    m_ostorage.clear();;
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    ;
    
    m_has_s_clsid = true;
    if (!m_s_clsid)
    {
        m_s_clsid = new ns_s::ST_Guid();
    }
    return m_s_clsid;
    }

    const ns_s::ST_Guid& CT_Property::get_s_clsid() const
    {    
    if (m_s_clsid)
    {
        return *m_s_clsid;
    }
    return ns_s::ST_Guid::default_instance();
    }

    void CT_Property::clear()
    {    
    m_has_s_fmtid_attr = false;
    
    if (m_s_fmtid_attr)
    {
        delete m_s_fmtid_attr;
        m_s_fmtid_attr = NULL;
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
    
    
    m_has_blob = false;
    m_blob.clear();
    
    m_has_oblob = false;
    m_oblob.clear();
    
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
    
    
    m_has_stream = false;
    m_stream.clear();
    
    m_has_ostream = false;
    m_ostream.clear();
    
    m_has_storage = false;
    m_storage.clear();
    
    m_has_ostorage = false;
    m_ostorage.clear();
    
    m_has_vt_vstream = false;
    
    if (m_vt_vstream)
    {
        delete m_vt_vstream;
        m_vt_vstream = NULL;
    }
    
    
    m_has_s_clsid = false;
    
    if (m_s_clsid)
    {
        delete m_s_clsid;
        m_s_clsid = NULL;
    }
    
    }

    void CT_Property::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_fmtid_attr)
    {
        m_s_fmtid_attr->toXmlAttr("fmtid", _outStream);
    }
    
    
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
            
    if (m_has_vt_vector)
    {
        m_vt_vector->toXmlElem("custom_properties:vector", "", _outStream);;
    }
    
    if (m_has_vt_array)
    {
        m_vt_array->toXmlElem("custom_properties:array", "", _outStream);;
    }
    
    if (m_has_blob)
    {
        _outStream << "<custom_properties:blob>" << m_blob << "</custom_properties:blob>";;
    }
    
    if (m_has_oblob)
    {
        _outStream << "<custom_properties:oblob>" << m_oblob << "</custom_properties:oblob>";;
    }
    
    if (m_has_vt_empty)
    {
        m_vt_empty->toXmlElem("custom_properties:empty", "", _outStream);;
    }
    
    if (m_has_vt_null)
    {
        m_vt_null->toXmlElem("custom_properties:null", "", _outStream);;
    }
    
    if (m_has_i1)
    {
        _outStream << "<custom_properties:i1>" << m_i1 << "</custom_properties:i1>";;
    }
    
    if (m_has_i2)
    {
        _outStream << "<custom_properties:i2>" << m_i2 << "</custom_properties:i2>";;
    }
    
    if (m_has_i4)
    {
        _outStream << "<custom_properties:i4>" << m_i4 << "</custom_properties:i4>";;
    }
    
    if (m_has_i8)
    {
        _outStream << "<custom_properties:i8>" << m_i8 << "</custom_properties:i8>";;
    }
    
    if (m_has_int)
    {
        _outStream << "<custom_properties:int>" << m_int << "</custom_properties:int>";;
    }
    
    if (m_has_ui1)
    {
        _outStream << "<custom_properties:ui1>" << m_ui1 << "</custom_properties:ui1>";;
    }
    
    if (m_has_ui2)
    {
        _outStream << "<custom_properties:ui2>" << m_ui2 << "</custom_properties:ui2>";;
    }
    
    if (m_has_ui4)
    {
        _outStream << "<custom_properties:ui4>" << m_ui4 << "</custom_properties:ui4>";;
    }
    
    if (m_has_ui8)
    {
        _outStream << "<custom_properties:ui8>" << m_ui8 << "</custom_properties:ui8>";;
    }
    
    if (m_has_uint)
    {
        _outStream << "<custom_properties:uint>" << m_uint << "</custom_properties:uint>";;
    }
    
    if (m_has_r4)
    {
        _outStream << "<custom_properties:r4>" << m_r4 << "</custom_properties:r4>";;
    }
    
    if (m_has_r8)
    {
        _outStream << "<custom_properties:r8>" << m_r8 << "</custom_properties:r8>";;
    }
    
    if (m_has_decimal)
    {
        _outStream << "<custom_properties:decimal>" << m_decimal << "</custom_properties:decimal>";;
    }
    
    if (m_has_lpstr)
    {
        _outStream << "<custom_properties:lpstr>" << m_lpstr << "</custom_properties:lpstr>";;
    }
    
    if (m_has_lpwstr)
    {
        _outStream << "<custom_properties:lpwstr>" << m_lpwstr << "</custom_properties:lpwstr>";;
    }
    
    if (m_has_bstr)
    {
        _outStream << "<custom_properties:bstr>" << m_bstr << "</custom_properties:bstr>";;
    }
    
    if (m_has_date)
    {
        _outStream << "<custom_properties:date>" << m_date << "</custom_properties:date>";;
    }
    
    if (m_has_filetime)
    {
        _outStream << "<custom_properties:filetime>" << m_filetime << "</custom_properties:filetime>";;
    }
    
    if (m_has_bool)
    {
        _outStream << "<custom_properties:bool>" << m_bool << "</custom_properties:bool>";;
    }
    
    if (m_has_vt_cy)
    {
        _outStream << "<custom_properties:cy>" << m_vt_cy->toString() << "</custom_properties:cy>";;
    }
    
    if (m_has_vt_error)
    {
        _outStream << "<custom_properties:error>" << m_vt_error->toString() << "</custom_properties:error>";;
    }
    
    if (m_has_stream)
    {
        _outStream << "<custom_properties:stream>" << m_stream << "</custom_properties:stream>";;
    }
    
    if (m_has_ostream)
    {
        _outStream << "<custom_properties:ostream>" << m_ostream << "</custom_properties:ostream>";;
    }
    
    if (m_has_storage)
    {
        _outStream << "<custom_properties:storage>" << m_storage << "</custom_properties:storage>";;
    }
    
    if (m_has_ostorage)
    {
        _outStream << "<custom_properties:ostorage>" << m_ostorage << "</custom_properties:ostorage>";;
    }
    
    if (m_has_vt_vstream)
    {
        m_vt_vstream->toXmlElem("custom_properties:vstream", "", _outStream);;
    }
    
    if (m_has_s_clsid)
    {
        _outStream << "<custom_properties:clsid>" << m_s_clsid->toString() << "</custom_properties:clsid>";;
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

    bool CT_Property::has_s_fmtid_attr() const
    {    
    return m_has_s_fmtid_attr;
    }

    void CT_Property::set_s_fmtid_attr(const ns_s::ST_Guid& _s_fmtid_attr)
    {    
    m_has_s_fmtid_attr = true;
    m_s_fmtid_attr = new ns_s::ST_Guid(_s_fmtid_attr);
    }

    const ns_s::ST_Guid& CT_Property::get_s_fmtid_attr() const
    {    
    if (m_s_fmtid_attr)
    {
        return *m_s_fmtid_attr;
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


    // Properties_element
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
    _outStream << "<custom_properties:Properties";
    
    _outStream << " " << "xmlns:custom_properties=\"http://schemas.openxmlformats.org/officeDocument/2006/custom-properties\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_property())
            {
                (*iter)->get_property().toXmlElem("custom_properties:property", "", _outStream);
            }
        }
    }
    
    _outStream << "</custom_properties:Properties>";
    }

    const Properties_element& Properties_element::default_instance()
    {    
    if (!Properties_element::default_instance_)
    {
        Properties_element::default_instance_ = new Properties_element();
    }
    return *Properties_element::default_instance_;
    }

}