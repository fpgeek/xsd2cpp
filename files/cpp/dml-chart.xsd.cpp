#include "dml-chart_xsd.h"
#include <stdlib.h>
#include <sstream>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "dml-chartDrawing_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_d{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_LayoutTarget : public XSD::SimpleType{
    public:
        ST_LayoutTarget(){
            m_has_type = false

        }
        ST_LayoutTarget(const Type _type ){
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

        return ST_LayoutTarget::TypeStrList[m_type];
    
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
        const ST_LayoutTarget& default_instance(){

    if (!ST_LayoutTarget::default_instance_)
    {
        ST_LayoutTarget::default_instance_ = new ST_LayoutTarget();
    }
    return *ST_LayoutTarget::default_instance_;

        }
        enum Type{
            _inner_ = 1,
            _outer_
        }

    private:
        static const string TypeStrList [];
        static ST_LayoutTarget* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LayoutMode : public XSD::SimpleType{
    public:
        ST_LayoutMode(){
            m_has_type = false

        }
        ST_LayoutMode(const Type _type ){
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

        return ST_LayoutMode::TypeStrList[m_type];
    
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
        const ST_LayoutMode& default_instance(){

    if (!ST_LayoutMode::default_instance_)
    {
        ST_LayoutMode::default_instance_ = new ST_LayoutMode();
    }
    return *ST_LayoutMode::default_instance_;

        }
        enum Type{
            _edge_ = 1,
            _factor_
        }

    private:
        static const string TypeStrList [];
        static ST_LayoutMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RotX : public XSD::SimpleType{
    public:
        ST_RotX(){
            m_has_byte = false
            m_byte = 

        }
        ST_RotX(const XSD::byte& _byte ){
            m_has_byte = true
            m_byte = _byte

        }
        bool has_byte(){

    return m_has_byte;

        }
        void set_byte(const byte& _byte ){

    m_has_byte = true;
    m_byte = _byte;

        }
        const byte& byte(){

    return m_byte;

        }
        void clear(){

    m_has_byte = false;
    m_byte.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_byte)
    {
        _outStream << _attrName << \=\\ << m_byte << \\\;;
    }

        }
        const ST_RotX& default_instance(){

    if (!ST_RotX::default_instance_)
    {
        ST_RotX::default_instance_ = new ST_RotX();
    }
    return *ST_RotX::default_instance_;

        }

    private:
        static ST_RotX* default_instance_ ;
        bool m_has_byte ;
        byte m_byte ;

    }

    class ST_HPercent : public XSD::SimpleType{
    public:
        bool has_ST_HPercentWithSymbol(){

            return m_has_ST_HPercentWithSymbol;
        
        }
        ST_HPercentWithSymbol* mutable_ST_HPercentWithSymbol(){

            clear_ST_HPercentUShort();
            m_has_ST_HPercentWithSymbol = true;
            if (!m_ST_HPercentWithSymbol)
            {
                m_ST_HPercentWithSymbol = new ST_HPercentWithSymbol();
            }
            return m_ST_HPercentWithSymbol;
        
        }
        const ST_HPercentWithSymbol& ST_HPercentWithSymbol(){

            if (m_ST_HPercentWithSymbol)
            {
                return *m_ST_HPercentWithSymbol;
            }

            return ST_HPercentWithSymbol::default_instance();
        
        }
        bool has_ST_HPercentUShort(){

            return m_has_ST_HPercentUShort;
        
        }
        ST_HPercentUShort* mutable_ST_HPercentUShort(){

            clear_ST_HPercentWithSymbol();
            m_has_ST_HPercentUShort = true;
            if (!m_ST_HPercentUShort)
            {
                m_ST_HPercentUShort = new ST_HPercentUShort();
            }
            return m_ST_HPercentUShort;
        
        }
        const ST_HPercentUShort& ST_HPercentUShort(){

            if (m_ST_HPercentUShort)
            {
                return *m_ST_HPercentUShort;
            }

            return ST_HPercentUShort::default_instance();
        
        }
        void clear(){
clear_ST_HPercentWithSymbol();
clear_ST_HPercentUShort();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_HPercentWithSymbol)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_HPercentUShort)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_HPercent& default_instance(){

    if (!ST_HPercent::default_instance_)
    {
        ST_HPercent::default_instance_ = new ST_HPercent();
    }
    return *ST_HPercent::default_instance_;

        }

    private:
        void clear_ST_HPercentWithSymbol(){

            m_has_ST_HPercentWithSymbol = false;
            if (m_ST_HPercentWithSymbol)
            {
                delete m_ST_HPercentWithSymbol;
                m_ST_HPercentWithSymbol = NULL;
            }
        
        }
        void clear_ST_HPercentUShort(){

            m_has_ST_HPercentUShort = false;
            if (m_ST_HPercentUShort)
            {
                delete m_ST_HPercentUShort;
                m_ST_HPercentUShort = NULL;
            }
        
        }
        bool m_has_ST_HPercentWithSymbol ;
        ST_HPercentWithSymbol* m_ST_HPercentWithSymbol ;
        bool m_has_ST_HPercentUShort ;
        ST_HPercentUShort* m_ST_HPercentUShort ;
        static ST_HPercent* default_instance_ ;

    }

    class ST_HPercentWithSymbol : public XSD::SimpleType{
    public:
        ST_HPercentWithSymbol(){
            m_has_string = false
            m_string = 

        }
        ST_HPercentWithSymbol(const XSD::string& _string ){
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
        const ST_HPercentWithSymbol& default_instance(){

    if (!ST_HPercentWithSymbol::default_instance_)
    {
        ST_HPercentWithSymbol::default_instance_ = new ST_HPercentWithSymbol();
    }
    return *ST_HPercentWithSymbol::default_instance_;

        }

    private:
        static ST_HPercentWithSymbol* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_HPercentUShort : public XSD::SimpleType{
    public:
        ST_HPercentUShort(){
            m_has_unsignedShort = false
            m_unsignedShort = 0

        }
        ST_HPercentUShort(const XSD::unsignedShort& _unsignedShort ){
            m_has_unsignedShort = true
            m_unsignedShort = _unsignedShort

        }
        bool has_unsignedShort(){

    return m_has_unsignedShort;

        }
        void set_unsignedShort(const unsignedShort& _unsignedShort ){

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;

        }
        const unsignedShort& unsignedShort(){

    return m_unsignedShort;

        }
        void clear(){

    m_has_unsignedShort = false;
    m_unsignedShort = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedShort)
    {
        _outStream << _attrName << \=\\ << m_unsignedShort << \\\;;
    }

        }
        const ST_HPercentUShort& default_instance(){

    if (!ST_HPercentUShort::default_instance_)
    {
        ST_HPercentUShort::default_instance_ = new ST_HPercentUShort();
    }
    return *ST_HPercentUShort::default_instance_;

        }

    private:
        static ST_HPercentUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_RotY : public XSD::SimpleType{
    public:
        ST_RotY(){
            m_has_unsignedShort = false
            m_unsignedShort = 0

        }
        ST_RotY(const XSD::unsignedShort& _unsignedShort ){
            m_has_unsignedShort = true
            m_unsignedShort = _unsignedShort

        }
        bool has_unsignedShort(){

    return m_has_unsignedShort;

        }
        void set_unsignedShort(const unsignedShort& _unsignedShort ){

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;

        }
        const unsignedShort& unsignedShort(){

    return m_unsignedShort;

        }
        void clear(){

    m_has_unsignedShort = false;
    m_unsignedShort = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedShort)
    {
        _outStream << _attrName << \=\\ << m_unsignedShort << \\\;;
    }

        }
        const ST_RotY& default_instance(){

    if (!ST_RotY::default_instance_)
    {
        ST_RotY::default_instance_ = new ST_RotY();
    }
    return *ST_RotY::default_instance_;

        }

    private:
        static ST_RotY* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_DepthPercent : public XSD::SimpleType{
    public:
        bool has_ST_DepthPercentWithSymbol(){

            return m_has_ST_DepthPercentWithSymbol;
        
        }
        ST_DepthPercentWithSymbol* mutable_ST_DepthPercentWithSymbol(){

            clear_ST_DepthPercentUShort();
            m_has_ST_DepthPercentWithSymbol = true;
            if (!m_ST_DepthPercentWithSymbol)
            {
                m_ST_DepthPercentWithSymbol = new ST_DepthPercentWithSymbol();
            }
            return m_ST_DepthPercentWithSymbol;
        
        }
        const ST_DepthPercentWithSymbol& ST_DepthPercentWithSymbol(){

            if (m_ST_DepthPercentWithSymbol)
            {
                return *m_ST_DepthPercentWithSymbol;
            }

            return ST_DepthPercentWithSymbol::default_instance();
        
        }
        bool has_ST_DepthPercentUShort(){

            return m_has_ST_DepthPercentUShort;
        
        }
        ST_DepthPercentUShort* mutable_ST_DepthPercentUShort(){

            clear_ST_DepthPercentWithSymbol();
            m_has_ST_DepthPercentUShort = true;
            if (!m_ST_DepthPercentUShort)
            {
                m_ST_DepthPercentUShort = new ST_DepthPercentUShort();
            }
            return m_ST_DepthPercentUShort;
        
        }
        const ST_DepthPercentUShort& ST_DepthPercentUShort(){

            if (m_ST_DepthPercentUShort)
            {
                return *m_ST_DepthPercentUShort;
            }

            return ST_DepthPercentUShort::default_instance();
        
        }
        void clear(){
clear_ST_DepthPercentWithSymbol();
clear_ST_DepthPercentUShort();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_DepthPercentWithSymbol)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_DepthPercentUShort)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_DepthPercent& default_instance(){

    if (!ST_DepthPercent::default_instance_)
    {
        ST_DepthPercent::default_instance_ = new ST_DepthPercent();
    }
    return *ST_DepthPercent::default_instance_;

        }

    private:
        void clear_ST_DepthPercentWithSymbol(){

            m_has_ST_DepthPercentWithSymbol = false;
            if (m_ST_DepthPercentWithSymbol)
            {
                delete m_ST_DepthPercentWithSymbol;
                m_ST_DepthPercentWithSymbol = NULL;
            }
        
        }
        void clear_ST_DepthPercentUShort(){

            m_has_ST_DepthPercentUShort = false;
            if (m_ST_DepthPercentUShort)
            {
                delete m_ST_DepthPercentUShort;
                m_ST_DepthPercentUShort = NULL;
            }
        
        }
        bool m_has_ST_DepthPercentWithSymbol ;
        ST_DepthPercentWithSymbol* m_ST_DepthPercentWithSymbol ;
        bool m_has_ST_DepthPercentUShort ;
        ST_DepthPercentUShort* m_ST_DepthPercentUShort ;
        static ST_DepthPercent* default_instance_ ;

    }

    class ST_DepthPercentWithSymbol : public XSD::SimpleType{
    public:
        ST_DepthPercentWithSymbol(){
            m_has_string = false
            m_string = 

        }
        ST_DepthPercentWithSymbol(const XSD::string& _string ){
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
        const ST_DepthPercentWithSymbol& default_instance(){

    if (!ST_DepthPercentWithSymbol::default_instance_)
    {
        ST_DepthPercentWithSymbol::default_instance_ = new ST_DepthPercentWithSymbol();
    }
    return *ST_DepthPercentWithSymbol::default_instance_;

        }

    private:
        static ST_DepthPercentWithSymbol* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_DepthPercentUShort : public XSD::SimpleType{
    public:
        ST_DepthPercentUShort(){
            m_has_unsignedShort = false
            m_unsignedShort = 0

        }
        ST_DepthPercentUShort(const XSD::unsignedShort& _unsignedShort ){
            m_has_unsignedShort = true
            m_unsignedShort = _unsignedShort

        }
        bool has_unsignedShort(){

    return m_has_unsignedShort;

        }
        void set_unsignedShort(const unsignedShort& _unsignedShort ){

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;

        }
        const unsignedShort& unsignedShort(){

    return m_unsignedShort;

        }
        void clear(){

    m_has_unsignedShort = false;
    m_unsignedShort = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedShort)
    {
        _outStream << _attrName << \=\\ << m_unsignedShort << \\\;;
    }

        }
        const ST_DepthPercentUShort& default_instance(){

    if (!ST_DepthPercentUShort::default_instance_)
    {
        ST_DepthPercentUShort::default_instance_ = new ST_DepthPercentUShort();
    }
    return *ST_DepthPercentUShort::default_instance_;

        }

    private:
        static ST_DepthPercentUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_Perspective : public XSD::SimpleType{
    public:
        ST_Perspective(){
            m_has_unsignedByte = false
            m_unsignedByte = 0

        }
        ST_Perspective(const XSD::unsignedByte& _unsignedByte ){
            m_has_unsignedByte = true
            m_unsignedByte = _unsignedByte

        }
        bool has_unsignedByte(){

    return m_has_unsignedByte;

        }
        void set_unsignedByte(const unsignedByte& _unsignedByte ){

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;

        }
        const unsignedByte& unsignedByte(){

    return m_unsignedByte;

        }
        void clear(){

    m_has_unsignedByte = false;
    m_unsignedByte = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedByte)
    {
        _outStream << _attrName << \=\\ << m_unsignedByte << \\\;;
    }

        }
        const ST_Perspective& default_instance(){

    if (!ST_Perspective::default_instance_)
    {
        ST_Perspective::default_instance_ = new ST_Perspective();
    }
    return *ST_Perspective::default_instance_;

        }

    private:
        static ST_Perspective* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_Thickness : public XSD::SimpleType{
    public:
        bool has_ST_ThicknessPercent(){

            return m_has_ST_ThicknessPercent;
        
        }
        ST_ThicknessPercent* mutable_ST_ThicknessPercent(){

            clear_unsignedInt();
            m_has_ST_ThicknessPercent = true;
            if (!m_ST_ThicknessPercent)
            {
                m_ST_ThicknessPercent = new ST_ThicknessPercent();
            }
            return m_ST_ThicknessPercent;
        
        }
        const ST_ThicknessPercent& ST_ThicknessPercent(){

            if (m_ST_ThicknessPercent)
            {
                return *m_ST_ThicknessPercent;
            }

            return ST_ThicknessPercent::default_instance();
        
        }
        bool has_unsignedInt(){

            return m_has_unsignedInt;
        
        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

            clear_ST_ThicknessPercent();
            m_has_unsignedInt = true;
            m_unsignedInt = _unsignedInt;
        
        }
        const unsignedInt& unsignedInt(){

            return m_unsignedInt;
        
        }
        void clear(){
clear_ST_ThicknessPercent();
clear_unsignedInt();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_ThicknessPercent)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_unsignedInt)
        {
            _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
            return;
        }

        }
        const ST_Thickness& default_instance(){

    if (!ST_Thickness::default_instance_)
    {
        ST_Thickness::default_instance_ = new ST_Thickness();
    }
    return *ST_Thickness::default_instance_;

        }

    private:
        void clear_ST_ThicknessPercent(){

            m_has_ST_ThicknessPercent = false;
            if (m_ST_ThicknessPercent)
            {
                delete m_ST_ThicknessPercent;
                m_ST_ThicknessPercent = NULL;
            }
        
        }
        void clear_unsignedInt(){

            m_has_unsignedInt = false;
            m_unsignedInt = 0;
        
        }
        bool m_has_ST_ThicknessPercent ;
        ST_ThicknessPercent* m_ST_ThicknessPercent ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;
        static ST_Thickness* default_instance_ ;

    }

    class ST_ThicknessPercent : public XSD::SimpleType{
    public:
        ST_ThicknessPercent(){
            m_has_string = false
            m_string = 

        }
        ST_ThicknessPercent(const XSD::string& _string ){
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
        const ST_ThicknessPercent& default_instance(){

    if (!ST_ThicknessPercent::default_instance_)
    {
        ST_ThicknessPercent::default_instance_ = new ST_ThicknessPercent();
    }
    return *ST_ThicknessPercent::default_instance_;

        }

    private:
        static ST_ThicknessPercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_GapAmount : public XSD::SimpleType{
    public:
        bool has_ST_GapAmountPercent(){

            return m_has_ST_GapAmountPercent;
        
        }
        ST_GapAmountPercent* mutable_ST_GapAmountPercent(){

            clear_ST_GapAmountUShort();
            m_has_ST_GapAmountPercent = true;
            if (!m_ST_GapAmountPercent)
            {
                m_ST_GapAmountPercent = new ST_GapAmountPercent();
            }
            return m_ST_GapAmountPercent;
        
        }
        const ST_GapAmountPercent& ST_GapAmountPercent(){

            if (m_ST_GapAmountPercent)
            {
                return *m_ST_GapAmountPercent;
            }

            return ST_GapAmountPercent::default_instance();
        
        }
        bool has_ST_GapAmountUShort(){

            return m_has_ST_GapAmountUShort;
        
        }
        ST_GapAmountUShort* mutable_ST_GapAmountUShort(){

            clear_ST_GapAmountPercent();
            m_has_ST_GapAmountUShort = true;
            if (!m_ST_GapAmountUShort)
            {
                m_ST_GapAmountUShort = new ST_GapAmountUShort();
            }
            return m_ST_GapAmountUShort;
        
        }
        const ST_GapAmountUShort& ST_GapAmountUShort(){

            if (m_ST_GapAmountUShort)
            {
                return *m_ST_GapAmountUShort;
            }

            return ST_GapAmountUShort::default_instance();
        
        }
        void clear(){
clear_ST_GapAmountPercent();
clear_ST_GapAmountUShort();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_GapAmountPercent)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_GapAmountUShort)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_GapAmount& default_instance(){

    if (!ST_GapAmount::default_instance_)
    {
        ST_GapAmount::default_instance_ = new ST_GapAmount();
    }
    return *ST_GapAmount::default_instance_;

        }

    private:
        void clear_ST_GapAmountPercent(){

            m_has_ST_GapAmountPercent = false;
            if (m_ST_GapAmountPercent)
            {
                delete m_ST_GapAmountPercent;
                m_ST_GapAmountPercent = NULL;
            }
        
        }
        void clear_ST_GapAmountUShort(){

            m_has_ST_GapAmountUShort = false;
            if (m_ST_GapAmountUShort)
            {
                delete m_ST_GapAmountUShort;
                m_ST_GapAmountUShort = NULL;
            }
        
        }
        bool m_has_ST_GapAmountPercent ;
        ST_GapAmountPercent* m_ST_GapAmountPercent ;
        bool m_has_ST_GapAmountUShort ;
        ST_GapAmountUShort* m_ST_GapAmountUShort ;
        static ST_GapAmount* default_instance_ ;

    }

    class ST_GapAmountPercent : public XSD::SimpleType{
    public:
        ST_GapAmountPercent(){
            m_has_string = false
            m_string = 

        }
        ST_GapAmountPercent(const XSD::string& _string ){
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
        const ST_GapAmountPercent& default_instance(){

    if (!ST_GapAmountPercent::default_instance_)
    {
        ST_GapAmountPercent::default_instance_ = new ST_GapAmountPercent();
    }
    return *ST_GapAmountPercent::default_instance_;

        }

    private:
        static ST_GapAmountPercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_GapAmountUShort : public XSD::SimpleType{
    public:
        ST_GapAmountUShort(){
            m_has_unsignedShort = false
            m_unsignedShort = 0

        }
        ST_GapAmountUShort(const XSD::unsignedShort& _unsignedShort ){
            m_has_unsignedShort = true
            m_unsignedShort = _unsignedShort

        }
        bool has_unsignedShort(){

    return m_has_unsignedShort;

        }
        void set_unsignedShort(const unsignedShort& _unsignedShort ){

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;

        }
        const unsignedShort& unsignedShort(){

    return m_unsignedShort;

        }
        void clear(){

    m_has_unsignedShort = false;
    m_unsignedShort = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedShort)
    {
        _outStream << _attrName << \=\\ << m_unsignedShort << \\\;;
    }

        }
        const ST_GapAmountUShort& default_instance(){

    if (!ST_GapAmountUShort::default_instance_)
    {
        ST_GapAmountUShort::default_instance_ = new ST_GapAmountUShort();
    }
    return *ST_GapAmountUShort::default_instance_;

        }

    private:
        static ST_GapAmountUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_Overlap : public XSD::SimpleType{
    public:
        bool has_ST_OverlapPercent(){

            return m_has_ST_OverlapPercent;
        
        }
        ST_OverlapPercent* mutable_ST_OverlapPercent(){

            clear_ST_OverlapByte();
            m_has_ST_OverlapPercent = true;
            if (!m_ST_OverlapPercent)
            {
                m_ST_OverlapPercent = new ST_OverlapPercent();
            }
            return m_ST_OverlapPercent;
        
        }
        const ST_OverlapPercent& ST_OverlapPercent(){

            if (m_ST_OverlapPercent)
            {
                return *m_ST_OverlapPercent;
            }

            return ST_OverlapPercent::default_instance();
        
        }
        bool has_ST_OverlapByte(){

            return m_has_ST_OverlapByte;
        
        }
        ST_OverlapByte* mutable_ST_OverlapByte(){

            clear_ST_OverlapPercent();
            m_has_ST_OverlapByte = true;
            if (!m_ST_OverlapByte)
            {
                m_ST_OverlapByte = new ST_OverlapByte();
            }
            return m_ST_OverlapByte;
        
        }
        const ST_OverlapByte& ST_OverlapByte(){

            if (m_ST_OverlapByte)
            {
                return *m_ST_OverlapByte;
            }

            return ST_OverlapByte::default_instance();
        
        }
        void clear(){
clear_ST_OverlapPercent();
clear_ST_OverlapByte();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_OverlapPercent)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_OverlapByte)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_Overlap& default_instance(){

    if (!ST_Overlap::default_instance_)
    {
        ST_Overlap::default_instance_ = new ST_Overlap();
    }
    return *ST_Overlap::default_instance_;

        }

    private:
        void clear_ST_OverlapPercent(){

            m_has_ST_OverlapPercent = false;
            if (m_ST_OverlapPercent)
            {
                delete m_ST_OverlapPercent;
                m_ST_OverlapPercent = NULL;
            }
        
        }
        void clear_ST_OverlapByte(){

            m_has_ST_OverlapByte = false;
            if (m_ST_OverlapByte)
            {
                delete m_ST_OverlapByte;
                m_ST_OverlapByte = NULL;
            }
        
        }
        bool m_has_ST_OverlapPercent ;
        ST_OverlapPercent* m_ST_OverlapPercent ;
        bool m_has_ST_OverlapByte ;
        ST_OverlapByte* m_ST_OverlapByte ;
        static ST_Overlap* default_instance_ ;

    }

    class ST_OverlapPercent : public XSD::SimpleType{
    public:
        ST_OverlapPercent(){
            m_has_string = false
            m_string = 

        }
        ST_OverlapPercent(const XSD::string& _string ){
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
        const ST_OverlapPercent& default_instance(){

    if (!ST_OverlapPercent::default_instance_)
    {
        ST_OverlapPercent::default_instance_ = new ST_OverlapPercent();
    }
    return *ST_OverlapPercent::default_instance_;

        }

    private:
        static ST_OverlapPercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_OverlapByte : public XSD::SimpleType{
    public:
        ST_OverlapByte(){
            m_has_byte = false
            m_byte = 

        }
        ST_OverlapByte(const XSD::byte& _byte ){
            m_has_byte = true
            m_byte = _byte

        }
        bool has_byte(){

    return m_has_byte;

        }
        void set_byte(const byte& _byte ){

    m_has_byte = true;
    m_byte = _byte;

        }
        const byte& byte(){

    return m_byte;

        }
        void clear(){

    m_has_byte = false;
    m_byte.clear();;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_byte)
    {
        _outStream << _attrName << \=\\ << m_byte << \\\;;
    }

        }
        const ST_OverlapByte& default_instance(){

    if (!ST_OverlapByte::default_instance_)
    {
        ST_OverlapByte::default_instance_ = new ST_OverlapByte();
    }
    return *ST_OverlapByte::default_instance_;

        }

    private:
        static ST_OverlapByte* default_instance_ ;
        bool m_has_byte ;
        byte m_byte ;

    }

    class ST_BubbleScale : public XSD::SimpleType{
    public:
        bool has_ST_BubbleScalePercent(){

            return m_has_ST_BubbleScalePercent;
        
        }
        ST_BubbleScalePercent* mutable_ST_BubbleScalePercent(){

            clear_ST_BubbleScaleUInt();
            m_has_ST_BubbleScalePercent = true;
            if (!m_ST_BubbleScalePercent)
            {
                m_ST_BubbleScalePercent = new ST_BubbleScalePercent();
            }
            return m_ST_BubbleScalePercent;
        
        }
        const ST_BubbleScalePercent& ST_BubbleScalePercent(){

            if (m_ST_BubbleScalePercent)
            {
                return *m_ST_BubbleScalePercent;
            }

            return ST_BubbleScalePercent::default_instance();
        
        }
        bool has_ST_BubbleScaleUInt(){

            return m_has_ST_BubbleScaleUInt;
        
        }
        ST_BubbleScaleUInt* mutable_ST_BubbleScaleUInt(){

            clear_ST_BubbleScalePercent();
            m_has_ST_BubbleScaleUInt = true;
            if (!m_ST_BubbleScaleUInt)
            {
                m_ST_BubbleScaleUInt = new ST_BubbleScaleUInt();
            }
            return m_ST_BubbleScaleUInt;
        
        }
        const ST_BubbleScaleUInt& ST_BubbleScaleUInt(){

            if (m_ST_BubbleScaleUInt)
            {
                return *m_ST_BubbleScaleUInt;
            }

            return ST_BubbleScaleUInt::default_instance();
        
        }
        void clear(){
clear_ST_BubbleScalePercent();
clear_ST_BubbleScaleUInt();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_BubbleScalePercent)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_BubbleScaleUInt)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_BubbleScale& default_instance(){

    if (!ST_BubbleScale::default_instance_)
    {
        ST_BubbleScale::default_instance_ = new ST_BubbleScale();
    }
    return *ST_BubbleScale::default_instance_;

        }

    private:
        void clear_ST_BubbleScalePercent(){

            m_has_ST_BubbleScalePercent = false;
            if (m_ST_BubbleScalePercent)
            {
                delete m_ST_BubbleScalePercent;
                m_ST_BubbleScalePercent = NULL;
            }
        
        }
        void clear_ST_BubbleScaleUInt(){

            m_has_ST_BubbleScaleUInt = false;
            if (m_ST_BubbleScaleUInt)
            {
                delete m_ST_BubbleScaleUInt;
                m_ST_BubbleScaleUInt = NULL;
            }
        
        }
        bool m_has_ST_BubbleScalePercent ;
        ST_BubbleScalePercent* m_ST_BubbleScalePercent ;
        bool m_has_ST_BubbleScaleUInt ;
        ST_BubbleScaleUInt* m_ST_BubbleScaleUInt ;
        static ST_BubbleScale* default_instance_ ;

    }

    class ST_BubbleScalePercent : public XSD::SimpleType{
    public:
        ST_BubbleScalePercent(){
            m_has_string = false
            m_string = 

        }
        ST_BubbleScalePercent(const XSD::string& _string ){
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
        const ST_BubbleScalePercent& default_instance(){

    if (!ST_BubbleScalePercent::default_instance_)
    {
        ST_BubbleScalePercent::default_instance_ = new ST_BubbleScalePercent();
    }
    return *ST_BubbleScalePercent::default_instance_;

        }

    private:
        static ST_BubbleScalePercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_BubbleScaleUInt : public XSD::SimpleType{
    public:
        ST_BubbleScaleUInt(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_BubbleScaleUInt(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_BubbleScaleUInt& default_instance(){

    if (!ST_BubbleScaleUInt::default_instance_)
    {
        ST_BubbleScaleUInt::default_instance_ = new ST_BubbleScaleUInt();
    }
    return *ST_BubbleScaleUInt::default_instance_;

        }

    private:
        static ST_BubbleScaleUInt* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_SizeRepresents : public XSD::SimpleType{
    public:
        ST_SizeRepresents(){
            m_has_type = false

        }
        ST_SizeRepresents(const Type _type ){
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

        return ST_SizeRepresents::TypeStrList[m_type];
    
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
        const ST_SizeRepresents& default_instance(){

    if (!ST_SizeRepresents::default_instance_)
    {
        ST_SizeRepresents::default_instance_ = new ST_SizeRepresents();
    }
    return *ST_SizeRepresents::default_instance_;

        }
        enum Type{
            _area_ = 1,
            _w_
        }

    private:
        static const string TypeStrList [];
        static ST_SizeRepresents* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FirstSliceAng : public XSD::SimpleType{
    public:
        ST_FirstSliceAng(){
            m_has_unsignedShort = false
            m_unsignedShort = 0

        }
        ST_FirstSliceAng(const XSD::unsignedShort& _unsignedShort ){
            m_has_unsignedShort = true
            m_unsignedShort = _unsignedShort

        }
        bool has_unsignedShort(){

    return m_has_unsignedShort;

        }
        void set_unsignedShort(const unsignedShort& _unsignedShort ){

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;

        }
        const unsignedShort& unsignedShort(){

    return m_unsignedShort;

        }
        void clear(){

    m_has_unsignedShort = false;
    m_unsignedShort = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedShort)
    {
        _outStream << _attrName << \=\\ << m_unsignedShort << \\\;;
    }

        }
        const ST_FirstSliceAng& default_instance(){

    if (!ST_FirstSliceAng::default_instance_)
    {
        ST_FirstSliceAng::default_instance_ = new ST_FirstSliceAng();
    }
    return *ST_FirstSliceAng::default_instance_;

        }

    private:
        static ST_FirstSliceAng* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_HoleSize : public XSD::SimpleType{
    public:
        bool has_ST_HoleSizePercent(){

            return m_has_ST_HoleSizePercent;
        
        }
        ST_HoleSizePercent* mutable_ST_HoleSizePercent(){

            clear_ST_HoleSizeUByte();
            m_has_ST_HoleSizePercent = true;
            if (!m_ST_HoleSizePercent)
            {
                m_ST_HoleSizePercent = new ST_HoleSizePercent();
            }
            return m_ST_HoleSizePercent;
        
        }
        const ST_HoleSizePercent& ST_HoleSizePercent(){

            if (m_ST_HoleSizePercent)
            {
                return *m_ST_HoleSizePercent;
            }

            return ST_HoleSizePercent::default_instance();
        
        }
        bool has_ST_HoleSizeUByte(){

            return m_has_ST_HoleSizeUByte;
        
        }
        ST_HoleSizeUByte* mutable_ST_HoleSizeUByte(){

            clear_ST_HoleSizePercent();
            m_has_ST_HoleSizeUByte = true;
            if (!m_ST_HoleSizeUByte)
            {
                m_ST_HoleSizeUByte = new ST_HoleSizeUByte();
            }
            return m_ST_HoleSizeUByte;
        
        }
        const ST_HoleSizeUByte& ST_HoleSizeUByte(){

            if (m_ST_HoleSizeUByte)
            {
                return *m_ST_HoleSizeUByte;
            }

            return ST_HoleSizeUByte::default_instance();
        
        }
        void clear(){
clear_ST_HoleSizePercent();
clear_ST_HoleSizeUByte();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_HoleSizePercent)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_HoleSizeUByte)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_HoleSize& default_instance(){

    if (!ST_HoleSize::default_instance_)
    {
        ST_HoleSize::default_instance_ = new ST_HoleSize();
    }
    return *ST_HoleSize::default_instance_;

        }

    private:
        void clear_ST_HoleSizePercent(){

            m_has_ST_HoleSizePercent = false;
            if (m_ST_HoleSizePercent)
            {
                delete m_ST_HoleSizePercent;
                m_ST_HoleSizePercent = NULL;
            }
        
        }
        void clear_ST_HoleSizeUByte(){

            m_has_ST_HoleSizeUByte = false;
            if (m_ST_HoleSizeUByte)
            {
                delete m_ST_HoleSizeUByte;
                m_ST_HoleSizeUByte = NULL;
            }
        
        }
        bool m_has_ST_HoleSizePercent ;
        ST_HoleSizePercent* m_ST_HoleSizePercent ;
        bool m_has_ST_HoleSizeUByte ;
        ST_HoleSizeUByte* m_ST_HoleSizeUByte ;
        static ST_HoleSize* default_instance_ ;

    }

    class ST_HoleSizePercent : public XSD::SimpleType{
    public:
        ST_HoleSizePercent(){
            m_has_string = false
            m_string = 

        }
        ST_HoleSizePercent(const XSD::string& _string ){
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
        const ST_HoleSizePercent& default_instance(){

    if (!ST_HoleSizePercent::default_instance_)
    {
        ST_HoleSizePercent::default_instance_ = new ST_HoleSizePercent();
    }
    return *ST_HoleSizePercent::default_instance_;

        }

    private:
        static ST_HoleSizePercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_HoleSizeUByte : public XSD::SimpleType{
    public:
        ST_HoleSizeUByte(){
            m_has_unsignedByte = false
            m_unsignedByte = 0

        }
        ST_HoleSizeUByte(const XSD::unsignedByte& _unsignedByte ){
            m_has_unsignedByte = true
            m_unsignedByte = _unsignedByte

        }
        bool has_unsignedByte(){

    return m_has_unsignedByte;

        }
        void set_unsignedByte(const unsignedByte& _unsignedByte ){

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;

        }
        const unsignedByte& unsignedByte(){

    return m_unsignedByte;

        }
        void clear(){

    m_has_unsignedByte = false;
    m_unsignedByte = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedByte)
    {
        _outStream << _attrName << \=\\ << m_unsignedByte << \\\;;
    }

        }
        const ST_HoleSizeUByte& default_instance(){

    if (!ST_HoleSizeUByte::default_instance_)
    {
        ST_HoleSizeUByte::default_instance_ = new ST_HoleSizeUByte();
    }
    return *ST_HoleSizeUByte::default_instance_;

        }

    private:
        static ST_HoleSizeUByte* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_SplitType : public XSD::SimpleType{
    public:
        ST_SplitType(){
            m_has_type = false

        }
        ST_SplitType(const Type _type ){
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

        return ST_SplitType::TypeStrList[m_type];
    
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
        const ST_SplitType& default_instance(){

    if (!ST_SplitType::default_instance_)
    {
        ST_SplitType::default_instance_ = new ST_SplitType();
    }
    return *ST_SplitType::default_instance_;

        }
        enum Type{
            _auto_ = 1,
            _cust_,
            _percent_,
            _pos_,
            _val_
        }

    private:
        static const string TypeStrList [];
        static ST_SplitType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_SecondPieSize : public XSD::SimpleType{
    public:
        bool has_ST_SecondPieSizePercent(){

            return m_has_ST_SecondPieSizePercent;
        
        }
        ST_SecondPieSizePercent* mutable_ST_SecondPieSizePercent(){

            clear_ST_SecondPieSizeUShort();
            m_has_ST_SecondPieSizePercent = true;
            if (!m_ST_SecondPieSizePercent)
            {
                m_ST_SecondPieSizePercent = new ST_SecondPieSizePercent();
            }
            return m_ST_SecondPieSizePercent;
        
        }
        const ST_SecondPieSizePercent& ST_SecondPieSizePercent(){

            if (m_ST_SecondPieSizePercent)
            {
                return *m_ST_SecondPieSizePercent;
            }

            return ST_SecondPieSizePercent::default_instance();
        
        }
        bool has_ST_SecondPieSizeUShort(){

            return m_has_ST_SecondPieSizeUShort;
        
        }
        ST_SecondPieSizeUShort* mutable_ST_SecondPieSizeUShort(){

            clear_ST_SecondPieSizePercent();
            m_has_ST_SecondPieSizeUShort = true;
            if (!m_ST_SecondPieSizeUShort)
            {
                m_ST_SecondPieSizeUShort = new ST_SecondPieSizeUShort();
            }
            return m_ST_SecondPieSizeUShort;
        
        }
        const ST_SecondPieSizeUShort& ST_SecondPieSizeUShort(){

            if (m_ST_SecondPieSizeUShort)
            {
                return *m_ST_SecondPieSizeUShort;
            }

            return ST_SecondPieSizeUShort::default_instance();
        
        }
        void clear(){
clear_ST_SecondPieSizePercent();
clear_ST_SecondPieSizeUShort();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_SecondPieSizePercent)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_SecondPieSizeUShort)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_SecondPieSize& default_instance(){

    if (!ST_SecondPieSize::default_instance_)
    {
        ST_SecondPieSize::default_instance_ = new ST_SecondPieSize();
    }
    return *ST_SecondPieSize::default_instance_;

        }

    private:
        void clear_ST_SecondPieSizePercent(){

            m_has_ST_SecondPieSizePercent = false;
            if (m_ST_SecondPieSizePercent)
            {
                delete m_ST_SecondPieSizePercent;
                m_ST_SecondPieSizePercent = NULL;
            }
        
        }
        void clear_ST_SecondPieSizeUShort(){

            m_has_ST_SecondPieSizeUShort = false;
            if (m_ST_SecondPieSizeUShort)
            {
                delete m_ST_SecondPieSizeUShort;
                m_ST_SecondPieSizeUShort = NULL;
            }
        
        }
        bool m_has_ST_SecondPieSizePercent ;
        ST_SecondPieSizePercent* m_ST_SecondPieSizePercent ;
        bool m_has_ST_SecondPieSizeUShort ;
        ST_SecondPieSizeUShort* m_ST_SecondPieSizeUShort ;
        static ST_SecondPieSize* default_instance_ ;

    }

    class ST_SecondPieSizePercent : public XSD::SimpleType{
    public:
        ST_SecondPieSizePercent(){
            m_has_string = false
            m_string = 

        }
        ST_SecondPieSizePercent(const XSD::string& _string ){
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
        const ST_SecondPieSizePercent& default_instance(){

    if (!ST_SecondPieSizePercent::default_instance_)
    {
        ST_SecondPieSizePercent::default_instance_ = new ST_SecondPieSizePercent();
    }
    return *ST_SecondPieSizePercent::default_instance_;

        }

    private:
        static ST_SecondPieSizePercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_SecondPieSizeUShort : public XSD::SimpleType{
    public:
        ST_SecondPieSizeUShort(){
            m_has_unsignedShort = false
            m_unsignedShort = 0

        }
        ST_SecondPieSizeUShort(const XSD::unsignedShort& _unsignedShort ){
            m_has_unsignedShort = true
            m_unsignedShort = _unsignedShort

        }
        bool has_unsignedShort(){

    return m_has_unsignedShort;

        }
        void set_unsignedShort(const unsignedShort& _unsignedShort ){

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;

        }
        const unsignedShort& unsignedShort(){

    return m_unsignedShort;

        }
        void clear(){

    m_has_unsignedShort = false;
    m_unsignedShort = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedShort)
    {
        _outStream << _attrName << \=\\ << m_unsignedShort << \\\;;
    }

        }
        const ST_SecondPieSizeUShort& default_instance(){

    if (!ST_SecondPieSizeUShort::default_instance_)
    {
        ST_SecondPieSizeUShort::default_instance_ = new ST_SecondPieSizeUShort();
    }
    return *ST_SecondPieSizeUShort::default_instance_;

        }

    private:
        static ST_SecondPieSizeUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_LblAlgn : public XSD::SimpleType{
    public:
        ST_LblAlgn(){
            m_has_type = false

        }
        ST_LblAlgn(const Type _type ){
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

        return ST_LblAlgn::TypeStrList[m_type];
    
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
        const ST_LblAlgn& default_instance(){

    if (!ST_LblAlgn::default_instance_)
    {
        ST_LblAlgn::default_instance_ = new ST_LblAlgn();
    }
    return *ST_LblAlgn::default_instance_;

        }
        enum Type{
            _ctr_ = 1,
            _l_,
            _r_
        }

    private:
        static const string TypeStrList [];
        static ST_LblAlgn* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DLblPos : public XSD::SimpleType{
    public:
        ST_DLblPos(){
            m_has_type = false

        }
        ST_DLblPos(const Type _type ){
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

        return ST_DLblPos::TypeStrList[m_type];
    
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
        const ST_DLblPos& default_instance(){

    if (!ST_DLblPos::default_instance_)
    {
        ST_DLblPos::default_instance_ = new ST_DLblPos();
    }
    return *ST_DLblPos::default_instance_;

        }
        enum Type{
            _bestFit_ = 1,
            _b_,
            _ctr_,
            _inBase_,
            _inEnd_,
            _l_,
            _outEnd_,
            _r_,
            _t_
        }

    private:
        static const string TypeStrList [];
        static ST_DLblPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MarkerStyle : public XSD::SimpleType{
    public:
        ST_MarkerStyle(){
            m_has_type = false

        }
        ST_MarkerStyle(const Type _type ){
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

        return ST_MarkerStyle::TypeStrList[m_type];
    
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
        const ST_MarkerStyle& default_instance(){

    if (!ST_MarkerStyle::default_instance_)
    {
        ST_MarkerStyle::default_instance_ = new ST_MarkerStyle();
    }
    return *ST_MarkerStyle::default_instance_;

        }
        enum Type{
            _circle_ = 1,
            _dash_,
            _diamond_,
            _dot_,
            _none_,
            _picture_,
            _plus_,
            _square_,
            _star_,
            _triangle_,
            _x_,
            _auto_
        }

    private:
        static const string TypeStrList [];
        static ST_MarkerStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_MarkerSize : public XSD::SimpleType{
    public:
        ST_MarkerSize(){
            m_has_unsignedByte = false
            m_unsignedByte = 0

        }
        ST_MarkerSize(const XSD::unsignedByte& _unsignedByte ){
            m_has_unsignedByte = true
            m_unsignedByte = _unsignedByte

        }
        bool has_unsignedByte(){

    return m_has_unsignedByte;

        }
        void set_unsignedByte(const unsignedByte& _unsignedByte ){

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;

        }
        const unsignedByte& unsignedByte(){

    return m_unsignedByte;

        }
        void clear(){

    m_has_unsignedByte = false;
    m_unsignedByte = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedByte)
    {
        _outStream << _attrName << \=\\ << m_unsignedByte << \\\;;
    }

        }
        const ST_MarkerSize& default_instance(){

    if (!ST_MarkerSize::default_instance_)
    {
        ST_MarkerSize::default_instance_ = new ST_MarkerSize();
    }
    return *ST_MarkerSize::default_instance_;

        }

    private:
        static ST_MarkerSize* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_TrendlineType : public XSD::SimpleType{
    public:
        ST_TrendlineType(){
            m_has_type = false

        }
        ST_TrendlineType(const Type _type ){
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

        return ST_TrendlineType::TypeStrList[m_type];
    
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
        const ST_TrendlineType& default_instance(){

    if (!ST_TrendlineType::default_instance_)
    {
        ST_TrendlineType::default_instance_ = new ST_TrendlineType();
    }
    return *ST_TrendlineType::default_instance_;

        }
        enum Type{
            _exp_ = 1,
            _linear_,
            _log_,
            _movingAvg_,
            _poly_,
            _power_
        }

    private:
        static const string TypeStrList [];
        static ST_TrendlineType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Order : public XSD::SimpleType{
    public:
        ST_Order(){
            m_has_unsignedByte = false
            m_unsignedByte = 0

        }
        ST_Order(const XSD::unsignedByte& _unsignedByte ){
            m_has_unsignedByte = true
            m_unsignedByte = _unsignedByte

        }
        bool has_unsignedByte(){

    return m_has_unsignedByte;

        }
        void set_unsignedByte(const unsignedByte& _unsignedByte ){

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;

        }
        const unsignedByte& unsignedByte(){

    return m_unsignedByte;

        }
        void clear(){

    m_has_unsignedByte = false;
    m_unsignedByte = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedByte)
    {
        _outStream << _attrName << \=\\ << m_unsignedByte << \\\;;
    }

        }
        const ST_Order& default_instance(){

    if (!ST_Order::default_instance_)
    {
        ST_Order::default_instance_ = new ST_Order();
    }
    return *ST_Order::default_instance_;

        }

    private:
        static ST_Order* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_Period : public XSD::SimpleType{
    public:
        ST_Period(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_Period(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_Period& default_instance(){

    if (!ST_Period::default_instance_)
    {
        ST_Period::default_instance_ = new ST_Period();
    }
    return *ST_Period::default_instance_;

        }

    private:
        static ST_Period* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_ErrDir : public XSD::SimpleType{
    public:
        ST_ErrDir(){
            m_has_type = false

        }
        ST_ErrDir(const Type _type ){
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

        return ST_ErrDir::TypeStrList[m_type];
    
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
        const ST_ErrDir& default_instance(){

    if (!ST_ErrDir::default_instance_)
    {
        ST_ErrDir::default_instance_ = new ST_ErrDir();
    }
    return *ST_ErrDir::default_instance_;

        }
        enum Type{
            _x_ = 1,
            _y_
        }

    private:
        static const string TypeStrList [];
        static ST_ErrDir* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ErrBarType : public XSD::SimpleType{
    public:
        ST_ErrBarType(){
            m_has_type = false

        }
        ST_ErrBarType(const Type _type ){
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

        return ST_ErrBarType::TypeStrList[m_type];
    
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
        const ST_ErrBarType& default_instance(){

    if (!ST_ErrBarType::default_instance_)
    {
        ST_ErrBarType::default_instance_ = new ST_ErrBarType();
    }
    return *ST_ErrBarType::default_instance_;

        }
        enum Type{
            _both_ = 1,
            _minus_,
            _plus_
        }

    private:
        static const string TypeStrList [];
        static ST_ErrBarType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ErrValType : public XSD::SimpleType{
    public:
        ST_ErrValType(){
            m_has_type = false

        }
        ST_ErrValType(const Type _type ){
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

        return ST_ErrValType::TypeStrList[m_type];
    
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
        const ST_ErrValType& default_instance(){

    if (!ST_ErrValType::default_instance_)
    {
        ST_ErrValType::default_instance_ = new ST_ErrValType();
    }
    return *ST_ErrValType::default_instance_;

        }
        enum Type{
            _cust_ = 1,
            _fixedVal_,
            _percentage_,
            _stdDev_,
            _stdErr_
        }

    private:
        static const string TypeStrList [];
        static ST_ErrValType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Grouping : public XSD::SimpleType{
    public:
        ST_Grouping(){
            m_has_type = false

        }
        ST_Grouping(const Type _type ){
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

        return ST_Grouping::TypeStrList[m_type];
    
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
        const ST_Grouping& default_instance(){

    if (!ST_Grouping::default_instance_)
    {
        ST_Grouping::default_instance_ = new ST_Grouping();
    }
    return *ST_Grouping::default_instance_;

        }
        enum Type{
            _percentStacked_ = 1,
            _standard_,
            _stacked_
        }

    private:
        static const string TypeStrList [];
        static ST_Grouping* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ScatterStyle : public XSD::SimpleType{
    public:
        ST_ScatterStyle(){
            m_has_type = false

        }
        ST_ScatterStyle(const Type _type ){
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

        return ST_ScatterStyle::TypeStrList[m_type];
    
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
        const ST_ScatterStyle& default_instance(){

    if (!ST_ScatterStyle::default_instance_)
    {
        ST_ScatterStyle::default_instance_ = new ST_ScatterStyle();
    }
    return *ST_ScatterStyle::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _line_,
            _lineMarker_,
            _marker_,
            _smooth_,
            _smoothMarker_
        }

    private:
        static const string TypeStrList [];
        static ST_ScatterStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RadarStyle : public XSD::SimpleType{
    public:
        ST_RadarStyle(){
            m_has_type = false

        }
        ST_RadarStyle(const Type _type ){
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

        return ST_RadarStyle::TypeStrList[m_type];
    
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
        const ST_RadarStyle& default_instance(){

    if (!ST_RadarStyle::default_instance_)
    {
        ST_RadarStyle::default_instance_ = new ST_RadarStyle();
    }
    return *ST_RadarStyle::default_instance_;

        }
        enum Type{
            _standard_ = 1,
            _marker_,
            _filled_
        }

    private:
        static const string TypeStrList [];
        static ST_RadarStyle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BarGrouping : public XSD::SimpleType{
    public:
        ST_BarGrouping(){
            m_has_type = false

        }
        ST_BarGrouping(const Type _type ){
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

        return ST_BarGrouping::TypeStrList[m_type];
    
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
        const ST_BarGrouping& default_instance(){

    if (!ST_BarGrouping::default_instance_)
    {
        ST_BarGrouping::default_instance_ = new ST_BarGrouping();
    }
    return *ST_BarGrouping::default_instance_;

        }
        enum Type{
            _percentStacked_ = 1,
            _clustered_,
            _standard_,
            _stacked_
        }

    private:
        static const string TypeStrList [];
        static ST_BarGrouping* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BarDir : public XSD::SimpleType{
    public:
        ST_BarDir(){
            m_has_type = false

        }
        ST_BarDir(const Type _type ){
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

        return ST_BarDir::TypeStrList[m_type];
    
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
        const ST_BarDir& default_instance(){

    if (!ST_BarDir::default_instance_)
    {
        ST_BarDir::default_instance_ = new ST_BarDir();
    }
    return *ST_BarDir::default_instance_;

        }
        enum Type{
            _bar_ = 1,
            _col_
        }

    private:
        static const string TypeStrList [];
        static ST_BarDir* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Shape : public XSD::SimpleType{
    public:
        ST_Shape(){
            m_has_type = false

        }
        ST_Shape(const Type _type ){
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

        return ST_Shape::TypeStrList[m_type];
    
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
        const ST_Shape& default_instance(){

    if (!ST_Shape::default_instance_)
    {
        ST_Shape::default_instance_ = new ST_Shape();
    }
    return *ST_Shape::default_instance_;

        }
        enum Type{
            _cone_ = 1,
            _coneToMax_,
            _box_,
            _cylinder_,
            _pyramid_,
            _pyramidToMax_
        }

    private:
        static const string TypeStrList [];
        static ST_Shape* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_OfPieType : public XSD::SimpleType{
    public:
        ST_OfPieType(){
            m_has_type = false

        }
        ST_OfPieType(const Type _type ){
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

        return ST_OfPieType::TypeStrList[m_type];
    
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
        const ST_OfPieType& default_instance(){

    if (!ST_OfPieType::default_instance_)
    {
        ST_OfPieType::default_instance_ = new ST_OfPieType();
    }
    return *ST_OfPieType::default_instance_;

        }
        enum Type{
            _pie_ = 1,
            _bar_
        }

    private:
        static const string TypeStrList [];
        static ST_OfPieType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AxPos : public XSD::SimpleType{
    public:
        ST_AxPos(){
            m_has_type = false

        }
        ST_AxPos(const Type _type ){
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

        return ST_AxPos::TypeStrList[m_type];
    
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
        const ST_AxPos& default_instance(){

    if (!ST_AxPos::default_instance_)
    {
        ST_AxPos::default_instance_ = new ST_AxPos();
    }
    return *ST_AxPos::default_instance_;

        }
        enum Type{
            _b_ = 1,
            _l_,
            _r_,
            _t_
        }

    private:
        static const string TypeStrList [];
        static ST_AxPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Crosses : public XSD::SimpleType{
    public:
        ST_Crosses(){
            m_has_type = false

        }
        ST_Crosses(const Type _type ){
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

        return ST_Crosses::TypeStrList[m_type];
    
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
        const ST_Crosses& default_instance(){

    if (!ST_Crosses::default_instance_)
    {
        ST_Crosses::default_instance_ = new ST_Crosses();
    }
    return *ST_Crosses::default_instance_;

        }
        enum Type{
            _autoZero_ = 1,
            _max_,
            _min_
        }

    private:
        static const string TypeStrList [];
        static ST_Crosses* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CrossBetween : public XSD::SimpleType{
    public:
        ST_CrossBetween(){
            m_has_type = false

        }
        ST_CrossBetween(const Type _type ){
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

        return ST_CrossBetween::TypeStrList[m_type];
    
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
        const ST_CrossBetween& default_instance(){

    if (!ST_CrossBetween::default_instance_)
    {
        ST_CrossBetween::default_instance_ = new ST_CrossBetween();
    }
    return *ST_CrossBetween::default_instance_;

        }
        enum Type{
            _between_ = 1,
            _midCat_
        }

    private:
        static const string TypeStrList [];
        static ST_CrossBetween* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TickMark : public XSD::SimpleType{
    public:
        ST_TickMark(){
            m_has_type = false

        }
        ST_TickMark(const Type _type ){
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

        return ST_TickMark::TypeStrList[m_type];
    
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
        const ST_TickMark& default_instance(){

    if (!ST_TickMark::default_instance_)
    {
        ST_TickMark::default_instance_ = new ST_TickMark();
    }
    return *ST_TickMark::default_instance_;

        }
        enum Type{
            _cross_ = 1,
            _in_,
            _none_,
            _out_
        }

    private:
        static const string TypeStrList [];
        static ST_TickMark* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_TickLblPos : public XSD::SimpleType{
    public:
        ST_TickLblPos(){
            m_has_type = false

        }
        ST_TickLblPos(const Type _type ){
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

        return ST_TickLblPos::TypeStrList[m_type];
    
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
        const ST_TickLblPos& default_instance(){

    if (!ST_TickLblPos::default_instance_)
    {
        ST_TickLblPos::default_instance_ = new ST_TickLblPos();
    }
    return *ST_TickLblPos::default_instance_;

        }
        enum Type{
            _high_ = 1,
            _low_,
            _nextTo_,
            _none_
        }

    private:
        static const string TypeStrList [];
        static ST_TickLblPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Skip : public XSD::SimpleType{
    public:
        ST_Skip(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_Skip(const XSD::unsignedInt& _unsignedInt ){
            m_has_unsignedInt = true
            m_unsignedInt = _unsignedInt

        }
        bool has_unsignedInt(){

    return m_has_unsignedInt;

        }
        void set_unsignedInt(const unsignedInt& _unsignedInt ){

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;

        }
        const unsignedInt& unsignedInt(){

    return m_unsignedInt;

        }
        void clear(){

    m_has_unsignedInt = false;
    m_unsignedInt = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedInt)
    {
        _outStream << _attrName << \=\\ << m_unsignedInt << \\\;;
    }

        }
        const ST_Skip& default_instance(){

    if (!ST_Skip::default_instance_)
    {
        ST_Skip::default_instance_ = new ST_Skip();
    }
    return *ST_Skip::default_instance_;

        }

    private:
        static ST_Skip* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_TimeUnit : public XSD::SimpleType{
    public:
        ST_TimeUnit(){
            m_has_type = false

        }
        ST_TimeUnit(const Type _type ){
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

        return ST_TimeUnit::TypeStrList[m_type];
    
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
        const ST_TimeUnit& default_instance(){

    if (!ST_TimeUnit::default_instance_)
    {
        ST_TimeUnit::default_instance_ = new ST_TimeUnit();
    }
    return *ST_TimeUnit::default_instance_;

        }
        enum Type{
            _days_ = 1,
            _months_,
            _years_
        }

    private:
        static const string TypeStrList [];
        static ST_TimeUnit* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AxisUnit : public XSD::SimpleType{
    public:
        ST_AxisUnit(){
            m_has_double = false
            m_double = 0

        }
        ST_AxisUnit(const XSD::double& _double ){
            m_has_double = true
            m_double = _double

        }
        bool has_double(){

    return m_has_double;

        }
        void set_double(const double& _double ){

    m_has_double = true;
    m_double = _double;

        }
        const double& double(){

    return m_double;

        }
        void clear(){

    m_has_double = false;
    m_double = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_double)
    {
        _outStream << _attrName << \=\\ << m_double << \\\;;
    }

        }
        const ST_AxisUnit& default_instance(){

    if (!ST_AxisUnit::default_instance_)
    {
        ST_AxisUnit::default_instance_ = new ST_AxisUnit();
    }
    return *ST_AxisUnit::default_instance_;

        }

    private:
        static ST_AxisUnit* default_instance_ ;
        bool m_has_double ;
        double m_double ;

    }

    class ST_BuiltInUnit : public XSD::SimpleType{
    public:
        ST_BuiltInUnit(){
            m_has_type = false

        }
        ST_BuiltInUnit(const Type _type ){
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

        return ST_BuiltInUnit::TypeStrList[m_type];
    
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
        const ST_BuiltInUnit& default_instance(){

    if (!ST_BuiltInUnit::default_instance_)
    {
        ST_BuiltInUnit::default_instance_ = new ST_BuiltInUnit();
    }
    return *ST_BuiltInUnit::default_instance_;

        }
        enum Type{
            _hundreds_ = 1,
            _thousands_,
            _tenThousands_,
            _hundredThousands_,
            _millions_,
            _tenMillions_,
            _hundredMillions_,
            _billions_,
            _trillions_
        }

    private:
        static const string TypeStrList [];
        static ST_BuiltInUnit* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PictureFormat : public XSD::SimpleType{
    public:
        ST_PictureFormat(){
            m_has_type = false

        }
        ST_PictureFormat(const Type _type ){
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

        return ST_PictureFormat::TypeStrList[m_type];
    
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
        const ST_PictureFormat& default_instance(){

    if (!ST_PictureFormat::default_instance_)
    {
        ST_PictureFormat::default_instance_ = new ST_PictureFormat();
    }
    return *ST_PictureFormat::default_instance_;

        }
        enum Type{
            _stretch_ = 1,
            _stack_,
            _stackScale_
        }

    private:
        static const string TypeStrList [];
        static ST_PictureFormat* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PictureStackUnit : public XSD::SimpleType{
    public:
        ST_PictureStackUnit(){
            m_has_double = false
            m_double = 0

        }
        ST_PictureStackUnit(const XSD::double& _double ){
            m_has_double = true
            m_double = _double

        }
        bool has_double(){

    return m_has_double;

        }
        void set_double(const double& _double ){

    m_has_double = true;
    m_double = _double;

        }
        const double& double(){

    return m_double;

        }
        void clear(){

    m_has_double = false;
    m_double = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_double)
    {
        _outStream << _attrName << \=\\ << m_double << \\\;;
    }

        }
        const ST_PictureStackUnit& default_instance(){

    if (!ST_PictureStackUnit::default_instance_)
    {
        ST_PictureStackUnit::default_instance_ = new ST_PictureStackUnit();
    }
    return *ST_PictureStackUnit::default_instance_;

        }

    private:
        static ST_PictureStackUnit* default_instance_ ;
        bool m_has_double ;
        double m_double ;

    }

    class ST_Orientation : public XSD::SimpleType{
    public:
        ST_Orientation(){
            m_has_type = false

        }
        ST_Orientation(const Type _type ){
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

        return ST_Orientation::TypeStrList[m_type];
    
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
        const ST_Orientation& default_instance(){

    if (!ST_Orientation::default_instance_)
    {
        ST_Orientation::default_instance_ = new ST_Orientation();
    }
    return *ST_Orientation::default_instance_;

        }
        enum Type{
            _maxMin_ = 1,
            _minMax_
        }

    private:
        static const string TypeStrList [];
        static ST_Orientation* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_LogBase : public XSD::SimpleType{
    public:
        ST_LogBase(){
            m_has_double = false
            m_double = 0

        }
        ST_LogBase(const XSD::double& _double ){
            m_has_double = true
            m_double = _double

        }
        bool has_double(){

    return m_has_double;

        }
        void set_double(const double& _double ){

    m_has_double = true;
    m_double = _double;

        }
        const double& double(){

    return m_double;

        }
        void clear(){

    m_has_double = false;
    m_double = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_double)
    {
        _outStream << _attrName << \=\\ << m_double << \\\;;
    }

        }
        const ST_LogBase& default_instance(){

    if (!ST_LogBase::default_instance_)
    {
        ST_LogBase::default_instance_ = new ST_LogBase();
    }
    return *ST_LogBase::default_instance_;

        }

    private:
        static ST_LogBase* default_instance_ ;
        bool m_has_double ;
        double m_double ;

    }

    class ST_LblOffset : public XSD::SimpleType{
    public:
        bool has_ST_LblOffsetPercent(){

            return m_has_ST_LblOffsetPercent;
        
        }
        ST_LblOffsetPercent* mutable_ST_LblOffsetPercent(){

            clear_ST_LblOffsetUShort();
            m_has_ST_LblOffsetPercent = true;
            if (!m_ST_LblOffsetPercent)
            {
                m_ST_LblOffsetPercent = new ST_LblOffsetPercent();
            }
            return m_ST_LblOffsetPercent;
        
        }
        const ST_LblOffsetPercent& ST_LblOffsetPercent(){

            if (m_ST_LblOffsetPercent)
            {
                return *m_ST_LblOffsetPercent;
            }

            return ST_LblOffsetPercent::default_instance();
        
        }
        bool has_ST_LblOffsetUShort(){

            return m_has_ST_LblOffsetUShort;
        
        }
        ST_LblOffsetUShort* mutable_ST_LblOffsetUShort(){

            clear_ST_LblOffsetPercent();
            m_has_ST_LblOffsetUShort = true;
            if (!m_ST_LblOffsetUShort)
            {
                m_ST_LblOffsetUShort = new ST_LblOffsetUShort();
            }
            return m_ST_LblOffsetUShort;
        
        }
        const ST_LblOffsetUShort& ST_LblOffsetUShort(){

            if (m_ST_LblOffsetUShort)
            {
                return *m_ST_LblOffsetUShort;
            }

            return ST_LblOffsetUShort::default_instance();
        
        }
        void clear(){
clear_ST_LblOffsetPercent();
clear_ST_LblOffsetUShort();
        }
        void toXml(const string _attrName , ostream _outStream ){

        if (m_has_ST_LblOffsetPercent)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        if (m_has_ST_LblOffsetUShort)
        {
            (varName)s->toXml(_attrName, _outStream);;
            return;
        }

        }
        const ST_LblOffset& default_instance(){

    if (!ST_LblOffset::default_instance_)
    {
        ST_LblOffset::default_instance_ = new ST_LblOffset();
    }
    return *ST_LblOffset::default_instance_;

        }

    private:
        void clear_ST_LblOffsetPercent(){

            m_has_ST_LblOffsetPercent = false;
            if (m_ST_LblOffsetPercent)
            {
                delete m_ST_LblOffsetPercent;
                m_ST_LblOffsetPercent = NULL;
            }
        
        }
        void clear_ST_LblOffsetUShort(){

            m_has_ST_LblOffsetUShort = false;
            if (m_ST_LblOffsetUShort)
            {
                delete m_ST_LblOffsetUShort;
                m_ST_LblOffsetUShort = NULL;
            }
        
        }
        bool m_has_ST_LblOffsetPercent ;
        ST_LblOffsetPercent* m_ST_LblOffsetPercent ;
        bool m_has_ST_LblOffsetUShort ;
        ST_LblOffsetUShort* m_ST_LblOffsetUShort ;
        static ST_LblOffset* default_instance_ ;

    }

    class ST_LblOffsetPercent : public XSD::SimpleType{
    public:
        ST_LblOffsetPercent(){
            m_has_string = false
            m_string = 

        }
        ST_LblOffsetPercent(const XSD::string& _string ){
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
        const ST_LblOffsetPercent& default_instance(){

    if (!ST_LblOffsetPercent::default_instance_)
    {
        ST_LblOffsetPercent::default_instance_ = new ST_LblOffsetPercent();
    }
    return *ST_LblOffsetPercent::default_instance_;

        }

    private:
        static ST_LblOffsetPercent* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_LblOffsetUShort : public XSD::SimpleType{
    public:
        ST_LblOffsetUShort(){
            m_has_unsignedShort = false
            m_unsignedShort = 0

        }
        ST_LblOffsetUShort(const XSD::unsignedShort& _unsignedShort ){
            m_has_unsignedShort = true
            m_unsignedShort = _unsignedShort

        }
        bool has_unsignedShort(){

    return m_has_unsignedShort;

        }
        void set_unsignedShort(const unsignedShort& _unsignedShort ){

    m_has_unsignedShort = true;
    m_unsignedShort = _unsignedShort;

        }
        const unsignedShort& unsignedShort(){

    return m_unsignedShort;

        }
        void clear(){

    m_has_unsignedShort = false;
    m_unsignedShort = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedShort)
    {
        _outStream << _attrName << \=\\ << m_unsignedShort << \\\;;
    }

        }
        const ST_LblOffsetUShort& default_instance(){

    if (!ST_LblOffsetUShort::default_instance_)
    {
        ST_LblOffsetUShort::default_instance_ = new ST_LblOffsetUShort();
    }
    return *ST_LblOffsetUShort::default_instance_;

        }

    private:
        static ST_LblOffsetUShort* default_instance_ ;
        bool m_has_unsignedShort ;
        unsignedShort m_unsignedShort ;

    }

    class ST_LegendPos : public XSD::SimpleType{
    public:
        ST_LegendPos(){
            m_has_type = false

        }
        ST_LegendPos(const Type _type ){
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

        return ST_LegendPos::TypeStrList[m_type];
    
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
        const ST_LegendPos& default_instance(){

    if (!ST_LegendPos::default_instance_)
    {
        ST_LegendPos::default_instance_ = new ST_LegendPos();
    }
    return *ST_LegendPos::default_instance_;

        }
        enum Type{
            _b_ = 1,
            _tr_,
            _l_,
            _r_,
            _t_
        }

    private:
        static const string TypeStrList [];
        static ST_LegendPos* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_DispBlanksAs : public XSD::SimpleType{
    public:
        ST_DispBlanksAs(){
            m_has_type = false

        }
        ST_DispBlanksAs(const Type _type ){
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

        return ST_DispBlanksAs::TypeStrList[m_type];
    
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
        const ST_DispBlanksAs& default_instance(){

    if (!ST_DispBlanksAs::default_instance_)
    {
        ST_DispBlanksAs::default_instance_ = new ST_DispBlanksAs();
    }
    return *ST_DispBlanksAs::default_instance_;

        }
        enum Type{
            _span_ = 1,
            _gap_,
            _zero_
        }

    private:
        static const string TypeStrList [];
        static ST_DispBlanksAs* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Style : public XSD::SimpleType{
    public:
        ST_Style(){
            m_has_unsignedByte = false
            m_unsignedByte = 0

        }
        ST_Style(const XSD::unsignedByte& _unsignedByte ){
            m_has_unsignedByte = true
            m_unsignedByte = _unsignedByte

        }
        bool has_unsignedByte(){

    return m_has_unsignedByte;

        }
        void set_unsignedByte(const unsignedByte& _unsignedByte ){

    m_has_unsignedByte = true;
    m_unsignedByte = _unsignedByte;

        }
        const unsignedByte& unsignedByte(){

    return m_unsignedByte;

        }
        void clear(){

    m_has_unsignedByte = false;
    m_unsignedByte = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_unsignedByte)
    {
        _outStream << _attrName << \=\\ << m_unsignedByte << \\\;;
    }

        }
        const ST_Style& default_instance(){

    if (!ST_Style::default_instance_)
    {
        ST_Style::default_instance_ = new ST_Style();
    }
    return *ST_Style::default_instance_;

        }

    private:
        static ST_Style* default_instance_ ;
        bool m_has_unsignedByte ;
        unsignedByte m_unsignedByte ;

    }

    class ST_PageSetupOrientation : public XSD::SimpleType{
    public:
        ST_PageSetupOrientation(){
            m_has_type = false

        }
        ST_PageSetupOrientation(const Type _type ){
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

        return ST_PageSetupOrientation::TypeStrList[m_type];
    
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
        const ST_PageSetupOrientation& default_instance(){

    if (!ST_PageSetupOrientation::default_instance_)
    {
        ST_PageSetupOrientation::default_instance_ = new ST_PageSetupOrientation();
    }
    return *ST_PageSetupOrientation::default_instance_;

        }
        enum Type{
            _default_ = 1,
            _portrait_,
            _landscape_
        }

    private:
        static const string TypeStrList [];
        static ST_PageSetupOrientation* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_Boolean : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                m_val_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_val_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Boolean& default_instance(){

    if (!CT_Boolean::default_instance_)
    {
        CT_Boolean::default_instance_ = new CT_Boolean();
    }
    return *CT_Boolean::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const boolean& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const boolean& val_attr(){

            return type: oolean\nname: \m_val_attr\n;
        
        }

    private:
        static CT_Boolean* default_instance_ ;
        bool m_has_val_attr ;
        boolean m_val_attr ;

    }

    class CT_Double : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                m_val_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Double& default_instance(){

    if (!CT_Double::default_instance_)
    {
        CT_Double::default_instance_ = new CT_Double();
    }
    return *CT_Double::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const double& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const double& val_attr(){

            return type: \double\nname: \m_val_attr\n;
        
        }

    private:
        static CT_Double* default_instance_ ;
        bool m_has_val_attr ;
        double m_val_attr ;

    }

    class CT_UnsignedInt : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                m_val_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_val_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_UnsignedInt& default_instance(){

    if (!CT_UnsignedInt::default_instance_)
    {
        CT_UnsignedInt::default_instance_ = new CT_UnsignedInt();
    }
    return *CT_UnsignedInt::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const unsignedInt& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const unsignedInt& val_attr(){

            return type: \unsignedInt\nname: \m_val_attr\n;
        
        }

    private:
        static CT_UnsignedInt* default_instance_ ;
        bool m_has_val_attr ;
        unsignedInt m_val_attr ;

    }

    class CT_RelId : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(\id\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RelId& default_instance(){

    if (!CT_RelId::default_instance_)
    {
        CT_RelId::default_instance_ = new CT_RelId();
    }
    return *CT_RelId::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        static CT_RelId* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_Extension : public XSD::ComplexType{
    public:
        void clear(){

                m_has_uri_attr = false;
                m_uri_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_uri_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Extension& default_instance(){

    if (!CT_Extension::default_instance_)
    {
        CT_Extension::default_instance_ = new CT_Extension();
    }
    return *CT_Extension::default_instance_;

        }
        bool has_uri_attr(){

            return m_has_uri_attr;
        
        }
        void set_uri_attr(const token& _uri_attr ){

        m_has_uri_attr = true;
        m_uri_attr = _uri_attr;
        
        }
        const token& uri_attr(){

            return type: 	oken\nname: \m_uri_attr\n;
        
        }

    private:
        static CT_Extension* default_instance_ ;
        bool m_has_uri_attr ;
        token m_uri_attr ;

    }

    class CT_ExtensionList : public XSD::ComplexType{
    public:
        bool has_ext(){

            return m_has_ext;
        
        }
        CT_Extension* mutable_ext(){

                m_has_ext = true;
                if (!m_ext)
                {
                    m_ext = new CT_Extension();
                }
                return m_ext;
            
        }
        const CT_Extension& ext(){

            if (m_ext)
            {
                return *m_ext;
            }
            return CT_Extension::default_instance();
        
        }
        void clear(){

                m_has_ext = false;
                
        if (m_ext)
        {
            delete m_ext;
            m_ext = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_ext)
                {
                    m_ext->toXml(\d:ext\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ExtensionList& default_instance(){

    if (!CT_ExtensionList::default_instance_)
    {
        CT_ExtensionList::default_instance_ = new CT_ExtensionList();
    }
    return *CT_ExtensionList::default_instance_;

        }

    private:
        bool m_has_ext ;
        CT_Extension* m_ext ;
        static CT_ExtensionList* default_instance_ ;

    }

    class CT_NumVal : public XSD::ComplexType{
    public:
        bool has_v(){

            return m_has_v;
        
        }
        ns_s::ST_Xstring* mutable_v(){

                m_has_v = true;
                if (!m_v)
                {
                    m_v = new ns_s::ST_Xstring();
                }
                return m_v;
            
        }
        const ns_s::ST_Xstring& v(){

            if (m_v)
            {
                return *m_v;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        void clear(){

                m_has_idx_attr = false;
                m_idx_attr = 0;
            
                m_has_formatCode_attr = false;
                
        if (m_formatCode_attr)
        {
            delete m_formatCode_attr;
            m_formatCode_attr = NULL;
        }
    
            
                m_has_v = false;
                
        if (m_v)
        {
            delete m_v;
            m_v = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_idx_attr << \\\;
(varName)s->toXml(ormatCode\, _outStream);
        _outStream << \>\;
    
                if (m_has_v)
                {
                    _outStream << \<d:v>\ << m_v->toString() << \</d:v>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NumVal& default_instance(){

    if (!CT_NumVal::default_instance_)
    {
        CT_NumVal::default_instance_ = new CT_NumVal();
    }
    return *CT_NumVal::default_instance_;

        }
        bool has_idx_attr(){

            return m_has_idx_attr;
        
        }
        void set_idx_attr(const unsignedInt& _idx_attr ){

        m_has_idx_attr = true;
        m_idx_attr = _idx_attr;
        
        }
        const unsignedInt& idx_attr(){

            return type: \unsignedInt\nname: \m_idx_attr\n;
        
        }
        bool has_formatCode_attr(){

            return m_has_formatCode_attr;
        
        }
        void set_formatCode_attr(const ns_s::ST_Xstring& _formatCode_attr ){

            m_has_formatCode_attr = true;
            m_formatCode_attr = new ns_s::ST_Xstring(_formatCode_attr);
        
        }
        const ns_s::ST_Xstring& formatCode_attr(){

            if (m_formatCode_attr)
            {
                return *m_formatCode_attr;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }

    private:
        bool m_has_v ;
        ns_s::ST_Xstring* m_v ;
        static CT_NumVal* default_instance_ ;
        bool m_has_idx_attr ;
        unsignedInt m_idx_attr ;
        bool m_has_formatCode_attr ;
        ns_s::ST_Xstring* m_formatCode_attr ;

    }

    class CT_NumData : public XSD::ComplexType{
    public:
        bool has_formatCode(){

            return m_has_formatCode;
        
        }
        ns_s::ST_Xstring* mutable_formatCode(){

                m_has_formatCode = true;
                if (!m_formatCode)
                {
                    m_formatCode = new ns_s::ST_Xstring();
                }
                return m_formatCode;
            
        }
        const ns_s::ST_Xstring& formatCode(){

            if (m_formatCode)
            {
                return *m_formatCode;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        bool has_ptCount(){

            return m_has_ptCount;
        
        }
        CT_UnsignedInt* mutable_ptCount(){

                m_has_ptCount = true;
                if (!m_ptCount)
                {
                    m_ptCount = new CT_UnsignedInt();
                }
                return m_ptCount;
            
        }
        const CT_UnsignedInt& ptCount(){

            if (m_ptCount)
            {
                return *m_ptCount;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_pt(){

            return m_has_pt;
        
        }
        CT_NumVal* mutable_pt(){

                m_has_pt = true;
                if (!m_pt)
                {
                    m_pt = new CT_NumVal();
                }
                return m_pt;
            
        }
        const CT_NumVal& pt(){

            if (m_pt)
            {
                return *m_pt;
            }
            return CT_NumVal::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_formatCode = false;
                
        if (m_formatCode)
        {
            delete m_formatCode;
            m_formatCode = NULL;
        }
    
            
                m_has_ptCount = false;
                
        if (m_ptCount)
        {
            delete m_ptCount;
            m_ptCount = NULL;
        }
    
            
                m_has_pt = false;
                
        if (m_pt)
        {
            delete m_pt;
            m_pt = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_formatCode)
                {
                    _outStream << \<d:formatCode>\ << m_formatCode->toString() << \</d:formatCode>\;;
                }
            
                if (m_has_ptCount)
                {
                    m_formatCode->toXml(\d:ptCount\, _outStream);;
                }
            
                if (m_has_pt)
                {
                    m_formatCode->toXml(\d:pt\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_formatCode->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NumData& default_instance(){

    if (!CT_NumData::default_instance_)
    {
        CT_NumData::default_instance_ = new CT_NumData();
    }
    return *CT_NumData::default_instance_;

        }

    private:
        bool m_has_formatCode ;
        ns_s::ST_Xstring* m_formatCode ;
        bool m_has_ptCount ;
        CT_UnsignedInt* m_ptCount ;
        bool m_has_pt ;
        CT_NumVal* m_pt ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NumData* default_instance_ ;

    }

    class CT_NumRef : public XSD::ComplexType{
    public:
        bool has_f(){

        return m_has_f;
    
        }
        void set_f(const string& _f ){

            m_has_f = true;
            string = _f;
            
        }
        const string& f(){

        return type: \string\nname: \m_f\n;
    
        }
        bool has_numCache(){

            return m_has_numCache;
        
        }
        CT_NumData* mutable_numCache(){

                m_has_numCache = true;
                if (!m_numCache)
                {
                    m_numCache = new CT_NumData();
                }
                return m_numCache;
            
        }
        const CT_NumData& numCache(){

            if (m_numCache)
            {
                return *m_numCache;
            }
            return CT_NumData::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_f = false;
                m_f.clear();
            
                m_has_numCache = false;
                
        if (m_numCache)
        {
            delete m_numCache;
            m_numCache = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_f)
                {
                    _outStream << \<d:f>\ << m_f << \</d:f>\;;
                }
            
                if (m_has_numCache)
                {
                    m_f->toXml(\d:numCache\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_f->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NumRef& default_instance(){

    if (!CT_NumRef::default_instance_)
    {
        CT_NumRef::default_instance_ = new CT_NumRef();
    }
    return *CT_NumRef::default_instance_;

        }

    private:
        bool m_has_f ;
        string m_f ;
        bool m_has_numCache ;
        CT_NumData* m_numCache ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_NumRef* default_instance_ ;

    }

    class CT_NumDataSource : public XSD::ComplexType{
    public:
        bool has_numRef(){

            return m_has_numRef;
        
        }
        CT_NumRef* mutable_numRef(){

                
                m_has_numLit = false;
                
        if (m_numLit)
        {
            delete m_numLit;
            m_numLit = NULL;
        }
    ;
            
                m_has_numRef = true;
                if (!m_numRef)
                {
                    m_numRef = new CT_NumRef();
                }
                return m_numRef;
            
        }
        const CT_NumRef& numRef(){

            if (m_numRef)
            {
                return *m_numRef;
            }
            return CT_NumRef::default_instance();
        
        }
        bool has_numLit(){

            return m_has_numLit;
        
        }
        CT_NumData* mutable_numLit(){

                
                m_has_numRef = false;
                
        if (m_numRef)
        {
            delete m_numRef;
            m_numRef = NULL;
        }
    ;
            
                m_has_numLit = true;
                if (!m_numLit)
                {
                    m_numLit = new CT_NumData();
                }
                return m_numLit;
            
        }
        const CT_NumData& numLit(){

            if (m_numLit)
            {
                return *m_numLit;
            }
            return CT_NumData::default_instance();
        
        }
        void clear(){

                m_has_numRef = false;
                
        if (m_numRef)
        {
            delete m_numRef;
            m_numRef = NULL;
        }
    
            
                m_has_numLit = false;
                
        if (m_numLit)
        {
            delete m_numLit;
            m_numLit = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_numRef)
                {
                    m_numRef->toXml(\d:numRef\, _outStream);;
                }
            
                if (m_has_numLit)
                {
                    m_numRef->toXml(\d:numLit\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NumDataSource& default_instance(){

    if (!CT_NumDataSource::default_instance_)
    {
        CT_NumDataSource::default_instance_ = new CT_NumDataSource();
    }
    return *CT_NumDataSource::default_instance_;

        }

    private:
        bool m_has_numRef ;
        CT_NumRef* m_numRef ;
        bool m_has_numLit ;
        CT_NumData* m_numLit ;
        static CT_NumDataSource* default_instance_ ;

    }

    class CT_StrVal : public XSD::ComplexType{
    public:
        bool has_v(){

            return m_has_v;
        
        }
        ns_s::ST_Xstring* mutable_v(){

                m_has_v = true;
                if (!m_v)
                {
                    m_v = new ns_s::ST_Xstring();
                }
                return m_v;
            
        }
        const ns_s::ST_Xstring& v(){

            if (m_v)
            {
                return *m_v;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        void clear(){

                m_has_idx_attr = false;
                m_idx_attr = 0;
            
                m_has_v = false;
                
        if (m_v)
        {
            delete m_v;
            m_v = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_idx_attr << \\\;
        _outStream << \>\;
    
                if (m_has_v)
                {
                    _outStream << \<d:v>\ << m_v->toString() << \</d:v>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StrVal& default_instance(){

    if (!CT_StrVal::default_instance_)
    {
        CT_StrVal::default_instance_ = new CT_StrVal();
    }
    return *CT_StrVal::default_instance_;

        }
        bool has_idx_attr(){

            return m_has_idx_attr;
        
        }
        void set_idx_attr(const unsignedInt& _idx_attr ){

        m_has_idx_attr = true;
        m_idx_attr = _idx_attr;
        
        }
        const unsignedInt& idx_attr(){

            return type: \unsignedInt\nname: \m_idx_attr\n;
        
        }

    private:
        bool m_has_v ;
        ns_s::ST_Xstring* m_v ;
        static CT_StrVal* default_instance_ ;
        bool m_has_idx_attr ;
        unsignedInt m_idx_attr ;

    }

    class CT_StrData : public XSD::ComplexType{
    public:
        bool has_ptCount(){

            return m_has_ptCount;
        
        }
        CT_UnsignedInt* mutable_ptCount(){

                m_has_ptCount = true;
                if (!m_ptCount)
                {
                    m_ptCount = new CT_UnsignedInt();
                }
                return m_ptCount;
            
        }
        const CT_UnsignedInt& ptCount(){

            if (m_ptCount)
            {
                return *m_ptCount;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_pt(){

            return m_has_pt;
        
        }
        CT_StrVal* mutable_pt(){

                m_has_pt = true;
                if (!m_pt)
                {
                    m_pt = new CT_StrVal();
                }
                return m_pt;
            
        }
        const CT_StrVal& pt(){

            if (m_pt)
            {
                return *m_pt;
            }
            return CT_StrVal::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_ptCount = false;
                
        if (m_ptCount)
        {
            delete m_ptCount;
            m_ptCount = NULL;
        }
    
            
                m_has_pt = false;
                
        if (m_pt)
        {
            delete m_pt;
            m_pt = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_ptCount)
                {
                    m_ptCount->toXml(\d:ptCount\, _outStream);;
                }
            
                if (m_has_pt)
                {
                    m_ptCount->toXml(\d:pt\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_ptCount->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StrData& default_instance(){

    if (!CT_StrData::default_instance_)
    {
        CT_StrData::default_instance_ = new CT_StrData();
    }
    return *CT_StrData::default_instance_;

        }

    private:
        bool m_has_ptCount ;
        CT_UnsignedInt* m_ptCount ;
        bool m_has_pt ;
        CT_StrVal* m_pt ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_StrData* default_instance_ ;

    }

    class CT_StrRef : public XSD::ComplexType{
    public:
        bool has_f(){

        return m_has_f;
    
        }
        void set_f(const string& _f ){

            m_has_f = true;
            string = _f;
            
        }
        const string& f(){

        return type: \string\nname: \m_f\n;
    
        }
        bool has_strCache(){

            return m_has_strCache;
        
        }
        CT_StrData* mutable_strCache(){

                m_has_strCache = true;
                if (!m_strCache)
                {
                    m_strCache = new CT_StrData();
                }
                return m_strCache;
            
        }
        const CT_StrData& strCache(){

            if (m_strCache)
            {
                return *m_strCache;
            }
            return CT_StrData::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_f = false;
                m_f.clear();
            
                m_has_strCache = false;
                
        if (m_strCache)
        {
            delete m_strCache;
            m_strCache = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_f)
                {
                    _outStream << \<d:f>\ << m_f << \</d:f>\;;
                }
            
                if (m_has_strCache)
                {
                    m_f->toXml(\d:strCache\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_f->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StrRef& default_instance(){

    if (!CT_StrRef::default_instance_)
    {
        CT_StrRef::default_instance_ = new CT_StrRef();
    }
    return *CT_StrRef::default_instance_;

        }

    private:
        bool m_has_f ;
        string m_f ;
        bool m_has_strCache ;
        CT_StrData* m_strCache ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_StrRef* default_instance_ ;

    }

    class CT_Tx : public XSD::ComplexType{
    public:
        bool has_strRef(){

            return m_has_strRef;
        
        }
        CT_StrRef* mutable_strRef(){

                
                m_has_rich = false;
                
        if (m_rich)
        {
            delete m_rich;
            m_rich = NULL;
        }
    ;
            
                m_has_strRef = true;
                if (!m_strRef)
                {
                    m_strRef = new CT_StrRef();
                }
                return m_strRef;
            
        }
        const CT_StrRef& strRef(){

            if (m_strRef)
            {
                return *m_strRef;
            }
            return CT_StrRef::default_instance();
        
        }
        bool has_rich(){

            return m_has_rich;
        
        }
        ns_a::CT_TextBody* mutable_rich(){

                
                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    ;
            
                m_has_rich = true;
                if (!m_rich)
                {
                    m_rich = new ns_a::CT_TextBody();
                }
                return m_rich;
            
        }
        const ns_a::CT_TextBody& rich(){

            if (m_rich)
            {
                return *m_rich;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        void clear(){

                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    
            
                m_has_rich = false;
                
        if (m_rich)
        {
            delete m_rich;
            m_rich = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_strRef)
                {
                    m_strRef->toXml(\d:strRef\, _outStream);;
                }
            
                if (m_has_rich)
                {
                    m_strRef->toXml(\d:rich\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Tx& default_instance(){

    if (!CT_Tx::default_instance_)
    {
        CT_Tx::default_instance_ = new CT_Tx();
    }
    return *CT_Tx::default_instance_;

        }

    private:
        bool m_has_strRef ;
        CT_StrRef* m_strRef ;
        bool m_has_rich ;
        ns_a::CT_TextBody* m_rich ;
        static CT_Tx* default_instance_ ;

    }

    class CT_TextLanguageID : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TextLanguageID& default_instance(){

    if (!CT_TextLanguageID::default_instance_)
    {
        CT_TextLanguageID::default_instance_ = new CT_TextLanguageID();
    }
    return *CT_TextLanguageID::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ns_s::ST_Lang& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ns_s::ST_Lang(_val_attr);
        
        }
        const ns_s::ST_Lang& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ns_s::ST_Lang::default_instance();
        
        }

    private:
        static CT_TextLanguageID* default_instance_ ;
        bool m_has_val_attr ;
        ns_s::ST_Lang* m_val_attr ;

    }

    class CT_Lvl : public XSD::ComplexType{
    public:
        bool has_pt(){

            return m_has_pt;
        
        }
        CT_StrVal* mutable_pt(){

                m_has_pt = true;
                if (!m_pt)
                {
                    m_pt = new CT_StrVal();
                }
                return m_pt;
            
        }
        const CT_StrVal& pt(){

            if (m_pt)
            {
                return *m_pt;
            }
            return CT_StrVal::default_instance();
        
        }
        void clear(){

                m_has_pt = false;
                
        if (m_pt)
        {
            delete m_pt;
            m_pt = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_pt)
                {
                    m_pt->toXml(\d:pt\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Lvl& default_instance(){

    if (!CT_Lvl::default_instance_)
    {
        CT_Lvl::default_instance_ = new CT_Lvl();
    }
    return *CT_Lvl::default_instance_;

        }

    private:
        bool m_has_pt ;
        CT_StrVal* m_pt ;
        static CT_Lvl* default_instance_ ;

    }

    class CT_MultiLvlStrData : public XSD::ComplexType{
    public:
        bool has_ptCount(){

            return m_has_ptCount;
        
        }
        CT_UnsignedInt* mutable_ptCount(){

                m_has_ptCount = true;
                if (!m_ptCount)
                {
                    m_ptCount = new CT_UnsignedInt();
                }
                return m_ptCount;
            
        }
        const CT_UnsignedInt& ptCount(){

            if (m_ptCount)
            {
                return *m_ptCount;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_lvl(){

            return m_has_lvl;
        
        }
        CT_Lvl* mutable_lvl(){

                m_has_lvl = true;
                if (!m_lvl)
                {
                    m_lvl = new CT_Lvl();
                }
                return m_lvl;
            
        }
        const CT_Lvl& lvl(){

            if (m_lvl)
            {
                return *m_lvl;
            }
            return CT_Lvl::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_ptCount = false;
                
        if (m_ptCount)
        {
            delete m_ptCount;
            m_ptCount = NULL;
        }
    
            
                m_has_lvl = false;
                
        if (m_lvl)
        {
            delete m_lvl;
            m_lvl = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_ptCount)
                {
                    m_ptCount->toXml(\d:ptCount\, _outStream);;
                }
            
                if (m_has_lvl)
                {
                    m_ptCount->toXml(\d:lvl\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_ptCount->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_MultiLvlStrData& default_instance(){

    if (!CT_MultiLvlStrData::default_instance_)
    {
        CT_MultiLvlStrData::default_instance_ = new CT_MultiLvlStrData();
    }
    return *CT_MultiLvlStrData::default_instance_;

        }

    private:
        bool m_has_ptCount ;
        CT_UnsignedInt* m_ptCount ;
        bool m_has_lvl ;
        CT_Lvl* m_lvl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_MultiLvlStrData* default_instance_ ;

    }

    class CT_MultiLvlStrRef : public XSD::ComplexType{
    public:
        bool has_f(){

        return m_has_f;
    
        }
        void set_f(const string& _f ){

            m_has_f = true;
            string = _f;
            
        }
        const string& f(){

        return type: \string\nname: \m_f\n;
    
        }
        bool has_multiLvlStrCache(){

            return m_has_multiLvlStrCache;
        
        }
        CT_MultiLvlStrData* mutable_multiLvlStrCache(){

                m_has_multiLvlStrCache = true;
                if (!m_multiLvlStrCache)
                {
                    m_multiLvlStrCache = new CT_MultiLvlStrData();
                }
                return m_multiLvlStrCache;
            
        }
        const CT_MultiLvlStrData& multiLvlStrCache(){

            if (m_multiLvlStrCache)
            {
                return *m_multiLvlStrCache;
            }
            return CT_MultiLvlStrData::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_f = false;
                m_f.clear();
            
                m_has_multiLvlStrCache = false;
                
        if (m_multiLvlStrCache)
        {
            delete m_multiLvlStrCache;
            m_multiLvlStrCache = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_f)
                {
                    _outStream << \<d:f>\ << m_f << \</d:f>\;;
                }
            
                if (m_has_multiLvlStrCache)
                {
                    m_f->toXml(\d:multiLvlStrCache\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_f->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_MultiLvlStrRef& default_instance(){

    if (!CT_MultiLvlStrRef::default_instance_)
    {
        CT_MultiLvlStrRef::default_instance_ = new CT_MultiLvlStrRef();
    }
    return *CT_MultiLvlStrRef::default_instance_;

        }

    private:
        bool m_has_f ;
        string m_f ;
        bool m_has_multiLvlStrCache ;
        CT_MultiLvlStrData* m_multiLvlStrCache ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_MultiLvlStrRef* default_instance_ ;

    }

    class CT_AxDataSource : public XSD::ComplexType{
    public:
        bool has_multiLvlStrRef(){

            return m_has_multiLvlStrRef;
        
        }
        CT_MultiLvlStrRef* mutable_multiLvlStrRef(){

                
                m_has_numRef = false;
                
        if (m_numRef)
        {
            delete m_numRef;
            m_numRef = NULL;
        }
    ;
            
                m_has_numLit = false;
                
        if (m_numLit)
        {
            delete m_numLit;
            m_numLit = NULL;
        }
    ;
            
                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    ;
            
                m_has_strLit = false;
                
        if (m_strLit)
        {
            delete m_strLit;
            m_strLit = NULL;
        }
    ;
            
                m_has_multiLvlStrRef = true;
                if (!m_multiLvlStrRef)
                {
                    m_multiLvlStrRef = new CT_MultiLvlStrRef();
                }
                return m_multiLvlStrRef;
            
        }
        const CT_MultiLvlStrRef& multiLvlStrRef(){

            if (m_multiLvlStrRef)
            {
                return *m_multiLvlStrRef;
            }
            return CT_MultiLvlStrRef::default_instance();
        
        }
        bool has_numRef(){

            return m_has_numRef;
        
        }
        CT_NumRef* mutable_numRef(){

                
                m_has_multiLvlStrRef = false;
                
        if (m_multiLvlStrRef)
        {
            delete m_multiLvlStrRef;
            m_multiLvlStrRef = NULL;
        }
    ;
            
                m_has_numLit = false;
                
        if (m_numLit)
        {
            delete m_numLit;
            m_numLit = NULL;
        }
    ;
            
                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    ;
            
                m_has_strLit = false;
                
        if (m_strLit)
        {
            delete m_strLit;
            m_strLit = NULL;
        }
    ;
            
                m_has_numRef = true;
                if (!m_numRef)
                {
                    m_numRef = new CT_NumRef();
                }
                return m_numRef;
            
        }
        const CT_NumRef& numRef(){

            if (m_numRef)
            {
                return *m_numRef;
            }
            return CT_NumRef::default_instance();
        
        }
        bool has_numLit(){

            return m_has_numLit;
        
        }
        CT_NumData* mutable_numLit(){

                
                m_has_multiLvlStrRef = false;
                
        if (m_multiLvlStrRef)
        {
            delete m_multiLvlStrRef;
            m_multiLvlStrRef = NULL;
        }
    ;
            
                m_has_numRef = false;
                
        if (m_numRef)
        {
            delete m_numRef;
            m_numRef = NULL;
        }
    ;
            
                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    ;
            
                m_has_strLit = false;
                
        if (m_strLit)
        {
            delete m_strLit;
            m_strLit = NULL;
        }
    ;
            
                m_has_numLit = true;
                if (!m_numLit)
                {
                    m_numLit = new CT_NumData();
                }
                return m_numLit;
            
        }
        const CT_NumData& numLit(){

            if (m_numLit)
            {
                return *m_numLit;
            }
            return CT_NumData::default_instance();
        
        }
        bool has_strRef(){

            return m_has_strRef;
        
        }
        CT_StrRef* mutable_strRef(){

                
                m_has_multiLvlStrRef = false;
                
        if (m_multiLvlStrRef)
        {
            delete m_multiLvlStrRef;
            m_multiLvlStrRef = NULL;
        }
    ;
            
                m_has_numRef = false;
                
        if (m_numRef)
        {
            delete m_numRef;
            m_numRef = NULL;
        }
    ;
            
                m_has_numLit = false;
                
        if (m_numLit)
        {
            delete m_numLit;
            m_numLit = NULL;
        }
    ;
            
                m_has_strLit = false;
                
        if (m_strLit)
        {
            delete m_strLit;
            m_strLit = NULL;
        }
    ;
            
                m_has_strRef = true;
                if (!m_strRef)
                {
                    m_strRef = new CT_StrRef();
                }
                return m_strRef;
            
        }
        const CT_StrRef& strRef(){

            if (m_strRef)
            {
                return *m_strRef;
            }
            return CT_StrRef::default_instance();
        
        }
        bool has_strLit(){

            return m_has_strLit;
        
        }
        CT_StrData* mutable_strLit(){

                
                m_has_multiLvlStrRef = false;
                
        if (m_multiLvlStrRef)
        {
            delete m_multiLvlStrRef;
            m_multiLvlStrRef = NULL;
        }
    ;
            
                m_has_numRef = false;
                
        if (m_numRef)
        {
            delete m_numRef;
            m_numRef = NULL;
        }
    ;
            
                m_has_numLit = false;
                
        if (m_numLit)
        {
            delete m_numLit;
            m_numLit = NULL;
        }
    ;
            
                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    ;
            
                m_has_strLit = true;
                if (!m_strLit)
                {
                    m_strLit = new CT_StrData();
                }
                return m_strLit;
            
        }
        const CT_StrData& strLit(){

            if (m_strLit)
            {
                return *m_strLit;
            }
            return CT_StrData::default_instance();
        
        }
        void clear(){

                m_has_multiLvlStrRef = false;
                
        if (m_multiLvlStrRef)
        {
            delete m_multiLvlStrRef;
            m_multiLvlStrRef = NULL;
        }
    
            
                m_has_numRef = false;
                
        if (m_numRef)
        {
            delete m_numRef;
            m_numRef = NULL;
        }
    
            
                m_has_numLit = false;
                
        if (m_numLit)
        {
            delete m_numLit;
            m_numLit = NULL;
        }
    
            
                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    
            
                m_has_strLit = false;
                
        if (m_strLit)
        {
            delete m_strLit;
            m_strLit = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_multiLvlStrRef)
                {
                    m_multiLvlStrRef->toXml(\d:multiLvlStrRef\, _outStream);;
                }
            
                if (m_has_numRef)
                {
                    m_multiLvlStrRef->toXml(\d:numRef\, _outStream);;
                }
            
                if (m_has_numLit)
                {
                    m_multiLvlStrRef->toXml(\d:numLit\, _outStream);;
                }
            
                if (m_has_strRef)
                {
                    m_multiLvlStrRef->toXml(\d:strRef\, _outStream);;
                }
            
                if (m_has_strLit)
                {
                    m_multiLvlStrRef->toXml(\d:strLit\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AxDataSource& default_instance(){

    if (!CT_AxDataSource::default_instance_)
    {
        CT_AxDataSource::default_instance_ = new CT_AxDataSource();
    }
    return *CT_AxDataSource::default_instance_;

        }

    private:
        bool m_has_multiLvlStrRef ;
        CT_MultiLvlStrRef* m_multiLvlStrRef ;
        bool m_has_numRef ;
        CT_NumRef* m_numRef ;
        bool m_has_numLit ;
        CT_NumData* m_numLit ;
        bool m_has_strRef ;
        CT_StrRef* m_strRef ;
        bool m_has_strLit ;
        CT_StrData* m_strLit ;
        static CT_AxDataSource* default_instance_ ;

    }

    class CT_SerTx : public XSD::ComplexType{
    public:
        bool has_strRef(){

            return m_has_strRef;
        
        }
        CT_StrRef* mutable_strRef(){

                
                m_has_v = false;
                
        if (m_v)
        {
            delete m_v;
            m_v = NULL;
        }
    ;
            
                m_has_strRef = true;
                if (!m_strRef)
                {
                    m_strRef = new CT_StrRef();
                }
                return m_strRef;
            
        }
        const CT_StrRef& strRef(){

            if (m_strRef)
            {
                return *m_strRef;
            }
            return CT_StrRef::default_instance();
        
        }
        bool has_v(){

            return m_has_v;
        
        }
        ns_s::ST_Xstring* mutable_v(){

                
                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    ;
            
                m_has_v = true;
                if (!m_v)
                {
                    m_v = new ns_s::ST_Xstring();
                }
                return m_v;
            
        }
        const ns_s::ST_Xstring& v(){

            if (m_v)
            {
                return *m_v;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        void clear(){

                m_has_strRef = false;
                
        if (m_strRef)
        {
            delete m_strRef;
            m_strRef = NULL;
        }
    
            
                m_has_v = false;
                
        if (m_v)
        {
            delete m_v;
            m_v = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_strRef)
                {
                    m_strRef->toXml(\d:strRef\, _outStream);;
                }
            
                if (m_has_v)
                {
                    _outStream << \<d:v>\ << m_strRef->toString() << \</d:v>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SerTx& default_instance(){

    if (!CT_SerTx::default_instance_)
    {
        CT_SerTx::default_instance_ = new CT_SerTx();
    }
    return *CT_SerTx::default_instance_;

        }

    private:
        bool m_has_strRef ;
        CT_StrRef* m_strRef ;
        bool m_has_v ;
        ns_s::ST_Xstring* m_v ;
        static CT_SerTx* default_instance_ ;

    }

    class CT_LayoutTarget : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LayoutTarget& default_instance(){

    if (!CT_LayoutTarget::default_instance_)
    {
        CT_LayoutTarget::default_instance_ = new CT_LayoutTarget();
    }
    return *CT_LayoutTarget::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_LayoutTarget& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_LayoutTarget(_val_attr);
        
        }
        const ST_LayoutTarget& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_LayoutTarget::default_instance();
        
        }

    private:
        static CT_LayoutTarget* default_instance_ ;
        bool m_has_val_attr ;
        ST_LayoutTarget* m_val_attr ;

    }

    class CT_LayoutMode : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LayoutMode& default_instance(){

    if (!CT_LayoutMode::default_instance_)
    {
        CT_LayoutMode::default_instance_ = new CT_LayoutMode();
    }
    return *CT_LayoutMode::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_LayoutMode& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_LayoutMode(_val_attr);
        
        }
        const ST_LayoutMode& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_LayoutMode::default_instance();
        
        }

    private:
        static CT_LayoutMode* default_instance_ ;
        bool m_has_val_attr ;
        ST_LayoutMode* m_val_attr ;

    }

    class CT_ManualLayout : public XSD::ComplexType{
    public:
        bool has_layoutTarget(){

            return m_has_layoutTarget;
        
        }
        CT_LayoutTarget* mutable_layoutTarget(){

                m_has_layoutTarget = true;
                if (!m_layoutTarget)
                {
                    m_layoutTarget = new CT_LayoutTarget();
                }
                return m_layoutTarget;
            
        }
        const CT_LayoutTarget& layoutTarget(){

            if (m_layoutTarget)
            {
                return *m_layoutTarget;
            }
            return CT_LayoutTarget::default_instance();
        
        }
        bool has_xMode(){

            return m_has_xMode;
        
        }
        CT_LayoutMode* mutable_xMode(){

                m_has_xMode = true;
                if (!m_xMode)
                {
                    m_xMode = new CT_LayoutMode();
                }
                return m_xMode;
            
        }
        const CT_LayoutMode& xMode(){

            if (m_xMode)
            {
                return *m_xMode;
            }
            return CT_LayoutMode::default_instance();
        
        }
        bool has_yMode(){

            return m_has_yMode;
        
        }
        CT_LayoutMode* mutable_yMode(){

                m_has_yMode = true;
                if (!m_yMode)
                {
                    m_yMode = new CT_LayoutMode();
                }
                return m_yMode;
            
        }
        const CT_LayoutMode& yMode(){

            if (m_yMode)
            {
                return *m_yMode;
            }
            return CT_LayoutMode::default_instance();
        
        }
        bool has_wMode(){

            return m_has_wMode;
        
        }
        CT_LayoutMode* mutable_wMode(){

                m_has_wMode = true;
                if (!m_wMode)
                {
                    m_wMode = new CT_LayoutMode();
                }
                return m_wMode;
            
        }
        const CT_LayoutMode& wMode(){

            if (m_wMode)
            {
                return *m_wMode;
            }
            return CT_LayoutMode::default_instance();
        
        }
        bool has_hMode(){

            return m_has_hMode;
        
        }
        CT_LayoutMode* mutable_hMode(){

                m_has_hMode = true;
                if (!m_hMode)
                {
                    m_hMode = new CT_LayoutMode();
                }
                return m_hMode;
            
        }
        const CT_LayoutMode& hMode(){

            if (m_hMode)
            {
                return *m_hMode;
            }
            return CT_LayoutMode::default_instance();
        
        }
        bool has_x(){

            return m_has_x;
        
        }
        CT_Double* mutable_x(){

                m_has_x = true;
                if (!m_x)
                {
                    m_x = new CT_Double();
                }
                return m_x;
            
        }
        const CT_Double& x(){

            if (m_x)
            {
                return *m_x;
            }
            return CT_Double::default_instance();
        
        }
        bool has_y(){

            return m_has_y;
        
        }
        CT_Double* mutable_y(){

                m_has_y = true;
                if (!m_y)
                {
                    m_y = new CT_Double();
                }
                return m_y;
            
        }
        const CT_Double& y(){

            if (m_y)
            {
                return *m_y;
            }
            return CT_Double::default_instance();
        
        }
        bool has_w(){

            return m_has_w;
        
        }
        CT_Double* mutable_w(){

                m_has_w = true;
                if (!m_w)
                {
                    m_w = new CT_Double();
                }
                return m_w;
            
        }
        const CT_Double& w(){

            if (m_w)
            {
                return *m_w;
            }
            return CT_Double::default_instance();
        
        }
        bool has_h(){

            return m_has_h;
        
        }
        CT_Double* mutable_h(){

                m_has_h = true;
                if (!m_h)
                {
                    m_h = new CT_Double();
                }
                return m_h;
            
        }
        const CT_Double& h(){

            if (m_h)
            {
                return *m_h;
            }
            return CT_Double::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_layoutTarget = false;
                
        if (m_layoutTarget)
        {
            delete m_layoutTarget;
            m_layoutTarget = NULL;
        }
    
            
                m_has_xMode = false;
                
        if (m_xMode)
        {
            delete m_xMode;
            m_xMode = NULL;
        }
    
            
                m_has_yMode = false;
                
        if (m_yMode)
        {
            delete m_yMode;
            m_yMode = NULL;
        }
    
            
                m_has_wMode = false;
                
        if (m_wMode)
        {
            delete m_wMode;
            m_wMode = NULL;
        }
    
            
                m_has_hMode = false;
                
        if (m_hMode)
        {
            delete m_hMode;
            m_hMode = NULL;
        }
    
            
                m_has_x = false;
                
        if (m_x)
        {
            delete m_x;
            m_x = NULL;
        }
    
            
                m_has_y = false;
                
        if (m_y)
        {
            delete m_y;
            m_y = NULL;
        }
    
            
                m_has_w = false;
                
        if (m_w)
        {
            delete m_w;
            m_w = NULL;
        }
    
            
                m_has_h = false;
                
        if (m_h)
        {
            delete m_h;
            m_h = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_layoutTarget)
                {
                    m_layoutTarget->toXml(\d:layoutTarget\, _outStream);;
                }
            
                if (m_has_xMode)
                {
                    m_layoutTarget->toXml(\d:xMode\, _outStream);;
                }
            
                if (m_has_yMode)
                {
                    m_layoutTarget->toXml(\d:yMode\, _outStream);;
                }
            
                if (m_has_wMode)
                {
                    m_layoutTarget->toXml(\d:wMode\, _outStream);;
                }
            
                if (m_has_hMode)
                {
                    m_layoutTarget->toXml(\d:hMode\, _outStream);;
                }
            
                if (m_has_x)
                {
                    m_layoutTarget->toXml(\d:x\, _outStream);;
                }
            
                if (m_has_y)
                {
                    m_layoutTarget->toXml(\d:y\, _outStream);;
                }
            
                if (m_has_w)
                {
                    m_layoutTarget->toXml(\d:w\, _outStream);;
                }
            
                if (m_has_h)
                {
                    m_layoutTarget->toXml(\d:h\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_layoutTarget->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ManualLayout& default_instance(){

    if (!CT_ManualLayout::default_instance_)
    {
        CT_ManualLayout::default_instance_ = new CT_ManualLayout();
    }
    return *CT_ManualLayout::default_instance_;

        }

    private:
        bool m_has_layoutTarget ;
        CT_LayoutTarget* m_layoutTarget ;
        bool m_has_xMode ;
        CT_LayoutMode* m_xMode ;
        bool m_has_yMode ;
        CT_LayoutMode* m_yMode ;
        bool m_has_wMode ;
        CT_LayoutMode* m_wMode ;
        bool m_has_hMode ;
        CT_LayoutMode* m_hMode ;
        bool m_has_x ;
        CT_Double* m_x ;
        bool m_has_y ;
        CT_Double* m_y ;
        bool m_has_w ;
        CT_Double* m_w ;
        bool m_has_h ;
        CT_Double* m_h ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ManualLayout* default_instance_ ;

    }

    class CT_Layout : public XSD::ComplexType{
    public:
        bool has_manualLayout(){

            return m_has_manualLayout;
        
        }
        CT_ManualLayout* mutable_manualLayout(){

                m_has_manualLayout = true;
                if (!m_manualLayout)
                {
                    m_manualLayout = new CT_ManualLayout();
                }
                return m_manualLayout;
            
        }
        const CT_ManualLayout& manualLayout(){

            if (m_manualLayout)
            {
                return *m_manualLayout;
            }
            return CT_ManualLayout::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_manualLayout = false;
                
        if (m_manualLayout)
        {
            delete m_manualLayout;
            m_manualLayout = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_manualLayout)
                {
                    m_manualLayout->toXml(\d:manualLayout\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_manualLayout->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Layout& default_instance(){

    if (!CT_Layout::default_instance_)
    {
        CT_Layout::default_instance_ = new CT_Layout();
    }
    return *CT_Layout::default_instance_;

        }

    private:
        bool m_has_manualLayout ;
        CT_ManualLayout* m_manualLayout ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Layout* default_instance_ ;

    }

    class CT_Title : public XSD::ComplexType{
    public:
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_Tx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_Tx();
                }
                return m_tx;
            
        }
        const CT_Tx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_Tx::default_instance();
        
        }
        bool has_layout(){

            return m_has_layout;
        
        }
        CT_Layout* mutable_layout(){

                m_has_layout = true;
                if (!m_layout)
                {
                    m_layout = new CT_Layout();
                }
                return m_layout;
            
        }
        const CT_Layout& layout(){

            if (m_layout)
            {
                return *m_layout;
            }
            return CT_Layout::default_instance();
        
        }
        bool has_overlay(){

            return m_has_overlay;
        
        }
        CT_Boolean* mutable_overlay(){

                m_has_overlay = true;
                if (!m_overlay)
                {
                    m_overlay = new CT_Boolean();
                }
                return m_overlay;
            
        }
        const CT_Boolean& overlay(){

            if (m_overlay)
            {
                return *m_overlay;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    
            
                m_has_overlay = false;
                
        if (m_overlay)
        {
            delete m_overlay;
            m_overlay = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_tx)
                {
                    m_tx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_layout)
                {
                    m_tx->toXml(\d:layout\, _outStream);;
                }
            
                if (m_has_overlay)
                {
                    m_tx->toXml(\d:overlay\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_tx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_tx->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_tx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Title& default_instance(){

    if (!CT_Title::default_instance_)
    {
        CT_Title::default_instance_ = new CT_Title();
    }
    return *CT_Title::default_instance_;

        }

    private:
        bool m_has_tx ;
        CT_Tx* m_tx ;
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_overlay ;
        CT_Boolean* m_overlay ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Title* default_instance_ ;

    }

    class CT_RotX : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RotX& default_instance(){

    if (!CT_RotX::default_instance_)
    {
        CT_RotX::default_instance_ = new CT_RotX();
    }
    return *CT_RotX::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_RotX& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_RotX(_val_attr);
        
        }
        const ST_RotX& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_RotX::default_instance();
        
        }

    private:
        static CT_RotX* default_instance_ ;
        bool m_has_val_attr ;
        ST_RotX* m_val_attr ;

    }

    class CT_HPercent : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HPercent& default_instance(){

    if (!CT_HPercent::default_instance_)
    {
        CT_HPercent::default_instance_ = new CT_HPercent();
    }
    return *CT_HPercent::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_HPercent& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_HPercent(_val_attr);
        
        }
        const ST_HPercent& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_HPercent::default_instance();
        
        }

    private:
        static CT_HPercent* default_instance_ ;
        bool m_has_val_attr ;
        ST_HPercent* m_val_attr ;

    }

    class CT_RotY : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RotY& default_instance(){

    if (!CT_RotY::default_instance_)
    {
        CT_RotY::default_instance_ = new CT_RotY();
    }
    return *CT_RotY::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_RotY& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_RotY(_val_attr);
        
        }
        const ST_RotY& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_RotY::default_instance();
        
        }

    private:
        static CT_RotY* default_instance_ ;
        bool m_has_val_attr ;
        ST_RotY* m_val_attr ;

    }

    class CT_DepthPercent : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DepthPercent& default_instance(){

    if (!CT_DepthPercent::default_instance_)
    {
        CT_DepthPercent::default_instance_ = new CT_DepthPercent();
    }
    return *CT_DepthPercent::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_DepthPercent& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_DepthPercent(_val_attr);
        
        }
        const ST_DepthPercent& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_DepthPercent::default_instance();
        
        }

    private:
        static CT_DepthPercent* default_instance_ ;
        bool m_has_val_attr ;
        ST_DepthPercent* m_val_attr ;

    }

    class CT_Perspective : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Perspective& default_instance(){

    if (!CT_Perspective::default_instance_)
    {
        CT_Perspective::default_instance_ = new CT_Perspective();
    }
    return *CT_Perspective::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Perspective& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Perspective(_val_attr);
        
        }
        const ST_Perspective& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Perspective::default_instance();
        
        }

    private:
        static CT_Perspective* default_instance_ ;
        bool m_has_val_attr ;
        ST_Perspective* m_val_attr ;

    }

    class CT_View3D : public XSD::ComplexType{
    public:
        bool has_rotX(){

            return m_has_rotX;
        
        }
        CT_RotX* mutable_rotX(){

                m_has_rotX = true;
                if (!m_rotX)
                {
                    m_rotX = new CT_RotX();
                }
                return m_rotX;
            
        }
        const CT_RotX& rotX(){

            if (m_rotX)
            {
                return *m_rotX;
            }
            return CT_RotX::default_instance();
        
        }
        bool has_hPercent(){

            return m_has_hPercent;
        
        }
        CT_HPercent* mutable_hPercent(){

                m_has_hPercent = true;
                if (!m_hPercent)
                {
                    m_hPercent = new CT_HPercent();
                }
                return m_hPercent;
            
        }
        const CT_HPercent& hPercent(){

            if (m_hPercent)
            {
                return *m_hPercent;
            }
            return CT_HPercent::default_instance();
        
        }
        bool has_rotY(){

            return m_has_rotY;
        
        }
        CT_RotY* mutable_rotY(){

                m_has_rotY = true;
                if (!m_rotY)
                {
                    m_rotY = new CT_RotY();
                }
                return m_rotY;
            
        }
        const CT_RotY& rotY(){

            if (m_rotY)
            {
                return *m_rotY;
            }
            return CT_RotY::default_instance();
        
        }
        bool has_depthPercent(){

            return m_has_depthPercent;
        
        }
        CT_DepthPercent* mutable_depthPercent(){

                m_has_depthPercent = true;
                if (!m_depthPercent)
                {
                    m_depthPercent = new CT_DepthPercent();
                }
                return m_depthPercent;
            
        }
        const CT_DepthPercent& depthPercent(){

            if (m_depthPercent)
            {
                return *m_depthPercent;
            }
            return CT_DepthPercent::default_instance();
        
        }
        bool has_rAngAx(){

            return m_has_rAngAx;
        
        }
        CT_Boolean* mutable_rAngAx(){

                m_has_rAngAx = true;
                if (!m_rAngAx)
                {
                    m_rAngAx = new CT_Boolean();
                }
                return m_rAngAx;
            
        }
        const CT_Boolean& rAngAx(){

            if (m_rAngAx)
            {
                return *m_rAngAx;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_perspective(){

            return m_has_perspective;
        
        }
        CT_Perspective* mutable_perspective(){

                m_has_perspective = true;
                if (!m_perspective)
                {
                    m_perspective = new CT_Perspective();
                }
                return m_perspective;
            
        }
        const CT_Perspective& perspective(){

            if (m_perspective)
            {
                return *m_perspective;
            }
            return CT_Perspective::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_rotX = false;
                
        if (m_rotX)
        {
            delete m_rotX;
            m_rotX = NULL;
        }
    
            
                m_has_hPercent = false;
                
        if (m_hPercent)
        {
            delete m_hPercent;
            m_hPercent = NULL;
        }
    
            
                m_has_rotY = false;
                
        if (m_rotY)
        {
            delete m_rotY;
            m_rotY = NULL;
        }
    
            
                m_has_depthPercent = false;
                
        if (m_depthPercent)
        {
            delete m_depthPercent;
            m_depthPercent = NULL;
        }
    
            
                m_has_rAngAx = false;
                
        if (m_rAngAx)
        {
            delete m_rAngAx;
            m_rAngAx = NULL;
        }
    
            
                m_has_perspective = false;
                
        if (m_perspective)
        {
            delete m_perspective;
            m_perspective = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_rotX)
                {
                    m_rotX->toXml(\d:rotX\, _outStream);;
                }
            
                if (m_has_hPercent)
                {
                    m_rotX->toXml(\d:hPercent\, _outStream);;
                }
            
                if (m_has_rotY)
                {
                    m_rotX->toXml(\d:rotY\, _outStream);;
                }
            
                if (m_has_depthPercent)
                {
                    m_rotX->toXml(\d:depthPercent\, _outStream);;
                }
            
                if (m_has_rAngAx)
                {
                    m_rotX->toXml(\d:rAngAx\, _outStream);;
                }
            
                if (m_has_perspective)
                {
                    m_rotX->toXml(\d:perspective\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_rotX->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_View3D& default_instance(){

    if (!CT_View3D::default_instance_)
    {
        CT_View3D::default_instance_ = new CT_View3D();
    }
    return *CT_View3D::default_instance_;

        }

    private:
        bool m_has_rotX ;
        CT_RotX* m_rotX ;
        bool m_has_hPercent ;
        CT_HPercent* m_hPercent ;
        bool m_has_rotY ;
        CT_RotY* m_rotY ;
        bool m_has_depthPercent ;
        CT_DepthPercent* m_depthPercent ;
        bool m_has_rAngAx ;
        CT_Boolean* m_rAngAx ;
        bool m_has_perspective ;
        CT_Perspective* m_perspective ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_View3D* default_instance_ ;

    }

    class CT_Surface : public XSD::ComplexType{
    public:
        bool has_thickness(){

            return m_has_thickness;
        
        }
        CT_Thickness* mutable_thickness(){

                m_has_thickness = true;
                if (!m_thickness)
                {
                    m_thickness = new CT_Thickness();
                }
                return m_thickness;
            
        }
        const CT_Thickness& thickness(){

            if (m_thickness)
            {
                return *m_thickness;
            }
            return CT_Thickness::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_pictureOptions(){

            return m_has_pictureOptions;
        
        }
        CT_PictureOptions* mutable_pictureOptions(){

                m_has_pictureOptions = true;
                if (!m_pictureOptions)
                {
                    m_pictureOptions = new CT_PictureOptions();
                }
                return m_pictureOptions;
            
        }
        const CT_PictureOptions& pictureOptions(){

            if (m_pictureOptions)
            {
                return *m_pictureOptions;
            }
            return CT_PictureOptions::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_thickness = false;
                
        if (m_thickness)
        {
            delete m_thickness;
            m_thickness = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_pictureOptions = false;
                
        if (m_pictureOptions)
        {
            delete m_pictureOptions;
            m_pictureOptions = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_thickness)
                {
                    m_thickness->toXml(\d:thickness\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_thickness->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_pictureOptions)
                {
                    m_thickness->toXml(\d:pictureOptions\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_thickness->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Surface& default_instance(){

    if (!CT_Surface::default_instance_)
    {
        CT_Surface::default_instance_ = new CT_Surface();
    }
    return *CT_Surface::default_instance_;

        }

    private:
        bool m_has_thickness ;
        CT_Thickness* m_thickness ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_pictureOptions ;
        CT_PictureOptions* m_pictureOptions ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Surface* default_instance_ ;

    }

    class CT_Thickness : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Thickness& default_instance(){

    if (!CT_Thickness::default_instance_)
    {
        CT_Thickness::default_instance_ = new CT_Thickness();
    }
    return *CT_Thickness::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Thickness& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Thickness(_val_attr);
        
        }
        const ST_Thickness& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Thickness::default_instance();
        
        }

    private:
        static CT_Thickness* default_instance_ ;
        bool m_has_val_attr ;
        ST_Thickness* m_val_attr ;

    }

    class CT_DTable : public XSD::ComplexType{
    public:
        bool has_showHorzBorder(){

            return m_has_showHorzBorder;
        
        }
        CT_Boolean* mutable_showHorzBorder(){

                m_has_showHorzBorder = true;
                if (!m_showHorzBorder)
                {
                    m_showHorzBorder = new CT_Boolean();
                }
                return m_showHorzBorder;
            
        }
        const CT_Boolean& showHorzBorder(){

            if (m_showHorzBorder)
            {
                return *m_showHorzBorder;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showVertBorder(){

            return m_has_showVertBorder;
        
        }
        CT_Boolean* mutable_showVertBorder(){

                m_has_showVertBorder = true;
                if (!m_showVertBorder)
                {
                    m_showVertBorder = new CT_Boolean();
                }
                return m_showVertBorder;
            
        }
        const CT_Boolean& showVertBorder(){

            if (m_showVertBorder)
            {
                return *m_showVertBorder;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showOutline(){

            return m_has_showOutline;
        
        }
        CT_Boolean* mutable_showOutline(){

                m_has_showOutline = true;
                if (!m_showOutline)
                {
                    m_showOutline = new CT_Boolean();
                }
                return m_showOutline;
            
        }
        const CT_Boolean& showOutline(){

            if (m_showOutline)
            {
                return *m_showOutline;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showKeys(){

            return m_has_showKeys;
        
        }
        CT_Boolean* mutable_showKeys(){

                m_has_showKeys = true;
                if (!m_showKeys)
                {
                    m_showKeys = new CT_Boolean();
                }
                return m_showKeys;
            
        }
        const CT_Boolean& showKeys(){

            if (m_showKeys)
            {
                return *m_showKeys;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_showHorzBorder = false;
                
        if (m_showHorzBorder)
        {
            delete m_showHorzBorder;
            m_showHorzBorder = NULL;
        }
    
            
                m_has_showVertBorder = false;
                
        if (m_showVertBorder)
        {
            delete m_showVertBorder;
            m_showVertBorder = NULL;
        }
    
            
                m_has_showOutline = false;
                
        if (m_showOutline)
        {
            delete m_showOutline;
            m_showOutline = NULL;
        }
    
            
                m_has_showKeys = false;
                
        if (m_showKeys)
        {
            delete m_showKeys;
            m_showKeys = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_showHorzBorder)
                {
                    m_showHorzBorder->toXml(\d:showHorzBorder\, _outStream);;
                }
            
                if (m_has_showVertBorder)
                {
                    m_showHorzBorder->toXml(\d:showVertBorder\, _outStream);;
                }
            
                if (m_has_showOutline)
                {
                    m_showHorzBorder->toXml(\d:showOutline\, _outStream);;
                }
            
                if (m_has_showKeys)
                {
                    m_showHorzBorder->toXml(\d:showKeys\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_showHorzBorder->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_showHorzBorder->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_showHorzBorder->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DTable& default_instance(){

    if (!CT_DTable::default_instance_)
    {
        CT_DTable::default_instance_ = new CT_DTable();
    }
    return *CT_DTable::default_instance_;

        }

    private:
        bool m_has_showHorzBorder ;
        CT_Boolean* m_showHorzBorder ;
        bool m_has_showVertBorder ;
        CT_Boolean* m_showVertBorder ;
        bool m_has_showOutline ;
        CT_Boolean* m_showOutline ;
        bool m_has_showKeys ;
        CT_Boolean* m_showKeys ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DTable* default_instance_ ;

    }

    class CT_GapAmount : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GapAmount& default_instance(){

    if (!CT_GapAmount::default_instance_)
    {
        CT_GapAmount::default_instance_ = new CT_GapAmount();
    }
    return *CT_GapAmount::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_GapAmount& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_GapAmount(_val_attr);
        
        }
        const ST_GapAmount& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_GapAmount::default_instance();
        
        }

    private:
        static CT_GapAmount* default_instance_ ;
        bool m_has_val_attr ;
        ST_GapAmount* m_val_attr ;

    }

    class CT_Overlap : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Overlap& default_instance(){

    if (!CT_Overlap::default_instance_)
    {
        CT_Overlap::default_instance_ = new CT_Overlap();
    }
    return *CT_Overlap::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Overlap& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Overlap(_val_attr);
        
        }
        const ST_Overlap& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Overlap::default_instance();
        
        }

    private:
        static CT_Overlap* default_instance_ ;
        bool m_has_val_attr ;
        ST_Overlap* m_val_attr ;

    }

    class CT_BubbleScale : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BubbleScale& default_instance(){

    if (!CT_BubbleScale::default_instance_)
    {
        CT_BubbleScale::default_instance_ = new CT_BubbleScale();
    }
    return *CT_BubbleScale::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_BubbleScale& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_BubbleScale(_val_attr);
        
        }
        const ST_BubbleScale& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_BubbleScale::default_instance();
        
        }

    private:
        static CT_BubbleScale* default_instance_ ;
        bool m_has_val_attr ;
        ST_BubbleScale* m_val_attr ;

    }

    class CT_SizeRepresents : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SizeRepresents& default_instance(){

    if (!CT_SizeRepresents::default_instance_)
    {
        CT_SizeRepresents::default_instance_ = new CT_SizeRepresents();
    }
    return *CT_SizeRepresents::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_SizeRepresents& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_SizeRepresents(_val_attr);
        
        }
        const ST_SizeRepresents& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_SizeRepresents::default_instance();
        
        }

    private:
        static CT_SizeRepresents* default_instance_ ;
        bool m_has_val_attr ;
        ST_SizeRepresents* m_val_attr ;

    }

    class CT_FirstSliceAng : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_FirstSliceAng& default_instance(){

    if (!CT_FirstSliceAng::default_instance_)
    {
        CT_FirstSliceAng::default_instance_ = new CT_FirstSliceAng();
    }
    return *CT_FirstSliceAng::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_FirstSliceAng& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_FirstSliceAng(_val_attr);
        
        }
        const ST_FirstSliceAng& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_FirstSliceAng::default_instance();
        
        }

    private:
        static CT_FirstSliceAng* default_instance_ ;
        bool m_has_val_attr ;
        ST_FirstSliceAng* m_val_attr ;

    }

    class CT_HoleSize : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HoleSize& default_instance(){

    if (!CT_HoleSize::default_instance_)
    {
        CT_HoleSize::default_instance_ = new CT_HoleSize();
    }
    return *CT_HoleSize::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_HoleSize& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_HoleSize(_val_attr);
        
        }
        const ST_HoleSize& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_HoleSize::default_instance();
        
        }

    private:
        static CT_HoleSize* default_instance_ ;
        bool m_has_val_attr ;
        ST_HoleSize* m_val_attr ;

    }

    class CT_SplitType : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SplitType& default_instance(){

    if (!CT_SplitType::default_instance_)
    {
        CT_SplitType::default_instance_ = new CT_SplitType();
    }
    return *CT_SplitType::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_SplitType& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_SplitType(_val_attr);
        
        }
        const ST_SplitType& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_SplitType::default_instance();
        
        }

    private:
        static CT_SplitType* default_instance_ ;
        bool m_has_val_attr ;
        ST_SplitType* m_val_attr ;

    }

    class CT_CustSplit : public XSD::ComplexType{
    public:
        bool has_secondPiePt(){

            return m_has_secondPiePt;
        
        }
        CT_UnsignedInt* mutable_secondPiePt(){

                m_has_secondPiePt = true;
                if (!m_secondPiePt)
                {
                    m_secondPiePt = new CT_UnsignedInt();
                }
                return m_secondPiePt;
            
        }
        const CT_UnsignedInt& secondPiePt(){

            if (m_secondPiePt)
            {
                return *m_secondPiePt;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        void clear(){

                m_has_secondPiePt = false;
                
        if (m_secondPiePt)
        {
            delete m_secondPiePt;
            m_secondPiePt = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_secondPiePt)
                {
                    m_secondPiePt->toXml(\d:secondPiePt\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CustSplit& default_instance(){

    if (!CT_CustSplit::default_instance_)
    {
        CT_CustSplit::default_instance_ = new CT_CustSplit();
    }
    return *CT_CustSplit::default_instance_;

        }

    private:
        bool m_has_secondPiePt ;
        CT_UnsignedInt* m_secondPiePt ;
        static CT_CustSplit* default_instance_ ;

    }

    class CT_SecondPieSize : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SecondPieSize& default_instance(){

    if (!CT_SecondPieSize::default_instance_)
    {
        CT_SecondPieSize::default_instance_ = new CT_SecondPieSize();
    }
    return *CT_SecondPieSize::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_SecondPieSize& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_SecondPieSize(_val_attr);
        
        }
        const ST_SecondPieSize& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_SecondPieSize::default_instance();
        
        }

    private:
        static CT_SecondPieSize* default_instance_ ;
        bool m_has_val_attr ;
        ST_SecondPieSize* m_val_attr ;

    }

    class CT_NumFmt : public XSD::ComplexType{
    public:
        void clear(){

                m_has_formatCode_attr = false;
                
        if (m_formatCode_attr)
        {
            delete m_formatCode_attr;
            m_formatCode_attr = NULL;
        }
    
            
                m_has_sourceLinked_attr = false;
                m_sourceLinked_attr = false;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(ormatCode\, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_sourceLinked_attr) << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_NumFmt& default_instance(){

    if (!CT_NumFmt::default_instance_)
    {
        CT_NumFmt::default_instance_ = new CT_NumFmt();
    }
    return *CT_NumFmt::default_instance_;

        }
        bool has_formatCode_attr(){

            return m_has_formatCode_attr;
        
        }
        void set_formatCode_attr(const ns_s::ST_Xstring& _formatCode_attr ){

            m_has_formatCode_attr = true;
            m_formatCode_attr = new ns_s::ST_Xstring(_formatCode_attr);
        
        }
        const ns_s::ST_Xstring& formatCode_attr(){

            if (m_formatCode_attr)
            {
                return *m_formatCode_attr;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        bool has_sourceLinked_attr(){

            return m_has_sourceLinked_attr;
        
        }
        void set_sourceLinked_attr(const boolean& _sourceLinked_attr ){

        m_has_sourceLinked_attr = true;
        m_sourceLinked_attr = _sourceLinked_attr;
        
        }
        const boolean& sourceLinked_attr(){

            return type: oolean\nname: \m_sourceLinked_attr\n;
        
        }

    private:
        static CT_NumFmt* default_instance_ ;
        bool m_has_formatCode_attr ;
        ns_s::ST_Xstring* m_formatCode_attr ;
        bool m_has_sourceLinked_attr ;
        boolean m_sourceLinked_attr ;

    }

    class CT_LblAlgn : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LblAlgn& default_instance(){

    if (!CT_LblAlgn::default_instance_)
    {
        CT_LblAlgn::default_instance_ = new CT_LblAlgn();
    }
    return *CT_LblAlgn::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_LblAlgn& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_LblAlgn(_val_attr);
        
        }
        const ST_LblAlgn& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_LblAlgn::default_instance();
        
        }

    private:
        static CT_LblAlgn* default_instance_ ;
        bool m_has_val_attr ;
        ST_LblAlgn* m_val_attr ;

    }

    class CT_DLblPos : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DLblPos& default_instance(){

    if (!CT_DLblPos::default_instance_)
    {
        CT_DLblPos::default_instance_ = new CT_DLblPos();
    }
    return *CT_DLblPos::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_DLblPos& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_DLblPos(_val_attr);
        
        }
        const ST_DLblPos& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_DLblPos::default_instance();
        
        }

    private:
        static CT_DLblPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_DLblPos* m_val_attr ;

    }

    class CT_DLbl : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_delete(){

            return m_has_delete;
        
        }
        CT_Boolean* mutable_delete(){

                
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_delete = true;
                if (!m_delete)
                {
                    m_delete = new CT_Boolean();
                }
                return m_delete;
            
        }
        const CT_Boolean& delete(){

            if (m_delete)
            {
                return *m_delete;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_layout(){

            return m_has_layout;
        
        }
        CT_Layout* mutable_layout(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_layout = true;
                if (!m_layout)
                {
                    m_layout = new CT_Layout();
                }
                return m_layout;
            
        }
        const CT_Layout& layout(){

            if (m_layout)
            {
                return *m_layout;
            }
            return CT_Layout::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_Tx* mutable_tx(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_Tx();
                }
                return m_tx;
            
        }
        const CT_Tx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_Tx::default_instance();
        
        }
        bool has_numFmt(){

            return m_has_numFmt;
        
        }
        CT_NumFmt* mutable_numFmt(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_numFmt = true;
                if (!m_numFmt)
                {
                    m_numFmt = new CT_NumFmt();
                }
                return m_numFmt;
            
        }
        const CT_NumFmt& numFmt(){

            if (m_numFmt)
            {
                return *m_numFmt;
            }
            return CT_NumFmt::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_dLblPos(){

            return m_has_dLblPos;
        
        }
        CT_DLblPos* mutable_dLblPos(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_dLblPos = true;
                if (!m_dLblPos)
                {
                    m_dLblPos = new CT_DLblPos();
                }
                return m_dLblPos;
            
        }
        const CT_DLblPos& dLblPos(){

            if (m_dLblPos)
            {
                return *m_dLblPos;
            }
            return CT_DLblPos::default_instance();
        
        }
        bool has_showLegendKey(){

            return m_has_showLegendKey;
        
        }
        CT_Boolean* mutable_showLegendKey(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLegendKey = true;
                if (!m_showLegendKey)
                {
                    m_showLegendKey = new CT_Boolean();
                }
                return m_showLegendKey;
            
        }
        const CT_Boolean& showLegendKey(){

            if (m_showLegendKey)
            {
                return *m_showLegendKey;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showVal(){

            return m_has_showVal;
        
        }
        CT_Boolean* mutable_showVal(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showVal = true;
                if (!m_showVal)
                {
                    m_showVal = new CT_Boolean();
                }
                return m_showVal;
            
        }
        const CT_Boolean& showVal(){

            if (m_showVal)
            {
                return *m_showVal;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showCatName(){

            return m_has_showCatName;
        
        }
        CT_Boolean* mutable_showCatName(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showCatName = true;
                if (!m_showCatName)
                {
                    m_showCatName = new CT_Boolean();
                }
                return m_showCatName;
            
        }
        const CT_Boolean& showCatName(){

            if (m_showCatName)
            {
                return *m_showCatName;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showSerName(){

            return m_has_showSerName;
        
        }
        CT_Boolean* mutable_showSerName(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showSerName = true;
                if (!m_showSerName)
                {
                    m_showSerName = new CT_Boolean();
                }
                return m_showSerName;
            
        }
        const CT_Boolean& showSerName(){

            if (m_showSerName)
            {
                return *m_showSerName;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showPercent(){

            return m_has_showPercent;
        
        }
        CT_Boolean* mutable_showPercent(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showPercent = true;
                if (!m_showPercent)
                {
                    m_showPercent = new CT_Boolean();
                }
                return m_showPercent;
            
        }
        const CT_Boolean& showPercent(){

            if (m_showPercent)
            {
                return *m_showPercent;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showBubbleSize(){

            return m_has_showBubbleSize;
        
        }
        CT_Boolean* mutable_showBubbleSize(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showBubbleSize = true;
                if (!m_showBubbleSize)
                {
                    m_showBubbleSize = new CT_Boolean();
                }
                return m_showBubbleSize;
            
        }
        const CT_Boolean& showBubbleSize(){

            if (m_showBubbleSize)
            {
                return *m_showBubbleSize;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_separator(){

        return m_has_separator;
    
        }
        void set_separator(const string& _separator ){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    ;
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = true;
                string = _separator;
            
        }
        const string& separator(){

        return type: \string\nname: \m_separator\n;
    
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
             
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    
            
                m_has_separator = false;
                m_separator.clear();
             
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
             
                if (m_has_delete)
                {
                    m_delete->toXml(\d:delete\, _outStream);;
                }
            
                if (m_has_layout)
                {
                    m_delete->toXml(\d:layout\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_delete->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_numFmt)
                {
                    m_delete->toXml(\d:numFmt\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_delete->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_delete->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_dLblPos)
                {
                    m_delete->toXml(\d:dLblPos\, _outStream);;
                }
            
                if (m_has_showLegendKey)
                {
                    m_delete->toXml(\d:showLegendKey\, _outStream);;
                }
            
                if (m_has_showVal)
                {
                    m_delete->toXml(\d:showVal\, _outStream);;
                }
            
                if (m_has_showCatName)
                {
                    m_delete->toXml(\d:showCatName\, _outStream);;
                }
            
                if (m_has_showSerName)
                {
                    m_delete->toXml(\d:showSerName\, _outStream);;
                }
            
                if (m_has_showPercent)
                {
                    m_delete->toXml(\d:showPercent\, _outStream);;
                }
            
                if (m_has_showBubbleSize)
                {
                    m_delete->toXml(\d:showBubbleSize\, _outStream);;
                }
            
                if (m_has_separator)
                {
                    _outStream << \<d:separator>\ << m_delete << \</d:separator>\;;
                }
             
                if (m_has_extLst)
                {
                    m_extLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DLbl& default_instance(){

    if (!CT_DLbl::default_instance_)
    {
        CT_DLbl::default_instance_ = new CT_DLbl();
    }
    return *CT_DLbl::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_tx ;
        CT_Tx* m_tx ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_dLblPos ;
        CT_DLblPos* m_dLblPos ;
        bool m_has_showLegendKey ;
        CT_Boolean* m_showLegendKey ;
        bool m_has_showVal ;
        CT_Boolean* m_showVal ;
        bool m_has_showCatName ;
        CT_Boolean* m_showCatName ;
        bool m_has_showSerName ;
        CT_Boolean* m_showSerName ;
        bool m_has_showPercent ;
        CT_Boolean* m_showPercent ;
        bool m_has_showBubbleSize ;
        CT_Boolean* m_showBubbleSize ;
        bool m_has_separator ;
        string m_separator ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DLbl* default_instance_ ;

    }

    class CT_DLbls : public XSD::ComplexType{
    public:
        bool has_dLbl(){

            return m_has_dLbl;
        
        }
        CT_DLbl* mutable_dLbl(){

                m_has_dLbl = true;
                if (!m_dLbl)
                {
                    m_dLbl = new CT_DLbl();
                }
                return m_dLbl;
            
        }
        const CT_DLbl& dLbl(){

            if (m_dLbl)
            {
                return *m_dLbl;
            }
            return CT_DLbl::default_instance();
        
        }
        bool has_delete(){

            return m_has_delete;
        
        }
        CT_Boolean* mutable_delete(){

                
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_delete = true;
                if (!m_delete)
                {
                    m_delete = new CT_Boolean();
                }
                return m_delete;
            
        }
        const CT_Boolean& delete(){

            if (m_delete)
            {
                return *m_delete;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_numFmt(){

            return m_has_numFmt;
        
        }
        CT_NumFmt* mutable_numFmt(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_numFmt = true;
                if (!m_numFmt)
                {
                    m_numFmt = new CT_NumFmt();
                }
                return m_numFmt;
            
        }
        const CT_NumFmt& numFmt(){

            if (m_numFmt)
            {
                return *m_numFmt;
            }
            return CT_NumFmt::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_dLblPos(){

            return m_has_dLblPos;
        
        }
        CT_DLblPos* mutable_dLblPos(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_dLblPos = true;
                if (!m_dLblPos)
                {
                    m_dLblPos = new CT_DLblPos();
                }
                return m_dLblPos;
            
        }
        const CT_DLblPos& dLblPos(){

            if (m_dLblPos)
            {
                return *m_dLblPos;
            }
            return CT_DLblPos::default_instance();
        
        }
        bool has_showLegendKey(){

            return m_has_showLegendKey;
        
        }
        CT_Boolean* mutable_showLegendKey(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_showLegendKey = true;
                if (!m_showLegendKey)
                {
                    m_showLegendKey = new CT_Boolean();
                }
                return m_showLegendKey;
            
        }
        const CT_Boolean& showLegendKey(){

            if (m_showLegendKey)
            {
                return *m_showLegendKey;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showVal(){

            return m_has_showVal;
        
        }
        CT_Boolean* mutable_showVal(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_showVal = true;
                if (!m_showVal)
                {
                    m_showVal = new CT_Boolean();
                }
                return m_showVal;
            
        }
        const CT_Boolean& showVal(){

            if (m_showVal)
            {
                return *m_showVal;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showCatName(){

            return m_has_showCatName;
        
        }
        CT_Boolean* mutable_showCatName(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_showCatName = true;
                if (!m_showCatName)
                {
                    m_showCatName = new CT_Boolean();
                }
                return m_showCatName;
            
        }
        const CT_Boolean& showCatName(){

            if (m_showCatName)
            {
                return *m_showCatName;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showSerName(){

            return m_has_showSerName;
        
        }
        CT_Boolean* mutable_showSerName(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_showSerName = true;
                if (!m_showSerName)
                {
                    m_showSerName = new CT_Boolean();
                }
                return m_showSerName;
            
        }
        const CT_Boolean& showSerName(){

            if (m_showSerName)
            {
                return *m_showSerName;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showPercent(){

            return m_has_showPercent;
        
        }
        CT_Boolean* mutable_showPercent(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_showPercent = true;
                if (!m_showPercent)
                {
                    m_showPercent = new CT_Boolean();
                }
                return m_showPercent;
            
        }
        const CT_Boolean& showPercent(){

            if (m_showPercent)
            {
                return *m_showPercent;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_showBubbleSize(){

            return m_has_showBubbleSize;
        
        }
        CT_Boolean* mutable_showBubbleSize(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_showBubbleSize = true;
                if (!m_showBubbleSize)
                {
                    m_showBubbleSize = new CT_Boolean();
                }
                return m_showBubbleSize;
            
        }
        const CT_Boolean& showBubbleSize(){

            if (m_showBubbleSize)
            {
                return *m_showBubbleSize;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_separator(){

        return m_has_separator;
    
        }
        void set_separator(const string& _separator ){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_separator = true;
                string = _separator;
            
        }
        const string& separator(){

        return type: \string\nname: \m_separator\n;
    
        }
        bool has_showLeaderLines(){

            return m_has_showLeaderLines;
        
        }
        CT_Boolean* mutable_showLeaderLines(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    ;
            
                m_has_showLeaderLines = true;
                if (!m_showLeaderLines)
                {
                    m_showLeaderLines = new CT_Boolean();
                }
                return m_showLeaderLines;
            
        }
        const CT_Boolean& showLeaderLines(){

            if (m_showLeaderLines)
            {
                return *m_showLeaderLines;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_leaderLines(){

            return m_has_leaderLines;
        
        }
        CT_ChartLines* mutable_leaderLines(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    ;
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    ;
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    ;
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    ;
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    ;
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    ;
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    ;
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    ;
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    ;
            
                m_has_separator = false;
                m_separator.clear();;
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    ;
            
                m_has_leaderLines = true;
                if (!m_leaderLines)
                {
                    m_leaderLines = new CT_ChartLines();
                }
                return m_leaderLines;
            
        }
        const CT_ChartLines& leaderLines(){

            if (m_leaderLines)
            {
                return *m_leaderLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_dLbl = false;
                
        if (m_dLbl)
        {
            delete m_dLbl;
            m_dLbl = NULL;
        }
    
             
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_dLblPos = false;
                
        if (m_dLblPos)
        {
            delete m_dLblPos;
            m_dLblPos = NULL;
        }
    
            
                m_has_showLegendKey = false;
                
        if (m_showLegendKey)
        {
            delete m_showLegendKey;
            m_showLegendKey = NULL;
        }
    
            
                m_has_showVal = false;
                
        if (m_showVal)
        {
            delete m_showVal;
            m_showVal = NULL;
        }
    
            
                m_has_showCatName = false;
                
        if (m_showCatName)
        {
            delete m_showCatName;
            m_showCatName = NULL;
        }
    
            
                m_has_showSerName = false;
                
        if (m_showSerName)
        {
            delete m_showSerName;
            m_showSerName = NULL;
        }
    
            
                m_has_showPercent = false;
                
        if (m_showPercent)
        {
            delete m_showPercent;
            m_showPercent = NULL;
        }
    
            
                m_has_showBubbleSize = false;
                
        if (m_showBubbleSize)
        {
            delete m_showBubbleSize;
            m_showBubbleSize = NULL;
        }
    
            
                m_has_separator = false;
                m_separator.clear();
            
                m_has_showLeaderLines = false;
                
        if (m_showLeaderLines)
        {
            delete m_showLeaderLines;
            m_showLeaderLines = NULL;
        }
    
            
                m_has_leaderLines = false;
                
        if (m_leaderLines)
        {
            delete m_leaderLines;
            m_leaderLines = NULL;
        }
    
             
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_dLbl)
                {
                    m_dLbl->toXml(\d:dLbl\, _outStream);;
                }
             
                if (m_has_delete)
                {
                    m_delete->toXml(\d:delete\, _outStream);;
                }
            
                if (m_has_numFmt)
                {
                    m_delete->toXml(\d:numFmt\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_delete->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_delete->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_dLblPos)
                {
                    m_delete->toXml(\d:dLblPos\, _outStream);;
                }
            
                if (m_has_showLegendKey)
                {
                    m_delete->toXml(\d:showLegendKey\, _outStream);;
                }
            
                if (m_has_showVal)
                {
                    m_delete->toXml(\d:showVal\, _outStream);;
                }
            
                if (m_has_showCatName)
                {
                    m_delete->toXml(\d:showCatName\, _outStream);;
                }
            
                if (m_has_showSerName)
                {
                    m_delete->toXml(\d:showSerName\, _outStream);;
                }
            
                if (m_has_showPercent)
                {
                    m_delete->toXml(\d:showPercent\, _outStream);;
                }
            
                if (m_has_showBubbleSize)
                {
                    m_delete->toXml(\d:showBubbleSize\, _outStream);;
                }
            
                if (m_has_separator)
                {
                    _outStream << \<d:separator>\ << m_delete << \</d:separator>\;;
                }
            
                if (m_has_showLeaderLines)
                {
                    m_delete->toXml(\d:showLeaderLines\, _outStream);;
                }
            
                if (m_has_leaderLines)
                {
                    m_delete->toXml(\d:leaderLines\, _outStream);;
                }
             
                if (m_has_extLst)
                {
                    m_extLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DLbls& default_instance(){

    if (!CT_DLbls::default_instance_)
    {
        CT_DLbls::default_instance_ = new CT_DLbls();
    }
    return *CT_DLbls::default_instance_;

        }

    private:
        bool m_has_dLbl ;
        CT_DLbl* m_dLbl ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_dLblPos ;
        CT_DLblPos* m_dLblPos ;
        bool m_has_showLegendKey ;
        CT_Boolean* m_showLegendKey ;
        bool m_has_showVal ;
        CT_Boolean* m_showVal ;
        bool m_has_showCatName ;
        CT_Boolean* m_showCatName ;
        bool m_has_showSerName ;
        CT_Boolean* m_showSerName ;
        bool m_has_showPercent ;
        CT_Boolean* m_showPercent ;
        bool m_has_showBubbleSize ;
        CT_Boolean* m_showBubbleSize ;
        bool m_has_separator ;
        string m_separator ;
        bool m_has_showLeaderLines ;
        CT_Boolean* m_showLeaderLines ;
        bool m_has_leaderLines ;
        CT_ChartLines* m_leaderLines ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DLbls* default_instance_ ;

    }

    class CT_MarkerStyle : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_MarkerStyle& default_instance(){

    if (!CT_MarkerStyle::default_instance_)
    {
        CT_MarkerStyle::default_instance_ = new CT_MarkerStyle();
    }
    return *CT_MarkerStyle::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_MarkerStyle& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_MarkerStyle(_val_attr);
        
        }
        const ST_MarkerStyle& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_MarkerStyle::default_instance();
        
        }

    private:
        static CT_MarkerStyle* default_instance_ ;
        bool m_has_val_attr ;
        ST_MarkerStyle* m_val_attr ;

    }

    class CT_MarkerSize : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_MarkerSize& default_instance(){

    if (!CT_MarkerSize::default_instance_)
    {
        CT_MarkerSize::default_instance_ = new CT_MarkerSize();
    }
    return *CT_MarkerSize::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_MarkerSize& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_MarkerSize(_val_attr);
        
        }
        const ST_MarkerSize& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_MarkerSize::default_instance();
        
        }

    private:
        static CT_MarkerSize* default_instance_ ;
        bool m_has_val_attr ;
        ST_MarkerSize* m_val_attr ;

    }

    class CT_Marker : public XSD::ComplexType{
    public:
        bool has_symbol(){

            return m_has_symbol;
        
        }
        CT_MarkerStyle* mutable_symbol(){

                m_has_symbol = true;
                if (!m_symbol)
                {
                    m_symbol = new CT_MarkerStyle();
                }
                return m_symbol;
            
        }
        const CT_MarkerStyle& symbol(){

            if (m_symbol)
            {
                return *m_symbol;
            }
            return CT_MarkerStyle::default_instance();
        
        }
        bool has_size(){

            return m_has_size;
        
        }
        CT_MarkerSize* mutable_size(){

                m_has_size = true;
                if (!m_size)
                {
                    m_size = new CT_MarkerSize();
                }
                return m_size;
            
        }
        const CT_MarkerSize& size(){

            if (m_size)
            {
                return *m_size;
            }
            return CT_MarkerSize::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_symbol = false;
                
        if (m_symbol)
        {
            delete m_symbol;
            m_symbol = NULL;
        }
    
            
                m_has_size = false;
                
        if (m_size)
        {
            delete m_size;
            m_size = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_symbol)
                {
                    m_symbol->toXml(\d:symbol\, _outStream);;
                }
            
                if (m_has_size)
                {
                    m_symbol->toXml(\d:size\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_symbol->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_symbol->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Marker& default_instance(){

    if (!CT_Marker::default_instance_)
    {
        CT_Marker::default_instance_ = new CT_Marker();
    }
    return *CT_Marker::default_instance_;

        }

    private:
        bool m_has_symbol ;
        CT_MarkerStyle* m_symbol ;
        bool m_has_size ;
        CT_MarkerSize* m_size ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Marker* default_instance_ ;

    }

    class CT_DPt : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_invertIfNegative(){

            return m_has_invertIfNegative;
        
        }
        CT_Boolean* mutable_invertIfNegative(){

                m_has_invertIfNegative = true;
                if (!m_invertIfNegative)
                {
                    m_invertIfNegative = new CT_Boolean();
                }
                return m_invertIfNegative;
            
        }
        const CT_Boolean& invertIfNegative(){

            if (m_invertIfNegative)
            {
                return *m_invertIfNegative;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_marker(){

            return m_has_marker;
        
        }
        CT_Marker* mutable_marker(){

                m_has_marker = true;
                if (!m_marker)
                {
                    m_marker = new CT_Marker();
                }
                return m_marker;
            
        }
        const CT_Marker& marker(){

            if (m_marker)
            {
                return *m_marker;
            }
            return CT_Marker::default_instance();
        
        }
        bool has_bubble3D(){

            return m_has_bubble3D;
        
        }
        CT_Boolean* mutable_bubble3D(){

                m_has_bubble3D = true;
                if (!m_bubble3D)
                {
                    m_bubble3D = new CT_Boolean();
                }
                return m_bubble3D;
            
        }
        const CT_Boolean& bubble3D(){

            if (m_bubble3D)
            {
                return *m_bubble3D;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_explosion(){

            return m_has_explosion;
        
        }
        CT_UnsignedInt* mutable_explosion(){

                m_has_explosion = true;
                if (!m_explosion)
                {
                    m_explosion = new CT_UnsignedInt();
                }
                return m_explosion;
            
        }
        const CT_UnsignedInt& explosion(){

            if (m_explosion)
            {
                return *m_explosion;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_pictureOptions(){

            return m_has_pictureOptions;
        
        }
        CT_PictureOptions* mutable_pictureOptions(){

                m_has_pictureOptions = true;
                if (!m_pictureOptions)
                {
                    m_pictureOptions = new CT_PictureOptions();
                }
                return m_pictureOptions;
            
        }
        const CT_PictureOptions& pictureOptions(){

            if (m_pictureOptions)
            {
                return *m_pictureOptions;
            }
            return CT_PictureOptions::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_invertIfNegative = false;
                
        if (m_invertIfNegative)
        {
            delete m_invertIfNegative;
            m_invertIfNegative = NULL;
        }
    
            
                m_has_marker = false;
                
        if (m_marker)
        {
            delete m_marker;
            m_marker = NULL;
        }
    
            
                m_has_bubble3D = false;
                
        if (m_bubble3D)
        {
            delete m_bubble3D;
            m_bubble3D = NULL;
        }
    
            
                m_has_explosion = false;
                
        if (m_explosion)
        {
            delete m_explosion;
            m_explosion = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_pictureOptions = false;
                
        if (m_pictureOptions)
        {
            delete m_pictureOptions;
            m_pictureOptions = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_invertIfNegative)
                {
                    m_idx->toXml(\d:invertIfNegative\, _outStream);;
                }
            
                if (m_has_marker)
                {
                    m_idx->toXml(\d:marker\, _outStream);;
                }
            
                if (m_has_bubble3D)
                {
                    m_idx->toXml(\d:bubble3D\, _outStream);;
                }
            
                if (m_has_explosion)
                {
                    m_idx->toXml(\d:explosion\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_pictureOptions)
                {
                    m_idx->toXml(\d:pictureOptions\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DPt& default_instance(){

    if (!CT_DPt::default_instance_)
    {
        CT_DPt::default_instance_ = new CT_DPt();
    }
    return *CT_DPt::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_invertIfNegative ;
        CT_Boolean* m_invertIfNegative ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_bubble3D ;
        CT_Boolean* m_bubble3D ;
        bool m_has_explosion ;
        CT_UnsignedInt* m_explosion ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_pictureOptions ;
        CT_PictureOptions* m_pictureOptions ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DPt* default_instance_ ;

    }

    class CT_TrendlineType : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TrendlineType& default_instance(){

    if (!CT_TrendlineType::default_instance_)
    {
        CT_TrendlineType::default_instance_ = new CT_TrendlineType();
    }
    return *CT_TrendlineType::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_TrendlineType& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_TrendlineType(_val_attr);
        
        }
        const ST_TrendlineType& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_TrendlineType::default_instance();
        
        }

    private:
        static CT_TrendlineType* default_instance_ ;
        bool m_has_val_attr ;
        ST_TrendlineType* m_val_attr ;

    }

    class CT_Order : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Order& default_instance(){

    if (!CT_Order::default_instance_)
    {
        CT_Order::default_instance_ = new CT_Order();
    }
    return *CT_Order::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Order& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Order(_val_attr);
        
        }
        const ST_Order& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Order::default_instance();
        
        }

    private:
        static CT_Order* default_instance_ ;
        bool m_has_val_attr ;
        ST_Order* m_val_attr ;

    }

    class CT_Period : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Period& default_instance(){

    if (!CT_Period::default_instance_)
    {
        CT_Period::default_instance_ = new CT_Period();
    }
    return *CT_Period::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Period& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Period(_val_attr);
        
        }
        const ST_Period& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Period::default_instance();
        
        }

    private:
        static CT_Period* default_instance_ ;
        bool m_has_val_attr ;
        ST_Period* m_val_attr ;

    }

    class CT_TrendlineLbl : public XSD::ComplexType{
    public:
        bool has_layout(){

            return m_has_layout;
        
        }
        CT_Layout* mutable_layout(){

                m_has_layout = true;
                if (!m_layout)
                {
                    m_layout = new CT_Layout();
                }
                return m_layout;
            
        }
        const CT_Layout& layout(){

            if (m_layout)
            {
                return *m_layout;
            }
            return CT_Layout::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_Tx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_Tx();
                }
                return m_tx;
            
        }
        const CT_Tx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_Tx::default_instance();
        
        }
        bool has_numFmt(){

            return m_has_numFmt;
        
        }
        CT_NumFmt* mutable_numFmt(){

                m_has_numFmt = true;
                if (!m_numFmt)
                {
                    m_numFmt = new CT_NumFmt();
                }
                return m_numFmt;
            
        }
        const CT_NumFmt& numFmt(){

            if (m_numFmt)
            {
                return *m_numFmt;
            }
            return CT_NumFmt::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_layout)
                {
                    m_layout->toXml(\d:layout\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_layout->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_numFmt)
                {
                    m_layout->toXml(\d:numFmt\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_layout->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_layout->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_layout->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TrendlineLbl& default_instance(){

    if (!CT_TrendlineLbl::default_instance_)
    {
        CT_TrendlineLbl::default_instance_ = new CT_TrendlineLbl();
    }
    return *CT_TrendlineLbl::default_instance_;

        }

    private:
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_tx ;
        CT_Tx* m_tx ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_TrendlineLbl* default_instance_ ;

    }

    class CT_Trendline : public XSD::ComplexType{
    public:
        bool has_name(){

        return m_has_name;
    
        }
        void set_name(const string& _name ){

            m_has_name = true;
            string = _name;
            
        }
        const string& name(){

        return type: \string\nname: \m_name\n;
    
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_trendlineType(){

            return m_has_trendlineType;
        
        }
        CT_TrendlineType* mutable_trendlineType(){

                m_has_trendlineType = true;
                if (!m_trendlineType)
                {
                    m_trendlineType = new CT_TrendlineType();
                }
                return m_trendlineType;
            
        }
        const CT_TrendlineType& trendlineType(){

            if (m_trendlineType)
            {
                return *m_trendlineType;
            }
            return CT_TrendlineType::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_Order* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_Order();
                }
                return m_order;
            
        }
        const CT_Order& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_Order::default_instance();
        
        }
        bool has_period(){

            return m_has_period;
        
        }
        CT_Period* mutable_period(){

                m_has_period = true;
                if (!m_period)
                {
                    m_period = new CT_Period();
                }
                return m_period;
            
        }
        const CT_Period& period(){

            if (m_period)
            {
                return *m_period;
            }
            return CT_Period::default_instance();
        
        }
        bool has_forward(){

            return m_has_forward;
        
        }
        CT_Double* mutable_forward(){

                m_has_forward = true;
                if (!m_forward)
                {
                    m_forward = new CT_Double();
                }
                return m_forward;
            
        }
        const CT_Double& forward(){

            if (m_forward)
            {
                return *m_forward;
            }
            return CT_Double::default_instance();
        
        }
        bool has_backward(){

            return m_has_backward;
        
        }
        CT_Double* mutable_backward(){

                m_has_backward = true;
                if (!m_backward)
                {
                    m_backward = new CT_Double();
                }
                return m_backward;
            
        }
        const CT_Double& backward(){

            if (m_backward)
            {
                return *m_backward;
            }
            return CT_Double::default_instance();
        
        }
        bool has_intercept(){

            return m_has_intercept;
        
        }
        CT_Double* mutable_intercept(){

                m_has_intercept = true;
                if (!m_intercept)
                {
                    m_intercept = new CT_Double();
                }
                return m_intercept;
            
        }
        const CT_Double& intercept(){

            if (m_intercept)
            {
                return *m_intercept;
            }
            return CT_Double::default_instance();
        
        }
        bool has_dispRSqr(){

            return m_has_dispRSqr;
        
        }
        CT_Boolean* mutable_dispRSqr(){

                m_has_dispRSqr = true;
                if (!m_dispRSqr)
                {
                    m_dispRSqr = new CT_Boolean();
                }
                return m_dispRSqr;
            
        }
        const CT_Boolean& dispRSqr(){

            if (m_dispRSqr)
            {
                return *m_dispRSqr;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_dispEq(){

            return m_has_dispEq;
        
        }
        CT_Boolean* mutable_dispEq(){

                m_has_dispEq = true;
                if (!m_dispEq)
                {
                    m_dispEq = new CT_Boolean();
                }
                return m_dispEq;
            
        }
        const CT_Boolean& dispEq(){

            if (m_dispEq)
            {
                return *m_dispEq;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_trendlineLbl(){

            return m_has_trendlineLbl;
        
        }
        CT_TrendlineLbl* mutable_trendlineLbl(){

                m_has_trendlineLbl = true;
                if (!m_trendlineLbl)
                {
                    m_trendlineLbl = new CT_TrendlineLbl();
                }
                return m_trendlineLbl;
            
        }
        const CT_TrendlineLbl& trendlineLbl(){

            if (m_trendlineLbl)
            {
                return *m_trendlineLbl;
            }
            return CT_TrendlineLbl::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_name = false;
                m_name.clear();
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_trendlineType = false;
                
        if (m_trendlineType)
        {
            delete m_trendlineType;
            m_trendlineType = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_period = false;
                
        if (m_period)
        {
            delete m_period;
            m_period = NULL;
        }
    
            
                m_has_forward = false;
                
        if (m_forward)
        {
            delete m_forward;
            m_forward = NULL;
        }
    
            
                m_has_backward = false;
                
        if (m_backward)
        {
            delete m_backward;
            m_backward = NULL;
        }
    
            
                m_has_intercept = false;
                
        if (m_intercept)
        {
            delete m_intercept;
            m_intercept = NULL;
        }
    
            
                m_has_dispRSqr = false;
                
        if (m_dispRSqr)
        {
            delete m_dispRSqr;
            m_dispRSqr = NULL;
        }
    
            
                m_has_dispEq = false;
                
        if (m_dispEq)
        {
            delete m_dispEq;
            m_dispEq = NULL;
        }
    
            
                m_has_trendlineLbl = false;
                
        if (m_trendlineLbl)
        {
            delete m_trendlineLbl;
            m_trendlineLbl = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_name)
                {
                    _outStream << \<d:name>\ << m_name << \</d:name>\;;
                }
            
                if (m_has_spPr)
                {
                    m_name->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_trendlineType)
                {
                    m_name->toXml(\d:trendlineType\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_name->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_period)
                {
                    m_name->toXml(\d:period\, _outStream);;
                }
            
                if (m_has_forward)
                {
                    m_name->toXml(\d:forward\, _outStream);;
                }
            
                if (m_has_backward)
                {
                    m_name->toXml(\d:backward\, _outStream);;
                }
            
                if (m_has_intercept)
                {
                    m_name->toXml(\d:intercept\, _outStream);;
                }
            
                if (m_has_dispRSqr)
                {
                    m_name->toXml(\d:dispRSqr\, _outStream);;
                }
            
                if (m_has_dispEq)
                {
                    m_name->toXml(\d:dispEq\, _outStream);;
                }
            
                if (m_has_trendlineLbl)
                {
                    m_name->toXml(\d:trendlineLbl\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_name->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Trendline& default_instance(){

    if (!CT_Trendline::default_instance_)
    {
        CT_Trendline::default_instance_ = new CT_Trendline();
    }
    return *CT_Trendline::default_instance_;

        }

    private:
        bool m_has_name ;
        string m_name ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_trendlineType ;
        CT_TrendlineType* m_trendlineType ;
        bool m_has_order ;
        CT_Order* m_order ;
        bool m_has_period ;
        CT_Period* m_period ;
        bool m_has_forward ;
        CT_Double* m_forward ;
        bool m_has_backward ;
        CT_Double* m_backward ;
        bool m_has_intercept ;
        CT_Double* m_intercept ;
        bool m_has_dispRSqr ;
        CT_Boolean* m_dispRSqr ;
        bool m_has_dispEq ;
        CT_Boolean* m_dispEq ;
        bool m_has_trendlineLbl ;
        CT_TrendlineLbl* m_trendlineLbl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Trendline* default_instance_ ;

    }

    class CT_ErrDir : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ErrDir& default_instance(){

    if (!CT_ErrDir::default_instance_)
    {
        CT_ErrDir::default_instance_ = new CT_ErrDir();
    }
    return *CT_ErrDir::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_ErrDir& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_ErrDir(_val_attr);
        
        }
        const ST_ErrDir& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_ErrDir::default_instance();
        
        }

    private:
        static CT_ErrDir* default_instance_ ;
        bool m_has_val_attr ;
        ST_ErrDir* m_val_attr ;

    }

    class CT_ErrBarType : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ErrBarType& default_instance(){

    if (!CT_ErrBarType::default_instance_)
    {
        CT_ErrBarType::default_instance_ = new CT_ErrBarType();
    }
    return *CT_ErrBarType::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_ErrBarType& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_ErrBarType(_val_attr);
        
        }
        const ST_ErrBarType& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_ErrBarType::default_instance();
        
        }

    private:
        static CT_ErrBarType* default_instance_ ;
        bool m_has_val_attr ;
        ST_ErrBarType* m_val_attr ;

    }

    class CT_ErrValType : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ErrValType& default_instance(){

    if (!CT_ErrValType::default_instance_)
    {
        CT_ErrValType::default_instance_ = new CT_ErrValType();
    }
    return *CT_ErrValType::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_ErrValType& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_ErrValType(_val_attr);
        
        }
        const ST_ErrValType& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_ErrValType::default_instance();
        
        }

    private:
        static CT_ErrValType* default_instance_ ;
        bool m_has_val_attr ;
        ST_ErrValType* m_val_attr ;

    }

    class CT_ErrBars : public XSD::ComplexType{
    public:
        bool has_errDir(){

            return m_has_errDir;
        
        }
        CT_ErrDir* mutable_errDir(){

                m_has_errDir = true;
                if (!m_errDir)
                {
                    m_errDir = new CT_ErrDir();
                }
                return m_errDir;
            
        }
        const CT_ErrDir& errDir(){

            if (m_errDir)
            {
                return *m_errDir;
            }
            return CT_ErrDir::default_instance();
        
        }
        bool has_errBarType(){

            return m_has_errBarType;
        
        }
        CT_ErrBarType* mutable_errBarType(){

                m_has_errBarType = true;
                if (!m_errBarType)
                {
                    m_errBarType = new CT_ErrBarType();
                }
                return m_errBarType;
            
        }
        const CT_ErrBarType& errBarType(){

            if (m_errBarType)
            {
                return *m_errBarType;
            }
            return CT_ErrBarType::default_instance();
        
        }
        bool has_errValType(){

            return m_has_errValType;
        
        }
        CT_ErrValType* mutable_errValType(){

                m_has_errValType = true;
                if (!m_errValType)
                {
                    m_errValType = new CT_ErrValType();
                }
                return m_errValType;
            
        }
        const CT_ErrValType& errValType(){

            if (m_errValType)
            {
                return *m_errValType;
            }
            return CT_ErrValType::default_instance();
        
        }
        bool has_noEndCap(){

            return m_has_noEndCap;
        
        }
        CT_Boolean* mutable_noEndCap(){

                m_has_noEndCap = true;
                if (!m_noEndCap)
                {
                    m_noEndCap = new CT_Boolean();
                }
                return m_noEndCap;
            
        }
        const CT_Boolean& noEndCap(){

            if (m_noEndCap)
            {
                return *m_noEndCap;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_plus(){

            return m_has_plus;
        
        }
        CT_NumDataSource* mutable_plus(){

                m_has_plus = true;
                if (!m_plus)
                {
                    m_plus = new CT_NumDataSource();
                }
                return m_plus;
            
        }
        const CT_NumDataSource& plus(){

            if (m_plus)
            {
                return *m_plus;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_minus(){

            return m_has_minus;
        
        }
        CT_NumDataSource* mutable_minus(){

                m_has_minus = true;
                if (!m_minus)
                {
                    m_minus = new CT_NumDataSource();
                }
                return m_minus;
            
        }
        const CT_NumDataSource& minus(){

            if (m_minus)
            {
                return *m_minus;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_val(){

            return m_has_val;
        
        }
        CT_Double* mutable_val(){

                m_has_val = true;
                if (!m_val)
                {
                    m_val = new CT_Double();
                }
                return m_val;
            
        }
        const CT_Double& val(){

            if (m_val)
            {
                return *m_val;
            }
            return CT_Double::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_errDir = false;
                
        if (m_errDir)
        {
            delete m_errDir;
            m_errDir = NULL;
        }
    
            
                m_has_errBarType = false;
                
        if (m_errBarType)
        {
            delete m_errBarType;
            m_errBarType = NULL;
        }
    
            
                m_has_errValType = false;
                
        if (m_errValType)
        {
            delete m_errValType;
            m_errValType = NULL;
        }
    
            
                m_has_noEndCap = false;
                
        if (m_noEndCap)
        {
            delete m_noEndCap;
            m_noEndCap = NULL;
        }
    
            
                m_has_plus = false;
                
        if (m_plus)
        {
            delete m_plus;
            m_plus = NULL;
        }
    
            
                m_has_minus = false;
                
        if (m_minus)
        {
            delete m_minus;
            m_minus = NULL;
        }
    
            
                m_has_val = false;
                
        if (m_val)
        {
            delete m_val;
            m_val = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_errDir)
                {
                    m_errDir->toXml(\d:errDir\, _outStream);;
                }
            
                if (m_has_errBarType)
                {
                    m_errDir->toXml(\d:errBarType\, _outStream);;
                }
            
                if (m_has_errValType)
                {
                    m_errDir->toXml(\d:errValType\, _outStream);;
                }
            
                if (m_has_noEndCap)
                {
                    m_errDir->toXml(\d:noEndCap\, _outStream);;
                }
            
                if (m_has_plus)
                {
                    m_errDir->toXml(\d:plus\, _outStream);;
                }
            
                if (m_has_minus)
                {
                    m_errDir->toXml(\d:minus\, _outStream);;
                }
            
                if (m_has_val)
                {
                    m_errDir->toXml(\d:val\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_errDir->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_errDir->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ErrBars& default_instance(){

    if (!CT_ErrBars::default_instance_)
    {
        CT_ErrBars::default_instance_ = new CT_ErrBars();
    }
    return *CT_ErrBars::default_instance_;

        }

    private:
        bool m_has_errDir ;
        CT_ErrDir* m_errDir ;
        bool m_has_errBarType ;
        CT_ErrBarType* m_errBarType ;
        bool m_has_errValType ;
        CT_ErrValType* m_errValType ;
        bool m_has_noEndCap ;
        CT_Boolean* m_noEndCap ;
        bool m_has_plus ;
        CT_NumDataSource* m_plus ;
        bool m_has_minus ;
        CT_NumDataSource* m_minus ;
        bool m_has_val ;
        CT_Double* m_val ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ErrBars* default_instance_ ;

    }

    class CT_UpDownBar : public XSD::ComplexType{
    public:
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        void clear(){

                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_spPr)
                {
                    m_spPr->toXml(\d:spPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_UpDownBar& default_instance(){

    if (!CT_UpDownBar::default_instance_)
    {
        CT_UpDownBar::default_instance_ = new CT_UpDownBar();
    }
    return *CT_UpDownBar::default_instance_;

        }

    private:
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        static CT_UpDownBar* default_instance_ ;

    }

    class CT_UpDownBars : public XSD::ComplexType{
    public:
        bool has_gapWidth(){

            return m_has_gapWidth;
        
        }
        CT_GapAmount* mutable_gapWidth(){

                m_has_gapWidth = true;
                if (!m_gapWidth)
                {
                    m_gapWidth = new CT_GapAmount();
                }
                return m_gapWidth;
            
        }
        const CT_GapAmount& gapWidth(){

            if (m_gapWidth)
            {
                return *m_gapWidth;
            }
            return CT_GapAmount::default_instance();
        
        }
        bool has_upBars(){

            return m_has_upBars;
        
        }
        CT_UpDownBar* mutable_upBars(){

                m_has_upBars = true;
                if (!m_upBars)
                {
                    m_upBars = new CT_UpDownBar();
                }
                return m_upBars;
            
        }
        const CT_UpDownBar& upBars(){

            if (m_upBars)
            {
                return *m_upBars;
            }
            return CT_UpDownBar::default_instance();
        
        }
        bool has_downBars(){

            return m_has_downBars;
        
        }
        CT_UpDownBar* mutable_downBars(){

                m_has_downBars = true;
                if (!m_downBars)
                {
                    m_downBars = new CT_UpDownBar();
                }
                return m_downBars;
            
        }
        const CT_UpDownBar& downBars(){

            if (m_downBars)
            {
                return *m_downBars;
            }
            return CT_UpDownBar::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_gapWidth = false;
                
        if (m_gapWidth)
        {
            delete m_gapWidth;
            m_gapWidth = NULL;
        }
    
            
                m_has_upBars = false;
                
        if (m_upBars)
        {
            delete m_upBars;
            m_upBars = NULL;
        }
    
            
                m_has_downBars = false;
                
        if (m_downBars)
        {
            delete m_downBars;
            m_downBars = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_gapWidth)
                {
                    m_gapWidth->toXml(\d:gapWidth\, _outStream);;
                }
            
                if (m_has_upBars)
                {
                    m_gapWidth->toXml(\d:upBars\, _outStream);;
                }
            
                if (m_has_downBars)
                {
                    m_gapWidth->toXml(\d:downBars\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_gapWidth->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_UpDownBars& default_instance(){

    if (!CT_UpDownBars::default_instance_)
    {
        CT_UpDownBars::default_instance_ = new CT_UpDownBars();
    }
    return *CT_UpDownBars::default_instance_;

        }

    private:
        bool m_has_gapWidth ;
        CT_GapAmount* m_gapWidth ;
        bool m_has_upBars ;
        CT_UpDownBar* m_upBars ;
        bool m_has_downBars ;
        CT_UpDownBar* m_downBars ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_UpDownBars* default_instance_ ;

    }

    class CT_LineSer : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_UnsignedInt* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_UnsignedInt();
                }
                return m_order;
            
        }
        const CT_UnsignedInt& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_SerTx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_SerTx();
                }
                return m_tx;
            
        }
        const CT_SerTx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_SerTx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_marker(){

            return m_has_marker;
        
        }
        CT_Marker* mutable_marker(){

                m_has_marker = true;
                if (!m_marker)
                {
                    m_marker = new CT_Marker();
                }
                return m_marker;
            
        }
        const CT_Marker& marker(){

            if (m_marker)
            {
                return *m_marker;
            }
            return CT_Marker::default_instance();
        
        }
        bool has_dPt(){

            return m_has_dPt;
        
        }
        CT_DPt* mutable_dPt(){

                m_has_dPt = true;
                if (!m_dPt)
                {
                    m_dPt = new CT_DPt();
                }
                return m_dPt;
            
        }
        const CT_DPt& dPt(){

            if (m_dPt)
            {
                return *m_dPt;
            }
            return CT_DPt::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_trendline(){

            return m_has_trendline;
        
        }
        CT_Trendline* mutable_trendline(){

                m_has_trendline = true;
                if (!m_trendline)
                {
                    m_trendline = new CT_Trendline();
                }
                return m_trendline;
            
        }
        const CT_Trendline& trendline(){

            if (m_trendline)
            {
                return *m_trendline;
            }
            return CT_Trendline::default_instance();
        
        }
        bool has_errBars(){

            return m_has_errBars;
        
        }
        CT_ErrBars* mutable_errBars(){

                m_has_errBars = true;
                if (!m_errBars)
                {
                    m_errBars = new CT_ErrBars();
                }
                return m_errBars;
            
        }
        const CT_ErrBars& errBars(){

            if (m_errBars)
            {
                return *m_errBars;
            }
            return CT_ErrBars::default_instance();
        
        }
        bool has_cat(){

            return m_has_cat;
        
        }
        CT_AxDataSource* mutable_cat(){

                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_AxDataSource();
                }
                return m_cat;
            
        }
        const CT_AxDataSource& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_AxDataSource::default_instance();
        
        }
        bool has_val(){

            return m_has_val;
        
        }
        CT_NumDataSource* mutable_val(){

                m_has_val = true;
                if (!m_val)
                {
                    m_val = new CT_NumDataSource();
                }
                return m_val;
            
        }
        const CT_NumDataSource& val(){

            if (m_val)
            {
                return *m_val;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_smooth(){

            return m_has_smooth;
        
        }
        CT_Boolean* mutable_smooth(){

                m_has_smooth = true;
                if (!m_smooth)
                {
                    m_smooth = new CT_Boolean();
                }
                return m_smooth;
            
        }
        const CT_Boolean& smooth(){

            if (m_smooth)
            {
                return *m_smooth;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_marker = false;
                
        if (m_marker)
        {
            delete m_marker;
            m_marker = NULL;
        }
    
            
                m_has_dPt = false;
                
        if (m_dPt)
        {
            delete m_dPt;
            m_dPt = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_trendline = false;
                
        if (m_trendline)
        {
            delete m_trendline;
            m_trendline = NULL;
        }
    
            
                m_has_errBars = false;
                
        if (m_errBars)
        {
            delete m_errBars;
            m_errBars = NULL;
        }
    
            
                m_has_cat = false;
                
        if (m_cat)
        {
            delete m_cat;
            m_cat = NULL;
        }
    
            
                m_has_val = false;
                
        if (m_val)
        {
            delete m_val;
            m_val = NULL;
        }
    
            
                m_has_smooth = false;
                
        if (m_smooth)
        {
            delete m_smooth;
            m_smooth = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_idx->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_idx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_marker)
                {
                    m_idx->toXml(\d:marker\, _outStream);;
                }
            
                if (m_has_dPt)
                {
                    m_idx->toXml(\d:dPt\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_idx->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_trendline)
                {
                    m_idx->toXml(\d:trendline\, _outStream);;
                }
            
                if (m_has_errBars)
                {
                    m_idx->toXml(\d:errBars\, _outStream);;
                }
            
                if (m_has_cat)
                {
                    m_idx->toXml(\d:cat\, _outStream);;
                }
            
                if (m_has_val)
                {
                    m_idx->toXml(\d:val\, _outStream);;
                }
            
                if (m_has_smooth)
                {
                    m_idx->toXml(\d:smooth\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LineSer& default_instance(){

    if (!CT_LineSer::default_instance_)
    {
        CT_LineSer::default_instance_ = new CT_LineSer();
    }
    return *CT_LineSer::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_smooth ;
        CT_Boolean* m_smooth ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_LineSer* default_instance_ ;

    }

    class CT_ScatterSer : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_UnsignedInt* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_UnsignedInt();
                }
                return m_order;
            
        }
        const CT_UnsignedInt& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_SerTx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_SerTx();
                }
                return m_tx;
            
        }
        const CT_SerTx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_SerTx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_marker(){

            return m_has_marker;
        
        }
        CT_Marker* mutable_marker(){

                m_has_marker = true;
                if (!m_marker)
                {
                    m_marker = new CT_Marker();
                }
                return m_marker;
            
        }
        const CT_Marker& marker(){

            if (m_marker)
            {
                return *m_marker;
            }
            return CT_Marker::default_instance();
        
        }
        bool has_dPt(){

            return m_has_dPt;
        
        }
        CT_DPt* mutable_dPt(){

                m_has_dPt = true;
                if (!m_dPt)
                {
                    m_dPt = new CT_DPt();
                }
                return m_dPt;
            
        }
        const CT_DPt& dPt(){

            if (m_dPt)
            {
                return *m_dPt;
            }
            return CT_DPt::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_trendline(){

            return m_has_trendline;
        
        }
        CT_Trendline* mutable_trendline(){

                m_has_trendline = true;
                if (!m_trendline)
                {
                    m_trendline = new CT_Trendline();
                }
                return m_trendline;
            
        }
        const CT_Trendline& trendline(){

            if (m_trendline)
            {
                return *m_trendline;
            }
            return CT_Trendline::default_instance();
        
        }
        bool has_errBars(){

            return m_has_errBars;
        
        }
        CT_ErrBars* mutable_errBars(){

                m_has_errBars = true;
                if (!m_errBars)
                {
                    m_errBars = new CT_ErrBars();
                }
                return m_errBars;
            
        }
        const CT_ErrBars& errBars(){

            if (m_errBars)
            {
                return *m_errBars;
            }
            return CT_ErrBars::default_instance();
        
        }
        bool has_xVal(){

            return m_has_xVal;
        
        }
        CT_AxDataSource* mutable_xVal(){

                m_has_xVal = true;
                if (!m_xVal)
                {
                    m_xVal = new CT_AxDataSource();
                }
                return m_xVal;
            
        }
        const CT_AxDataSource& xVal(){

            if (m_xVal)
            {
                return *m_xVal;
            }
            return CT_AxDataSource::default_instance();
        
        }
        bool has_yVal(){

            return m_has_yVal;
        
        }
        CT_NumDataSource* mutable_yVal(){

                m_has_yVal = true;
                if (!m_yVal)
                {
                    m_yVal = new CT_NumDataSource();
                }
                return m_yVal;
            
        }
        const CT_NumDataSource& yVal(){

            if (m_yVal)
            {
                return *m_yVal;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_smooth(){

            return m_has_smooth;
        
        }
        CT_Boolean* mutable_smooth(){

                m_has_smooth = true;
                if (!m_smooth)
                {
                    m_smooth = new CT_Boolean();
                }
                return m_smooth;
            
        }
        const CT_Boolean& smooth(){

            if (m_smooth)
            {
                return *m_smooth;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_marker = false;
                
        if (m_marker)
        {
            delete m_marker;
            m_marker = NULL;
        }
    
            
                m_has_dPt = false;
                
        if (m_dPt)
        {
            delete m_dPt;
            m_dPt = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_trendline = false;
                
        if (m_trendline)
        {
            delete m_trendline;
            m_trendline = NULL;
        }
    
            
                m_has_errBars = false;
                
        if (m_errBars)
        {
            delete m_errBars;
            m_errBars = NULL;
        }
    
            
                m_has_xVal = false;
                
        if (m_xVal)
        {
            delete m_xVal;
            m_xVal = NULL;
        }
    
            
                m_has_yVal = false;
                
        if (m_yVal)
        {
            delete m_yVal;
            m_yVal = NULL;
        }
    
            
                m_has_smooth = false;
                
        if (m_smooth)
        {
            delete m_smooth;
            m_smooth = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_idx->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_idx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_marker)
                {
                    m_idx->toXml(\d:marker\, _outStream);;
                }
            
                if (m_has_dPt)
                {
                    m_idx->toXml(\d:dPt\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_idx->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_trendline)
                {
                    m_idx->toXml(\d:trendline\, _outStream);;
                }
            
                if (m_has_errBars)
                {
                    m_idx->toXml(\d:errBars\, _outStream);;
                }
            
                if (m_has_xVal)
                {
                    m_idx->toXml(\d:xVal\, _outStream);;
                }
            
                if (m_has_yVal)
                {
                    m_idx->toXml(\d:yVal\, _outStream);;
                }
            
                if (m_has_smooth)
                {
                    m_idx->toXml(\d:smooth\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ScatterSer& default_instance(){

    if (!CT_ScatterSer::default_instance_)
    {
        CT_ScatterSer::default_instance_ = new CT_ScatterSer();
    }
    return *CT_ScatterSer::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_xVal ;
        CT_AxDataSource* m_xVal ;
        bool m_has_yVal ;
        CT_NumDataSource* m_yVal ;
        bool m_has_smooth ;
        CT_Boolean* m_smooth ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ScatterSer* default_instance_ ;

    }

    class CT_RadarSer : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_UnsignedInt* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_UnsignedInt();
                }
                return m_order;
            
        }
        const CT_UnsignedInt& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_SerTx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_SerTx();
                }
                return m_tx;
            
        }
        const CT_SerTx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_SerTx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_marker(){

            return m_has_marker;
        
        }
        CT_Marker* mutable_marker(){

                m_has_marker = true;
                if (!m_marker)
                {
                    m_marker = new CT_Marker();
                }
                return m_marker;
            
        }
        const CT_Marker& marker(){

            if (m_marker)
            {
                return *m_marker;
            }
            return CT_Marker::default_instance();
        
        }
        bool has_dPt(){

            return m_has_dPt;
        
        }
        CT_DPt* mutable_dPt(){

                m_has_dPt = true;
                if (!m_dPt)
                {
                    m_dPt = new CT_DPt();
                }
                return m_dPt;
            
        }
        const CT_DPt& dPt(){

            if (m_dPt)
            {
                return *m_dPt;
            }
            return CT_DPt::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_cat(){

            return m_has_cat;
        
        }
        CT_AxDataSource* mutable_cat(){

                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_AxDataSource();
                }
                return m_cat;
            
        }
        const CT_AxDataSource& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_AxDataSource::default_instance();
        
        }
        bool has_val(){

            return m_has_val;
        
        }
        CT_NumDataSource* mutable_val(){

                m_has_val = true;
                if (!m_val)
                {
                    m_val = new CT_NumDataSource();
                }
                return m_val;
            
        }
        const CT_NumDataSource& val(){

            if (m_val)
            {
                return *m_val;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_marker = false;
                
        if (m_marker)
        {
            delete m_marker;
            m_marker = NULL;
        }
    
            
                m_has_dPt = false;
                
        if (m_dPt)
        {
            delete m_dPt;
            m_dPt = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_cat = false;
                
        if (m_cat)
        {
            delete m_cat;
            m_cat = NULL;
        }
    
            
                m_has_val = false;
                
        if (m_val)
        {
            delete m_val;
            m_val = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_idx->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_idx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_marker)
                {
                    m_idx->toXml(\d:marker\, _outStream);;
                }
            
                if (m_has_dPt)
                {
                    m_idx->toXml(\d:dPt\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_idx->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_cat)
                {
                    m_idx->toXml(\d:cat\, _outStream);;
                }
            
                if (m_has_val)
                {
                    m_idx->toXml(\d:val\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RadarSer& default_instance(){

    if (!CT_RadarSer::default_instance_)
    {
        CT_RadarSer::default_instance_ = new CT_RadarSer();
    }
    return *CT_RadarSer::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_RadarSer* default_instance_ ;

    }

    class CT_BarSer : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_UnsignedInt* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_UnsignedInt();
                }
                return m_order;
            
        }
        const CT_UnsignedInt& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_SerTx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_SerTx();
                }
                return m_tx;
            
        }
        const CT_SerTx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_SerTx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_invertIfNegative(){

            return m_has_invertIfNegative;
        
        }
        CT_Boolean* mutable_invertIfNegative(){

                m_has_invertIfNegative = true;
                if (!m_invertIfNegative)
                {
                    m_invertIfNegative = new CT_Boolean();
                }
                return m_invertIfNegative;
            
        }
        const CT_Boolean& invertIfNegative(){

            if (m_invertIfNegative)
            {
                return *m_invertIfNegative;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_pictureOptions(){

            return m_has_pictureOptions;
        
        }
        CT_PictureOptions* mutable_pictureOptions(){

                m_has_pictureOptions = true;
                if (!m_pictureOptions)
                {
                    m_pictureOptions = new CT_PictureOptions();
                }
                return m_pictureOptions;
            
        }
        const CT_PictureOptions& pictureOptions(){

            if (m_pictureOptions)
            {
                return *m_pictureOptions;
            }
            return CT_PictureOptions::default_instance();
        
        }
        bool has_dPt(){

            return m_has_dPt;
        
        }
        CT_DPt* mutable_dPt(){

                m_has_dPt = true;
                if (!m_dPt)
                {
                    m_dPt = new CT_DPt();
                }
                return m_dPt;
            
        }
        const CT_DPt& dPt(){

            if (m_dPt)
            {
                return *m_dPt;
            }
            return CT_DPt::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_trendline(){

            return m_has_trendline;
        
        }
        CT_Trendline* mutable_trendline(){

                m_has_trendline = true;
                if (!m_trendline)
                {
                    m_trendline = new CT_Trendline();
                }
                return m_trendline;
            
        }
        const CT_Trendline& trendline(){

            if (m_trendline)
            {
                return *m_trendline;
            }
            return CT_Trendline::default_instance();
        
        }
        bool has_errBars(){

            return m_has_errBars;
        
        }
        CT_ErrBars* mutable_errBars(){

                m_has_errBars = true;
                if (!m_errBars)
                {
                    m_errBars = new CT_ErrBars();
                }
                return m_errBars;
            
        }
        const CT_ErrBars& errBars(){

            if (m_errBars)
            {
                return *m_errBars;
            }
            return CT_ErrBars::default_instance();
        
        }
        bool has_cat(){

            return m_has_cat;
        
        }
        CT_AxDataSource* mutable_cat(){

                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_AxDataSource();
                }
                return m_cat;
            
        }
        const CT_AxDataSource& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_AxDataSource::default_instance();
        
        }
        bool has_val(){

            return m_has_val;
        
        }
        CT_NumDataSource* mutable_val(){

                m_has_val = true;
                if (!m_val)
                {
                    m_val = new CT_NumDataSource();
                }
                return m_val;
            
        }
        const CT_NumDataSource& val(){

            if (m_val)
            {
                return *m_val;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_shape(){

            return m_has_shape;
        
        }
        CT_Shape* mutable_shape(){

                m_has_shape = true;
                if (!m_shape)
                {
                    m_shape = new CT_Shape();
                }
                return m_shape;
            
        }
        const CT_Shape& shape(){

            if (m_shape)
            {
                return *m_shape;
            }
            return CT_Shape::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_invertIfNegative = false;
                
        if (m_invertIfNegative)
        {
            delete m_invertIfNegative;
            m_invertIfNegative = NULL;
        }
    
            
                m_has_pictureOptions = false;
                
        if (m_pictureOptions)
        {
            delete m_pictureOptions;
            m_pictureOptions = NULL;
        }
    
            
                m_has_dPt = false;
                
        if (m_dPt)
        {
            delete m_dPt;
            m_dPt = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_trendline = false;
                
        if (m_trendline)
        {
            delete m_trendline;
            m_trendline = NULL;
        }
    
            
                m_has_errBars = false;
                
        if (m_errBars)
        {
            delete m_errBars;
            m_errBars = NULL;
        }
    
            
                m_has_cat = false;
                
        if (m_cat)
        {
            delete m_cat;
            m_cat = NULL;
        }
    
            
                m_has_val = false;
                
        if (m_val)
        {
            delete m_val;
            m_val = NULL;
        }
    
            
                m_has_shape = false;
                
        if (m_shape)
        {
            delete m_shape;
            m_shape = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_idx->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_idx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_invertIfNegative)
                {
                    m_idx->toXml(\d:invertIfNegative\, _outStream);;
                }
            
                if (m_has_pictureOptions)
                {
                    m_idx->toXml(\d:pictureOptions\, _outStream);;
                }
            
                if (m_has_dPt)
                {
                    m_idx->toXml(\d:dPt\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_idx->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_trendline)
                {
                    m_idx->toXml(\d:trendline\, _outStream);;
                }
            
                if (m_has_errBars)
                {
                    m_idx->toXml(\d:errBars\, _outStream);;
                }
            
                if (m_has_cat)
                {
                    m_idx->toXml(\d:cat\, _outStream);;
                }
            
                if (m_has_val)
                {
                    m_idx->toXml(\d:val\, _outStream);;
                }
            
                if (m_has_shape)
                {
                    m_idx->toXml(\d:shape\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BarSer& default_instance(){

    if (!CT_BarSer::default_instance_)
    {
        CT_BarSer::default_instance_ = new CT_BarSer();
    }
    return *CT_BarSer::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_invertIfNegative ;
        CT_Boolean* m_invertIfNegative ;
        bool m_has_pictureOptions ;
        CT_PictureOptions* m_pictureOptions ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_shape ;
        CT_Shape* m_shape ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BarSer* default_instance_ ;

    }

    class CT_AreaSer : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_UnsignedInt* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_UnsignedInt();
                }
                return m_order;
            
        }
        const CT_UnsignedInt& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_SerTx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_SerTx();
                }
                return m_tx;
            
        }
        const CT_SerTx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_SerTx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_pictureOptions(){

            return m_has_pictureOptions;
        
        }
        CT_PictureOptions* mutable_pictureOptions(){

                m_has_pictureOptions = true;
                if (!m_pictureOptions)
                {
                    m_pictureOptions = new CT_PictureOptions();
                }
                return m_pictureOptions;
            
        }
        const CT_PictureOptions& pictureOptions(){

            if (m_pictureOptions)
            {
                return *m_pictureOptions;
            }
            return CT_PictureOptions::default_instance();
        
        }
        bool has_dPt(){

            return m_has_dPt;
        
        }
        CT_DPt* mutable_dPt(){

                m_has_dPt = true;
                if (!m_dPt)
                {
                    m_dPt = new CT_DPt();
                }
                return m_dPt;
            
        }
        const CT_DPt& dPt(){

            if (m_dPt)
            {
                return *m_dPt;
            }
            return CT_DPt::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_trendline(){

            return m_has_trendline;
        
        }
        CT_Trendline* mutable_trendline(){

                m_has_trendline = true;
                if (!m_trendline)
                {
                    m_trendline = new CT_Trendline();
                }
                return m_trendline;
            
        }
        const CT_Trendline& trendline(){

            if (m_trendline)
            {
                return *m_trendline;
            }
            return CT_Trendline::default_instance();
        
        }
        bool has_errBars(){

            return m_has_errBars;
        
        }
        CT_ErrBars* mutable_errBars(){

                m_has_errBars = true;
                if (!m_errBars)
                {
                    m_errBars = new CT_ErrBars();
                }
                return m_errBars;
            
        }
        const CT_ErrBars& errBars(){

            if (m_errBars)
            {
                return *m_errBars;
            }
            return CT_ErrBars::default_instance();
        
        }
        bool has_cat(){

            return m_has_cat;
        
        }
        CT_AxDataSource* mutable_cat(){

                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_AxDataSource();
                }
                return m_cat;
            
        }
        const CT_AxDataSource& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_AxDataSource::default_instance();
        
        }
        bool has_val(){

            return m_has_val;
        
        }
        CT_NumDataSource* mutable_val(){

                m_has_val = true;
                if (!m_val)
                {
                    m_val = new CT_NumDataSource();
                }
                return m_val;
            
        }
        const CT_NumDataSource& val(){

            if (m_val)
            {
                return *m_val;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_pictureOptions = false;
                
        if (m_pictureOptions)
        {
            delete m_pictureOptions;
            m_pictureOptions = NULL;
        }
    
            
                m_has_dPt = false;
                
        if (m_dPt)
        {
            delete m_dPt;
            m_dPt = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_trendline = false;
                
        if (m_trendline)
        {
            delete m_trendline;
            m_trendline = NULL;
        }
    
            
                m_has_errBars = false;
                
        if (m_errBars)
        {
            delete m_errBars;
            m_errBars = NULL;
        }
    
            
                m_has_cat = false;
                
        if (m_cat)
        {
            delete m_cat;
            m_cat = NULL;
        }
    
            
                m_has_val = false;
                
        if (m_val)
        {
            delete m_val;
            m_val = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_idx->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_idx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_pictureOptions)
                {
                    m_idx->toXml(\d:pictureOptions\, _outStream);;
                }
            
                if (m_has_dPt)
                {
                    m_idx->toXml(\d:dPt\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_idx->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_trendline)
                {
                    m_idx->toXml(\d:trendline\, _outStream);;
                }
            
                if (m_has_errBars)
                {
                    m_idx->toXml(\d:errBars\, _outStream);;
                }
            
                if (m_has_cat)
                {
                    m_idx->toXml(\d:cat\, _outStream);;
                }
            
                if (m_has_val)
                {
                    m_idx->toXml(\d:val\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AreaSer& default_instance(){

    if (!CT_AreaSer::default_instance_)
    {
        CT_AreaSer::default_instance_ = new CT_AreaSer();
    }
    return *CT_AreaSer::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_pictureOptions ;
        CT_PictureOptions* m_pictureOptions ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_AreaSer* default_instance_ ;

    }

    class CT_PieSer : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_UnsignedInt* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_UnsignedInt();
                }
                return m_order;
            
        }
        const CT_UnsignedInt& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_SerTx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_SerTx();
                }
                return m_tx;
            
        }
        const CT_SerTx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_SerTx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_explosion(){

            return m_has_explosion;
        
        }
        CT_UnsignedInt* mutable_explosion(){

                m_has_explosion = true;
                if (!m_explosion)
                {
                    m_explosion = new CT_UnsignedInt();
                }
                return m_explosion;
            
        }
        const CT_UnsignedInt& explosion(){

            if (m_explosion)
            {
                return *m_explosion;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_dPt(){

            return m_has_dPt;
        
        }
        CT_DPt* mutable_dPt(){

                m_has_dPt = true;
                if (!m_dPt)
                {
                    m_dPt = new CT_DPt();
                }
                return m_dPt;
            
        }
        const CT_DPt& dPt(){

            if (m_dPt)
            {
                return *m_dPt;
            }
            return CT_DPt::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_cat(){

            return m_has_cat;
        
        }
        CT_AxDataSource* mutable_cat(){

                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_AxDataSource();
                }
                return m_cat;
            
        }
        const CT_AxDataSource& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_AxDataSource::default_instance();
        
        }
        bool has_val(){

            return m_has_val;
        
        }
        CT_NumDataSource* mutable_val(){

                m_has_val = true;
                if (!m_val)
                {
                    m_val = new CT_NumDataSource();
                }
                return m_val;
            
        }
        const CT_NumDataSource& val(){

            if (m_val)
            {
                return *m_val;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_explosion = false;
                
        if (m_explosion)
        {
            delete m_explosion;
            m_explosion = NULL;
        }
    
            
                m_has_dPt = false;
                
        if (m_dPt)
        {
            delete m_dPt;
            m_dPt = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_cat = false;
                
        if (m_cat)
        {
            delete m_cat;
            m_cat = NULL;
        }
    
            
                m_has_val = false;
                
        if (m_val)
        {
            delete m_val;
            m_val = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_idx->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_idx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_explosion)
                {
                    m_idx->toXml(\d:explosion\, _outStream);;
                }
            
                if (m_has_dPt)
                {
                    m_idx->toXml(\d:dPt\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_idx->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_cat)
                {
                    m_idx->toXml(\d:cat\, _outStream);;
                }
            
                if (m_has_val)
                {
                    m_idx->toXml(\d:val\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PieSer& default_instance(){

    if (!CT_PieSer::default_instance_)
    {
        CT_PieSer::default_instance_ = new CT_PieSer();
    }
    return *CT_PieSer::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_explosion ;
        CT_UnsignedInt* m_explosion ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PieSer* default_instance_ ;

    }

    class CT_BubbleSer : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_UnsignedInt* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_UnsignedInt();
                }
                return m_order;
            
        }
        const CT_UnsignedInt& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_SerTx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_SerTx();
                }
                return m_tx;
            
        }
        const CT_SerTx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_SerTx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_invertIfNegative(){

            return m_has_invertIfNegative;
        
        }
        CT_Boolean* mutable_invertIfNegative(){

                m_has_invertIfNegative = true;
                if (!m_invertIfNegative)
                {
                    m_invertIfNegative = new CT_Boolean();
                }
                return m_invertIfNegative;
            
        }
        const CT_Boolean& invertIfNegative(){

            if (m_invertIfNegative)
            {
                return *m_invertIfNegative;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_dPt(){

            return m_has_dPt;
        
        }
        CT_DPt* mutable_dPt(){

                m_has_dPt = true;
                if (!m_dPt)
                {
                    m_dPt = new CT_DPt();
                }
                return m_dPt;
            
        }
        const CT_DPt& dPt(){

            if (m_dPt)
            {
                return *m_dPt;
            }
            return CT_DPt::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_trendline(){

            return m_has_trendline;
        
        }
        CT_Trendline* mutable_trendline(){

                m_has_trendline = true;
                if (!m_trendline)
                {
                    m_trendline = new CT_Trendline();
                }
                return m_trendline;
            
        }
        const CT_Trendline& trendline(){

            if (m_trendline)
            {
                return *m_trendline;
            }
            return CT_Trendline::default_instance();
        
        }
        bool has_errBars(){

            return m_has_errBars;
        
        }
        CT_ErrBars* mutable_errBars(){

                m_has_errBars = true;
                if (!m_errBars)
                {
                    m_errBars = new CT_ErrBars();
                }
                return m_errBars;
            
        }
        const CT_ErrBars& errBars(){

            if (m_errBars)
            {
                return *m_errBars;
            }
            return CT_ErrBars::default_instance();
        
        }
        bool has_xVal(){

            return m_has_xVal;
        
        }
        CT_AxDataSource* mutable_xVal(){

                m_has_xVal = true;
                if (!m_xVal)
                {
                    m_xVal = new CT_AxDataSource();
                }
                return m_xVal;
            
        }
        const CT_AxDataSource& xVal(){

            if (m_xVal)
            {
                return *m_xVal;
            }
            return CT_AxDataSource::default_instance();
        
        }
        bool has_yVal(){

            return m_has_yVal;
        
        }
        CT_NumDataSource* mutable_yVal(){

                m_has_yVal = true;
                if (!m_yVal)
                {
                    m_yVal = new CT_NumDataSource();
                }
                return m_yVal;
            
        }
        const CT_NumDataSource& yVal(){

            if (m_yVal)
            {
                return *m_yVal;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_bubbleSize(){

            return m_has_bubbleSize;
        
        }
        CT_NumDataSource* mutable_bubbleSize(){

                m_has_bubbleSize = true;
                if (!m_bubbleSize)
                {
                    m_bubbleSize = new CT_NumDataSource();
                }
                return m_bubbleSize;
            
        }
        const CT_NumDataSource& bubbleSize(){

            if (m_bubbleSize)
            {
                return *m_bubbleSize;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_bubble3D(){

            return m_has_bubble3D;
        
        }
        CT_Boolean* mutable_bubble3D(){

                m_has_bubble3D = true;
                if (!m_bubble3D)
                {
                    m_bubble3D = new CT_Boolean();
                }
                return m_bubble3D;
            
        }
        const CT_Boolean& bubble3D(){

            if (m_bubble3D)
            {
                return *m_bubble3D;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_invertIfNegative = false;
                
        if (m_invertIfNegative)
        {
            delete m_invertIfNegative;
            m_invertIfNegative = NULL;
        }
    
            
                m_has_dPt = false;
                
        if (m_dPt)
        {
            delete m_dPt;
            m_dPt = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_trendline = false;
                
        if (m_trendline)
        {
            delete m_trendline;
            m_trendline = NULL;
        }
    
            
                m_has_errBars = false;
                
        if (m_errBars)
        {
            delete m_errBars;
            m_errBars = NULL;
        }
    
            
                m_has_xVal = false;
                
        if (m_xVal)
        {
            delete m_xVal;
            m_xVal = NULL;
        }
    
            
                m_has_yVal = false;
                
        if (m_yVal)
        {
            delete m_yVal;
            m_yVal = NULL;
        }
    
            
                m_has_bubbleSize = false;
                
        if (m_bubbleSize)
        {
            delete m_bubbleSize;
            m_bubbleSize = NULL;
        }
    
            
                m_has_bubble3D = false;
                
        if (m_bubble3D)
        {
            delete m_bubble3D;
            m_bubble3D = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_idx->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_idx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_invertIfNegative)
                {
                    m_idx->toXml(\d:invertIfNegative\, _outStream);;
                }
            
                if (m_has_dPt)
                {
                    m_idx->toXml(\d:dPt\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_idx->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_trendline)
                {
                    m_idx->toXml(\d:trendline\, _outStream);;
                }
            
                if (m_has_errBars)
                {
                    m_idx->toXml(\d:errBars\, _outStream);;
                }
            
                if (m_has_xVal)
                {
                    m_idx->toXml(\d:xVal\, _outStream);;
                }
            
                if (m_has_yVal)
                {
                    m_idx->toXml(\d:yVal\, _outStream);;
                }
            
                if (m_has_bubbleSize)
                {
                    m_idx->toXml(\d:bubbleSize\, _outStream);;
                }
            
                if (m_has_bubble3D)
                {
                    m_idx->toXml(\d:bubble3D\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BubbleSer& default_instance(){

    if (!CT_BubbleSer::default_instance_)
    {
        CT_BubbleSer::default_instance_ = new CT_BubbleSer();
    }
    return *CT_BubbleSer::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_invertIfNegative ;
        CT_Boolean* m_invertIfNegative ;
        bool m_has_dPt ;
        CT_DPt* m_dPt ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_trendline ;
        CT_Trendline* m_trendline ;
        bool m_has_errBars ;
        CT_ErrBars* m_errBars ;
        bool m_has_xVal ;
        CT_AxDataSource* m_xVal ;
        bool m_has_yVal ;
        CT_NumDataSource* m_yVal ;
        bool m_has_bubbleSize ;
        CT_NumDataSource* m_bubbleSize ;
        bool m_has_bubble3D ;
        CT_Boolean* m_bubble3D ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BubbleSer* default_instance_ ;

    }

    class CT_SurfaceSer : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_order(){

            return m_has_order;
        
        }
        CT_UnsignedInt* mutable_order(){

                m_has_order = true;
                if (!m_order)
                {
                    m_order = new CT_UnsignedInt();
                }
                return m_order;
            
        }
        const CT_UnsignedInt& order(){

            if (m_order)
            {
                return *m_order;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_SerTx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_SerTx();
                }
                return m_tx;
            
        }
        const CT_SerTx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_SerTx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_cat(){

            return m_has_cat;
        
        }
        CT_AxDataSource* mutable_cat(){

                m_has_cat = true;
                if (!m_cat)
                {
                    m_cat = new CT_AxDataSource();
                }
                return m_cat;
            
        }
        const CT_AxDataSource& cat(){

            if (m_cat)
            {
                return *m_cat;
            }
            return CT_AxDataSource::default_instance();
        
        }
        bool has_val(){

            return m_has_val;
        
        }
        CT_NumDataSource* mutable_val(){

                m_has_val = true;
                if (!m_val)
                {
                    m_val = new CT_NumDataSource();
                }
                return m_val;
            
        }
        const CT_NumDataSource& val(){

            if (m_val)
            {
                return *m_val;
            }
            return CT_NumDataSource::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_order = false;
                
        if (m_order)
        {
            delete m_order;
            m_order = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_cat = false;
                
        if (m_cat)
        {
            delete m_cat;
            m_cat = NULL;
        }
    
            
                m_has_val = false;
                
        if (m_val)
        {
            delete m_val;
            m_val = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_order)
                {
                    m_idx->toXml(\d:order\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_idx->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_cat)
                {
                    m_idx->toXml(\d:cat\, _outStream);;
                }
            
                if (m_has_val)
                {
                    m_idx->toXml(\d:val\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SurfaceSer& default_instance(){

    if (!CT_SurfaceSer::default_instance_)
    {
        CT_SurfaceSer::default_instance_ = new CT_SurfaceSer();
    }
    return *CT_SurfaceSer::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_order ;
        CT_UnsignedInt* m_order ;
        bool m_has_tx ;
        CT_SerTx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_cat ;
        CT_AxDataSource* m_cat ;
        bool m_has_val ;
        CT_NumDataSource* m_val ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SurfaceSer* default_instance_ ;

    }

    class CT_Grouping : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Grouping& default_instance(){

    if (!CT_Grouping::default_instance_)
    {
        CT_Grouping::default_instance_ = new CT_Grouping();
    }
    return *CT_Grouping::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Grouping& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Grouping(_val_attr);
        
        }
        const ST_Grouping& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Grouping::default_instance();
        
        }

    private:
        static CT_Grouping* default_instance_ ;
        bool m_has_val_attr ;
        ST_Grouping* m_val_attr ;

    }

    class CT_ChartLines : public XSD::ComplexType{
    public:
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        void clear(){

                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_spPr)
                {
                    m_spPr->toXml(\d:spPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ChartLines& default_instance(){

    if (!CT_ChartLines::default_instance_)
    {
        CT_ChartLines::default_instance_ = new CT_ChartLines();
    }
    return *CT_ChartLines::default_instance_;

        }

    private:
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        static CT_ChartLines* default_instance_ ;

    }

    class CT_LineChart : public XSD::ComplexType{
    public:
        bool has_grouping(){

            return m_has_grouping;
        
        }
        CT_Grouping* mutable_grouping(){

                m_has_grouping = true;
                if (!m_grouping)
                {
                    m_grouping = new CT_Grouping();
                }
                return m_grouping;
            
        }
        const CT_Grouping& grouping(){

            if (m_grouping)
            {
                return *m_grouping;
            }
            return CT_Grouping::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_LineSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_LineSer();
                }
                return m_ser;
            
        }
        const CT_LineSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_LineSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_dropLines(){

            return m_has_dropLines;
        
        }
        CT_ChartLines* mutable_dropLines(){

                m_has_dropLines = true;
                if (!m_dropLines)
                {
                    m_dropLines = new CT_ChartLines();
                }
                return m_dropLines;
            
        }
        const CT_ChartLines& dropLines(){

            if (m_dropLines)
            {
                return *m_dropLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_hiLowLines(){

            return m_has_hiLowLines;
        
        }
        CT_ChartLines* mutable_hiLowLines(){

                m_has_hiLowLines = true;
                if (!m_hiLowLines)
                {
                    m_hiLowLines = new CT_ChartLines();
                }
                return m_hiLowLines;
            
        }
        const CT_ChartLines& hiLowLines(){

            if (m_hiLowLines)
            {
                return *m_hiLowLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_upDownBars(){

            return m_has_upDownBars;
        
        }
        CT_UpDownBars* mutable_upDownBars(){

                m_has_upDownBars = true;
                if (!m_upDownBars)
                {
                    m_upDownBars = new CT_UpDownBars();
                }
                return m_upDownBars;
            
        }
        const CT_UpDownBars& upDownBars(){

            if (m_upDownBars)
            {
                return *m_upDownBars;
            }
            return CT_UpDownBars::default_instance();
        
        }
        bool has_marker(){

            return m_has_marker;
        
        }
        CT_Boolean* mutable_marker(){

                m_has_marker = true;
                if (!m_marker)
                {
                    m_marker = new CT_Boolean();
                }
                return m_marker;
            
        }
        const CT_Boolean& marker(){

            if (m_marker)
            {
                return *m_marker;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_smooth(){

            return m_has_smooth;
        
        }
        CT_Boolean* mutable_smooth(){

                m_has_smooth = true;
                if (!m_smooth)
                {
                    m_smooth = new CT_Boolean();
                }
                return m_smooth;
            
        }
        const CT_Boolean& smooth(){

            if (m_smooth)
            {
                return *m_smooth;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_grouping = false;
                
        if (m_grouping)
        {
            delete m_grouping;
            m_grouping = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_dropLines = false;
                
        if (m_dropLines)
        {
            delete m_dropLines;
            m_dropLines = NULL;
        }
    
            
                m_has_hiLowLines = false;
                
        if (m_hiLowLines)
        {
            delete m_hiLowLines;
            m_hiLowLines = NULL;
        }
    
            
                m_has_upDownBars = false;
                
        if (m_upDownBars)
        {
            delete m_upDownBars;
            m_upDownBars = NULL;
        }
    
            
                m_has_marker = false;
                
        if (m_marker)
        {
            delete m_marker;
            m_marker = NULL;
        }
    
            
                m_has_smooth = false;
                
        if (m_smooth)
        {
            delete m_smooth;
            m_smooth = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_grouping)
                {
                    m_grouping->toXml(\d:grouping\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_grouping->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_grouping->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_grouping->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_dropLines)
                {
                    m_grouping->toXml(\d:dropLines\, _outStream);;
                }
            
                if (m_has_hiLowLines)
                {
                    m_grouping->toXml(\d:hiLowLines\, _outStream);;
                }
            
                if (m_has_upDownBars)
                {
                    m_grouping->toXml(\d:upDownBars\, _outStream);;
                }
            
                if (m_has_marker)
                {
                    m_grouping->toXml(\d:marker\, _outStream);;
                }
            
                if (m_has_smooth)
                {
                    m_grouping->toXml(\d:smooth\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_grouping->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_grouping->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LineChart& default_instance(){

    if (!CT_LineChart::default_instance_)
    {
        CT_LineChart::default_instance_ = new CT_LineChart();
    }
    return *CT_LineChart::default_instance_;

        }

    private:
        bool m_has_grouping ;
        CT_Grouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_LineSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_hiLowLines ;
        CT_ChartLines* m_hiLowLines ;
        bool m_has_upDownBars ;
        CT_UpDownBars* m_upDownBars ;
        bool m_has_marker ;
        CT_Boolean* m_marker ;
        bool m_has_smooth ;
        CT_Boolean* m_smooth ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_LineChart* default_instance_ ;

    }

    class CT_Line3DChart : public XSD::ComplexType{
    public:
        bool has_grouping(){

            return m_has_grouping;
        
        }
        CT_Grouping* mutable_grouping(){

                m_has_grouping = true;
                if (!m_grouping)
                {
                    m_grouping = new CT_Grouping();
                }
                return m_grouping;
            
        }
        const CT_Grouping& grouping(){

            if (m_grouping)
            {
                return *m_grouping;
            }
            return CT_Grouping::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_LineSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_LineSer();
                }
                return m_ser;
            
        }
        const CT_LineSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_LineSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_dropLines(){

            return m_has_dropLines;
        
        }
        CT_ChartLines* mutable_dropLines(){

                m_has_dropLines = true;
                if (!m_dropLines)
                {
                    m_dropLines = new CT_ChartLines();
                }
                return m_dropLines;
            
        }
        const CT_ChartLines& dropLines(){

            if (m_dropLines)
            {
                return *m_dropLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_gapDepth(){

            return m_has_gapDepth;
        
        }
        CT_GapAmount* mutable_gapDepth(){

                m_has_gapDepth = true;
                if (!m_gapDepth)
                {
                    m_gapDepth = new CT_GapAmount();
                }
                return m_gapDepth;
            
        }
        const CT_GapAmount& gapDepth(){

            if (m_gapDepth)
            {
                return *m_gapDepth;
            }
            return CT_GapAmount::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_grouping = false;
                
        if (m_grouping)
        {
            delete m_grouping;
            m_grouping = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_dropLines = false;
                
        if (m_dropLines)
        {
            delete m_dropLines;
            m_dropLines = NULL;
        }
    
            
                m_has_gapDepth = false;
                
        if (m_gapDepth)
        {
            delete m_gapDepth;
            m_gapDepth = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_grouping)
                {
                    m_grouping->toXml(\d:grouping\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_grouping->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_grouping->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_grouping->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_dropLines)
                {
                    m_grouping->toXml(\d:dropLines\, _outStream);;
                }
            
                if (m_has_gapDepth)
                {
                    m_grouping->toXml(\d:gapDepth\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_grouping->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_grouping->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Line3DChart& default_instance(){

    if (!CT_Line3DChart::default_instance_)
    {
        CT_Line3DChart::default_instance_ = new CT_Line3DChart();
    }
    return *CT_Line3DChart::default_instance_;

        }

    private:
        bool m_has_grouping ;
        CT_Grouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_LineSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_gapDepth ;
        CT_GapAmount* m_gapDepth ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Line3DChart* default_instance_ ;

    }

    class CT_StockChart : public XSD::ComplexType{
    public:
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_LineSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_LineSer();
                }
                return m_ser;
            
        }
        const CT_LineSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_LineSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_dropLines(){

            return m_has_dropLines;
        
        }
        CT_ChartLines* mutable_dropLines(){

                m_has_dropLines = true;
                if (!m_dropLines)
                {
                    m_dropLines = new CT_ChartLines();
                }
                return m_dropLines;
            
        }
        const CT_ChartLines& dropLines(){

            if (m_dropLines)
            {
                return *m_dropLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_hiLowLines(){

            return m_has_hiLowLines;
        
        }
        CT_ChartLines* mutable_hiLowLines(){

                m_has_hiLowLines = true;
                if (!m_hiLowLines)
                {
                    m_hiLowLines = new CT_ChartLines();
                }
                return m_hiLowLines;
            
        }
        const CT_ChartLines& hiLowLines(){

            if (m_hiLowLines)
            {
                return *m_hiLowLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_upDownBars(){

            return m_has_upDownBars;
        
        }
        CT_UpDownBars* mutable_upDownBars(){

                m_has_upDownBars = true;
                if (!m_upDownBars)
                {
                    m_upDownBars = new CT_UpDownBars();
                }
                return m_upDownBars;
            
        }
        const CT_UpDownBars& upDownBars(){

            if (m_upDownBars)
            {
                return *m_upDownBars;
            }
            return CT_UpDownBars::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_dropLines = false;
                
        if (m_dropLines)
        {
            delete m_dropLines;
            m_dropLines = NULL;
        }
    
            
                m_has_hiLowLines = false;
                
        if (m_hiLowLines)
        {
            delete m_hiLowLines;
            m_hiLowLines = NULL;
        }
    
            
                m_has_upDownBars = false;
                
        if (m_upDownBars)
        {
            delete m_upDownBars;
            m_upDownBars = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_ser)
                {
                    m_ser->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_ser->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_dropLines)
                {
                    m_ser->toXml(\d:dropLines\, _outStream);;
                }
            
                if (m_has_hiLowLines)
                {
                    m_ser->toXml(\d:hiLowLines\, _outStream);;
                }
            
                if (m_has_upDownBars)
                {
                    m_ser->toXml(\d:upDownBars\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_ser->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_ser->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StockChart& default_instance(){

    if (!CT_StockChart::default_instance_)
    {
        CT_StockChart::default_instance_ = new CT_StockChart();
    }
    return *CT_StockChart::default_instance_;

        }

    private:
        bool m_has_ser ;
        CT_LineSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_hiLowLines ;
        CT_ChartLines* m_hiLowLines ;
        bool m_has_upDownBars ;
        CT_UpDownBars* m_upDownBars ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_StockChart* default_instance_ ;

    }

    class CT_ScatterStyle : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ScatterStyle& default_instance(){

    if (!CT_ScatterStyle::default_instance_)
    {
        CT_ScatterStyle::default_instance_ = new CT_ScatterStyle();
    }
    return *CT_ScatterStyle::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_ScatterStyle& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_ScatterStyle(_val_attr);
        
        }
        const ST_ScatterStyle& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_ScatterStyle::default_instance();
        
        }

    private:
        static CT_ScatterStyle* default_instance_ ;
        bool m_has_val_attr ;
        ST_ScatterStyle* m_val_attr ;

    }

    class CT_ScatterChart : public XSD::ComplexType{
    public:
        bool has_scatterStyle(){

            return m_has_scatterStyle;
        
        }
        CT_ScatterStyle* mutable_scatterStyle(){

                m_has_scatterStyle = true;
                if (!m_scatterStyle)
                {
                    m_scatterStyle = new CT_ScatterStyle();
                }
                return m_scatterStyle;
            
        }
        const CT_ScatterStyle& scatterStyle(){

            if (m_scatterStyle)
            {
                return *m_scatterStyle;
            }
            return CT_ScatterStyle::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_ScatterSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_ScatterSer();
                }
                return m_ser;
            
        }
        const CT_ScatterSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_ScatterSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_scatterStyle = false;
                
        if (m_scatterStyle)
        {
            delete m_scatterStyle;
            m_scatterStyle = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_scatterStyle)
                {
                    m_scatterStyle->toXml(\d:scatterStyle\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_scatterStyle->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_scatterStyle->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_scatterStyle->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_scatterStyle->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_scatterStyle->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ScatterChart& default_instance(){

    if (!CT_ScatterChart::default_instance_)
    {
        CT_ScatterChart::default_instance_ = new CT_ScatterChart();
    }
    return *CT_ScatterChart::default_instance_;

        }

    private:
        bool m_has_scatterStyle ;
        CT_ScatterStyle* m_scatterStyle ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_ScatterSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ScatterChart* default_instance_ ;

    }

    class CT_RadarStyle : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RadarStyle& default_instance(){

    if (!CT_RadarStyle::default_instance_)
    {
        CT_RadarStyle::default_instance_ = new CT_RadarStyle();
    }
    return *CT_RadarStyle::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_RadarStyle& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_RadarStyle(_val_attr);
        
        }
        const ST_RadarStyle& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_RadarStyle::default_instance();
        
        }

    private:
        static CT_RadarStyle* default_instance_ ;
        bool m_has_val_attr ;
        ST_RadarStyle* m_val_attr ;

    }

    class CT_RadarChart : public XSD::ComplexType{
    public:
        bool has_radarStyle(){

            return m_has_radarStyle;
        
        }
        CT_RadarStyle* mutable_radarStyle(){

                m_has_radarStyle = true;
                if (!m_radarStyle)
                {
                    m_radarStyle = new CT_RadarStyle();
                }
                return m_radarStyle;
            
        }
        const CT_RadarStyle& radarStyle(){

            if (m_radarStyle)
            {
                return *m_radarStyle;
            }
            return CT_RadarStyle::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_RadarSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_RadarSer();
                }
                return m_ser;
            
        }
        const CT_RadarSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_RadarSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_radarStyle = false;
                
        if (m_radarStyle)
        {
            delete m_radarStyle;
            m_radarStyle = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_radarStyle)
                {
                    m_radarStyle->toXml(\d:radarStyle\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_radarStyle->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_radarStyle->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_radarStyle->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_radarStyle->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_radarStyle->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RadarChart& default_instance(){

    if (!CT_RadarChart::default_instance_)
    {
        CT_RadarChart::default_instance_ = new CT_RadarChart();
    }
    return *CT_RadarChart::default_instance_;

        }

    private:
        bool m_has_radarStyle ;
        CT_RadarStyle* m_radarStyle ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_RadarSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_RadarChart* default_instance_ ;

    }

    class CT_BarGrouping : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BarGrouping& default_instance(){

    if (!CT_BarGrouping::default_instance_)
    {
        CT_BarGrouping::default_instance_ = new CT_BarGrouping();
    }
    return *CT_BarGrouping::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_BarGrouping& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_BarGrouping(_val_attr);
        
        }
        const ST_BarGrouping& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_BarGrouping::default_instance();
        
        }

    private:
        static CT_BarGrouping* default_instance_ ;
        bool m_has_val_attr ;
        ST_BarGrouping* m_val_attr ;

    }

    class CT_BarDir : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BarDir& default_instance(){

    if (!CT_BarDir::default_instance_)
    {
        CT_BarDir::default_instance_ = new CT_BarDir();
    }
    return *CT_BarDir::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_BarDir& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_BarDir(_val_attr);
        
        }
        const ST_BarDir& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_BarDir::default_instance();
        
        }

    private:
        static CT_BarDir* default_instance_ ;
        bool m_has_val_attr ;
        ST_BarDir* m_val_attr ;

    }

    class CT_Shape : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Shape& default_instance(){

    if (!CT_Shape::default_instance_)
    {
        CT_Shape::default_instance_ = new CT_Shape();
    }
    return *CT_Shape::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Shape& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Shape(_val_attr);
        
        }
        const ST_Shape& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Shape::default_instance();
        
        }

    private:
        static CT_Shape* default_instance_ ;
        bool m_has_val_attr ;
        ST_Shape* m_val_attr ;

    }

    class CT_BarChart : public XSD::ComplexType{
    public:
        bool has_barDir(){

            return m_has_barDir;
        
        }
        CT_BarDir* mutable_barDir(){

                m_has_barDir = true;
                if (!m_barDir)
                {
                    m_barDir = new CT_BarDir();
                }
                return m_barDir;
            
        }
        const CT_BarDir& barDir(){

            if (m_barDir)
            {
                return *m_barDir;
            }
            return CT_BarDir::default_instance();
        
        }
        bool has_grouping(){

            return m_has_grouping;
        
        }
        CT_BarGrouping* mutable_grouping(){

                m_has_grouping = true;
                if (!m_grouping)
                {
                    m_grouping = new CT_BarGrouping();
                }
                return m_grouping;
            
        }
        const CT_BarGrouping& grouping(){

            if (m_grouping)
            {
                return *m_grouping;
            }
            return CT_BarGrouping::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_BarSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_BarSer();
                }
                return m_ser;
            
        }
        const CT_BarSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_BarSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_gapWidth(){

            return m_has_gapWidth;
        
        }
        CT_GapAmount* mutable_gapWidth(){

                m_has_gapWidth = true;
                if (!m_gapWidth)
                {
                    m_gapWidth = new CT_GapAmount();
                }
                return m_gapWidth;
            
        }
        const CT_GapAmount& gapWidth(){

            if (m_gapWidth)
            {
                return *m_gapWidth;
            }
            return CT_GapAmount::default_instance();
        
        }
        bool has_overlap(){

            return m_has_overlap;
        
        }
        CT_Overlap* mutable_overlap(){

                m_has_overlap = true;
                if (!m_overlap)
                {
                    m_overlap = new CT_Overlap();
                }
                return m_overlap;
            
        }
        const CT_Overlap& overlap(){

            if (m_overlap)
            {
                return *m_overlap;
            }
            return CT_Overlap::default_instance();
        
        }
        bool has_serLines(){

            return m_has_serLines;
        
        }
        CT_ChartLines* mutable_serLines(){

                m_has_serLines = true;
                if (!m_serLines)
                {
                    m_serLines = new CT_ChartLines();
                }
                return m_serLines;
            
        }
        const CT_ChartLines& serLines(){

            if (m_serLines)
            {
                return *m_serLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_barDir = false;
                
        if (m_barDir)
        {
            delete m_barDir;
            m_barDir = NULL;
        }
    
            
                m_has_grouping = false;
                
        if (m_grouping)
        {
            delete m_grouping;
            m_grouping = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_gapWidth = false;
                
        if (m_gapWidth)
        {
            delete m_gapWidth;
            m_gapWidth = NULL;
        }
    
            
                m_has_overlap = false;
                
        if (m_overlap)
        {
            delete m_overlap;
            m_overlap = NULL;
        }
    
            
                m_has_serLines = false;
                
        if (m_serLines)
        {
            delete m_serLines;
            m_serLines = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_barDir)
                {
                    m_barDir->toXml(\d:barDir\, _outStream);;
                }
            
                if (m_has_grouping)
                {
                    m_barDir->toXml(\d:grouping\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_barDir->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_barDir->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_barDir->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_gapWidth)
                {
                    m_barDir->toXml(\d:gapWidth\, _outStream);;
                }
            
                if (m_has_overlap)
                {
                    m_barDir->toXml(\d:overlap\, _outStream);;
                }
            
                if (m_has_serLines)
                {
                    m_barDir->toXml(\d:serLines\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_barDir->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_barDir->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BarChart& default_instance(){

    if (!CT_BarChart::default_instance_)
    {
        CT_BarChart::default_instance_ = new CT_BarChart();
    }
    return *CT_BarChart::default_instance_;

        }

    private:
        bool m_has_barDir ;
        CT_BarDir* m_barDir ;
        bool m_has_grouping ;
        CT_BarGrouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_BarSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_gapWidth ;
        CT_GapAmount* m_gapWidth ;
        bool m_has_overlap ;
        CT_Overlap* m_overlap ;
        bool m_has_serLines ;
        CT_ChartLines* m_serLines ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BarChart* default_instance_ ;

    }

    class CT_Bar3DChart : public XSD::ComplexType{
    public:
        bool has_barDir(){

            return m_has_barDir;
        
        }
        CT_BarDir* mutable_barDir(){

                m_has_barDir = true;
                if (!m_barDir)
                {
                    m_barDir = new CT_BarDir();
                }
                return m_barDir;
            
        }
        const CT_BarDir& barDir(){

            if (m_barDir)
            {
                return *m_barDir;
            }
            return CT_BarDir::default_instance();
        
        }
        bool has_grouping(){

            return m_has_grouping;
        
        }
        CT_BarGrouping* mutable_grouping(){

                m_has_grouping = true;
                if (!m_grouping)
                {
                    m_grouping = new CT_BarGrouping();
                }
                return m_grouping;
            
        }
        const CT_BarGrouping& grouping(){

            if (m_grouping)
            {
                return *m_grouping;
            }
            return CT_BarGrouping::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_BarSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_BarSer();
                }
                return m_ser;
            
        }
        const CT_BarSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_BarSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_gapWidth(){

            return m_has_gapWidth;
        
        }
        CT_GapAmount* mutable_gapWidth(){

                m_has_gapWidth = true;
                if (!m_gapWidth)
                {
                    m_gapWidth = new CT_GapAmount();
                }
                return m_gapWidth;
            
        }
        const CT_GapAmount& gapWidth(){

            if (m_gapWidth)
            {
                return *m_gapWidth;
            }
            return CT_GapAmount::default_instance();
        
        }
        bool has_gapDepth(){

            return m_has_gapDepth;
        
        }
        CT_GapAmount* mutable_gapDepth(){

                m_has_gapDepth = true;
                if (!m_gapDepth)
                {
                    m_gapDepth = new CT_GapAmount();
                }
                return m_gapDepth;
            
        }
        const CT_GapAmount& gapDepth(){

            if (m_gapDepth)
            {
                return *m_gapDepth;
            }
            return CT_GapAmount::default_instance();
        
        }
        bool has_shape(){

            return m_has_shape;
        
        }
        CT_Shape* mutable_shape(){

                m_has_shape = true;
                if (!m_shape)
                {
                    m_shape = new CT_Shape();
                }
                return m_shape;
            
        }
        const CT_Shape& shape(){

            if (m_shape)
            {
                return *m_shape;
            }
            return CT_Shape::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_barDir = false;
                
        if (m_barDir)
        {
            delete m_barDir;
            m_barDir = NULL;
        }
    
            
                m_has_grouping = false;
                
        if (m_grouping)
        {
            delete m_grouping;
            m_grouping = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_gapWidth = false;
                
        if (m_gapWidth)
        {
            delete m_gapWidth;
            m_gapWidth = NULL;
        }
    
            
                m_has_gapDepth = false;
                
        if (m_gapDepth)
        {
            delete m_gapDepth;
            m_gapDepth = NULL;
        }
    
            
                m_has_shape = false;
                
        if (m_shape)
        {
            delete m_shape;
            m_shape = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_barDir)
                {
                    m_barDir->toXml(\d:barDir\, _outStream);;
                }
            
                if (m_has_grouping)
                {
                    m_barDir->toXml(\d:grouping\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_barDir->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_barDir->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_barDir->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_gapWidth)
                {
                    m_barDir->toXml(\d:gapWidth\, _outStream);;
                }
            
                if (m_has_gapDepth)
                {
                    m_barDir->toXml(\d:gapDepth\, _outStream);;
                }
            
                if (m_has_shape)
                {
                    m_barDir->toXml(\d:shape\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_barDir->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_barDir->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Bar3DChart& default_instance(){

    if (!CT_Bar3DChart::default_instance_)
    {
        CT_Bar3DChart::default_instance_ = new CT_Bar3DChart();
    }
    return *CT_Bar3DChart::default_instance_;

        }

    private:
        bool m_has_barDir ;
        CT_BarDir* m_barDir ;
        bool m_has_grouping ;
        CT_BarGrouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_BarSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_gapWidth ;
        CT_GapAmount* m_gapWidth ;
        bool m_has_gapDepth ;
        CT_GapAmount* m_gapDepth ;
        bool m_has_shape ;
        CT_Shape* m_shape ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Bar3DChart* default_instance_ ;

    }

    class CT_AreaChart : public XSD::ComplexType{
    public:
        bool has_grouping(){

            return m_has_grouping;
        
        }
        CT_Grouping* mutable_grouping(){

                m_has_grouping = true;
                if (!m_grouping)
                {
                    m_grouping = new CT_Grouping();
                }
                return m_grouping;
            
        }
        const CT_Grouping& grouping(){

            if (m_grouping)
            {
                return *m_grouping;
            }
            return CT_Grouping::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_AreaSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_AreaSer();
                }
                return m_ser;
            
        }
        const CT_AreaSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_AreaSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_dropLines(){

            return m_has_dropLines;
        
        }
        CT_ChartLines* mutable_dropLines(){

                m_has_dropLines = true;
                if (!m_dropLines)
                {
                    m_dropLines = new CT_ChartLines();
                }
                return m_dropLines;
            
        }
        const CT_ChartLines& dropLines(){

            if (m_dropLines)
            {
                return *m_dropLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_grouping = false;
                
        if (m_grouping)
        {
            delete m_grouping;
            m_grouping = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_dropLines = false;
                
        if (m_dropLines)
        {
            delete m_dropLines;
            m_dropLines = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_grouping)
                {
                    m_grouping->toXml(\d:grouping\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_grouping->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_grouping->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_grouping->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_dropLines)
                {
                    m_grouping->toXml(\d:dropLines\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_grouping->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_grouping->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AreaChart& default_instance(){

    if (!CT_AreaChart::default_instance_)
    {
        CT_AreaChart::default_instance_ = new CT_AreaChart();
    }
    return *CT_AreaChart::default_instance_;

        }

    private:
        bool m_has_grouping ;
        CT_Grouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_AreaSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_AreaChart* default_instance_ ;

    }

    class CT_Area3DChart : public XSD::ComplexType{
    public:
        bool has_grouping(){

            return m_has_grouping;
        
        }
        CT_Grouping* mutable_grouping(){

                m_has_grouping = true;
                if (!m_grouping)
                {
                    m_grouping = new CT_Grouping();
                }
                return m_grouping;
            
        }
        const CT_Grouping& grouping(){

            if (m_grouping)
            {
                return *m_grouping;
            }
            return CT_Grouping::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_AreaSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_AreaSer();
                }
                return m_ser;
            
        }
        const CT_AreaSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_AreaSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_dropLines(){

            return m_has_dropLines;
        
        }
        CT_ChartLines* mutable_dropLines(){

                m_has_dropLines = true;
                if (!m_dropLines)
                {
                    m_dropLines = new CT_ChartLines();
                }
                return m_dropLines;
            
        }
        const CT_ChartLines& dropLines(){

            if (m_dropLines)
            {
                return *m_dropLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_gapDepth(){

            return m_has_gapDepth;
        
        }
        CT_GapAmount* mutable_gapDepth(){

                m_has_gapDepth = true;
                if (!m_gapDepth)
                {
                    m_gapDepth = new CT_GapAmount();
                }
                return m_gapDepth;
            
        }
        const CT_GapAmount& gapDepth(){

            if (m_gapDepth)
            {
                return *m_gapDepth;
            }
            return CT_GapAmount::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_grouping = false;
                
        if (m_grouping)
        {
            delete m_grouping;
            m_grouping = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_dropLines = false;
                
        if (m_dropLines)
        {
            delete m_dropLines;
            m_dropLines = NULL;
        }
    
            
                m_has_gapDepth = false;
                
        if (m_gapDepth)
        {
            delete m_gapDepth;
            m_gapDepth = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_grouping)
                {
                    m_grouping->toXml(\d:grouping\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_grouping->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_grouping->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_grouping->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_dropLines)
                {
                    m_grouping->toXml(\d:dropLines\, _outStream);;
                }
            
                if (m_has_gapDepth)
                {
                    m_grouping->toXml(\d:gapDepth\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_grouping->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_grouping->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Area3DChart& default_instance(){

    if (!CT_Area3DChart::default_instance_)
    {
        CT_Area3DChart::default_instance_ = new CT_Area3DChart();
    }
    return *CT_Area3DChart::default_instance_;

        }

    private:
        bool m_has_grouping ;
        CT_Grouping* m_grouping ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_AreaSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_dropLines ;
        CT_ChartLines* m_dropLines ;
        bool m_has_gapDepth ;
        CT_GapAmount* m_gapDepth ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Area3DChart* default_instance_ ;

    }

    class CT_PieChart : public XSD::ComplexType{
    public:
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_PieSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_PieSer();
                }
                return m_ser;
            
        }
        const CT_PieSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_PieSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_firstSliceAng(){

            return m_has_firstSliceAng;
        
        }
        CT_FirstSliceAng* mutable_firstSliceAng(){

                m_has_firstSliceAng = true;
                if (!m_firstSliceAng)
                {
                    m_firstSliceAng = new CT_FirstSliceAng();
                }
                return m_firstSliceAng;
            
        }
        const CT_FirstSliceAng& firstSliceAng(){

            if (m_firstSliceAng)
            {
                return *m_firstSliceAng;
            }
            return CT_FirstSliceAng::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_firstSliceAng = false;
                
        if (m_firstSliceAng)
        {
            delete m_firstSliceAng;
            m_firstSliceAng = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_varyColors)
                {
                    m_varyColors->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_varyColors->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_varyColors->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_firstSliceAng)
                {
                    m_varyColors->toXml(\d:firstSliceAng\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_varyColors->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PieChart& default_instance(){

    if (!CT_PieChart::default_instance_)
    {
        CT_PieChart::default_instance_ = new CT_PieChart();
    }
    return *CT_PieChart::default_instance_;

        }

    private:
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_PieSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_firstSliceAng ;
        CT_FirstSliceAng* m_firstSliceAng ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PieChart* default_instance_ ;

    }

    class CT_Pie3DChart : public XSD::ComplexType{
    public:
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_PieSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_PieSer();
                }
                return m_ser;
            
        }
        const CT_PieSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_PieSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_varyColors)
                {
                    m_varyColors->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_varyColors->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_varyColors->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_varyColors->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Pie3DChart& default_instance(){

    if (!CT_Pie3DChart::default_instance_)
    {
        CT_Pie3DChart::default_instance_ = new CT_Pie3DChart();
    }
    return *CT_Pie3DChart::default_instance_;

        }

    private:
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_PieSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Pie3DChart* default_instance_ ;

    }

    class CT_DoughnutChart : public XSD::ComplexType{
    public:
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_PieSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_PieSer();
                }
                return m_ser;
            
        }
        const CT_PieSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_PieSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_firstSliceAng(){

            return m_has_firstSliceAng;
        
        }
        CT_FirstSliceAng* mutable_firstSliceAng(){

                m_has_firstSliceAng = true;
                if (!m_firstSliceAng)
                {
                    m_firstSliceAng = new CT_FirstSliceAng();
                }
                return m_firstSliceAng;
            
        }
        const CT_FirstSliceAng& firstSliceAng(){

            if (m_firstSliceAng)
            {
                return *m_firstSliceAng;
            }
            return CT_FirstSliceAng::default_instance();
        
        }
        bool has_holeSize(){

            return m_has_holeSize;
        
        }
        CT_HoleSize* mutable_holeSize(){

                m_has_holeSize = true;
                if (!m_holeSize)
                {
                    m_holeSize = new CT_HoleSize();
                }
                return m_holeSize;
            
        }
        const CT_HoleSize& holeSize(){

            if (m_holeSize)
            {
                return *m_holeSize;
            }
            return CT_HoleSize::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_firstSliceAng = false;
                
        if (m_firstSliceAng)
        {
            delete m_firstSliceAng;
            m_firstSliceAng = NULL;
        }
    
            
                m_has_holeSize = false;
                
        if (m_holeSize)
        {
            delete m_holeSize;
            m_holeSize = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_varyColors)
                {
                    m_varyColors->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_varyColors->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_varyColors->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_firstSliceAng)
                {
                    m_varyColors->toXml(\d:firstSliceAng\, _outStream);;
                }
            
                if (m_has_holeSize)
                {
                    m_varyColors->toXml(\d:holeSize\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_varyColors->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DoughnutChart& default_instance(){

    if (!CT_DoughnutChart::default_instance_)
    {
        CT_DoughnutChart::default_instance_ = new CT_DoughnutChart();
    }
    return *CT_DoughnutChart::default_instance_;

        }

    private:
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_PieSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_firstSliceAng ;
        CT_FirstSliceAng* m_firstSliceAng ;
        bool m_has_holeSize ;
        CT_HoleSize* m_holeSize ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DoughnutChart* default_instance_ ;

    }

    class CT_OfPieType : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OfPieType& default_instance(){

    if (!CT_OfPieType::default_instance_)
    {
        CT_OfPieType::default_instance_ = new CT_OfPieType();
    }
    return *CT_OfPieType::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_OfPieType& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_OfPieType(_val_attr);
        
        }
        const ST_OfPieType& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_OfPieType::default_instance();
        
        }

    private:
        static CT_OfPieType* default_instance_ ;
        bool m_has_val_attr ;
        ST_OfPieType* m_val_attr ;

    }

    class CT_OfPieChart : public XSD::ComplexType{
    public:
        bool has_ofPieType(){

            return m_has_ofPieType;
        
        }
        CT_OfPieType* mutable_ofPieType(){

                m_has_ofPieType = true;
                if (!m_ofPieType)
                {
                    m_ofPieType = new CT_OfPieType();
                }
                return m_ofPieType;
            
        }
        const CT_OfPieType& ofPieType(){

            if (m_ofPieType)
            {
                return *m_ofPieType;
            }
            return CT_OfPieType::default_instance();
        
        }
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_PieSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_PieSer();
                }
                return m_ser;
            
        }
        const CT_PieSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_PieSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_gapWidth(){

            return m_has_gapWidth;
        
        }
        CT_GapAmount* mutable_gapWidth(){

                m_has_gapWidth = true;
                if (!m_gapWidth)
                {
                    m_gapWidth = new CT_GapAmount();
                }
                return m_gapWidth;
            
        }
        const CT_GapAmount& gapWidth(){

            if (m_gapWidth)
            {
                return *m_gapWidth;
            }
            return CT_GapAmount::default_instance();
        
        }
        bool has_splitType(){

            return m_has_splitType;
        
        }
        CT_SplitType* mutable_splitType(){

                m_has_splitType = true;
                if (!m_splitType)
                {
                    m_splitType = new CT_SplitType();
                }
                return m_splitType;
            
        }
        const CT_SplitType& splitType(){

            if (m_splitType)
            {
                return *m_splitType;
            }
            return CT_SplitType::default_instance();
        
        }
        bool has_splitPos(){

            return m_has_splitPos;
        
        }
        CT_Double* mutable_splitPos(){

                m_has_splitPos = true;
                if (!m_splitPos)
                {
                    m_splitPos = new CT_Double();
                }
                return m_splitPos;
            
        }
        const CT_Double& splitPos(){

            if (m_splitPos)
            {
                return *m_splitPos;
            }
            return CT_Double::default_instance();
        
        }
        bool has_custSplit(){

            return m_has_custSplit;
        
        }
        CT_CustSplit* mutable_custSplit(){

                m_has_custSplit = true;
                if (!m_custSplit)
                {
                    m_custSplit = new CT_CustSplit();
                }
                return m_custSplit;
            
        }
        const CT_CustSplit& custSplit(){

            if (m_custSplit)
            {
                return *m_custSplit;
            }
            return CT_CustSplit::default_instance();
        
        }
        bool has_secondPieSize(){

            return m_has_secondPieSize;
        
        }
        CT_SecondPieSize* mutable_secondPieSize(){

                m_has_secondPieSize = true;
                if (!m_secondPieSize)
                {
                    m_secondPieSize = new CT_SecondPieSize();
                }
                return m_secondPieSize;
            
        }
        const CT_SecondPieSize& secondPieSize(){

            if (m_secondPieSize)
            {
                return *m_secondPieSize;
            }
            return CT_SecondPieSize::default_instance();
        
        }
        bool has_serLines(){

            return m_has_serLines;
        
        }
        CT_ChartLines* mutable_serLines(){

                m_has_serLines = true;
                if (!m_serLines)
                {
                    m_serLines = new CT_ChartLines();
                }
                return m_serLines;
            
        }
        const CT_ChartLines& serLines(){

            if (m_serLines)
            {
                return *m_serLines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_ofPieType = false;
                
        if (m_ofPieType)
        {
            delete m_ofPieType;
            m_ofPieType = NULL;
        }
    
            
                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_gapWidth = false;
                
        if (m_gapWidth)
        {
            delete m_gapWidth;
            m_gapWidth = NULL;
        }
    
            
                m_has_splitType = false;
                
        if (m_splitType)
        {
            delete m_splitType;
            m_splitType = NULL;
        }
    
            
                m_has_splitPos = false;
                
        if (m_splitPos)
        {
            delete m_splitPos;
            m_splitPos = NULL;
        }
    
            
                m_has_custSplit = false;
                
        if (m_custSplit)
        {
            delete m_custSplit;
            m_custSplit = NULL;
        }
    
            
                m_has_secondPieSize = false;
                
        if (m_secondPieSize)
        {
            delete m_secondPieSize;
            m_secondPieSize = NULL;
        }
    
            
                m_has_serLines = false;
                
        if (m_serLines)
        {
            delete m_serLines;
            m_serLines = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_ofPieType)
                {
                    m_ofPieType->toXml(\d:ofPieType\, _outStream);;
                }
            
                if (m_has_varyColors)
                {
                    m_ofPieType->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_ofPieType->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_ofPieType->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_gapWidth)
                {
                    m_ofPieType->toXml(\d:gapWidth\, _outStream);;
                }
            
                if (m_has_splitType)
                {
                    m_ofPieType->toXml(\d:splitType\, _outStream);;
                }
            
                if (m_has_splitPos)
                {
                    m_ofPieType->toXml(\d:splitPos\, _outStream);;
                }
            
                if (m_has_custSplit)
                {
                    m_ofPieType->toXml(\d:custSplit\, _outStream);;
                }
            
                if (m_has_secondPieSize)
                {
                    m_ofPieType->toXml(\d:secondPieSize\, _outStream);;
                }
            
                if (m_has_serLines)
                {
                    m_ofPieType->toXml(\d:serLines\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_ofPieType->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OfPieChart& default_instance(){

    if (!CT_OfPieChart::default_instance_)
    {
        CT_OfPieChart::default_instance_ = new CT_OfPieChart();
    }
    return *CT_OfPieChart::default_instance_;

        }

    private:
        bool m_has_ofPieType ;
        CT_OfPieType* m_ofPieType ;
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_PieSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_gapWidth ;
        CT_GapAmount* m_gapWidth ;
        bool m_has_splitType ;
        CT_SplitType* m_splitType ;
        bool m_has_splitPos ;
        CT_Double* m_splitPos ;
        bool m_has_custSplit ;
        CT_CustSplit* m_custSplit ;
        bool m_has_secondPieSize ;
        CT_SecondPieSize* m_secondPieSize ;
        bool m_has_serLines ;
        CT_ChartLines* m_serLines ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_OfPieChart* default_instance_ ;

    }

    class CT_BubbleChart : public XSD::ComplexType{
    public:
        bool has_varyColors(){

            return m_has_varyColors;
        
        }
        CT_Boolean* mutable_varyColors(){

                m_has_varyColors = true;
                if (!m_varyColors)
                {
                    m_varyColors = new CT_Boolean();
                }
                return m_varyColors;
            
        }
        const CT_Boolean& varyColors(){

            if (m_varyColors)
            {
                return *m_varyColors;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_BubbleSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_BubbleSer();
                }
                return m_ser;
            
        }
        const CT_BubbleSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_BubbleSer::default_instance();
        
        }
        bool has_dLbls(){

            return m_has_dLbls;
        
        }
        CT_DLbls* mutable_dLbls(){

                m_has_dLbls = true;
                if (!m_dLbls)
                {
                    m_dLbls = new CT_DLbls();
                }
                return m_dLbls;
            
        }
        const CT_DLbls& dLbls(){

            if (m_dLbls)
            {
                return *m_dLbls;
            }
            return CT_DLbls::default_instance();
        
        }
        bool has_bubble3D(){

            return m_has_bubble3D;
        
        }
        CT_Boolean* mutable_bubble3D(){

                m_has_bubble3D = true;
                if (!m_bubble3D)
                {
                    m_bubble3D = new CT_Boolean();
                }
                return m_bubble3D;
            
        }
        const CT_Boolean& bubble3D(){

            if (m_bubble3D)
            {
                return *m_bubble3D;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_bubbleScale(){

            return m_has_bubbleScale;
        
        }
        CT_BubbleScale* mutable_bubbleScale(){

                m_has_bubbleScale = true;
                if (!m_bubbleScale)
                {
                    m_bubbleScale = new CT_BubbleScale();
                }
                return m_bubbleScale;
            
        }
        const CT_BubbleScale& bubbleScale(){

            if (m_bubbleScale)
            {
                return *m_bubbleScale;
            }
            return CT_BubbleScale::default_instance();
        
        }
        bool has_showNegBubbles(){

            return m_has_showNegBubbles;
        
        }
        CT_Boolean* mutable_showNegBubbles(){

                m_has_showNegBubbles = true;
                if (!m_showNegBubbles)
                {
                    m_showNegBubbles = new CT_Boolean();
                }
                return m_showNegBubbles;
            
        }
        const CT_Boolean& showNegBubbles(){

            if (m_showNegBubbles)
            {
                return *m_showNegBubbles;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_sizeRepresents(){

            return m_has_sizeRepresents;
        
        }
        CT_SizeRepresents* mutable_sizeRepresents(){

                m_has_sizeRepresents = true;
                if (!m_sizeRepresents)
                {
                    m_sizeRepresents = new CT_SizeRepresents();
                }
                return m_sizeRepresents;
            
        }
        const CT_SizeRepresents& sizeRepresents(){

            if (m_sizeRepresents)
            {
                return *m_sizeRepresents;
            }
            return CT_SizeRepresents::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_varyColors = false;
                
        if (m_varyColors)
        {
            delete m_varyColors;
            m_varyColors = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_dLbls = false;
                
        if (m_dLbls)
        {
            delete m_dLbls;
            m_dLbls = NULL;
        }
    
            
                m_has_bubble3D = false;
                
        if (m_bubble3D)
        {
            delete m_bubble3D;
            m_bubble3D = NULL;
        }
    
            
                m_has_bubbleScale = false;
                
        if (m_bubbleScale)
        {
            delete m_bubbleScale;
            m_bubbleScale = NULL;
        }
    
            
                m_has_showNegBubbles = false;
                
        if (m_showNegBubbles)
        {
            delete m_showNegBubbles;
            m_showNegBubbles = NULL;
        }
    
            
                m_has_sizeRepresents = false;
                
        if (m_sizeRepresents)
        {
            delete m_sizeRepresents;
            m_sizeRepresents = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_varyColors)
                {
                    m_varyColors->toXml(\d:varyColors\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_varyColors->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_dLbls)
                {
                    m_varyColors->toXml(\d:dLbls\, _outStream);;
                }
            
                if (m_has_bubble3D)
                {
                    m_varyColors->toXml(\d:bubble3D\, _outStream);;
                }
            
                if (m_has_bubbleScale)
                {
                    m_varyColors->toXml(\d:bubbleScale\, _outStream);;
                }
            
                if (m_has_showNegBubbles)
                {
                    m_varyColors->toXml(\d:showNegBubbles\, _outStream);;
                }
            
                if (m_has_sizeRepresents)
                {
                    m_varyColors->toXml(\d:sizeRepresents\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_varyColors->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_varyColors->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BubbleChart& default_instance(){

    if (!CT_BubbleChart::default_instance_)
    {
        CT_BubbleChart::default_instance_ = new CT_BubbleChart();
    }
    return *CT_BubbleChart::default_instance_;

        }

    private:
        bool m_has_varyColors ;
        CT_Boolean* m_varyColors ;
        bool m_has_ser ;
        CT_BubbleSer* m_ser ;
        bool m_has_dLbls ;
        CT_DLbls* m_dLbls ;
        bool m_has_bubble3D ;
        CT_Boolean* m_bubble3D ;
        bool m_has_bubbleScale ;
        CT_BubbleScale* m_bubbleScale ;
        bool m_has_showNegBubbles ;
        CT_Boolean* m_showNegBubbles ;
        bool m_has_sizeRepresents ;
        CT_SizeRepresents* m_sizeRepresents ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_BubbleChart* default_instance_ ;

    }

    class CT_BandFmt : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BandFmt& default_instance(){

    if (!CT_BandFmt::default_instance_)
    {
        CT_BandFmt::default_instance_ = new CT_BandFmt();
    }
    return *CT_BandFmt::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        static CT_BandFmt* default_instance_ ;

    }

    class CT_BandFmts : public XSD::ComplexType{
    public:
        bool has_bandFmt(){

            return m_has_bandFmt;
        
        }
        CT_BandFmt* mutable_bandFmt(){

                m_has_bandFmt = true;
                if (!m_bandFmt)
                {
                    m_bandFmt = new CT_BandFmt();
                }
                return m_bandFmt;
            
        }
        const CT_BandFmt& bandFmt(){

            if (m_bandFmt)
            {
                return *m_bandFmt;
            }
            return CT_BandFmt::default_instance();
        
        }
        void clear(){

                m_has_bandFmt = false;
                
        if (m_bandFmt)
        {
            delete m_bandFmt;
            m_bandFmt = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_bandFmt)
                {
                    m_bandFmt->toXml(\d:bandFmt\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BandFmts& default_instance(){

    if (!CT_BandFmts::default_instance_)
    {
        CT_BandFmts::default_instance_ = new CT_BandFmts();
    }
    return *CT_BandFmts::default_instance_;

        }

    private:
        bool m_has_bandFmt ;
        CT_BandFmt* m_bandFmt ;
        static CT_BandFmts* default_instance_ ;

    }

    class CT_SurfaceChart : public XSD::ComplexType{
    public:
        bool has_wireframe(){

            return m_has_wireframe;
        
        }
        CT_Boolean* mutable_wireframe(){

                m_has_wireframe = true;
                if (!m_wireframe)
                {
                    m_wireframe = new CT_Boolean();
                }
                return m_wireframe;
            
        }
        const CT_Boolean& wireframe(){

            if (m_wireframe)
            {
                return *m_wireframe;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_SurfaceSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_SurfaceSer();
                }
                return m_ser;
            
        }
        const CT_SurfaceSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_SurfaceSer::default_instance();
        
        }
        bool has_bandFmts(){

            return m_has_bandFmts;
        
        }
        CT_BandFmts* mutable_bandFmts(){

                m_has_bandFmts = true;
                if (!m_bandFmts)
                {
                    m_bandFmts = new CT_BandFmts();
                }
                return m_bandFmts;
            
        }
        const CT_BandFmts& bandFmts(){

            if (m_bandFmts)
            {
                return *m_bandFmts;
            }
            return CT_BandFmts::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_wireframe = false;
                
        if (m_wireframe)
        {
            delete m_wireframe;
            m_wireframe = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_bandFmts = false;
                
        if (m_bandFmts)
        {
            delete m_bandFmts;
            m_bandFmts = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_wireframe)
                {
                    m_wireframe->toXml(\d:wireframe\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_wireframe->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_bandFmts)
                {
                    m_wireframe->toXml(\d:bandFmts\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_wireframe->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_wireframe->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SurfaceChart& default_instance(){

    if (!CT_SurfaceChart::default_instance_)
    {
        CT_SurfaceChart::default_instance_ = new CT_SurfaceChart();
    }
    return *CT_SurfaceChart::default_instance_;

        }

    private:
        bool m_has_wireframe ;
        CT_Boolean* m_wireframe ;
        bool m_has_ser ;
        CT_SurfaceSer* m_ser ;
        bool m_has_bandFmts ;
        CT_BandFmts* m_bandFmts ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SurfaceChart* default_instance_ ;

    }

    class CT_Surface3DChart : public XSD::ComplexType{
    public:
        bool has_wireframe(){

            return m_has_wireframe;
        
        }
        CT_Boolean* mutable_wireframe(){

                m_has_wireframe = true;
                if (!m_wireframe)
                {
                    m_wireframe = new CT_Boolean();
                }
                return m_wireframe;
            
        }
        const CT_Boolean& wireframe(){

            if (m_wireframe)
            {
                return *m_wireframe;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_ser(){

            return m_has_ser;
        
        }
        CT_SurfaceSer* mutable_ser(){

                m_has_ser = true;
                if (!m_ser)
                {
                    m_ser = new CT_SurfaceSer();
                }
                return m_ser;
            
        }
        const CT_SurfaceSer& ser(){

            if (m_ser)
            {
                return *m_ser;
            }
            return CT_SurfaceSer::default_instance();
        
        }
        bool has_bandFmts(){

            return m_has_bandFmts;
        
        }
        CT_BandFmts* mutable_bandFmts(){

                m_has_bandFmts = true;
                if (!m_bandFmts)
                {
                    m_bandFmts = new CT_BandFmts();
                }
                return m_bandFmts;
            
        }
        const CT_BandFmts& bandFmts(){

            if (m_bandFmts)
            {
                return *m_bandFmts;
            }
            return CT_BandFmts::default_instance();
        
        }
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_wireframe = false;
                
        if (m_wireframe)
        {
            delete m_wireframe;
            m_wireframe = NULL;
        }
    
            
                m_has_ser = false;
                
        if (m_ser)
        {
            delete m_ser;
            m_ser = NULL;
        }
    
            
                m_has_bandFmts = false;
                
        if (m_bandFmts)
        {
            delete m_bandFmts;
            m_bandFmts = NULL;
        }
    
            
                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_wireframe)
                {
                    m_wireframe->toXml(\d:wireframe\, _outStream);;
                }
            
                if (m_has_ser)
                {
                    m_wireframe->toXml(\d:ser\, _outStream);;
                }
            
                if (m_has_bandFmts)
                {
                    m_wireframe->toXml(\d:bandFmts\, _outStream);;
                }
            
                if (m_has_axId)
                {
                    m_wireframe->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_wireframe->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Surface3DChart& default_instance(){

    if (!CT_Surface3DChart::default_instance_)
    {
        CT_Surface3DChart::default_instance_ = new CT_Surface3DChart();
    }
    return *CT_Surface3DChart::default_instance_;

        }

    private:
        bool m_has_wireframe ;
        CT_Boolean* m_wireframe ;
        bool m_has_ser ;
        CT_SurfaceSer* m_ser ;
        bool m_has_bandFmts ;
        CT_BandFmts* m_bandFmts ;
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Surface3DChart* default_instance_ ;

    }

    class CT_AxPos : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AxPos& default_instance(){

    if (!CT_AxPos::default_instance_)
    {
        CT_AxPos::default_instance_ = new CT_AxPos();
    }
    return *CT_AxPos::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_AxPos& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_AxPos(_val_attr);
        
        }
        const ST_AxPos& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_AxPos::default_instance();
        
        }

    private:
        static CT_AxPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_AxPos* m_val_attr ;

    }

    class CT_Crosses : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Crosses& default_instance(){

    if (!CT_Crosses::default_instance_)
    {
        CT_Crosses::default_instance_ = new CT_Crosses();
    }
    return *CT_Crosses::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Crosses& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Crosses(_val_attr);
        
        }
        const ST_Crosses& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Crosses::default_instance();
        
        }

    private:
        static CT_Crosses* default_instance_ ;
        bool m_has_val_attr ;
        ST_Crosses* m_val_attr ;

    }

    class CT_CrossBetween : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CrossBetween& default_instance(){

    if (!CT_CrossBetween::default_instance_)
    {
        CT_CrossBetween::default_instance_ = new CT_CrossBetween();
    }
    return *CT_CrossBetween::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_CrossBetween& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_CrossBetween(_val_attr);
        
        }
        const ST_CrossBetween& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_CrossBetween::default_instance();
        
        }

    private:
        static CT_CrossBetween* default_instance_ ;
        bool m_has_val_attr ;
        ST_CrossBetween* m_val_attr ;

    }

    class CT_TickMark : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TickMark& default_instance(){

    if (!CT_TickMark::default_instance_)
    {
        CT_TickMark::default_instance_ = new CT_TickMark();
    }
    return *CT_TickMark::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_TickMark& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_TickMark(_val_attr);
        
        }
        const ST_TickMark& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_TickMark::default_instance();
        
        }

    private:
        static CT_TickMark* default_instance_ ;
        bool m_has_val_attr ;
        ST_TickMark* m_val_attr ;

    }

    class CT_TickLblPos : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TickLblPos& default_instance(){

    if (!CT_TickLblPos::default_instance_)
    {
        CT_TickLblPos::default_instance_ = new CT_TickLblPos();
    }
    return *CT_TickLblPos::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_TickLblPos& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_TickLblPos(_val_attr);
        
        }
        const ST_TickLblPos& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_TickLblPos::default_instance();
        
        }

    private:
        static CT_TickLblPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_TickLblPos* m_val_attr ;

    }

    class CT_Skip : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Skip& default_instance(){

    if (!CT_Skip::default_instance_)
    {
        CT_Skip::default_instance_ = new CT_Skip();
    }
    return *CT_Skip::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Skip& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Skip(_val_attr);
        
        }
        const ST_Skip& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Skip::default_instance();
        
        }

    private:
        static CT_Skip* default_instance_ ;
        bool m_has_val_attr ;
        ST_Skip* m_val_attr ;

    }

    class CT_TimeUnit : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TimeUnit& default_instance(){

    if (!CT_TimeUnit::default_instance_)
    {
        CT_TimeUnit::default_instance_ = new CT_TimeUnit();
    }
    return *CT_TimeUnit::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_TimeUnit& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_TimeUnit(_val_attr);
        
        }
        const ST_TimeUnit& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_TimeUnit::default_instance();
        
        }

    private:
        static CT_TimeUnit* default_instance_ ;
        bool m_has_val_attr ;
        ST_TimeUnit* m_val_attr ;

    }

    class CT_AxisUnit : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AxisUnit& default_instance(){

    if (!CT_AxisUnit::default_instance_)
    {
        CT_AxisUnit::default_instance_ = new CT_AxisUnit();
    }
    return *CT_AxisUnit::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_AxisUnit& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_AxisUnit(_val_attr);
        
        }
        const ST_AxisUnit& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_AxisUnit::default_instance();
        
        }

    private:
        static CT_AxisUnit* default_instance_ ;
        bool m_has_val_attr ;
        ST_AxisUnit* m_val_attr ;

    }

    class CT_BuiltInUnit : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_BuiltInUnit& default_instance(){

    if (!CT_BuiltInUnit::default_instance_)
    {
        CT_BuiltInUnit::default_instance_ = new CT_BuiltInUnit();
    }
    return *CT_BuiltInUnit::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_BuiltInUnit& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_BuiltInUnit(_val_attr);
        
        }
        const ST_BuiltInUnit& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_BuiltInUnit::default_instance();
        
        }

    private:
        static CT_BuiltInUnit* default_instance_ ;
        bool m_has_val_attr ;
        ST_BuiltInUnit* m_val_attr ;

    }

    class CT_PictureFormat : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PictureFormat& default_instance(){

    if (!CT_PictureFormat::default_instance_)
    {
        CT_PictureFormat::default_instance_ = new CT_PictureFormat();
    }
    return *CT_PictureFormat::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_PictureFormat& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_PictureFormat(_val_attr);
        
        }
        const ST_PictureFormat& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_PictureFormat::default_instance();
        
        }

    private:
        static CT_PictureFormat* default_instance_ ;
        bool m_has_val_attr ;
        ST_PictureFormat* m_val_attr ;

    }

    class CT_PictureStackUnit : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PictureStackUnit& default_instance(){

    if (!CT_PictureStackUnit::default_instance_)
    {
        CT_PictureStackUnit::default_instance_ = new CT_PictureStackUnit();
    }
    return *CT_PictureStackUnit::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_PictureStackUnit& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_PictureStackUnit(_val_attr);
        
        }
        const ST_PictureStackUnit& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_PictureStackUnit::default_instance();
        
        }

    private:
        static CT_PictureStackUnit* default_instance_ ;
        bool m_has_val_attr ;
        ST_PictureStackUnit* m_val_attr ;

    }

    class CT_PictureOptions : public XSD::ComplexType{
    public:
        bool has_applyToFront(){

            return m_has_applyToFront;
        
        }
        CT_Boolean* mutable_applyToFront(){

                m_has_applyToFront = true;
                if (!m_applyToFront)
                {
                    m_applyToFront = new CT_Boolean();
                }
                return m_applyToFront;
            
        }
        const CT_Boolean& applyToFront(){

            if (m_applyToFront)
            {
                return *m_applyToFront;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_applyToSides(){

            return m_has_applyToSides;
        
        }
        CT_Boolean* mutable_applyToSides(){

                m_has_applyToSides = true;
                if (!m_applyToSides)
                {
                    m_applyToSides = new CT_Boolean();
                }
                return m_applyToSides;
            
        }
        const CT_Boolean& applyToSides(){

            if (m_applyToSides)
            {
                return *m_applyToSides;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_applyToEnd(){

            return m_has_applyToEnd;
        
        }
        CT_Boolean* mutable_applyToEnd(){

                m_has_applyToEnd = true;
                if (!m_applyToEnd)
                {
                    m_applyToEnd = new CT_Boolean();
                }
                return m_applyToEnd;
            
        }
        const CT_Boolean& applyToEnd(){

            if (m_applyToEnd)
            {
                return *m_applyToEnd;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_pictureFormat(){

            return m_has_pictureFormat;
        
        }
        CT_PictureFormat* mutable_pictureFormat(){

                m_has_pictureFormat = true;
                if (!m_pictureFormat)
                {
                    m_pictureFormat = new CT_PictureFormat();
                }
                return m_pictureFormat;
            
        }
        const CT_PictureFormat& pictureFormat(){

            if (m_pictureFormat)
            {
                return *m_pictureFormat;
            }
            return CT_PictureFormat::default_instance();
        
        }
        bool has_pictureStackUnit(){

            return m_has_pictureStackUnit;
        
        }
        CT_PictureStackUnit* mutable_pictureStackUnit(){

                m_has_pictureStackUnit = true;
                if (!m_pictureStackUnit)
                {
                    m_pictureStackUnit = new CT_PictureStackUnit();
                }
                return m_pictureStackUnit;
            
        }
        const CT_PictureStackUnit& pictureStackUnit(){

            if (m_pictureStackUnit)
            {
                return *m_pictureStackUnit;
            }
            return CT_PictureStackUnit::default_instance();
        
        }
        void clear(){

                m_has_applyToFront = false;
                
        if (m_applyToFront)
        {
            delete m_applyToFront;
            m_applyToFront = NULL;
        }
    
            
                m_has_applyToSides = false;
                
        if (m_applyToSides)
        {
            delete m_applyToSides;
            m_applyToSides = NULL;
        }
    
            
                m_has_applyToEnd = false;
                
        if (m_applyToEnd)
        {
            delete m_applyToEnd;
            m_applyToEnd = NULL;
        }
    
            
                m_has_pictureFormat = false;
                
        if (m_pictureFormat)
        {
            delete m_pictureFormat;
            m_pictureFormat = NULL;
        }
    
            
                m_has_pictureStackUnit = false;
                
        if (m_pictureStackUnit)
        {
            delete m_pictureStackUnit;
            m_pictureStackUnit = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_applyToFront)
                {
                    m_applyToFront->toXml(\d:applyToFront\, _outStream);;
                }
            
                if (m_has_applyToSides)
                {
                    m_applyToFront->toXml(\d:applyToSides\, _outStream);;
                }
            
                if (m_has_applyToEnd)
                {
                    m_applyToFront->toXml(\d:applyToEnd\, _outStream);;
                }
            
                if (m_has_pictureFormat)
                {
                    m_applyToFront->toXml(\d:pictureFormat\, _outStream);;
                }
            
                if (m_has_pictureStackUnit)
                {
                    m_applyToFront->toXml(\d:pictureStackUnit\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PictureOptions& default_instance(){

    if (!CT_PictureOptions::default_instance_)
    {
        CT_PictureOptions::default_instance_ = new CT_PictureOptions();
    }
    return *CT_PictureOptions::default_instance_;

        }

    private:
        bool m_has_applyToFront ;
        CT_Boolean* m_applyToFront ;
        bool m_has_applyToSides ;
        CT_Boolean* m_applyToSides ;
        bool m_has_applyToEnd ;
        CT_Boolean* m_applyToEnd ;
        bool m_has_pictureFormat ;
        CT_PictureFormat* m_pictureFormat ;
        bool m_has_pictureStackUnit ;
        CT_PictureStackUnit* m_pictureStackUnit ;
        static CT_PictureOptions* default_instance_ ;

    }

    class CT_DispUnitsLbl : public XSD::ComplexType{
    public:
        bool has_layout(){

            return m_has_layout;
        
        }
        CT_Layout* mutable_layout(){

                m_has_layout = true;
                if (!m_layout)
                {
                    m_layout = new CT_Layout();
                }
                return m_layout;
            
        }
        const CT_Layout& layout(){

            if (m_layout)
            {
                return *m_layout;
            }
            return CT_Layout::default_instance();
        
        }
        bool has_tx(){

            return m_has_tx;
        
        }
        CT_Tx* mutable_tx(){

                m_has_tx = true;
                if (!m_tx)
                {
                    m_tx = new CT_Tx();
                }
                return m_tx;
            
        }
        const CT_Tx& tx(){

            if (m_tx)
            {
                return *m_tx;
            }
            return CT_Tx::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        void clear(){

                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    
            
                m_has_tx = false;
                
        if (m_tx)
        {
            delete m_tx;
            m_tx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_layout)
                {
                    m_layout->toXml(\d:layout\, _outStream);;
                }
            
                if (m_has_tx)
                {
                    m_layout->toXml(\d:tx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_layout->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_layout->toXml(\d:txPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DispUnitsLbl& default_instance(){

    if (!CT_DispUnitsLbl::default_instance_)
    {
        CT_DispUnitsLbl::default_instance_ = new CT_DispUnitsLbl();
    }
    return *CT_DispUnitsLbl::default_instance_;

        }

    private:
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_tx ;
        CT_Tx* m_tx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        static CT_DispUnitsLbl* default_instance_ ;

    }

    class CT_DispUnits : public XSD::ComplexType{
    public:
        bool has_custUnit(){

            return m_has_custUnit;
        
        }
        CT_Double* mutable_custUnit(){

                
                m_has_builtInUnit = false;
                
        if (m_builtInUnit)
        {
            delete m_builtInUnit;
            m_builtInUnit = NULL;
        }
    ;
            
                m_has_custUnit = true;
                if (!m_custUnit)
                {
                    m_custUnit = new CT_Double();
                }
                return m_custUnit;
            
        }
        const CT_Double& custUnit(){

            if (m_custUnit)
            {
                return *m_custUnit;
            }
            return CT_Double::default_instance();
        
        }
        bool has_builtInUnit(){

            return m_has_builtInUnit;
        
        }
        CT_BuiltInUnit* mutable_builtInUnit(){

                
                m_has_custUnit = false;
                
        if (m_custUnit)
        {
            delete m_custUnit;
            m_custUnit = NULL;
        }
    ;
            
                m_has_builtInUnit = true;
                if (!m_builtInUnit)
                {
                    m_builtInUnit = new CT_BuiltInUnit();
                }
                return m_builtInUnit;
            
        }
        const CT_BuiltInUnit& builtInUnit(){

            if (m_builtInUnit)
            {
                return *m_builtInUnit;
            }
            return CT_BuiltInUnit::default_instance();
        
        }
        bool has_dispUnitsLbl(){

            return m_has_dispUnitsLbl;
        
        }
        CT_DispUnitsLbl* mutable_dispUnitsLbl(){

                m_has_dispUnitsLbl = true;
                if (!m_dispUnitsLbl)
                {
                    m_dispUnitsLbl = new CT_DispUnitsLbl();
                }
                return m_dispUnitsLbl;
            
        }
        const CT_DispUnitsLbl& dispUnitsLbl(){

            if (m_dispUnitsLbl)
            {
                return *m_dispUnitsLbl;
            }
            return CT_DispUnitsLbl::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_custUnit = false;
                
        if (m_custUnit)
        {
            delete m_custUnit;
            m_custUnit = NULL;
        }
    
            
                m_has_builtInUnit = false;
                
        if (m_builtInUnit)
        {
            delete m_builtInUnit;
            m_builtInUnit = NULL;
        }
    
             
                m_has_dispUnitsLbl = false;
                
        if (m_dispUnitsLbl)
        {
            delete m_dispUnitsLbl;
            m_dispUnitsLbl = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_custUnit)
                {
                    m_custUnit->toXml(\d:custUnit\, _outStream);;
                }
            
                if (m_has_builtInUnit)
                {
                    m_custUnit->toXml(\d:builtInUnit\, _outStream);;
                }
             
                if (m_has_dispUnitsLbl)
                {
                    m_dispUnitsLbl->toXml(\d:dispUnitsLbl\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_dispUnitsLbl->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DispUnits& default_instance(){

    if (!CT_DispUnits::default_instance_)
    {
        CT_DispUnits::default_instance_ = new CT_DispUnits();
    }
    return *CT_DispUnits::default_instance_;

        }

    private:
        bool m_has_custUnit ;
        CT_Double* m_custUnit ;
        bool m_has_builtInUnit ;
        CT_BuiltInUnit* m_builtInUnit ;
        bool m_has_dispUnitsLbl ;
        CT_DispUnitsLbl* m_dispUnitsLbl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DispUnits* default_instance_ ;

    }

    class CT_Orientation : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Orientation& default_instance(){

    if (!CT_Orientation::default_instance_)
    {
        CT_Orientation::default_instance_ = new CT_Orientation();
    }
    return *CT_Orientation::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Orientation& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Orientation(_val_attr);
        
        }
        const ST_Orientation& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Orientation::default_instance();
        
        }

    private:
        static CT_Orientation* default_instance_ ;
        bool m_has_val_attr ;
        ST_Orientation* m_val_attr ;

    }

    class CT_LogBase : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LogBase& default_instance(){

    if (!CT_LogBase::default_instance_)
    {
        CT_LogBase::default_instance_ = new CT_LogBase();
    }
    return *CT_LogBase::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_LogBase& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_LogBase(_val_attr);
        
        }
        const ST_LogBase& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_LogBase::default_instance();
        
        }

    private:
        static CT_LogBase* default_instance_ ;
        bool m_has_val_attr ;
        ST_LogBase* m_val_attr ;

    }

    class CT_Scaling : public XSD::ComplexType{
    public:
        bool has_logBase(){

            return m_has_logBase;
        
        }
        CT_LogBase* mutable_logBase(){

                m_has_logBase = true;
                if (!m_logBase)
                {
                    m_logBase = new CT_LogBase();
                }
                return m_logBase;
            
        }
        const CT_LogBase& logBase(){

            if (m_logBase)
            {
                return *m_logBase;
            }
            return CT_LogBase::default_instance();
        
        }
        bool has_orientation(){

            return m_has_orientation;
        
        }
        CT_Orientation* mutable_orientation(){

                m_has_orientation = true;
                if (!m_orientation)
                {
                    m_orientation = new CT_Orientation();
                }
                return m_orientation;
            
        }
        const CT_Orientation& orientation(){

            if (m_orientation)
            {
                return *m_orientation;
            }
            return CT_Orientation::default_instance();
        
        }
        bool has_max(){

            return m_has_max;
        
        }
        CT_Double* mutable_max(){

                m_has_max = true;
                if (!m_max)
                {
                    m_max = new CT_Double();
                }
                return m_max;
            
        }
        const CT_Double& max(){

            if (m_max)
            {
                return *m_max;
            }
            return CT_Double::default_instance();
        
        }
        bool has_min(){

            return m_has_min;
        
        }
        CT_Double* mutable_min(){

                m_has_min = true;
                if (!m_min)
                {
                    m_min = new CT_Double();
                }
                return m_min;
            
        }
        const CT_Double& min(){

            if (m_min)
            {
                return *m_min;
            }
            return CT_Double::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_logBase = false;
                
        if (m_logBase)
        {
            delete m_logBase;
            m_logBase = NULL;
        }
    
            
                m_has_orientation = false;
                
        if (m_orientation)
        {
            delete m_orientation;
            m_orientation = NULL;
        }
    
            
                m_has_max = false;
                
        if (m_max)
        {
            delete m_max;
            m_max = NULL;
        }
    
            
                m_has_min = false;
                
        if (m_min)
        {
            delete m_min;
            m_min = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_logBase)
                {
                    m_logBase->toXml(\d:logBase\, _outStream);;
                }
            
                if (m_has_orientation)
                {
                    m_logBase->toXml(\d:orientation\, _outStream);;
                }
            
                if (m_has_max)
                {
                    m_logBase->toXml(\d:max\, _outStream);;
                }
            
                if (m_has_min)
                {
                    m_logBase->toXml(\d:min\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_logBase->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Scaling& default_instance(){

    if (!CT_Scaling::default_instance_)
    {
        CT_Scaling::default_instance_ = new CT_Scaling();
    }
    return *CT_Scaling::default_instance_;

        }

    private:
        bool m_has_logBase ;
        CT_LogBase* m_logBase ;
        bool m_has_orientation ;
        CT_Orientation* m_orientation ;
        bool m_has_max ;
        CT_Double* m_max ;
        bool m_has_min ;
        CT_Double* m_min ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Scaling* default_instance_ ;

    }

    class CT_LblOffset : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LblOffset& default_instance(){

    if (!CT_LblOffset::default_instance_)
    {
        CT_LblOffset::default_instance_ = new CT_LblOffset();
    }
    return *CT_LblOffset::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_LblOffset& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_LblOffset(_val_attr);
        
        }
        const ST_LblOffset& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_LblOffset::default_instance();
        
        }

    private:
        static CT_LblOffset* default_instance_ ;
        bool m_has_val_attr ;
        ST_LblOffset* m_val_attr ;

    }

    class CT_CatAx : public XSD::ComplexType{
    public:
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_scaling(){

            return m_has_scaling;
        
        }
        CT_Scaling* mutable_scaling(){

                m_has_scaling = true;
                if (!m_scaling)
                {
                    m_scaling = new CT_Scaling();
                }
                return m_scaling;
            
        }
        const CT_Scaling& scaling(){

            if (m_scaling)
            {
                return *m_scaling;
            }
            return CT_Scaling::default_instance();
        
        }
        bool has_delete(){

            return m_has_delete;
        
        }
        CT_Boolean* mutable_delete(){

                m_has_delete = true;
                if (!m_delete)
                {
                    m_delete = new CT_Boolean();
                }
                return m_delete;
            
        }
        const CT_Boolean& delete(){

            if (m_delete)
            {
                return *m_delete;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_axPos(){

            return m_has_axPos;
        
        }
        CT_AxPos* mutable_axPos(){

                m_has_axPos = true;
                if (!m_axPos)
                {
                    m_axPos = new CT_AxPos();
                }
                return m_axPos;
            
        }
        const CT_AxPos& axPos(){

            if (m_axPos)
            {
                return *m_axPos;
            }
            return CT_AxPos::default_instance();
        
        }
        bool has_majorGridlines(){

            return m_has_majorGridlines;
        
        }
        CT_ChartLines* mutable_majorGridlines(){

                m_has_majorGridlines = true;
                if (!m_majorGridlines)
                {
                    m_majorGridlines = new CT_ChartLines();
                }
                return m_majorGridlines;
            
        }
        const CT_ChartLines& majorGridlines(){

            if (m_majorGridlines)
            {
                return *m_majorGridlines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_minorGridlines(){

            return m_has_minorGridlines;
        
        }
        CT_ChartLines* mutable_minorGridlines(){

                m_has_minorGridlines = true;
                if (!m_minorGridlines)
                {
                    m_minorGridlines = new CT_ChartLines();
                }
                return m_minorGridlines;
            
        }
        const CT_ChartLines& minorGridlines(){

            if (m_minorGridlines)
            {
                return *m_minorGridlines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_title(){

            return m_has_title;
        
        }
        CT_Title* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_Title();
                }
                return m_title;
            
        }
        const CT_Title& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_Title::default_instance();
        
        }
        bool has_numFmt(){

            return m_has_numFmt;
        
        }
        CT_NumFmt* mutable_numFmt(){

                m_has_numFmt = true;
                if (!m_numFmt)
                {
                    m_numFmt = new CT_NumFmt();
                }
                return m_numFmt;
            
        }
        const CT_NumFmt& numFmt(){

            if (m_numFmt)
            {
                return *m_numFmt;
            }
            return CT_NumFmt::default_instance();
        
        }
        bool has_majorTickMark(){

            return m_has_majorTickMark;
        
        }
        CT_TickMark* mutable_majorTickMark(){

                m_has_majorTickMark = true;
                if (!m_majorTickMark)
                {
                    m_majorTickMark = new CT_TickMark();
                }
                return m_majorTickMark;
            
        }
        const CT_TickMark& majorTickMark(){

            if (m_majorTickMark)
            {
                return *m_majorTickMark;
            }
            return CT_TickMark::default_instance();
        
        }
        bool has_minorTickMark(){

            return m_has_minorTickMark;
        
        }
        CT_TickMark* mutable_minorTickMark(){

                m_has_minorTickMark = true;
                if (!m_minorTickMark)
                {
                    m_minorTickMark = new CT_TickMark();
                }
                return m_minorTickMark;
            
        }
        const CT_TickMark& minorTickMark(){

            if (m_minorTickMark)
            {
                return *m_minorTickMark;
            }
            return CT_TickMark::default_instance();
        
        }
        bool has_tickLblPos(){

            return m_has_tickLblPos;
        
        }
        CT_TickLblPos* mutable_tickLblPos(){

                m_has_tickLblPos = true;
                if (!m_tickLblPos)
                {
                    m_tickLblPos = new CT_TickLblPos();
                }
                return m_tickLblPos;
            
        }
        const CT_TickLblPos& tickLblPos(){

            if (m_tickLblPos)
            {
                return *m_tickLblPos;
            }
            return CT_TickLblPos::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_crossAx(){

            return m_has_crossAx;
        
        }
        CT_UnsignedInt* mutable_crossAx(){

                m_has_crossAx = true;
                if (!m_crossAx)
                {
                    m_crossAx = new CT_UnsignedInt();
                }
                return m_crossAx;
            
        }
        const CT_UnsignedInt& crossAx(){

            if (m_crossAx)
            {
                return *m_crossAx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_crosses(){

            return m_has_crosses;
        
        }
        CT_Crosses* mutable_crosses(){

                
                m_has_crossesAt = false;
                
        if (m_crossesAt)
        {
            delete m_crossesAt;
            m_crossesAt = NULL;
        }
    ;
            
                m_has_crosses = true;
                if (!m_crosses)
                {
                    m_crosses = new CT_Crosses();
                }
                return m_crosses;
            
        }
        const CT_Crosses& crosses(){

            if (m_crosses)
            {
                return *m_crosses;
            }
            return CT_Crosses::default_instance();
        
        }
        bool has_crossesAt(){

            return m_has_crossesAt;
        
        }
        CT_Double* mutable_crossesAt(){

                
                m_has_crosses = false;
                
        if (m_crosses)
        {
            delete m_crosses;
            m_crosses = NULL;
        }
    ;
            
                m_has_crossesAt = true;
                if (!m_crossesAt)
                {
                    m_crossesAt = new CT_Double();
                }
                return m_crossesAt;
            
        }
        const CT_Double& crossesAt(){

            if (m_crossesAt)
            {
                return *m_crossesAt;
            }
            return CT_Double::default_instance();
        
        }
        bool has_auto(){

            return m_has_auto;
        
        }
        CT_Boolean* mutable_auto(){

                m_has_auto = true;
                if (!m_auto)
                {
                    m_auto = new CT_Boolean();
                }
                return m_auto;
            
        }
        const CT_Boolean& auto(){

            if (m_auto)
            {
                return *m_auto;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_lblAlgn(){

            return m_has_lblAlgn;
        
        }
        CT_LblAlgn* mutable_lblAlgn(){

                m_has_lblAlgn = true;
                if (!m_lblAlgn)
                {
                    m_lblAlgn = new CT_LblAlgn();
                }
                return m_lblAlgn;
            
        }
        const CT_LblAlgn& lblAlgn(){

            if (m_lblAlgn)
            {
                return *m_lblAlgn;
            }
            return CT_LblAlgn::default_instance();
        
        }
        bool has_lblOffset(){

            return m_has_lblOffset;
        
        }
        CT_LblOffset* mutable_lblOffset(){

                m_has_lblOffset = true;
                if (!m_lblOffset)
                {
                    m_lblOffset = new CT_LblOffset();
                }
                return m_lblOffset;
            
        }
        const CT_LblOffset& lblOffset(){

            if (m_lblOffset)
            {
                return *m_lblOffset;
            }
            return CT_LblOffset::default_instance();
        
        }
        bool has_tickLblSkip(){

            return m_has_tickLblSkip;
        
        }
        CT_Skip* mutable_tickLblSkip(){

                m_has_tickLblSkip = true;
                if (!m_tickLblSkip)
                {
                    m_tickLblSkip = new CT_Skip();
                }
                return m_tickLblSkip;
            
        }
        const CT_Skip& tickLblSkip(){

            if (m_tickLblSkip)
            {
                return *m_tickLblSkip;
            }
            return CT_Skip::default_instance();
        
        }
        bool has_tickMarkSkip(){

            return m_has_tickMarkSkip;
        
        }
        CT_Skip* mutable_tickMarkSkip(){

                m_has_tickMarkSkip = true;
                if (!m_tickMarkSkip)
                {
                    m_tickMarkSkip = new CT_Skip();
                }
                return m_tickMarkSkip;
            
        }
        const CT_Skip& tickMarkSkip(){

            if (m_tickMarkSkip)
            {
                return *m_tickMarkSkip;
            }
            return CT_Skip::default_instance();
        
        }
        bool has_noMultiLvlLbl(){

            return m_has_noMultiLvlLbl;
        
        }
        CT_Boolean* mutable_noMultiLvlLbl(){

                m_has_noMultiLvlLbl = true;
                if (!m_noMultiLvlLbl)
                {
                    m_noMultiLvlLbl = new CT_Boolean();
                }
                return m_noMultiLvlLbl;
            
        }
        const CT_Boolean& noMultiLvlLbl(){

            if (m_noMultiLvlLbl)
            {
                return *m_noMultiLvlLbl;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_scaling = false;
                
        if (m_scaling)
        {
            delete m_scaling;
            m_scaling = NULL;
        }
    
            
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    
            
                m_has_axPos = false;
                
        if (m_axPos)
        {
            delete m_axPos;
            m_axPos = NULL;
        }
    
            
                m_has_majorGridlines = false;
                
        if (m_majorGridlines)
        {
            delete m_majorGridlines;
            m_majorGridlines = NULL;
        }
    
            
                m_has_minorGridlines = false;
                
        if (m_minorGridlines)
        {
            delete m_minorGridlines;
            m_minorGridlines = NULL;
        }
    
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    
            
                m_has_majorTickMark = false;
                
        if (m_majorTickMark)
        {
            delete m_majorTickMark;
            m_majorTickMark = NULL;
        }
    
            
                m_has_minorTickMark = false;
                
        if (m_minorTickMark)
        {
            delete m_minorTickMark;
            m_minorTickMark = NULL;
        }
    
            
                m_has_tickLblPos = false;
                
        if (m_tickLblPos)
        {
            delete m_tickLblPos;
            m_tickLblPos = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_crossAx = false;
                
        if (m_crossAx)
        {
            delete m_crossAx;
            m_crossAx = NULL;
        }
    
             
                m_has_crosses = false;
                
        if (m_crosses)
        {
            delete m_crosses;
            m_crosses = NULL;
        }
    
            
                m_has_crossesAt = false;
                
        if (m_crossesAt)
        {
            delete m_crossesAt;
            m_crossesAt = NULL;
        }
    
             
                m_has_auto = false;
                
        if (m_auto)
        {
            delete m_auto;
            m_auto = NULL;
        }
    
            
                m_has_lblAlgn = false;
                
        if (m_lblAlgn)
        {
            delete m_lblAlgn;
            m_lblAlgn = NULL;
        }
    
            
                m_has_lblOffset = false;
                
        if (m_lblOffset)
        {
            delete m_lblOffset;
            m_lblOffset = NULL;
        }
    
            
                m_has_tickLblSkip = false;
                
        if (m_tickLblSkip)
        {
            delete m_tickLblSkip;
            m_tickLblSkip = NULL;
        }
    
            
                m_has_tickMarkSkip = false;
                
        if (m_tickMarkSkip)
        {
            delete m_tickMarkSkip;
            m_tickMarkSkip = NULL;
        }
    
            
                m_has_noMultiLvlLbl = false;
                
        if (m_noMultiLvlLbl)
        {
            delete m_noMultiLvlLbl;
            m_noMultiLvlLbl = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_axId)
                {
                    m_axId->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_scaling)
                {
                    m_axId->toXml(\d:scaling\, _outStream);;
                }
            
                if (m_has_delete)
                {
                    m_axId->toXml(\d:delete\, _outStream);;
                }
            
                if (m_has_axPos)
                {
                    m_axId->toXml(\d:axPos\, _outStream);;
                }
            
                if (m_has_majorGridlines)
                {
                    m_axId->toXml(\d:majorGridlines\, _outStream);;
                }
            
                if (m_has_minorGridlines)
                {
                    m_axId->toXml(\d:minorGridlines\, _outStream);;
                }
            
                if (m_has_title)
                {
                    m_axId->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_numFmt)
                {
                    m_axId->toXml(\d:numFmt\, _outStream);;
                }
            
                if (m_has_majorTickMark)
                {
                    m_axId->toXml(\d:majorTickMark\, _outStream);;
                }
            
                if (m_has_minorTickMark)
                {
                    m_axId->toXml(\d:minorTickMark\, _outStream);;
                }
            
                if (m_has_tickLblPos)
                {
                    m_axId->toXml(\d:tickLblPos\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_axId->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_axId->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_crossAx)
                {
                    m_axId->toXml(\d:crossAx\, _outStream);;
                }
             
                if (m_has_crosses)
                {
                    m_crosses->toXml(\d:crosses\, _outStream);;
                }
            
                if (m_has_crossesAt)
                {
                    m_crosses->toXml(\d:crossesAt\, _outStream);;
                }
             
                if (m_has_auto)
                {
                    m_auto->toXml(\d:auto\, _outStream);;
                }
            
                if (m_has_lblAlgn)
                {
                    m_auto->toXml(\d:lblAlgn\, _outStream);;
                }
            
                if (m_has_lblOffset)
                {
                    m_auto->toXml(\d:lblOffset\, _outStream);;
                }
            
                if (m_has_tickLblSkip)
                {
                    m_auto->toXml(\d:tickLblSkip\, _outStream);;
                }
            
                if (m_has_tickMarkSkip)
                {
                    m_auto->toXml(\d:tickMarkSkip\, _outStream);;
                }
            
                if (m_has_noMultiLvlLbl)
                {
                    m_auto->toXml(\d:noMultiLvlLbl\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_auto->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_CatAx& default_instance(){

    if (!CT_CatAx::default_instance_)
    {
        CT_CatAx::default_instance_ = new CT_CatAx();
    }
    return *CT_CatAx::default_instance_;

        }

    private:
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_scaling ;
        CT_Scaling* m_scaling ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_axPos ;
        CT_AxPos* m_axPos ;
        bool m_has_majorGridlines ;
        CT_ChartLines* m_majorGridlines ;
        bool m_has_minorGridlines ;
        CT_ChartLines* m_minorGridlines ;
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_majorTickMark ;
        CT_TickMark* m_majorTickMark ;
        bool m_has_minorTickMark ;
        CT_TickMark* m_minorTickMark ;
        bool m_has_tickLblPos ;
        CT_TickLblPos* m_tickLblPos ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_crossAx ;
        CT_UnsignedInt* m_crossAx ;
        bool m_has_crosses ;
        CT_Crosses* m_crosses ;
        bool m_has_crossesAt ;
        CT_Double* m_crossesAt ;
        bool m_has_auto ;
        CT_Boolean* m_auto ;
        bool m_has_lblAlgn ;
        CT_LblAlgn* m_lblAlgn ;
        bool m_has_lblOffset ;
        CT_LblOffset* m_lblOffset ;
        bool m_has_tickLblSkip ;
        CT_Skip* m_tickLblSkip ;
        bool m_has_tickMarkSkip ;
        CT_Skip* m_tickMarkSkip ;
        bool m_has_noMultiLvlLbl ;
        CT_Boolean* m_noMultiLvlLbl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_CatAx* default_instance_ ;

    }

    class CT_DateAx : public XSD::ComplexType{
    public:
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_scaling(){

            return m_has_scaling;
        
        }
        CT_Scaling* mutable_scaling(){

                m_has_scaling = true;
                if (!m_scaling)
                {
                    m_scaling = new CT_Scaling();
                }
                return m_scaling;
            
        }
        const CT_Scaling& scaling(){

            if (m_scaling)
            {
                return *m_scaling;
            }
            return CT_Scaling::default_instance();
        
        }
        bool has_delete(){

            return m_has_delete;
        
        }
        CT_Boolean* mutable_delete(){

                m_has_delete = true;
                if (!m_delete)
                {
                    m_delete = new CT_Boolean();
                }
                return m_delete;
            
        }
        const CT_Boolean& delete(){

            if (m_delete)
            {
                return *m_delete;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_axPos(){

            return m_has_axPos;
        
        }
        CT_AxPos* mutable_axPos(){

                m_has_axPos = true;
                if (!m_axPos)
                {
                    m_axPos = new CT_AxPos();
                }
                return m_axPos;
            
        }
        const CT_AxPos& axPos(){

            if (m_axPos)
            {
                return *m_axPos;
            }
            return CT_AxPos::default_instance();
        
        }
        bool has_majorGridlines(){

            return m_has_majorGridlines;
        
        }
        CT_ChartLines* mutable_majorGridlines(){

                m_has_majorGridlines = true;
                if (!m_majorGridlines)
                {
                    m_majorGridlines = new CT_ChartLines();
                }
                return m_majorGridlines;
            
        }
        const CT_ChartLines& majorGridlines(){

            if (m_majorGridlines)
            {
                return *m_majorGridlines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_minorGridlines(){

            return m_has_minorGridlines;
        
        }
        CT_ChartLines* mutable_minorGridlines(){

                m_has_minorGridlines = true;
                if (!m_minorGridlines)
                {
                    m_minorGridlines = new CT_ChartLines();
                }
                return m_minorGridlines;
            
        }
        const CT_ChartLines& minorGridlines(){

            if (m_minorGridlines)
            {
                return *m_minorGridlines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_title(){

            return m_has_title;
        
        }
        CT_Title* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_Title();
                }
                return m_title;
            
        }
        const CT_Title& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_Title::default_instance();
        
        }
        bool has_numFmt(){

            return m_has_numFmt;
        
        }
        CT_NumFmt* mutable_numFmt(){

                m_has_numFmt = true;
                if (!m_numFmt)
                {
                    m_numFmt = new CT_NumFmt();
                }
                return m_numFmt;
            
        }
        const CT_NumFmt& numFmt(){

            if (m_numFmt)
            {
                return *m_numFmt;
            }
            return CT_NumFmt::default_instance();
        
        }
        bool has_majorTickMark(){

            return m_has_majorTickMark;
        
        }
        CT_TickMark* mutable_majorTickMark(){

                m_has_majorTickMark = true;
                if (!m_majorTickMark)
                {
                    m_majorTickMark = new CT_TickMark();
                }
                return m_majorTickMark;
            
        }
        const CT_TickMark& majorTickMark(){

            if (m_majorTickMark)
            {
                return *m_majorTickMark;
            }
            return CT_TickMark::default_instance();
        
        }
        bool has_minorTickMark(){

            return m_has_minorTickMark;
        
        }
        CT_TickMark* mutable_minorTickMark(){

                m_has_minorTickMark = true;
                if (!m_minorTickMark)
                {
                    m_minorTickMark = new CT_TickMark();
                }
                return m_minorTickMark;
            
        }
        const CT_TickMark& minorTickMark(){

            if (m_minorTickMark)
            {
                return *m_minorTickMark;
            }
            return CT_TickMark::default_instance();
        
        }
        bool has_tickLblPos(){

            return m_has_tickLblPos;
        
        }
        CT_TickLblPos* mutable_tickLblPos(){

                m_has_tickLblPos = true;
                if (!m_tickLblPos)
                {
                    m_tickLblPos = new CT_TickLblPos();
                }
                return m_tickLblPos;
            
        }
        const CT_TickLblPos& tickLblPos(){

            if (m_tickLblPos)
            {
                return *m_tickLblPos;
            }
            return CT_TickLblPos::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_crossAx(){

            return m_has_crossAx;
        
        }
        CT_UnsignedInt* mutable_crossAx(){

                m_has_crossAx = true;
                if (!m_crossAx)
                {
                    m_crossAx = new CT_UnsignedInt();
                }
                return m_crossAx;
            
        }
        const CT_UnsignedInt& crossAx(){

            if (m_crossAx)
            {
                return *m_crossAx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_crosses(){

            return m_has_crosses;
        
        }
        CT_Crosses* mutable_crosses(){

                
                m_has_crossesAt = false;
                
        if (m_crossesAt)
        {
            delete m_crossesAt;
            m_crossesAt = NULL;
        }
    ;
            
                m_has_crosses = true;
                if (!m_crosses)
                {
                    m_crosses = new CT_Crosses();
                }
                return m_crosses;
            
        }
        const CT_Crosses& crosses(){

            if (m_crosses)
            {
                return *m_crosses;
            }
            return CT_Crosses::default_instance();
        
        }
        bool has_crossesAt(){

            return m_has_crossesAt;
        
        }
        CT_Double* mutable_crossesAt(){

                
                m_has_crosses = false;
                
        if (m_crosses)
        {
            delete m_crosses;
            m_crosses = NULL;
        }
    ;
            
                m_has_crossesAt = true;
                if (!m_crossesAt)
                {
                    m_crossesAt = new CT_Double();
                }
                return m_crossesAt;
            
        }
        const CT_Double& crossesAt(){

            if (m_crossesAt)
            {
                return *m_crossesAt;
            }
            return CT_Double::default_instance();
        
        }
        bool has_auto(){

            return m_has_auto;
        
        }
        CT_Boolean* mutable_auto(){

                m_has_auto = true;
                if (!m_auto)
                {
                    m_auto = new CT_Boolean();
                }
                return m_auto;
            
        }
        const CT_Boolean& auto(){

            if (m_auto)
            {
                return *m_auto;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_lblOffset(){

            return m_has_lblOffset;
        
        }
        CT_LblOffset* mutable_lblOffset(){

                m_has_lblOffset = true;
                if (!m_lblOffset)
                {
                    m_lblOffset = new CT_LblOffset();
                }
                return m_lblOffset;
            
        }
        const CT_LblOffset& lblOffset(){

            if (m_lblOffset)
            {
                return *m_lblOffset;
            }
            return CT_LblOffset::default_instance();
        
        }
        bool has_baseTimeUnit(){

            return m_has_baseTimeUnit;
        
        }
        CT_TimeUnit* mutable_baseTimeUnit(){

                m_has_baseTimeUnit = true;
                if (!m_baseTimeUnit)
                {
                    m_baseTimeUnit = new CT_TimeUnit();
                }
                return m_baseTimeUnit;
            
        }
        const CT_TimeUnit& baseTimeUnit(){

            if (m_baseTimeUnit)
            {
                return *m_baseTimeUnit;
            }
            return CT_TimeUnit::default_instance();
        
        }
        bool has_majorUnit(){

            return m_has_majorUnit;
        
        }
        CT_AxisUnit* mutable_majorUnit(){

                m_has_majorUnit = true;
                if (!m_majorUnit)
                {
                    m_majorUnit = new CT_AxisUnit();
                }
                return m_majorUnit;
            
        }
        const CT_AxisUnit& majorUnit(){

            if (m_majorUnit)
            {
                return *m_majorUnit;
            }
            return CT_AxisUnit::default_instance();
        
        }
        bool has_majorTimeUnit(){

            return m_has_majorTimeUnit;
        
        }
        CT_TimeUnit* mutable_majorTimeUnit(){

                m_has_majorTimeUnit = true;
                if (!m_majorTimeUnit)
                {
                    m_majorTimeUnit = new CT_TimeUnit();
                }
                return m_majorTimeUnit;
            
        }
        const CT_TimeUnit& majorTimeUnit(){

            if (m_majorTimeUnit)
            {
                return *m_majorTimeUnit;
            }
            return CT_TimeUnit::default_instance();
        
        }
        bool has_minorUnit(){

            return m_has_minorUnit;
        
        }
        CT_AxisUnit* mutable_minorUnit(){

                m_has_minorUnit = true;
                if (!m_minorUnit)
                {
                    m_minorUnit = new CT_AxisUnit();
                }
                return m_minorUnit;
            
        }
        const CT_AxisUnit& minorUnit(){

            if (m_minorUnit)
            {
                return *m_minorUnit;
            }
            return CT_AxisUnit::default_instance();
        
        }
        bool has_minorTimeUnit(){

            return m_has_minorTimeUnit;
        
        }
        CT_TimeUnit* mutable_minorTimeUnit(){

                m_has_minorTimeUnit = true;
                if (!m_minorTimeUnit)
                {
                    m_minorTimeUnit = new CT_TimeUnit();
                }
                return m_minorTimeUnit;
            
        }
        const CT_TimeUnit& minorTimeUnit(){

            if (m_minorTimeUnit)
            {
                return *m_minorTimeUnit;
            }
            return CT_TimeUnit::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_scaling = false;
                
        if (m_scaling)
        {
            delete m_scaling;
            m_scaling = NULL;
        }
    
            
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    
            
                m_has_axPos = false;
                
        if (m_axPos)
        {
            delete m_axPos;
            m_axPos = NULL;
        }
    
            
                m_has_majorGridlines = false;
                
        if (m_majorGridlines)
        {
            delete m_majorGridlines;
            m_majorGridlines = NULL;
        }
    
            
                m_has_minorGridlines = false;
                
        if (m_minorGridlines)
        {
            delete m_minorGridlines;
            m_minorGridlines = NULL;
        }
    
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    
            
                m_has_majorTickMark = false;
                
        if (m_majorTickMark)
        {
            delete m_majorTickMark;
            m_majorTickMark = NULL;
        }
    
            
                m_has_minorTickMark = false;
                
        if (m_minorTickMark)
        {
            delete m_minorTickMark;
            m_minorTickMark = NULL;
        }
    
            
                m_has_tickLblPos = false;
                
        if (m_tickLblPos)
        {
            delete m_tickLblPos;
            m_tickLblPos = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_crossAx = false;
                
        if (m_crossAx)
        {
            delete m_crossAx;
            m_crossAx = NULL;
        }
    
             
                m_has_crosses = false;
                
        if (m_crosses)
        {
            delete m_crosses;
            m_crosses = NULL;
        }
    
            
                m_has_crossesAt = false;
                
        if (m_crossesAt)
        {
            delete m_crossesAt;
            m_crossesAt = NULL;
        }
    
             
                m_has_auto = false;
                
        if (m_auto)
        {
            delete m_auto;
            m_auto = NULL;
        }
    
            
                m_has_lblOffset = false;
                
        if (m_lblOffset)
        {
            delete m_lblOffset;
            m_lblOffset = NULL;
        }
    
            
                m_has_baseTimeUnit = false;
                
        if (m_baseTimeUnit)
        {
            delete m_baseTimeUnit;
            m_baseTimeUnit = NULL;
        }
    
            
                m_has_majorUnit = false;
                
        if (m_majorUnit)
        {
            delete m_majorUnit;
            m_majorUnit = NULL;
        }
    
            
                m_has_majorTimeUnit = false;
                
        if (m_majorTimeUnit)
        {
            delete m_majorTimeUnit;
            m_majorTimeUnit = NULL;
        }
    
            
                m_has_minorUnit = false;
                
        if (m_minorUnit)
        {
            delete m_minorUnit;
            m_minorUnit = NULL;
        }
    
            
                m_has_minorTimeUnit = false;
                
        if (m_minorTimeUnit)
        {
            delete m_minorTimeUnit;
            m_minorTimeUnit = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_axId)
                {
                    m_axId->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_scaling)
                {
                    m_axId->toXml(\d:scaling\, _outStream);;
                }
            
                if (m_has_delete)
                {
                    m_axId->toXml(\d:delete\, _outStream);;
                }
            
                if (m_has_axPos)
                {
                    m_axId->toXml(\d:axPos\, _outStream);;
                }
            
                if (m_has_majorGridlines)
                {
                    m_axId->toXml(\d:majorGridlines\, _outStream);;
                }
            
                if (m_has_minorGridlines)
                {
                    m_axId->toXml(\d:minorGridlines\, _outStream);;
                }
            
                if (m_has_title)
                {
                    m_axId->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_numFmt)
                {
                    m_axId->toXml(\d:numFmt\, _outStream);;
                }
            
                if (m_has_majorTickMark)
                {
                    m_axId->toXml(\d:majorTickMark\, _outStream);;
                }
            
                if (m_has_minorTickMark)
                {
                    m_axId->toXml(\d:minorTickMark\, _outStream);;
                }
            
                if (m_has_tickLblPos)
                {
                    m_axId->toXml(\d:tickLblPos\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_axId->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_axId->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_crossAx)
                {
                    m_axId->toXml(\d:crossAx\, _outStream);;
                }
             
                if (m_has_crosses)
                {
                    m_crosses->toXml(\d:crosses\, _outStream);;
                }
            
                if (m_has_crossesAt)
                {
                    m_crosses->toXml(\d:crossesAt\, _outStream);;
                }
             
                if (m_has_auto)
                {
                    m_auto->toXml(\d:auto\, _outStream);;
                }
            
                if (m_has_lblOffset)
                {
                    m_auto->toXml(\d:lblOffset\, _outStream);;
                }
            
                if (m_has_baseTimeUnit)
                {
                    m_auto->toXml(\d:baseTimeUnit\, _outStream);;
                }
            
                if (m_has_majorUnit)
                {
                    m_auto->toXml(\d:majorUnit\, _outStream);;
                }
            
                if (m_has_majorTimeUnit)
                {
                    m_auto->toXml(\d:majorTimeUnit\, _outStream);;
                }
            
                if (m_has_minorUnit)
                {
                    m_auto->toXml(\d:minorUnit\, _outStream);;
                }
            
                if (m_has_minorTimeUnit)
                {
                    m_auto->toXml(\d:minorTimeUnit\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_auto->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DateAx& default_instance(){

    if (!CT_DateAx::default_instance_)
    {
        CT_DateAx::default_instance_ = new CT_DateAx();
    }
    return *CT_DateAx::default_instance_;

        }

    private:
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_scaling ;
        CT_Scaling* m_scaling ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_axPos ;
        CT_AxPos* m_axPos ;
        bool m_has_majorGridlines ;
        CT_ChartLines* m_majorGridlines ;
        bool m_has_minorGridlines ;
        CT_ChartLines* m_minorGridlines ;
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_majorTickMark ;
        CT_TickMark* m_majorTickMark ;
        bool m_has_minorTickMark ;
        CT_TickMark* m_minorTickMark ;
        bool m_has_tickLblPos ;
        CT_TickLblPos* m_tickLblPos ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_crossAx ;
        CT_UnsignedInt* m_crossAx ;
        bool m_has_crosses ;
        CT_Crosses* m_crosses ;
        bool m_has_crossesAt ;
        CT_Double* m_crossesAt ;
        bool m_has_auto ;
        CT_Boolean* m_auto ;
        bool m_has_lblOffset ;
        CT_LblOffset* m_lblOffset ;
        bool m_has_baseTimeUnit ;
        CT_TimeUnit* m_baseTimeUnit ;
        bool m_has_majorUnit ;
        CT_AxisUnit* m_majorUnit ;
        bool m_has_majorTimeUnit ;
        CT_TimeUnit* m_majorTimeUnit ;
        bool m_has_minorUnit ;
        CT_AxisUnit* m_minorUnit ;
        bool m_has_minorTimeUnit ;
        CT_TimeUnit* m_minorTimeUnit ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_DateAx* default_instance_ ;

    }

    class CT_SerAx : public XSD::ComplexType{
    public:
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_scaling(){

            return m_has_scaling;
        
        }
        CT_Scaling* mutable_scaling(){

                m_has_scaling = true;
                if (!m_scaling)
                {
                    m_scaling = new CT_Scaling();
                }
                return m_scaling;
            
        }
        const CT_Scaling& scaling(){

            if (m_scaling)
            {
                return *m_scaling;
            }
            return CT_Scaling::default_instance();
        
        }
        bool has_delete(){

            return m_has_delete;
        
        }
        CT_Boolean* mutable_delete(){

                m_has_delete = true;
                if (!m_delete)
                {
                    m_delete = new CT_Boolean();
                }
                return m_delete;
            
        }
        const CT_Boolean& delete(){

            if (m_delete)
            {
                return *m_delete;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_axPos(){

            return m_has_axPos;
        
        }
        CT_AxPos* mutable_axPos(){

                m_has_axPos = true;
                if (!m_axPos)
                {
                    m_axPos = new CT_AxPos();
                }
                return m_axPos;
            
        }
        const CT_AxPos& axPos(){

            if (m_axPos)
            {
                return *m_axPos;
            }
            return CT_AxPos::default_instance();
        
        }
        bool has_majorGridlines(){

            return m_has_majorGridlines;
        
        }
        CT_ChartLines* mutable_majorGridlines(){

                m_has_majorGridlines = true;
                if (!m_majorGridlines)
                {
                    m_majorGridlines = new CT_ChartLines();
                }
                return m_majorGridlines;
            
        }
        const CT_ChartLines& majorGridlines(){

            if (m_majorGridlines)
            {
                return *m_majorGridlines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_minorGridlines(){

            return m_has_minorGridlines;
        
        }
        CT_ChartLines* mutable_minorGridlines(){

                m_has_minorGridlines = true;
                if (!m_minorGridlines)
                {
                    m_minorGridlines = new CT_ChartLines();
                }
                return m_minorGridlines;
            
        }
        const CT_ChartLines& minorGridlines(){

            if (m_minorGridlines)
            {
                return *m_minorGridlines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_title(){

            return m_has_title;
        
        }
        CT_Title* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_Title();
                }
                return m_title;
            
        }
        const CT_Title& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_Title::default_instance();
        
        }
        bool has_numFmt(){

            return m_has_numFmt;
        
        }
        CT_NumFmt* mutable_numFmt(){

                m_has_numFmt = true;
                if (!m_numFmt)
                {
                    m_numFmt = new CT_NumFmt();
                }
                return m_numFmt;
            
        }
        const CT_NumFmt& numFmt(){

            if (m_numFmt)
            {
                return *m_numFmt;
            }
            return CT_NumFmt::default_instance();
        
        }
        bool has_majorTickMark(){

            return m_has_majorTickMark;
        
        }
        CT_TickMark* mutable_majorTickMark(){

                m_has_majorTickMark = true;
                if (!m_majorTickMark)
                {
                    m_majorTickMark = new CT_TickMark();
                }
                return m_majorTickMark;
            
        }
        const CT_TickMark& majorTickMark(){

            if (m_majorTickMark)
            {
                return *m_majorTickMark;
            }
            return CT_TickMark::default_instance();
        
        }
        bool has_minorTickMark(){

            return m_has_minorTickMark;
        
        }
        CT_TickMark* mutable_minorTickMark(){

                m_has_minorTickMark = true;
                if (!m_minorTickMark)
                {
                    m_minorTickMark = new CT_TickMark();
                }
                return m_minorTickMark;
            
        }
        const CT_TickMark& minorTickMark(){

            if (m_minorTickMark)
            {
                return *m_minorTickMark;
            }
            return CT_TickMark::default_instance();
        
        }
        bool has_tickLblPos(){

            return m_has_tickLblPos;
        
        }
        CT_TickLblPos* mutable_tickLblPos(){

                m_has_tickLblPos = true;
                if (!m_tickLblPos)
                {
                    m_tickLblPos = new CT_TickLblPos();
                }
                return m_tickLblPos;
            
        }
        const CT_TickLblPos& tickLblPos(){

            if (m_tickLblPos)
            {
                return *m_tickLblPos;
            }
            return CT_TickLblPos::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_crossAx(){

            return m_has_crossAx;
        
        }
        CT_UnsignedInt* mutable_crossAx(){

                m_has_crossAx = true;
                if (!m_crossAx)
                {
                    m_crossAx = new CT_UnsignedInt();
                }
                return m_crossAx;
            
        }
        const CT_UnsignedInt& crossAx(){

            if (m_crossAx)
            {
                return *m_crossAx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_crosses(){

            return m_has_crosses;
        
        }
        CT_Crosses* mutable_crosses(){

                
                m_has_crossesAt = false;
                
        if (m_crossesAt)
        {
            delete m_crossesAt;
            m_crossesAt = NULL;
        }
    ;
            
                m_has_crosses = true;
                if (!m_crosses)
                {
                    m_crosses = new CT_Crosses();
                }
                return m_crosses;
            
        }
        const CT_Crosses& crosses(){

            if (m_crosses)
            {
                return *m_crosses;
            }
            return CT_Crosses::default_instance();
        
        }
        bool has_crossesAt(){

            return m_has_crossesAt;
        
        }
        CT_Double* mutable_crossesAt(){

                
                m_has_crosses = false;
                
        if (m_crosses)
        {
            delete m_crosses;
            m_crosses = NULL;
        }
    ;
            
                m_has_crossesAt = true;
                if (!m_crossesAt)
                {
                    m_crossesAt = new CT_Double();
                }
                return m_crossesAt;
            
        }
        const CT_Double& crossesAt(){

            if (m_crossesAt)
            {
                return *m_crossesAt;
            }
            return CT_Double::default_instance();
        
        }
        bool has_tickLblSkip(){

            return m_has_tickLblSkip;
        
        }
        CT_Skip* mutable_tickLblSkip(){

                m_has_tickLblSkip = true;
                if (!m_tickLblSkip)
                {
                    m_tickLblSkip = new CT_Skip();
                }
                return m_tickLblSkip;
            
        }
        const CT_Skip& tickLblSkip(){

            if (m_tickLblSkip)
            {
                return *m_tickLblSkip;
            }
            return CT_Skip::default_instance();
        
        }
        bool has_tickMarkSkip(){

            return m_has_tickMarkSkip;
        
        }
        CT_Skip* mutable_tickMarkSkip(){

                m_has_tickMarkSkip = true;
                if (!m_tickMarkSkip)
                {
                    m_tickMarkSkip = new CT_Skip();
                }
                return m_tickMarkSkip;
            
        }
        const CT_Skip& tickMarkSkip(){

            if (m_tickMarkSkip)
            {
                return *m_tickMarkSkip;
            }
            return CT_Skip::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_scaling = false;
                
        if (m_scaling)
        {
            delete m_scaling;
            m_scaling = NULL;
        }
    
            
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    
            
                m_has_axPos = false;
                
        if (m_axPos)
        {
            delete m_axPos;
            m_axPos = NULL;
        }
    
            
                m_has_majorGridlines = false;
                
        if (m_majorGridlines)
        {
            delete m_majorGridlines;
            m_majorGridlines = NULL;
        }
    
            
                m_has_minorGridlines = false;
                
        if (m_minorGridlines)
        {
            delete m_minorGridlines;
            m_minorGridlines = NULL;
        }
    
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    
            
                m_has_majorTickMark = false;
                
        if (m_majorTickMark)
        {
            delete m_majorTickMark;
            m_majorTickMark = NULL;
        }
    
            
                m_has_minorTickMark = false;
                
        if (m_minorTickMark)
        {
            delete m_minorTickMark;
            m_minorTickMark = NULL;
        }
    
            
                m_has_tickLblPos = false;
                
        if (m_tickLblPos)
        {
            delete m_tickLblPos;
            m_tickLblPos = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_crossAx = false;
                
        if (m_crossAx)
        {
            delete m_crossAx;
            m_crossAx = NULL;
        }
    
             
                m_has_crosses = false;
                
        if (m_crosses)
        {
            delete m_crosses;
            m_crosses = NULL;
        }
    
            
                m_has_crossesAt = false;
                
        if (m_crossesAt)
        {
            delete m_crossesAt;
            m_crossesAt = NULL;
        }
    
             
                m_has_tickLblSkip = false;
                
        if (m_tickLblSkip)
        {
            delete m_tickLblSkip;
            m_tickLblSkip = NULL;
        }
    
            
                m_has_tickMarkSkip = false;
                
        if (m_tickMarkSkip)
        {
            delete m_tickMarkSkip;
            m_tickMarkSkip = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_axId)
                {
                    m_axId->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_scaling)
                {
                    m_axId->toXml(\d:scaling\, _outStream);;
                }
            
                if (m_has_delete)
                {
                    m_axId->toXml(\d:delete\, _outStream);;
                }
            
                if (m_has_axPos)
                {
                    m_axId->toXml(\d:axPos\, _outStream);;
                }
            
                if (m_has_majorGridlines)
                {
                    m_axId->toXml(\d:majorGridlines\, _outStream);;
                }
            
                if (m_has_minorGridlines)
                {
                    m_axId->toXml(\d:minorGridlines\, _outStream);;
                }
            
                if (m_has_title)
                {
                    m_axId->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_numFmt)
                {
                    m_axId->toXml(\d:numFmt\, _outStream);;
                }
            
                if (m_has_majorTickMark)
                {
                    m_axId->toXml(\d:majorTickMark\, _outStream);;
                }
            
                if (m_has_minorTickMark)
                {
                    m_axId->toXml(\d:minorTickMark\, _outStream);;
                }
            
                if (m_has_tickLblPos)
                {
                    m_axId->toXml(\d:tickLblPos\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_axId->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_axId->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_crossAx)
                {
                    m_axId->toXml(\d:crossAx\, _outStream);;
                }
             
                if (m_has_crosses)
                {
                    m_crosses->toXml(\d:crosses\, _outStream);;
                }
            
                if (m_has_crossesAt)
                {
                    m_crosses->toXml(\d:crossesAt\, _outStream);;
                }
             
                if (m_has_tickLblSkip)
                {
                    m_tickLblSkip->toXml(\d:tickLblSkip\, _outStream);;
                }
            
                if (m_has_tickMarkSkip)
                {
                    m_tickLblSkip->toXml(\d:tickMarkSkip\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_tickLblSkip->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SerAx& default_instance(){

    if (!CT_SerAx::default_instance_)
    {
        CT_SerAx::default_instance_ = new CT_SerAx();
    }
    return *CT_SerAx::default_instance_;

        }

    private:
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_scaling ;
        CT_Scaling* m_scaling ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_axPos ;
        CT_AxPos* m_axPos ;
        bool m_has_majorGridlines ;
        CT_ChartLines* m_majorGridlines ;
        bool m_has_minorGridlines ;
        CT_ChartLines* m_minorGridlines ;
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_majorTickMark ;
        CT_TickMark* m_majorTickMark ;
        bool m_has_minorTickMark ;
        CT_TickMark* m_minorTickMark ;
        bool m_has_tickLblPos ;
        CT_TickLblPos* m_tickLblPos ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_crossAx ;
        CT_UnsignedInt* m_crossAx ;
        bool m_has_crosses ;
        CT_Crosses* m_crosses ;
        bool m_has_crossesAt ;
        CT_Double* m_crossesAt ;
        bool m_has_tickLblSkip ;
        CT_Skip* m_tickLblSkip ;
        bool m_has_tickMarkSkip ;
        CT_Skip* m_tickMarkSkip ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_SerAx* default_instance_ ;

    }

    class CT_ValAx : public XSD::ComplexType{
    public:
        bool has_axId(){

            return m_has_axId;
        
        }
        CT_UnsignedInt* mutable_axId(){

                m_has_axId = true;
                if (!m_axId)
                {
                    m_axId = new CT_UnsignedInt();
                }
                return m_axId;
            
        }
        const CT_UnsignedInt& axId(){

            if (m_axId)
            {
                return *m_axId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_scaling(){

            return m_has_scaling;
        
        }
        CT_Scaling* mutable_scaling(){

                m_has_scaling = true;
                if (!m_scaling)
                {
                    m_scaling = new CT_Scaling();
                }
                return m_scaling;
            
        }
        const CT_Scaling& scaling(){

            if (m_scaling)
            {
                return *m_scaling;
            }
            return CT_Scaling::default_instance();
        
        }
        bool has_delete(){

            return m_has_delete;
        
        }
        CT_Boolean* mutable_delete(){

                m_has_delete = true;
                if (!m_delete)
                {
                    m_delete = new CT_Boolean();
                }
                return m_delete;
            
        }
        const CT_Boolean& delete(){

            if (m_delete)
            {
                return *m_delete;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_axPos(){

            return m_has_axPos;
        
        }
        CT_AxPos* mutable_axPos(){

                m_has_axPos = true;
                if (!m_axPos)
                {
                    m_axPos = new CT_AxPos();
                }
                return m_axPos;
            
        }
        const CT_AxPos& axPos(){

            if (m_axPos)
            {
                return *m_axPos;
            }
            return CT_AxPos::default_instance();
        
        }
        bool has_majorGridlines(){

            return m_has_majorGridlines;
        
        }
        CT_ChartLines* mutable_majorGridlines(){

                m_has_majorGridlines = true;
                if (!m_majorGridlines)
                {
                    m_majorGridlines = new CT_ChartLines();
                }
                return m_majorGridlines;
            
        }
        const CT_ChartLines& majorGridlines(){

            if (m_majorGridlines)
            {
                return *m_majorGridlines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_minorGridlines(){

            return m_has_minorGridlines;
        
        }
        CT_ChartLines* mutable_minorGridlines(){

                m_has_minorGridlines = true;
                if (!m_minorGridlines)
                {
                    m_minorGridlines = new CT_ChartLines();
                }
                return m_minorGridlines;
            
        }
        const CT_ChartLines& minorGridlines(){

            if (m_minorGridlines)
            {
                return *m_minorGridlines;
            }
            return CT_ChartLines::default_instance();
        
        }
        bool has_title(){

            return m_has_title;
        
        }
        CT_Title* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_Title();
                }
                return m_title;
            
        }
        const CT_Title& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_Title::default_instance();
        
        }
        bool has_numFmt(){

            return m_has_numFmt;
        
        }
        CT_NumFmt* mutable_numFmt(){

                m_has_numFmt = true;
                if (!m_numFmt)
                {
                    m_numFmt = new CT_NumFmt();
                }
                return m_numFmt;
            
        }
        const CT_NumFmt& numFmt(){

            if (m_numFmt)
            {
                return *m_numFmt;
            }
            return CT_NumFmt::default_instance();
        
        }
        bool has_majorTickMark(){

            return m_has_majorTickMark;
        
        }
        CT_TickMark* mutable_majorTickMark(){

                m_has_majorTickMark = true;
                if (!m_majorTickMark)
                {
                    m_majorTickMark = new CT_TickMark();
                }
                return m_majorTickMark;
            
        }
        const CT_TickMark& majorTickMark(){

            if (m_majorTickMark)
            {
                return *m_majorTickMark;
            }
            return CT_TickMark::default_instance();
        
        }
        bool has_minorTickMark(){

            return m_has_minorTickMark;
        
        }
        CT_TickMark* mutable_minorTickMark(){

                m_has_minorTickMark = true;
                if (!m_minorTickMark)
                {
                    m_minorTickMark = new CT_TickMark();
                }
                return m_minorTickMark;
            
        }
        const CT_TickMark& minorTickMark(){

            if (m_minorTickMark)
            {
                return *m_minorTickMark;
            }
            return CT_TickMark::default_instance();
        
        }
        bool has_tickLblPos(){

            return m_has_tickLblPos;
        
        }
        CT_TickLblPos* mutable_tickLblPos(){

                m_has_tickLblPos = true;
                if (!m_tickLblPos)
                {
                    m_tickLblPos = new CT_TickLblPos();
                }
                return m_tickLblPos;
            
        }
        const CT_TickLblPos& tickLblPos(){

            if (m_tickLblPos)
            {
                return *m_tickLblPos;
            }
            return CT_TickLblPos::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_crossAx(){

            return m_has_crossAx;
        
        }
        CT_UnsignedInt* mutable_crossAx(){

                m_has_crossAx = true;
                if (!m_crossAx)
                {
                    m_crossAx = new CT_UnsignedInt();
                }
                return m_crossAx;
            
        }
        const CT_UnsignedInt& crossAx(){

            if (m_crossAx)
            {
                return *m_crossAx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_crosses(){

            return m_has_crosses;
        
        }
        CT_Crosses* mutable_crosses(){

                
                m_has_crossesAt = false;
                
        if (m_crossesAt)
        {
            delete m_crossesAt;
            m_crossesAt = NULL;
        }
    ;
            
                m_has_crosses = true;
                if (!m_crosses)
                {
                    m_crosses = new CT_Crosses();
                }
                return m_crosses;
            
        }
        const CT_Crosses& crosses(){

            if (m_crosses)
            {
                return *m_crosses;
            }
            return CT_Crosses::default_instance();
        
        }
        bool has_crossesAt(){

            return m_has_crossesAt;
        
        }
        CT_Double* mutable_crossesAt(){

                
                m_has_crosses = false;
                
        if (m_crosses)
        {
            delete m_crosses;
            m_crosses = NULL;
        }
    ;
            
                m_has_crossesAt = true;
                if (!m_crossesAt)
                {
                    m_crossesAt = new CT_Double();
                }
                return m_crossesAt;
            
        }
        const CT_Double& crossesAt(){

            if (m_crossesAt)
            {
                return *m_crossesAt;
            }
            return CT_Double::default_instance();
        
        }
        bool has_crossBetween(){

            return m_has_crossBetween;
        
        }
        CT_CrossBetween* mutable_crossBetween(){

                m_has_crossBetween = true;
                if (!m_crossBetween)
                {
                    m_crossBetween = new CT_CrossBetween();
                }
                return m_crossBetween;
            
        }
        const CT_CrossBetween& crossBetween(){

            if (m_crossBetween)
            {
                return *m_crossBetween;
            }
            return CT_CrossBetween::default_instance();
        
        }
        bool has_majorUnit(){

            return m_has_majorUnit;
        
        }
        CT_AxisUnit* mutable_majorUnit(){

                m_has_majorUnit = true;
                if (!m_majorUnit)
                {
                    m_majorUnit = new CT_AxisUnit();
                }
                return m_majorUnit;
            
        }
        const CT_AxisUnit& majorUnit(){

            if (m_majorUnit)
            {
                return *m_majorUnit;
            }
            return CT_AxisUnit::default_instance();
        
        }
        bool has_minorUnit(){

            return m_has_minorUnit;
        
        }
        CT_AxisUnit* mutable_minorUnit(){

                m_has_minorUnit = true;
                if (!m_minorUnit)
                {
                    m_minorUnit = new CT_AxisUnit();
                }
                return m_minorUnit;
            
        }
        const CT_AxisUnit& minorUnit(){

            if (m_minorUnit)
            {
                return *m_minorUnit;
            }
            return CT_AxisUnit::default_instance();
        
        }
        bool has_dispUnits(){

            return m_has_dispUnits;
        
        }
        CT_DispUnits* mutable_dispUnits(){

                m_has_dispUnits = true;
                if (!m_dispUnits)
                {
                    m_dispUnits = new CT_DispUnits();
                }
                return m_dispUnits;
            
        }
        const CT_DispUnits& dispUnits(){

            if (m_dispUnits)
            {
                return *m_dispUnits;
            }
            return CT_DispUnits::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_axId = false;
                
        if (m_axId)
        {
            delete m_axId;
            m_axId = NULL;
        }
    
            
                m_has_scaling = false;
                
        if (m_scaling)
        {
            delete m_scaling;
            m_scaling = NULL;
        }
    
            
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    
            
                m_has_axPos = false;
                
        if (m_axPos)
        {
            delete m_axPos;
            m_axPos = NULL;
        }
    
            
                m_has_majorGridlines = false;
                
        if (m_majorGridlines)
        {
            delete m_majorGridlines;
            m_majorGridlines = NULL;
        }
    
            
                m_has_minorGridlines = false;
                
        if (m_minorGridlines)
        {
            delete m_minorGridlines;
            m_minorGridlines = NULL;
        }
    
            
                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_numFmt = false;
                
        if (m_numFmt)
        {
            delete m_numFmt;
            m_numFmt = NULL;
        }
    
            
                m_has_majorTickMark = false;
                
        if (m_majorTickMark)
        {
            delete m_majorTickMark;
            m_majorTickMark = NULL;
        }
    
            
                m_has_minorTickMark = false;
                
        if (m_minorTickMark)
        {
            delete m_minorTickMark;
            m_minorTickMark = NULL;
        }
    
            
                m_has_tickLblPos = false;
                
        if (m_tickLblPos)
        {
            delete m_tickLblPos;
            m_tickLblPos = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_crossAx = false;
                
        if (m_crossAx)
        {
            delete m_crossAx;
            m_crossAx = NULL;
        }
    
             
                m_has_crosses = false;
                
        if (m_crosses)
        {
            delete m_crosses;
            m_crosses = NULL;
        }
    
            
                m_has_crossesAt = false;
                
        if (m_crossesAt)
        {
            delete m_crossesAt;
            m_crossesAt = NULL;
        }
    
             
                m_has_crossBetween = false;
                
        if (m_crossBetween)
        {
            delete m_crossBetween;
            m_crossBetween = NULL;
        }
    
            
                m_has_majorUnit = false;
                
        if (m_majorUnit)
        {
            delete m_majorUnit;
            m_majorUnit = NULL;
        }
    
            
                m_has_minorUnit = false;
                
        if (m_minorUnit)
        {
            delete m_minorUnit;
            m_minorUnit = NULL;
        }
    
            
                m_has_dispUnits = false;
                
        if (m_dispUnits)
        {
            delete m_dispUnits;
            m_dispUnits = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_axId)
                {
                    m_axId->toXml(\d:axId\, _outStream);;
                }
            
                if (m_has_scaling)
                {
                    m_axId->toXml(\d:scaling\, _outStream);;
                }
            
                if (m_has_delete)
                {
                    m_axId->toXml(\d:delete\, _outStream);;
                }
            
                if (m_has_axPos)
                {
                    m_axId->toXml(\d:axPos\, _outStream);;
                }
            
                if (m_has_majorGridlines)
                {
                    m_axId->toXml(\d:majorGridlines\, _outStream);;
                }
            
                if (m_has_minorGridlines)
                {
                    m_axId->toXml(\d:minorGridlines\, _outStream);;
                }
            
                if (m_has_title)
                {
                    m_axId->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_numFmt)
                {
                    m_axId->toXml(\d:numFmt\, _outStream);;
                }
            
                if (m_has_majorTickMark)
                {
                    m_axId->toXml(\d:majorTickMark\, _outStream);;
                }
            
                if (m_has_minorTickMark)
                {
                    m_axId->toXml(\d:minorTickMark\, _outStream);;
                }
            
                if (m_has_tickLblPos)
                {
                    m_axId->toXml(\d:tickLblPos\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_axId->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_axId->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_crossAx)
                {
                    m_axId->toXml(\d:crossAx\, _outStream);;
                }
             
                if (m_has_crosses)
                {
                    m_crosses->toXml(\d:crosses\, _outStream);;
                }
            
                if (m_has_crossesAt)
                {
                    m_crosses->toXml(\d:crossesAt\, _outStream);;
                }
             
                if (m_has_crossBetween)
                {
                    m_crossBetween->toXml(\d:crossBetween\, _outStream);;
                }
            
                if (m_has_majorUnit)
                {
                    m_crossBetween->toXml(\d:majorUnit\, _outStream);;
                }
            
                if (m_has_minorUnit)
                {
                    m_crossBetween->toXml(\d:minorUnit\, _outStream);;
                }
            
                if (m_has_dispUnits)
                {
                    m_crossBetween->toXml(\d:dispUnits\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_crossBetween->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ValAx& default_instance(){

    if (!CT_ValAx::default_instance_)
    {
        CT_ValAx::default_instance_ = new CT_ValAx();
    }
    return *CT_ValAx::default_instance_;

        }

    private:
        bool m_has_axId ;
        CT_UnsignedInt* m_axId ;
        bool m_has_scaling ;
        CT_Scaling* m_scaling ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_axPos ;
        CT_AxPos* m_axPos ;
        bool m_has_majorGridlines ;
        CT_ChartLines* m_majorGridlines ;
        bool m_has_minorGridlines ;
        CT_ChartLines* m_minorGridlines ;
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_numFmt ;
        CT_NumFmt* m_numFmt ;
        bool m_has_majorTickMark ;
        CT_TickMark* m_majorTickMark ;
        bool m_has_minorTickMark ;
        CT_TickMark* m_minorTickMark ;
        bool m_has_tickLblPos ;
        CT_TickLblPos* m_tickLblPos ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_crossAx ;
        CT_UnsignedInt* m_crossAx ;
        bool m_has_crosses ;
        CT_Crosses* m_crosses ;
        bool m_has_crossesAt ;
        CT_Double* m_crossesAt ;
        bool m_has_crossBetween ;
        CT_CrossBetween* m_crossBetween ;
        bool m_has_majorUnit ;
        CT_AxisUnit* m_majorUnit ;
        bool m_has_minorUnit ;
        CT_AxisUnit* m_minorUnit ;
        bool m_has_dispUnits ;
        CT_DispUnits* m_dispUnits ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ValAx* default_instance_ ;

    }

    class CT_PlotArea : public XSD::ComplexType{
    public:
        bool has_layout(){

            return m_has_layout;
        
        }
        CT_Layout* mutable_layout(){

                m_has_layout = true;
                if (!m_layout)
                {
                    m_layout = new CT_Layout();
                }
                return m_layout;
            
        }
        const CT_Layout& layout(){

            if (m_layout)
            {
                return *m_layout;
            }
            return CT_Layout::default_instance();
        
        }
        CT_AreaChart* add_areaChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_AreaChart* pNewChild = pChildGroup->mutable_areaChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Area3DChart* add_area3DChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Area3DChart* pNewChild = pChildGroup->mutable_area3DChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_LineChart* add_lineChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_LineChart* pNewChild = pChildGroup->mutable_lineChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Line3DChart* add_line3DChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Line3DChart* pNewChild = pChildGroup->mutable_line3DChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_StockChart* add_stockChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_StockChart* pNewChild = pChildGroup->mutable_stockChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_RadarChart* add_radarChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_RadarChart* pNewChild = pChildGroup->mutable_radarChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_ScatterChart* add_scatterChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_ScatterChart* pNewChild = pChildGroup->mutable_scatterChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_PieChart* add_pieChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_PieChart* pNewChild = pChildGroup->mutable_pieChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Pie3DChart* add_pie3DChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Pie3DChart* pNewChild = pChildGroup->mutable_pie3DChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_DoughnutChart* add_doughnutChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_DoughnutChart* pNewChild = pChildGroup->mutable_doughnutChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_BarChart* add_barChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_BarChart* pNewChild = pChildGroup->mutable_barChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Bar3DChart* add_bar3DChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Bar3DChart* pNewChild = pChildGroup->mutable_bar3DChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_OfPieChart* add_ofPieChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_OfPieChart* pNewChild = pChildGroup->mutable_ofPieChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_SurfaceChart* add_surfaceChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_SurfaceChart* pNewChild = pChildGroup->mutable_surfaceChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Surface3DChart* add_surface3DChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Surface3DChart* pNewChild = pChildGroup->mutable_surface3DChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_BubbleChart* add_bubbleChart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_BubbleChart* pNewChild = pChildGroup->mutable_bubbleChart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_ValAx* add_valAx(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_ValAx* pNewChild = pChildGroup->mutable_valAx();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_CatAx* add_catAx(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_CatAx* pNewChild = pChildGroup->mutable_catAx();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_DateAx* add_dateAx(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_DateAx* pNewChild = pChildGroup->mutable_dateAx();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_SerAx* add_serAx(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_SerAx* pNewChild = pChildGroup->mutable_serAx();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        bool has_dTable(){

            return m_has_dTable;
        
        }
        CT_DTable* mutable_dTable(){

                m_has_dTable = true;
                if (!m_dTable)
                {
                    m_dTable = new CT_DTable();
                }
                return m_dTable;
            
        }
        const CT_DTable& dTable(){

            if (m_dTable)
            {
                return *m_dTable;
            }
            return CT_DTable::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    
             
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
         
                m_has_dTable = false;
                
        if (m_dTable)
        {
            delete m_dTable;
            m_dTable = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_layout)
                {
                    m_layout->toXml(\d:layout\, _outStream);;
                }
             
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_areaChart())
            {
                (*iter)->toXml(\d:areaChart\, _outStream);
            }
            else if ((*iter)->has_area3DChart())
            {
                (*iter)->toXml(\d:area3DChart\, _outStream);
            }
            else if ((*iter)->has_lineChart())
            {
                (*iter)->toXml(\d:lineChart\, _outStream);
            }
            else if ((*iter)->has_line3DChart())
            {
                (*iter)->toXml(\d:line3DChart\, _outStream);
            }
            else if ((*iter)->has_stockChart())
            {
                (*iter)->toXml(\d:stockChart\, _outStream);
            }
            else if ((*iter)->has_radarChart())
            {
                (*iter)->toXml(\d:radarChart\, _outStream);
            }
            else if ((*iter)->has_scatterChart())
            {
                (*iter)->toXml(\d:scatterChart\, _outStream);
            }
            else if ((*iter)->has_pieChart())
            {
                (*iter)->toXml(\d:pieChart\, _outStream);
            }
            else if ((*iter)->has_pie3DChart())
            {
                (*iter)->toXml(\d:pie3DChart\, _outStream);
            }
            else if ((*iter)->has_doughnutChart())
            {
                (*iter)->toXml(\d:doughnutChart\, _outStream);
            }
            else if ((*iter)->has_barChart())
            {
                (*iter)->toXml(\d:barChart\, _outStream);
            }
            else if ((*iter)->has_bar3DChart())
            {
                (*iter)->toXml(\d:bar3DChart\, _outStream);
            }
            else if ((*iter)->has_ofPieChart())
            {
                (*iter)->toXml(\d:ofPieChart\, _outStream);
            }
            else if ((*iter)->has_surfaceChart())
            {
                (*iter)->toXml(\d:surfaceChart\, _outStream);
            }
            else if ((*iter)->has_surface3DChart())
            {
                (*iter)->toXml(\d:surface3DChart\, _outStream);
            }
            else if ((*iter)->has_bubbleChart())
            {
                (*iter)->toXml(\d:bubbleChart\, _outStream);
            }
            else if ((*iter)->has_valAx())
            {
                (*iter)->toXml(\d:valAx\, _outStream);
            }
            else if ((*iter)->has_catAx())
            {
                (*iter)->toXml(\d:catAx\, _outStream);
            }
            else if ((*iter)->has_dateAx())
            {
                (*iter)->toXml(\d:dateAx\, _outStream);
            }
            else if ((*iter)->has_serAx())
            {
                (*iter)->toXml(\d:serAx\, _outStream);
            }
        } 
                if (m_has_dTable)
                {
                    m_dTable->toXml(\d:dTable\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_dTable->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_dTable->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PlotArea& default_instance(){

    if (!CT_PlotArea::default_instance_)
    {
        CT_PlotArea::default_instance_ = new CT_PlotArea();
    }
    return *CT_PlotArea::default_instance_;

        }

    private:
        bool m_has_layout ;
        CT_Layout* m_layout ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_dTable ;
        CT_DTable* m_dTable ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PlotArea* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_areaChart(){

            return m_has_areaChart;
        
            }
            CT_AreaChart* mutable_areaChart(){

                
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_areaChart = true;
                if (!m_areaChart)
                {
                    m_areaChart = new CT_AreaChart();
                }
                return m_areaChart;
            
            }
            const CT_AreaChart& areaChart(){

            if (m_areaChart)
            {
                return *m_areaChart;
            }
            return CT_AreaChart::default_instance();
        
            }
            bool has_area3DChart(){

            return m_has_area3DChart;
        
            }
            CT_Area3DChart* mutable_area3DChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_area3DChart = true;
                if (!m_area3DChart)
                {
                    m_area3DChart = new CT_Area3DChart();
                }
                return m_area3DChart;
            
            }
            const CT_Area3DChart& area3DChart(){

            if (m_area3DChart)
            {
                return *m_area3DChart;
            }
            return CT_Area3DChart::default_instance();
        
            }
            bool has_lineChart(){

            return m_has_lineChart;
        
            }
            CT_LineChart* mutable_lineChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_lineChart = true;
                if (!m_lineChart)
                {
                    m_lineChart = new CT_LineChart();
                }
                return m_lineChart;
            
            }
            const CT_LineChart& lineChart(){

            if (m_lineChart)
            {
                return *m_lineChart;
            }
            return CT_LineChart::default_instance();
        
            }
            bool has_line3DChart(){

            return m_has_line3DChart;
        
            }
            CT_Line3DChart* mutable_line3DChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_line3DChart = true;
                if (!m_line3DChart)
                {
                    m_line3DChart = new CT_Line3DChart();
                }
                return m_line3DChart;
            
            }
            const CT_Line3DChart& line3DChart(){

            if (m_line3DChart)
            {
                return *m_line3DChart;
            }
            return CT_Line3DChart::default_instance();
        
            }
            bool has_stockChart(){

            return m_has_stockChart;
        
            }
            CT_StockChart* mutable_stockChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_stockChart = true;
                if (!m_stockChart)
                {
                    m_stockChart = new CT_StockChart();
                }
                return m_stockChart;
            
            }
            const CT_StockChart& stockChart(){

            if (m_stockChart)
            {
                return *m_stockChart;
            }
            return CT_StockChart::default_instance();
        
            }
            bool has_radarChart(){

            return m_has_radarChart;
        
            }
            CT_RadarChart* mutable_radarChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_radarChart = true;
                if (!m_radarChart)
                {
                    m_radarChart = new CT_RadarChart();
                }
                return m_radarChart;
            
            }
            const CT_RadarChart& radarChart(){

            if (m_radarChart)
            {
                return *m_radarChart;
            }
            return CT_RadarChart::default_instance();
        
            }
            bool has_scatterChart(){

            return m_has_scatterChart;
        
            }
            CT_ScatterChart* mutable_scatterChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_scatterChart = true;
                if (!m_scatterChart)
                {
                    m_scatterChart = new CT_ScatterChart();
                }
                return m_scatterChart;
            
            }
            const CT_ScatterChart& scatterChart(){

            if (m_scatterChart)
            {
                return *m_scatterChart;
            }
            return CT_ScatterChart::default_instance();
        
            }
            bool has_pieChart(){

            return m_has_pieChart;
        
            }
            CT_PieChart* mutable_pieChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_pieChart = true;
                if (!m_pieChart)
                {
                    m_pieChart = new CT_PieChart();
                }
                return m_pieChart;
            
            }
            const CT_PieChart& pieChart(){

            if (m_pieChart)
            {
                return *m_pieChart;
            }
            return CT_PieChart::default_instance();
        
            }
            bool has_pie3DChart(){

            return m_has_pie3DChart;
        
            }
            CT_Pie3DChart* mutable_pie3DChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_pie3DChart = true;
                if (!m_pie3DChart)
                {
                    m_pie3DChart = new CT_Pie3DChart();
                }
                return m_pie3DChart;
            
            }
            const CT_Pie3DChart& pie3DChart(){

            if (m_pie3DChart)
            {
                return *m_pie3DChart;
            }
            return CT_Pie3DChart::default_instance();
        
            }
            bool has_doughnutChart(){

            return m_has_doughnutChart;
        
            }
            CT_DoughnutChart* mutable_doughnutChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_doughnutChart = true;
                if (!m_doughnutChart)
                {
                    m_doughnutChart = new CT_DoughnutChart();
                }
                return m_doughnutChart;
            
            }
            const CT_DoughnutChart& doughnutChart(){

            if (m_doughnutChart)
            {
                return *m_doughnutChart;
            }
            return CT_DoughnutChart::default_instance();
        
            }
            bool has_barChart(){

            return m_has_barChart;
        
            }
            CT_BarChart* mutable_barChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_barChart = true;
                if (!m_barChart)
                {
                    m_barChart = new CT_BarChart();
                }
                return m_barChart;
            
            }
            const CT_BarChart& barChart(){

            if (m_barChart)
            {
                return *m_barChart;
            }
            return CT_BarChart::default_instance();
        
            }
            bool has_bar3DChart(){

            return m_has_bar3DChart;
        
            }
            CT_Bar3DChart* mutable_bar3DChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_bar3DChart = true;
                if (!m_bar3DChart)
                {
                    m_bar3DChart = new CT_Bar3DChart();
                }
                return m_bar3DChart;
            
            }
            const CT_Bar3DChart& bar3DChart(){

            if (m_bar3DChart)
            {
                return *m_bar3DChart;
            }
            return CT_Bar3DChart::default_instance();
        
            }
            bool has_ofPieChart(){

            return m_has_ofPieChart;
        
            }
            CT_OfPieChart* mutable_ofPieChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_ofPieChart = true;
                if (!m_ofPieChart)
                {
                    m_ofPieChart = new CT_OfPieChart();
                }
                return m_ofPieChart;
            
            }
            const CT_OfPieChart& ofPieChart(){

            if (m_ofPieChart)
            {
                return *m_ofPieChart;
            }
            return CT_OfPieChart::default_instance();
        
            }
            bool has_surfaceChart(){

            return m_has_surfaceChart;
        
            }
            CT_SurfaceChart* mutable_surfaceChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_surfaceChart = true;
                if (!m_surfaceChart)
                {
                    m_surfaceChart = new CT_SurfaceChart();
                }
                return m_surfaceChart;
            
            }
            const CT_SurfaceChart& surfaceChart(){

            if (m_surfaceChart)
            {
                return *m_surfaceChart;
            }
            return CT_SurfaceChart::default_instance();
        
            }
            bool has_surface3DChart(){

            return m_has_surface3DChart;
        
            }
            CT_Surface3DChart* mutable_surface3DChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_surface3DChart = true;
                if (!m_surface3DChart)
                {
                    m_surface3DChart = new CT_Surface3DChart();
                }
                return m_surface3DChart;
            
            }
            const CT_Surface3DChart& surface3DChart(){

            if (m_surface3DChart)
            {
                return *m_surface3DChart;
            }
            return CT_Surface3DChart::default_instance();
        
            }
            bool has_bubbleChart(){

            return m_has_bubbleChart;
        
            }
            CT_BubbleChart* mutable_bubbleChart(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_bubbleChart = true;
                if (!m_bubbleChart)
                {
                    m_bubbleChart = new CT_BubbleChart();
                }
                return m_bubbleChart;
            
            }
            const CT_BubbleChart& bubbleChart(){

            if (m_bubbleChart)
            {
                return *m_bubbleChart;
            }
            return CT_BubbleChart::default_instance();
        
            }
            bool has_valAx(){

            return m_has_valAx;
        
            }
            CT_ValAx* mutable_valAx(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_valAx = true;
                if (!m_valAx)
                {
                    m_valAx = new CT_ValAx();
                }
                return m_valAx;
            
            }
            const CT_ValAx& valAx(){

            if (m_valAx)
            {
                return *m_valAx;
            }
            return CT_ValAx::default_instance();
        
            }
            bool has_catAx(){

            return m_has_catAx;
        
            }
            CT_CatAx* mutable_catAx(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_catAx = true;
                if (!m_catAx)
                {
                    m_catAx = new CT_CatAx();
                }
                return m_catAx;
            
            }
            const CT_CatAx& catAx(){

            if (m_catAx)
            {
                return *m_catAx;
            }
            return CT_CatAx::default_instance();
        
            }
            bool has_dateAx(){

            return m_has_dateAx;
        
            }
            CT_DateAx* mutable_dateAx(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_serAx = false;
                
        if (m_serAx)
        {
            delete m_serAx;
            m_serAx = NULL;
        }
    ;
            
                m_has_dateAx = true;
                if (!m_dateAx)
                {
                    m_dateAx = new CT_DateAx();
                }
                return m_dateAx;
            
            }
            const CT_DateAx& dateAx(){

            if (m_dateAx)
            {
                return *m_dateAx;
            }
            return CT_DateAx::default_instance();
        
            }
            bool has_serAx(){

            return m_has_serAx;
        
            }
            CT_SerAx* mutable_serAx(){

                
                m_has_areaChart = false;
                
        if (m_areaChart)
        {
            delete m_areaChart;
            m_areaChart = NULL;
        }
    ;
            
                m_has_area3DChart = false;
                
        if (m_area3DChart)
        {
            delete m_area3DChart;
            m_area3DChart = NULL;
        }
    ;
            
                m_has_lineChart = false;
                
        if (m_lineChart)
        {
            delete m_lineChart;
            m_lineChart = NULL;
        }
    ;
            
                m_has_line3DChart = false;
                
        if (m_line3DChart)
        {
            delete m_line3DChart;
            m_line3DChart = NULL;
        }
    ;
            
                m_has_stockChart = false;
                
        if (m_stockChart)
        {
            delete m_stockChart;
            m_stockChart = NULL;
        }
    ;
            
                m_has_radarChart = false;
                
        if (m_radarChart)
        {
            delete m_radarChart;
            m_radarChart = NULL;
        }
    ;
            
                m_has_scatterChart = false;
                
        if (m_scatterChart)
        {
            delete m_scatterChart;
            m_scatterChart = NULL;
        }
    ;
            
                m_has_pieChart = false;
                
        if (m_pieChart)
        {
            delete m_pieChart;
            m_pieChart = NULL;
        }
    ;
            
                m_has_pie3DChart = false;
                
        if (m_pie3DChart)
        {
            delete m_pie3DChart;
            m_pie3DChart = NULL;
        }
    ;
            
                m_has_doughnutChart = false;
                
        if (m_doughnutChart)
        {
            delete m_doughnutChart;
            m_doughnutChart = NULL;
        }
    ;
            
                m_has_barChart = false;
                
        if (m_barChart)
        {
            delete m_barChart;
            m_barChart = NULL;
        }
    ;
            
                m_has_bar3DChart = false;
                
        if (m_bar3DChart)
        {
            delete m_bar3DChart;
            m_bar3DChart = NULL;
        }
    ;
            
                m_has_ofPieChart = false;
                
        if (m_ofPieChart)
        {
            delete m_ofPieChart;
            m_ofPieChart = NULL;
        }
    ;
            
                m_has_surfaceChart = false;
                
        if (m_surfaceChart)
        {
            delete m_surfaceChart;
            m_surfaceChart = NULL;
        }
    ;
            
                m_has_surface3DChart = false;
                
        if (m_surface3DChart)
        {
            delete m_surface3DChart;
            m_surface3DChart = NULL;
        }
    ;
            
                m_has_bubbleChart = false;
                
        if (m_bubbleChart)
        {
            delete m_bubbleChart;
            m_bubbleChart = NULL;
        }
    ;
            
                m_has_valAx = false;
                
        if (m_valAx)
        {
            delete m_valAx;
            m_valAx = NULL;
        }
    ;
            
                m_has_catAx = false;
                
        if (m_catAx)
        {
            delete m_catAx;
            m_catAx = NULL;
        }
    ;
            
                m_has_dateAx = false;
                
        if (m_dateAx)
        {
            delete m_dateAx;
            m_dateAx = NULL;
        }
    ;
            
                m_has_serAx = true;
                if (!m_serAx)
                {
                    m_serAx = new CT_SerAx();
                }
                return m_serAx;
            
            }
            const CT_SerAx& serAx(){

            if (m_serAx)
            {
                return *m_serAx;
            }
            return CT_SerAx::default_instance();
        
            }

        private:
            bool m_has_areaChart ;
            CT_AreaChart* m_areaChart ;
            bool m_has_area3DChart ;
            CT_Area3DChart* m_area3DChart ;
            bool m_has_lineChart ;
            CT_LineChart* m_lineChart ;
            bool m_has_line3DChart ;
            CT_Line3DChart* m_line3DChart ;
            bool m_has_stockChart ;
            CT_StockChart* m_stockChart ;
            bool m_has_radarChart ;
            CT_RadarChart* m_radarChart ;
            bool m_has_scatterChart ;
            CT_ScatterChart* m_scatterChart ;
            bool m_has_pieChart ;
            CT_PieChart* m_pieChart ;
            bool m_has_pie3DChart ;
            CT_Pie3DChart* m_pie3DChart ;
            bool m_has_doughnutChart ;
            CT_DoughnutChart* m_doughnutChart ;
            bool m_has_barChart ;
            CT_BarChart* m_barChart ;
            bool m_has_bar3DChart ;
            CT_Bar3DChart* m_bar3DChart ;
            bool m_has_ofPieChart ;
            CT_OfPieChart* m_ofPieChart ;
            bool m_has_surfaceChart ;
            CT_SurfaceChart* m_surfaceChart ;
            bool m_has_surface3DChart ;
            CT_Surface3DChart* m_surface3DChart ;
            bool m_has_bubbleChart ;
            CT_BubbleChart* m_bubbleChart ;
            bool m_has_valAx ;
            CT_ValAx* m_valAx ;
            bool m_has_catAx ;
            CT_CatAx* m_catAx ;
            bool m_has_dateAx ;
            CT_DateAx* m_dateAx ;
            bool m_has_serAx ;
            CT_SerAx* m_serAx ;

        }


    }

    class CT_PivotFmt : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_marker(){

            return m_has_marker;
        
        }
        CT_Marker* mutable_marker(){

                m_has_marker = true;
                if (!m_marker)
                {
                    m_marker = new CT_Marker();
                }
                return m_marker;
            
        }
        const CT_Marker& marker(){

            if (m_marker)
            {
                return *m_marker;
            }
            return CT_Marker::default_instance();
        
        }
        bool has_dLbl(){

            return m_has_dLbl;
        
        }
        CT_DLbl* mutable_dLbl(){

                m_has_dLbl = true;
                if (!m_dLbl)
                {
                    m_dLbl = new CT_DLbl();
                }
                return m_dLbl;
            
        }
        const CT_DLbl& dLbl(){

            if (m_dLbl)
            {
                return *m_dLbl;
            }
            return CT_DLbl::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_marker = false;
                
        if (m_marker)
        {
            delete m_marker;
            m_marker = NULL;
        }
    
            
                m_has_dLbl = false;
                
        if (m_dLbl)
        {
            delete m_dLbl;
            m_dLbl = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_idx->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_idx->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_marker)
                {
                    m_idx->toXml(\d:marker\, _outStream);;
                }
            
                if (m_has_dLbl)
                {
                    m_idx->toXml(\d:dLbl\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_idx->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PivotFmt& default_instance(){

    if (!CT_PivotFmt::default_instance_)
    {
        CT_PivotFmt::default_instance_ = new CT_PivotFmt();
    }
    return *CT_PivotFmt::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_marker ;
        CT_Marker* m_marker ;
        bool m_has_dLbl ;
        CT_DLbl* m_dLbl ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PivotFmt* default_instance_ ;

    }

    class CT_PivotFmts : public XSD::ComplexType{
    public:
        bool has_pivotFmt(){

            return m_has_pivotFmt;
        
        }
        CT_PivotFmt* mutable_pivotFmt(){

                m_has_pivotFmt = true;
                if (!m_pivotFmt)
                {
                    m_pivotFmt = new CT_PivotFmt();
                }
                return m_pivotFmt;
            
        }
        const CT_PivotFmt& pivotFmt(){

            if (m_pivotFmt)
            {
                return *m_pivotFmt;
            }
            return CT_PivotFmt::default_instance();
        
        }
        void clear(){

                m_has_pivotFmt = false;
                
        if (m_pivotFmt)
        {
            delete m_pivotFmt;
            m_pivotFmt = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_pivotFmt)
                {
                    m_pivotFmt->toXml(\d:pivotFmt\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PivotFmts& default_instance(){

    if (!CT_PivotFmts::default_instance_)
    {
        CT_PivotFmts::default_instance_ = new CT_PivotFmts();
    }
    return *CT_PivotFmts::default_instance_;

        }

    private:
        bool m_has_pivotFmt ;
        CT_PivotFmt* m_pivotFmt ;
        static CT_PivotFmts* default_instance_ ;

    }

    class CT_LegendPos : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LegendPos& default_instance(){

    if (!CT_LegendPos::default_instance_)
    {
        CT_LegendPos::default_instance_ = new CT_LegendPos();
    }
    return *CT_LegendPos::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_LegendPos& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_LegendPos(_val_attr);
        
        }
        const ST_LegendPos& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_LegendPos::default_instance();
        
        }

    private:
        static CT_LegendPos* default_instance_ ;
        bool m_has_val_attr ;
        ST_LegendPos* m_val_attr ;

    }

    class CT_LegendEntry : public XSD::ComplexType{
    public:
        bool has_idx(){

            return m_has_idx;
        
        }
        CT_UnsignedInt* mutable_idx(){

                m_has_idx = true;
                if (!m_idx)
                {
                    m_idx = new CT_UnsignedInt();
                }
                return m_idx;
            
        }
        const CT_UnsignedInt& idx(){

            if (m_idx)
            {
                return *m_idx;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_delete(){

            return m_has_delete;
        
        }
        CT_Boolean* mutable_delete(){

                
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    ;
            
                m_has_delete = true;
                if (!m_delete)
                {
                    m_delete = new CT_Boolean();
                }
                return m_delete;
            
        }
        const CT_Boolean& delete(){

            if (m_delete)
            {
                return *m_delete;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    ;
            
                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_idx = false;
                
        if (m_idx)
        {
            delete m_idx;
            m_idx = NULL;
        }
    
             
                m_has_delete = false;
                
        if (m_delete)
        {
            delete m_delete;
            m_delete = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
             
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_idx)
                {
                    m_idx->toXml(\d:idx\, _outStream);;
                }
             
                if (m_has_delete)
                {
                    m_delete->toXml(\d:delete\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_delete->toXml(\d:txPr\, _outStream);;
                }
             
                if (m_has_extLst)
                {
                    m_extLst->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LegendEntry& default_instance(){

    if (!CT_LegendEntry::default_instance_)
    {
        CT_LegendEntry::default_instance_ = new CT_LegendEntry();
    }
    return *CT_LegendEntry::default_instance_;

        }

    private:
        bool m_has_idx ;
        CT_UnsignedInt* m_idx ;
        bool m_has_delete ;
        CT_Boolean* m_delete ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_LegendEntry* default_instance_ ;

    }

    class CT_Legend : public XSD::ComplexType{
    public:
        bool has_legendPos(){

            return m_has_legendPos;
        
        }
        CT_LegendPos* mutable_legendPos(){

                m_has_legendPos = true;
                if (!m_legendPos)
                {
                    m_legendPos = new CT_LegendPos();
                }
                return m_legendPos;
            
        }
        const CT_LegendPos& legendPos(){

            if (m_legendPos)
            {
                return *m_legendPos;
            }
            return CT_LegendPos::default_instance();
        
        }
        bool has_legendEntry(){

            return m_has_legendEntry;
        
        }
        CT_LegendEntry* mutable_legendEntry(){

                m_has_legendEntry = true;
                if (!m_legendEntry)
                {
                    m_legendEntry = new CT_LegendEntry();
                }
                return m_legendEntry;
            
        }
        const CT_LegendEntry& legendEntry(){

            if (m_legendEntry)
            {
                return *m_legendEntry;
            }
            return CT_LegendEntry::default_instance();
        
        }
        bool has_layout(){

            return m_has_layout;
        
        }
        CT_Layout* mutable_layout(){

                m_has_layout = true;
                if (!m_layout)
                {
                    m_layout = new CT_Layout();
                }
                return m_layout;
            
        }
        const CT_Layout& layout(){

            if (m_layout)
            {
                return *m_layout;
            }
            return CT_Layout::default_instance();
        
        }
        bool has_overlay(){

            return m_has_overlay;
        
        }
        CT_Boolean* mutable_overlay(){

                m_has_overlay = true;
                if (!m_overlay)
                {
                    m_overlay = new CT_Boolean();
                }
                return m_overlay;
            
        }
        const CT_Boolean& overlay(){

            if (m_overlay)
            {
                return *m_overlay;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_legendPos = false;
                
        if (m_legendPos)
        {
            delete m_legendPos;
            m_legendPos = NULL;
        }
    
            
                m_has_legendEntry = false;
                
        if (m_legendEntry)
        {
            delete m_legendEntry;
            m_legendEntry = NULL;
        }
    
            
                m_has_layout = false;
                
        if (m_layout)
        {
            delete m_layout;
            m_layout = NULL;
        }
    
            
                m_has_overlay = false;
                
        if (m_overlay)
        {
            delete m_overlay;
            m_overlay = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_legendPos)
                {
                    m_legendPos->toXml(\d:legendPos\, _outStream);;
                }
            
                if (m_has_legendEntry)
                {
                    m_legendPos->toXml(\d:legendEntry\, _outStream);;
                }
            
                if (m_has_layout)
                {
                    m_legendPos->toXml(\d:layout\, _outStream);;
                }
            
                if (m_has_overlay)
                {
                    m_legendPos->toXml(\d:overlay\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_legendPos->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_legendPos->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_legendPos->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Legend& default_instance(){

    if (!CT_Legend::default_instance_)
    {
        CT_Legend::default_instance_ = new CT_Legend();
    }
    return *CT_Legend::default_instance_;

        }

    private:
        bool m_has_legendPos ;
        CT_LegendPos* m_legendPos ;
        bool m_has_legendEntry ;
        CT_LegendEntry* m_legendEntry ;
        bool m_has_layout ;
        CT_Layout* m_layout ;
        bool m_has_overlay ;
        CT_Boolean* m_overlay ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Legend* default_instance_ ;

    }

    class CT_DispBlanksAs : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DispBlanksAs& default_instance(){

    if (!CT_DispBlanksAs::default_instance_)
    {
        CT_DispBlanksAs::default_instance_ = new CT_DispBlanksAs();
    }
    return *CT_DispBlanksAs::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_DispBlanksAs& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_DispBlanksAs(_val_attr);
        
        }
        const ST_DispBlanksAs& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_DispBlanksAs::default_instance();
        
        }

    private:
        static CT_DispBlanksAs* default_instance_ ;
        bool m_has_val_attr ;
        ST_DispBlanksAs* m_val_attr ;

    }

    class CT_Chart : public XSD::ComplexType{
    public:
        bool has_title(){

            return m_has_title;
        
        }
        CT_Title* mutable_title(){

                m_has_title = true;
                if (!m_title)
                {
                    m_title = new CT_Title();
                }
                return m_title;
            
        }
        const CT_Title& title(){

            if (m_title)
            {
                return *m_title;
            }
            return CT_Title::default_instance();
        
        }
        bool has_autoTitleDeleted(){

            return m_has_autoTitleDeleted;
        
        }
        CT_Boolean* mutable_autoTitleDeleted(){

                m_has_autoTitleDeleted = true;
                if (!m_autoTitleDeleted)
                {
                    m_autoTitleDeleted = new CT_Boolean();
                }
                return m_autoTitleDeleted;
            
        }
        const CT_Boolean& autoTitleDeleted(){

            if (m_autoTitleDeleted)
            {
                return *m_autoTitleDeleted;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_pivotFmts(){

            return m_has_pivotFmts;
        
        }
        CT_PivotFmts* mutable_pivotFmts(){

                m_has_pivotFmts = true;
                if (!m_pivotFmts)
                {
                    m_pivotFmts = new CT_PivotFmts();
                }
                return m_pivotFmts;
            
        }
        const CT_PivotFmts& pivotFmts(){

            if (m_pivotFmts)
            {
                return *m_pivotFmts;
            }
            return CT_PivotFmts::default_instance();
        
        }
        bool has_view3D(){

            return m_has_view3D;
        
        }
        CT_View3D* mutable_view3D(){

                m_has_view3D = true;
                if (!m_view3D)
                {
                    m_view3D = new CT_View3D();
                }
                return m_view3D;
            
        }
        const CT_View3D& view3D(){

            if (m_view3D)
            {
                return *m_view3D;
            }
            return CT_View3D::default_instance();
        
        }
        bool has_floor(){

            return m_has_floor;
        
        }
        CT_Surface* mutable_floor(){

                m_has_floor = true;
                if (!m_floor)
                {
                    m_floor = new CT_Surface();
                }
                return m_floor;
            
        }
        const CT_Surface& floor(){

            if (m_floor)
            {
                return *m_floor;
            }
            return CT_Surface::default_instance();
        
        }
        bool has_sideWall(){

            return m_has_sideWall;
        
        }
        CT_Surface* mutable_sideWall(){

                m_has_sideWall = true;
                if (!m_sideWall)
                {
                    m_sideWall = new CT_Surface();
                }
                return m_sideWall;
            
        }
        const CT_Surface& sideWall(){

            if (m_sideWall)
            {
                return *m_sideWall;
            }
            return CT_Surface::default_instance();
        
        }
        bool has_backWall(){

            return m_has_backWall;
        
        }
        CT_Surface* mutable_backWall(){

                m_has_backWall = true;
                if (!m_backWall)
                {
                    m_backWall = new CT_Surface();
                }
                return m_backWall;
            
        }
        const CT_Surface& backWall(){

            if (m_backWall)
            {
                return *m_backWall;
            }
            return CT_Surface::default_instance();
        
        }
        bool has_plotArea(){

            return m_has_plotArea;
        
        }
        CT_PlotArea* mutable_plotArea(){

                m_has_plotArea = true;
                if (!m_plotArea)
                {
                    m_plotArea = new CT_PlotArea();
                }
                return m_plotArea;
            
        }
        const CT_PlotArea& plotArea(){

            if (m_plotArea)
            {
                return *m_plotArea;
            }
            return CT_PlotArea::default_instance();
        
        }
        bool has_legend(){

            return m_has_legend;
        
        }
        CT_Legend* mutable_legend(){

                m_has_legend = true;
                if (!m_legend)
                {
                    m_legend = new CT_Legend();
                }
                return m_legend;
            
        }
        const CT_Legend& legend(){

            if (m_legend)
            {
                return *m_legend;
            }
            return CT_Legend::default_instance();
        
        }
        bool has_plotVisOnly(){

            return m_has_plotVisOnly;
        
        }
        CT_Boolean* mutable_plotVisOnly(){

                m_has_plotVisOnly = true;
                if (!m_plotVisOnly)
                {
                    m_plotVisOnly = new CT_Boolean();
                }
                return m_plotVisOnly;
            
        }
        const CT_Boolean& plotVisOnly(){

            if (m_plotVisOnly)
            {
                return *m_plotVisOnly;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_dispBlanksAs(){

            return m_has_dispBlanksAs;
        
        }
        CT_DispBlanksAs* mutable_dispBlanksAs(){

                m_has_dispBlanksAs = true;
                if (!m_dispBlanksAs)
                {
                    m_dispBlanksAs = new CT_DispBlanksAs();
                }
                return m_dispBlanksAs;
            
        }
        const CT_DispBlanksAs& dispBlanksAs(){

            if (m_dispBlanksAs)
            {
                return *m_dispBlanksAs;
            }
            return CT_DispBlanksAs::default_instance();
        
        }
        bool has_showDLblsOverMax(){

            return m_has_showDLblsOverMax;
        
        }
        CT_Boolean* mutable_showDLblsOverMax(){

                m_has_showDLblsOverMax = true;
                if (!m_showDLblsOverMax)
                {
                    m_showDLblsOverMax = new CT_Boolean();
                }
                return m_showDLblsOverMax;
            
        }
        const CT_Boolean& showDLblsOverMax(){

            if (m_showDLblsOverMax)
            {
                return *m_showDLblsOverMax;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_title = false;
                
        if (m_title)
        {
            delete m_title;
            m_title = NULL;
        }
    
            
                m_has_autoTitleDeleted = false;
                
        if (m_autoTitleDeleted)
        {
            delete m_autoTitleDeleted;
            m_autoTitleDeleted = NULL;
        }
    
            
                m_has_pivotFmts = false;
                
        if (m_pivotFmts)
        {
            delete m_pivotFmts;
            m_pivotFmts = NULL;
        }
    
            
                m_has_view3D = false;
                
        if (m_view3D)
        {
            delete m_view3D;
            m_view3D = NULL;
        }
    
            
                m_has_floor = false;
                
        if (m_floor)
        {
            delete m_floor;
            m_floor = NULL;
        }
    
            
                m_has_sideWall = false;
                
        if (m_sideWall)
        {
            delete m_sideWall;
            m_sideWall = NULL;
        }
    
            
                m_has_backWall = false;
                
        if (m_backWall)
        {
            delete m_backWall;
            m_backWall = NULL;
        }
    
            
                m_has_plotArea = false;
                
        if (m_plotArea)
        {
            delete m_plotArea;
            m_plotArea = NULL;
        }
    
            
                m_has_legend = false;
                
        if (m_legend)
        {
            delete m_legend;
            m_legend = NULL;
        }
    
            
                m_has_plotVisOnly = false;
                
        if (m_plotVisOnly)
        {
            delete m_plotVisOnly;
            m_plotVisOnly = NULL;
        }
    
            
                m_has_dispBlanksAs = false;
                
        if (m_dispBlanksAs)
        {
            delete m_dispBlanksAs;
            m_dispBlanksAs = NULL;
        }
    
            
                m_has_showDLblsOverMax = false;
                
        if (m_showDLblsOverMax)
        {
            delete m_showDLblsOverMax;
            m_showDLblsOverMax = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_title)
                {
                    m_title->toXml(\d:title\, _outStream);;
                }
            
                if (m_has_autoTitleDeleted)
                {
                    m_title->toXml(\d:autoTitleDeleted\, _outStream);;
                }
            
                if (m_has_pivotFmts)
                {
                    m_title->toXml(\d:pivotFmts\, _outStream);;
                }
            
                if (m_has_view3D)
                {
                    m_title->toXml(\d:view3D\, _outStream);;
                }
            
                if (m_has_floor)
                {
                    m_title->toXml(\d:floor\, _outStream);;
                }
            
                if (m_has_sideWall)
                {
                    m_title->toXml(\d:sideWall\, _outStream);;
                }
            
                if (m_has_backWall)
                {
                    m_title->toXml(\d:backWall\, _outStream);;
                }
            
                if (m_has_plotArea)
                {
                    m_title->toXml(\d:plotArea\, _outStream);;
                }
            
                if (m_has_legend)
                {
                    m_title->toXml(\d:legend\, _outStream);;
                }
            
                if (m_has_plotVisOnly)
                {
                    m_title->toXml(\d:plotVisOnly\, _outStream);;
                }
            
                if (m_has_dispBlanksAs)
                {
                    m_title->toXml(\d:dispBlanksAs\, _outStream);;
                }
            
                if (m_has_showDLblsOverMax)
                {
                    m_title->toXml(\d:showDLblsOverMax\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_title->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Chart& default_instance(){

    if (!CT_Chart::default_instance_)
    {
        CT_Chart::default_instance_ = new CT_Chart();
    }
    return *CT_Chart::default_instance_;

        }

    private:
        bool m_has_title ;
        CT_Title* m_title ;
        bool m_has_autoTitleDeleted ;
        CT_Boolean* m_autoTitleDeleted ;
        bool m_has_pivotFmts ;
        CT_PivotFmts* m_pivotFmts ;
        bool m_has_view3D ;
        CT_View3D* m_view3D ;
        bool m_has_floor ;
        CT_Surface* m_floor ;
        bool m_has_sideWall ;
        CT_Surface* m_sideWall ;
        bool m_has_backWall ;
        CT_Surface* m_backWall ;
        bool m_has_plotArea ;
        CT_PlotArea* m_plotArea ;
        bool m_has_legend ;
        CT_Legend* m_legend ;
        bool m_has_plotVisOnly ;
        CT_Boolean* m_plotVisOnly ;
        bool m_has_dispBlanksAs ;
        CT_DispBlanksAs* m_dispBlanksAs ;
        bool m_has_showDLblsOverMax ;
        CT_Boolean* m_showDLblsOverMax ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_Chart* default_instance_ ;

    }

    class CT_Style : public XSD::ComplexType{
    public:
        void clear(){

                m_has_val_attr = false;
                
        if (m_val_attr)
        {
            delete m_val_attr;
            m_val_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(al\, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Style& default_instance(){

    if (!CT_Style::default_instance_)
    {
        CT_Style::default_instance_ = new CT_Style();
    }
    return *CT_Style::default_instance_;

        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const ST_Style& _val_attr ){

            m_has_val_attr = true;
            m_val_attr = new ST_Style(_val_attr);
        
        }
        const ST_Style& val_attr(){

            if (m_val_attr)
            {
                return *m_val_attr;
            }
            return ST_Style::default_instance();
        
        }

    private:
        static CT_Style* default_instance_ ;
        bool m_has_val_attr ;
        ST_Style* m_val_attr ;

    }

    class CT_PivotSource : public XSD::ComplexType{
    public:
        bool has_name(){

            return m_has_name;
        
        }
        ns_s::ST_Xstring* mutable_name(){

                m_has_name = true;
                if (!m_name)
                {
                    m_name = new ns_s::ST_Xstring();
                }
                return m_name;
            
        }
        const ns_s::ST_Xstring& name(){

            if (m_name)
            {
                return *m_name;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        bool has_fmtId(){

            return m_has_fmtId;
        
        }
        CT_UnsignedInt* mutable_fmtId(){

                m_has_fmtId = true;
                if (!m_fmtId)
                {
                    m_fmtId = new CT_UnsignedInt();
                }
                return m_fmtId;
            
        }
        const CT_UnsignedInt& fmtId(){

            if (m_fmtId)
            {
                return *m_fmtId;
            }
            return CT_UnsignedInt::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_name = false;
                
        if (m_name)
        {
            delete m_name;
            m_name = NULL;
        }
    
            
                m_has_fmtId = false;
                
        if (m_fmtId)
        {
            delete m_fmtId;
            m_fmtId = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_name)
                {
                    _outStream << \<d:name>\ << m_name->toString() << \</d:name>\;;
                }
            
                if (m_has_fmtId)
                {
                    m_name->toXml(\d:fmtId\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_name->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PivotSource& default_instance(){

    if (!CT_PivotSource::default_instance_)
    {
        CT_PivotSource::default_instance_ = new CT_PivotSource();
    }
    return *CT_PivotSource::default_instance_;

        }

    private:
        bool m_has_name ;
        ns_s::ST_Xstring* m_name ;
        bool m_has_fmtId ;
        CT_UnsignedInt* m_fmtId ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_PivotSource* default_instance_ ;

    }

    class CT_Protection : public XSD::ComplexType{
    public:
        bool has_chartObject(){

            return m_has_chartObject;
        
        }
        CT_Boolean* mutable_chartObject(){

                m_has_chartObject = true;
                if (!m_chartObject)
                {
                    m_chartObject = new CT_Boolean();
                }
                return m_chartObject;
            
        }
        const CT_Boolean& chartObject(){

            if (m_chartObject)
            {
                return *m_chartObject;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_data(){

            return m_has_data;
        
        }
        CT_Boolean* mutable_data(){

                m_has_data = true;
                if (!m_data)
                {
                    m_data = new CT_Boolean();
                }
                return m_data;
            
        }
        const CT_Boolean& data(){

            if (m_data)
            {
                return *m_data;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_formatting(){

            return m_has_formatting;
        
        }
        CT_Boolean* mutable_formatting(){

                m_has_formatting = true;
                if (!m_formatting)
                {
                    m_formatting = new CT_Boolean();
                }
                return m_formatting;
            
        }
        const CT_Boolean& formatting(){

            if (m_formatting)
            {
                return *m_formatting;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_selection(){

            return m_has_selection;
        
        }
        CT_Boolean* mutable_selection(){

                m_has_selection = true;
                if (!m_selection)
                {
                    m_selection = new CT_Boolean();
                }
                return m_selection;
            
        }
        const CT_Boolean& selection(){

            if (m_selection)
            {
                return *m_selection;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_userInterface(){

            return m_has_userInterface;
        
        }
        CT_Boolean* mutable_userInterface(){

                m_has_userInterface = true;
                if (!m_userInterface)
                {
                    m_userInterface = new CT_Boolean();
                }
                return m_userInterface;
            
        }
        const CT_Boolean& userInterface(){

            if (m_userInterface)
            {
                return *m_userInterface;
            }
            return CT_Boolean::default_instance();
        
        }
        void clear(){

                m_has_chartObject = false;
                
        if (m_chartObject)
        {
            delete m_chartObject;
            m_chartObject = NULL;
        }
    
            
                m_has_data = false;
                
        if (m_data)
        {
            delete m_data;
            m_data = NULL;
        }
    
            
                m_has_formatting = false;
                
        if (m_formatting)
        {
            delete m_formatting;
            m_formatting = NULL;
        }
    
            
                m_has_selection = false;
                
        if (m_selection)
        {
            delete m_selection;
            m_selection = NULL;
        }
    
            
                m_has_userInterface = false;
                
        if (m_userInterface)
        {
            delete m_userInterface;
            m_userInterface = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_chartObject)
                {
                    m_chartObject->toXml(\d:chartObject\, _outStream);;
                }
            
                if (m_has_data)
                {
                    m_chartObject->toXml(\d:data\, _outStream);;
                }
            
                if (m_has_formatting)
                {
                    m_chartObject->toXml(\d:formatting\, _outStream);;
                }
            
                if (m_has_selection)
                {
                    m_chartObject->toXml(\d:selection\, _outStream);;
                }
            
                if (m_has_userInterface)
                {
                    m_chartObject->toXml(\d:userInterface\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Protection& default_instance(){

    if (!CT_Protection::default_instance_)
    {
        CT_Protection::default_instance_ = new CT_Protection();
    }
    return *CT_Protection::default_instance_;

        }

    private:
        bool m_has_chartObject ;
        CT_Boolean* m_chartObject ;
        bool m_has_data ;
        CT_Boolean* m_data ;
        bool m_has_formatting ;
        CT_Boolean* m_formatting ;
        bool m_has_selection ;
        CT_Boolean* m_selection ;
        bool m_has_userInterface ;
        CT_Boolean* m_userInterface ;
        static CT_Protection* default_instance_ ;

    }

    class CT_HeaderFooter : public XSD::ComplexType{
    public:
        bool has_oddHeader(){

            return m_has_oddHeader;
        
        }
        ns_s::ST_Xstring* mutable_oddHeader(){

                m_has_oddHeader = true;
                if (!m_oddHeader)
                {
                    m_oddHeader = new ns_s::ST_Xstring();
                }
                return m_oddHeader;
            
        }
        const ns_s::ST_Xstring& oddHeader(){

            if (m_oddHeader)
            {
                return *m_oddHeader;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        bool has_oddFooter(){

            return m_has_oddFooter;
        
        }
        ns_s::ST_Xstring* mutable_oddFooter(){

                m_has_oddFooter = true;
                if (!m_oddFooter)
                {
                    m_oddFooter = new ns_s::ST_Xstring();
                }
                return m_oddFooter;
            
        }
        const ns_s::ST_Xstring& oddFooter(){

            if (m_oddFooter)
            {
                return *m_oddFooter;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        bool has_evenHeader(){

            return m_has_evenHeader;
        
        }
        ns_s::ST_Xstring* mutable_evenHeader(){

                m_has_evenHeader = true;
                if (!m_evenHeader)
                {
                    m_evenHeader = new ns_s::ST_Xstring();
                }
                return m_evenHeader;
            
        }
        const ns_s::ST_Xstring& evenHeader(){

            if (m_evenHeader)
            {
                return *m_evenHeader;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        bool has_evenFooter(){

            return m_has_evenFooter;
        
        }
        ns_s::ST_Xstring* mutable_evenFooter(){

                m_has_evenFooter = true;
                if (!m_evenFooter)
                {
                    m_evenFooter = new ns_s::ST_Xstring();
                }
                return m_evenFooter;
            
        }
        const ns_s::ST_Xstring& evenFooter(){

            if (m_evenFooter)
            {
                return *m_evenFooter;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        bool has_firstHeader(){

            return m_has_firstHeader;
        
        }
        ns_s::ST_Xstring* mutable_firstHeader(){

                m_has_firstHeader = true;
                if (!m_firstHeader)
                {
                    m_firstHeader = new ns_s::ST_Xstring();
                }
                return m_firstHeader;
            
        }
        const ns_s::ST_Xstring& firstHeader(){

            if (m_firstHeader)
            {
                return *m_firstHeader;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        bool has_firstFooter(){

            return m_has_firstFooter;
        
        }
        ns_s::ST_Xstring* mutable_firstFooter(){

                m_has_firstFooter = true;
                if (!m_firstFooter)
                {
                    m_firstFooter = new ns_s::ST_Xstring();
                }
                return m_firstFooter;
            
        }
        const ns_s::ST_Xstring& firstFooter(){

            if (m_firstFooter)
            {
                return *m_firstFooter;
            }
            return ns_s::ST_Xstring::default_instance();
        
        }
        void clear(){

                m_has_alignWithMargins_attr = false;
                m_alignWithMargins_attr = false;
            
                m_has_differentOddEven_attr = false;
                m_differentOddEven_attr = false;
            
                m_has_differentFirst_attr = false;
                m_differentFirst_attr = false;
            
                m_has_oddHeader = false;
                
        if (m_oddHeader)
        {
            delete m_oddHeader;
            m_oddHeader = NULL;
        }
    
            
                m_has_oddFooter = false;
                
        if (m_oddFooter)
        {
            delete m_oddFooter;
            m_oddFooter = NULL;
        }
    
            
                m_has_evenHeader = false;
                
        if (m_evenHeader)
        {
            delete m_evenHeader;
            m_evenHeader = NULL;
        }
    
            
                m_has_evenFooter = false;
                
        if (m_evenFooter)
        {
            delete m_evenFooter;
            m_evenFooter = NULL;
        }
    
            
                m_has_firstHeader = false;
                
        if (m_firstHeader)
        {
            delete m_firstHeader;
            m_firstHeader = NULL;
        }
    
            
                m_has_firstFooter = false;
                
        if (m_firstFooter)
        {
            delete m_firstFooter;
            m_firstFooter = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_alignWithMargins_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_differentOddEven_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_differentFirst_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_oddHeader)
                {
                    _outStream << \<d:oddHeader>\ << m_oddHeader->toString() << \</d:oddHeader>\;;
                }
            
                if (m_has_oddFooter)
                {
                    _outStream << \<d:oddFooter>\ << m_oddHeader->toString() << \</d:oddFooter>\;;
                }
            
                if (m_has_evenHeader)
                {
                    _outStream << \<d:evenHeader>\ << m_oddHeader->toString() << \</d:evenHeader>\;;
                }
            
                if (m_has_evenFooter)
                {
                    _outStream << \<d:evenFooter>\ << m_oddHeader->toString() << \</d:evenFooter>\;;
                }
            
                if (m_has_firstHeader)
                {
                    _outStream << \<d:firstHeader>\ << m_oddHeader->toString() << \</d:firstHeader>\;;
                }
            
                if (m_has_firstFooter)
                {
                    _outStream << \<d:firstFooter>\ << m_oddHeader->toString() << \</d:firstFooter>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_HeaderFooter& default_instance(){

    if (!CT_HeaderFooter::default_instance_)
    {
        CT_HeaderFooter::default_instance_ = new CT_HeaderFooter();
    }
    return *CT_HeaderFooter::default_instance_;

        }
        bool has_alignWithMargins_attr(){

            return m_has_alignWithMargins_attr;
        
        }
        void set_alignWithMargins_attr(const boolean& _alignWithMargins_attr ){

        m_has_alignWithMargins_attr = true;
        m_alignWithMargins_attr = _alignWithMargins_attr;
        
        }
        const boolean& alignWithMargins_attr(){

            return type: oolean\nname: \m_alignWithMargins_attr\n;
        
        }
        bool has_differentOddEven_attr(){

            return m_has_differentOddEven_attr;
        
        }
        void set_differentOddEven_attr(const boolean& _differentOddEven_attr ){

        m_has_differentOddEven_attr = true;
        m_differentOddEven_attr = _differentOddEven_attr;
        
        }
        const boolean& differentOddEven_attr(){

            return type: oolean\nname: \m_differentOddEven_attr\n;
        
        }
        bool has_differentFirst_attr(){

            return m_has_differentFirst_attr;
        
        }
        void set_differentFirst_attr(const boolean& _differentFirst_attr ){

        m_has_differentFirst_attr = true;
        m_differentFirst_attr = _differentFirst_attr;
        
        }
        const boolean& differentFirst_attr(){

            return type: oolean\nname: \m_differentFirst_attr\n;
        
        }

    private:
        bool m_has_oddHeader ;
        ns_s::ST_Xstring* m_oddHeader ;
        bool m_has_oddFooter ;
        ns_s::ST_Xstring* m_oddFooter ;
        bool m_has_evenHeader ;
        ns_s::ST_Xstring* m_evenHeader ;
        bool m_has_evenFooter ;
        ns_s::ST_Xstring* m_evenFooter ;
        bool m_has_firstHeader ;
        ns_s::ST_Xstring* m_firstHeader ;
        bool m_has_firstFooter ;
        ns_s::ST_Xstring* m_firstFooter ;
        static CT_HeaderFooter* default_instance_ ;
        bool m_has_alignWithMargins_attr ;
        boolean m_alignWithMargins_attr ;
        bool m_has_differentOddEven_attr ;
        boolean m_differentOddEven_attr ;
        bool m_has_differentFirst_attr ;
        boolean m_differentFirst_attr ;

    }

    class CT_PageMargins : public XSD::ComplexType{
    public:
        void clear(){

                m_has_l_attr = false;
                m_l_attr = 0;
            
                m_has_r_attr = false;
                m_r_attr = 0;
            
                m_has_t_attr = false;
                m_t_attr = 0;
            
                m_has_b_attr = false;
                m_b_attr = 0;
            
                m_has_header_attr = false;
                m_header_attr = 0;
            
                m_has_footer_attr = false;
                m_footer_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_l_attr << \\\;
_outStream << _attrName << \=\\ << m_r_attr << \\\;
_outStream << _attrName << \=\\ << m_t_attr << \\\;
_outStream << _attrName << \=\\ << m_b_attr << \\\;
_outStream << _attrName << \=\\ << m_header_attr << \\\;
_outStream << _attrName << \=\\ << m_footer_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PageMargins& default_instance(){

    if (!CT_PageMargins::default_instance_)
    {
        CT_PageMargins::default_instance_ = new CT_PageMargins();
    }
    return *CT_PageMargins::default_instance_;

        }
        bool has_l_attr(){

            return m_has_l_attr;
        
        }
        void set_l_attr(const double& _l_attr ){

        m_has_l_attr = true;
        m_l_attr = _l_attr;
        
        }
        const double& l_attr(){

            return type: \double\nname: \m_l_attr\n;
        
        }
        bool has_r_attr(){

            return m_has_r_attr;
        
        }
        void set_r_attr(const double& _r_attr ){

        m_has_r_attr = true;
        m_r_attr = _r_attr;
        
        }
        const double& r_attr(){

            return type: \double\nname: \m_r_attr\n;
        
        }
        bool has_t_attr(){

            return m_has_t_attr;
        
        }
        void set_t_attr(const double& _t_attr ){

        m_has_t_attr = true;
        m_t_attr = _t_attr;
        
        }
        const double& t_attr(){

            return type: \double\nname: \m_t_attr\n;
        
        }
        bool has_b_attr(){

            return m_has_b_attr;
        
        }
        void set_b_attr(const double& _b_attr ){

        m_has_b_attr = true;
        m_b_attr = _b_attr;
        
        }
        const double& b_attr(){

            return type: \double\nname: \m_b_attr\n;
        
        }
        bool has_header_attr(){

            return m_has_header_attr;
        
        }
        void set_header_attr(const double& _header_attr ){

        m_has_header_attr = true;
        m_header_attr = _header_attr;
        
        }
        const double& header_attr(){

            return type: \double\nname: \m_header_attr\n;
        
        }
        bool has_footer_attr(){

            return m_has_footer_attr;
        
        }
        void set_footer_attr(const double& _footer_attr ){

        m_has_footer_attr = true;
        m_footer_attr = _footer_attr;
        
        }
        const double& footer_attr(){

            return type: \double\nname: \m_footer_attr\n;
        
        }

    private:
        static CT_PageMargins* default_instance_ ;
        bool m_has_l_attr ;
        double m_l_attr ;
        bool m_has_r_attr ;
        double m_r_attr ;
        bool m_has_t_attr ;
        double m_t_attr ;
        bool m_has_b_attr ;
        double m_b_attr ;
        bool m_has_header_attr ;
        double m_header_attr ;
        bool m_has_footer_attr ;
        double m_footer_attr ;

    }

    class CT_ExternalData : public XSD::ComplexType{
    public:
        bool has_autoUpdate(){

            return m_has_autoUpdate;
        
        }
        CT_Boolean* mutable_autoUpdate(){

                m_has_autoUpdate = true;
                if (!m_autoUpdate)
                {
                    m_autoUpdate = new CT_Boolean();
                }
                return m_autoUpdate;
            
        }
        const CT_Boolean& autoUpdate(){

            if (m_autoUpdate)
            {
                return *m_autoUpdate;
            }
            return CT_Boolean::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_autoUpdate = false;
                
        if (m_autoUpdate)
        {
            delete m_autoUpdate;
            m_autoUpdate = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    (varName)s->toXml(\id\, _outStream);
        _outStream << \>\;
    
                if (m_has_autoUpdate)
                {
                    m_autoUpdate->toXml(\d:autoUpdate\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ExternalData& default_instance(){

    if (!CT_ExternalData::default_instance_)
    {
        CT_ExternalData::default_instance_ = new CT_ExternalData();
    }
    return *CT_ExternalData::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ST_RelationshipId& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ST_RelationshipId(_id_attr);
        
        }
        const ST_RelationshipId& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ST_RelationshipId::default_instance();
        
        }

    private:
        bool m_has_autoUpdate ;
        CT_Boolean* m_autoUpdate ;
        static CT_ExternalData* default_instance_ ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_PageSetup : public XSD::ComplexType{
    public:
        void clear(){

                m_has_paperSize_attr = false;
                m_paperSize_attr = 0;
            
                m_has_paperHeight_attr = false;
                
        if (m_paperHeight_attr)
        {
            delete m_paperHeight_attr;
            m_paperHeight_attr = NULL;
        }
    
            
                m_has_paperWidth_attr = false;
                
        if (m_paperWidth_attr)
        {
            delete m_paperWidth_attr;
            m_paperWidth_attr = NULL;
        }
    
            
                m_has_firstPageNumber_attr = false;
                m_firstPageNumber_attr = 0;
            
                m_has_orientation_attr = false;
                
        if (m_orientation_attr)
        {
            delete m_orientation_attr;
            m_orientation_attr = NULL;
        }
    
            
                m_has_blackAndWhite_attr = false;
                m_blackAndWhite_attr = false;
            
                m_has_draft_attr = false;
                m_draft_attr = false;
            
                m_has_useFirstPageNumber_attr = false;
                m_useFirstPageNumber_attr = false;
            
                m_has_horizontalDpi_attr = false;
                m_horizontalDpi_attr = 0;
            
                m_has_verticalDpi_attr = false;
                m_verticalDpi_attr = 0;
            
                m_has_copies_attr = false;
                m_copies_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_paperSize_attr << \\\;
(varName)s->toXml(\paperHeight\, _outStream);
(varName)s->toXml(\paperWidth\, _outStream);
_outStream << _attrName << \=\\ << m_firstPageNumber_attr << \\\;
(varName)s->toXml(\orientation\, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_blackAndWhite_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_draft_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_useFirstPageNumber_attr) << \\\;
_outStream << _attrName << \=\\ << m_horizontalDpi_attr << \\\;
_outStream << _attrName << \=\\ << m_verticalDpi_attr << \\\;
_outStream << _attrName << \=\\ << m_copies_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PageSetup& default_instance(){

    if (!CT_PageSetup::default_instance_)
    {
        CT_PageSetup::default_instance_ = new CT_PageSetup();
    }
    return *CT_PageSetup::default_instance_;

        }
        bool has_paperSize_attr(){

            return m_has_paperSize_attr;
        
        }
        void set_paperSize_attr(const unsignedInt& _paperSize_attr ){

        m_has_paperSize_attr = true;
        m_paperSize_attr = _paperSize_attr;
        
        }
        const unsignedInt& paperSize_attr(){

            return type: \unsignedInt\nname: \m_paperSize_attr\n;
        
        }
        bool has_paperHeight_attr(){

            return m_has_paperHeight_attr;
        
        }
        void set_paperHeight_attr(const ns_s::ST_PositiveUniversalMeasure& _paperHeight_attr ){

            m_has_paperHeight_attr = true;
            m_paperHeight_attr = new ns_s::ST_PositiveUniversalMeasure(_paperHeight_attr);
        
        }
        const ns_s::ST_PositiveUniversalMeasure& paperHeight_attr(){

            if (m_paperHeight_attr)
            {
                return *m_paperHeight_attr;
            }
            return ns_s::ST_PositiveUniversalMeasure::default_instance();
        
        }
        bool has_paperWidth_attr(){

            return m_has_paperWidth_attr;
        
        }
        void set_paperWidth_attr(const ns_s::ST_PositiveUniversalMeasure& _paperWidth_attr ){

            m_has_paperWidth_attr = true;
            m_paperWidth_attr = new ns_s::ST_PositiveUniversalMeasure(_paperWidth_attr);
        
        }
        const ns_s::ST_PositiveUniversalMeasure& paperWidth_attr(){

            if (m_paperWidth_attr)
            {
                return *m_paperWidth_attr;
            }
            return ns_s::ST_PositiveUniversalMeasure::default_instance();
        
        }
        bool has_firstPageNumber_attr(){

            return m_has_firstPageNumber_attr;
        
        }
        void set_firstPageNumber_attr(const unsignedInt& _firstPageNumber_attr ){

        m_has_firstPageNumber_attr = true;
        m_firstPageNumber_attr = _firstPageNumber_attr;
        
        }
        const unsignedInt& firstPageNumber_attr(){

            return type: \unsignedInt\nname: \m_firstPageNumber_attr\n;
        
        }
        bool has_orientation_attr(){

            return m_has_orientation_attr;
        
        }
        void set_orientation_attr(const ST_PageSetupOrientation& _orientation_attr ){

            m_has_orientation_attr = true;
            m_orientation_attr = new ST_PageSetupOrientation(_orientation_attr);
        
        }
        const ST_PageSetupOrientation& orientation_attr(){

            if (m_orientation_attr)
            {
                return *m_orientation_attr;
            }
            return ST_PageSetupOrientation::default_instance();
        
        }
        bool has_blackAndWhite_attr(){

            return m_has_blackAndWhite_attr;
        
        }
        void set_blackAndWhite_attr(const boolean& _blackAndWhite_attr ){

        m_has_blackAndWhite_attr = true;
        m_blackAndWhite_attr = _blackAndWhite_attr;
        
        }
        const boolean& blackAndWhite_attr(){

            return type: oolean\nname: \m_blackAndWhite_attr\n;
        
        }
        bool has_draft_attr(){

            return m_has_draft_attr;
        
        }
        void set_draft_attr(const boolean& _draft_attr ){

        m_has_draft_attr = true;
        m_draft_attr = _draft_attr;
        
        }
        const boolean& draft_attr(){

            return type: oolean\nname: \m_draft_attr\n;
        
        }
        bool has_useFirstPageNumber_attr(){

            return m_has_useFirstPageNumber_attr;
        
        }
        void set_useFirstPageNumber_attr(const boolean& _useFirstPageNumber_attr ){

        m_has_useFirstPageNumber_attr = true;
        m_useFirstPageNumber_attr = _useFirstPageNumber_attr;
        
        }
        const boolean& useFirstPageNumber_attr(){

            return type: oolean\nname: \m_useFirstPageNumber_attr\n;
        
        }
        bool has_horizontalDpi_attr(){

            return m_has_horizontalDpi_attr;
        
        }
        void set_horizontalDpi_attr(const int& _horizontalDpi_attr ){

        m_has_horizontalDpi_attr = true;
        m_horizontalDpi_attr = _horizontalDpi_attr;
        
        }
        const int& horizontalDpi_attr(){

            return type: \int\nname: \m_horizontalDpi_attr\n;
        
        }
        bool has_verticalDpi_attr(){

            return m_has_verticalDpi_attr;
        
        }
        void set_verticalDpi_attr(const int& _verticalDpi_attr ){

        m_has_verticalDpi_attr = true;
        m_verticalDpi_attr = _verticalDpi_attr;
        
        }
        const int& verticalDpi_attr(){

            return type: \int\nname: \m_verticalDpi_attr\n;
        
        }
        bool has_copies_attr(){

            return m_has_copies_attr;
        
        }
        void set_copies_attr(const unsignedInt& _copies_attr ){

        m_has_copies_attr = true;
        m_copies_attr = _copies_attr;
        
        }
        const unsignedInt& copies_attr(){

            return type: \unsignedInt\nname: \m_copies_attr\n;
        
        }

    private:
        static CT_PageSetup* default_instance_ ;
        bool m_has_paperSize_attr ;
        unsignedInt m_paperSize_attr ;
        bool m_has_paperHeight_attr ;
        ns_s::ST_PositiveUniversalMeasure* m_paperHeight_attr ;
        bool m_has_paperWidth_attr ;
        ns_s::ST_PositiveUniversalMeasure* m_paperWidth_attr ;
        bool m_has_firstPageNumber_attr ;
        unsignedInt m_firstPageNumber_attr ;
        bool m_has_orientation_attr ;
        ST_PageSetupOrientation* m_orientation_attr ;
        bool m_has_blackAndWhite_attr ;
        boolean m_blackAndWhite_attr ;
        bool m_has_draft_attr ;
        boolean m_draft_attr ;
        bool m_has_useFirstPageNumber_attr ;
        boolean m_useFirstPageNumber_attr ;
        bool m_has_horizontalDpi_attr ;
        int m_horizontalDpi_attr ;
        bool m_has_verticalDpi_attr ;
        int m_verticalDpi_attr ;
        bool m_has_copies_attr ;
        unsignedInt m_copies_attr ;

    }

    class CT_PrintSettings : public XSD::ComplexType{
    public:
        bool has_headerFooter(){

            return m_has_headerFooter;
        
        }
        CT_HeaderFooter* mutable_headerFooter(){

                m_has_headerFooter = true;
                if (!m_headerFooter)
                {
                    m_headerFooter = new CT_HeaderFooter();
                }
                return m_headerFooter;
            
        }
        const CT_HeaderFooter& headerFooter(){

            if (m_headerFooter)
            {
                return *m_headerFooter;
            }
            return CT_HeaderFooter::default_instance();
        
        }
        bool has_pageMargins(){

            return m_has_pageMargins;
        
        }
        CT_PageMargins* mutable_pageMargins(){

                m_has_pageMargins = true;
                if (!m_pageMargins)
                {
                    m_pageMargins = new CT_PageMargins();
                }
                return m_pageMargins;
            
        }
        const CT_PageMargins& pageMargins(){

            if (m_pageMargins)
            {
                return *m_pageMargins;
            }
            return CT_PageMargins::default_instance();
        
        }
        bool has_pageSetup(){

            return m_has_pageSetup;
        
        }
        CT_PageSetup* mutable_pageSetup(){

                m_has_pageSetup = true;
                if (!m_pageSetup)
                {
                    m_pageSetup = new CT_PageSetup();
                }
                return m_pageSetup;
            
        }
        const CT_PageSetup& pageSetup(){

            if (m_pageSetup)
            {
                return *m_pageSetup;
            }
            return CT_PageSetup::default_instance();
        
        }
        bool has_legacyDrawingHF(){

            return m_has_legacyDrawingHF;
        
        }
        CT_RelId* mutable_legacyDrawingHF(){

                m_has_legacyDrawingHF = true;
                if (!m_legacyDrawingHF)
                {
                    m_legacyDrawingHF = new CT_RelId();
                }
                return m_legacyDrawingHF;
            
        }
        const CT_RelId& legacyDrawingHF(){

            if (m_legacyDrawingHF)
            {
                return *m_legacyDrawingHF;
            }
            return CT_RelId::default_instance();
        
        }
        void clear(){

                m_has_headerFooter = false;
                
        if (m_headerFooter)
        {
            delete m_headerFooter;
            m_headerFooter = NULL;
        }
    
            
                m_has_pageMargins = false;
                
        if (m_pageMargins)
        {
            delete m_pageMargins;
            m_pageMargins = NULL;
        }
    
            
                m_has_pageSetup = false;
                
        if (m_pageSetup)
        {
            delete m_pageSetup;
            m_pageSetup = NULL;
        }
    
            
                m_has_legacyDrawingHF = false;
                
        if (m_legacyDrawingHF)
        {
            delete m_legacyDrawingHF;
            m_legacyDrawingHF = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_headerFooter)
                {
                    m_headerFooter->toXml(\d:headerFooter\, _outStream);;
                }
            
                if (m_has_pageMargins)
                {
                    m_headerFooter->toXml(\d:pageMargins\, _outStream);;
                }
            
                if (m_has_pageSetup)
                {
                    m_headerFooter->toXml(\d:pageSetup\, _outStream);;
                }
            
                if (m_has_legacyDrawingHF)
                {
                    m_headerFooter->toXml(\d:legacyDrawingHF\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PrintSettings& default_instance(){

    if (!CT_PrintSettings::default_instance_)
    {
        CT_PrintSettings::default_instance_ = new CT_PrintSettings();
    }
    return *CT_PrintSettings::default_instance_;

        }

    private:
        bool m_has_headerFooter ;
        CT_HeaderFooter* m_headerFooter ;
        bool m_has_pageMargins ;
        CT_PageMargins* m_pageMargins ;
        bool m_has_pageSetup ;
        CT_PageSetup* m_pageSetup ;
        bool m_has_legacyDrawingHF ;
        CT_RelId* m_legacyDrawingHF ;
        static CT_PrintSettings* default_instance_ ;

    }

    class CT_ChartSpace : public XSD::ComplexType{
    public:
        bool has_date1904(){

            return m_has_date1904;
        
        }
        CT_Boolean* mutable_date1904(){

                m_has_date1904 = true;
                if (!m_date1904)
                {
                    m_date1904 = new CT_Boolean();
                }
                return m_date1904;
            
        }
        const CT_Boolean& date1904(){

            if (m_date1904)
            {
                return *m_date1904;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_lang(){

            return m_has_lang;
        
        }
        CT_TextLanguageID* mutable_lang(){

                m_has_lang = true;
                if (!m_lang)
                {
                    m_lang = new CT_TextLanguageID();
                }
                return m_lang;
            
        }
        const CT_TextLanguageID& lang(){

            if (m_lang)
            {
                return *m_lang;
            }
            return CT_TextLanguageID::default_instance();
        
        }
        bool has_roundedCorners(){

            return m_has_roundedCorners;
        
        }
        CT_Boolean* mutable_roundedCorners(){

                m_has_roundedCorners = true;
                if (!m_roundedCorners)
                {
                    m_roundedCorners = new CT_Boolean();
                }
                return m_roundedCorners;
            
        }
        const CT_Boolean& roundedCorners(){

            if (m_roundedCorners)
            {
                return *m_roundedCorners;
            }
            return CT_Boolean::default_instance();
        
        }
        bool has_style(){

            return m_has_style;
        
        }
        CT_Style* mutable_style(){

                m_has_style = true;
                if (!m_style)
                {
                    m_style = new CT_Style();
                }
                return m_style;
            
        }
        const CT_Style& style(){

            if (m_style)
            {
                return *m_style;
            }
            return CT_Style::default_instance();
        
        }
        bool has_clrMapOvr(){

            return m_has_clrMapOvr;
        
        }
        ns_a::CT_ColorMapping* mutable_clrMapOvr(){

                m_has_clrMapOvr = true;
                if (!m_clrMapOvr)
                {
                    m_clrMapOvr = new ns_a::CT_ColorMapping();
                }
                return m_clrMapOvr;
            
        }
        const ns_a::CT_ColorMapping& clrMapOvr(){

            if (m_clrMapOvr)
            {
                return *m_clrMapOvr;
            }
            return ns_a::CT_ColorMapping::default_instance();
        
        }
        bool has_pivotSource(){

            return m_has_pivotSource;
        
        }
        CT_PivotSource* mutable_pivotSource(){

                m_has_pivotSource = true;
                if (!m_pivotSource)
                {
                    m_pivotSource = new CT_PivotSource();
                }
                return m_pivotSource;
            
        }
        const CT_PivotSource& pivotSource(){

            if (m_pivotSource)
            {
                return *m_pivotSource;
            }
            return CT_PivotSource::default_instance();
        
        }
        bool has_protection(){

            return m_has_protection;
        
        }
        CT_Protection* mutable_protection(){

                m_has_protection = true;
                if (!m_protection)
                {
                    m_protection = new CT_Protection();
                }
                return m_protection;
            
        }
        const CT_Protection& protection(){

            if (m_protection)
            {
                return *m_protection;
            }
            return CT_Protection::default_instance();
        
        }
        bool has_chart(){

            return m_has_chart;
        
        }
        CT_Chart* mutable_chart(){

                m_has_chart = true;
                if (!m_chart)
                {
                    m_chart = new CT_Chart();
                }
                return m_chart;
            
        }
        const CT_Chart& chart(){

            if (m_chart)
            {
                return *m_chart;
            }
            return CT_Chart::default_instance();
        
        }
        bool has_spPr(){

            return m_has_spPr;
        
        }
        ns_a::CT_ShapeProperties* mutable_spPr(){

                m_has_spPr = true;
                if (!m_spPr)
                {
                    m_spPr = new ns_a::CT_ShapeProperties();
                }
                return m_spPr;
            
        }
        const ns_a::CT_ShapeProperties& spPr(){

            if (m_spPr)
            {
                return *m_spPr;
            }
            return ns_a::CT_ShapeProperties::default_instance();
        
        }
        bool has_txPr(){

            return m_has_txPr;
        
        }
        ns_a::CT_TextBody* mutable_txPr(){

                m_has_txPr = true;
                if (!m_txPr)
                {
                    m_txPr = new ns_a::CT_TextBody();
                }
                return m_txPr;
            
        }
        const ns_a::CT_TextBody& txPr(){

            if (m_txPr)
            {
                return *m_txPr;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        bool has_externalData(){

            return m_has_externalData;
        
        }
        CT_ExternalData* mutable_externalData(){

                m_has_externalData = true;
                if (!m_externalData)
                {
                    m_externalData = new CT_ExternalData();
                }
                return m_externalData;
            
        }
        const CT_ExternalData& externalData(){

            if (m_externalData)
            {
                return *m_externalData;
            }
            return CT_ExternalData::default_instance();
        
        }
        bool has_printSettings(){

            return m_has_printSettings;
        
        }
        CT_PrintSettings* mutable_printSettings(){

                m_has_printSettings = true;
                if (!m_printSettings)
                {
                    m_printSettings = new CT_PrintSettings();
                }
                return m_printSettings;
            
        }
        const CT_PrintSettings& printSettings(){

            if (m_printSettings)
            {
                return *m_printSettings;
            }
            return CT_PrintSettings::default_instance();
        
        }
        bool has_userShapes(){

            return m_has_userShapes;
        
        }
        CT_RelId* mutable_userShapes(){

                m_has_userShapes = true;
                if (!m_userShapes)
                {
                    m_userShapes = new CT_RelId();
                }
                return m_userShapes;
            
        }
        const CT_RelId& userShapes(){

            if (m_userShapes)
            {
                return *m_userShapes;
            }
            return CT_RelId::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        CT_ExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new CT_ExtensionList();
                }
                return m_extLst;
            
        }
        const CT_ExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return CT_ExtensionList::default_instance();
        
        }
        void clear(){

                m_has_date1904 = false;
                
        if (m_date1904)
        {
            delete m_date1904;
            m_date1904 = NULL;
        }
    
            
                m_has_lang = false;
                
        if (m_lang)
        {
            delete m_lang;
            m_lang = NULL;
        }
    
            
                m_has_roundedCorners = false;
                
        if (m_roundedCorners)
        {
            delete m_roundedCorners;
            m_roundedCorners = NULL;
        }
    
            
                m_has_style = false;
                
        if (m_style)
        {
            delete m_style;
            m_style = NULL;
        }
    
            
                m_has_clrMapOvr = false;
                
        if (m_clrMapOvr)
        {
            delete m_clrMapOvr;
            m_clrMapOvr = NULL;
        }
    
            
                m_has_pivotSource = false;
                
        if (m_pivotSource)
        {
            delete m_pivotSource;
            m_pivotSource = NULL;
        }
    
            
                m_has_protection = false;
                
        if (m_protection)
        {
            delete m_protection;
            m_protection = NULL;
        }
    
            
                m_has_chart = false;
                
        if (m_chart)
        {
            delete m_chart;
            m_chart = NULL;
        }
    
            
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_txPr = false;
                
        if (m_txPr)
        {
            delete m_txPr;
            m_txPr = NULL;
        }
    
            
                m_has_externalData = false;
                
        if (m_externalData)
        {
            delete m_externalData;
            m_externalData = NULL;
        }
    
            
                m_has_printSettings = false;
                
        if (m_printSettings)
        {
            delete m_printSettings;
            m_printSettings = NULL;
        }
    
            
                m_has_userShapes = false;
                
        if (m_userShapes)
        {
            delete m_userShapes;
            m_userShapes = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_date1904)
                {
                    m_date1904->toXml(\d:date1904\, _outStream);;
                }
            
                if (m_has_lang)
                {
                    m_date1904->toXml(\d:lang\, _outStream);;
                }
            
                if (m_has_roundedCorners)
                {
                    m_date1904->toXml(\d:roundedCorners\, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_date1904->toXml(\d:style\, _outStream);;
                }
            
                if (m_has_clrMapOvr)
                {
                    m_date1904->toXml(\d:clrMapOvr\, _outStream);;
                }
            
                if (m_has_pivotSource)
                {
                    m_date1904->toXml(\d:pivotSource\, _outStream);;
                }
            
                if (m_has_protection)
                {
                    m_date1904->toXml(\d:protection\, _outStream);;
                }
            
                if (m_has_chart)
                {
                    m_date1904->toXml(\d:chart\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_date1904->toXml(\d:spPr\, _outStream);;
                }
            
                if (m_has_txPr)
                {
                    m_date1904->toXml(\d:txPr\, _outStream);;
                }
            
                if (m_has_externalData)
                {
                    m_date1904->toXml(\d:externalData\, _outStream);;
                }
            
                if (m_has_printSettings)
                {
                    m_date1904->toXml(\d:printSettings\, _outStream);;
                }
            
                if (m_has_userShapes)
                {
                    m_date1904->toXml(\d:userShapes\, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_date1904->toXml(\d:extLst\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ChartSpace& default_instance(){

    if (!CT_ChartSpace::default_instance_)
    {
        CT_ChartSpace::default_instance_ = new CT_ChartSpace();
    }
    return *CT_ChartSpace::default_instance_;

        }

    private:
        bool m_has_date1904 ;
        CT_Boolean* m_date1904 ;
        bool m_has_lang ;
        CT_TextLanguageID* m_lang ;
        bool m_has_roundedCorners ;
        CT_Boolean* m_roundedCorners ;
        bool m_has_style ;
        CT_Style* m_style ;
        bool m_has_clrMapOvr ;
        ns_a::CT_ColorMapping* m_clrMapOvr ;
        bool m_has_pivotSource ;
        CT_PivotSource* m_pivotSource ;
        bool m_has_protection ;
        CT_Protection* m_protection ;
        bool m_has_chart ;
        CT_Chart* m_chart ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_txPr ;
        ns_a::CT_TextBody* m_txPr ;
        bool m_has_externalData ;
        CT_ExternalData* m_externalData ;
        bool m_has_printSettings ;
        CT_PrintSettings* m_printSettings ;
        bool m_has_userShapes ;
        CT_RelId* m_userShapes ;
        bool m_has_extLst ;
        CT_ExtensionList* m_extLst ;
        static CT_ChartSpace* default_instance_ ;

    }

    class chartSpace : public CT_ChartSpace : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_ChartSpace::toXml(\chartSpace\, _outStream);
    
        }

    private:

    }

    class userShapes : public ns_cdr::CT_Drawing : public Element{
    public:
        void toXml(ostream& _outStream ){

        ns_cdr::CT_Drawing::toXml(\userShapes\, _outStream);
    
        }

    private:

    }

    class chart : public CT_RelId : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_RelId::toXml(\chart\, _outStream);
    
        }

    private:

    }

}