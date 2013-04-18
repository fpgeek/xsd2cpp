#include "shared-documentPropertiesCustom_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        bool has_property(){

            return m_has_property;
        
        }
        CT_Property* mutable_property(){

                m_has_property = true;
                if (!m_property)
                {
                    m_property = new CT_Property();
                }
                return m_property;
            
        }
        const CT_Property& property(){

            if (m_property)
            {
                return *m_property;
            }
            return CT_Property::default_instance();
        
        }
        void clear(){

                m_has_property = false;
                
        if (m_property)
        {
            delete m_property;
            m_property = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_property)
                {
                    m_property->toXml(property, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Properties& default_instance(){

    if (!CT_Properties::default_instance_)
    {
        CT_Properties::default_instance_ = new CT_Properties();
    }
    return *CT_Properties::default_instance_;

        }

    private:
        bool m_has_property ;
        CT_Property* m_property ;
        static CT_Properties* default_instance_ ;

    }

    class CT_Property : public XSD::ComplexType{
    public:
        bool has_vector(){

            return m_has_vector;
        
        }
        CT_Vector* mutable_vector(){

                
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
                m_i1.clear();;
            
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
        const CT_Vector& vector(){

            if (m_vector)
            {
                return *m_vector;
            }
            return CT_Vector::default_instance();
        
        }
        bool has_array(){

            return m_has_array;
        
        }
        CT_Array* mutable_array(){

                
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
                m_i1.clear();;
            
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
        const CT_Array& array(){

            if (m_array)
            {
                return *m_array;
            }
            return CT_Array::default_instance();
        
        }
        bool has_blob(){

        return m_has_blob;
    
        }
        void set_blob(const base64Binary& _blob ){

                
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
                m_i1.clear();;
            
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
                base64Binary = _blob;
            
        }
        const base64Binary& blob(){

        return type: ase64Binary\nname: \m_blob\n;
    
        }
        bool has_oblob(){

        return m_has_oblob;
    
        }
        void set_oblob(const base64Binary& _oblob ){

                
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
                m_i1.clear();;
            
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
                base64Binary = _oblob;
            
        }
        const base64Binary& oblob(){

        return type: ase64Binary\nname: \m_oblob\n;
    
        }
        bool has_empty(){

            return m_has_empty;
        
        }
        CT_Empty* mutable_empty(){

                
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
                m_i1.clear();;
            
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
        const CT_Empty& empty(){

            if (m_empty)
            {
                return *m_empty;
            }
            return CT_Empty::default_instance();
        
        }
        bool has_null(){

            return m_has_null;
        
        }
        CT_Null* mutable_null(){

                
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
                m_i1.clear();;
            
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
        const CT_Null& null(){

            if (m_null)
            {
                return *m_null;
            }
            return CT_Null::default_instance();
        
        }
        bool has_i1(){

        return m_has_i1;
    
        }
        void set_i1(const byte& _i1 ){

                
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
                byte = _i1;
            
        }
        const byte& i1(){

        return type: yte\nname: \m_i1\n;
    
        }
        bool has_i2(){

        return m_has_i2;
    
        }
        void set_i2(const short& _i2 ){

                
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
                m_i1.clear();;
            
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
                short = _i2;
            
        }
        const short& i2(){

        return type: \short\nname: \m_i2\n;
    
        }
        bool has_i4(){

        return m_has_i4;
    
        }
        void set_i4(const int& _i4 ){

                
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
                m_i1.clear();;
            
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
                int = _i4;
            
        }
        const int& i4(){

        return type: \int\nname: \m_i4\n;
    
        }
        bool has_i8(){

        return m_has_i8;
    
        }
        void set_i8(const long& _i8 ){

                
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
                m_i1.clear();;
            
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
                long = _i8;
            
        }
        const long& i8(){

        return type: \long\nname: \m_i8\n;
    
        }
        bool has_int(){

        return m_has_int;
    
        }
        void set_int(const int& _int ){

                
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
                m_i1.clear();;
            
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
                int = _int;
            
        }
        const int& int(){

        return type: \int\nname: \m_int\n;
    
        }
        bool has_ui1(){

        return m_has_ui1;
    
        }
        void set_ui1(const unsignedByte& _ui1 ){

                
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
                m_i1.clear();;
            
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
                unsignedByte = _ui1;
            
        }
        const unsignedByte& ui1(){

        return type: \unsignedByte\nname: \m_ui1\n;
    
        }
        bool has_ui2(){

        return m_has_ui2;
    
        }
        void set_ui2(const unsignedShort& _ui2 ){

                
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
                m_i1.clear();;
            
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
                unsignedShort = _ui2;
            
        }
        const unsignedShort& ui2(){

        return type: \unsignedShort\nname: \m_ui2\n;
    
        }
        bool has_ui4(){

        return m_has_ui4;
    
        }
        void set_ui4(const unsignedInt& _ui4 ){

                
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
                m_i1.clear();;
            
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
                unsignedInt = _ui4;
            
        }
        const unsignedInt& ui4(){

        return type: \unsignedInt\nname: \m_ui4\n;
    
        }
        bool has_ui8(){

        return m_has_ui8;
    
        }
        void set_ui8(const unsignedLong& _ui8 ){

                
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
                m_i1.clear();;
            
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
                unsignedLong = _ui8;
            
        }
        const unsignedLong& ui8(){

        return type: \unsignedLong\nname: \m_ui8\n;
    
        }
        bool has_uint(){

        return m_has_uint;
    
        }
        void set_uint(const unsignedInt& _uint ){

                
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
                m_i1.clear();;
            
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
                unsignedInt = _uint;
            
        }
        const unsignedInt& uint(){

        return type: \unsignedInt\nname: \m_uint\n;
    
        }
        bool has_r4(){

        return m_has_r4;
    
        }
        void set_r4(const float& _r4 ){

                
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
                m_i1.clear();;
            
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
                float = _r4;
            
        }
        const float& r4(){

        return type: loat\nname: \m_r4\n;
    
        }
        bool has_r8(){

        return m_has_r8;
    
        }
        void set_r8(const double& _r8 ){

                
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
                m_i1.clear();;
            
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
                double = _r8;
            
        }
        const double& r8(){

        return type: \double\nname: \m_r8\n;
    
        }
        bool has_decimal(){

        return m_has_decimal;
    
        }
        void set_decimal(const decimal& _decimal ){

                
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
                m_i1.clear();;
            
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
                decimal = _decimal;
            
        }
        const decimal& decimal(){

        return type: \decimal\nname: \m_decimal\n;
    
        }
        bool has_lpstr(){

        return m_has_lpstr;
    
        }
        void set_lpstr(const string& _lpstr ){

                
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
                m_i1.clear();;
            
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
                string = _lpstr;
            
        }
        const string& lpstr(){

        return type: \string\nname: \m_lpstr\n;
    
        }
        bool has_lpwstr(){

        return m_has_lpwstr;
    
        }
        void set_lpwstr(const string& _lpwstr ){

                
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
                m_i1.clear();;
            
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
                string = _lpwstr;
            
        }
        const string& lpwstr(){

        return type: \string\nname: \m_lpwstr\n;
    
        }
        bool has_bstr(){

        return m_has_bstr;
    
        }
        void set_bstr(const string& _bstr ){

                
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
                m_i1.clear();;
            
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
                string = _bstr;
            
        }
        const string& bstr(){

        return type: \string\nname: \m_bstr\n;
    
        }
        bool has_date(){

        return m_has_date;
    
        }
        void set_date(const dateTime& _date ){

                
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
                m_i1.clear();;
            
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
                dateTime = _date;
            
        }
        const dateTime& date(){

        return type: \dateTime\nname: \m_date\n;
    
        }
        bool has_filetime(){

        return m_has_filetime;
    
        }
        void set_filetime(const dateTime& _filetime ){

                
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
                m_i1.clear();;
            
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
                dateTime = _filetime;
            
        }
        const dateTime& filetime(){

        return type: \dateTime\nname: \m_filetime\n;
    
        }
        bool has_bool(){

        return m_has_bool;
    
        }
        void set_bool(const boolean& _bool ){

                
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
                m_i1.clear();;
            
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
                boolean = _bool;
            
        }
        const boolean& bool(){

        return type: oolean\nname: \m_bool\n;
    
        }
        bool has_cy(){

            return m_has_cy;
        
        }
        ST_Cy* mutable_cy(){

                
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
                m_i1.clear();;
            
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
        const ST_Cy& cy(){

            if (m_cy)
            {
                return *m_cy;
            }
            return ST_Cy::default_instance();
        
        }
        bool has_error(){

            return m_has_error;
        
        }
        ST_Error* mutable_error(){

                
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
                m_i1.clear();;
            
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
        const ST_Error& error(){

            if (m_error)
            {
                return *m_error;
            }
            return ST_Error::default_instance();
        
        }
        bool has_stream(){

        return m_has_stream;
    
        }
        void set_stream(const base64Binary& _stream ){

                
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
                m_i1.clear();;
            
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
                base64Binary = _stream;
            
        }
        const base64Binary& stream(){

        return type: ase64Binary\nname: \m_stream\n;
    
        }
        bool has_ostream(){

        return m_has_ostream;
    
        }
        void set_ostream(const base64Binary& _ostream ){

                
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
                m_i1.clear();;
            
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
                base64Binary = _ostream;
            
        }
        const base64Binary& ostream(){

        return type: ase64Binary\nname: \m_ostream\n;
    
        }
        bool has_storage(){

        return m_has_storage;
    
        }
        void set_storage(const base64Binary& _storage ){

                
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
                m_i1.clear();;
            
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
                base64Binary = _storage;
            
        }
        const base64Binary& storage(){

        return type: ase64Binary\nname: \m_storage\n;
    
        }
        bool has_ostorage(){

        return m_has_ostorage;
    
        }
        void set_ostorage(const base64Binary& _ostorage ){

                
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
                m_i1.clear();;
            
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
                base64Binary = _ostorage;
            
        }
        const base64Binary& ostorage(){

        return type: ase64Binary\nname: \m_ostorage\n;
    
        }
        bool has_vstream(){

            return m_has_vstream;
        
        }
        CT_Vstream* mutable_vstream(){

                
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
                m_i1.clear();;
            
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
        const CT_Vstream& vstream(){

            if (m_vstream)
            {
                return *m_vstream;
            }
            return CT_Vstream::default_instance();
        
        }
        bool has_clsid(){

            return m_has_clsid;
        
        }
        ns_s::ST_Guid* mutable_clsid(){

                
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
                m_i1.clear();;
            
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
        const ns_s::ST_Guid& clsid(){

            if (m_clsid)
            {
                return *m_clsid;
            }
            return ns_s::ST_Guid::default_instance();
        
        }
        void clear(){

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
                m_i1.clear();
            
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
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_fmtid_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_pid_attr << \\\;
_outStream << _attrName << \=\\ << m_name_attr << \\\;
_outStream << _attrName << \=\\ << m_linkTarget_attr << \\\;
        _outStream << \>\;
    
                if (m_has_vector)
                {
                    m_vector->toXml(vector, _outStream);;
                }
            
                if (m_has_array)
                {
                    m_vector->toXml(array, _outStream);;
                }
            
                if (m_has_blob)
                {
                    _outStream << \<blob>\ << m_vector << \</blob>\;;
                }
            
                if (m_has_oblob)
                {
                    _outStream << \<oblob>\ << m_vector << \</oblob>\;;
                }
            
                if (m_has_empty)
                {
                    m_vector->toXml(empty, _outStream);;
                }
            
                if (m_has_null)
                {
                    m_vector->toXml(null, _outStream);;
                }
            
                if (m_has_i1)
                {
                    _outStream << \<i1>\ << m_vector << \</i1>\;;
                }
            
                if (m_has_i2)
                {
                    _outStream << \<i2>\ << m_vector << \</i2>\;;
                }
            
                if (m_has_i4)
                {
                    _outStream << \<i4>\ << m_vector << \</i4>\;;
                }
            
                if (m_has_i8)
                {
                    _outStream << \<i8>\ << m_vector << \</i8>\;;
                }
            
                if (m_has_int)
                {
                    _outStream << \<int>\ << m_vector << \</int>\;;
                }
            
                if (m_has_ui1)
                {
                    _outStream << \<ui1>\ << m_vector << \</ui1>\;;
                }
            
                if (m_has_ui2)
                {
                    _outStream << \<ui2>\ << m_vector << \</ui2>\;;
                }
            
                if (m_has_ui4)
                {
                    _outStream << \<ui4>\ << m_vector << \</ui4>\;;
                }
            
                if (m_has_ui8)
                {
                    _outStream << \<ui8>\ << m_vector << \</ui8>\;;
                }
            
                if (m_has_uint)
                {
                    _outStream << \<uint>\ << m_vector << \</uint>\;;
                }
            
                if (m_has_r4)
                {
                    _outStream << \<r4>\ << m_vector << \</r4>\;;
                }
            
                if (m_has_r8)
                {
                    _outStream << \<r8>\ << m_vector << \</r8>\;;
                }
            
                if (m_has_decimal)
                {
                    _outStream << \<decimal>\ << m_vector << \</decimal>\;;
                }
            
                if (m_has_lpstr)
                {
                    _outStream << \<lpstr>\ << m_vector << \</lpstr>\;;
                }
            
                if (m_has_lpwstr)
                {
                    _outStream << \<lpwstr>\ << m_vector << \</lpwstr>\;;
                }
            
                if (m_has_bstr)
                {
                    _outStream << \<bstr>\ << m_vector << \</bstr>\;;
                }
            
                if (m_has_date)
                {
                    _outStream << \<date>\ << m_vector << \</date>\;;
                }
            
                if (m_has_filetime)
                {
                    _outStream << \<filetime>\ << m_vector << \</filetime>\;;
                }
            
                if (m_has_bool)
                {
                    _outStream << \<bool>\ << m_vector << \</bool>\;;
                }
            
                if (m_has_cy)
                {
                    _outStream << \<cy>\ << m_vector->toString() << \</cy>\;;
                }
            
                if (m_has_error)
                {
                    _outStream << \<error>\ << m_vector->toString() << \</error>\;;
                }
            
                if (m_has_stream)
                {
                    _outStream << \<stream>\ << m_vector << \</stream>\;;
                }
            
                if (m_has_ostream)
                {
                    _outStream << \<ostream>\ << m_vector << \</ostream>\;;
                }
            
                if (m_has_storage)
                {
                    _outStream << \<storage>\ << m_vector << \</storage>\;;
                }
            
                if (m_has_ostorage)
                {
                    _outStream << \<ostorage>\ << m_vector << \</ostorage>\;;
                }
            
                if (m_has_vstream)
                {
                    m_vector->toXml(vstream, _outStream);;
                }
            
                if (m_has_clsid)
                {
                    _outStream << \<clsid>\ << m_vector->toString() << \</clsid>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Property& default_instance(){

    if (!CT_Property::default_instance_)
    {
        CT_Property::default_instance_ = new CT_Property();
    }
    return *CT_Property::default_instance_;

        }
        bool has_fmtid_attr(){

            return m_has_fmtid_attr;
        
        }
        void set_fmtid_attr(const ns_s::ST_Guid& _fmtid_attr ){

            m_has_fmtid_attr = true;
            m_fmtid_attr = new ns_s::ST_Guid(_fmtid_attr);
        
        }
        const ns_s::ST_Guid& fmtid_attr(){

            if (m_fmtid_attr)
            {
                return *m_fmtid_attr;
            }
            return ns_s::ST_Guid::default_instance();
        
        }
        bool has_pid_attr(){

            return m_has_pid_attr;
        
        }
        void set_pid_attr(const int& _pid_attr ){

        m_has_pid_attr = true;
        m_pid_attr = _pid_attr;
        
        }
        const int& pid_attr(){

            return type: \int\nname: \m_pid_attr\n;
        
        }
        bool has_name_attr(){

            return m_has_name_attr;
        
        }
        void set_name_attr(const string& _name_attr ){

        m_has_name_attr = true;
        m_name_attr = _name_attr;
        
        }
        const string& name_attr(){

            return type: \string\nname: \m_name_attr\n;
        
        }
        bool has_linkTarget_attr(){

            return m_has_linkTarget_attr;
        
        }
        void set_linkTarget_attr(const string& _linkTarget_attr ){

        m_has_linkTarget_attr = true;
        m_linkTarget_attr = _linkTarget_attr;
        
        }
        const string& linkTarget_attr(){

            return type: \string\nname: \m_linkTarget_attr\n;
        
        }

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
        void toXml(ostream& _outStream ){

        CT_Properties::toXml(\Properties\, _outStream);
    
        }

    private:

    }

}