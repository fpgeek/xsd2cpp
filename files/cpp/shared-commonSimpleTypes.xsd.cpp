#include "shared-commonSimpleTypes_xsd.h"
#include <stdlib.h>
#include <sstream>
namespace ns_s{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_Lang : public XSD::SimpleType{
    public:
        ST_Lang(){
            m_has_string = false
            m_string = 

        }
        ST_Lang(const XSD::string& _string ){
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
        const ST_Lang& default_instance(){

    if (!ST_Lang::default_instance_)
    {
        ST_Lang::default_instance_ = new ST_Lang();
    }
    return *ST_Lang::default_instance_;

        }

    private:
        static ST_Lang* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_HexColorRGB : public XSD::SimpleType{
    public:
        ST_HexColorRGB(){
            m_has_hexBinary = false
            m_hexBinary = 0

        }
        ST_HexColorRGB(const XSD::hexBinary& _hexBinary ){
            m_has_hexBinary = true
            m_hexBinary = _hexBinary

        }
        bool has_hexBinary(){

    return m_has_hexBinary;

        }
        void set_hexBinary(const hexBinary& _hexBinary ){

    m_has_hexBinary = true;
    m_hexBinary = _hexBinary;

        }
        const hexBinary& hexBinary(){

    return m_hexBinary;

        }
        void clear(){

    m_has_hexBinary = false;
    m_hexBinary = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_hexBinary)
    {
        _outStream << _attrName << \=\\ << m_hexBinary << \\\;;
    }

        }
        const ST_HexColorRGB& default_instance(){

    if (!ST_HexColorRGB::default_instance_)
    {
        ST_HexColorRGB::default_instance_ = new ST_HexColorRGB();
    }
    return *ST_HexColorRGB::default_instance_;

        }

    private:
        static ST_HexColorRGB* default_instance_ ;
        bool m_has_hexBinary ;
        hexBinary m_hexBinary ;

    }

    class ST_Panose : public XSD::SimpleType{
    public:
        ST_Panose(){
            m_has_hexBinary = false
            m_hexBinary = 0

        }
        ST_Panose(const XSD::hexBinary& _hexBinary ){
            m_has_hexBinary = true
            m_hexBinary = _hexBinary

        }
        bool has_hexBinary(){

    return m_has_hexBinary;

        }
        void set_hexBinary(const hexBinary& _hexBinary ){

    m_has_hexBinary = true;
    m_hexBinary = _hexBinary;

        }
        const hexBinary& hexBinary(){

    return m_hexBinary;

        }
        void clear(){

    m_has_hexBinary = false;
    m_hexBinary = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_hexBinary)
    {
        _outStream << _attrName << \=\\ << m_hexBinary << \\\;;
    }

        }
        const ST_Panose& default_instance(){

    if (!ST_Panose::default_instance_)
    {
        ST_Panose::default_instance_ = new ST_Panose();
    }
    return *ST_Panose::default_instance_;

        }

    private:
        static ST_Panose* default_instance_ ;
        bool m_has_hexBinary ;
        hexBinary m_hexBinary ;

    }

