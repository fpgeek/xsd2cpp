#ifndef shared-documentPropertiesVariantTypes_xsd 
#define shared-documentPropertiesVariantTypes_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_vt{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_VectorBaseType : public XSD::SimpleType{
    public:
        ST_VectorBaseType();
        ST_VectorBaseType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_VectorBaseType& default_instance() const;
        enum Type{
            _variant_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_VectorBaseType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ArrayBaseType : public XSD::SimpleType{
    public:
        ST_ArrayBaseType();
        ST_ArrayBaseType(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_ArrayBaseType& default_instance() const;
        enum Type{
            _variant_ = 1,
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
        }

    private:
        static const string TypeStrList [];
        static ST_ArrayBaseType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Cy : public XSD::SimpleType{
    public:
        ST_Cy();
        ST_Cy(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Cy& default_instance() const;

    private:
        static ST_Cy* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_Error : public XSD::SimpleType{
    public:
        ST_Error();
        ST_Error(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Error& default_instance() const;

    private:
        static ST_Error* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class CT_Empty : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Empty& default_instance() const;

    private:
        static CT_Empty* default_instance_ ;

    }

    class CT_Null : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Null& default_instance() const;

    private:
        static CT_Null* default_instance_ ;

    }

    class CT_Vector : public XSD::ComplexType{
    public:
        CT_Variant* add_variant();
        byte* add_i1();
        short* add_i2();
        int* add_i4();
        long* add_i8();
        unsignedByte* add_ui1();
        unsignedShort* add_ui2();
        unsignedInt* add_ui4();
        unsignedLong* add_ui8();
        float* add_r4();
        double* add_r8();
        string* add_lpstr();
        string* add_lpwstr();
        string* add_bstr();
        dateTime* add_date();
        dateTime* add_filetime();
        boolean* add_bool();
        ST_Cy* add_cy();
        ST_Error* add_error();
        ns_s::ST_Guid* add_clsid();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Vector& default_instance() const;
        bool has_baseType_attr() const;
        void set_baseType_attr(const ST_VectorBaseType& _baseType_attr );
        const ST_VectorBaseType& baseType_attr() const;
        bool has_size_attr() const;
        void set_size_attr(const unsignedInt& _size_attr );
        const unsignedInt& size_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Vector* default_instance_ ;
        bool m_has_baseType_attr ;
        ST_VectorBaseType* m_baseType_attr ;
        bool m_has_size_attr ;
        unsignedInt m_size_attr ;
        class ChildGroup_1{
        public:
            bool has_variant() const;
            CT_Variant* mutable_variant();
            const CT_Variant& variant() const;
            bool has_i1() const;
            void set_i1(const byte& _i1 );
            const byte& i1() const;
            bool has_i2() const;
            void set_i2(const short& _i2 );
            const short& i2() const;
            bool has_i4() const;
            void set_i4(const int& _i4 );
            const int& i4() const;
            bool has_i8() const;
            void set_i8(const long& _i8 );
            const long& i8() const;
            bool has_ui1() const;
            void set_ui1(const unsignedByte& _ui1 );
            const unsignedByte& ui1() const;
            bool has_ui2() const;
            void set_ui2(const unsignedShort& _ui2 );
            const unsignedShort& ui2() const;
            bool has_ui4() const;
            void set_ui4(const unsignedInt& _ui4 );
            const unsignedInt& ui4() const;
            bool has_ui8() const;
            void set_ui8(const unsignedLong& _ui8 );
            const unsignedLong& ui8() const;
            bool has_r4() const;
            void set_r4(const float& _r4 );
            const float& r4() const;
            bool has_r8() const;
            void set_r8(const double& _r8 );
            const double& r8() const;
            bool has_lpstr() const;
            void set_lpstr(const string& _lpstr );
            const string& lpstr() const;
            bool has_lpwstr() const;
            void set_lpwstr(const string& _lpwstr );
            const string& lpwstr() const;
            bool has_bstr() const;
            void set_bstr(const string& _bstr );
            const string& bstr() const;
            bool has_date() const;
            void set_date(const dateTime& _date );
            const dateTime& date() const;
            bool has_filetime() const;
            void set_filetime(const dateTime& _filetime );
            const dateTime& filetime() const;
            bool has_bool() const;
            void set_bool(const boolean& _bool );
            const boolean& bool() const;
            bool has_cy() const;
            ST_Cy* mutable_cy();
            const ST_Cy& cy() const;
            bool has_error() const;
            ST_Error* mutable_error();
            const ST_Error& error() const;
            bool has_clsid() const;
            ns_s::ST_Guid* mutable_clsid();
            const ns_s::ST_Guid& clsid() const;

        private:
            bool m_has_variant ;
            CT_Variant* m_variant ;
            bool m_has_i1 ;
            byte m_i1 ;
            bool m_has_i2 ;
            short m_i2 ;
            bool m_has_i4 ;
            int m_i4 ;
            bool m_has_i8 ;
            long m_i8 ;
            bool m_has_ui1 ;
            unsignedByte m_ui1 ;
            bool m_has_ui2 ;
            unsignedShort m_ui2 ;
            bool m_has_ui4 ;
            unsignedInt m_ui4 ;
            bool m_has_ui8 ;
            unsignedLong m_ui8 ;
            bool m_has_r4 ;
            float m_r4 ;
            bool m_has_r8 ;
            double m_r8 ;
            bool m_has_lpstr ;
            string m_lpstr ;
            bool m_has_lpwstr ;
            string m_lpwstr ;
            bool m_has_bstr ;
            string m_bstr ;
            bool m_has_date ;
            dateTime m_date ;
            bool m_has_filetime ;
            dateTime m_filetime ;
            bool m_has_bool ;
            boolean m_bool ;
            bool m_has_cy ;
            ST_Cy* m_cy ;
            bool m_has_error ;
            ST_Error* m_error ;
            bool m_has_clsid ;
            ns_s::ST_Guid* m_clsid ;

        }


    }

    class CT_Array : public XSD::ComplexType{
    public:
        CT_Variant* add_variant();
        byte* add_i1();
        short* add_i2();
        int* add_i4();
        int* add_int();
        unsignedByte* add_ui1();
        unsignedShort* add_ui2();
        unsignedInt* add_ui4();
        unsignedInt* add_uint();
        float* add_r4();
        double* add_r8();
        decimal* add_decimal();
        string* add_bstr();
        dateTime* add_date();
        boolean* add_bool();
        ST_Error* add_error();
        ST_Cy* add_cy();
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Array& default_instance() const;
        bool has_lBounds_attr() const;
        void set_lBounds_attr(const int& _lBounds_attr );
        const int& lBounds_attr() const;
        bool has_uBounds_attr() const;
        void set_uBounds_attr(const int& _uBounds_attr );
        const int& uBounds_attr() const;
        bool has_baseType_attr() const;
        void set_baseType_attr(const ST_ArrayBaseType& _baseType_attr );
        const ST_ArrayBaseType& baseType_attr() const;

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Array* default_instance_ ;
        bool m_has_lBounds_attr ;
        int m_lBounds_attr ;
        bool m_has_uBounds_attr ;
        int m_uBounds_attr ;
        bool m_has_baseType_attr ;
        ST_ArrayBaseType* m_baseType_attr ;
        class ChildGroup_1{
        public:
            bool has_variant() const;
            CT_Variant* mutable_variant();
            const CT_Variant& variant() const;
            bool has_i1() const;
            void set_i1(const byte& _i1 );
            const byte& i1() const;
            bool has_i2() const;
            void set_i2(const short& _i2 );
            const short& i2() const;
            bool has_i4() const;
            void set_i4(const int& _i4 );
            const int& i4() const;
            bool has_int() const;
            void set_int(const int& _int );
            const int& int() const;
            bool has_ui1() const;
            void set_ui1(const unsignedByte& _ui1 );
            const unsignedByte& ui1() const;
            bool has_ui2() const;
            void set_ui2(const unsignedShort& _ui2 );
            const unsignedShort& ui2() const;
            bool has_ui4() const;
            void set_ui4(const unsignedInt& _ui4 );
            const unsignedInt& ui4() const;
            bool has_uint() const;
            void set_uint(const unsignedInt& _uint );
            const unsignedInt& uint() const;
            bool has_r4() const;
            void set_r4(const float& _r4 );
            const float& r4() const;
            bool has_r8() const;
            void set_r8(const double& _r8 );
            const double& r8() const;
            bool has_decimal() const;
            void set_decimal(const decimal& _decimal );
            const decimal& decimal() const;
            bool has_bstr() const;
            void set_bstr(const string& _bstr );
            const string& bstr() const;
            bool has_date() const;
            void set_date(const dateTime& _date );
            const dateTime& date() const;
            bool has_bool() const;
            void set_bool(const boolean& _bool );
            const boolean& bool() const;
            bool has_error() const;
            ST_Error* mutable_error();
            const ST_Error& error() const;
            bool has_cy() const;
            ST_Cy* mutable_cy();
            const ST_Cy& cy() const;

        private:
            bool m_has_variant ;
            CT_Variant* m_variant ;
            bool m_has_i1 ;
            byte m_i1 ;
            bool m_has_i2 ;
            short m_i2 ;
            bool m_has_i4 ;
            int m_i4 ;
            bool m_has_int ;
            int m_int ;
            bool m_has_ui1 ;
            unsignedByte m_ui1 ;
            bool m_has_ui2 ;
            unsignedShort m_ui2 ;
            bool m_has_ui4 ;
            unsignedInt m_ui4 ;
            bool m_has_uint ;
            unsignedInt m_uint ;
            bool m_has_r4 ;
            float m_r4 ;
            bool m_has_r8 ;
            double m_r8 ;
            bool m_has_decimal ;
            decimal m_decimal ;
            bool m_has_bstr ;
            string m_bstr ;
            bool m_has_date ;
            dateTime m_date ;
            bool m_has_bool ;
            boolean m_bool ;
            bool m_has_error ;
            ST_Error* m_error ;
            bool m_has_cy ;
            ST_Cy* m_cy ;

        }


    }

    class CT_Variant : public XSD::ComplexType{
    public:
        bool has_variant() const;
        CT_Variant* mutable_variant();
        const CT_Variant& variant() const;
        bool has_vector() const;
        CT_Vector* mutable_vector();
        const CT_Vector& vector() const;
        bool has_array() const;
        CT_Array* mutable_array();
        const CT_Array& array() const;
        bool has_blob() const;
        void set_blob(const base64Binary& _blob );
        const base64Binary& blob() const;
        bool has_oblob() const;
        void set_oblob(const base64Binary& _oblob );
        const base64Binary& oblob() const;
        bool has_empty() const;
        CT_Empty* mutable_empty();
        const CT_Empty& empty() const;
        bool has_null() const;
        CT_Null* mutable_null();
        const CT_Null& null() const;
        bool has_i1() const;
        void set_i1(const byte& _i1 );
        const byte& i1() const;
        bool has_i2() const;
        void set_i2(const short& _i2 );
        const short& i2() const;
        bool has_i4() const;
        void set_i4(const int& _i4 );
        const int& i4() const;
        bool has_i8() const;
        void set_i8(const long& _i8 );
        const long& i8() const;
        bool has_int() const;
        void set_int(const int& _int );
        const int& int() const;
        bool has_ui1() const;
        void set_ui1(const unsignedByte& _ui1 );
        const unsignedByte& ui1() const;
        bool has_ui2() const;
        void set_ui2(const unsignedShort& _ui2 );
        const unsignedShort& ui2() const;
        bool has_ui4() const;
        void set_ui4(const unsignedInt& _ui4 );
        const unsignedInt& ui4() const;
        bool has_ui8() const;
        void set_ui8(const unsignedLong& _ui8 );
        const unsignedLong& ui8() const;
        bool has_uint() const;
        void set_uint(const unsignedInt& _uint );
        const unsignedInt& uint() const;
        bool has_r4() const;
        void set_r4(const float& _r4 );
        const float& r4() const;
        bool has_r8() const;
        void set_r8(const double& _r8 );
        const double& r8() const;
        bool has_decimal() const;
        void set_decimal(const decimal& _decimal );
        const decimal& decimal() const;
        bool has_lpstr() const;
        void set_lpstr(const string& _lpstr );
        const string& lpstr() const;
        bool has_lpwstr() const;
        void set_lpwstr(const string& _lpwstr );
        const string& lpwstr() const;
        bool has_bstr() const;
        void set_bstr(const string& _bstr );
        const string& bstr() const;
        bool has_date() const;
        void set_date(const dateTime& _date );
        const dateTime& date() const;
        bool has_filetime() const;
        void set_filetime(const dateTime& _filetime );
        const dateTime& filetime() const;
        bool has_bool() const;
        void set_bool(const boolean& _bool );
        const boolean& bool() const;
        bool has_cy() const;
        ST_Cy* mutable_cy();
        const ST_Cy& cy() const;
        bool has_error() const;
        ST_Error* mutable_error();
        const ST_Error& error() const;
        bool has_stream() const;
        void set_stream(const base64Binary& _stream );
        const base64Binary& stream() const;
        bool has_ostream() const;
        void set_ostream(const base64Binary& _ostream );
        const base64Binary& ostream() const;
        bool has_storage() const;
        void set_storage(const base64Binary& _storage );
        const base64Binary& storage() const;
        bool has_ostorage() const;
        void set_ostorage(const base64Binary& _ostorage );
        const base64Binary& ostorage() const;
        bool has_vstream() const;
        CT_Vstream* mutable_vstream();
        const CT_Vstream& vstream() const;
        bool has_clsid() const;
        ns_s::ST_Guid* mutable_clsid();
        const ns_s::ST_Guid& clsid() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Variant& default_instance() const;

    private:
        bool m_has_variant ;
        CT_Variant* m_variant ;
        bool m_has_vector ;
        CT_Vector* m_vector ;
        bool m_has_array ;
        CT_Array* m_array ;
        bool m_has_blob ;
        base64Binary m_blob ;
        bool m_has_oblob ;
        base64Binary m_oblob ;
        bool m_has_empty ;
        CT_Empty* m_empty ;
        bool m_has_null ;
        CT_Null* m_null ;
        bool m_has_i1 ;
        byte m_i1 ;
        bool m_has_i2 ;
        short m_i2 ;
        bool m_has_i4 ;
        int m_i4 ;
        bool m_has_i8 ;
        long m_i8 ;
        bool m_has_int ;
        int m_int ;
        bool m_has_ui1 ;
        unsignedByte m_ui1 ;
        bool m_has_ui2 ;
        unsignedShort m_ui2 ;
        bool m_has_ui4 ;
        unsignedInt m_ui4 ;
        bool m_has_ui8 ;
        unsignedLong m_ui8 ;
        bool m_has_uint ;
        unsignedInt m_uint ;
        bool m_has_r4 ;
        float m_r4 ;
        bool m_has_r8 ;
        double m_r8 ;
        bool m_has_decimal ;
        decimal m_decimal ;
        bool m_has_lpstr ;
        string m_lpstr ;
        bool m_has_lpwstr ;
        string m_lpwstr ;
        bool m_has_bstr ;
        string m_bstr ;
        bool m_has_date ;
        dateTime m_date ;
        bool m_has_filetime ;
        dateTime m_filetime ;
        bool m_has_bool ;
        boolean m_bool ;
        bool m_has_cy ;
        ST_Cy* m_cy ;
        bool m_has_error ;
        ST_Error* m_error ;
        bool m_has_stream ;
        base64Binary m_stream ;
        bool m_has_ostream ;
        base64Binary m_ostream ;
        bool m_has_storage ;
        base64Binary m_storage ;
        bool m_has_ostorage ;
        base64Binary m_ostorage ;
        bool m_has_vstream ;
        CT_Vstream* m_vstream ;
        bool m_has_clsid ;
        ns_s::ST_Guid* m_clsid ;
        static CT_Variant* default_instance_ ;

    }

    class CT_Vstream : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Vstream& default_instance() const;

    private:
        static CT_Vstream* default_instance_ ;

    }

    class variant : public CT_Variant : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class vector : public CT_Vector : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class array : public CT_Array : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class blob : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class oblob : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class empty : public CT_Empty : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class null : public CT_Null : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class i1 : public byte : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class i2 : public short : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class i4 : public int : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class i8 : public long : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class int : public int : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ui1 : public unsignedByte : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ui2 : public unsignedShort : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ui4 : public unsignedInt : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ui8 : public unsignedLong : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class uint : public unsignedInt : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class r4 : public float : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class r8 : public double : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class decimal : public decimal : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class lpstr : public string : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class lpwstr : public string : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bstr : public string : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class date : public dateTime : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class filetime : public dateTime : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bool : public boolean : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class cy : public ST_Cy : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class error : public ST_Error : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class stream : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ostream : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class storage : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class ostorage : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class vstream : public CT_Vstream : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class clsid : public ns_s::ST_Guid : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}