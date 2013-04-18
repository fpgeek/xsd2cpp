#ifndef shared-documentPropertiesCustom_xsd 
#define shared-documentPropertiesCustom_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-documentPropertiesVariantTypes_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_s{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class CT_Properties : public XSD::ComplexType{
    public:
        bool has_property() const;
        CT_Property* mutable_property();
        const CT_Property& property() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Properties& default_instance() const;

    private:
        bool m_has_property ;
        CT_Property* m_property ;
        static CT_Properties* default_instance_ ;

    }

    class CT_Property : public XSD::ComplexType{
    public:
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
        static const CT_Property& default_instance() const;
        bool has_fmtid_attr() const;
        void set_fmtid_attr(const ns_s::ST_Guid& _fmtid_attr );
        const ns_s::ST_Guid& fmtid_attr() const;
        bool has_pid_attr() const;
        void set_pid_attr(const int& _pid_attr );
        const int& pid_attr() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_linkTarget_attr() const;
        void set_linkTarget_attr(const string& _linkTarget_attr );
        const string& linkTarget_attr() const;

    private:
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
        static CT_Property* default_instance_ ;
        bool m_has_fmtid_attr ;
        ns_s::ST_Guid* m_fmtid_attr ;
        bool m_has_pid_attr ;
        int m_pid_attr ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_linkTarget_attr ;
        string m_linkTarget_attr ;

    }

    class Properties : public CT_Properties : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}