#include "shared-documentPropertiesVariantTypes_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        ST_VectorBaseType(){
            m_has_type = false

        }
        ST_VectorBaseType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_VectorBaseType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_VectorBaseType& default_instance(){

    if (!ST_VectorBaseType::default_instance_)
    {
        ST_VectorBaseType::default_instance_ = new ST_VectorBaseType();
    }
    return *ST_VectorBaseType::default_instance_;

        }
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
        ST_ArrayBaseType(){
            m_has_type = false

        }
        ST_ArrayBaseType(const Type _type ){
            m_has_type = true
            m_type = _type

        }
        bool has_type(){

            return m_has_type;
        
        }
        void set_type(const Type& _type ){

            m_has_type = true;
            m_type = _type;
        
        }
        const Type& type(){

            return m_type;
        
        }
        string toString(){

        return ST_ArrayBaseType::TypeStrList[m_type];
    
        }
        void clear(){

            m_has_type = false;
        
        }
        void toXml(const string _attrName , ostream _outStream ){

            if (m_has_type)
            {
                '_outStream << _attrName << \=\\ << toString() << \\\;';
            }
        
        }
        const ST_ArrayBaseType& default_instance(){

    if (!ST_ArrayBaseType::default_instance_)
    {
        ST_ArrayBaseType::default_instance_ = new ST_ArrayBaseType();
    }
    return *ST_ArrayBaseType::default_instance_;

        }
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
        ST_Cy(){
            m_has_string = false
            m_string = 

        }
        ST_Cy(const XSD::string& _string ){
            m_has_string = true
            m_string = _string

        }
        bool has_string(){

    return m_has_string;

        }
        void set_string(const string& _string ){

    m_has_string = true;
    m_string = _string;

        }
        const string& string(){

    return m_string;

        }
        void clear(){

    m_has_string = false;
    m_string.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_string)
    {
        _outStream << _attrName << \=\\ << m_string << \\\;;
    }

        }
        const ST_Cy& default_instance(){

    if (!ST_Cy::default_instance_)
    {
        ST_Cy::default_instance_ = new ST_Cy();
    }
    return *ST_Cy::default_instance_;

        }

    private:
        static ST_Cy* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_Error : public XSD::SimpleType{
    public:
        ST_Error(){
            m_has_string = false
            m_string = 

        }
        ST_Error(const XSD::string& _string ){
            m_has_string = true
            m_string = _string

        }
        bool has_string(){

    return m_has_string;

        }
        void set_string(const string& _string ){

    m_has_string = true;
    m_string = _string;

        }
        const string& string(){

    return m_string;

        }
        void clear(){

    m_has_string = false;
    m_string.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_string)
    {
        _outStream << _attrName << \=\\ << m_string << \\\;;
    }

        }
        const ST_Error& default_instance(){

    if (!ST_Error::default_instance_)
    {
        ST_Error::default_instance_ = new ST_Error();
    }
    return *ST_Error::default_instance_;

        }

    private:
        static ST_Error* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class CT_Empty : public XSD::ComplexType{
    public:
        void clear(){

        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Empty& default_instance(){

    if (!CT_Empty::default_instance_)
    {
        CT_Empty::default_instance_ = new CT_Empty();
    }
    return *CT_Empty::default_instance_;

        }

    private:
        static CT_Empty* default_instance_ ;

    }

    class CT_Null : public XSD::ComplexType{
    public:
        void clear(){

        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Null& default_instance(){

    if (!CT_Null::default_instance_)
    {
        CT_Null::default_instance_ = new CT_Null();
    }
    return *CT_Null::default_instance_;

        }

    private:
        static CT_Null* default_instance_ ;

    }

    class CT_Vector : public XSD::ComplexType{
    public:
        CT_Variant* add_variant(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Variant* pNewChild = pChildGroup->mutable_variant();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        byte* add_i1(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            byte* pNewChild = pChildGroup->mutable_i1();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        short* add_i2(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            short* pNewChild = pChildGroup->mutable_i2();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        int* add_i4(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            int* pNewChild = pChildGroup->mutable_i4();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        long* add_i8(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            long* pNewChild = pChildGroup->mutable_i8();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        unsignedByte* add_ui1(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            unsignedByte* pNewChild = pChildGroup->mutable_ui1();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        unsignedShort* add_ui2(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            unsignedShort* pNewChild = pChildGroup->mutable_ui2();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        unsignedInt* add_ui4(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            unsignedInt* pNewChild = pChildGroup->mutable_ui4();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        unsignedLong* add_ui8(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            unsignedLong* pNewChild = pChildGroup->mutable_ui8();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        float* add_r4(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            float* pNewChild = pChildGroup->mutable_r4();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        double* add_r8(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            double* pNewChild = pChildGroup->mutable_r8();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_lpstr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_lpstr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_lpwstr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_lpwstr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_bstr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_bstr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        dateTime* add_date(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            dateTime* pNewChild = pChildGroup->mutable_date();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        dateTime* add_filetime(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            dateTime* pNewChild = pChildGroup->mutable_filetime();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        boolean* add_bool(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            boolean* pNewChild = pChildGroup->mutable_bool();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ST_Cy* add_cy(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ST_Cy* pNewChild = pChildGroup->mutable_cy();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ST_Error* add_error(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ST_Error* pNewChild = pChildGroup->mutable_error();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ns_s::ST_Guid* add_clsid(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ns_s::ST_Guid* pNewChild = pChildGroup->mutable_clsid();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

                m_has_baseType_attr = false;
                
        if (m_baseType_attr)
        {
            delete m_baseType_attr;
            m_baseType_attr = NULL;
        }
    
            
                m_has_size_attr = false;
                m_size_attr = 0;
            
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_baseType_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_size_attr << \\\;
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_variant())
            {
                (*iter)->toXml(variant, _outStream);
            }
            else if ((*iter)->has_i1())
            {
                _outStream << \<i1>\ << (*iter) << \</i1>\;
            }
            else if ((*iter)->has_i2())
            {
                _outStream << \<i2>\ << (*iter) << \</i2>\;
            }
            else if ((*iter)->has_i4())
            {
                _outStream << \<i4>\ << (*iter) << \</i4>\;
            }
            else if ((*iter)->has_i8())
            {
                _outStream << \<i8>\ << (*iter) << \</i8>\;
            }
            else if ((*iter)->has_ui1())
            {
                _outStream << \<ui1>\ << (*iter) << \</ui1>\;
            }
            else if ((*iter)->has_ui2())
            {
                _outStream << \<ui2>\ << (*iter) << \</ui2>\;
            }
            else if ((*iter)->has_ui4())
            {
                _outStream << \<ui4>\ << (*iter) << \</ui4>\;
            }
            else if ((*iter)->has_ui8())
            {
                _outStream << \<ui8>\ << (*iter) << \</ui8>\;
            }
            else if ((*iter)->has_r4())
            {
                _outStream << \<r4>\ << (*iter) << \</r4>\;
            }
            else if ((*iter)->has_r8())
            {
                _outStream << \<r8>\ << (*iter) << \</r8>\;
            }
            else if ((*iter)->has_lpstr())
            {
                _outStream << \<lpstr>\ << (*iter) << \</lpstr>\;
            }
            else if ((*iter)->has_lpwstr())
            {
                _outStream << \<lpwstr>\ << (*iter) << \</lpwstr>\;
            }
            else if ((*iter)->has_bstr())
            {
                _outStream << \<bstr>\ << (*iter) << \</bstr>\;
            }
            else if ((*iter)->has_date())
            {
                _outStream << \<date>\ << (*iter) << \</date>\;
            }
            else if ((*iter)->has_filetime())
            {
                _outStream << \<filetime>\ << (*iter) << \</filetime>\;
            }
            else if ((*iter)->has_bool())
            {
                _outStream << \<bool>\ << (*iter) << \</bool>\;
            }
            else if ((*iter)->has_cy())
            {
                _outStream << \<cy>\ << (*iter)->toString() << \</cy>\;
            }
            else if ((*iter)->has_error())
            {
                _outStream << \<error>\ << (*iter)->toString() << \</error>\;
            }
            else if ((*iter)->has_clsid())
            {
                _outStream << \<clsid>\ << (*iter)->toString() << \</clsid>\;
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Vector& default_instance(){

    if (!CT_Vector::default_instance_)
    {
        CT_Vector::default_instance_ = new CT_Vector();
    }
    return *CT_Vector::default_instance_;

        }
        bool has_baseType_attr(){

            return m_has_baseType_attr;
        
        }
        void set_baseType_attr(const ST_VectorBaseType& _baseType_attr ){

            m_has_baseType_attr = true;
            m_baseType_attr = new ST_VectorBaseType(_baseType_attr);
        
        }
        const ST_VectorBaseType& baseType_attr(){

            if (m_baseType_attr)
            {
                return *m_baseType_attr;
            }
            return ST_VectorBaseType::default_instance();
        
        }
        bool has_size_attr(){

            return m_has_size_attr;
        
        }
        void set_size_attr(const unsignedInt& _size_attr ){

        m_has_size_attr = true;
        m_size_attr = _size_attr;
        
        }
        const unsignedInt& size_attr(){

            return type: \unsignedInt\nname: \m_size_attr\n;
        
        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Vector* default_instance_ ;
        bool m_has_baseType_attr ;
        ST_VectorBaseType* m_baseType_attr ;
        bool m_has_size_attr ;
        unsignedInt m_size_attr ;
        class ChildGroup_1{
        public:
            bool has_variant(){

            return m_has_variant;
        
            }
            CT_Variant* mutable_variant(){

                
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
            const CT_Variant& variant(){

            if (m_variant)
            {
                return *m_variant;
            }
            return CT_Variant::default_instance();
        
            }
            bool has_i1(){

        return m_has_i1;
    
            }
            void set_i1(const byte& _i1 ){

                
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
                byte = _i1;
            
            }
            const byte& i1(){

        return type: yte\nname: \m_i1\n;
    
            }
            bool has_i2(){

        return m_has_i2;
    
            }
            void set_i2(const short& _i2 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
        }
    ;
            
                m_has_i1 = false;
                m_i1.clear();;
            
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
                short = _i2;
            
            }
            const short& i2(){

        return type: \short\nname: \m_i2\n;
    
            }
            bool has_i4(){

        return m_has_i4;
    
            }
            void set_i4(const int& _i4 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
        }
    ;
            
                m_has_i1 = false;
                m_i1.clear();;
            
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
                int = _i4;
            
            }
            const int& i4(){

        return type: \int\nname: \m_i4\n;
    
            }
            bool has_i8(){

        return m_has_i8;
    
            }
            void set_i8(const long& _i8 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
        }
    ;
            
                m_has_i1 = false;
                m_i1.clear();;
            
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
                long = _i8;
            
            }
            const long& i8(){

        return type: \long\nname: \m_i8\n;
    
            }
            bool has_ui1(){

        return m_has_ui1;
    
            }
            void set_ui1(const unsignedByte& _ui1 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                unsignedByte = _ui1;
            
            }
            const unsignedByte& ui1(){

        return type: \unsignedByte\nname: \m_ui1\n;
    
            }
            bool has_ui2(){

        return m_has_ui2;
    
            }
            void set_ui2(const unsignedShort& _ui2 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                unsignedShort = _ui2;
            
            }
            const unsignedShort& ui2(){

        return type: \unsignedShort\nname: \m_ui2\n;
    
            }
            bool has_ui4(){

        return m_has_ui4;
    
            }
            void set_ui4(const unsignedInt& _ui4 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                unsignedInt = _ui4;
            
            }
            const unsignedInt& ui4(){

        return type: \unsignedInt\nname: \m_ui4\n;
    
            }
            bool has_ui8(){

        return m_has_ui8;
    
            }
            void set_ui8(const unsignedLong& _ui8 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                unsignedLong = _ui8;
            
            }
            const unsignedLong& ui8(){

        return type: \unsignedLong\nname: \m_ui8\n;
    
            }
            bool has_r4(){

        return m_has_r4;
    
            }
            void set_r4(const float& _r4 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                float = _r4;
            
            }
            const float& r4(){

        return type: loat\nname: \m_r4\n;
    
            }
            bool has_r8(){

        return m_has_r8;
    
            }
            void set_r8(const double& _r8 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                double = _r8;
            
            }
            const double& r8(){

        return type: \double\nname: \m_r8\n;
    
            }
            bool has_lpstr(){

        return m_has_lpstr;
    
            }
            void set_lpstr(const string& _lpstr ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                string = _lpstr;
            
            }
            const string& lpstr(){

        return type: \string\nname: \m_lpstr\n;
    
            }
            bool has_lpwstr(){

        return m_has_lpwstr;
    
            }
            void set_lpwstr(const string& _lpwstr ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                string = _lpwstr;
            
            }
            const string& lpwstr(){

        return type: \string\nname: \m_lpwstr\n;
    
            }
            bool has_bstr(){

        return m_has_bstr;
    
            }
            void set_bstr(const string& _bstr ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                string = _bstr;
            
            }
            const string& bstr(){

        return type: \string\nname: \m_bstr\n;
    
            }
            bool has_date(){

        return m_has_date;
    
            }
            void set_date(const dateTime& _date ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                dateTime = _date;
            
            }
            const dateTime& date(){

        return type: \dateTime\nname: \m_date\n;
    
            }
            bool has_filetime(){

        return m_has_filetime;
    
            }
            void set_filetime(const dateTime& _filetime ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                dateTime = _filetime;
            
            }
            const dateTime& filetime(){

        return type: \dateTime\nname: \m_filetime\n;
    
            }
            bool has_bool(){

        return m_has_bool;
    
            }
            void set_bool(const boolean& _bool ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                boolean = _bool;
            
            }
            const boolean& bool(){

        return type: oolean\nname: \m_bool\n;
    
            }
            bool has_cy(){

            return m_has_cy;
        
            }
            ST_Cy* mutable_cy(){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
            const ST_Error& error(){

            if (m_error)
            {
                return *m_error;
            }
            return ST_Error::default_instance();
        
            }
            bool has_clsid(){

            return m_has_clsid;
        
            }
            ns_s::ST_Guid* mutable_clsid(){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
            const ns_s::ST_Guid& clsid(){

            if (m_clsid)
            {
                return *m_clsid;
            }
            return ns_s::ST_Guid::default_instance();
        
            }

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
        CT_Variant* add_variant(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Variant* pNewChild = pChildGroup->mutable_variant();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        byte* add_i1(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            byte* pNewChild = pChildGroup->mutable_i1();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        short* add_i2(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            short* pNewChild = pChildGroup->mutable_i2();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        int* add_i4(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            int* pNewChild = pChildGroup->mutable_i4();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        int* add_int(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            int* pNewChild = pChildGroup->mutable_int();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        unsignedByte* add_ui1(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            unsignedByte* pNewChild = pChildGroup->mutable_ui1();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        unsignedShort* add_ui2(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            unsignedShort* pNewChild = pChildGroup->mutable_ui2();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        unsignedInt* add_ui4(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            unsignedInt* pNewChild = pChildGroup->mutable_ui4();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        unsignedInt* add_uint(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            unsignedInt* pNewChild = pChildGroup->mutable_uint();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        float* add_r4(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            float* pNewChild = pChildGroup->mutable_r4();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        double* add_r8(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            double* pNewChild = pChildGroup->mutable_r8();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        decimal* add_decimal(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            decimal* pNewChild = pChildGroup->mutable_decimal();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        string* add_bstr(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            string* pNewChild = pChildGroup->mutable_bstr();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        dateTime* add_date(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            dateTime* pNewChild = pChildGroup->mutable_date();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        boolean* add_bool(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            boolean* pNewChild = pChildGroup->mutable_bool();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ST_Error* add_error(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ST_Error* pNewChild = pChildGroup->mutable_error();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        ST_Cy* add_cy(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            ST_Cy* pNewChild = pChildGroup->mutable_cy();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

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
    
            
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_lBounds_attr << \\\;
_outStream << _attrName << \=\\ << m_uBounds_attr << \\\;
m_baseType_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_variant())
            {
                (*iter)->toXml(variant, _outStream);
            }
            else if ((*iter)->has_i1())
            {
                _outStream << \<i1>\ << (*iter) << \</i1>\;
            }
            else if ((*iter)->has_i2())
            {
                _outStream << \<i2>\ << (*iter) << \</i2>\;
            }
            else if ((*iter)->has_i4())
            {
                _outStream << \<i4>\ << (*iter) << \</i4>\;
            }
            else if ((*iter)->has_int())
            {
                _outStream << \<int>\ << (*iter) << \</int>\;
            }
            else if ((*iter)->has_ui1())
            {
                _outStream << \<ui1>\ << (*iter) << \</ui1>\;
            }
            else if ((*iter)->has_ui2())
            {
                _outStream << \<ui2>\ << (*iter) << \</ui2>\;
            }
            else if ((*iter)->has_ui4())
            {
                _outStream << \<ui4>\ << (*iter) << \</ui4>\;
            }
            else if ((*iter)->has_uint())
            {
                _outStream << \<uint>\ << (*iter) << \</uint>\;
            }
            else if ((*iter)->has_r4())
            {
                _outStream << \<r4>\ << (*iter) << \</r4>\;
            }
            else if ((*iter)->has_r8())
            {
                _outStream << \<r8>\ << (*iter) << \</r8>\;
            }
            else if ((*iter)->has_decimal())
            {
                _outStream << \<decimal>\ << (*iter) << \</decimal>\;
            }
            else if ((*iter)->has_bstr())
            {
                _outStream << \<bstr>\ << (*iter) << \</bstr>\;
            }
            else if ((*iter)->has_date())
            {
                _outStream << \<date>\ << (*iter) << \</date>\;
            }
            else if ((*iter)->has_bool())
            {
                _outStream << \<bool>\ << (*iter) << \</bool>\;
            }
            else if ((*iter)->has_error())
            {
                _outStream << \<error>\ << (*iter)->toString() << \</error>\;
            }
            else if ((*iter)->has_cy())
            {
                _outStream << \<cy>\ << (*iter)->toString() << \</cy>\;
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Array& default_instance(){

    if (!CT_Array::default_instance_)
    {
        CT_Array::default_instance_ = new CT_Array();
    }
    return *CT_Array::default_instance_;

        }
        bool has_lBounds_attr(){

            return m_has_lBounds_attr;
        
        }
        void set_lBounds_attr(const int& _lBounds_attr ){

        m_has_lBounds_attr = true;
        m_lBounds_attr = _lBounds_attr;
        
        }
        const int& lBounds_attr(){

            return type: \int\nname: \m_lBounds_attr\n;
        
        }
        bool has_uBounds_attr(){

            return m_has_uBounds_attr;
        
        }
        void set_uBounds_attr(const int& _uBounds_attr ){

        m_has_uBounds_attr = true;
        m_uBounds_attr = _uBounds_attr;
        
        }
        const int& uBounds_attr(){

            return type: \int\nname: \m_uBounds_attr\n;
        
        }
        bool has_baseType_attr(){

            return m_has_baseType_attr;
        
        }
        void set_baseType_attr(const ST_ArrayBaseType& _baseType_attr ){

            m_has_baseType_attr = true;
            m_baseType_attr = new ST_ArrayBaseType(_baseType_attr);
        
        }
        const ST_ArrayBaseType& baseType_attr(){

            if (m_baseType_attr)
            {
                return *m_baseType_attr;
            }
            return ST_ArrayBaseType::default_instance();
        
        }

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
            bool has_variant(){

            return m_has_variant;
        
            }
            CT_Variant* mutable_variant(){

                
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
            const CT_Variant& variant(){

            if (m_variant)
            {
                return *m_variant;
            }
            return CT_Variant::default_instance();
        
            }
            bool has_i1(){

        return m_has_i1;
    
            }
            void set_i1(const byte& _i1 ){

                
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
                byte = _i1;
            
            }
            const byte& i1(){

        return type: yte\nname: \m_i1\n;
    
            }
            bool has_i2(){

        return m_has_i2;
    
            }
            void set_i2(const short& _i2 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
        }
    ;
            
                m_has_i1 = false;
                m_i1.clear();;
            
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
                short = _i2;
            
            }
            const short& i2(){

        return type: \short\nname: \m_i2\n;
    
            }
            bool has_i4(){

        return m_has_i4;
    
            }
            void set_i4(const int& _i4 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
        }
    ;
            
                m_has_i1 = false;
                m_i1.clear();;
            
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
                int = _i4;
            
            }
            const int& i4(){

        return type: \int\nname: \m_i4\n;
    
            }
            bool has_int(){

        return m_has_int;
    
            }
            void set_int(const int& _int ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
        }
    ;
            
                m_has_i1 = false;
                m_i1.clear();;
            
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
                int = _int;
            
            }
            const int& int(){

        return type: \int\nname: \m_int\n;
    
            }
            bool has_ui1(){

        return m_has_ui1;
    
            }
            void set_ui1(const unsignedByte& _ui1 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                unsignedByte = _ui1;
            
            }
            const unsignedByte& ui1(){

        return type: \unsignedByte\nname: \m_ui1\n;
    
            }
            bool has_ui2(){

        return m_has_ui2;
    
            }
            void set_ui2(const unsignedShort& _ui2 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                unsignedShort = _ui2;
            
            }
            const unsignedShort& ui2(){

        return type: \unsignedShort\nname: \m_ui2\n;
    
            }
            bool has_ui4(){

        return m_has_ui4;
    
            }
            void set_ui4(const unsignedInt& _ui4 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                unsignedInt = _ui4;
            
            }
            const unsignedInt& ui4(){

        return type: \unsignedInt\nname: \m_ui4\n;
    
            }
            bool has_uint(){

        return m_has_uint;
    
            }
            void set_uint(const unsignedInt& _uint ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                unsignedInt = _uint;
            
            }
            const unsignedInt& uint(){

        return type: \unsignedInt\nname: \m_uint\n;
    
            }
            bool has_r4(){

        return m_has_r4;
    
            }
            void set_r4(const float& _r4 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                float = _r4;
            
            }
            const float& r4(){

        return type: loat\nname: \m_r4\n;
    
            }
            bool has_r8(){

        return m_has_r8;
    
            }
            void set_r8(const double& _r8 ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                double = _r8;
            
            }
            const double& r8(){

        return type: \double\nname: \m_r8\n;
    
            }
            bool has_decimal(){

        return m_has_decimal;
    
            }
            void set_decimal(const decimal& _decimal ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                decimal = _decimal;
            
            }
            const decimal& decimal(){

        return type: \decimal\nname: \m_decimal\n;
    
            }
            bool has_bstr(){

        return m_has_bstr;
    
            }
            void set_bstr(const string& _bstr ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                string = _bstr;
            
            }
            const string& bstr(){

        return type: \string\nname: \m_bstr\n;
    
            }
            bool has_date(){

        return m_has_date;
    
            }
            void set_date(const dateTime& _date ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                dateTime = _date;
            
            }
            const dateTime& date(){

        return type: \dateTime\nname: \m_date\n;
    
            }
            bool has_bool(){

        return m_has_bool;
    
            }
            void set_bool(const boolean& _bool ){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
                boolean = _bool;
            
            }
            const boolean& bool(){

        return type: oolean\nname: \m_bool\n;
    
            }
            bool has_error(){

            return m_has_error;
        
            }
            ST_Error* mutable_error(){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
            const ST_Error& error(){

            if (m_error)
            {
                return *m_error;
            }
            return ST_Error::default_instance();
        
            }
            bool has_cy(){

            return m_has_cy;
        
            }
            ST_Cy* mutable_cy(){

                
                m_has_variant = false;
                
        if (m_variant)
        {
            delete m_variant;
            m_variant = NULL;
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
            const ST_Cy& cy(){

            if (m_cy)
            {
                return *m_cy;
            }
            return ST_Cy::default_instance();
        
            }

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
        bool has_variant(){

            return m_has_variant;
        
        }
        CT_Variant* mutable_variant(){

                
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
        const CT_Variant& variant(){

            if (m_variant)
            {
                return *m_variant;
            }
            return CT_Variant::default_instance();
        
        }
        bool has_vector(){

            return m_has_vector;
        
        }
        CT_Vector* mutable_vector(){

                
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
                byte = _i1;
            
        }
        const byte& i1(){

        return type: yte\nname: \m_i1\n;
    
        }
        bool has_i2(){

        return m_has_i2;
    
        }
        void set_i2(const short& _i2 ){

                
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
    
        _outStream << \>\;
    
                if (m_has_variant)
                {
                    m_variant->toXml(variant, _outStream);;
                }
            
                if (m_has_vector)
                {
                    m_variant->toXml(vector, _outStream);;
                }
            
                if (m_has_array)
                {
                    m_variant->toXml(array, _outStream);;
                }
            
                if (m_has_blob)
                {
                    _outStream << \<blob>\ << m_variant << \</blob>\;;
                }
            
                if (m_has_oblob)
                {
                    _outStream << \<oblob>\ << m_variant << \</oblob>\;;
                }
            
                if (m_has_empty)
                {
                    m_variant->toXml(empty, _outStream);;
                }
            
                if (m_has_null)
                {
                    m_variant->toXml(null, _outStream);;
                }
            
                if (m_has_i1)
                {
                    _outStream << \<i1>\ << m_variant << \</i1>\;;
                }
            
                if (m_has_i2)
                {
                    _outStream << \<i2>\ << m_variant << \</i2>\;;
                }
            
                if (m_has_i4)
                {
                    _outStream << \<i4>\ << m_variant << \</i4>\;;
                }
            
                if (m_has_i8)
                {
                    _outStream << \<i8>\ << m_variant << \</i8>\;;
                }
            
                if (m_has_int)
                {
                    _outStream << \<int>\ << m_variant << \</int>\;;
                }
            
                if (m_has_ui1)
                {
                    _outStream << \<ui1>\ << m_variant << \</ui1>\;;
                }
            
                if (m_has_ui2)
                {
                    _outStream << \<ui2>\ << m_variant << \</ui2>\;;
                }
            
                if (m_has_ui4)
                {
                    _outStream << \<ui4>\ << m_variant << \</ui4>\;;
                }
            
                if (m_has_ui8)
                {
                    _outStream << \<ui8>\ << m_variant << \</ui8>\;;
                }
            
                if (m_has_uint)
                {
                    _outStream << \<uint>\ << m_variant << \</uint>\;;
                }
            
                if (m_has_r4)
                {
                    _outStream << \<r4>\ << m_variant << \</r4>\;;
                }
            
                if (m_has_r8)
                {
                    _outStream << \<r8>\ << m_variant << \</r8>\;;
                }
            
                if (m_has_decimal)
                {
                    _outStream << \<decimal>\ << m_variant << \</decimal>\;;
                }
            
                if (m_has_lpstr)
                {
                    _outStream << \<lpstr>\ << m_variant << \</lpstr>\;;
                }
            
                if (m_has_lpwstr)
                {
                    _outStream << \<lpwstr>\ << m_variant << \</lpwstr>\;;
                }
            
                if (m_has_bstr)
                {
                    _outStream << \<bstr>\ << m_variant << \</bstr>\;;
                }
            
                if (m_has_date)
                {
                    _outStream << \<date>\ << m_variant << \</date>\;;
                }
            
                if (m_has_filetime)
                {
                    _outStream << \<filetime>\ << m_variant << \</filetime>\;;
                }
            
                if (m_has_bool)
                {
                    _outStream << \<bool>\ << m_variant << \</bool>\;;
                }
            
                if (m_has_cy)
                {
                    _outStream << \<cy>\ << m_variant->toString() << \</cy>\;;
                }
            
                if (m_has_error)
                {
                    _outStream << \<error>\ << m_variant->toString() << \</error>\;;
                }
            
                if (m_has_stream)
                {
                    _outStream << \<stream>\ << m_variant << \</stream>\;;
                }
            
                if (m_has_ostream)
                {
                    _outStream << \<ostream>\ << m_variant << \</ostream>\;;
                }
            
                if (m_has_storage)
                {
                    _outStream << \<storage>\ << m_variant << \</storage>\;;
                }
            
                if (m_has_ostorage)
                {
                    _outStream << \<ostorage>\ << m_variant << \</ostorage>\;;
                }
            
                if (m_has_vstream)
                {
                    m_variant->toXml(vstream, _outStream);;
                }
            
                if (m_has_clsid)
                {
                    _outStream << \<clsid>\ << m_variant->toString() << \</clsid>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Variant& default_instance(){

    if (!CT_Variant::default_instance_)
    {
        CT_Variant::default_instance_ = new CT_Variant();
    }
    return *CT_Variant::default_instance_;

        }

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
        void clear(){

        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Vstream& default_instance(){

    if (!CT_Vstream::default_instance_)
    {
        CT_Vstream::default_instance_ = new CT_Vstream();
    }
    return *CT_Vstream::default_instance_;

        }

    private:
        static CT_Vstream* default_instance_ ;

    }

    class variant : public CT_Variant : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Variant::toXml(ariant\, _outStream);
    
        }

    private:

    }

    class vector : public CT_Vector : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Vector::toXml(ector\, _outStream);
    
        }

    private:

    }

    class array : public CT_Array : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Array::toXml(rray\, _outStream);
    
        }

    private:

    }

    class blob : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ){

        base64Binary::toXml(lob\, _outStream);
    
        }

    private:

    }

    class oblob : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ){

        base64Binary::toXml(\oblob\, _outStream);
    
        }

    private:

    }

    class empty : public CT_Empty : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Empty::toXml(\empty\, _outStream);
    
        }

    private:

    }

    class null : public CT_Null : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Null::toXml(
ull\, _outStream);
    
        }

    private:

    }

    class i1 : public byte : public Element{
    public:
        void toXml(ostream& _outStream ){

        byte::toXml(\i1\, _outStream);
    
        }

    private:

    }

    class i2 : public short : public Element{
    public:
        void toXml(ostream& _outStream ){

        short::toXml(\i2\, _outStream);
    
        }

    private:

    }

    class i4 : public int : public Element{
    public:
        void toXml(ostream& _outStream ){

        int::toXml(\i4\, _outStream);
    
        }

    private:

    }

    class i8 : public long : public Element{
    public:
        void toXml(ostream& _outStream ){

        long::toXml(\i8\, _outStream);
    
        }

    private:

    }

    class int : public int : public Element{
    public:
        void toXml(ostream& _outStream ){

        int::toXml(\int\, _outStream);
    
        }

    private:

    }

    class ui1 : public unsignedByte : public Element{
    public:
        void toXml(ostream& _outStream ){

        unsignedByte::toXml(\ui1\, _outStream);
    
        }

    private:

    }

    class ui2 : public unsignedShort : public Element{
    public:
        void toXml(ostream& _outStream ){

        unsignedShort::toXml(\ui2\, _outStream);
    
        }

    private:

    }

    class ui4 : public unsignedInt : public Element{
    public:
        void toXml(ostream& _outStream ){

        unsignedInt::toXml(\ui4\, _outStream);
    
        }

    private:

    }

    class ui8 : public unsignedLong : public Element{
    public:
        void toXml(ostream& _outStream ){

        unsignedLong::toXml(\ui8\, _outStream);
    
        }

    private:

    }

    class uint : public unsignedInt : public Element{
    public:
        void toXml(ostream& _outStream ){

        unsignedInt::toXml(\uint\, _outStream);
    
        }

    private:

    }

    class r4 : public float : public Element{
    public:
        void toXml(ostream& _outStream ){

        float::toXml(4\, _outStream);
    
        }

    private:

    }

    class r8 : public double : public Element{
    public:
        void toXml(ostream& _outStream ){

        double::toXml(8\, _outStream);
    
        }

    private:

    }

    class decimal : public decimal : public Element{
    public:
        void toXml(ostream& _outStream ){

        decimal::toXml(\decimal\, _outStream);
    
        }

    private:

    }

    class lpstr : public string : public Element{
    public:
        void toXml(ostream& _outStream ){

        string::toXml(\lpstr\, _outStream);
    
        }

    private:

    }

    class lpwstr : public string : public Element{
    public:
        void toXml(ostream& _outStream ){

        string::toXml(\lpwstr\, _outStream);
    
        }

    private:

    }

    class bstr : public string : public Element{
    public:
        void toXml(ostream& _outStream ){

        string::toXml(str\, _outStream);
    
        }

    private:

    }

    class date : public dateTime : public Element{
    public:
        void toXml(ostream& _outStream ){

        dateTime::toXml(\date\, _outStream);
    
        }

    private:

    }

    class filetime : public dateTime : public Element{
    public:
        void toXml(ostream& _outStream ){

        dateTime::toXml(iletime\, _outStream);
    
        }

    private:

    }

    class bool : public boolean : public Element{
    public:
        void toXml(ostream& _outStream ){

        boolean::toXml(ool\, _outStream);
    
        }

    private:

    }

    class cy : public ST_Cy : public Element{
    public:
        void toXml(ostream& _outStream ){

        ST_Cy::toXml(\cy\, _outStream);
    
        }

    private:

    }

    class error : public ST_Error : public Element{
    public:
        void toXml(ostream& _outStream ){

        ST_Error::toXml(\error\, _outStream);
    
        }

    private:

    }

    class stream : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ){

        base64Binary::toXml(\stream\, _outStream);
    
        }

    private:

    }

    class ostream : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ){

        base64Binary::toXml(\ostream\, _outStream);
    
        }

    private:

    }

    class storage : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ){

        base64Binary::toXml(\storage\, _outStream);
    
        }

    private:

    }

    class ostorage : public base64Binary : public Element{
    public:
        void toXml(ostream& _outStream ){

        base64Binary::toXml(\ostorage\, _outStream);
    
        }

    private:

    }

    class vstream : public CT_Vstream : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Vstream::toXml(stream\, _outStream);
    
        }

    private:

    }

    class clsid : public ns_s::ST_Guid : public Element{
    public:
        void toXml(ostream& _outStream ){

        ns_s::ST_Guid::toXml(\clsid\, _outStream);
    
        }

    private:

    }

}