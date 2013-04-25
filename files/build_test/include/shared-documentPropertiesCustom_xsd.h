namespace ns_custom_properties {
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
namespace ns_custom_properties {
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
        CT_Property* add_property();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Properties& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
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
        bool has_vt_vector() const;
        ns_vt::CT_Vector* mutable_vt_vector();
        const ns_vt::CT_Vector& get_vt_vector() const;
        bool has_vt_array() const;
        ns_vt::CT_Array* mutable_vt_array();
        const ns_vt::CT_Array& get_vt_array() const;
        bool has_blob() const;
        void set_blob(const XSD::base64Binary_& _blob);
        const XSD::base64Binary_& get_blob() const;
        bool has_oblob() const;
        void set_oblob(const XSD::base64Binary_& _oblob);
        const XSD::base64Binary_& get_oblob() const;
        bool has_vt_empty() const;
        ns_vt::CT_Empty* mutable_vt_empty();
        const ns_vt::CT_Empty& get_vt_empty() const;
        bool has_vt_null() const;
        ns_vt::CT_Null* mutable_vt_null();
        const ns_vt::CT_Null& get_vt_null() const;
        bool has_i1() const;
        void set_i1(const XSD::byte_& _i1);
        const XSD::byte_& get_i1() const;
        bool has_i2() const;
        void set_i2(const XSD::short_& _i2);
        const XSD::short_& get_i2() const;
        bool has_i4() const;
        void set_i4(const XSD::int_& _i4);
        const XSD::int_& get_i4() const;
        bool has_i8() const;
        void set_i8(const XSD::long_& _i8);
        const XSD::long_& get_i8() const;
        bool has_int() const;
        void set_int(const XSD::int_& _int);
        const XSD::int_& get_int() const;
        bool has_ui1() const;
        void set_ui1(const XSD::unsignedByte_& _ui1);
        const XSD::unsignedByte_& get_ui1() const;
        bool has_ui2() const;
        void set_ui2(const XSD::unsignedShort_& _ui2);
        const XSD::unsignedShort_& get_ui2() const;
        bool has_ui4() const;
        void set_ui4(const XSD::unsignedInt_& _ui4);
        const XSD::unsignedInt_& get_ui4() const;
        bool has_ui8() const;
        void set_ui8(const XSD::unsignedLong_& _ui8);
        const XSD::unsignedLong_& get_ui8() const;
        bool has_uint() const;
        void set_uint(const XSD::unsignedInt_& _uint);
        const XSD::unsignedInt_& get_uint() const;
        bool has_r4() const;
        void set_r4(const XSD::float_& _r4);
        const XSD::float_& get_r4() const;
        bool has_r8() const;
        void set_r8(const XSD::double_& _r8);
        const XSD::double_& get_r8() const;
        bool has_decimal() const;
        void set_decimal(const XSD::decimal_& _decimal);
        const XSD::decimal_& get_decimal() const;
        bool has_lpstr() const;
        void set_lpstr(const XSD::string_& _lpstr);
        const XSD::string_& get_lpstr() const;
        bool has_lpwstr() const;
        void set_lpwstr(const XSD::string_& _lpwstr);
        const XSD::string_& get_lpwstr() const;
        bool has_bstr() const;
        void set_bstr(const XSD::string_& _bstr);
        const XSD::string_& get_bstr() const;
        bool has_date() const;
        void set_date(const XSD::dateTime_& _date);
        const XSD::dateTime_& get_date() const;
        bool has_filetime() const;
        void set_filetime(const XSD::dateTime_& _filetime);
        const XSD::dateTime_& get_filetime() const;
        bool has_bool() const;
        void set_bool(const XSD::boolean_& _bool);
        const XSD::boolean_& get_bool() const;
        bool has_vt_cy() const;
        ns_vt::ST_Cy* mutable_vt_cy();
        const ns_vt::ST_Cy& get_vt_cy() const;
        bool has_vt_error() const;
        ns_vt::ST_Error* mutable_vt_error();
        const ns_vt::ST_Error& get_vt_error() const;
        bool has_stream() const;
        void set_stream(const XSD::base64Binary_& _stream);
        const XSD::base64Binary_& get_stream() const;
        bool has_ostream() const;
        void set_ostream(const XSD::base64Binary_& _ostream);
        const XSD::base64Binary_& get_ostream() const;
        bool has_storage() const;
        void set_storage(const XSD::base64Binary_& _storage);
        const XSD::base64Binary_& get_storage() const;
        bool has_ostorage() const;
        void set_ostorage(const XSD::base64Binary_& _ostorage);
        const XSD::base64Binary_& get_ostorage() const;
        bool has_vt_vstream() const;
        ns_vt::CT_Vstream* mutable_vt_vstream();
        const ns_vt::CT_Vstream& get_vt_vstream() const;
        bool has_s_clsid() const;
        ns_s::ST_Guid* mutable_s_clsid();
        const ns_s::ST_Guid& get_s_clsid() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Property& default_instance();
        bool has_s_fmtid_attr() const;
        void set_s_fmtid_attr(const ns_s::ST_Guid& _s_fmtid_attr);
        const ns_s::ST_Guid& get_s_fmtid_attr() const;
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
        bool m_has_blob;
        XSD::base64Binary_ m_blob;
        bool m_has_oblob;
        XSD::base64Binary_ m_oblob;
        bool m_has_vt_empty;
        ns_vt::CT_Empty* m_vt_empty;
        bool m_has_vt_null;
        ns_vt::CT_Null* m_vt_null;
        bool m_has_i1;
        XSD::byte_ m_i1;
        bool m_has_i2;
        XSD::short_ m_i2;
        bool m_has_i4;
        XSD::int_ m_i4;
        bool m_has_i8;
        XSD::long_ m_i8;
        bool m_has_int;
        XSD::int_ m_int;
        bool m_has_ui1;
        XSD::unsignedByte_ m_ui1;
        bool m_has_ui2;
        XSD::unsignedShort_ m_ui2;
        bool m_has_ui4;
        XSD::unsignedInt_ m_ui4;
        bool m_has_ui8;
        XSD::unsignedLong_ m_ui8;
        bool m_has_uint;
        XSD::unsignedInt_ m_uint;
        bool m_has_r4;
        XSD::float_ m_r4;
        bool m_has_r8;
        XSD::double_ m_r8;
        bool m_has_decimal;
        XSD::decimal_ m_decimal;
        bool m_has_lpstr;
        XSD::string_ m_lpstr;
        bool m_has_lpwstr;
        XSD::string_ m_lpwstr;
        bool m_has_bstr;
        XSD::string_ m_bstr;
        bool m_has_date;
        XSD::dateTime_ m_date;
        bool m_has_filetime;
        XSD::dateTime_ m_filetime;
        bool m_has_bool;
        XSD::boolean_ m_bool;
        bool m_has_vt_cy;
        ns_vt::ST_Cy* m_vt_cy;
        bool m_has_vt_error;
        ns_vt::ST_Error* m_vt_error;
        bool m_has_stream;
        XSD::base64Binary_ m_stream;
        bool m_has_ostream;
        XSD::base64Binary_ m_ostream;
        bool m_has_storage;
        XSD::base64Binary_ m_storage;
        bool m_has_ostorage;
        XSD::base64Binary_ m_ostorage;
        bool m_has_vt_vstream;
        ns_vt::CT_Vstream* m_vt_vstream;
        bool m_has_s_clsid;
        ns_s::ST_Guid* m_s_clsid;
        static CT_Property* default_instance_;
        bool m_has_s_fmtid_attr;
        ns_s::ST_Guid* m_s_fmtid_attr;
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
        CT_Property* add_property();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const Properties_element& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
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