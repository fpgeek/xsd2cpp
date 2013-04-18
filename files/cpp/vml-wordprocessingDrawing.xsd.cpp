#include "vml-wordprocessingDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
namespace ns_w10{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_BorderType : public XSD::SimpleType{
    public:
        ST_BorderType(){
            m_has_type = false

        }
        ST_BorderType(const Type _type ){
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

        return ST_BorderType::TypeStrList[m_type];
    
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
        const ST_BorderType& default_instance(){

    if (!ST_BorderType::default_instance_)
    {
        ST_BorderType::default_instance_ = new ST_BorderType();
    }
    return *ST_BorderType::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _single_,
            _thick_,
            _double_,
            _hairline_,
            _dot_,
            _dash_,
            _dotDash_,
            _dashDotDot_,
            _triple_,
            _thinThickSmall_,
            _thickThinSmall_,
            _thickBetweenThinSmall_,
            _thinThick_,
            _thickThin_,
            _thickBetweenThin_,
            _thinThickLarge_,
            _thickThinLarge_,
            _thickBetweenThinLarge_,
            _wave_,
            _doubleWave_,
            _dashedSmall_,
            _dashDotStroked_,
            _threeDEmboss_,
            _threeDEngrave_,
            _HTMLOutset_,
            _HTMLInset_
        }

    private:
        static const string TypeStrList [];
        static ST_BorderType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BorderShadow : public XSD::SimpleType{
    public:
        ST_BorderShadow(){
            m_has_type = false

        }
        ST_BorderShadow(const Type _type ){
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

        return ST_BorderShadow::TypeStrList[m_type];
    
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
        const ST_BorderShadow& default_instance(){

    if (!ST_BorderShadow::default_instance_)
    {
        ST_BorderShadow::default_instance_ = new ST_BorderShadow();
    }
    return *ST_BorderShadow::default_instance_;

        }
        enum Type{
            _t_ = 1,
            _true_,
            _f_,
            _false_
        }

    private:
        static const string TypeStrList [];
        static ST_BorderShadow* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_WrapType : public XSD::SimpleType{
    public:
        ST_WrapType(){
            m_has_type = false

        }
        ST_WrapType(const Type _type ){
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

        return ST_WrapType::TypeStrList[m_type];
    
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
        const ST_WrapType& default_instance(){

    if (!ST_WrapType::default_instance_)
    {
        ST_WrapType::default_instance_ = new ST_WrapType();
    }
    return *ST_WrapType::default_instance_;

        }
        enum Type{
            _topAndBottom_ = 1,
            _square_,
            _none_,
            _tight_,
            _through_
        }

    private:
        static const string TypeStrList [];
        static ST_WrapType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_WrapSide : public XSD::SimpleType{
    public:
        ST_WrapSide(){
            m_has_type = false

        }
        ST_WrapSide(const Type _type ){
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

        return ST_WrapSide::TypeStrList[m_type];
    
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
        const ST_WrapSide& default_instance(){

    if (!ST_WrapSide::default_instance_)
    {
        ST_WrapSide::default_instance_ = new ST_WrapSide();
    }
    return *ST_WrapSide::default_instance_;

        }
        enum Type{
            _both_ = 1,
            _left_,
            _right_,
            _largest_
        }

    private:
        static const string TypeStrList [];
        static ST_WrapSide* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HorizontalAnchor : public XSD::SimpleType{
    public:
        ST_HorizontalAnchor(){
            m_has_type = false

        }
        ST_HorizontalAnchor(const Type _type ){
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

        return ST_HorizontalAnchor::TypeStrList[m_type];
    
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
        const ST_HorizontalAnchor& default_instance(){

    if (!ST_HorizontalAnchor::default_instance_)
    {
        ST_HorizontalAnchor::default_instance_ = new ST_HorizontalAnchor();
    }
    return *ST_HorizontalAnchor::default_instance_;

        }
        enum Type{
            _margin_ = 1,
            _page_,
            _text_,
            _char_
        }

    private:
        static const string TypeStrList [];
        static ST_HorizontalAnchor* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_VerticalAnchor : public XSD::SimpleType{
    public:
        ST_VerticalAnchor(){
            m_has_type = false

        }
        ST_VerticalAnchor(const Type _type ){
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

        return ST_VerticalAnchor::TypeStrList[m_type];
    
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
        const ST_VerticalAnchor& default_instance(){

    if (!ST_VerticalAnchor::default_instance_)
    {
        ST_VerticalAnchor::default_instance_ = new ST_VerticalAnchor();
    }
    return *ST_VerticalAnchor::default_instance_;

        }
        enum Type{
            _margin_ = 1,
            _page_,
            _text_,
            _line_
        }

    private:
        static const string TypeStrList [];
        static ST_VerticalAnchor* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_Border : public XSD::ComplexType{
    public:
        void clear(){

                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_width_attr = false;
                m_width_attr = 0;
            
                m_has_shadow_attr = false;
                
        if (m_shadow_attr)
        {
            delete m_shadow_attr;
            m_shadow_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_type_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_width_attr << \\\;
m_shadow_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Border& default_instance(){

    if (!CT_Border::default_instance_)
    {
        CT_Border::default_instance_ = new CT_Border();
    }
    return *CT_Border::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_BorderType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_BorderType(_type_attr);
        
        }
        const ST_BorderType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_BorderType::default_instance();
        
        }
        bool has_width_attr(){

            return m_has_width_attr;
        
        }
        void set_width_attr(const positiveInteger& _width_attr ){

        m_has_width_attr = true;
        m_width_attr = _width_attr;
        
        }
        const positiveInteger& width_attr(){

            return type: \positiveInteger\nname: \m_width_attr\n;
        
        }
        bool has_shadow_attr(){

            return m_has_shadow_attr;
        
        }
        void set_shadow_attr(const ST_BorderShadow& _shadow_attr ){

            m_has_shadow_attr = true;
            m_shadow_attr = new ST_BorderShadow(_shadow_attr);
        
        }
        const ST_BorderShadow& shadow_attr(){

            if (m_shadow_attr)
            {
                return *m_shadow_attr;
            }
            return ST_BorderShadow::default_instance();
        
        }

    private:
        static CT_Border* default_instance_ ;
        bool m_has_type_attr ;
        ST_BorderType* m_type_attr ;
        bool m_has_width_attr ;
        positiveInteger m_width_attr ;
        bool m_has_shadow_attr ;
        ST_BorderShadow* m_shadow_attr ;

    }

    class CT_Wrap : public XSD::ComplexType{
    public:
        void clear(){

                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_side_attr = false;
                
        if (m_side_attr)
        {
            delete m_side_attr;
            m_side_attr = NULL;
        }
    
            
                m_has_anchorx_attr = false;
                
        if (m_anchorx_attr)
        {
            delete m_anchorx_attr;
            m_anchorx_attr = NULL;
        }
    
            
                m_has_anchory_attr = false;
                
        if (m_anchory_attr)
        {
            delete m_anchory_attr;
            m_anchory_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_type_attr->toXml(_attrName, _outStream);
m_side_attr->toXml(_attrName, _outStream);
m_anchorx_attr->toXml(_attrName, _outStream);
m_anchory_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Wrap& default_instance(){

    if (!CT_Wrap::default_instance_)
    {
        CT_Wrap::default_instance_ = new CT_Wrap();
    }
    return *CT_Wrap::default_instance_;

        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_WrapType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_WrapType(_type_attr);
        
        }
        const ST_WrapType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_WrapType::default_instance();
        
        }
        bool has_side_attr(){

            return m_has_side_attr;
        
        }
        void set_side_attr(const ST_WrapSide& _side_attr ){

            m_has_side_attr = true;
            m_side_attr = new ST_WrapSide(_side_attr);
        
        }
        const ST_WrapSide& side_attr(){

            if (m_side_attr)
            {
                return *m_side_attr;
            }
            return ST_WrapSide::default_instance();
        
        }
        bool has_anchorx_attr(){

            return m_has_anchorx_attr;
        
        }
        void set_anchorx_attr(const ST_HorizontalAnchor& _anchorx_attr ){

            m_has_anchorx_attr = true;
            m_anchorx_attr = new ST_HorizontalAnchor(_anchorx_attr);
        
        }
        const ST_HorizontalAnchor& anchorx_attr(){

            if (m_anchorx_attr)
            {
                return *m_anchorx_attr;
            }
            return ST_HorizontalAnchor::default_instance();
        
        }
        bool has_anchory_attr(){

            return m_has_anchory_attr;
        
        }
        void set_anchory_attr(const ST_VerticalAnchor& _anchory_attr ){

            m_has_anchory_attr = true;
            m_anchory_attr = new ST_VerticalAnchor(_anchory_attr);
        
        }
        const ST_VerticalAnchor& anchory_attr(){

            if (m_anchory_attr)
            {
                return *m_anchory_attr;
            }
            return ST_VerticalAnchor::default_instance();
        
        }

    private:
        static CT_Wrap* default_instance_ ;
        bool m_has_type_attr ;
        ST_WrapType* m_type_attr ;
        bool m_has_side_attr ;
        ST_WrapSide* m_side_attr ;
        bool m_has_anchorx_attr ;
        ST_HorizontalAnchor* m_anchorx_attr ;
        bool m_has_anchory_attr ;
        ST_VerticalAnchor* m_anchory_attr ;

    }

    class CT_AnchorLock : public XSD::ComplexType{
    public:
        void clear(){

        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AnchorLock& default_instance(){

    if (!CT_AnchorLock::default_instance_)
    {
        CT_AnchorLock::default_instance_ = new CT_AnchorLock();
    }
    return *CT_AnchorLock::default_instance_;

        }

    private:
        static CT_AnchorLock* default_instance_ ;

    }

    class bordertop : public CT_Border : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Border::toXml(ordertop\, _outStream);
    
        }

    private:

    }

    class borderleft : public CT_Border : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Border::toXml(orderleft\, _outStream);
    
        }

    private:

    }

    class borderright : public CT_Border : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Border::toXml(orderright\, _outStream);
    
        }

    private:

    }

    class borderbottom : public CT_Border : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Border::toXml(orderbottom\, _outStream);
    
        }

    private:

    }

    class wrap : public CT_Wrap : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Wrap::toXml(\wrap\, _outStream);
    
        }

    private:

    }

    class anchorlock : public CT_AnchorLock : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_AnchorLock::toXml(nchorlock\, _outStream);
    
        }

    private:

    }

}