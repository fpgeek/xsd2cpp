#include "vml-officeDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include "vml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_o{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_AlternateMathContentType : public XSD::SimpleType{
    public:
        ST_AlternateMathContentType(){
            m_has_string = false
            m_string = 

        }
        ST_AlternateMathContentType(const XSD::string& _string ){
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
        const ST_AlternateMathContentType& default_instance(){

    if (!ST_AlternateMathContentType::default_instance_)
    {
        ST_AlternateMathContentType::default_instance_ = new ST_AlternateMathContentType();
    }
    return *ST_AlternateMathContentType::default_instance_;

        }

    private:
        static ST_AlternateMathContentType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_RType : public XSD::SimpleType{
    public:
        ST_RType(){
            m_has_type = false

        }
        ST_RType(const Type _type ){
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

        return ST_RType::TypeStrList[m_type];
    
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
        const ST_RType& default_instance(){

    if (!ST_RType::default_instance_)
    {
        ST_RType::default_instance_ = new ST_RType();
    }
    return *ST_RType::default_instance_;

        }
        enum Type{
            _arc_ = 1,
            _callout_,
            _connector_,
            _align_
        }

    private:
        static const string TypeStrList [];
        static ST_RType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_How : public XSD::SimpleType{
    public:
        ST_How(){
            m_has_type = false

        }
        ST_How(const Type _type ){
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

        return ST_How::TypeStrList[m_type];
    
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
        const ST_How& default_instance(){

    if (!ST_How::default_instance_)
    {
        ST_How::default_instance_ = new ST_How();
    }
    return *ST_How::default_instance_;

        }
        enum Type{
            _top_ = 1,
            _middle_,
            _bottom_,
            _left_,
            _center_,
            _right_
        }

    private:
        static const string TypeStrList [];
        static ST_How* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_BWMode : public XSD::SimpleType{
    public:
        ST_BWMode(){
            m_has_type = false

        }
        ST_BWMode(const Type _type ){
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

        return ST_BWMode::TypeStrList[m_type];
    
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
        const ST_BWMode& default_instance(){

    if (!ST_BWMode::default_instance_)
    {
        ST_BWMode::default_instance_ = new ST_BWMode();
    }
    return *ST_BWMode::default_instance_;

        }
        enum Type{
            _color_ = 1,
            _auto_,
            _grayScale_,
            _lightGrayscale_,
            _inverseGray_,
            _grayOutline_,
            _highContrast_,
            _black_,
            _white_,
            _hide_,
            _undrawn_,
            _blackTextAndLines_
        }

    private:
        static const string TypeStrList [];
        static ST_BWMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ScreenSize : public XSD::SimpleType{
    public:
        ST_ScreenSize(){
            m_has_type = false

        }
        ST_ScreenSize(const Type _type ){
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

        return ST_ScreenSize::TypeStrList[m_type];
    
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
        const ST_ScreenSize& default_instance(){

    if (!ST_ScreenSize::default_instance_)
    {
        ST_ScreenSize::default_instance_ = new ST_ScreenSize();
    }
    return *ST_ScreenSize::default_instance_;

        }
        enum Type{
            _544,376_ = 1,
            _640,480_,
            _720,512_,
            _800,600_,
            _1024,768_,
            _1152,862_
        }

    private:
        static const string TypeStrList [];
        static ST_ScreenSize* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_InsetMode : public XSD::SimpleType{
    public:
        ST_InsetMode(){
            m_has_type = false

        }
        ST_InsetMode(const Type _type ){
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

        return ST_InsetMode::TypeStrList[m_type];
    
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
        const ST_InsetMode& default_instance(){

    if (!ST_InsetMode::default_instance_)
    {
        ST_InsetMode::default_instance_ = new ST_InsetMode();
    }
    return *ST_InsetMode::default_instance_;

        }
        enum Type{
            _auto_ = 1,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_InsetMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ColorMode : public XSD::SimpleType{
    public:
        ST_ColorMode(){
            m_has_type = false

        }
        ST_ColorMode(const Type _type ){
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

        return ST_ColorMode::TypeStrList[m_type];
    
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
        const ST_ColorMode& default_instance(){

    if (!ST_ColorMode::default_instance_)
    {
        ST_ColorMode::default_instance_ = new ST_ColorMode();
    }
    return *ST_ColorMode::default_instance_;

        }
        enum Type{
            _auto_ = 1,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_ColorMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ContentType : public XSD::SimpleType{
    public:
        ST_ContentType(){
            m_has_string = false
            m_string = 

        }
        ST_ContentType(const XSD::string& _string ){
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
        const ST_ContentType& default_instance(){

    if (!ST_ContentType::default_instance_)
    {
        ST_ContentType::default_instance_ = new ST_ContentType();
    }
    return *ST_ContentType::default_instance_;

        }

    private:
        static ST_ContentType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_DiagramLayout : public XSD::SimpleType{
    public:
        ST_DiagramLayout(){
            m_has_type = false

        }
        ST_DiagramLayout(const Type _type ){
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

        return ST_DiagramLayout::TypeStrList[m_type];
    
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
        const ST_DiagramLayout& default_instance(){

    if (!ST_DiagramLayout::default_instance_)
    {
        ST_DiagramLayout::default_instance_ = new ST_DiagramLayout();
    }
    return *ST_DiagramLayout::default_instance_;

        }
        enum Type{
            _0_ = 1,
            _1_,
            _2_,
            _3_
        }

    private:
        static const string TypeStrList [];
        static ST_DiagramLayout* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ExtrusionType : public XSD::SimpleType{
    public:
        ST_ExtrusionType(){
            m_has_type = false

        }
        ST_ExtrusionType(const Type _type ){
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

        return ST_ExtrusionType::TypeStrList[m_type];
    
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
        const ST_ExtrusionType& default_instance(){

    if (!ST_ExtrusionType::default_instance_)
    {
        ST_ExtrusionType::default_instance_ = new ST_ExtrusionType();
    }
    return *ST_ExtrusionType::default_instance_;

        }
        enum Type{
            _perspective_ = 1,
            _parallel_
        }

    private:
        static const string TypeStrList [];
        static ST_ExtrusionType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ExtrusionRender : public XSD::SimpleType{
    public:
        ST_ExtrusionRender(){
            m_has_type = false

        }
        ST_ExtrusionRender(const Type _type ){
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

        return ST_ExtrusionRender::TypeStrList[m_type];
    
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
        const ST_ExtrusionRender& default_instance(){

    if (!ST_ExtrusionRender::default_instance_)
    {
        ST_ExtrusionRender::default_instance_ = new ST_ExtrusionRender();
    }
    return *ST_ExtrusionRender::default_instance_;

        }
        enum Type{
            _solid_ = 1,
            _wireFrame_,
            _boundingCube_
        }

    private:
        static const string TypeStrList [];
        static ST_ExtrusionRender* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ExtrusionPlane : public XSD::SimpleType{
    public:
        ST_ExtrusionPlane(){
            m_has_type = false

        }
        ST_ExtrusionPlane(const Type _type ){
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

        return ST_ExtrusionPlane::TypeStrList[m_type];
    
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
        const ST_ExtrusionPlane& default_instance(){

    if (!ST_ExtrusionPlane::default_instance_)
    {
        ST_ExtrusionPlane::default_instance_ = new ST_ExtrusionPlane();
    }
    return *ST_ExtrusionPlane::default_instance_;

        }
        enum Type{
            _XY_ = 1,
            _ZX_,
            _YZ_
        }

    private:
        static const string TypeStrList [];
        static ST_ExtrusionPlane* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_Angle : public XSD::SimpleType{
    public:
        ST_Angle(){
            m_has_type = false

        }
        ST_Angle(const Type _type ){
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

        return ST_Angle::TypeStrList[m_type];
    
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
        const ST_Angle& default_instance(){

    if (!ST_Angle::default_instance_)
    {
        ST_Angle::default_instance_ = new ST_Angle();
    }
    return *ST_Angle::default_instance_;

        }
        enum Type{
            _any_ = 1,
            _30_,
            _45_,
            _60_,
            _90_,
            _auto_
        }

    private:
        static const string TypeStrList [];
        static ST_Angle* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_CalloutDrop : public XSD::SimpleType{
    public:
        ST_CalloutDrop(){
            m_has_string = false
            m_string = 

        }
        ST_CalloutDrop(const XSD::string& _string ){
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
        const ST_CalloutDrop& default_instance(){

    if (!ST_CalloutDrop::default_instance_)
    {
        ST_CalloutDrop::default_instance_ = new ST_CalloutDrop();
    }
    return *ST_CalloutDrop::default_instance_;

        }

    private:
        static ST_CalloutDrop* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_CalloutPlacement : public XSD::SimpleType{
    public:
        ST_CalloutPlacement(){
            m_has_type = false

        }
        ST_CalloutPlacement(const Type _type ){
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

        return ST_CalloutPlacement::TypeStrList[m_type];
    
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
        const ST_CalloutPlacement& default_instance(){

    if (!ST_CalloutPlacement::default_instance_)
    {
        ST_CalloutPlacement::default_instance_ = new ST_CalloutPlacement();
    }
    return *ST_CalloutPlacement::default_instance_;

        }
        enum Type{
            _top_ = 1,
            _center_,
            _bottom_,
            _user_
        }

    private:
        static const string TypeStrList [];
        static ST_CalloutPlacement* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConnectorType : public XSD::SimpleType{
    public:
        ST_ConnectorType(){
            m_has_type = false

        }
        ST_ConnectorType(const Type _type ){
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

        return ST_ConnectorType::TypeStrList[m_type];
    
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
        const ST_ConnectorType& default_instance(){

    if (!ST_ConnectorType::default_instance_)
    {
        ST_ConnectorType::default_instance_ = new ST_ConnectorType();
    }
    return *ST_ConnectorType::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _straight_,
            _elbow_,
            _curved_
        }

    private:
        static const string TypeStrList [];
        static ST_ConnectorType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_HrAlign : public XSD::SimpleType{
    public:
        ST_HrAlign(){
            m_has_type = false

        }
        ST_HrAlign(const Type _type ){
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

        return ST_HrAlign::TypeStrList[m_type];
    
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
        const ST_HrAlign& default_instance(){

    if (!ST_HrAlign::default_instance_)
    {
        ST_HrAlign::default_instance_ = new ST_HrAlign();
    }
    return *ST_HrAlign::default_instance_;

        }
        enum Type{
            _left_ = 1,
            _right_,
            _center_
        }

    private:
        static const string TypeStrList [];
        static ST_HrAlign* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_ConnectType : public XSD::SimpleType{
    public:
        ST_ConnectType(){
            m_has_type = false

        }
        ST_ConnectType(const Type _type ){
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

        return ST_ConnectType::TypeStrList[m_type];
    
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
        const ST_ConnectType& default_instance(){

    if (!ST_ConnectType::default_instance_)
    {
        ST_ConnectType::default_instance_ = new ST_ConnectType();
    }
    return *ST_ConnectType::default_instance_;

        }
        enum Type{
            _none_ = 1,
            _rect_,
            _segments_,
            _custom_
        }

    private:
        static const string TypeStrList [];
        static ST_ConnectType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_OLELinkType : public XSD::SimpleType{
    public:
        ST_OLELinkType(){
            m_has_string = false
            m_string = 

        }
        ST_OLELinkType(const XSD::string& _string ){
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
        const ST_OLELinkType& default_instance(){

    if (!ST_OLELinkType::default_instance_)
    {
        ST_OLELinkType::default_instance_ = new ST_OLELinkType();
    }
    return *ST_OLELinkType::default_instance_;

        }

    private:
        static ST_OLELinkType* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class ST_OLEType : public XSD::SimpleType{
    public:
        ST_OLEType(){
            m_has_type = false

        }
        ST_OLEType(const Type _type ){
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

        return ST_OLEType::TypeStrList[m_type];
    
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
        const ST_OLEType& default_instance(){

    if (!ST_OLEType::default_instance_)
    {
        ST_OLEType::default_instance_ = new ST_OLEType();
    }
    return *ST_OLEType::default_instance_;

        }
        enum Type{
            _Embed_ = 1,
            _Link_
        }

    private:
        static const string TypeStrList [];
        static ST_OLEType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_OLEDrawAspect : public XSD::SimpleType{
    public:
        ST_OLEDrawAspect(){
            m_has_type = false

        }
        ST_OLEDrawAspect(const Type _type ){
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

        return ST_OLEDrawAspect::TypeStrList[m_type];
    
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
        const ST_OLEDrawAspect& default_instance(){

    if (!ST_OLEDrawAspect::default_instance_)
    {
        ST_OLEDrawAspect::default_instance_ = new ST_OLEDrawAspect();
    }
    return *ST_OLEDrawAspect::default_instance_;

        }
        enum Type{
            _Content_ = 1,
            _Icon_
        }

    private:
        static const string TypeStrList [];
        static ST_OLEDrawAspect* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_OLEUpdateMode : public XSD::SimpleType{
    public:
        ST_OLEUpdateMode(){
            m_has_type = false

        }
        ST_OLEUpdateMode(const Type _type ){
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

        return ST_OLEUpdateMode::TypeStrList[m_type];
    
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
        const ST_OLEUpdateMode& default_instance(){

    if (!ST_OLEUpdateMode::default_instance_)
    {
        ST_OLEUpdateMode::default_instance_ = new ST_OLEUpdateMode();
    }
    return *ST_OLEUpdateMode::default_instance_;

        }
        enum Type{
            _Always_ = 1,
            _OnCall_
        }

    private:
        static const string TypeStrList [];
        static ST_OLEUpdateMode* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_FillType : public XSD::SimpleType{
    public:
        ST_FillType(){
            m_has_type = false

        }
        ST_FillType(const Type _type ){
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

        return ST_FillType::TypeStrList[m_type];
    
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
        const ST_FillType& default_instance(){

    if (!ST_FillType::default_instance_)
    {
        ST_FillType::default_instance_ = new ST_FillType();
    }
    return *ST_FillType::default_instance_;

        }
        enum Type{
            _gradientCenter_ = 1,
            _solid_,
            _pattern_,
            _tile_,
            _frame_,
            _gradientUnscaled_,
            _gradientRadial_,
            _gradient_,
            _background_
        }

    private:
        static const string TypeStrList [];
        static ST_FillType* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_ShapeDefaults : public XSD::ComplexType{
    public:
        bool has_fill(){

            return m_has_fill;
        
        }
        CT_Fill* mutable_fill(){

                m_has_fill = true;
                if (!m_fill)
                {
                    m_fill = new CT_Fill();
                }
                return m_fill;
            
        }
        const CT_Fill& fill(){

            if (m_fill)
            {
                return *m_fill;
            }
            return CT_Fill::default_instance();
        
        }
        bool has_stroke(){

            return m_has_stroke;
        
        }
        CT_Stroke* mutable_stroke(){

                m_has_stroke = true;
                if (!m_stroke)
                {
                    m_stroke = new CT_Stroke();
                }
                return m_stroke;
            
        }
        const CT_Stroke& stroke(){

            if (m_stroke)
            {
                return *m_stroke;
            }
            return CT_Stroke::default_instance();
        
        }
        bool has_textbox(){

            return m_has_textbox;
        
        }
        CT_Textbox* mutable_textbox(){

                m_has_textbox = true;
                if (!m_textbox)
                {
                    m_textbox = new CT_Textbox();
                }
                return m_textbox;
            
        }
        const CT_Textbox& textbox(){

            if (m_textbox)
            {
                return *m_textbox;
            }
            return CT_Textbox::default_instance();
        
        }
        bool has_shadow(){

            return m_has_shadow;
        
        }
        CT_Shadow* mutable_shadow(){

                m_has_shadow = true;
                if (!m_shadow)
                {
                    m_shadow = new CT_Shadow();
                }
                return m_shadow;
            
        }
        const CT_Shadow& shadow(){

            if (m_shadow)
            {
                return *m_shadow;
            }
            return CT_Shadow::default_instance();
        
        }
        bool has_skew(){

            return m_has_skew;
        
        }
        CT_Skew* mutable_skew(){

                m_has_skew = true;
                if (!m_skew)
                {
                    m_skew = new CT_Skew();
                }
                return m_skew;
            
        }
        const CT_Skew& skew(){

            if (m_skew)
            {
                return *m_skew;
            }
            return CT_Skew::default_instance();
        
        }
        bool has_extrusion(){

            return m_has_extrusion;
        
        }
        CT_Extrusion* mutable_extrusion(){

                m_has_extrusion = true;
                if (!m_extrusion)
                {
                    m_extrusion = new CT_Extrusion();
                }
                return m_extrusion;
            
        }
        const CT_Extrusion& extrusion(){

            if (m_extrusion)
            {
                return *m_extrusion;
            }
            return CT_Extrusion::default_instance();
        
        }
        bool has_callout(){

            return m_has_callout;
        
        }
        CT_Callout* mutable_callout(){

                m_has_callout = true;
                if (!m_callout)
                {
                    m_callout = new CT_Callout();
                }
                return m_callout;
            
        }
        const CT_Callout& callout(){

            if (m_callout)
            {
                return *m_callout;
            }
            return CT_Callout::default_instance();
        
        }
        bool has_lock(){

            return m_has_lock;
        
        }
        CT_Lock* mutable_lock(){

                m_has_lock = true;
                if (!m_lock)
                {
                    m_lock = new CT_Lock();
                }
                return m_lock;
            
        }
        const CT_Lock& lock(){

            if (m_lock)
            {
                return *m_lock;
            }
            return CT_Lock::default_instance();
        
        }
        bool has_colormru(){

            return m_has_colormru;
        
        }
        CT_ColorMru* mutable_colormru(){

                m_has_colormru = true;
                if (!m_colormru)
                {
                    m_colormru = new CT_ColorMru();
                }
                return m_colormru;
            
        }
        const CT_ColorMru& colormru(){

            if (m_colormru)
            {
                return *m_colormru;
            }
            return CT_ColorMru::default_instance();
        
        }
        bool has_colormenu(){

            return m_has_colormenu;
        
        }
        CT_ColorMenu* mutable_colormenu(){

                m_has_colormenu = true;
                if (!m_colormenu)
                {
                    m_colormenu = new CT_ColorMenu();
                }
                return m_colormenu;
            
        }
        const CT_ColorMenu& colormenu(){

            if (m_colormenu)
            {
                return *m_colormenu;
            }
            return CT_ColorMenu::default_instance();
        
        }
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_spidmax_attr = false;
                m_spidmax_attr = 0;
            
                m_has_style_attr = false;
                m_style_attr.clear();
            
                m_has_fill_attr = false;
                
        if (m_fill_attr)
        {
            delete m_fill_attr;
            m_fill_attr = NULL;
        }
    
            
                m_has_fillcolor_attr = false;
                
        if (m_fillcolor_attr)
        {
            delete m_fillcolor_attr;
            m_fillcolor_attr = NULL;
        }
    
            
                m_has_stroke_attr = false;
                
        if (m_stroke_attr)
        {
            delete m_stroke_attr;
            m_stroke_attr = NULL;
        }
    
            
                m_has_strokecolor_attr = false;
                
        if (m_strokecolor_attr)
        {
            delete m_strokecolor_attr;
            m_strokecolor_attr = NULL;
        }
    
            
                m_has_allowincell_attr = false;
                
        if (m_allowincell_attr)
        {
            delete m_allowincell_attr;
            m_allowincell_attr = NULL;
        }
    
            
                m_has_fill = false;
                
        if (m_fill)
        {
            delete m_fill;
            m_fill = NULL;
        }
    
            
                m_has_stroke = false;
                
        if (m_stroke)
        {
            delete m_stroke;
            m_stroke = NULL;
        }
    
            
                m_has_textbox = false;
                
        if (m_textbox)
        {
            delete m_textbox;
            m_textbox = NULL;
        }
    
            
                m_has_shadow = false;
                
        if (m_shadow)
        {
            delete m_shadow;
            m_shadow = NULL;
        }
    
            
                m_has_skew = false;
                
        if (m_skew)
        {
            delete m_skew;
            m_skew = NULL;
        }
    
            
                m_has_extrusion = false;
                
        if (m_extrusion)
        {
            delete m_extrusion;
            m_extrusion = NULL;
        }
    
            
                m_has_callout = false;
                
        if (m_callout)
        {
            delete m_callout;
            m_callout = NULL;
        }
    
            
                m_has_lock = false;
                
        if (m_lock)
        {
            delete m_lock;
            m_lock = NULL;
        }
    
            
                m_has_colormru = false;
                
        if (m_colormru)
        {
            delete m_colormru;
            m_colormru = NULL;
        }
    
            
                m_has_colormenu = false;
                
        if (m_colormenu)
        {
            delete m_colormenu;
            m_colormenu = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_spidmax_attr << \\\;
_outStream << _attrName << \=\\ << m_style_attr << \\\;
m_fill_attr->toXml(_attrName, _outStream);
m_fillcolor_attr->toXml(_attrName, _outStream);
m_stroke_attr->toXml(_attrName, _outStream);
m_strokecolor_attr->toXml(_attrName, _outStream);
m_allowincell_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_fill)
                {
                    m_fill->toXml(fill, _outStream);;
                }
            
                if (m_has_stroke)
                {
                    m_fill->toXml(stroke, _outStream);;
                }
            
                if (m_has_textbox)
                {
                    m_fill->toXml(textbox, _outStream);;
                }
            
                if (m_has_shadow)
                {
                    m_fill->toXml(shadow, _outStream);;
                }
            
                if (m_has_skew)
                {
                    m_fill->toXml(skew, _outStream);;
                }
            
                if (m_has_extrusion)
                {
                    m_fill->toXml(extrusion, _outStream);;
                }
            
                if (m_has_callout)
                {
                    m_fill->toXml(callout, _outStream);;
                }
            
                if (m_has_lock)
                {
                    m_fill->toXml(lock, _outStream);;
                }
            
                if (m_has_colormru)
                {
                    m_fill->toXml(colormru, _outStream);;
                }
            
                if (m_has_colormenu)
                {
                    m_fill->toXml(colormenu, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ShapeDefaults& default_instance(){

    if (!CT_ShapeDefaults::default_instance_)
    {
        CT_ShapeDefaults::default_instance_ = new CT_ShapeDefaults();
    }
    return *CT_ShapeDefaults::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_spidmax_attr(){

            return m_has_spidmax_attr;
        
        }
        void set_spidmax_attr(const integer& _spidmax_attr ){

        m_has_spidmax_attr = true;
        m_spidmax_attr = _spidmax_attr;
        
        }
        const integer& spidmax_attr(){

            return type: \integer\nname: \m_spidmax_attr\n;
        
        }
        bool has_style_attr(){

            return m_has_style_attr;
        
        }
        void set_style_attr(const string& _style_attr ){

        m_has_style_attr = true;
        m_style_attr = _style_attr;
        
        }
        const string& style_attr(){

            return type: \string\nname: \m_style_attr\n;
        
        }
        bool has_fill_attr(){

            return m_has_fill_attr;
        
        }
        void set_fill_attr(const ns_s::ST_TrueFalse& _fill_attr ){

            m_has_fill_attr = true;
            m_fill_attr = new ns_s::ST_TrueFalse(_fill_attr);
        
        }
        const ns_s::ST_TrueFalse& fill_attr(){

            if (m_fill_attr)
            {
                return *m_fill_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_fillcolor_attr(){

            return m_has_fillcolor_attr;
        
        }
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr ){

            m_has_fillcolor_attr = true;
            m_fillcolor_attr = new ns_s::ST_ColorType(_fillcolor_attr);
        
        }
        const ns_s::ST_ColorType& fillcolor_attr(){

            if (m_fillcolor_attr)
            {
                return *m_fillcolor_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }
        bool has_stroke_attr(){

            return m_has_stroke_attr;
        
        }
        void set_stroke_attr(const ns_s::ST_TrueFalse& _stroke_attr ){

            m_has_stroke_attr = true;
            m_stroke_attr = new ns_s::ST_TrueFalse(_stroke_attr);
        
        }
        const ns_s::ST_TrueFalse& stroke_attr(){

            if (m_stroke_attr)
            {
                return *m_stroke_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_strokecolor_attr(){

            return m_has_strokecolor_attr;
        
        }
        void set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr ){

            m_has_strokecolor_attr = true;
            m_strokecolor_attr = new ns_s::ST_ColorType(_strokecolor_attr);
        
        }
        const ns_s::ST_ColorType& strokecolor_attr(){

            if (m_strokecolor_attr)
            {
                return *m_strokecolor_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }
        bool has_allowincell_attr(){

            return m_has_allowincell_attr;
        
        }
        void set_allowincell_attr(const ns_s::ST_TrueFalse& _allowincell_attr ){

            m_has_allowincell_attr = true;
            m_allowincell_attr = new ns_s::ST_TrueFalse(_allowincell_attr);
        
        }
        const ns_s::ST_TrueFalse& allowincell_attr(){

            if (m_allowincell_attr)
            {
                return *m_allowincell_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }

    private:
        bool m_has_fill ;
        CT_Fill* m_fill ;
        bool m_has_stroke ;
        CT_Stroke* m_stroke ;
        bool m_has_textbox ;
        CT_Textbox* m_textbox ;
        bool m_has_shadow ;
        CT_Shadow* m_shadow ;
        bool m_has_skew ;
        CT_Skew* m_skew ;
        bool m_has_extrusion ;
        CT_Extrusion* m_extrusion ;
        bool m_has_callout ;
        CT_Callout* m_callout ;
        bool m_has_lock ;
        CT_Lock* m_lock ;
        bool m_has_colormru ;
        CT_ColorMru* m_colormru ;
        bool m_has_colormenu ;
        CT_ColorMenu* m_colormenu ;
        static CT_ShapeDefaults* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_spidmax_attr ;
        integer m_spidmax_attr ;
        bool m_has_style_attr ;
        string m_style_attr ;
        bool m_has_fill_attr ;
        ns_s::ST_TrueFalse* m_fill_attr ;
        bool m_has_fillcolor_attr ;
        ns_s::ST_ColorType* m_fillcolor_attr ;
        bool m_has_stroke_attr ;
        ns_s::ST_TrueFalse* m_stroke_attr ;
        bool m_has_strokecolor_attr ;
        ns_s::ST_ColorType* m_strokecolor_attr ;
        bool m_has_allowincell_attr ;
        ns_s::ST_TrueFalse* m_allowincell_attr ;

    }

    class CT_Ink : public XSD::ComplexType{
    public:
        void clear(){

                m_has_i_attr = false;
                m_i_attr.clear();
            
                m_has_annotation_attr = false;
                
        if (m_annotation_attr)
        {
            delete m_annotation_attr;
            m_annotation_attr = NULL;
        }
    
            
                m_has_contentType_attr = false;
                
        if (m_contentType_attr)
        {
            delete m_contentType_attr;
            m_contentType_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_i_attr << \\\;
m_annotation_attr->toXml(_attrName, _outStream);
m_contentType_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Ink& default_instance(){

    if (!CT_Ink::default_instance_)
    {
        CT_Ink::default_instance_ = new CT_Ink();
    }
    return *CT_Ink::default_instance_;

        }
        bool has_i_attr(){

            return m_has_i_attr;
        
        }
        void set_i_attr(const string& _i_attr ){

        m_has_i_attr = true;
        m_i_attr = _i_attr;
        
        }
        const string& i_attr(){

            return type: \string\nname: \m_i_attr\n;
        
        }
        bool has_annotation_attr(){

            return m_has_annotation_attr;
        
        }
        void set_annotation_attr(const ns_s::ST_TrueFalse& _annotation_attr ){

            m_has_annotation_attr = true;
            m_annotation_attr = new ns_s::ST_TrueFalse(_annotation_attr);
        
        }
        const ns_s::ST_TrueFalse& annotation_attr(){

            if (m_annotation_attr)
            {
                return *m_annotation_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_contentType_attr(){

            return m_has_contentType_attr;
        
        }
        void set_contentType_attr(const ST_ContentType& _contentType_attr ){

            m_has_contentType_attr = true;
            m_contentType_attr = new ST_ContentType(_contentType_attr);
        
        }
        const ST_ContentType& contentType_attr(){

            if (m_contentType_attr)
            {
                return *m_contentType_attr;
            }
            return ST_ContentType::default_instance();
        
        }

    private:
        static CT_Ink* default_instance_ ;
        bool m_has_i_attr ;
        string m_i_attr ;
        bool m_has_annotation_attr ;
        ns_s::ST_TrueFalse* m_annotation_attr ;
        bool m_has_contentType_attr ;
        ST_ContentType* m_contentType_attr ;

    }

    class CT_SignatureLine : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_issignatureline_attr = false;
                
        if (m_issignatureline_attr)
        {
            delete m_issignatureline_attr;
            m_issignatureline_attr = NULL;
        }
    
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_provid_attr = false;
                
        if (m_provid_attr)
        {
            delete m_provid_attr;
            m_provid_attr = NULL;
        }
    
            
                m_has_signinginstructionsset_attr = false;
                
        if (m_signinginstructionsset_attr)
        {
            delete m_signinginstructionsset_attr;
            m_signinginstructionsset_attr = NULL;
        }
    
            
                m_has_allowcomments_attr = false;
                
        if (m_allowcomments_attr)
        {
            delete m_allowcomments_attr;
            m_allowcomments_attr = NULL;
        }
    
            
                m_has_showsigndate_attr = false;
                
        if (m_showsigndate_attr)
        {
            delete m_showsigndate_attr;
            m_showsigndate_attr = NULL;
        }
    
            
                m_has_suggestedsigner_attr = false;
                m_suggestedsigner_attr.clear();
            
                m_has_suggestedsigner2_attr = false;
                m_suggestedsigner2_attr.clear();
            
                m_has_suggestedsigneremail_attr = false;
                m_suggestedsigneremail_attr.clear();
            
                m_has_signinginstructions_attr = false;
                m_signinginstructions_attr.clear();
            
                m_has_addlxml_attr = false;
                m_addlxml_attr.clear();
            
                m_has_sigprovurl_attr = false;
                m_sigprovurl_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
m_issignatureline_attr->toXml(_attrName, _outStream);
m_id_attr->toXml(_attrName, _outStream);
m_provid_attr->toXml(_attrName, _outStream);
m_signinginstructionsset_attr->toXml(_attrName, _outStream);
m_allowcomments_attr->toXml(_attrName, _outStream);
m_showsigndate_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_suggestedsigner_attr << \\\;
_outStream << _attrName << \=\\ << m_suggestedsigner2_attr << \\\;
_outStream << _attrName << \=\\ << m_suggestedsigneremail_attr << \\\;
_outStream << _attrName << \=\\ << m_signinginstructions_attr << \\\;
_outStream << _attrName << \=\\ << m_addlxml_attr << \\\;
_outStream << _attrName << \=\\ << m_sigprovurl_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_SignatureLine& default_instance(){

    if (!CT_SignatureLine::default_instance_)
    {
        CT_SignatureLine::default_instance_ = new CT_SignatureLine();
    }
    return *CT_SignatureLine::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_issignatureline_attr(){

            return m_has_issignatureline_attr;
        
        }
        void set_issignatureline_attr(const ns_s::ST_TrueFalse& _issignatureline_attr ){

            m_has_issignatureline_attr = true;
            m_issignatureline_attr = new ns_s::ST_TrueFalse(_issignatureline_attr);
        
        }
        const ns_s::ST_TrueFalse& issignatureline_attr(){

            if (m_issignatureline_attr)
            {
                return *m_issignatureline_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const ns_s::ST_Guid& _id_attr ){

            m_has_id_attr = true;
            m_id_attr = new ns_s::ST_Guid(_id_attr);
        
        }
        const ns_s::ST_Guid& id_attr(){

            if (m_id_attr)
            {
                return *m_id_attr;
            }
            return ns_s::ST_Guid::default_instance();
        
        }
        bool has_provid_attr(){

            return m_has_provid_attr;
        
        }
        void set_provid_attr(const ns_s::ST_Guid& _provid_attr ){

            m_has_provid_attr = true;
            m_provid_attr = new ns_s::ST_Guid(_provid_attr);
        
        }
        const ns_s::ST_Guid& provid_attr(){

            if (m_provid_attr)
            {
                return *m_provid_attr;
            }
            return ns_s::ST_Guid::default_instance();
        
        }
        bool has_signinginstructionsset_attr(){

            return m_has_signinginstructionsset_attr;
        
        }
        void set_signinginstructionsset_attr(const ns_s::ST_TrueFalse& _signinginstructionsset_attr ){

            m_has_signinginstructionsset_attr = true;
            m_signinginstructionsset_attr = new ns_s::ST_TrueFalse(_signinginstructionsset_attr);
        
        }
        const ns_s::ST_TrueFalse& signinginstructionsset_attr(){

            if (m_signinginstructionsset_attr)
            {
                return *m_signinginstructionsset_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_allowcomments_attr(){

            return m_has_allowcomments_attr;
        
        }
        void set_allowcomments_attr(const ns_s::ST_TrueFalse& _allowcomments_attr ){

            m_has_allowcomments_attr = true;
            m_allowcomments_attr = new ns_s::ST_TrueFalse(_allowcomments_attr);
        
        }
        const ns_s::ST_TrueFalse& allowcomments_attr(){

            if (m_allowcomments_attr)
            {
                return *m_allowcomments_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_showsigndate_attr(){

            return m_has_showsigndate_attr;
        
        }
        void set_showsigndate_attr(const ns_s::ST_TrueFalse& _showsigndate_attr ){

            m_has_showsigndate_attr = true;
            m_showsigndate_attr = new ns_s::ST_TrueFalse(_showsigndate_attr);
        
        }
        const ns_s::ST_TrueFalse& showsigndate_attr(){

            if (m_showsigndate_attr)
            {
                return *m_showsigndate_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_suggestedsigner_attr(){

            return m_has_suggestedsigner_attr;
        
        }
        void set_suggestedsigner_attr(const string& _suggestedsigner_attr ){

        m_has_suggestedsigner_attr = true;
        m_suggestedsigner_attr = _suggestedsigner_attr;
        
        }
        const string& suggestedsigner_attr(){

            return type: \string\nname: \m_suggestedsigner_attr\n;
        
        }
        bool has_suggestedsigner2_attr(){

            return m_has_suggestedsigner2_attr;
        
        }
        void set_suggestedsigner2_attr(const string& _suggestedsigner2_attr ){

        m_has_suggestedsigner2_attr = true;
        m_suggestedsigner2_attr = _suggestedsigner2_attr;
        
        }
        const string& suggestedsigner2_attr(){

            return type: \string\nname: \m_suggestedsigner2_attr\n;
        
        }
        bool has_suggestedsigneremail_attr(){

            return m_has_suggestedsigneremail_attr;
        
        }
        void set_suggestedsigneremail_attr(const string& _suggestedsigneremail_attr ){

        m_has_suggestedsigneremail_attr = true;
        m_suggestedsigneremail_attr = _suggestedsigneremail_attr;
        
        }
        const string& suggestedsigneremail_attr(){

            return type: \string\nname: \m_suggestedsigneremail_attr\n;
        
        }
        bool has_signinginstructions_attr(){

            return m_has_signinginstructions_attr;
        
        }
        void set_signinginstructions_attr(const string& _signinginstructions_attr ){

        m_has_signinginstructions_attr = true;
        m_signinginstructions_attr = _signinginstructions_attr;
        
        }
        const string& signinginstructions_attr(){

            return type: \string\nname: \m_signinginstructions_attr\n;
        
        }
        bool has_addlxml_attr(){

            return m_has_addlxml_attr;
        
        }
        void set_addlxml_attr(const string& _addlxml_attr ){

        m_has_addlxml_attr = true;
        m_addlxml_attr = _addlxml_attr;
        
        }
        const string& addlxml_attr(){

            return type: \string\nname: \m_addlxml_attr\n;
        
        }
        bool has_sigprovurl_attr(){

            return m_has_sigprovurl_attr;
        
        }
        void set_sigprovurl_attr(const string& _sigprovurl_attr ){

        m_has_sigprovurl_attr = true;
        m_sigprovurl_attr = _sigprovurl_attr;
        
        }
        const string& sigprovurl_attr(){

            return type: \string\nname: \m_sigprovurl_attr\n;
        
        }

    private:
        static CT_SignatureLine* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_issignatureline_attr ;
        ns_s::ST_TrueFalse* m_issignatureline_attr ;
        bool m_has_id_attr ;
        ns_s::ST_Guid* m_id_attr ;
        bool m_has_provid_attr ;
        ns_s::ST_Guid* m_provid_attr ;
        bool m_has_signinginstructionsset_attr ;
        ns_s::ST_TrueFalse* m_signinginstructionsset_attr ;
        bool m_has_allowcomments_attr ;
        ns_s::ST_TrueFalse* m_allowcomments_attr ;
        bool m_has_showsigndate_attr ;
        ns_s::ST_TrueFalse* m_showsigndate_attr ;
        bool m_has_suggestedsigner_attr ;
        string m_suggestedsigner_attr ;
        bool m_has_suggestedsigner2_attr ;
        string m_suggestedsigner2_attr ;
        bool m_has_suggestedsigneremail_attr ;
        string m_suggestedsigneremail_attr ;
        bool m_has_signinginstructions_attr ;
        string m_signinginstructions_attr ;
        bool m_has_addlxml_attr ;
        string m_addlxml_attr ;
        bool m_has_sigprovurl_attr ;
        string m_sigprovurl_attr ;

    }

    class CT_ShapeLayout : public XSD::ComplexType{
    public:
        bool has_idmap(){

            return m_has_idmap;
        
        }
        CT_IdMap* mutable_idmap(){

                m_has_idmap = true;
                if (!m_idmap)
                {
                    m_idmap = new CT_IdMap();
                }
                return m_idmap;
            
        }
        const CT_IdMap& idmap(){

            if (m_idmap)
            {
                return *m_idmap;
            }
            return CT_IdMap::default_instance();
        
        }
        bool has_regrouptable(){

            return m_has_regrouptable;
        
        }
        CT_RegroupTable* mutable_regrouptable(){

                m_has_regrouptable = true;
                if (!m_regrouptable)
                {
                    m_regrouptable = new CT_RegroupTable();
                }
                return m_regrouptable;
            
        }
        const CT_RegroupTable& regrouptable(){

            if (m_regrouptable)
            {
                return *m_regrouptable;
            }
            return CT_RegroupTable::default_instance();
        
        }
        bool has_rules(){

            return m_has_rules;
        
        }
        CT_Rules* mutable_rules(){

                m_has_rules = true;
                if (!m_rules)
                {
                    m_rules = new CT_Rules();
                }
                return m_rules;
            
        }
        const CT_Rules& rules(){

            if (m_rules)
            {
                return *m_rules;
            }
            return CT_Rules::default_instance();
        
        }
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_idmap = false;
                
        if (m_idmap)
        {
            delete m_idmap;
            m_idmap = NULL;
        }
    
            
                m_has_regrouptable = false;
                
        if (m_regrouptable)
        {
            delete m_regrouptable;
            m_regrouptable = NULL;
        }
    
            
                m_has_rules = false;
                
        if (m_rules)
        {
            delete m_rules;
            m_rules = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_idmap)
                {
                    m_idmap->toXml(idmap, _outStream);;
                }
            
                if (m_has_regrouptable)
                {
                    m_idmap->toXml(regrouptable, _outStream);;
                }
            
                if (m_has_rules)
                {
                    m_idmap->toXml(rules, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ShapeLayout& default_instance(){

    if (!CT_ShapeLayout::default_instance_)
    {
        CT_ShapeLayout::default_instance_ = new CT_ShapeLayout();
    }
    return *CT_ShapeLayout::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }

    private:
        bool m_has_idmap ;
        CT_IdMap* m_idmap ;
        bool m_has_regrouptable ;
        CT_RegroupTable* m_regrouptable ;
        bool m_has_rules ;
        CT_Rules* m_rules ;
        static CT_ShapeLayout* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_IdMap : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_data_attr = false;
                m_data_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_data_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_IdMap& default_instance(){

    if (!CT_IdMap::default_instance_)
    {
        CT_IdMap::default_instance_ = new CT_IdMap();
    }
    return *CT_IdMap::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_data_attr(){

            return m_has_data_attr;
        
        }
        void set_data_attr(const string& _data_attr ){

        m_has_data_attr = true;
        m_data_attr = _data_attr;
        
        }
        const string& data_attr(){

            return type: \string\nname: \m_data_attr\n;
        
        }

    private:
        static CT_IdMap* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_data_attr ;
        string m_data_attr ;

    }

    class CT_RegroupTable : public XSD::ComplexType{
    public:
        bool has_entry(){

            return m_has_entry;
        
        }
        CT_Entry* mutable_entry(){

                m_has_entry = true;
                if (!m_entry)
                {
                    m_entry = new CT_Entry();
                }
                return m_entry;
            
        }
        const CT_Entry& entry(){

            if (m_entry)
            {
                return *m_entry;
            }
            return CT_Entry::default_instance();
        
        }
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_entry = false;
                
        if (m_entry)
        {
            delete m_entry;
            m_entry = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_entry)
                {
                    m_entry->toXml(entry, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RegroupTable& default_instance(){

    if (!CT_RegroupTable::default_instance_)
    {
        CT_RegroupTable::default_instance_ = new CT_RegroupTable();
    }
    return *CT_RegroupTable::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }

    private:
        bool m_has_entry ;
        CT_Entry* m_entry ;
        static CT_RegroupTable* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_Entry : public XSD::ComplexType{
    public:
        void clear(){

                m_has_new_attr = false;
                m_new_attr = 0;
            
                m_has_old_attr = false;
                m_old_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_new_attr << \\\;
_outStream << _attrName << \=\\ << m_old_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Entry& default_instance(){

    if (!CT_Entry::default_instance_)
    {
        CT_Entry::default_instance_ = new CT_Entry();
    }
    return *CT_Entry::default_instance_;

        }
        bool has_new_attr(){

            return m_has_new_attr;
        
        }
        void set_new_attr(const int& _new_attr ){

        m_has_new_attr = true;
        m_new_attr = _new_attr;
        
        }
        const int& new_attr(){

            return type: \int\nname: \m_new_attr\n;
        
        }
        bool has_old_attr(){

            return m_has_old_attr;
        
        }
        void set_old_attr(const int& _old_attr ){

        m_has_old_attr = true;
        m_old_attr = _old_attr;
        
        }
        const int& old_attr(){

            return type: \int\nname: \m_old_attr\n;
        
        }

    private:
        static CT_Entry* default_instance_ ;
        bool m_has_new_attr ;
        int m_new_attr ;
        bool m_has_old_attr ;
        int m_old_attr ;

    }

    class CT_Rules : public XSD::ComplexType{
    public:
        bool has_r(){

            return m_has_r;
        
        }
        CT_R* mutable_r(){

                m_has_r = true;
                if (!m_r)
                {
                    m_r = new CT_R();
                }
                return m_r;
            
        }
        const CT_R& r(){

            if (m_r)
            {
                return *m_r;
            }
            return CT_R::default_instance();
        
        }
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_r = false;
                
        if (m_r)
        {
            delete m_r;
            m_r = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_r)
                {
                    m_r->toXml(r, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Rules& default_instance(){

    if (!CT_Rules::default_instance_)
    {
        CT_Rules::default_instance_ = new CT_Rules();
    }
    return *CT_Rules::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }

    private:
        bool m_has_r ;
        CT_R* m_r ;
        static CT_Rules* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_R : public XSD::ComplexType{
    public:
        bool has_proxy(){

            return m_has_proxy;
        
        }
        CT_Proxy* mutable_proxy(){

                m_has_proxy = true;
                if (!m_proxy)
                {
                    m_proxy = new CT_Proxy();
                }
                return m_proxy;
            
        }
        const CT_Proxy& proxy(){

            if (m_proxy)
            {
                return *m_proxy;
            }
            return CT_Proxy::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                m_id_attr.clear();
            
                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_how_attr = false;
                
        if (m_how_attr)
        {
            delete m_how_attr;
            m_how_attr = NULL;
        }
    
            
                m_has_idref_attr = false;
                m_idref_attr.clear();
            
                m_has_proxy = false;
                
        if (m_proxy)
        {
            delete m_proxy;
            m_proxy = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_id_attr << \\\;
m_type_attr->toXml(_attrName, _outStream);
m_how_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_idref_attr << \\\;
        _outStream << \>\;
    
                if (m_has_proxy)
                {
                    m_proxy->toXml(proxy, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_R& default_instance(){

    if (!CT_R::default_instance_)
    {
        CT_R::default_instance_ = new CT_R();
    }
    return *CT_R::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const string& _id_attr ){

        m_has_id_attr = true;
        m_id_attr = _id_attr;
        
        }
        const string& id_attr(){

            return type: \string\nname: \m_id_attr\n;
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_RType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_RType(_type_attr);
        
        }
        const ST_RType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_RType::default_instance();
        
        }
        bool has_how_attr(){

            return m_has_how_attr;
        
        }
        void set_how_attr(const ST_How& _how_attr ){

            m_has_how_attr = true;
            m_how_attr = new ST_How(_how_attr);
        
        }
        const ST_How& how_attr(){

            if (m_how_attr)
            {
                return *m_how_attr;
            }
            return ST_How::default_instance();
        
        }
        bool has_idref_attr(){

            return m_has_idref_attr;
        
        }
        void set_idref_attr(const string& _idref_attr ){

        m_has_idref_attr = true;
        m_idref_attr = _idref_attr;
        
        }
        const string& idref_attr(){

            return type: \string\nname: \m_idref_attr\n;
        
        }

    private:
        bool m_has_proxy ;
        CT_Proxy* m_proxy ;
        static CT_R* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_type_attr ;
        ST_RType* m_type_attr ;
        bool m_has_how_attr ;
        ST_How* m_how_attr ;
        bool m_has_idref_attr ;
        string m_idref_attr ;

    }

    class CT_Proxy : public XSD::ComplexType{
    public:
        void clear(){

                m_has_start_attr = false;
                
        if (m_start_attr)
        {
            delete m_start_attr;
            m_start_attr = NULL;
        }
    
            
                m_has_end_attr = false;
                
        if (m_end_attr)
        {
            delete m_end_attr;
            m_end_attr = NULL;
        }
    
            
                m_has_idref_attr = false;
                m_idref_attr.clear();
            
                m_has_connectloc_attr = false;
                m_connectloc_attr = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_start_attr->toXml(_attrName, _outStream);
m_end_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_idref_attr << \\\;
_outStream << _attrName << \=\\ << m_connectloc_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Proxy& default_instance(){

    if (!CT_Proxy::default_instance_)
    {
        CT_Proxy::default_instance_ = new CT_Proxy();
    }
    return *CT_Proxy::default_instance_;

        }
        bool has_start_attr(){

            return m_has_start_attr;
        
        }
        void set_start_attr(const ns_s::ST_TrueFalseBlank& _start_attr ){

            m_has_start_attr = true;
            m_start_attr = new ns_s::ST_TrueFalseBlank(_start_attr);
        
        }
        const ns_s::ST_TrueFalseBlank& start_attr(){

            if (m_start_attr)
            {
                return *m_start_attr;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
        }
        bool has_end_attr(){

            return m_has_end_attr;
        
        }
        void set_end_attr(const ns_s::ST_TrueFalseBlank& _end_attr ){

            m_has_end_attr = true;
            m_end_attr = new ns_s::ST_TrueFalseBlank(_end_attr);
        
        }
        const ns_s::ST_TrueFalseBlank& end_attr(){

            if (m_end_attr)
            {
                return *m_end_attr;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
        }
        bool has_idref_attr(){

            return m_has_idref_attr;
        
        }
        void set_idref_attr(const string& _idref_attr ){

        m_has_idref_attr = true;
        m_idref_attr = _idref_attr;
        
        }
        const string& idref_attr(){

            return type: \string\nname: \m_idref_attr\n;
        
        }
        bool has_connectloc_attr(){

            return m_has_connectloc_attr;
        
        }
        void set_connectloc_attr(const int& _connectloc_attr ){

        m_has_connectloc_attr = true;
        m_connectloc_attr = _connectloc_attr;
        
        }
        const int& connectloc_attr(){

            return type: \int\nname: \m_connectloc_attr\n;
        
        }

    private:
        static CT_Proxy* default_instance_ ;
        bool m_has_start_attr ;
        ns_s::ST_TrueFalseBlank* m_start_attr ;
        bool m_has_end_attr ;
        ns_s::ST_TrueFalseBlank* m_end_attr ;
        bool m_has_idref_attr ;
        string m_idref_attr ;
        bool m_has_connectloc_attr ;
        int m_connectloc_attr ;

    }

    class CT_Diagram : public XSD::ComplexType{
    public:
        bool has_relationtable(){

            return m_has_relationtable;
        
        }
        CT_RelationTable* mutable_relationtable(){

                m_has_relationtable = true;
                if (!m_relationtable)
                {
                    m_relationtable = new CT_RelationTable();
                }
                return m_relationtable;
            
        }
        const CT_RelationTable& relationtable(){

            if (m_relationtable)
            {
                return *m_relationtable;
            }
            return CT_RelationTable::default_instance();
        
        }
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_dgmstyle_attr = false;
                m_dgmstyle_attr = 0;
            
                m_has_autoformat_attr = false;
                
        if (m_autoformat_attr)
        {
            delete m_autoformat_attr;
            m_autoformat_attr = NULL;
        }
    
            
                m_has_reverse_attr = false;
                
        if (m_reverse_attr)
        {
            delete m_reverse_attr;
            m_reverse_attr = NULL;
        }
    
            
                m_has_autolayout_attr = false;
                
        if (m_autolayout_attr)
        {
            delete m_autolayout_attr;
            m_autolayout_attr = NULL;
        }
    
            
                m_has_dgmscalex_attr = false;
                m_dgmscalex_attr = 0;
            
                m_has_dgmscaley_attr = false;
                m_dgmscaley_attr = 0;
            
                m_has_dgmfontsize_attr = false;
                m_dgmfontsize_attr = 0;
            
                m_has_constrainbounds_attr = false;
                m_constrainbounds_attr.clear();
            
                m_has_dgmbasetextscale_attr = false;
                m_dgmbasetextscale_attr = 0;
            
                m_has_relationtable = false;
                
        if (m_relationtable)
        {
            delete m_relationtable;
            m_relationtable = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_dgmstyle_attr << \\\;
m_autoformat_attr->toXml(_attrName, _outStream);
m_reverse_attr->toXml(_attrName, _outStream);
m_autolayout_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_dgmscalex_attr << \\\;
_outStream << _attrName << \=\\ << m_dgmscaley_attr << \\\;
_outStream << _attrName << \=\\ << m_dgmfontsize_attr << \\\;
_outStream << _attrName << \=\\ << m_constrainbounds_attr << \\\;
_outStream << _attrName << \=\\ << m_dgmbasetextscale_attr << \\\;
        _outStream << \>\;
    
                if (m_has_relationtable)
                {
                    m_relationtable->toXml(relationtable, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Diagram& default_instance(){

    if (!CT_Diagram::default_instance_)
    {
        CT_Diagram::default_instance_ = new CT_Diagram();
    }
    return *CT_Diagram::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_dgmstyle_attr(){

            return m_has_dgmstyle_attr;
        
        }
        void set_dgmstyle_attr(const integer& _dgmstyle_attr ){

        m_has_dgmstyle_attr = true;
        m_dgmstyle_attr = _dgmstyle_attr;
        
        }
        const integer& dgmstyle_attr(){

            return type: \integer\nname: \m_dgmstyle_attr\n;
        
        }
        bool has_autoformat_attr(){

            return m_has_autoformat_attr;
        
        }
        void set_autoformat_attr(const ns_s::ST_TrueFalse& _autoformat_attr ){

            m_has_autoformat_attr = true;
            m_autoformat_attr = new ns_s::ST_TrueFalse(_autoformat_attr);
        
        }
        const ns_s::ST_TrueFalse& autoformat_attr(){

            if (m_autoformat_attr)
            {
                return *m_autoformat_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_reverse_attr(){

            return m_has_reverse_attr;
        
        }
        void set_reverse_attr(const ns_s::ST_TrueFalse& _reverse_attr ){

            m_has_reverse_attr = true;
            m_reverse_attr = new ns_s::ST_TrueFalse(_reverse_attr);
        
        }
        const ns_s::ST_TrueFalse& reverse_attr(){

            if (m_reverse_attr)
            {
                return *m_reverse_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_autolayout_attr(){

            return m_has_autolayout_attr;
        
        }
        void set_autolayout_attr(const ns_s::ST_TrueFalse& _autolayout_attr ){

            m_has_autolayout_attr = true;
            m_autolayout_attr = new ns_s::ST_TrueFalse(_autolayout_attr);
        
        }
        const ns_s::ST_TrueFalse& autolayout_attr(){

            if (m_autolayout_attr)
            {
                return *m_autolayout_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_dgmscalex_attr(){

            return m_has_dgmscalex_attr;
        
        }
        void set_dgmscalex_attr(const integer& _dgmscalex_attr ){

        m_has_dgmscalex_attr = true;
        m_dgmscalex_attr = _dgmscalex_attr;
        
        }
        const integer& dgmscalex_attr(){

            return type: \integer\nname: \m_dgmscalex_attr\n;
        
        }
        bool has_dgmscaley_attr(){

            return m_has_dgmscaley_attr;
        
        }
        void set_dgmscaley_attr(const integer& _dgmscaley_attr ){

        m_has_dgmscaley_attr = true;
        m_dgmscaley_attr = _dgmscaley_attr;
        
        }
        const integer& dgmscaley_attr(){

            return type: \integer\nname: \m_dgmscaley_attr\n;
        
        }
        bool has_dgmfontsize_attr(){

            return m_has_dgmfontsize_attr;
        
        }
        void set_dgmfontsize_attr(const integer& _dgmfontsize_attr ){

        m_has_dgmfontsize_attr = true;
        m_dgmfontsize_attr = _dgmfontsize_attr;
        
        }
        const integer& dgmfontsize_attr(){

            return type: \integer\nname: \m_dgmfontsize_attr\n;
        
        }
        bool has_constrainbounds_attr(){

            return m_has_constrainbounds_attr;
        
        }
        void set_constrainbounds_attr(const string& _constrainbounds_attr ){

        m_has_constrainbounds_attr = true;
        m_constrainbounds_attr = _constrainbounds_attr;
        
        }
        const string& constrainbounds_attr(){

            return type: \string\nname: \m_constrainbounds_attr\n;
        
        }
        bool has_dgmbasetextscale_attr(){

            return m_has_dgmbasetextscale_attr;
        
        }
        void set_dgmbasetextscale_attr(const integer& _dgmbasetextscale_attr ){

        m_has_dgmbasetextscale_attr = true;
        m_dgmbasetextscale_attr = _dgmbasetextscale_attr;
        
        }
        const integer& dgmbasetextscale_attr(){

            return type: \integer\nname: \m_dgmbasetextscale_attr\n;
        
        }

    private:
        bool m_has_relationtable ;
        CT_RelationTable* m_relationtable ;
        static CT_Diagram* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_dgmstyle_attr ;
        integer m_dgmstyle_attr ;
        bool m_has_autoformat_attr ;
        ns_s::ST_TrueFalse* m_autoformat_attr ;
        bool m_has_reverse_attr ;
        ns_s::ST_TrueFalse* m_reverse_attr ;
        bool m_has_autolayout_attr ;
        ns_s::ST_TrueFalse* m_autolayout_attr ;
        bool m_has_dgmscalex_attr ;
        integer m_dgmscalex_attr ;
        bool m_has_dgmscaley_attr ;
        integer m_dgmscaley_attr ;
        bool m_has_dgmfontsize_attr ;
        integer m_dgmfontsize_attr ;
        bool m_has_constrainbounds_attr ;
        string m_constrainbounds_attr ;
        bool m_has_dgmbasetextscale_attr ;
        integer m_dgmbasetextscale_attr ;

    }

    class CT_EquationXml : public XSD::ComplexType{
    public:
        void clear(){

                m_has_contentType_attr = false;
                
        if (m_contentType_attr)
        {
            delete m_contentType_attr;
            m_contentType_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_contentType_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_EquationXml& default_instance(){

    if (!CT_EquationXml::default_instance_)
    {
        CT_EquationXml::default_instance_ = new CT_EquationXml();
    }
    return *CT_EquationXml::default_instance_;

        }
        bool has_contentType_attr(){

            return m_has_contentType_attr;
        
        }
        void set_contentType_attr(const ST_AlternateMathContentType& _contentType_attr ){

            m_has_contentType_attr = true;
            m_contentType_attr = new ST_AlternateMathContentType(_contentType_attr);
        
        }
        const ST_AlternateMathContentType& contentType_attr(){

            if (m_contentType_attr)
            {
                return *m_contentType_attr;
            }
            return ST_AlternateMathContentType::default_instance();
        
        }

    private:
        static CT_EquationXml* default_instance_ ;
        bool m_has_contentType_attr ;
        ST_AlternateMathContentType* m_contentType_attr ;

    }

    class CT_RelationTable : public XSD::ComplexType{
    public:
        bool has_rel(){

            return m_has_rel;
        
        }
        CT_Relation* mutable_rel(){

                m_has_rel = true;
                if (!m_rel)
                {
                    m_rel = new CT_Relation();
                }
                return m_rel;
            
        }
        const CT_Relation& rel(){

            if (m_rel)
            {
                return *m_rel;
            }
            return CT_Relation::default_instance();
        
        }
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_rel = false;
                
        if (m_rel)
        {
            delete m_rel;
            m_rel = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_rel)
                {
                    m_rel->toXml(rel, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RelationTable& default_instance(){

    if (!CT_RelationTable::default_instance_)
    {
        CT_RelationTable::default_instance_ = new CT_RelationTable();
    }
    return *CT_RelationTable::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }

    private:
        bool m_has_rel ;
        CT_Relation* m_rel ;
        static CT_RelationTable* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_Relation : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_idsrc_attr = false;
                m_idsrc_attr.clear();
            
                m_has_iddest_attr = false;
                m_iddest_attr.clear();
            
                m_has_idcntr_attr = false;
                m_idcntr_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_idsrc_attr << \\\;
_outStream << _attrName << \=\\ << m_iddest_attr << \\\;
_outStream << _attrName << \=\\ << m_idcntr_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Relation& default_instance(){

    if (!CT_Relation::default_instance_)
    {
        CT_Relation::default_instance_ = new CT_Relation();
    }
    return *CT_Relation::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_idsrc_attr(){

            return m_has_idsrc_attr;
        
        }
        void set_idsrc_attr(const string& _idsrc_attr ){

        m_has_idsrc_attr = true;
        m_idsrc_attr = _idsrc_attr;
        
        }
        const string& idsrc_attr(){

            return type: \string\nname: \m_idsrc_attr\n;
        
        }
        bool has_iddest_attr(){

            return m_has_iddest_attr;
        
        }
        void set_iddest_attr(const string& _iddest_attr ){

        m_has_iddest_attr = true;
        m_iddest_attr = _iddest_attr;
        
        }
        const string& iddest_attr(){

            return type: \string\nname: \m_iddest_attr\n;
        
        }
        bool has_idcntr_attr(){

            return m_has_idcntr_attr;
        
        }
        void set_idcntr_attr(const string& _idcntr_attr ){

        m_has_idcntr_attr = true;
        m_idcntr_attr = _idcntr_attr;
        
        }
        const string& idcntr_attr(){

            return type: \string\nname: \m_idcntr_attr\n;
        
        }

    private:
        static CT_Relation* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_idsrc_attr ;
        string m_idsrc_attr ;
        bool m_has_iddest_attr ;
        string m_iddest_attr ;
        bool m_has_idcntr_attr ;
        string m_idcntr_attr ;

    }

    class CT_ColorMru : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_colors_attr = false;
                m_colors_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_colors_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ColorMru& default_instance(){

    if (!CT_ColorMru::default_instance_)
    {
        CT_ColorMru::default_instance_ = new CT_ColorMru();
    }
    return *CT_ColorMru::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_colors_attr(){

            return m_has_colors_attr;
        
        }
        void set_colors_attr(const string& _colors_attr ){

        m_has_colors_attr = true;
        m_colors_attr = _colors_attr;
        
        }
        const string& colors_attr(){

            return type: \string\nname: \m_colors_attr\n;
        
        }

    private:
        static CT_ColorMru* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_colors_attr ;
        string m_colors_attr ;

    }

    class CT_ColorMenu : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_strokecolor_attr = false;
                
        if (m_strokecolor_attr)
        {
            delete m_strokecolor_attr;
            m_strokecolor_attr = NULL;
        }
    
            
                m_has_fillcolor_attr = false;
                
        if (m_fillcolor_attr)
        {
            delete m_fillcolor_attr;
            m_fillcolor_attr = NULL;
        }
    
            
                m_has_shadowcolor_attr = false;
                
        if (m_shadowcolor_attr)
        {
            delete m_shadowcolor_attr;
            m_shadowcolor_attr = NULL;
        }
    
            
                m_has_extrusioncolor_attr = false;
                
        if (m_extrusioncolor_attr)
        {
            delete m_extrusioncolor_attr;
            m_extrusioncolor_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
m_strokecolor_attr->toXml(_attrName, _outStream);
m_fillcolor_attr->toXml(_attrName, _outStream);
m_shadowcolor_attr->toXml(_attrName, _outStream);
m_extrusioncolor_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ColorMenu& default_instance(){

    if (!CT_ColorMenu::default_instance_)
    {
        CT_ColorMenu::default_instance_ = new CT_ColorMenu();
    }
    return *CT_ColorMenu::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_strokecolor_attr(){

            return m_has_strokecolor_attr;
        
        }
        void set_strokecolor_attr(const ns_s::ST_ColorType& _strokecolor_attr ){

            m_has_strokecolor_attr = true;
            m_strokecolor_attr = new ns_s::ST_ColorType(_strokecolor_attr);
        
        }
        const ns_s::ST_ColorType& strokecolor_attr(){

            if (m_strokecolor_attr)
            {
                return *m_strokecolor_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }
        bool has_fillcolor_attr(){

            return m_has_fillcolor_attr;
        
        }
        void set_fillcolor_attr(const ns_s::ST_ColorType& _fillcolor_attr ){

            m_has_fillcolor_attr = true;
            m_fillcolor_attr = new ns_s::ST_ColorType(_fillcolor_attr);
        
        }
        const ns_s::ST_ColorType& fillcolor_attr(){

            if (m_fillcolor_attr)
            {
                return *m_fillcolor_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }
        bool has_shadowcolor_attr(){

            return m_has_shadowcolor_attr;
        
        }
        void set_shadowcolor_attr(const ns_s::ST_ColorType& _shadowcolor_attr ){

            m_has_shadowcolor_attr = true;
            m_shadowcolor_attr = new ns_s::ST_ColorType(_shadowcolor_attr);
        
        }
        const ns_s::ST_ColorType& shadowcolor_attr(){

            if (m_shadowcolor_attr)
            {
                return *m_shadowcolor_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }
        bool has_extrusioncolor_attr(){

            return m_has_extrusioncolor_attr;
        
        }
        void set_extrusioncolor_attr(const ns_s::ST_ColorType& _extrusioncolor_attr ){

            m_has_extrusioncolor_attr = true;
            m_extrusioncolor_attr = new ns_s::ST_ColorType(_extrusioncolor_attr);
        
        }
        const ns_s::ST_ColorType& extrusioncolor_attr(){

            if (m_extrusioncolor_attr)
            {
                return *m_extrusioncolor_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }

    private:
        static CT_ColorMenu* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_strokecolor_attr ;
        ns_s::ST_ColorType* m_strokecolor_attr ;
        bool m_has_fillcolor_attr ;
        ns_s::ST_ColorType* m_fillcolor_attr ;
        bool m_has_shadowcolor_attr ;
        ns_s::ST_ColorType* m_shadowcolor_attr ;
        bool m_has_extrusioncolor_attr ;
        ns_s::ST_ColorType* m_extrusioncolor_attr ;

    }

    class CT_Skew : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_id_attr = false;
                m_id_attr.clear();
            
                m_has_on_attr = false;
                
        if (m_on_attr)
        {
            delete m_on_attr;
            m_on_attr = NULL;
        }
    
            
                m_has_offset_attr = false;
                m_offset_attr.clear();
            
                m_has_origin_attr = false;
                m_origin_attr.clear();
            
                m_has_matrix_attr = false;
                m_matrix_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_id_attr << \\\;
m_on_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_offset_attr << \\\;
_outStream << _attrName << \=\\ << m_origin_attr << \\\;
_outStream << _attrName << \=\\ << m_matrix_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Skew& default_instance(){

    if (!CT_Skew::default_instance_)
    {
        CT_Skew::default_instance_ = new CT_Skew();
    }
    return *CT_Skew::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const string& _id_attr ){

        m_has_id_attr = true;
        m_id_attr = _id_attr;
        
        }
        const string& id_attr(){

            return type: \string\nname: \m_id_attr\n;
        
        }
        bool has_on_attr(){

            return m_has_on_attr;
        
        }
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr ){

            m_has_on_attr = true;
            m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
        
        }
        const ns_s::ST_TrueFalse& on_attr(){

            if (m_on_attr)
            {
                return *m_on_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_offset_attr(){

            return m_has_offset_attr;
        
        }
        void set_offset_attr(const string& _offset_attr ){

        m_has_offset_attr = true;
        m_offset_attr = _offset_attr;
        
        }
        const string& offset_attr(){

            return type: \string\nname: \m_offset_attr\n;
        
        }
        bool has_origin_attr(){

            return m_has_origin_attr;
        
        }
        void set_origin_attr(const string& _origin_attr ){

        m_has_origin_attr = true;
        m_origin_attr = _origin_attr;
        
        }
        const string& origin_attr(){

            return type: \string\nname: \m_origin_attr\n;
        
        }
        bool has_matrix_attr(){

            return m_has_matrix_attr;
        
        }
        void set_matrix_attr(const string& _matrix_attr ){

        m_has_matrix_attr = true;
        m_matrix_attr = _matrix_attr;
        
        }
        const string& matrix_attr(){

            return type: \string\nname: \m_matrix_attr\n;
        
        }

    private:
        static CT_Skew* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_id_attr ;
        string m_id_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_offset_attr ;
        string m_offset_attr ;
        bool m_has_origin_attr ;
        string m_origin_attr ;
        bool m_has_matrix_attr ;
        string m_matrix_attr ;

    }

    class CT_Extrusion : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_on_attr = false;
                
        if (m_on_attr)
        {
            delete m_on_attr;
            m_on_attr = NULL;
        }
    
            
                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
                m_has_render_attr = false;
                
        if (m_render_attr)
        {
            delete m_render_attr;
            m_render_attr = NULL;
        }
    
            
                m_has_viewpointorigin_attr = false;
                m_viewpointorigin_attr.clear();
            
                m_has_viewpoint_attr = false;
                m_viewpoint_attr.clear();
            
                m_has_plane_attr = false;
                
        if (m_plane_attr)
        {
            delete m_plane_attr;
            m_plane_attr = NULL;
        }
    
            
                m_has_skewangle_attr = false;
                m_skewangle_attr = 0;
            
                m_has_skewamt_attr = false;
                m_skewamt_attr.clear();
            
                m_has_foredepth_attr = false;
                m_foredepth_attr.clear();
            
                m_has_backdepth_attr = false;
                m_backdepth_attr.clear();
            
                m_has_orientation_attr = false;
                m_orientation_attr.clear();
            
                m_has_orientationangle_attr = false;
                m_orientationangle_attr = 0;
            
                m_has_lockrotationcenter_attr = false;
                
        if (m_lockrotationcenter_attr)
        {
            delete m_lockrotationcenter_attr;
            m_lockrotationcenter_attr = NULL;
        }
    
            
                m_has_autorotationcenter_attr = false;
                
        if (m_autorotationcenter_attr)
        {
            delete m_autorotationcenter_attr;
            m_autorotationcenter_attr = NULL;
        }
    
            
                m_has_rotationcenter_attr = false;
                m_rotationcenter_attr.clear();
            
                m_has_rotationangle_attr = false;
                m_rotationangle_attr.clear();
            
                m_has_colormode_attr = false;
                
        if (m_colormode_attr)
        {
            delete m_colormode_attr;
            m_colormode_attr = NULL;
        }
    
            
                m_has_color_attr = false;
                
        if (m_color_attr)
        {
            delete m_color_attr;
            m_color_attr = NULL;
        }
    
            
                m_has_shininess_attr = false;
                m_shininess_attr = 0;
            
                m_has_specularity_attr = false;
                m_specularity_attr.clear();
            
                m_has_diffusity_attr = false;
                m_diffusity_attr.clear();
            
                m_has_metal_attr = false;
                
        if (m_metal_attr)
        {
            delete m_metal_attr;
            m_metal_attr = NULL;
        }
    
            
                m_has_edge_attr = false;
                m_edge_attr.clear();
            
                m_has_facet_attr = false;
                m_facet_attr.clear();
            
                m_has_lightface_attr = false;
                
        if (m_lightface_attr)
        {
            delete m_lightface_attr;
            m_lightface_attr = NULL;
        }
    
            
                m_has_brightness_attr = false;
                m_brightness_attr.clear();
            
                m_has_lightposition_attr = false;
                m_lightposition_attr.clear();
            
                m_has_lightlevel_attr = false;
                m_lightlevel_attr.clear();
            
                m_has_lightharsh_attr = false;
                
        if (m_lightharsh_attr)
        {
            delete m_lightharsh_attr;
            m_lightharsh_attr = NULL;
        }
    
            
                m_has_lightposition2_attr = false;
                m_lightposition2_attr.clear();
            
                m_has_lightlevel2_attr = false;
                m_lightlevel2_attr.clear();
            
                m_has_lightharsh2_attr = false;
                
        if (m_lightharsh2_attr)
        {
            delete m_lightharsh2_attr;
            m_lightharsh2_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
m_on_attr->toXml(_attrName, _outStream);
m_type_attr->toXml(_attrName, _outStream);
m_render_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_viewpointorigin_attr << \\\;
_outStream << _attrName << \=\\ << m_viewpoint_attr << \\\;
m_plane_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_skewangle_attr << \\\;
_outStream << _attrName << \=\\ << m_skewamt_attr << \\\;
_outStream << _attrName << \=\\ << m_foredepth_attr << \\\;
_outStream << _attrName << \=\\ << m_backdepth_attr << \\\;
_outStream << _attrName << \=\\ << m_orientation_attr << \\\;
_outStream << _attrName << \=\\ << m_orientationangle_attr << \\\;
m_lockrotationcenter_attr->toXml(_attrName, _outStream);
m_autorotationcenter_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_rotationcenter_attr << \\\;
_outStream << _attrName << \=\\ << m_rotationangle_attr << \\\;
m_colormode_attr->toXml(_attrName, _outStream);
m_color_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_shininess_attr << \\\;
_outStream << _attrName << \=\\ << m_specularity_attr << \\\;
_outStream << _attrName << \=\\ << m_diffusity_attr << \\\;
m_metal_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_edge_attr << \\\;
_outStream << _attrName << \=\\ << m_facet_attr << \\\;
m_lightface_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_brightness_attr << \\\;
_outStream << _attrName << \=\\ << m_lightposition_attr << \\\;
_outStream << _attrName << \=\\ << m_lightlevel_attr << \\\;
m_lightharsh_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_lightposition2_attr << \\\;
_outStream << _attrName << \=\\ << m_lightlevel2_attr << \\\;
m_lightharsh2_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Extrusion& default_instance(){

    if (!CT_Extrusion::default_instance_)
    {
        CT_Extrusion::default_instance_ = new CT_Extrusion();
    }
    return *CT_Extrusion::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_on_attr(){

            return m_has_on_attr;
        
        }
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr ){

            m_has_on_attr = true;
            m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
        
        }
        const ns_s::ST_TrueFalse& on_attr(){

            if (m_on_attr)
            {
                return *m_on_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_ExtrusionType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_ExtrusionType(_type_attr);
        
        }
        const ST_ExtrusionType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_ExtrusionType::default_instance();
        
        }
        bool has_render_attr(){

            return m_has_render_attr;
        
        }
        void set_render_attr(const ST_ExtrusionRender& _render_attr ){

            m_has_render_attr = true;
            m_render_attr = new ST_ExtrusionRender(_render_attr);
        
        }
        const ST_ExtrusionRender& render_attr(){

            if (m_render_attr)
            {
                return *m_render_attr;
            }
            return ST_ExtrusionRender::default_instance();
        
        }
        bool has_viewpointorigin_attr(){

            return m_has_viewpointorigin_attr;
        
        }
        void set_viewpointorigin_attr(const string& _viewpointorigin_attr ){

        m_has_viewpointorigin_attr = true;
        m_viewpointorigin_attr = _viewpointorigin_attr;
        
        }
        const string& viewpointorigin_attr(){

            return type: \string\nname: \m_viewpointorigin_attr\n;
        
        }
        bool has_viewpoint_attr(){

            return m_has_viewpoint_attr;
        
        }
        void set_viewpoint_attr(const string& _viewpoint_attr ){

        m_has_viewpoint_attr = true;
        m_viewpoint_attr = _viewpoint_attr;
        
        }
        const string& viewpoint_attr(){

            return type: \string\nname: \m_viewpoint_attr\n;
        
        }
        bool has_plane_attr(){

            return m_has_plane_attr;
        
        }
        void set_plane_attr(const ST_ExtrusionPlane& _plane_attr ){

            m_has_plane_attr = true;
            m_plane_attr = new ST_ExtrusionPlane(_plane_attr);
        
        }
        const ST_ExtrusionPlane& plane_attr(){

            if (m_plane_attr)
            {
                return *m_plane_attr;
            }
            return ST_ExtrusionPlane::default_instance();
        
        }
        bool has_skewangle_attr(){

            return m_has_skewangle_attr;
        
        }
        void set_skewangle_attr(const float& _skewangle_attr ){

        m_has_skewangle_attr = true;
        m_skewangle_attr = _skewangle_attr;
        
        }
        const float& skewangle_attr(){

            return type: loat\nname: \m_skewangle_attr\n;
        
        }
        bool has_skewamt_attr(){

            return m_has_skewamt_attr;
        
        }
        void set_skewamt_attr(const string& _skewamt_attr ){

        m_has_skewamt_attr = true;
        m_skewamt_attr = _skewamt_attr;
        
        }
        const string& skewamt_attr(){

            return type: \string\nname: \m_skewamt_attr\n;
        
        }
        bool has_foredepth_attr(){

            return m_has_foredepth_attr;
        
        }
        void set_foredepth_attr(const string& _foredepth_attr ){

        m_has_foredepth_attr = true;
        m_foredepth_attr = _foredepth_attr;
        
        }
        const string& foredepth_attr(){

            return type: \string\nname: \m_foredepth_attr\n;
        
        }
        bool has_backdepth_attr(){

            return m_has_backdepth_attr;
        
        }
        void set_backdepth_attr(const string& _backdepth_attr ){

        m_has_backdepth_attr = true;
        m_backdepth_attr = _backdepth_attr;
        
        }
        const string& backdepth_attr(){

            return type: \string\nname: \m_backdepth_attr\n;
        
        }
        bool has_orientation_attr(){

            return m_has_orientation_attr;
        
        }
        void set_orientation_attr(const string& _orientation_attr ){

        m_has_orientation_attr = true;
        m_orientation_attr = _orientation_attr;
        
        }
        const string& orientation_attr(){

            return type: \string\nname: \m_orientation_attr\n;
        
        }
        bool has_orientationangle_attr(){

            return m_has_orientationangle_attr;
        
        }
        void set_orientationangle_attr(const float& _orientationangle_attr ){

        m_has_orientationangle_attr = true;
        m_orientationangle_attr = _orientationangle_attr;
        
        }
        const float& orientationangle_attr(){

            return type: loat\nname: \m_orientationangle_attr\n;
        
        }
        bool has_lockrotationcenter_attr(){

            return m_has_lockrotationcenter_attr;
        
        }
        void set_lockrotationcenter_attr(const ns_s::ST_TrueFalse& _lockrotationcenter_attr ){

            m_has_lockrotationcenter_attr = true;
            m_lockrotationcenter_attr = new ns_s::ST_TrueFalse(_lockrotationcenter_attr);
        
        }
        const ns_s::ST_TrueFalse& lockrotationcenter_attr(){

            if (m_lockrotationcenter_attr)
            {
                return *m_lockrotationcenter_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_autorotationcenter_attr(){

            return m_has_autorotationcenter_attr;
        
        }
        void set_autorotationcenter_attr(const ns_s::ST_TrueFalse& _autorotationcenter_attr ){

            m_has_autorotationcenter_attr = true;
            m_autorotationcenter_attr = new ns_s::ST_TrueFalse(_autorotationcenter_attr);
        
        }
        const ns_s::ST_TrueFalse& autorotationcenter_attr(){

            if (m_autorotationcenter_attr)
            {
                return *m_autorotationcenter_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_rotationcenter_attr(){

            return m_has_rotationcenter_attr;
        
        }
        void set_rotationcenter_attr(const string& _rotationcenter_attr ){

        m_has_rotationcenter_attr = true;
        m_rotationcenter_attr = _rotationcenter_attr;
        
        }
        const string& rotationcenter_attr(){

            return type: \string\nname: \m_rotationcenter_attr\n;
        
        }
        bool has_rotationangle_attr(){

            return m_has_rotationangle_attr;
        
        }
        void set_rotationangle_attr(const string& _rotationangle_attr ){

        m_has_rotationangle_attr = true;
        m_rotationangle_attr = _rotationangle_attr;
        
        }
        const string& rotationangle_attr(){

            return type: \string\nname: \m_rotationangle_attr\n;
        
        }
        bool has_colormode_attr(){

            return m_has_colormode_attr;
        
        }
        void set_colormode_attr(const ST_ColorMode& _colormode_attr ){

            m_has_colormode_attr = true;
            m_colormode_attr = new ST_ColorMode(_colormode_attr);
        
        }
        const ST_ColorMode& colormode_attr(){

            if (m_colormode_attr)
            {
                return *m_colormode_attr;
            }
            return ST_ColorMode::default_instance();
        
        }
        bool has_color_attr(){

            return m_has_color_attr;
        
        }
        void set_color_attr(const ns_s::ST_ColorType& _color_attr ){

            m_has_color_attr = true;
            m_color_attr = new ns_s::ST_ColorType(_color_attr);
        
        }
        const ns_s::ST_ColorType& color_attr(){

            if (m_color_attr)
            {
                return *m_color_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }
        bool has_shininess_attr(){

            return m_has_shininess_attr;
        
        }
        void set_shininess_attr(const float& _shininess_attr ){

        m_has_shininess_attr = true;
        m_shininess_attr = _shininess_attr;
        
        }
        const float& shininess_attr(){

            return type: loat\nname: \m_shininess_attr\n;
        
        }
        bool has_specularity_attr(){

            return m_has_specularity_attr;
        
        }
        void set_specularity_attr(const string& _specularity_attr ){

        m_has_specularity_attr = true;
        m_specularity_attr = _specularity_attr;
        
        }
        const string& specularity_attr(){

            return type: \string\nname: \m_specularity_attr\n;
        
        }
        bool has_diffusity_attr(){

            return m_has_diffusity_attr;
        
        }
        void set_diffusity_attr(const string& _diffusity_attr ){

        m_has_diffusity_attr = true;
        m_diffusity_attr = _diffusity_attr;
        
        }
        const string& diffusity_attr(){

            return type: \string\nname: \m_diffusity_attr\n;
        
        }
        bool has_metal_attr(){

            return m_has_metal_attr;
        
        }
        void set_metal_attr(const ns_s::ST_TrueFalse& _metal_attr ){

            m_has_metal_attr = true;
            m_metal_attr = new ns_s::ST_TrueFalse(_metal_attr);
        
        }
        const ns_s::ST_TrueFalse& metal_attr(){

            if (m_metal_attr)
            {
                return *m_metal_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_edge_attr(){

            return m_has_edge_attr;
        
        }
        void set_edge_attr(const string& _edge_attr ){

        m_has_edge_attr = true;
        m_edge_attr = _edge_attr;
        
        }
        const string& edge_attr(){

            return type: \string\nname: \m_edge_attr\n;
        
        }
        bool has_facet_attr(){

            return m_has_facet_attr;
        
        }
        void set_facet_attr(const string& _facet_attr ){

        m_has_facet_attr = true;
        m_facet_attr = _facet_attr;
        
        }
        const string& facet_attr(){

            return type: \string\nname: \m_facet_attr\n;
        
        }
        bool has_lightface_attr(){

            return m_has_lightface_attr;
        
        }
        void set_lightface_attr(const ns_s::ST_TrueFalse& _lightface_attr ){

            m_has_lightface_attr = true;
            m_lightface_attr = new ns_s::ST_TrueFalse(_lightface_attr);
        
        }
        const ns_s::ST_TrueFalse& lightface_attr(){

            if (m_lightface_attr)
            {
                return *m_lightface_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_brightness_attr(){

            return m_has_brightness_attr;
        
        }
        void set_brightness_attr(const string& _brightness_attr ){

        m_has_brightness_attr = true;
        m_brightness_attr = _brightness_attr;
        
        }
        const string& brightness_attr(){

            return type: \string\nname: \m_brightness_attr\n;
        
        }
        bool has_lightposition_attr(){

            return m_has_lightposition_attr;
        
        }
        void set_lightposition_attr(const string& _lightposition_attr ){

        m_has_lightposition_attr = true;
        m_lightposition_attr = _lightposition_attr;
        
        }
        const string& lightposition_attr(){

            return type: \string\nname: \m_lightposition_attr\n;
        
        }
        bool has_lightlevel_attr(){

            return m_has_lightlevel_attr;
        
        }
        void set_lightlevel_attr(const string& _lightlevel_attr ){

        m_has_lightlevel_attr = true;
        m_lightlevel_attr = _lightlevel_attr;
        
        }
        const string& lightlevel_attr(){

            return type: \string\nname: \m_lightlevel_attr\n;
        
        }
        bool has_lightharsh_attr(){

            return m_has_lightharsh_attr;
        
        }
        void set_lightharsh_attr(const ns_s::ST_TrueFalse& _lightharsh_attr ){

            m_has_lightharsh_attr = true;
            m_lightharsh_attr = new ns_s::ST_TrueFalse(_lightharsh_attr);
        
        }
        const ns_s::ST_TrueFalse& lightharsh_attr(){

            if (m_lightharsh_attr)
            {
                return *m_lightharsh_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_lightposition2_attr(){

            return m_has_lightposition2_attr;
        
        }
        void set_lightposition2_attr(const string& _lightposition2_attr ){

        m_has_lightposition2_attr = true;
        m_lightposition2_attr = _lightposition2_attr;
        
        }
        const string& lightposition2_attr(){

            return type: \string\nname: \m_lightposition2_attr\n;
        
        }
        bool has_lightlevel2_attr(){

            return m_has_lightlevel2_attr;
        
        }
        void set_lightlevel2_attr(const string& _lightlevel2_attr ){

        m_has_lightlevel2_attr = true;
        m_lightlevel2_attr = _lightlevel2_attr;
        
        }
        const string& lightlevel2_attr(){

            return type: \string\nname: \m_lightlevel2_attr\n;
        
        }
        bool has_lightharsh2_attr(){

            return m_has_lightharsh2_attr;
        
        }
        void set_lightharsh2_attr(const ns_s::ST_TrueFalse& _lightharsh2_attr ){

            m_has_lightharsh2_attr = true;
            m_lightharsh2_attr = new ns_s::ST_TrueFalse(_lightharsh2_attr);
        
        }
        const ns_s::ST_TrueFalse& lightharsh2_attr(){

            if (m_lightharsh2_attr)
            {
                return *m_lightharsh2_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }

    private:
        static CT_Extrusion* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_type_attr ;
        ST_ExtrusionType* m_type_attr ;
        bool m_has_render_attr ;
        ST_ExtrusionRender* m_render_attr ;
        bool m_has_viewpointorigin_attr ;
        string m_viewpointorigin_attr ;
        bool m_has_viewpoint_attr ;
        string m_viewpoint_attr ;
        bool m_has_plane_attr ;
        ST_ExtrusionPlane* m_plane_attr ;
        bool m_has_skewangle_attr ;
        float m_skewangle_attr ;
        bool m_has_skewamt_attr ;
        string m_skewamt_attr ;
        bool m_has_foredepth_attr ;
        string m_foredepth_attr ;
        bool m_has_backdepth_attr ;
        string m_backdepth_attr ;
        bool m_has_orientation_attr ;
        string m_orientation_attr ;
        bool m_has_orientationangle_attr ;
        float m_orientationangle_attr ;
        bool m_has_lockrotationcenter_attr ;
        ns_s::ST_TrueFalse* m_lockrotationcenter_attr ;
        bool m_has_autorotationcenter_attr ;
        ns_s::ST_TrueFalse* m_autorotationcenter_attr ;
        bool m_has_rotationcenter_attr ;
        string m_rotationcenter_attr ;
        bool m_has_rotationangle_attr ;
        string m_rotationangle_attr ;
        bool m_has_colormode_attr ;
        ST_ColorMode* m_colormode_attr ;
        bool m_has_color_attr ;
        ns_s::ST_ColorType* m_color_attr ;
        bool m_has_shininess_attr ;
        float m_shininess_attr ;
        bool m_has_specularity_attr ;
        string m_specularity_attr ;
        bool m_has_diffusity_attr ;
        string m_diffusity_attr ;
        bool m_has_metal_attr ;
        ns_s::ST_TrueFalse* m_metal_attr ;
        bool m_has_edge_attr ;
        string m_edge_attr ;
        bool m_has_facet_attr ;
        string m_facet_attr ;
        bool m_has_lightface_attr ;
        ns_s::ST_TrueFalse* m_lightface_attr ;
        bool m_has_brightness_attr ;
        string m_brightness_attr ;
        bool m_has_lightposition_attr ;
        string m_lightposition_attr ;
        bool m_has_lightlevel_attr ;
        string m_lightlevel_attr ;
        bool m_has_lightharsh_attr ;
        ns_s::ST_TrueFalse* m_lightharsh_attr ;
        bool m_has_lightposition2_attr ;
        string m_lightposition2_attr ;
        bool m_has_lightlevel2_attr ;
        string m_lightlevel2_attr ;
        bool m_has_lightharsh2_attr ;
        ns_s::ST_TrueFalse* m_lightharsh2_attr ;

    }

    class CT_Callout : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_on_attr = false;
                
        if (m_on_attr)
        {
            delete m_on_attr;
            m_on_attr = NULL;
        }
    
            
                m_has_type_attr = false;
                m_type_attr.clear();
            
                m_has_gap_attr = false;
                m_gap_attr.clear();
            
                m_has_angle_attr = false;
                
        if (m_angle_attr)
        {
            delete m_angle_attr;
            m_angle_attr = NULL;
        }
    
            
                m_has_dropauto_attr = false;
                
        if (m_dropauto_attr)
        {
            delete m_dropauto_attr;
            m_dropauto_attr = NULL;
        }
    
            
                m_has_drop_attr = false;
                
        if (m_drop_attr)
        {
            delete m_drop_attr;
            m_drop_attr = NULL;
        }
    
            
                m_has_distance_attr = false;
                m_distance_attr.clear();
            
                m_has_lengthspecified_attr = false;
                
        if (m_lengthspecified_attr)
        {
            delete m_lengthspecified_attr;
            m_lengthspecified_attr = NULL;
        }
    
            
                m_has_length_attr = false;
                m_length_attr.clear();
            
                m_has_accentbar_attr = false;
                
        if (m_accentbar_attr)
        {
            delete m_accentbar_attr;
            m_accentbar_attr = NULL;
        }
    
            
                m_has_textborder_attr = false;
                
        if (m_textborder_attr)
        {
            delete m_textborder_attr;
            m_textborder_attr = NULL;
        }
    
            
                m_has_minusx_attr = false;
                
        if (m_minusx_attr)
        {
            delete m_minusx_attr;
            m_minusx_attr = NULL;
        }
    
            
                m_has_minusy_attr = false;
                
        if (m_minusy_attr)
        {
            delete m_minusy_attr;
            m_minusy_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
m_on_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_type_attr << \\\;
_outStream << _attrName << \=\\ << m_gap_attr << \\\;
m_angle_attr->toXml(_attrName, _outStream);
m_dropauto_attr->toXml(_attrName, _outStream);
m_drop_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_distance_attr << \\\;
m_lengthspecified_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_length_attr << \\\;
m_accentbar_attr->toXml(_attrName, _outStream);
m_textborder_attr->toXml(_attrName, _outStream);
m_minusx_attr->toXml(_attrName, _outStream);
m_minusy_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Callout& default_instance(){

    if (!CT_Callout::default_instance_)
    {
        CT_Callout::default_instance_ = new CT_Callout();
    }
    return *CT_Callout::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_on_attr(){

            return m_has_on_attr;
        
        }
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr ){

            m_has_on_attr = true;
            m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
        
        }
        const ns_s::ST_TrueFalse& on_attr(){

            if (m_on_attr)
            {
                return *m_on_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const string& _type_attr ){

        m_has_type_attr = true;
        m_type_attr = _type_attr;
        
        }
        const string& type_attr(){

            return type: \string\nname: \m_type_attr\n;
        
        }
        bool has_gap_attr(){

            return m_has_gap_attr;
        
        }
        void set_gap_attr(const string& _gap_attr ){

        m_has_gap_attr = true;
        m_gap_attr = _gap_attr;
        
        }
        const string& gap_attr(){

            return type: \string\nname: \m_gap_attr\n;
        
        }
        bool has_angle_attr(){

            return m_has_angle_attr;
        
        }
        void set_angle_attr(const ST_Angle& _angle_attr ){

            m_has_angle_attr = true;
            m_angle_attr = new ST_Angle(_angle_attr);
        
        }
        const ST_Angle& angle_attr(){

            if (m_angle_attr)
            {
                return *m_angle_attr;
            }
            return ST_Angle::default_instance();
        
        }
        bool has_dropauto_attr(){

            return m_has_dropauto_attr;
        
        }
        void set_dropauto_attr(const ns_s::ST_TrueFalse& _dropauto_attr ){

            m_has_dropauto_attr = true;
            m_dropauto_attr = new ns_s::ST_TrueFalse(_dropauto_attr);
        
        }
        const ns_s::ST_TrueFalse& dropauto_attr(){

            if (m_dropauto_attr)
            {
                return *m_dropauto_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_drop_attr(){

            return m_has_drop_attr;
        
        }
        void set_drop_attr(const ST_CalloutDrop& _drop_attr ){

            m_has_drop_attr = true;
            m_drop_attr = new ST_CalloutDrop(_drop_attr);
        
        }
        const ST_CalloutDrop& drop_attr(){

            if (m_drop_attr)
            {
                return *m_drop_attr;
            }
            return ST_CalloutDrop::default_instance();
        
        }
        bool has_distance_attr(){

            return m_has_distance_attr;
        
        }
        void set_distance_attr(const string& _distance_attr ){

        m_has_distance_attr = true;
        m_distance_attr = _distance_attr;
        
        }
        const string& distance_attr(){

            return type: \string\nname: \m_distance_attr\n;
        
        }
        bool has_lengthspecified_attr(){

            return m_has_lengthspecified_attr;
        
        }
        void set_lengthspecified_attr(const ns_s::ST_TrueFalse& _lengthspecified_attr ){

            m_has_lengthspecified_attr = true;
            m_lengthspecified_attr = new ns_s::ST_TrueFalse(_lengthspecified_attr);
        
        }
        const ns_s::ST_TrueFalse& lengthspecified_attr(){

            if (m_lengthspecified_attr)
            {
                return *m_lengthspecified_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_length_attr(){

            return m_has_length_attr;
        
        }
        void set_length_attr(const string& _length_attr ){

        m_has_length_attr = true;
        m_length_attr = _length_attr;
        
        }
        const string& length_attr(){

            return type: \string\nname: \m_length_attr\n;
        
        }
        bool has_accentbar_attr(){

            return m_has_accentbar_attr;
        
        }
        void set_accentbar_attr(const ns_s::ST_TrueFalse& _accentbar_attr ){

            m_has_accentbar_attr = true;
            m_accentbar_attr = new ns_s::ST_TrueFalse(_accentbar_attr);
        
        }
        const ns_s::ST_TrueFalse& accentbar_attr(){

            if (m_accentbar_attr)
            {
                return *m_accentbar_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_textborder_attr(){

            return m_has_textborder_attr;
        
        }
        void set_textborder_attr(const ns_s::ST_TrueFalse& _textborder_attr ){

            m_has_textborder_attr = true;
            m_textborder_attr = new ns_s::ST_TrueFalse(_textborder_attr);
        
        }
        const ns_s::ST_TrueFalse& textborder_attr(){

            if (m_textborder_attr)
            {
                return *m_textborder_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_minusx_attr(){

            return m_has_minusx_attr;
        
        }
        void set_minusx_attr(const ns_s::ST_TrueFalse& _minusx_attr ){

            m_has_minusx_attr = true;
            m_minusx_attr = new ns_s::ST_TrueFalse(_minusx_attr);
        
        }
        const ns_s::ST_TrueFalse& minusx_attr(){

            if (m_minusx_attr)
            {
                return *m_minusx_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_minusy_attr(){

            return m_has_minusy_attr;
        
        }
        void set_minusy_attr(const ns_s::ST_TrueFalse& _minusy_attr ){

            m_has_minusy_attr = true;
            m_minusy_attr = new ns_s::ST_TrueFalse(_minusy_attr);
        
        }
        const ns_s::ST_TrueFalse& minusy_attr(){

            if (m_minusy_attr)
            {
                return *m_minusy_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }

    private:
        static CT_Callout* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_type_attr ;
        string m_type_attr ;
        bool m_has_gap_attr ;
        string m_gap_attr ;
        bool m_has_angle_attr ;
        ST_Angle* m_angle_attr ;
        bool m_has_dropauto_attr ;
        ns_s::ST_TrueFalse* m_dropauto_attr ;
        bool m_has_drop_attr ;
        ST_CalloutDrop* m_drop_attr ;
        bool m_has_distance_attr ;
        string m_distance_attr ;
        bool m_has_lengthspecified_attr ;
        ns_s::ST_TrueFalse* m_lengthspecified_attr ;
        bool m_has_length_attr ;
        string m_length_attr ;
        bool m_has_accentbar_attr ;
        ns_s::ST_TrueFalse* m_accentbar_attr ;
        bool m_has_textborder_attr ;
        ns_s::ST_TrueFalse* m_textborder_attr ;
        bool m_has_minusx_attr ;
        ns_s::ST_TrueFalse* m_minusx_attr ;
        bool m_has_minusy_attr ;
        ns_s::ST_TrueFalse* m_minusy_attr ;

    }

    class CT_Lock : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_position_attr = false;
                
        if (m_position_attr)
        {
            delete m_position_attr;
            m_position_attr = NULL;
        }
    
            
                m_has_selection_attr = false;
                
        if (m_selection_attr)
        {
            delete m_selection_attr;
            m_selection_attr = NULL;
        }
    
            
                m_has_grouping_attr = false;
                
        if (m_grouping_attr)
        {
            delete m_grouping_attr;
            m_grouping_attr = NULL;
        }
    
            
                m_has_ungrouping_attr = false;
                
        if (m_ungrouping_attr)
        {
            delete m_ungrouping_attr;
            m_ungrouping_attr = NULL;
        }
    
            
                m_has_rotation_attr = false;
                
        if (m_rotation_attr)
        {
            delete m_rotation_attr;
            m_rotation_attr = NULL;
        }
    
            
                m_has_cropping_attr = false;
                
        if (m_cropping_attr)
        {
            delete m_cropping_attr;
            m_cropping_attr = NULL;
        }
    
            
                m_has_verticies_attr = false;
                
        if (m_verticies_attr)
        {
            delete m_verticies_attr;
            m_verticies_attr = NULL;
        }
    
            
                m_has_adjusthandles_attr = false;
                
        if (m_adjusthandles_attr)
        {
            delete m_adjusthandles_attr;
            m_adjusthandles_attr = NULL;
        }
    
            
                m_has_text_attr = false;
                
        if (m_text_attr)
        {
            delete m_text_attr;
            m_text_attr = NULL;
        }
    
            
                m_has_aspectratio_attr = false;
                
        if (m_aspectratio_attr)
        {
            delete m_aspectratio_attr;
            m_aspectratio_attr = NULL;
        }
    
            
                m_has_shapetype_attr = false;
                
        if (m_shapetype_attr)
        {
            delete m_shapetype_attr;
            m_shapetype_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
m_position_attr->toXml(_attrName, _outStream);
m_selection_attr->toXml(_attrName, _outStream);
m_grouping_attr->toXml(_attrName, _outStream);
m_ungrouping_attr->toXml(_attrName, _outStream);
m_rotation_attr->toXml(_attrName, _outStream);
m_cropping_attr->toXml(_attrName, _outStream);
m_verticies_attr->toXml(_attrName, _outStream);
m_adjusthandles_attr->toXml(_attrName, _outStream);
m_text_attr->toXml(_attrName, _outStream);
m_aspectratio_attr->toXml(_attrName, _outStream);
m_shapetype_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Lock& default_instance(){

    if (!CT_Lock::default_instance_)
    {
        CT_Lock::default_instance_ = new CT_Lock();
    }
    return *CT_Lock::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_position_attr(){

            return m_has_position_attr;
        
        }
        void set_position_attr(const ns_s::ST_TrueFalse& _position_attr ){

            m_has_position_attr = true;
            m_position_attr = new ns_s::ST_TrueFalse(_position_attr);
        
        }
        const ns_s::ST_TrueFalse& position_attr(){

            if (m_position_attr)
            {
                return *m_position_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_selection_attr(){

            return m_has_selection_attr;
        
        }
        void set_selection_attr(const ns_s::ST_TrueFalse& _selection_attr ){

            m_has_selection_attr = true;
            m_selection_attr = new ns_s::ST_TrueFalse(_selection_attr);
        
        }
        const ns_s::ST_TrueFalse& selection_attr(){

            if (m_selection_attr)
            {
                return *m_selection_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_grouping_attr(){

            return m_has_grouping_attr;
        
        }
        void set_grouping_attr(const ns_s::ST_TrueFalse& _grouping_attr ){

            m_has_grouping_attr = true;
            m_grouping_attr = new ns_s::ST_TrueFalse(_grouping_attr);
        
        }
        const ns_s::ST_TrueFalse& grouping_attr(){

            if (m_grouping_attr)
            {
                return *m_grouping_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_ungrouping_attr(){

            return m_has_ungrouping_attr;
        
        }
        void set_ungrouping_attr(const ns_s::ST_TrueFalse& _ungrouping_attr ){

            m_has_ungrouping_attr = true;
            m_ungrouping_attr = new ns_s::ST_TrueFalse(_ungrouping_attr);
        
        }
        const ns_s::ST_TrueFalse& ungrouping_attr(){

            if (m_ungrouping_attr)
            {
                return *m_ungrouping_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_rotation_attr(){

            return m_has_rotation_attr;
        
        }
        void set_rotation_attr(const ns_s::ST_TrueFalse& _rotation_attr ){

            m_has_rotation_attr = true;
            m_rotation_attr = new ns_s::ST_TrueFalse(_rotation_attr);
        
        }
        const ns_s::ST_TrueFalse& rotation_attr(){

            if (m_rotation_attr)
            {
                return *m_rotation_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_cropping_attr(){

            return m_has_cropping_attr;
        
        }
        void set_cropping_attr(const ns_s::ST_TrueFalse& _cropping_attr ){

            m_has_cropping_attr = true;
            m_cropping_attr = new ns_s::ST_TrueFalse(_cropping_attr);
        
        }
        const ns_s::ST_TrueFalse& cropping_attr(){

            if (m_cropping_attr)
            {
                return *m_cropping_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_verticies_attr(){

            return m_has_verticies_attr;
        
        }
        void set_verticies_attr(const ns_s::ST_TrueFalse& _verticies_attr ){

            m_has_verticies_attr = true;
            m_verticies_attr = new ns_s::ST_TrueFalse(_verticies_attr);
        
        }
        const ns_s::ST_TrueFalse& verticies_attr(){

            if (m_verticies_attr)
            {
                return *m_verticies_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_adjusthandles_attr(){

            return m_has_adjusthandles_attr;
        
        }
        void set_adjusthandles_attr(const ns_s::ST_TrueFalse& _adjusthandles_attr ){

            m_has_adjusthandles_attr = true;
            m_adjusthandles_attr = new ns_s::ST_TrueFalse(_adjusthandles_attr);
        
        }
        const ns_s::ST_TrueFalse& adjusthandles_attr(){

            if (m_adjusthandles_attr)
            {
                return *m_adjusthandles_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_text_attr(){

            return m_has_text_attr;
        
        }
        void set_text_attr(const ns_s::ST_TrueFalse& _text_attr ){

            m_has_text_attr = true;
            m_text_attr = new ns_s::ST_TrueFalse(_text_attr);
        
        }
        const ns_s::ST_TrueFalse& text_attr(){

            if (m_text_attr)
            {
                return *m_text_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_aspectratio_attr(){

            return m_has_aspectratio_attr;
        
        }
        void set_aspectratio_attr(const ns_s::ST_TrueFalse& _aspectratio_attr ){

            m_has_aspectratio_attr = true;
            m_aspectratio_attr = new ns_s::ST_TrueFalse(_aspectratio_attr);
        
        }
        const ns_s::ST_TrueFalse& aspectratio_attr(){

            if (m_aspectratio_attr)
            {
                return *m_aspectratio_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_shapetype_attr(){

            return m_has_shapetype_attr;
        
        }
        void set_shapetype_attr(const ns_s::ST_TrueFalse& _shapetype_attr ){

            m_has_shapetype_attr = true;
            m_shapetype_attr = new ns_s::ST_TrueFalse(_shapetype_attr);
        
        }
        const ns_s::ST_TrueFalse& shapetype_attr(){

            if (m_shapetype_attr)
            {
                return *m_shapetype_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }

    private:
        static CT_Lock* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_position_attr ;
        ns_s::ST_TrueFalse* m_position_attr ;
        bool m_has_selection_attr ;
        ns_s::ST_TrueFalse* m_selection_attr ;
        bool m_has_grouping_attr ;
        ns_s::ST_TrueFalse* m_grouping_attr ;
        bool m_has_ungrouping_attr ;
        ns_s::ST_TrueFalse* m_ungrouping_attr ;
        bool m_has_rotation_attr ;
        ns_s::ST_TrueFalse* m_rotation_attr ;
        bool m_has_cropping_attr ;
        ns_s::ST_TrueFalse* m_cropping_attr ;
        bool m_has_verticies_attr ;
        ns_s::ST_TrueFalse* m_verticies_attr ;
        bool m_has_adjusthandles_attr ;
        ns_s::ST_TrueFalse* m_adjusthandles_attr ;
        bool m_has_text_attr ;
        ns_s::ST_TrueFalse* m_text_attr ;
        bool m_has_aspectratio_attr ;
        ns_s::ST_TrueFalse* m_aspectratio_attr ;
        bool m_has_shapetype_attr ;
        ns_s::ST_TrueFalse* m_shapetype_attr ;

    }

    class CT_OLEObject : public XSD::ComplexType{
    public:
        bool has_LinkType(){

            return m_has_LinkType;
        
        }
        ST_OLELinkType* mutable_LinkType(){

                m_has_LinkType = true;
                if (!m_LinkType)
                {
                    m_LinkType = new ST_OLELinkType();
                }
                return m_LinkType;
            
        }
        const ST_OLELinkType& LinkType(){

            if (m_LinkType)
            {
                return *m_LinkType;
            }
            return ST_OLELinkType::default_instance();
        
        }
        bool has_LockedField(){

            return m_has_LockedField;
        
        }
        ns_s::ST_TrueFalseBlank* mutable_LockedField(){

                m_has_LockedField = true;
                if (!m_LockedField)
                {
                    m_LockedField = new ns_s::ST_TrueFalseBlank();
                }
                return m_LockedField;
            
        }
        const ns_s::ST_TrueFalseBlank& LockedField(){

            if (m_LockedField)
            {
                return *m_LockedField;
            }
            return ns_s::ST_TrueFalseBlank::default_instance();
        
        }
        bool has_FieldCodes(){

        return m_has_FieldCodes;
    
        }
        void set_FieldCodes(const string& _FieldCodes ){

            m_has_FieldCodes = true;
            string = _FieldCodes;
            
        }
        const string& FieldCodes(){

        return type: \string\nname: \m_FieldCodes\n;
    
        }
        void clear(){

                m_has_Type_attr = false;
                
        if (m_Type_attr)
        {
            delete m_Type_attr;
            m_Type_attr = NULL;
        }
    
            
                m_has_ProgID_attr = false;
                m_ProgID_attr.clear();
            
                m_has_ShapeID_attr = false;
                m_ShapeID_attr.clear();
            
                m_has_DrawAspect_attr = false;
                
        if (m_DrawAspect_attr)
        {
            delete m_DrawAspect_attr;
            m_DrawAspect_attr = NULL;
        }
    
            
                m_has_ObjectID_attr = false;
                m_ObjectID_attr.clear();
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_UpdateMode_attr = false;
                
        if (m_UpdateMode_attr)
        {
            delete m_UpdateMode_attr;
            m_UpdateMode_attr = NULL;
        }
    
            
                m_has_LinkType = false;
                
        if (m_LinkType)
        {
            delete m_LinkType;
            m_LinkType = NULL;
        }
    
            
                m_has_LockedField = false;
                
        if (m_LockedField)
        {
            delete m_LockedField;
            m_LockedField = NULL;
        }
    
            
                m_has_FieldCodes = false;
                m_FieldCodes.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_Type_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_ProgID_attr << \\\;
_outStream << _attrName << \=\\ << m_ShapeID_attr << \\\;
m_DrawAspect_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_ObjectID_attr << \\\;
m_id_attr->toXml(_attrName, _outStream);
m_UpdateMode_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_LinkType)
                {
                    _outStream << \<LinkType>\ << m_LinkType->toString() << \</LinkType>\;;
                }
            
                if (m_has_LockedField)
                {
                    _outStream << \<LockedField>\ << m_LinkType->toString() << \</LockedField>\;;
                }
            
                if (m_has_FieldCodes)
                {
                    _outStream << \<FieldCodes>\ << m_LinkType << \</FieldCodes>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_OLEObject& default_instance(){

    if (!CT_OLEObject::default_instance_)
    {
        CT_OLEObject::default_instance_ = new CT_OLEObject();
    }
    return *CT_OLEObject::default_instance_;

        }
        bool has_Type_attr(){

            return m_has_Type_attr;
        
        }
        void set_Type_attr(const ST_OLEType& _Type_attr ){

            m_has_Type_attr = true;
            m_Type_attr = new ST_OLEType(_Type_attr);
        
        }
        const ST_OLEType& Type_attr(){

            if (m_Type_attr)
            {
                return *m_Type_attr;
            }
            return ST_OLEType::default_instance();
        
        }
        bool has_ProgID_attr(){

            return m_has_ProgID_attr;
        
        }
        void set_ProgID_attr(const string& _ProgID_attr ){

        m_has_ProgID_attr = true;
        m_ProgID_attr = _ProgID_attr;
        
        }
        const string& ProgID_attr(){

            return type: \string\nname: \m_ProgID_attr\n;
        
        }
        bool has_ShapeID_attr(){

            return m_has_ShapeID_attr;
        
        }
        void set_ShapeID_attr(const string& _ShapeID_attr ){

        m_has_ShapeID_attr = true;
        m_ShapeID_attr = _ShapeID_attr;
        
        }
        const string& ShapeID_attr(){

            return type: \string\nname: \m_ShapeID_attr\n;
        
        }
        bool has_DrawAspect_attr(){

            return m_has_DrawAspect_attr;
        
        }
        void set_DrawAspect_attr(const ST_OLEDrawAspect& _DrawAspect_attr ){

            m_has_DrawAspect_attr = true;
            m_DrawAspect_attr = new ST_OLEDrawAspect(_DrawAspect_attr);
        
        }
        const ST_OLEDrawAspect& DrawAspect_attr(){

            if (m_DrawAspect_attr)
            {
                return *m_DrawAspect_attr;
            }
            return ST_OLEDrawAspect::default_instance();
        
        }
        bool has_ObjectID_attr(){

            return m_has_ObjectID_attr;
        
        }
        void set_ObjectID_attr(const string& _ObjectID_attr ){

        m_has_ObjectID_attr = true;
        m_ObjectID_attr = _ObjectID_attr;
        
        }
        const string& ObjectID_attr(){

            return type: \string\nname: \m_ObjectID_attr\n;
        
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
        bool has_UpdateMode_attr(){

            return m_has_UpdateMode_attr;
        
        }
        void set_UpdateMode_attr(const ST_OLEUpdateMode& _UpdateMode_attr ){

            m_has_UpdateMode_attr = true;
            m_UpdateMode_attr = new ST_OLEUpdateMode(_UpdateMode_attr);
        
        }
        const ST_OLEUpdateMode& UpdateMode_attr(){

            if (m_UpdateMode_attr)
            {
                return *m_UpdateMode_attr;
            }
            return ST_OLEUpdateMode::default_instance();
        
        }

    private:
        bool m_has_LinkType ;
        ST_OLELinkType* m_LinkType ;
        bool m_has_LockedField ;
        ns_s::ST_TrueFalseBlank* m_LockedField ;
        bool m_has_FieldCodes ;
        string m_FieldCodes ;
        static CT_OLEObject* default_instance_ ;
        bool m_has_Type_attr ;
        ST_OLEType* m_Type_attr ;
        bool m_has_ProgID_attr ;
        string m_ProgID_attr ;
        bool m_has_ShapeID_attr ;
        string m_ShapeID_attr ;
        bool m_has_DrawAspect_attr ;
        ST_OLEDrawAspect* m_DrawAspect_attr ;
        bool m_has_ObjectID_attr ;
        string m_ObjectID_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;
        bool m_has_UpdateMode_attr ;
        ST_OLEUpdateMode* m_UpdateMode_attr ;

    }

    class CT_Complex : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Complex& default_instance(){

    if (!CT_Complex::default_instance_)
    {
        CT_Complex::default_instance_ = new CT_Complex();
    }
    return *CT_Complex::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }

    private:
        static CT_Complex* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;

    }

    class CT_StrokeChild : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_on_attr = false;
                
        if (m_on_attr)
        {
            delete m_on_attr;
            m_on_attr = NULL;
        }
    
            
                m_has_weight_attr = false;
                m_weight_attr.clear();
            
                m_has_color_attr = false;
                
        if (m_color_attr)
        {
            delete m_color_attr;
            m_color_attr = NULL;
        }
    
            
                m_has_color2_attr = false;
                
        if (m_color2_attr)
        {
            delete m_color2_attr;
            m_color2_attr = NULL;
        }
    
            
                m_has_opacity_attr = false;
                m_opacity_attr.clear();
            
                m_has_linestyle_attr = false;
                
        if (m_linestyle_attr)
        {
            delete m_linestyle_attr;
            m_linestyle_attr = NULL;
        }
    
            
                m_has_miterlimit_attr = false;
                m_miterlimit_attr = 0;
            
                m_has_joinstyle_attr = false;
                
        if (m_joinstyle_attr)
        {
            delete m_joinstyle_attr;
            m_joinstyle_attr = NULL;
        }
    
            
                m_has_endcap_attr = false;
                
        if (m_endcap_attr)
        {
            delete m_endcap_attr;
            m_endcap_attr = NULL;
        }
    
            
                m_has_dashstyle_attr = false;
                m_dashstyle_attr.clear();
            
                m_has_insetpen_attr = false;
                
        if (m_insetpen_attr)
        {
            delete m_insetpen_attr;
            m_insetpen_attr = NULL;
        }
    
            
                m_has_filltype_attr = false;
                
        if (m_filltype_attr)
        {
            delete m_filltype_attr;
            m_filltype_attr = NULL;
        }
    
            
                m_has_src_attr = false;
                m_src_attr.clear();
            
                m_has_imageaspect_attr = false;
                
        if (m_imageaspect_attr)
        {
            delete m_imageaspect_attr;
            m_imageaspect_attr = NULL;
        }
    
            
                m_has_imagesize_attr = false;
                m_imagesize_attr.clear();
            
                m_has_imagealignshape_attr = false;
                
        if (m_imagealignshape_attr)
        {
            delete m_imagealignshape_attr;
            m_imagealignshape_attr = NULL;
        }
    
            
                m_has_startarrow_attr = false;
                
        if (m_startarrow_attr)
        {
            delete m_startarrow_attr;
            m_startarrow_attr = NULL;
        }
    
            
                m_has_startarrowwidth_attr = false;
                
        if (m_startarrowwidth_attr)
        {
            delete m_startarrowwidth_attr;
            m_startarrowwidth_attr = NULL;
        }
    
            
                m_has_startarrowlength_attr = false;
                
        if (m_startarrowlength_attr)
        {
            delete m_startarrowlength_attr;
            m_startarrowlength_attr = NULL;
        }
    
            
                m_has_endarrow_attr = false;
                
        if (m_endarrow_attr)
        {
            delete m_endarrow_attr;
            m_endarrow_attr = NULL;
        }
    
            
                m_has_endarrowwidth_attr = false;
                
        if (m_endarrowwidth_attr)
        {
            delete m_endarrowwidth_attr;
            m_endarrowwidth_attr = NULL;
        }
    
            
                m_has_endarrowlength_attr = false;
                
        if (m_endarrowlength_attr)
        {
            delete m_endarrowlength_attr;
            m_endarrowlength_attr = NULL;
        }
    
            
                m_has_href_attr = false;
                m_href_attr.clear();
            
                m_has_althref_attr = false;
                m_althref_attr.clear();
            
                m_has_title_attr = false;
                m_title_attr.clear();
            
                m_has_forcedash_attr = false;
                
        if (m_forcedash_attr)
        {
            delete m_forcedash_attr;
            m_forcedash_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
m_on_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_weight_attr << \\\;
m_color_attr->toXml(_attrName, _outStream);
m_color2_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_opacity_attr << \\\;
m_linestyle_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_miterlimit_attr << \\\;
m_joinstyle_attr->toXml(_attrName, _outStream);
m_endcap_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_dashstyle_attr << \\\;
m_insetpen_attr->toXml(_attrName, _outStream);
m_filltype_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_src_attr << \\\;
m_imageaspect_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_imagesize_attr << \\\;
m_imagealignshape_attr->toXml(_attrName, _outStream);
m_startarrow_attr->toXml(_attrName, _outStream);
m_startarrowwidth_attr->toXml(_attrName, _outStream);
m_startarrowlength_attr->toXml(_attrName, _outStream);
m_endarrow_attr->toXml(_attrName, _outStream);
m_endarrowwidth_attr->toXml(_attrName, _outStream);
m_endarrowlength_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_href_attr << \\\;
_outStream << _attrName << \=\\ << m_althref_attr << \\\;
_outStream << _attrName << \=\\ << m_title_attr << \\\;
m_forcedash_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_StrokeChild& default_instance(){

    if (!CT_StrokeChild::default_instance_)
    {
        CT_StrokeChild::default_instance_ = new CT_StrokeChild();
    }
    return *CT_StrokeChild::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_on_attr(){

            return m_has_on_attr;
        
        }
        void set_on_attr(const ns_s::ST_TrueFalse& _on_attr ){

            m_has_on_attr = true;
            m_on_attr = new ns_s::ST_TrueFalse(_on_attr);
        
        }
        const ns_s::ST_TrueFalse& on_attr(){

            if (m_on_attr)
            {
                return *m_on_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_weight_attr(){

            return m_has_weight_attr;
        
        }
        void set_weight_attr(const string& _weight_attr ){

        m_has_weight_attr = true;
        m_weight_attr = _weight_attr;
        
        }
        const string& weight_attr(){

            return type: \string\nname: \m_weight_attr\n;
        
        }
        bool has_color_attr(){

            return m_has_color_attr;
        
        }
        void set_color_attr(const ns_s::ST_ColorType& _color_attr ){

            m_has_color_attr = true;
            m_color_attr = new ns_s::ST_ColorType(_color_attr);
        
        }
        const ns_s::ST_ColorType& color_attr(){

            if (m_color_attr)
            {
                return *m_color_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }
        bool has_color2_attr(){

            return m_has_color2_attr;
        
        }
        void set_color2_attr(const ns_s::ST_ColorType& _color2_attr ){

            m_has_color2_attr = true;
            m_color2_attr = new ns_s::ST_ColorType(_color2_attr);
        
        }
        const ns_s::ST_ColorType& color2_attr(){

            if (m_color2_attr)
            {
                return *m_color2_attr;
            }
            return ns_s::ST_ColorType::default_instance();
        
        }
        bool has_opacity_attr(){

            return m_has_opacity_attr;
        
        }
        void set_opacity_attr(const string& _opacity_attr ){

        m_has_opacity_attr = true;
        m_opacity_attr = _opacity_attr;
        
        }
        const string& opacity_attr(){

            return type: \string\nname: \m_opacity_attr\n;
        
        }
        bool has_linestyle_attr(){

            return m_has_linestyle_attr;
        
        }
        void set_linestyle_attr(const ns_v::ST_StrokeLineStyle& _linestyle_attr ){

            m_has_linestyle_attr = true;
            m_linestyle_attr = new ns_v::ST_StrokeLineStyle(_linestyle_attr);
        
        }
        const ns_v::ST_StrokeLineStyle& linestyle_attr(){

            if (m_linestyle_attr)
            {
                return *m_linestyle_attr;
            }
            return ns_v::ST_StrokeLineStyle::default_instance();
        
        }
        bool has_miterlimit_attr(){

            return m_has_miterlimit_attr;
        
        }
        void set_miterlimit_attr(const decimal& _miterlimit_attr ){

        m_has_miterlimit_attr = true;
        m_miterlimit_attr = _miterlimit_attr;
        
        }
        const decimal& miterlimit_attr(){

            return type: \decimal\nname: \m_miterlimit_attr\n;
        
        }
        bool has_joinstyle_attr(){

            return m_has_joinstyle_attr;
        
        }
        void set_joinstyle_attr(const ns_v::ST_StrokeJoinStyle& _joinstyle_attr ){

            m_has_joinstyle_attr = true;
            m_joinstyle_attr = new ns_v::ST_StrokeJoinStyle(_joinstyle_attr);
        
        }
        const ns_v::ST_StrokeJoinStyle& joinstyle_attr(){

            if (m_joinstyle_attr)
            {
                return *m_joinstyle_attr;
            }
            return ns_v::ST_StrokeJoinStyle::default_instance();
        
        }
        bool has_endcap_attr(){

            return m_has_endcap_attr;
        
        }
        void set_endcap_attr(const ns_v::ST_StrokeEndCap& _endcap_attr ){

            m_has_endcap_attr = true;
            m_endcap_attr = new ns_v::ST_StrokeEndCap(_endcap_attr);
        
        }
        const ns_v::ST_StrokeEndCap& endcap_attr(){

            if (m_endcap_attr)
            {
                return *m_endcap_attr;
            }
            return ns_v::ST_StrokeEndCap::default_instance();
        
        }
        bool has_dashstyle_attr(){

            return m_has_dashstyle_attr;
        
        }
        void set_dashstyle_attr(const string& _dashstyle_attr ){

        m_has_dashstyle_attr = true;
        m_dashstyle_attr = _dashstyle_attr;
        
        }
        const string& dashstyle_attr(){

            return type: \string\nname: \m_dashstyle_attr\n;
        
        }
        bool has_insetpen_attr(){

            return m_has_insetpen_attr;
        
        }
        void set_insetpen_attr(const ns_s::ST_TrueFalse& _insetpen_attr ){

            m_has_insetpen_attr = true;
            m_insetpen_attr = new ns_s::ST_TrueFalse(_insetpen_attr);
        
        }
        const ns_s::ST_TrueFalse& insetpen_attr(){

            if (m_insetpen_attr)
            {
                return *m_insetpen_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_filltype_attr(){

            return m_has_filltype_attr;
        
        }
        void set_filltype_attr(const ns_v::ST_FillType& _filltype_attr ){

            m_has_filltype_attr = true;
            m_filltype_attr = new ns_v::ST_FillType(_filltype_attr);
        
        }
        const ns_v::ST_FillType& filltype_attr(){

            if (m_filltype_attr)
            {
                return *m_filltype_attr;
            }
            return ns_v::ST_FillType::default_instance();
        
        }
        bool has_src_attr(){

            return m_has_src_attr;
        
        }
        void set_src_attr(const string& _src_attr ){

        m_has_src_attr = true;
        m_src_attr = _src_attr;
        
        }
        const string& src_attr(){

            return type: \string\nname: \m_src_attr\n;
        
        }
        bool has_imageaspect_attr(){

            return m_has_imageaspect_attr;
        
        }
        void set_imageaspect_attr(const ns_v::ST_ImageAspect& _imageaspect_attr ){

            m_has_imageaspect_attr = true;
            m_imageaspect_attr = new ns_v::ST_ImageAspect(_imageaspect_attr);
        
        }
        const ns_v::ST_ImageAspect& imageaspect_attr(){

            if (m_imageaspect_attr)
            {
                return *m_imageaspect_attr;
            }
            return ns_v::ST_ImageAspect::default_instance();
        
        }
        bool has_imagesize_attr(){

            return m_has_imagesize_attr;
        
        }
        void set_imagesize_attr(const string& _imagesize_attr ){

        m_has_imagesize_attr = true;
        m_imagesize_attr = _imagesize_attr;
        
        }
        const string& imagesize_attr(){

            return type: \string\nname: \m_imagesize_attr\n;
        
        }
        bool has_imagealignshape_attr(){

            return m_has_imagealignshape_attr;
        
        }
        void set_imagealignshape_attr(const ns_s::ST_TrueFalse& _imagealignshape_attr ){

            m_has_imagealignshape_attr = true;
            m_imagealignshape_attr = new ns_s::ST_TrueFalse(_imagealignshape_attr);
        
        }
        const ns_s::ST_TrueFalse& imagealignshape_attr(){

            if (m_imagealignshape_attr)
            {
                return *m_imagealignshape_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }
        bool has_startarrow_attr(){

            return m_has_startarrow_attr;
        
        }
        void set_startarrow_attr(const ns_v::ST_StrokeArrowType& _startarrow_attr ){

            m_has_startarrow_attr = true;
            m_startarrow_attr = new ns_v::ST_StrokeArrowType(_startarrow_attr);
        
        }
        const ns_v::ST_StrokeArrowType& startarrow_attr(){

            if (m_startarrow_attr)
            {
                return *m_startarrow_attr;
            }
            return ns_v::ST_StrokeArrowType::default_instance();
        
        }
        bool has_startarrowwidth_attr(){

            return m_has_startarrowwidth_attr;
        
        }
        void set_startarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _startarrowwidth_attr ){

            m_has_startarrowwidth_attr = true;
            m_startarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_startarrowwidth_attr);
        
        }
        const ns_v::ST_StrokeArrowWidth& startarrowwidth_attr(){

            if (m_startarrowwidth_attr)
            {
                return *m_startarrowwidth_attr;
            }
            return ns_v::ST_StrokeArrowWidth::default_instance();
        
        }
        bool has_startarrowlength_attr(){

            return m_has_startarrowlength_attr;
        
        }
        void set_startarrowlength_attr(const ns_v::ST_StrokeArrowLength& _startarrowlength_attr ){

            m_has_startarrowlength_attr = true;
            m_startarrowlength_attr = new ns_v::ST_StrokeArrowLength(_startarrowlength_attr);
        
        }
        const ns_v::ST_StrokeArrowLength& startarrowlength_attr(){

            if (m_startarrowlength_attr)
            {
                return *m_startarrowlength_attr;
            }
            return ns_v::ST_StrokeArrowLength::default_instance();
        
        }
        bool has_endarrow_attr(){

            return m_has_endarrow_attr;
        
        }
        void set_endarrow_attr(const ns_v::ST_StrokeArrowType& _endarrow_attr ){

            m_has_endarrow_attr = true;
            m_endarrow_attr = new ns_v::ST_StrokeArrowType(_endarrow_attr);
        
        }
        const ns_v::ST_StrokeArrowType& endarrow_attr(){

            if (m_endarrow_attr)
            {
                return *m_endarrow_attr;
            }
            return ns_v::ST_StrokeArrowType::default_instance();
        
        }
        bool has_endarrowwidth_attr(){

            return m_has_endarrowwidth_attr;
        
        }
        void set_endarrowwidth_attr(const ns_v::ST_StrokeArrowWidth& _endarrowwidth_attr ){

            m_has_endarrowwidth_attr = true;
            m_endarrowwidth_attr = new ns_v::ST_StrokeArrowWidth(_endarrowwidth_attr);
        
        }
        const ns_v::ST_StrokeArrowWidth& endarrowwidth_attr(){

            if (m_endarrowwidth_attr)
            {
                return *m_endarrowwidth_attr;
            }
            return ns_v::ST_StrokeArrowWidth::default_instance();
        
        }
        bool has_endarrowlength_attr(){

            return m_has_endarrowlength_attr;
        
        }
        void set_endarrowlength_attr(const ns_v::ST_StrokeArrowLength& _endarrowlength_attr ){

            m_has_endarrowlength_attr = true;
            m_endarrowlength_attr = new ns_v::ST_StrokeArrowLength(_endarrowlength_attr);
        
        }
        const ns_v::ST_StrokeArrowLength& endarrowlength_attr(){

            if (m_endarrowlength_attr)
            {
                return *m_endarrowlength_attr;
            }
            return ns_v::ST_StrokeArrowLength::default_instance();
        
        }
        bool has_href_attr(){

            return m_has_href_attr;
        
        }
        void set_href_attr(const string& _href_attr ){

        m_has_href_attr = true;
        m_href_attr = _href_attr;
        
        }
        const string& href_attr(){

            return type: \string\nname: \m_href_attr\n;
        
        }
        bool has_althref_attr(){

            return m_has_althref_attr;
        
        }
        void set_althref_attr(const string& _althref_attr ){

        m_has_althref_attr = true;
        m_althref_attr = _althref_attr;
        
        }
        const string& althref_attr(){

            return type: \string\nname: \m_althref_attr\n;
        
        }
        bool has_title_attr(){

            return m_has_title_attr;
        
        }
        void set_title_attr(const string& _title_attr ){

        m_has_title_attr = true;
        m_title_attr = _title_attr;
        
        }
        const string& title_attr(){

            return type: \string\nname: \m_title_attr\n;
        
        }
        bool has_forcedash_attr(){

            return m_has_forcedash_attr;
        
        }
        void set_forcedash_attr(const ns_s::ST_TrueFalse& _forcedash_attr ){

            m_has_forcedash_attr = true;
            m_forcedash_attr = new ns_s::ST_TrueFalse(_forcedash_attr);
        
        }
        const ns_s::ST_TrueFalse& forcedash_attr(){

            if (m_forcedash_attr)
            {
                return *m_forcedash_attr;
            }
            return ns_s::ST_TrueFalse::default_instance();
        
        }

    private:
        static CT_StrokeChild* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_on_attr ;
        ns_s::ST_TrueFalse* m_on_attr ;
        bool m_has_weight_attr ;
        string m_weight_attr ;
        bool m_has_color_attr ;
        ns_s::ST_ColorType* m_color_attr ;
        bool m_has_color2_attr ;
        ns_s::ST_ColorType* m_color2_attr ;
        bool m_has_opacity_attr ;
        string m_opacity_attr ;
        bool m_has_linestyle_attr ;
        ns_v::ST_StrokeLineStyle* m_linestyle_attr ;
        bool m_has_miterlimit_attr ;
        decimal m_miterlimit_attr ;
        bool m_has_joinstyle_attr ;
        ns_v::ST_StrokeJoinStyle* m_joinstyle_attr ;
        bool m_has_endcap_attr ;
        ns_v::ST_StrokeEndCap* m_endcap_attr ;
        bool m_has_dashstyle_attr ;
        string m_dashstyle_attr ;
        bool m_has_insetpen_attr ;
        ns_s::ST_TrueFalse* m_insetpen_attr ;
        bool m_has_filltype_attr ;
        ns_v::ST_FillType* m_filltype_attr ;
        bool m_has_src_attr ;
        string m_src_attr ;
        bool m_has_imageaspect_attr ;
        ns_v::ST_ImageAspect* m_imageaspect_attr ;
        bool m_has_imagesize_attr ;
        string m_imagesize_attr ;
        bool m_has_imagealignshape_attr ;
        ns_s::ST_TrueFalse* m_imagealignshape_attr ;
        bool m_has_startarrow_attr ;
        ns_v::ST_StrokeArrowType* m_startarrow_attr ;
        bool m_has_startarrowwidth_attr ;
        ns_v::ST_StrokeArrowWidth* m_startarrowwidth_attr ;
        bool m_has_startarrowlength_attr ;
        ns_v::ST_StrokeArrowLength* m_startarrowlength_attr ;
        bool m_has_endarrow_attr ;
        ns_v::ST_StrokeArrowType* m_endarrow_attr ;
        bool m_has_endarrowwidth_attr ;
        ns_v::ST_StrokeArrowWidth* m_endarrowwidth_attr ;
        bool m_has_endarrowlength_attr ;
        ns_v::ST_StrokeArrowLength* m_endarrowlength_attr ;
        bool m_has_href_attr ;
        string m_href_attr ;
        bool m_has_althref_attr ;
        string m_althref_attr ;
        bool m_has_title_attr ;
        string m_title_attr ;
        bool m_has_forcedash_attr ;
        ns_s::ST_TrueFalse* m_forcedash_attr ;

    }

    class CT_ClipPath : public XSD::ComplexType{
    public:
        void clear(){

                m_has_v_attr = false;
                m_v_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_v_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ClipPath& default_instance(){

    if (!CT_ClipPath::default_instance_)
    {
        CT_ClipPath::default_instance_ = new CT_ClipPath();
    }
    return *CT_ClipPath::default_instance_;

        }
        bool has_v_attr(){

            return m_has_v_attr;
        
        }
        void set_v_attr(const string& _v_attr ){

        m_has_v_attr = true;
        m_v_attr = _v_attr;
        
        }
        const string& v_attr(){

            return type: \string\nname: \m_v_attr\n;
        
        }

    private:
        static CT_ClipPath* default_instance_ ;
        bool m_has_v_attr ;
        string m_v_attr ;

    }

    class CT_Fill : public XSD::ComplexType{
    public:
        void clear(){

                m_has_ext_attr = false;
                
        if (m_ext_attr)
        {
            delete m_ext_attr;
            m_ext_attr = NULL;
        }
    
            
                m_has_type_attr = false;
                
        if (m_type_attr)
        {
            delete m_type_attr;
            m_type_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_ext_attr->toXml(_attrName, _outStream);
m_type_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Fill& default_instance(){

    if (!CT_Fill::default_instance_)
    {
        CT_Fill::default_instance_ = new CT_Fill();
    }
    return *CT_Fill::default_instance_;

        }
        bool has_ext_attr(){

            return m_has_ext_attr;
        
        }
        void set_ext_attr(const ST_Ext& _ext_attr ){

            m_has_ext_attr = true;
            m_ext_attr = new ST_Ext(_ext_attr);
        
        }
        const ST_Ext& ext_attr(){

            if (m_ext_attr)
            {
                return *m_ext_attr;
            }
            return ST_Ext::default_instance();
        
        }
        bool has_type_attr(){

            return m_has_type_attr;
        
        }
        void set_type_attr(const ST_FillType& _type_attr ){

            m_has_type_attr = true;
            m_type_attr = new ST_FillType(_type_attr);
        
        }
        const ST_FillType& type_attr(){

            if (m_type_attr)
            {
                return *m_type_attr;
            }
            return ST_FillType::default_instance();
        
        }

    private:
        static CT_Fill* default_instance_ ;
        bool m_has_ext_attr ;
        ST_Ext* m_ext_attr ;
        bool m_has_type_attr ;
        ST_FillType* m_type_attr ;

    }

    class shapedefaults : public CT_ShapeDefaults : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_ShapeDefaults::toXml(\shapedefaults\, _outStream);
    
        }

    private:

    }

    class shapelayout : public CT_ShapeLayout : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_ShapeLayout::toXml(\shapelayout\, _outStream);
    
        }

    private:

    }

    class signatureline : public CT_SignatureLine : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_SignatureLine::toXml(\signatureline\, _outStream);
    
        }

    private:

    }

    class ink : public CT_Ink : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Ink::toXml(\ink\, _outStream);
    
        }

    private:

    }

    class diagram : public CT_Diagram : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Diagram::toXml(\diagram\, _outStream);
    
        }

    private:

    }

    class equationxml : public CT_EquationXml : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_EquationXml::toXml(\equationxml\, _outStream);
    
        }

    private:

    }

    class skew : public CT_Skew : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Skew::toXml(\skew\, _outStream);
    
        }

    private:

    }

    class extrusion : public CT_Extrusion : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Extrusion::toXml(\extrusion\, _outStream);
    
        }

    private:

    }

    class callout : public CT_Callout : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Callout::toXml(\callout\, _outStream);
    
        }

    private:

    }

    class lock : public CT_Lock : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Lock::toXml(\lock\, _outStream);
    
        }

    private:

    }

    class OLEObject : public CT_OLEObject : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_OLEObject::toXml(\OLEObject\, _outStream);
    
        }

    private:

    }

    class complex : public CT_Complex : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Complex::toXml(\complex\, _outStream);
    
        }

    private:

    }

    class left : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_StrokeChild::toXml(\left\, _outStream);
    
        }

    private:

    }

    class top : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_StrokeChild::toXml(	op\, _outStream);
    
        }

    private:

    }

    class right : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_StrokeChild::toXml(ight\, _outStream);
    
        }

    private:

    }

    class bottom : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_StrokeChild::toXml(ottom\, _outStream);
    
        }

    private:

    }

    class column : public CT_StrokeChild : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_StrokeChild::toXml(\column\, _outStream);
    
        }

    private:

    }

    class clippath : public CT_ClipPath : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_ClipPath::toXml(\clippath\, _outStream);
    
        }

    private:

    }

    class fill : public CT_Fill : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Fill::toXml(ill\, _outStream);
    
        }

    private:

    }

    class bwmode_attr : public ST_BWMode : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_BWMode::toXml(wmode\, _outStream);
        
        }

    private:

    }

    class bwpure_attr : public ST_BWMode : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_BWMode::toXml(wpure\, _outStream);
        
        }

    private:

    }

    class bwnormal_attr : public ST_BWMode : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_BWMode::toXml(wnormal\, _outStream);
        
        }

    private:

    }

    class targetscreensize_attr : public ST_ScreenSize : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_ScreenSize::toXml(	argetscreensize\, _outStream);
        
        }

    private:

    }

    class insetmode_attr : public ST_InsetMode : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_InsetMode::toXml(\insetmode\, _outStream);
        
        }

    private:

    }

    class spt_attr : public float : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            float::toXml(\spt\, _outStream);
        
        }

    private:

    }

    class wrapcoords_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(\wrapcoords\, _outStream);
        
        }

    private:

    }

    class oned_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\oned\, _outStream);
        
        }

    private:

    }

    class regroupid_attr : public integer : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            integer::toXml(egroupid\, _outStream);
        
        }

    private:

    }

    class doubleclicknotify_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\doubleclicknotify\, _outStream);
        
        }

    private:

    }

    class connectortype_attr : public ST_ConnectorType : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_ConnectorType::toXml(\connectortype\, _outStream);
        
        }

    private:

    }

    class button_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(utton\, _outStream);
        
        }

    private:

    }

    class userhidden_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\userhidden\, _outStream);
        
        }

    private:

    }

    class forcedash_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(orcedash\, _outStream);
        
        }

    private:

    }

    class oleicon_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\oleicon\, _outStream);
        
        }

    private:

    }

    class ole_attr : public ns_s::ST_TrueFalseBlank : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalseBlank::toXml(\ole\, _outStream);
        
        }

    private:

    }

    class preferrelative_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\preferrelative\, _outStream);
        
        }

    private:

    }

    class cliptowrap_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\cliptowrap\, _outStream);
        
        }

    private:

    }

    class clip_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\clip\, _outStream);
        
        }

    private:

    }

    class bullet_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(ullet\, _outStream);
        
        }

    private:

    }

    class hr_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\hr\, _outStream);
        
        }

    private:

    }

    class hrstd_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\hrstd\, _outStream);
        
        }

    private:

    }

    class hrnoshade_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\hrnoshade\, _outStream);
        
        }

    private:

    }

    class hrpct_attr : public float : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            float::toXml(\hrpct\, _outStream);
        
        }

    private:

    }

    class hralign_attr : public ST_HrAlign : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_HrAlign::toXml(\hralign\, _outStream);
        
        }

    private:

    }

    class allowincell_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(llowincell\, _outStream);
        
        }

    private:

    }

    class allowoverlap_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(llowoverlap\, _outStream);
        
        }

    private:

    }

    class userdrawn_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\userdrawn\, _outStream);
        
        }

    private:

    }

    class bordertopcolor_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(ordertopcolor\, _outStream);
        
        }

    private:

    }

    class borderleftcolor_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(orderleftcolor\, _outStream);
        
        }

    private:

    }

    class borderbottomcolor_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(orderbottomcolor\, _outStream);
        
        }

    private:

    }

    class borderrightcolor_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(orderrightcolor\, _outStream);
        
        }

    private:

    }

    class connecttype_attr : public ST_ConnectType : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_ConnectType::toXml(\connecttype\, _outStream);
        
        }

    private:

    }

    class connectlocs_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(\connectlocs\, _outStream);
        
        }

    private:

    }

    class connectangles_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(\connectangles\, _outStream);
        
        }

    private:

    }

    class master_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(\master\, _outStream);
        
        }

    private:

    }

    class extrusionok_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\extrusionok\, _outStream);
        
        }

    private:

    }

    class href_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(\href\, _outStream);
        
        }

    private:

    }

    class althref_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(lthref\, _outStream);
        
        }

    private:

    }

    class title_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(	itle\, _outStream);
        
        }

    private:

    }

    class singleclick_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\singleclick\, _outStream);
        
        }

    private:

    }

    class oleid_attr : public float : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            float::toXml(\oleid\, _outStream);
        
        }

    private:

    }

    class detectmouseclick_attr : public ns_s::ST_TrueFalse : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_s::ST_TrueFalse::toXml(\detectmouseclick\, _outStream);
        
        }

    private:

    }

    class movie_attr : public float : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            float::toXml(\movie\, _outStream);
        
        }

    private:

    }

    class spid_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(\spid\, _outStream);
        
        }

    private:

    }

    class opacity2_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(\opacity2\, _outStream);
        
        }

    private:

    }

    class relid_attr : public ns_r::ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ns_r::ST_RelationshipId::toXml(elid\, _outStream);
        
        }

    private:

    }

    class dgmlayout_attr : public ST_DiagramLayout : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_DiagramLayout::toXml(\dgmlayout\, _outStream);
        
        }

    private:

    }

    class dgmnodekind_attr : public integer : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            integer::toXml(\dgmnodekind\, _outStream);
        
        }

    private:

    }

    class dgmlayoutmru_attr : public ST_DiagramLayout : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_DiagramLayout::toXml(\dgmlayoutmru\, _outStream);
        
        }

    private:

    }

    class gfxdata_attr : public base64Binary : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            base64Binary::toXml(\gfxdata\, _outStream);
        
        }

    private:

    }

    class tableproperties_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(	ableproperties\, _outStream);
        
        }

    private:

    }

    class tablelimits_attr : public string : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            string::toXml(	ablelimits\, _outStream);
        
        }

    private:

    }

}