    class ST_CalendarType : public XSD::SimpleType{
    public:
        ST_CalendarType(){
            m_has_type = false

        }
        ST_CalendarType(const Type _type ){
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

        return ST_CalendarType::TypeStrList[m_type];
    
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
        const ST_CalendarType& default_instance(){

    if (!ST_CalendarType::default_instance_)
    {
        ST_CalendarType::default_instance_ = new ST_CalendarType();
    }
    return *ST_CalendarType::default_instance_;

        }
        enum Type{
            _gregorian_ = 1,
            _gregorianUs_,
            _gregorianMeFrench_,
            _gregorianArabic_,
            _hijri_,
            _hebrew_,
            _taiwan_,
            _japan_,
            _thai_,
            _korea_,
            _saka_,
            _gregorianXlitEnglish_,
            _gregorianXlitFrench_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_CalendarType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AlgClass : public XSD::SimpleType{
    public:
        ST_AlgClass(){
            m_has_type = false

        }
        ST_AlgClass(const Type _type ){
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

        return ST_AlgClass::TypeStrList[m_type];
    
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
        const ST_AlgClass& default_instance(){

    if (!ST_AlgClass::default_instance_)
    {
        ST_AlgClass::default_instance_ = new ST_AlgClass();
    }
    return *ST_AlgClass::default_instance_;

        }
        enum Type{
            _hash_ = 1,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_AlgClass* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CryptProv : public XSD::SimpleType{
    public:
        ST_CryptProv(){
            m_has_type = false

        }
        ST_CryptProv(const Type _type ){
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

        return ST_CryptProv::TypeStrList[m_type];
    
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
        const ST_CryptProv& default_instance(){

    if (!ST_CryptProv::default_instance_)
    {
        ST_CryptProv::default_instance_ = new ST_CryptProv();
    }
    return *ST_CryptProv::default_instance_;

        }
        enum Type{
            _rsaAES_ = 1,
            _rsaFull_,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_CryptProv* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AlgType : public XSD::SimpleType{
    public:
        ST_AlgType(){
            m_has_type = false

        }
        ST_AlgType(const Type _type ){
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

        return ST_AlgType::TypeStrList[m_type];
    
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
        const ST_AlgType& default_instance(){

    if (!ST_AlgType::default_instance_)
    {
        ST_AlgType::default_instance_ = new ST_AlgType();
    }
    return *ST_AlgType::default_instance_;

        }
        enum Type{
            _typeAny_ = 1,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_AlgType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ColorType : public XSD::SimpleType{
    public:
        ST_ColorType(){
            m_has_string = false
            m_string = 

        }
        ST_ColorType(const XSD::string& _string ){
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
        const ST_ColorType& default_instance(){

    if (!ST_ColorType::default_instance_)
    {
        ST_ColorType::default_instance_ = new ST_ColorType();
    }
    return *ST_ColorType::default_instance_;

        }

    private:
        static ST_ColorType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_Guid : public XSD::SimpleType{
    public:
        ST_Guid(){
            m_has_token = false
            m_token = 

        }
        ST_Guid(const XSD::token& _token ){
            m_has_token = true
            m_token = _token

        }
        bool has_token(){

    return m_has_token;

        }
        void set_token(const token& _token ){

    m_has_token = true;
    m_token = _token;

        }
        const token& token(){

    return m_token;

        }
        void clear(){

    m_has_token = false;
    m_token.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_token)
    {
        _outStream << _attrName << \=\\ << m_token << \\\;;
    }

        }
        const ST_Guid& default_instance(){

    if (!ST_Guid::default_instance_)
    {
        ST_Guid::default_instance_ = new ST_Guid();
    }
    return *ST_Guid::default_instance_;

        }

    private:
        static ST_Guid* default_instance_ ;
        bool m_has_token ;
        token m_token ;

    }

    class ST_OnOff : public XSD::SimpleType{
    public:
        bool has_boolean(){

            return m_has_boolean;
        
        }
        void set_boolean(const boolean& _boolean ){

            clear_ST_OnOff1();
            m_has_boolean = true;
            m_boolean = _boolean;
        
        }
        const boolean& boolean(){

            return m_boolean;
        
        }
        bool has_ST_OnOff1(){

            return m_has_ST_OnOff1;
        
        }
        ST_OnOff1* mutable_ST_OnOff1(){

            clear_boolean();
            m_has_ST_OnOff1 = true;
            if (!m_ST_OnOff1)
            {
                m_ST_OnOff1 = new ST_OnOff1();
            }
            return m_ST_OnOff1;
        
        }
        const ST_OnOff1& ST_OnOff1(){

            if (m_ST_OnOff1)
            {
                return *m_ST_OnOff1;
            }

            return ST_OnOff1::default_instance();
        
        }
        void clear(){
clear_boolean();
clear_ST_OnOff1();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_boolean)
        {
            _outStream << _attrName << \=\\ << XSD::BooleanStr(m_boolean) << \\\;;
            return;
        }

        if (m_has_ST_OnOff1)
        {
            m_ST_OnOff1->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_OnOff& default_instance(){

    if (!ST_OnOff::default_instance_)
    {
        ST_OnOff::default_instance_ = new ST_OnOff();
    }
    return *ST_OnOff::default_instance_;

        }

    private:
        void clear_boolean(){

            m_has_boolean = false;
            m_boolean = false;
        
        }
        void clear_ST_OnOff1(){

            m_has_ST_OnOff1 = false;
            if (m_ST_OnOff1)
            {
                delete m_ST_OnOff1;
                m_ST_OnOff1 = NULL;
            }
        
        }
        bool m_has_boolean ;
        boolean m_boolean ;
        bool m_has_ST_OnOff1 ;
        ST_OnOff1* m_ST_OnOff1 ;
        static ST_OnOff* default_instance_ ;

    }

    class ST_OnOff1 : public XSD::SimpleType{
    public:
        ST_OnOff1(){
            m_has_type = false

        }
        ST_OnOff1(const Type _type ){
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

        return ST_OnOff1::TypeStrList[m_type];
    
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
        const ST_OnOff1& default_instance(){

    if (!ST_OnOff1::default_instance_)
    {
        ST_OnOff1::default_instance_ = new ST_OnOff1();
    }
    return *ST_OnOff1::default_instance_;

        }
        enum Type{
            _on_ = 1,
            _off_
        }

    private:
        static const string TypeStrList [];
        static ST_OnOff1* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_String : public XSD::SimpleType{
    public:
        ST_String(){
            m_has_string = false
            m_string = 

        }
        ST_String(const XSD::string& _string ){
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
        const ST_String& default_instance(){

    if (!ST_String::default_instance_)
    {
        ST_String::default_instance_ = new ST_String();
    }
    return *ST_String::default_instance_;

        }

    private:
        static ST_String* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_XmlName : public XSD::SimpleType{
    public:
        ST_XmlName(){
            m_has_NCName = false
            m_NCName = 

        }
        ST_XmlName(const XSD::NCName& _NCName ){
            m_has_NCName = true
            m_NCName = _NCName

        }
        bool has_NCName(){

    return m_has_NCName;

        }
        void set_NCName(const NCName& _NCName ){

    m_has_NCName = true;
    m_NCName = _NCName;

        }
        const NCName& NCName(){

    return m_NCName;

        }
        void clear(){

    m_has_NCName = false;
    m_NCName.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_NCName)
    {
        _outStream << _attrName << \=\\ << m_NCName << \\\;;
    }

        }
        const ST_XmlName& default_instance(){

    if (!ST_XmlName::default_instance_)
    {
        ST_XmlName::default_instance_ = new ST_XmlName();
    }
    return *ST_XmlName::default_instance_;

        }

    private:
        static ST_XmlName* default_instance_ ;
        bool m_has_NCName ;
        NCName m_NCName ;

    }

    class ST_TrueFalse : public XSD::SimpleType{
    public:
        ST_TrueFalse(){
            m_has_type = false

        }
        ST_TrueFalse(const Type _type ){
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

        return ST_TrueFalse::TypeStrList[m_type];
    
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
        const ST_TrueFalse& default_instance(){

    if (!ST_TrueFalse::default_instance_)
    {
        ST_TrueFalse::default_instance_ = new ST_TrueFalse();
    }
    return *ST_TrueFalse::default_instance_;

        }
        enum Type{
            _t_ = 1,
            _f_,
            _true_,
            _false_
        }

    private:
        static const string TypeStrList [];
        static ST_TrueFalse* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TrueFalseBlank : public XSD::SimpleType{
    public:
        ST_TrueFalseBlank(){
            m_has_type = false

        }
        ST_TrueFalseBlank(const Type _type ){
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

        return ST_TrueFalseBlank::TypeStrList[m_type];
    
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
        const ST_TrueFalseBlank& default_instance(){

    if (!ST_TrueFalseBlank::default_instance_)
    {
        ST_TrueFalseBlank::default_instance_ = new ST_TrueFalseBlank();
    }
    return *ST_TrueFalseBlank::default_instance_;

        }
        enum Type{
            _t_ = 1,
            _f_,
            _true_,
            _false_,
            __,
            _True_,
            _False_
        }

    private:
        static const string TypeStrList [];
        static ST_TrueFalseBlank* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_UnsignedDecimalNumber : public XSD::SimpleType{
    public:
        ST_UnsignedDecimalNumber(){
            m_has_unsignedLong = false
            m_unsignedLong = 0

        }
        ST_UnsignedDecimalNumber(const XSD::unsignedLong& _unsignedLong ){
            m_has_unsignedLong = true
            m_unsignedLong = _unsignedLong

        }
        bool has_unsignedLong(){

    return m_has_unsignedLong;

        }
        void set_unsignedLong(const unsignedLong& _unsignedLong ){

    m_has_unsignedLong = true;
    m_unsignedLong = _unsignedLong;

        }
        const unsignedLong& unsignedLong(){

    return m_unsignedLong;

        }
        void clear(){

    m_has_unsignedLong = false;
    m_unsignedLong = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedLong)
    {
        _outStream << _attrName << \=\\ << m_unsignedLong << \\\;;
    }

        }
        const ST_UnsignedDecimalNumber& default_instance(){

    if (!ST_UnsignedDecimalNumber::default_instance_)
    {
        ST_UnsignedDecimalNumber::default_instance_ = new ST_UnsignedDecimalNumber();
    }
    return *ST_UnsignedDecimalNumber::default_instance_;

        }

    private:
        static ST_UnsignedDecimalNumber* default_instance_ ;
        bool m_has_unsignedLong ;
        unsignedLong m_unsignedLong ;

    }

    class ST_TwipsMeasure : public XSD::SimpleType{
    public:
        bool has_ST_UnsignedDecimalNumber(){

            return m_has_ST_UnsignedDecimalNumber;
        
        }
        ST_UnsignedDecimalNumber* mutable_ST_UnsignedDecimalNumber(){

            clear_ST_PositiveUniversalMeasure();
            m_has_ST_UnsignedDecimalNumber = true;
            if (!m_ST_UnsignedDecimalNumber)
            {
                m_ST_UnsignedDecimalNumber = new ST_UnsignedDecimalNumber();
            }
            return m_ST_UnsignedDecimalNumber;
        
        }
        const ST_UnsignedDecimalNumber& ST_UnsignedDecimalNumber(){

            if (m_ST_UnsignedDecimalNumber)
            {
                return *m_ST_UnsignedDecimalNumber;
            }

            return ST_UnsignedDecimalNumber::default_instance();
        
        }
        bool has_ST_PositiveUniversalMeasure(){

            return m_has_ST_PositiveUniversalMeasure;
        
        }
        ST_PositiveUniversalMeasure* mutable_ST_PositiveUniversalMeasure(){

            clear_ST_UnsignedDecimalNumber();
            m_has_ST_PositiveUniversalMeasure = true;
            if (!m_ST_PositiveUniversalMeasure)
            {
                m_ST_PositiveUniversalMeasure = new ST_PositiveUniversalMeasure();
            }
            return m_ST_PositiveUniversalMeasure;
        
        }
        const ST_PositiveUniversalMeasure& ST_PositiveUniversalMeasure(){

            if (m_ST_PositiveUniversalMeasure)
            {
                return *m_ST_PositiveUniversalMeasure;
            }

            return ST_PositiveUniversalMeasure::default_instance();
        
        }
        void clear(){
clear_ST_UnsignedDecimalNumber();
clear_ST_PositiveUniversalMeasure();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_UnsignedDecimalNumber)
        {
            m_ST_UnsignedDecimalNumber->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_PositiveUniversalMeasure)
        {
            m_ST_PositiveUniversalMeasure->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_TwipsMeasure& default_instance(){

    if (!ST_TwipsMeasure::default_instance_)
    {
        ST_TwipsMeasure::default_instance_ = new ST_TwipsMeasure();
    }
    return *ST_TwipsMeasure::default_instance_;

        }

    private:
        void clear_ST_UnsignedDecimalNumber(){

            m_has_ST_UnsignedDecimalNumber = false;
            if (m_ST_UnsignedDecimalNumber)
            {
                delete m_ST_UnsignedDecimalNumber;
                m_ST_UnsignedDecimalNumber = NULL;
            }
        
        }
        void clear_ST_PositiveUniversalMeasure(){

            m_has_ST_PositiveUniversalMeasure = false;
            if (m_ST_PositiveUniversalMeasure)
            {
                delete m_ST_PositiveUniversalMeasure;
                m_ST_PositiveUniversalMeasure = NULL;
            }
        
        }
        bool m_has_ST_UnsignedDecimalNumber ;
        ST_UnsignedDecimalNumber* m_ST_UnsignedDecimalNumber ;
        bool m_has_ST_PositiveUniversalMeasure ;
        ST_PositiveUniversalMeasure* m_ST_PositiveUniversalMeasure ;
        static ST_TwipsMeasure* default_instance_ ;

    }

    class ST_VerticalAlignRun : public XSD::SimpleType{
    public:
        ST_VerticalAlignRun(){
            m_has_type = false

        }
        ST_VerticalAlignRun(const Type _type ){
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

        return ST_VerticalAlignRun::TypeStrList[m_type];
    
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
        const ST_VerticalAlignRun& default_instance(){

    if (!ST_VerticalAlignRun::default_instance_)
    {
        ST_VerticalAlignRun::default_instance_ = new ST_VerticalAlignRun();
    }
    return *ST_VerticalAlignRun::default_instance_;

        }
        enum Type{
            _baseline_ = 1,
            _superscript_,
            _subscript_
        }

    private:
        static const string TypeStrList [];
        static ST_VerticalAlignRun* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Xstring : public XSD::SimpleType{
    public:
        ST_Xstring(){
            m_has_string = false
            m_string = 

        }
        ST_Xstring(const XSD::string& _string ){
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
        const ST_Xstring& default_instance(){

    if (!ST_Xstring::default_instance_)
    {
        ST_Xstring::default_instance_ = new ST_Xstring();
    }
    return *ST_Xstring::default_instance_;

        }

    private:
        static ST_Xstring* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_XAlign : public XSD::SimpleType{
    public:
        ST_XAlign(){
            m_has_type = false

        }
        ST_XAlign(const Type _type ){
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

        return ST_XAlign::TypeStrList[m_type];
    
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
        const ST_XAlign& default_instance(){

    if (!ST_XAlign::default_instance_)
    {
        ST_XAlign::default_instance_ = new ST_XAlign();
    }
    return *ST_XAlign::default_instance_;

        }
        enum Type{
            _left_ = 1,
            _center_,
            _right_,
            _inside_,
            _outside_
        }

    private:
        static const string TypeStrList [];
        static ST_XAlign* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_YAlign : public XSD::SimpleType{
    public:
        ST_YAlign(){
            m_has_type = false

        }
        ST_YAlign(const Type _type ){
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

        return ST_YAlign::TypeStrList[m_type];
    
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
        const ST_YAlign& default_instance(){

    if (!ST_YAlign::default_instance_)
    {
        ST_YAlign::default_instance_ = new ST_YAlign();
    }
    return *ST_YAlign::default_instance_;

        }
        enum Type{
            _inline_ = 1,
            _top_,
            _center_,
            _bottom_,
            _inside_,
            _outside_
        }

    private:
        static const string TypeStrList [];
        static ST_YAlign* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConformanceClass : public XSD::SimpleType{
    public:
        ST_ConformanceClass(){
            m_has_type = false

        }
        ST_ConformanceClass(const Type _type ){
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

        return ST_ConformanceClass::TypeStrList[m_type];
    
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
        const ST_ConformanceClass& default_instance(){

    if (!ST_ConformanceClass::default_instance_)
    {
        ST_ConformanceClass::default_instance_ = new ST_ConformanceClass();
    }
    return *ST_ConformanceClass::default_instance_;

        }
        enum Type{
            _strict_ = 1,
            _transitional_
        }

    private:
        static const string TypeStrList [];
        static ST_ConformanceClass* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_UniversalMeasure : public XSD::SimpleType{
    public:
        ST_UniversalMeasure(){
            m_has_string = false
            m_string = 

        }
        ST_UniversalMeasure(const XSD::string& _string ){
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
        const ST_UniversalMeasure& default_instance(){

    if (!ST_UniversalMeasure::default_instance_)
    {
        ST_UniversalMeasure::default_instance_ = new ST_UniversalMeasure();
    }
    return *ST_UniversalMeasure::default_instance_;

        }

    private:
        static ST_UniversalMeasure* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_PositiveUniversalMeasure : public ST_UniversalMeasure{
    public:
        ST_PositiveUniversalMeasure(const ST_UniversalMeasure& _ST_UniversalMeasure ){

        }

    private:

    }

    class ST_Percentage : public XSD::SimpleType{
    public:
        ST_Percentage(){
            m_has_string = false
            m_string = 

        }
        ST_Percentage(const XSD::string& _string ){
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
        const ST_Percentage& default_instance(){

    if (!ST_Percentage::default_instance_)
    {
        ST_Percentage::default_instance_ = new ST_Percentage();
    }
    return *ST_Percentage::default_instance_;

        }

    private:
        static ST_Percentage* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_FixedPercentage : public ST_Percentage{
    public:
        ST_FixedPercentage(const ST_Percentage& _ST_Percentage ){

        }

    private:

    }

    class ST_PositivePercentage : public ST_Percentage{
    public:
        ST_PositivePercentage(const ST_Percentage& _ST_Percentage ){

        }

    private:

    }

    class ST_PositiveFixedPercentage : public ST_Percentage{
    public:
        ST_PositiveFixedPercentage(const ST_Percentage& _ST_Percentage ){

        }

    private:

    }

}