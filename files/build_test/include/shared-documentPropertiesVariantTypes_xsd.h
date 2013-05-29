namespace ns_vt {
    class Element;
    class Attribute;
    class ST_VectorBaseType;
    class ST_ArrayBaseType;
    class ST_Cy;
    class ST_Error;
    class CT_Empty;
    class CT_Null;
    class CT_Vector;
    class CT_Array;
    class CT_Variant;
    class CT_Vstream;
    class variant_element;
    class vector_element;
    class array_element;
    class blob_element;
    class oblob_element;
    class empty_element;
    class null_element;
    class i1_element;
    class i2_element;
    class i4_element;
    class i8_element;
    class int_element;
    class ui1_element;
    class ui2_element;
    class ui4_element;
    class ui8_element;
    class uint_element;
    class r4_element;
    class r8_element;
    class decimal_element;
    class lpstr_element;
    class lpwstr_element;
    class bstr_element;
    class date_element;
    class filetime_element;
    class bool_element;
    class cy_element;
    class error_element;
    class stream_element;
    class ostream_element;
    class storage_element;
    class ostorage_element;
    class vstream_element;
    class clsid_element;
}
#ifndef __shared_documentPropertiesVariantTypes_xsd_
#define __shared_documentPropertiesVariantTypes_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_vt {
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

    class ST_VectorBaseType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _variant_ = 0,
            _i1_,
            _i2_,
            _i4_,
            _i8_,
            _ui1_,
            _ui2_,
            _ui4_,
            _ui8_,
            _r4_,
            _r8_,
            _lpstr_,
            _lpwstr_,
            _bstr_,
            _date_,
            _filetime_,
            _bool_,
            _cy_,
            _error_,
            _clsid_
        };
        ST_VectorBaseType();
        ST_VectorBaseType(const ST_VectorBaseType::Type& _type);
        ~ST_VectorBaseType();
        bool has_type() const;
        void set_type(const ST_VectorBaseType::Type& _type);
        const ST_VectorBaseType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_VectorBaseType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_VectorBaseType* default_instance_;
        bool m_has_type;
        ST_VectorBaseType::Type m_type;
    };

    class ST_ArrayBaseType: public XSD::SimpleType
    {
    public:
        enum  Type 
        {
            _variant_ = 0,
            _i1_,
            _i2_,
            _i4_,
            _int_,
            _ui1_,
            _ui2_,
            _ui4_,
            _uint_,
            _r4_,
            _r8_,
            _decimal_,
            _bstr_,
            _date_,
            _bool_,
            _cy_,
            _error_
        };
        ST_ArrayBaseType();
        ST_ArrayBaseType(const ST_ArrayBaseType::Type& _type);
        ~ST_ArrayBaseType();
        bool has_type() const;
        void set_type(const ST_ArrayBaseType::Type& _type);
        const ST_ArrayBaseType::Type& get_type() const;
        std::string toString() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_ArrayBaseType& default_instance();
    protected:
    private:
        static const std::string TypeStrList[];
        static ST_ArrayBaseType* default_instance_;
        bool m_has_type;
        ST_ArrayBaseType::Type m_type;
    };

    class ST_Cy: public XSD::SimpleType
    {
    public:
        ST_Cy();
        ST_Cy(const XSD::string_& _string);
        ~ST_Cy();
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Cy& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Cy* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class ST_Error: public XSD::SimpleType
    {
    public:
        ST_Error();
        ST_Error(const XSD::string_& _string);
        ~ST_Error();
        bool has_string() const;
        void set_string(const XSD::string_& _string);
        const XSD::string_& get_string() const;
        void clear();
        void toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const;
        static const ST_Error& default_instance();
        std::string toString() const;
    protected:
    private:
        static ST_Error* default_instance_;
        bool m_has_string;
        XSD::string_ m_string;
    };

    class CT_Empty: public XSD::ComplexType
    {
    public:
        CT_Empty();
        ~CT_Empty();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Empty& default_instance();
    protected:
    private:
        static CT_Empty* default_instance_;
    };

    class CT_Null: public XSD::ComplexType
    {
    public:
        CT_Null();
        ~CT_Null();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Null& default_instance();
    protected:
    private:
        static CT_Null* default_instance_;
    };

    class CT_Vector: public XSD::ComplexType
    {
    public:
        CT_Vector();
        ~CT_Vector();
        CT_Variant* add_variant();
        void add_i1(const XSD::byte_& _i1);
        void add_i2(const XSD::short_& _i2);
        void add_i4(const XSD::int_& _i4);
        void add_i8(const XSD::long_& _i8);
        void add_ui1(const XSD::unsignedByte_& _ui1);
        void add_ui2(const XSD::unsignedShort_& _ui2);
        void add_ui4(const XSD::unsignedInt_& _ui4);
        void add_ui8(const XSD::unsignedLong_& _ui8);
        void add_r4(const XSD::float_& _r4);
        void add_r8(const XSD::double_& _r8);
        void add_lpstr(const XSD::string_& _lpstr);
        void add_lpwstr(const XSD::string_& _lpwstr);
        void add_bstr(const XSD::string_& _bstr);
        void add_date(const XSD::dateTime_& _date);
        void add_filetime(const XSD::dateTime_& _filetime);
        void add_bool(const XSD::boolean_& _bool);
        ST_Cy* add_cy();
        ST_Error* add_error();
        ns_s::ST_Guid* add_clsid();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Vector& default_instance();
        bool has_baseType_attr() const;
        void set_baseType_attr(const ST_VectorBaseType& _baseType_attr);
        const ST_VectorBaseType& get_baseType_attr() const;
        bool has_size_attr() const;
        void set_size_attr(const XSD::unsignedInt_& _size_attr);
        const XSD::unsignedInt_& get_size_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_variant() const;
            CT_Variant* mutable_variant();
            const CT_Variant& get_variant() const;
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
            bool has_r4() const;
            void set_r4(const XSD::float_& _r4);
            const XSD::float_& get_r4() const;
            bool has_r8() const;
            void set_r8(const XSD::double_& _r8);
            const XSD::double_& get_r8() const;
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
            bool has_cy() const;
            ST_Cy* mutable_cy();
            const ST_Cy& get_cy() const;
            bool has_error() const;
            ST_Error* mutable_error();
            const ST_Error& get_error() const;
            bool has_clsid() const;
            ns_s::ST_Guid* mutable_clsid();
            const ns_s::ST_Guid& get_clsid() const;
        protected:
        private:
            bool m_has_variant;
            CT_Variant* m_variant;
            bool m_has_i1;
            XSD::byte_ m_i1;
            bool m_has_i2;
            XSD::short_ m_i2;
            bool m_has_i4;
            XSD::int_ m_i4;
            bool m_has_i8;
            XSD::long_ m_i8;
            bool m_has_ui1;
            XSD::unsignedByte_ m_ui1;
            bool m_has_ui2;
            XSD::unsignedShort_ m_ui2;
            bool m_has_ui4;
            XSD::unsignedInt_ m_ui4;
            bool m_has_ui8;
            XSD::unsignedLong_ m_ui8;
            bool m_has_r4;
            XSD::float_ m_r4;
            bool m_has_r8;
            XSD::double_ m_r8;
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
            bool m_has_cy;
            ST_Cy* m_cy;
            bool m_has_error;
            ST_Error* m_error;
            bool m_has_clsid;
            ns_s::ST_Guid* m_clsid;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_Vector* default_instance_;
        bool m_has_baseType_attr;
        ST_VectorBaseType* m_baseType_attr;
        bool m_has_size_attr;
        XSD::unsignedInt_ m_size_attr;
    };

    class CT_Array: public XSD::ComplexType
    {
    public:
        CT_Array();
        ~CT_Array();
        CT_Variant* add_variant();
        void add_i1(const XSD::byte_& _i1);
        void add_i2(const XSD::short_& _i2);
        void add_i4(const XSD::int_& _i4);
        void add_int(const XSD::int_& _int);
        void add_ui1(const XSD::unsignedByte_& _ui1);
        void add_ui2(const XSD::unsignedShort_& _ui2);
        void add_ui4(const XSD::unsignedInt_& _ui4);
        void add_uint(const XSD::unsignedInt_& _uint);
        void add_r4(const XSD::float_& _r4);
        void add_r8(const XSD::double_& _r8);
        void add_decimal(const XSD::decimal_& _decimal);
        void add_bstr(const XSD::string_& _bstr);
        void add_date(const XSD::dateTime_& _date);
        void add_bool(const XSD::boolean_& _bool);
        ST_Error* add_error();
        ST_Cy* add_cy();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Array& default_instance();
        bool has_lBounds_attr() const;
        void set_lBounds_attr(const XSD::int_& _lBounds_attr);
        const XSD::int_& get_lBounds_attr() const;
        bool has_uBounds_attr() const;
        void set_uBounds_attr(const XSD::int_& _uBounds_attr);
        const XSD::int_& get_uBounds_attr() const;
        bool has_baseType_attr() const;
        void set_baseType_attr(const ST_ArrayBaseType& _baseType_attr);
        const ST_ArrayBaseType& get_baseType_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_variant() const;
            CT_Variant* mutable_variant();
            const CT_Variant& get_variant() const;
            bool has_i1() const;
            void set_i1(const XSD::byte_& _i1);
            const XSD::byte_& get_i1() const;
            bool has_i2() const;
            void set_i2(const XSD::short_& _i2);
            const XSD::short_& get_i2() const;
            bool has_i4() const;
            void set_i4(const XSD::int_& _i4);
            const XSD::int_& get_i4() const;
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
            bool has_bstr() const;
            void set_bstr(const XSD::string_& _bstr);
            const XSD::string_& get_bstr() const;
            bool has_date() const;
            void set_date(const XSD::dateTime_& _date);
            const XSD::dateTime_& get_date() const;
            bool has_bool() const;
            void set_bool(const XSD::boolean_& _bool);
            const XSD::boolean_& get_bool() const;
            bool has_error() const;
            ST_Error* mutable_error();
            const ST_Error& get_error() const;
            bool has_cy() const;
            ST_Cy* mutable_cy();
            const ST_Cy& get_cy() const;
        protected:
        private:
            bool m_has_variant;
            CT_Variant* m_variant;
            bool m_has_i1;
            XSD::byte_ m_i1;
            bool m_has_i2;
            XSD::short_ m_i2;
            bool m_has_i4;
            XSD::int_ m_i4;
            bool m_has_int;
            XSD::int_ m_int;
            bool m_has_ui1;
            XSD::unsignedByte_ m_ui1;
            bool m_has_ui2;
            XSD::unsignedShort_ m_ui2;
            bool m_has_ui4;
            XSD::unsignedInt_ m_ui4;
            bool m_has_uint;
            XSD::unsignedInt_ m_uint;
            bool m_has_r4;
            XSD::float_ m_r4;
            bool m_has_r8;
            XSD::double_ m_r8;
            bool m_has_decimal;
            XSD::decimal_ m_decimal;
            bool m_has_bstr;
            XSD::string_ m_bstr;
            bool m_has_date;
            XSD::dateTime_ m_date;
            bool m_has_bool;
            XSD::boolean_ m_bool;
            bool m_has_error;
            ST_Error* m_error;
            bool m_has_cy;
            ST_Cy* m_cy;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_Array* default_instance_;
        bool m_has_lBounds_attr;
        XSD::int_ m_lBounds_attr;
        bool m_has_uBounds_attr;
        XSD::int_ m_uBounds_attr;
        bool m_has_baseType_attr;
        ST_ArrayBaseType* m_baseType_attr;
    };

    class CT_Variant: public XSD::ComplexType
    {
    public:
        CT_Variant();
        ~CT_Variant();
        bool has_variant() const;
        CT_Variant* mutable_variant();
        const CT_Variant& get_variant() const;
        bool has_vector() const;
        CT_Vector* mutable_vector();
        const CT_Vector& get_vector() const;
        bool has_array() const;
        CT_Array* mutable_array();
        const CT_Array& get_array() const;
        bool has_blob() const;
        void set_blob(const XSD::base64Binary_& _blob);
        const XSD::base64Binary_& get_blob() const;
        bool has_oblob() const;
        void set_oblob(const XSD::base64Binary_& _oblob);
        const XSD::base64Binary_& get_oblob() const;
        bool has_empty() const;
        CT_Empty* mutable_empty();
        const CT_Empty& get_empty() const;
        bool has_null() const;
        CT_Null* mutable_null();
        const CT_Null& get_null() const;
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
        bool has_cy() const;
        ST_Cy* mutable_cy();
        const ST_Cy& get_cy() const;
        bool has_error() const;
        ST_Error* mutable_error();
        const ST_Error& get_error() const;
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
        bool has_vstream() const;
        CT_Vstream* mutable_vstream();
        const CT_Vstream& get_vstream() const;
        bool has_clsid() const;
        ns_s::ST_Guid* mutable_clsid();
        const ns_s::ST_Guid& get_clsid() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Variant& default_instance();
    protected:
    private:
        bool m_has_variant;
        CT_Variant* m_variant;
        bool m_has_vector;
        CT_Vector* m_vector;
        bool m_has_array;
        CT_Array* m_array;
        bool m_has_blob;
        XSD::base64Binary_ m_blob;
        bool m_has_oblob;
        XSD::base64Binary_ m_oblob;
        bool m_has_empty;
        CT_Empty* m_empty;
        bool m_has_null;
        CT_Null* m_null;
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
        bool m_has_cy;
        ST_Cy* m_cy;
        bool m_has_error;
        ST_Error* m_error;
        bool m_has_stream;
        XSD::base64Binary_ m_stream;
        bool m_has_ostream;
        XSD::base64Binary_ m_ostream;
        bool m_has_storage;
        XSD::base64Binary_ m_storage;
        bool m_has_ostorage;
        XSD::base64Binary_ m_ostorage;
        bool m_has_vstream;
        CT_Vstream* m_vstream;
        bool m_has_clsid;
        ns_s::ST_Guid* m_clsid;
        static CT_Variant* default_instance_;
    };

    class CT_Vstream: public XSD::ComplexType
    {
    public:
        CT_Vstream();
        ~CT_Vstream();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Vstream& default_instance();
        bool has_version_attr() const;
        void set_version_attr(const ns_s::ST_Guid& _version_attr);
        const ns_s::ST_Guid& get_version_attr() const;
        bool has_base64Binary() const;
        void set_base64Binary(const XSD::base64Binary_& _base64Binary);
        const XSD::base64Binary_& get_base64Binary() const;
        std::string toString() const;
    protected:
    private:
        static CT_Vstream* default_instance_;
        bool m_has_version_attr;
        ns_s::ST_Guid* m_version_attr;
        bool m_has_base64Binary;
        XSD::base64Binary_ m_base64Binary;
    };

    class variant_element: public Element
    {
    public:
        variant_element();
        ~variant_element();
        bool has_variant() const;
        CT_Variant* mutable_variant();
        const CT_Variant& get_variant() const;
        bool has_vector() const;
        CT_Vector* mutable_vector();
        const CT_Vector& get_vector() const;
        bool has_array() const;
        CT_Array* mutable_array();
        const CT_Array& get_array() const;
        bool has_blob() const;
        void set_blob(const XSD::base64Binary_& _blob);
        const XSD::base64Binary_& get_blob() const;
        bool has_oblob() const;
        void set_oblob(const XSD::base64Binary_& _oblob);
        const XSD::base64Binary_& get_oblob() const;
        bool has_empty() const;
        CT_Empty* mutable_empty();
        const CT_Empty& get_empty() const;
        bool has_null() const;
        CT_Null* mutable_null();
        const CT_Null& get_null() const;
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
        bool has_cy() const;
        ST_Cy* mutable_cy();
        const ST_Cy& get_cy() const;
        bool has_error() const;
        ST_Error* mutable_error();
        const ST_Error& get_error() const;
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
        bool has_vstream() const;
        CT_Vstream* mutable_vstream();
        const CT_Vstream& get_vstream() const;
        bool has_clsid() const;
        ns_s::ST_Guid* mutable_clsid();
        const ns_s::ST_Guid& get_clsid() const;
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const variant_element& default_instance();
    protected:
    private:
        bool m_has_variant;
        CT_Variant* m_variant;
        bool m_has_vector;
        CT_Vector* m_vector;
        bool m_has_array;
        CT_Array* m_array;
        bool m_has_blob;
        XSD::base64Binary_ m_blob;
        bool m_has_oblob;
        XSD::base64Binary_ m_oblob;
        bool m_has_empty;
        CT_Empty* m_empty;
        bool m_has_null;
        CT_Null* m_null;
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
        bool m_has_cy;
        ST_Cy* m_cy;
        bool m_has_error;
        ST_Error* m_error;
        bool m_has_stream;
        XSD::base64Binary_ m_stream;
        bool m_has_ostream;
        XSD::base64Binary_ m_ostream;
        bool m_has_storage;
        XSD::base64Binary_ m_storage;
        bool m_has_ostorage;
        XSD::base64Binary_ m_ostorage;
        bool m_has_vstream;
        CT_Vstream* m_vstream;
        bool m_has_clsid;
        ns_s::ST_Guid* m_clsid;
        static variant_element* default_instance_;
    };

    class vector_element: public Element
    {
    public:
        vector_element();
        ~vector_element();
        CT_Variant* add_variant();
        void add_i1(const XSD::byte_& _i1);
        void add_i2(const XSD::short_& _i2);
        void add_i4(const XSD::int_& _i4);
        void add_i8(const XSD::long_& _i8);
        void add_ui1(const XSD::unsignedByte_& _ui1);
        void add_ui2(const XSD::unsignedShort_& _ui2);
        void add_ui4(const XSD::unsignedInt_& _ui4);
        void add_ui8(const XSD::unsignedLong_& _ui8);
        void add_r4(const XSD::float_& _r4);
        void add_r8(const XSD::double_& _r8);
        void add_lpstr(const XSD::string_& _lpstr);
        void add_lpwstr(const XSD::string_& _lpwstr);
        void add_bstr(const XSD::string_& _bstr);
        void add_date(const XSD::dateTime_& _date);
        void add_filetime(const XSD::dateTime_& _filetime);
        void add_bool(const XSD::boolean_& _bool);
        ST_Cy* add_cy();
        ST_Error* add_error();
        ns_s::ST_Guid* add_clsid();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const vector_element& default_instance();
        bool has_baseType_attr() const;
        void set_baseType_attr(const ST_VectorBaseType& _baseType_attr);
        const ST_VectorBaseType& get_baseType_attr() const;
        bool has_size_attr() const;
        void set_size_attr(const XSD::unsignedInt_& _size_attr);
        const XSD::unsignedInt_& get_size_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_variant() const;
            CT_Variant* mutable_variant();
            const CT_Variant& get_variant() const;
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
            bool has_r4() const;
            void set_r4(const XSD::float_& _r4);
            const XSD::float_& get_r4() const;
            bool has_r8() const;
            void set_r8(const XSD::double_& _r8);
            const XSD::double_& get_r8() const;
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
            bool has_cy() const;
            ST_Cy* mutable_cy();
            const ST_Cy& get_cy() const;
            bool has_error() const;
            ST_Error* mutable_error();
            const ST_Error& get_error() const;
            bool has_clsid() const;
            ns_s::ST_Guid* mutable_clsid();
            const ns_s::ST_Guid& get_clsid() const;
        protected:
        private:
            bool m_has_variant;
            CT_Variant* m_variant;
            bool m_has_i1;
            XSD::byte_ m_i1;
            bool m_has_i2;
            XSD::short_ m_i2;
            bool m_has_i4;
            XSD::int_ m_i4;
            bool m_has_i8;
            XSD::long_ m_i8;
            bool m_has_ui1;
            XSD::unsignedByte_ m_ui1;
            bool m_has_ui2;
            XSD::unsignedShort_ m_ui2;
            bool m_has_ui4;
            XSD::unsignedInt_ m_ui4;
            bool m_has_ui8;
            XSD::unsignedLong_ m_ui8;
            bool m_has_r4;
            XSD::float_ m_r4;
            bool m_has_r8;
            XSD::double_ m_r8;
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
            bool m_has_cy;
            ST_Cy* m_cy;
            bool m_has_error;
            ST_Error* m_error;
            bool m_has_clsid;
            ns_s::ST_Guid* m_clsid;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static vector_element* default_instance_;
        bool m_has_baseType_attr;
        ST_VectorBaseType* m_baseType_attr;
        bool m_has_size_attr;
        XSD::unsignedInt_ m_size_attr;
    };

    class array_element: public Element
    {
    public:
        array_element();
        ~array_element();
        CT_Variant* add_variant();
        void add_i1(const XSD::byte_& _i1);
        void add_i2(const XSD::short_& _i2);
        void add_i4(const XSD::int_& _i4);
        void add_int(const XSD::int_& _int);
        void add_ui1(const XSD::unsignedByte_& _ui1);
        void add_ui2(const XSD::unsignedShort_& _ui2);
        void add_ui4(const XSD::unsignedInt_& _ui4);
        void add_uint(const XSD::unsignedInt_& _uint);
        void add_r4(const XSD::float_& _r4);
        void add_r8(const XSD::double_& _r8);
        void add_decimal(const XSD::decimal_& _decimal);
        void add_bstr(const XSD::string_& _bstr);
        void add_date(const XSD::dateTime_& _date);
        void add_bool(const XSD::boolean_& _bool);
        ST_Error* add_error();
        ST_Cy* add_cy();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const array_element& default_instance();
        bool has_lBounds_attr() const;
        void set_lBounds_attr(const XSD::int_& _lBounds_attr);
        const XSD::int_& get_lBounds_attr() const;
        bool has_uBounds_attr() const;
        void set_uBounds_attr(const XSD::int_& _uBounds_attr);
        const XSD::int_& get_uBounds_attr() const;
        bool has_baseType_attr() const;
        void set_baseType_attr(const ST_ArrayBaseType& _baseType_attr);
        const ST_ArrayBaseType& get_baseType_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_variant() const;
            CT_Variant* mutable_variant();
            const CT_Variant& get_variant() const;
            bool has_i1() const;
            void set_i1(const XSD::byte_& _i1);
            const XSD::byte_& get_i1() const;
            bool has_i2() const;
            void set_i2(const XSD::short_& _i2);
            const XSD::short_& get_i2() const;
            bool has_i4() const;
            void set_i4(const XSD::int_& _i4);
            const XSD::int_& get_i4() const;
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
            bool has_bstr() const;
            void set_bstr(const XSD::string_& _bstr);
            const XSD::string_& get_bstr() const;
            bool has_date() const;
            void set_date(const XSD::dateTime_& _date);
            const XSD::dateTime_& get_date() const;
            bool has_bool() const;
            void set_bool(const XSD::boolean_& _bool);
            const XSD::boolean_& get_bool() const;
            bool has_error() const;
            ST_Error* mutable_error();
            const ST_Error& get_error() const;
            bool has_cy() const;
            ST_Cy* mutable_cy();
            const ST_Cy& get_cy() const;
        protected:
        private:
            bool m_has_variant;
            CT_Variant* m_variant;
            bool m_has_i1;
            XSD::byte_ m_i1;
            bool m_has_i2;
            XSD::short_ m_i2;
            bool m_has_i4;
            XSD::int_ m_i4;
            bool m_has_int;
            XSD::int_ m_int;
            bool m_has_ui1;
            XSD::unsignedByte_ m_ui1;
            bool m_has_ui2;
            XSD::unsignedShort_ m_ui2;
            bool m_has_ui4;
            XSD::unsignedInt_ m_ui4;
            bool m_has_uint;
            XSD::unsignedInt_ m_uint;
            bool m_has_r4;
            XSD::float_ m_r4;
            bool m_has_r8;
            XSD::double_ m_r8;
            bool m_has_decimal;
            XSD::decimal_ m_decimal;
            bool m_has_bstr;
            XSD::string_ m_bstr;
            bool m_has_date;
            XSD::dateTime_ m_date;
            bool m_has_bool;
            XSD::boolean_ m_bool;
            bool m_has_error;
            ST_Error* m_error;
            bool m_has_cy;
            ST_Cy* m_cy;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static array_element* default_instance_;
        bool m_has_lBounds_attr;
        XSD::int_ m_lBounds_attr;
        bool m_has_uBounds_attr;
        XSD::int_ m_uBounds_attr;
        bool m_has_baseType_attr;
        ST_ArrayBaseType* m_baseType_attr;
    };

    class blob_element: public Element
    {
    public:
    protected:
    private:
    };

    class oblob_element: public Element
    {
    public:
    protected:
    private:
    };

    class empty_element: public Element
    {
    public:
        empty_element();
        ~empty_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const empty_element& default_instance();
    protected:
    private:
        static empty_element* default_instance_;
    };

    class null_element: public Element
    {
    public:
        null_element();
        ~null_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const null_element& default_instance();
    protected:
    private:
        static null_element* default_instance_;
    };

    class i1_element: public Element
    {
    public:
    protected:
    private:
    };

    class i2_element: public Element
    {
    public:
    protected:
    private:
    };

    class i4_element: public Element
    {
    public:
    protected:
    private:
    };

    class i8_element: public Element
    {
    public:
    protected:
    private:
    };

    class int_element: public Element
    {
    public:
    protected:
    private:
    };

    class ui1_element: public Element
    {
    public:
    protected:
    private:
    };

    class ui2_element: public Element
    {
    public:
    protected:
    private:
    };

    class ui4_element: public Element
    {
    public:
    protected:
    private:
    };

    class ui8_element: public Element
    {
    public:
    protected:
    private:
    };

    class uint_element: public Element
    {
    public:
    protected:
    private:
    };

    class r4_element: public Element
    {
    public:
    protected:
    private:
    };

    class r8_element: public Element
    {
    public:
    protected:
    private:
    };

    class decimal_element: public Element
    {
    public:
    protected:
    private:
    };

    class lpstr_element: public Element
    {
    public:
    protected:
    private:
    };

    class lpwstr_element: public Element
    {
    public:
    protected:
    private:
    };

    class bstr_element: public Element
    {
    public:
    protected:
    private:
    };

    class date_element: public Element
    {
    public:
    protected:
    private:
    };

    class filetime_element: public Element
    {
    public:
    protected:
    private:
    };

    class bool_element: public Element
    {
    public:
    protected:
    private:
    };

    class cy_element: public Element
    {
    public:
    protected:
    private:
    };

    class error_element: public Element
    {
    public:
    protected:
    private:
    };

    class stream_element: public Element
    {
    public:
    protected:
    private:
    };

    class ostream_element: public Element
    {
    public:
    protected:
    private:
    };

    class storage_element: public Element
    {
    public:
    protected:
    private:
    };

    class ostorage_element: public Element
    {
    public:
    protected:
    private:
    };

    class vstream_element: public Element
    {
    public:
        vstream_element();
        ~vstream_element();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const vstream_element& default_instance();
        bool has_version_attr() const;
        void set_version_attr(const ns_s::ST_Guid& _version_attr);
        const ns_s::ST_Guid& get_version_attr() const;
        bool has_base64Binary() const;
        void set_base64Binary(const XSD::base64Binary_& _base64Binary);
        const XSD::base64Binary_& get_base64Binary() const;
        std::string toString() const;
    protected:
    private:
        static vstream_element* default_instance_;
        bool m_has_version_attr;
        ns_s::ST_Guid* m_version_attr;
        bool m_has_base64Binary;
        XSD::base64Binary_ m_base64Binary;
    };

    class clsid_element: public Element
    {
    public:
    protected:
    private:
    };

}
#endif