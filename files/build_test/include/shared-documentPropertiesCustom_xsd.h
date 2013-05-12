namespace ns_cp {
class Element;
class Attribute;
class CT_Properties;
class CT_Property;
class Properties_element;
}
#ifndef __shared_documentPropertiesCustom_xsd_
#define __shared_documentPropertiesCustom_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-documentPropertiesVariantTypes_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_cp {
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

class CT_Properties: public XSD::ComplexType
{
public:
    CT_Properties();
    ~CT_Properties();
    CT_Property* add_property();
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Properties& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_property() const;
        CT_Property* mutable_property();
        const CT_Property& get_property() const;
    protected:
    private:
        bool m_has_property;
        CT_Property* m_property;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static CT_Properties* default_instance_;
};

class CT_Property: public XSD::ComplexType
{
public:
    CT_Property();
    ~CT_Property();
    bool has_vt_vector() const;
    ns_vt::CT_Vector* mutable_vt_vector();
    const ns_vt::CT_Vector& get_vt_vector() const;
    bool has_vt_array() const;
    ns_vt::CT_Array* mutable_vt_array();
    const ns_vt::CT_Array& get_vt_array() const;
    bool has_vt_blob() const;
    void set_vt_blob(const XSD::base64Binary_& _vt_blob);
    const XSD::base64Binary_& get_vt_blob() const;
    bool has_vt_oblob() const;
    void set_vt_oblob(const XSD::base64Binary_& _vt_oblob);
    const XSD::base64Binary_& get_vt_oblob() const;
    bool has_vt_empty() const;
    ns_vt::CT_Empty* mutable_vt_empty();
    const ns_vt::CT_Empty& get_vt_empty() const;
    bool has_vt_null() const;
    ns_vt::CT_Null* mutable_vt_null();
    const ns_vt::CT_Null& get_vt_null() const;
    bool has_vt_i1() const;
    void set_vt_i1(const XSD::byte_& _vt_i1);
    const XSD::byte_& get_vt_i1() const;
    bool has_vt_i2() const;
    void set_vt_i2(const XSD::short_& _vt_i2);
    const XSD::short_& get_vt_i2() const;
    bool has_vt_i4() const;
    void set_vt_i4(const XSD::int_& _vt_i4);
    const XSD::int_& get_vt_i4() const;
    bool has_vt_i8() const;
    void set_vt_i8(const XSD::long_& _vt_i8);
    const XSD::long_& get_vt_i8() const;
    bool has_vt_int() const;
    void set_vt_int(const XSD::int_& _vt_int);
    const XSD::int_& get_vt_int() const;
    bool has_vt_ui1() const;
    void set_vt_ui1(const XSD::unsignedByte_& _vt_ui1);
    const XSD::unsignedByte_& get_vt_ui1() const;
    bool has_vt_ui2() const;
    void set_vt_ui2(const XSD::unsignedShort_& _vt_ui2);
    const XSD::unsignedShort_& get_vt_ui2() const;
    bool has_vt_ui4() const;
    void set_vt_ui4(const XSD::unsignedInt_& _vt_ui4);
    const XSD::unsignedInt_& get_vt_ui4() const;
    bool has_vt_ui8() const;
    void set_vt_ui8(const XSD::unsignedLong_& _vt_ui8);
    const XSD::unsignedLong_& get_vt_ui8() const;
    bool has_vt_uint() const;
    void set_vt_uint(const XSD::unsignedInt_& _vt_uint);
    const XSD::unsignedInt_& get_vt_uint() const;
    bool has_vt_r4() const;
    void set_vt_r4(const XSD::float_& _vt_r4);
    const XSD::float_& get_vt_r4() const;
    bool has_vt_r8() const;
    void set_vt_r8(const XSD::double_& _vt_r8);
    const XSD::double_& get_vt_r8() const;
    bool has_vt_decimal() const;
    void set_vt_decimal(const XSD::decimal_& _vt_decimal);
    const XSD::decimal_& get_vt_decimal() const;
    bool has_vt_lpstr() const;
    void set_vt_lpstr(const XSD::string_& _vt_lpstr);
    const XSD::string_& get_vt_lpstr() const;
    bool has_vt_lpwstr() const;
    void set_vt_lpwstr(const XSD::string_& _vt_lpwstr);
    const XSD::string_& get_vt_lpwstr() const;
    bool has_vt_bstr() const;
    void set_vt_bstr(const XSD::string_& _vt_bstr);
    const XSD::string_& get_vt_bstr() const;
    bool has_vt_date() const;
    void set_vt_date(const XSD::dateTime_& _vt_date);
    const XSD::dateTime_& get_vt_date() const;
    bool has_vt_filetime() const;
    void set_vt_filetime(const XSD::dateTime_& _vt_filetime);
    const XSD::dateTime_& get_vt_filetime() const;
    bool has_vt_bool() const;
    void set_vt_bool(const XSD::boolean_& _vt_bool);
    const XSD::boolean_& get_vt_bool() const;
    bool has_vt_cy() const;
    ns_vt::ST_Cy* mutable_vt_cy();
    const ns_vt::ST_Cy& get_vt_cy() const;
    bool has_vt_error() const;
    ns_vt::ST_Error* mutable_vt_error();
    const ns_vt::ST_Error& get_vt_error() const;
    bool has_vt_stream() const;
    void set_vt_stream(const XSD::base64Binary_& _vt_stream);
    const XSD::base64Binary_& get_vt_stream() const;
    bool has_vt_ostream() const;
    void set_vt_ostream(const XSD::base64Binary_& _vt_ostream);
    const XSD::base64Binary_& get_vt_ostream() const;
    bool has_vt_storage() const;
    void set_vt_storage(const XSD::base64Binary_& _vt_storage);
    const XSD::base64Binary_& get_vt_storage() const;
    bool has_vt_ostorage() const;
    void set_vt_ostorage(const XSD::base64Binary_& _vt_ostorage);
    const XSD::base64Binary_& get_vt_ostorage() const;
    bool has_vt_vstream() const;
    ns_vt::CT_Vstream* mutable_vt_vstream();
    const ns_vt::CT_Vstream& get_vt_vstream() const;
    bool has_vt_clsid() const;
    ns_s::ST_Guid* mutable_vt_clsid();
    const ns_s::ST_Guid& get_vt_clsid() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Property& default_instance();
    bool has_fmtid_attr() const;
    void set_fmtid_attr(const ns_s::ST_Guid& _fmtid_attr);
    const ns_s::ST_Guid& get_fmtid_attr() const;
    bool has_pid_attr() const;
    void set_pid_attr(const XSD::int_& _pid_attr);
    const XSD::int_& get_pid_attr() const;
    bool has_name_attr() const;
    void set_name_attr(const XSD::string_& _name_attr);
    const XSD::string_& get_name_attr() const;
    bool has_linkTarget_attr() const;
    void set_linkTarget_attr(const XSD::string_& _linkTarget_attr);
    const XSD::string_& get_linkTarget_attr() const;
protected:
private:
    bool m_has_vt_vector;
    ns_vt::CT_Vector* m_vt_vector;
    bool m_has_vt_array;
    ns_vt::CT_Array* m_vt_array;
    bool m_has_vt_blob;
    XSD::base64Binary_ m_vt_blob;
    bool m_has_vt_oblob;
    XSD::base64Binary_ m_vt_oblob;
    bool m_has_vt_empty;
    ns_vt::CT_Empty* m_vt_empty;
    bool m_has_vt_null;
    ns_vt::CT_Null* m_vt_null;
    bool m_has_vt_i1;
    XSD::byte_ m_vt_i1;
    bool m_has_vt_i2;
    XSD::short_ m_vt_i2;
    bool m_has_vt_i4;
    XSD::int_ m_vt_i4;
    bool m_has_vt_i8;
    XSD::long_ m_vt_i8;
    bool m_has_vt_int;
    XSD::int_ m_vt_int;
    bool m_has_vt_ui1;
    XSD::unsignedByte_ m_vt_ui1;
    bool m_has_vt_ui2;
    XSD::unsignedShort_ m_vt_ui2;
    bool m_has_vt_ui4;
    XSD::unsignedInt_ m_vt_ui4;
    bool m_has_vt_ui8;
    XSD::unsignedLong_ m_vt_ui8;
    bool m_has_vt_uint;
    XSD::unsignedInt_ m_vt_uint;
    bool m_has_vt_r4;
    XSD::float_ m_vt_r4;
    bool m_has_vt_r8;
    XSD::double_ m_vt_r8;
    bool m_has_vt_decimal;
    XSD::decimal_ m_vt_decimal;
    bool m_has_vt_lpstr;
    XSD::string_ m_vt_lpstr;
    bool m_has_vt_lpwstr;
    XSD::string_ m_vt_lpwstr;
    bool m_has_vt_bstr;
    XSD::string_ m_vt_bstr;
    bool m_has_vt_date;
    XSD::dateTime_ m_vt_date;
    bool m_has_vt_filetime;
    XSD::dateTime_ m_vt_filetime;
    bool m_has_vt_bool;
    XSD::boolean_ m_vt_bool;
    bool m_has_vt_cy;
    ns_vt::ST_Cy* m_vt_cy;
    bool m_has_vt_error;
    ns_vt::ST_Error* m_vt_error;
    bool m_has_vt_stream;
    XSD::base64Binary_ m_vt_stream;
    bool m_has_vt_ostream;
    XSD::base64Binary_ m_vt_ostream;
    bool m_has_vt_storage;
    XSD::base64Binary_ m_vt_storage;
    bool m_has_vt_ostorage;
    XSD::base64Binary_ m_vt_ostorage;
    bool m_has_vt_vstream;
    ns_vt::CT_Vstream* m_vt_vstream;
    bool m_has_vt_clsid;
    ns_s::ST_Guid* m_vt_clsid;
    static CT_Property* default_instance_;
    bool m_has_fmtid_attr;
    ns_s::ST_Guid* m_fmtid_attr;
    bool m_has_pid_attr;
    XSD::int_ m_pid_attr;
    bool m_has_name_attr;
    XSD::string_ m_name_attr;
    bool m_has_linkTarget_attr;
    XSD::string_ m_linkTarget_attr;
};

class Properties_element: public Element
{
public:
    Properties_element();
    ~Properties_element();
    CT_Property* add_property();
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const Properties_element& default_instance();
protected:
private:
    class ChildGroup_1
    {
    public:
        ChildGroup_1();
        bool has_property() const;
        CT_Property* mutable_property();
        const CT_Property& get_property() const;
    protected:
    private:
        bool m_has_property;
        CT_Property* m_property;
    };
    vector<ChildGroup_1*> m_childGroupList_1;
    static Properties_element* default_instance_;
};

}
#endif