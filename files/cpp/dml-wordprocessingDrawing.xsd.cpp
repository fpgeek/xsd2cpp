#include "dml-wordprocessingDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include "dml-main_xsd.h"
#include "wml_xsd.h"
#include "dml-picture_xsd.h"
#include "shared-relationshipReference_xsd.h"
namespace ns_wp{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_WrapDistance : public XSD::SimpleType{
    public:
        ST_WrapDistance(){
            m_has_unsignedInt = false
            m_unsignedInt = 0

        }
        ST_WrapDistance(const XSD::unsignedInt& _unsignedInt ){
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
        const ST_WrapDistance& default_instance(){

    if (!ST_WrapDistance::default_instance_)
    {
        ST_WrapDistance::default_instance_ = new ST_WrapDistance();
    }
    return *ST_WrapDistance::default_instance_;

        }

    private:
        static ST_WrapDistance* default_instance_ ;
        bool m_has_unsignedInt ;
        unsignedInt m_unsignedInt ;

    }

    class ST_WrapText : public XSD::SimpleType{
    public:
        ST_WrapText(){
            m_has_type = false

        }
        ST_WrapText(const Type _type ){
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

        return ST_WrapText::TypeStrList[m_type];
    
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
        const ST_WrapText& default_instance(){

    if (!ST_WrapText::default_instance_)
    {
        ST_WrapText::default_instance_ = new ST_WrapText();
    }
    return *ST_WrapText::default_instance_;

        }
        enum Type{
            _bothSides_ = 1,
            _left_,
            _right_,
            _largest_
        }

    private:
        static const string TypeStrList [];
        static ST_WrapText* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_PositionOffset : public XSD::SimpleType{
    public:
        ST_PositionOffset(){
            m_has_int = false
            m_int = 0

        }
        ST_PositionOffset(const XSD::int& _int ){
            m_has_int = true
            m_int = _int

        }
        bool has_int(){

    return m_has_int;

        }
        void set_int(const int& _int ){

    m_has_int = true;
    m_int = _int;

        }
        const int& int(){

    return m_int;

        }
        void clear(){

    m_has_int = false;
    m_int = 0;;

        }
        void toXml(const string _attrName , ostream _outStream ){

    if (m_has_int)
    {
        _outStream << _attrName << \=\\ << m_int << \\\;;
    }

        }
        const ST_PositionOffset& default_instance(){

    if (!ST_PositionOffset::default_instance_)
    {
        ST_PositionOffset::default_instance_ = new ST_PositionOffset();
    }
    return *ST_PositionOffset::default_instance_;

        }

    private:
        static ST_PositionOffset* default_instance_ ;
        bool m_has_int ;
        int m_int ;

    }

    class ST_AlignH : public XSD::SimpleType{
    public:
        ST_AlignH(){
            m_has_type = false

        }
        ST_AlignH(const Type _type ){
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

        return ST_AlignH::TypeStrList[m_type];
    
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
        const ST_AlignH& default_instance(){

    if (!ST_AlignH::default_instance_)
    {
        ST_AlignH::default_instance_ = new ST_AlignH();
    }
    return *ST_AlignH::default_instance_;

        }
        enum Type{
            _left_ = 1,
            _right_,
            _center_,
            _inside_,
            _outside_
        }

    private:
        static const string TypeStrList [];
        static ST_AlignH* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RelFromH : public XSD::SimpleType{
    public:
        ST_RelFromH(){
            m_has_type = false

        }
        ST_RelFromH(const Type _type ){
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

        return ST_RelFromH::TypeStrList[m_type];
    
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
        const ST_RelFromH& default_instance(){

    if (!ST_RelFromH::default_instance_)
    {
        ST_RelFromH::default_instance_ = new ST_RelFromH();
    }
    return *ST_RelFromH::default_instance_;

        }
        enum Type{
            _margin_ = 1,
            _page_,
            _column_,
            _character_,
            _leftMargin_,
            _rightMargin_,
            _insideMargin_,
            _outsideMargin_
        }

    private:
        static const string TypeStrList [];
        static ST_RelFromH* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_AlignV : public XSD::SimpleType{
    public:
        ST_AlignV(){
            m_has_type = false

        }
        ST_AlignV(const Type _type ){
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

        return ST_AlignV::TypeStrList[m_type];
    
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
        const ST_AlignV& default_instance(){

    if (!ST_AlignV::default_instance_)
    {
        ST_AlignV::default_instance_ = new ST_AlignV();
    }
    return *ST_AlignV::default_instance_;

        }
        enum Type{
            _top_ = 1,
            _bottom_,
            _center_,
            _inside_,
            _outside_
        }

    private:
        static const string TypeStrList [];
        static ST_AlignV* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class ST_RelFromV : public XSD::SimpleType{
    public:
        ST_RelFromV(){
            m_has_type = false

        }
        ST_RelFromV(const Type _type ){
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

        return ST_RelFromV::TypeStrList[m_type];
    
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
        const ST_RelFromV& default_instance(){

    if (!ST_RelFromV::default_instance_)
    {
        ST_RelFromV::default_instance_ = new ST_RelFromV();
    }
    return *ST_RelFromV::default_instance_;

        }
        enum Type{
            _margin_ = 1,
            _page_,
            _paragraph_,
            _line_,
            _topMargin_,
            _bottomMargin_,
            _insideMargin_,
            _outsideMargin_
        }

    private:
        static const string TypeStrList [];
        static ST_RelFromV* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_EffectExtent : public XSD::ComplexType{
    public:
        void clear(){

                m_has_l_attr = false;
                
        if (m_l_attr)
        {
            delete m_l_attr;
            m_l_attr = NULL;
        }
    
            
                m_has_t_attr = false;
                
        if (m_t_attr)
        {
            delete m_t_attr;
            m_t_attr = NULL;
        }
    
            
                m_has_r_attr = false;
                
        if (m_r_attr)
        {
            delete m_r_attr;
            m_r_attr = NULL;
        }
    
            
                m_has_b_attr = false;
                
        if (m_b_attr)
        {
            delete m_b_attr;
            m_b_attr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_l_attr->toXml(_attrName, _outStream);
m_t_attr->toXml(_attrName, _outStream);
m_r_attr->toXml(_attrName, _outStream);
m_b_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_EffectExtent& default_instance(){

    if (!CT_EffectExtent::default_instance_)
    {
        CT_EffectExtent::default_instance_ = new CT_EffectExtent();
    }
    return *CT_EffectExtent::default_instance_;

        }
        bool has_l_attr(){

            return m_has_l_attr;
        
        }
        void set_l_attr(const ns_a::ST_Coordinate& _l_attr ){

            m_has_l_attr = true;
            m_l_attr = new ns_a::ST_Coordinate(_l_attr);
        
        }
        const ns_a::ST_Coordinate& l_attr(){

            if (m_l_attr)
            {
                return *m_l_attr;
            }
            return ns_a::ST_Coordinate::default_instance();
        
        }
        bool has_t_attr(){

            return m_has_t_attr;
        
        }
        void set_t_attr(const ns_a::ST_Coordinate& _t_attr ){

            m_has_t_attr = true;
            m_t_attr = new ns_a::ST_Coordinate(_t_attr);
        
        }
        const ns_a::ST_Coordinate& t_attr(){

            if (m_t_attr)
            {
                return *m_t_attr;
            }
            return ns_a::ST_Coordinate::default_instance();
        
        }
        bool has_r_attr(){

            return m_has_r_attr;
        
        }
        void set_r_attr(const ns_a::ST_Coordinate& _r_attr ){

            m_has_r_attr = true;
            m_r_attr = new ns_a::ST_Coordinate(_r_attr);
        
        }
        const ns_a::ST_Coordinate& r_attr(){

            if (m_r_attr)
            {
                return *m_r_attr;
            }
            return ns_a::ST_Coordinate::default_instance();
        
        }
        bool has_b_attr(){

            return m_has_b_attr;
        
        }
        void set_b_attr(const ns_a::ST_Coordinate& _b_attr ){

            m_has_b_attr = true;
            m_b_attr = new ns_a::ST_Coordinate(_b_attr);
        
        }
        const ns_a::ST_Coordinate& b_attr(){

            if (m_b_attr)
            {
                return *m_b_attr;
            }
            return ns_a::ST_Coordinate::default_instance();
        
        }

    private:
        static CT_EffectExtent* default_instance_ ;
        bool m_has_l_attr ;
        ns_a::ST_Coordinate* m_l_attr ;
        bool m_has_t_attr ;
        ns_a::ST_Coordinate* m_t_attr ;
        bool m_has_r_attr ;
        ns_a::ST_Coordinate* m_r_attr ;
        bool m_has_b_attr ;
        ns_a::ST_Coordinate* m_b_attr ;

    }

    class CT_Inline : public XSD::ComplexType{
    public:
        bool has_extent(){

            return m_has_extent;
        
        }
        ns_a::CT_PositiveSize2D* mutable_extent(){

                m_has_extent = true;
                if (!m_extent)
                {
                    m_extent = new ns_a::CT_PositiveSize2D();
                }
                return m_extent;
            
        }
        const ns_a::CT_PositiveSize2D& extent(){

            if (m_extent)
            {
                return *m_extent;
            }
            return ns_a::CT_PositiveSize2D::default_instance();
        
        }
        bool has_effectExtent(){

            return m_has_effectExtent;
        
        }
        CT_EffectExtent* mutable_effectExtent(){

                m_has_effectExtent = true;
                if (!m_effectExtent)
                {
                    m_effectExtent = new CT_EffectExtent();
                }
                return m_effectExtent;
            
        }
        const CT_EffectExtent& effectExtent(){

            if (m_effectExtent)
            {
                return *m_effectExtent;
            }
            return CT_EffectExtent::default_instance();
        
        }
        bool has_docPr(){

            return m_has_docPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_docPr(){

                m_has_docPr = true;
                if (!m_docPr)
                {
                    m_docPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_docPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& docPr(){

            if (m_docPr)
            {
                return *m_docPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvGraphicFramePr(){

            return m_has_cNvGraphicFramePr;
        
        }
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr(){

                m_has_cNvGraphicFramePr = true;
                if (!m_cNvGraphicFramePr)
                {
                    m_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
                }
                return m_cNvGraphicFramePr;
            
        }
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr(){

            if (m_cNvGraphicFramePr)
            {
                return *m_cNvGraphicFramePr;
            }
            return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
        
        }
        bool has_graphic(){

            return m_has_graphic;
        
        }
        CT_GraphicalObject* mutable_graphic(){

                m_has_graphic = true;
                if (!m_graphic)
                {
                    m_graphic = new CT_GraphicalObject();
                }
                return m_graphic;
            
        }
        const CT_GraphicalObject& graphic(){

            if (m_graphic)
            {
                return *m_graphic;
            }
            return CT_GraphicalObject::default_instance();
        
        }
        void clear(){

                m_has_distT_attr = false;
                
        if (m_distT_attr)
        {
            delete m_distT_attr;
            m_distT_attr = NULL;
        }
    
            
                m_has_distB_attr = false;
                
        if (m_distB_attr)
        {
            delete m_distB_attr;
            m_distB_attr = NULL;
        }
    
            
                m_has_distL_attr = false;
                
        if (m_distL_attr)
        {
            delete m_distL_attr;
            m_distL_attr = NULL;
        }
    
            
                m_has_distR_attr = false;
                
        if (m_distR_attr)
        {
            delete m_distR_attr;
            m_distR_attr = NULL;
        }
    
            
                m_has_extent = false;
                
        if (m_extent)
        {
            delete m_extent;
            m_extent = NULL;
        }
    
            
                m_has_effectExtent = false;
                
        if (m_effectExtent)
        {
            delete m_effectExtent;
            m_effectExtent = NULL;
        }
    
            
                m_has_docPr = false;
                
        if (m_docPr)
        {
            delete m_docPr;
            m_docPr = NULL;
        }
    
            
                m_has_cNvGraphicFramePr = false;
                
        if (m_cNvGraphicFramePr)
        {
            delete m_cNvGraphicFramePr;
            m_cNvGraphicFramePr = NULL;
        }
    
            
                m_has_graphic = false;
                
        if (m_graphic)
        {
            delete m_graphic;
            m_graphic = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_distT_attr->toXml(_attrName, _outStream);
m_distB_attr->toXml(_attrName, _outStream);
m_distL_attr->toXml(_attrName, _outStream);
m_distR_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_extent)
                {
                    m_extent->toXml(extent, _outStream);;
                }
            
                if (m_has_effectExtent)
                {
                    m_extent->toXml(effectExtent, _outStream);;
                }
            
                if (m_has_docPr)
                {
                    m_extent->toXml(docPr, _outStream);;
                }
            
                if (m_has_cNvGraphicFramePr)
                {
                    m_extent->toXml(cNvGraphicFramePr, _outStream);;
                }
            
                if (m_has_graphic)
                {
                    m_extent->toXml(graphic, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Inline& default_instance(){

    if (!CT_Inline::default_instance_)
    {
        CT_Inline::default_instance_ = new CT_Inline();
    }
    return *CT_Inline::default_instance_;

        }
        bool has_distT_attr(){

            return m_has_distT_attr;
        
        }
        void set_distT_attr(const ST_WrapDistance& _distT_attr ){

            m_has_distT_attr = true;
            m_distT_attr = new ST_WrapDistance(_distT_attr);
        
        }
        const ST_WrapDistance& distT_attr(){

            if (m_distT_attr)
            {
                return *m_distT_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distB_attr(){

            return m_has_distB_attr;
        
        }
        void set_distB_attr(const ST_WrapDistance& _distB_attr ){

            m_has_distB_attr = true;
            m_distB_attr = new ST_WrapDistance(_distB_attr);
        
        }
        const ST_WrapDistance& distB_attr(){

            if (m_distB_attr)
            {
                return *m_distB_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distL_attr(){

            return m_has_distL_attr;
        
        }
        void set_distL_attr(const ST_WrapDistance& _distL_attr ){

            m_has_distL_attr = true;
            m_distL_attr = new ST_WrapDistance(_distL_attr);
        
        }
        const ST_WrapDistance& distL_attr(){

            if (m_distL_attr)
            {
                return *m_distL_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distR_attr(){

            return m_has_distR_attr;
        
        }
        void set_distR_attr(const ST_WrapDistance& _distR_attr ){

            m_has_distR_attr = true;
            m_distR_attr = new ST_WrapDistance(_distR_attr);
        
        }
        const ST_WrapDistance& distR_attr(){

            if (m_distR_attr)
            {
                return *m_distR_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }

    private:
        bool m_has_extent ;
        ns_a::CT_PositiveSize2D* m_extent ;
        bool m_has_effectExtent ;
        CT_EffectExtent* m_effectExtent ;
        bool m_has_docPr ;
        ns_a::CT_NonVisualDrawingProps* m_docPr ;
        bool m_has_cNvGraphicFramePr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        static CT_Inline* default_instance_ ;
        bool m_has_distT_attr ;
        ST_WrapDistance* m_distT_attr ;
        bool m_has_distB_attr ;
        ST_WrapDistance* m_distB_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;

    }

    class CT_WrapPath : public XSD::ComplexType{
    public:
        bool has_start(){

            return m_has_start;
        
        }
        ns_a::CT_Point2D* mutable_start(){

                m_has_start = true;
                if (!m_start)
                {
                    m_start = new ns_a::CT_Point2D();
                }
                return m_start;
            
        }
        const ns_a::CT_Point2D& start(){

            if (m_start)
            {
                return *m_start;
            }
            return ns_a::CT_Point2D::default_instance();
        
        }
        bool has_lineTo(){

            return m_has_lineTo;
        
        }
        ns_a::CT_Point2D* mutable_lineTo(){

                m_has_lineTo = true;
                if (!m_lineTo)
                {
                    m_lineTo = new ns_a::CT_Point2D();
                }
                return m_lineTo;
            
        }
        const ns_a::CT_Point2D& lineTo(){

            if (m_lineTo)
            {
                return *m_lineTo;
            }
            return ns_a::CT_Point2D::default_instance();
        
        }
        void clear(){

                m_has_edited_attr = false;
                m_edited_attr = false;
            
                m_has_start = false;
                
        if (m_start)
        {
            delete m_start;
            m_start = NULL;
        }
    
            
                m_has_lineTo = false;
                
        if (m_lineTo)
        {
            delete m_lineTo;
            m_lineTo = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_edited_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_start)
                {
                    m_start->toXml(start, _outStream);;
                }
            
                if (m_has_lineTo)
                {
                    m_start->toXml(lineTo, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WrapPath& default_instance(){

    if (!CT_WrapPath::default_instance_)
    {
        CT_WrapPath::default_instance_ = new CT_WrapPath();
    }
    return *CT_WrapPath::default_instance_;

        }
        bool has_edited_attr(){

            return m_has_edited_attr;
        
        }
        void set_edited_attr(const boolean& _edited_attr ){

        m_has_edited_attr = true;
        m_edited_attr = _edited_attr;
        
        }
        const boolean& edited_attr(){

            return type: oolean\nname: \m_edited_attr\n;
        
        }

    private:
        bool m_has_start ;
        ns_a::CT_Point2D* m_start ;
        bool m_has_lineTo ;
        ns_a::CT_Point2D* m_lineTo ;
        static CT_WrapPath* default_instance_ ;
        bool m_has_edited_attr ;
        boolean m_edited_attr ;

    }

    class CT_WrapNone : public XSD::ComplexType{
    public:
        void clear(){

        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WrapNone& default_instance(){

    if (!CT_WrapNone::default_instance_)
    {
        CT_WrapNone::default_instance_ = new CT_WrapNone();
    }
    return *CT_WrapNone::default_instance_;

        }

    private:
        static CT_WrapNone* default_instance_ ;

    }

    class CT_WrapSquare : public XSD::ComplexType{
    public:
        bool has_effectExtent(){

            return m_has_effectExtent;
        
        }
        CT_EffectExtent* mutable_effectExtent(){

                m_has_effectExtent = true;
                if (!m_effectExtent)
                {
                    m_effectExtent = new CT_EffectExtent();
                }
                return m_effectExtent;
            
        }
        const CT_EffectExtent& effectExtent(){

            if (m_effectExtent)
            {
                return *m_effectExtent;
            }
            return CT_EffectExtent::default_instance();
        
        }
        void clear(){

                m_has_wrapText_attr = false;
                
        if (m_wrapText_attr)
        {
            delete m_wrapText_attr;
            m_wrapText_attr = NULL;
        }
    
            
                m_has_distT_attr = false;
                
        if (m_distT_attr)
        {
            delete m_distT_attr;
            m_distT_attr = NULL;
        }
    
            
                m_has_distB_attr = false;
                
        if (m_distB_attr)
        {
            delete m_distB_attr;
            m_distB_attr = NULL;
        }
    
            
                m_has_distL_attr = false;
                
        if (m_distL_attr)
        {
            delete m_distL_attr;
            m_distL_attr = NULL;
        }
    
            
                m_has_distR_attr = false;
                
        if (m_distR_attr)
        {
            delete m_distR_attr;
            m_distR_attr = NULL;
        }
    
            
                m_has_effectExtent = false;
                
        if (m_effectExtent)
        {
            delete m_effectExtent;
            m_effectExtent = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_wrapText_attr->toXml(_attrName, _outStream);
m_distT_attr->toXml(_attrName, _outStream);
m_distB_attr->toXml(_attrName, _outStream);
m_distL_attr->toXml(_attrName, _outStream);
m_distR_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_effectExtent)
                {
                    m_effectExtent->toXml(effectExtent, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WrapSquare& default_instance(){

    if (!CT_WrapSquare::default_instance_)
    {
        CT_WrapSquare::default_instance_ = new CT_WrapSquare();
    }
    return *CT_WrapSquare::default_instance_;

        }
        bool has_wrapText_attr(){

            return m_has_wrapText_attr;
        
        }
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr ){

            m_has_wrapText_attr = true;
            m_wrapText_attr = new ST_WrapText(_wrapText_attr);
        
        }
        const ST_WrapText& wrapText_attr(){

            if (m_wrapText_attr)
            {
                return *m_wrapText_attr;
            }
            return ST_WrapText::default_instance();
        
        }
        bool has_distT_attr(){

            return m_has_distT_attr;
        
        }
        void set_distT_attr(const ST_WrapDistance& _distT_attr ){

            m_has_distT_attr = true;
            m_distT_attr = new ST_WrapDistance(_distT_attr);
        
        }
        const ST_WrapDistance& distT_attr(){

            if (m_distT_attr)
            {
                return *m_distT_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distB_attr(){

            return m_has_distB_attr;
        
        }
        void set_distB_attr(const ST_WrapDistance& _distB_attr ){

            m_has_distB_attr = true;
            m_distB_attr = new ST_WrapDistance(_distB_attr);
        
        }
        const ST_WrapDistance& distB_attr(){

            if (m_distB_attr)
            {
                return *m_distB_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distL_attr(){

            return m_has_distL_attr;
        
        }
        void set_distL_attr(const ST_WrapDistance& _distL_attr ){

            m_has_distL_attr = true;
            m_distL_attr = new ST_WrapDistance(_distL_attr);
        
        }
        const ST_WrapDistance& distL_attr(){

            if (m_distL_attr)
            {
                return *m_distL_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distR_attr(){

            return m_has_distR_attr;
        
        }
        void set_distR_attr(const ST_WrapDistance& _distR_attr ){

            m_has_distR_attr = true;
            m_distR_attr = new ST_WrapDistance(_distR_attr);
        
        }
        const ST_WrapDistance& distR_attr(){

            if (m_distR_attr)
            {
                return *m_distR_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }

    private:
        bool m_has_effectExtent ;
        CT_EffectExtent* m_effectExtent ;
        static CT_WrapSquare* default_instance_ ;
        bool m_has_wrapText_attr ;
        ST_WrapText* m_wrapText_attr ;
        bool m_has_distT_attr ;
        ST_WrapDistance* m_distT_attr ;
        bool m_has_distB_attr ;
        ST_WrapDistance* m_distB_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;

    }

    class CT_WrapTight : public XSD::ComplexType{
    public:
        bool has_wrapPolygon(){

            return m_has_wrapPolygon;
        
        }
        CT_WrapPath* mutable_wrapPolygon(){

                m_has_wrapPolygon = true;
                if (!m_wrapPolygon)
                {
                    m_wrapPolygon = new CT_WrapPath();
                }
                return m_wrapPolygon;
            
        }
        const CT_WrapPath& wrapPolygon(){

            if (m_wrapPolygon)
            {
                return *m_wrapPolygon;
            }
            return CT_WrapPath::default_instance();
        
        }
        void clear(){

                m_has_wrapText_attr = false;
                
        if (m_wrapText_attr)
        {
            delete m_wrapText_attr;
            m_wrapText_attr = NULL;
        }
    
            
                m_has_distL_attr = false;
                
        if (m_distL_attr)
        {
            delete m_distL_attr;
            m_distL_attr = NULL;
        }
    
            
                m_has_distR_attr = false;
                
        if (m_distR_attr)
        {
            delete m_distR_attr;
            m_distR_attr = NULL;
        }
    
            
                m_has_wrapPolygon = false;
                
        if (m_wrapPolygon)
        {
            delete m_wrapPolygon;
            m_wrapPolygon = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_wrapText_attr->toXml(_attrName, _outStream);
m_distL_attr->toXml(_attrName, _outStream);
m_distR_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_wrapPolygon)
                {
                    m_wrapPolygon->toXml(wrapPolygon, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WrapTight& default_instance(){

    if (!CT_WrapTight::default_instance_)
    {
        CT_WrapTight::default_instance_ = new CT_WrapTight();
    }
    return *CT_WrapTight::default_instance_;

        }
        bool has_wrapText_attr(){

            return m_has_wrapText_attr;
        
        }
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr ){

            m_has_wrapText_attr = true;
            m_wrapText_attr = new ST_WrapText(_wrapText_attr);
        
        }
        const ST_WrapText& wrapText_attr(){

            if (m_wrapText_attr)
            {
                return *m_wrapText_attr;
            }
            return ST_WrapText::default_instance();
        
        }
        bool has_distL_attr(){

            return m_has_distL_attr;
        
        }
        void set_distL_attr(const ST_WrapDistance& _distL_attr ){

            m_has_distL_attr = true;
            m_distL_attr = new ST_WrapDistance(_distL_attr);
        
        }
        const ST_WrapDistance& distL_attr(){

            if (m_distL_attr)
            {
                return *m_distL_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distR_attr(){

            return m_has_distR_attr;
        
        }
        void set_distR_attr(const ST_WrapDistance& _distR_attr ){

            m_has_distR_attr = true;
            m_distR_attr = new ST_WrapDistance(_distR_attr);
        
        }
        const ST_WrapDistance& distR_attr(){

            if (m_distR_attr)
            {
                return *m_distR_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }

    private:
        bool m_has_wrapPolygon ;
        CT_WrapPath* m_wrapPolygon ;
        static CT_WrapTight* default_instance_ ;
        bool m_has_wrapText_attr ;
        ST_WrapText* m_wrapText_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;

    }

    class CT_WrapThrough : public XSD::ComplexType{
    public:
        bool has_wrapPolygon(){

            return m_has_wrapPolygon;
        
        }
        CT_WrapPath* mutable_wrapPolygon(){

                m_has_wrapPolygon = true;
                if (!m_wrapPolygon)
                {
                    m_wrapPolygon = new CT_WrapPath();
                }
                return m_wrapPolygon;
            
        }
        const CT_WrapPath& wrapPolygon(){

            if (m_wrapPolygon)
            {
                return *m_wrapPolygon;
            }
            return CT_WrapPath::default_instance();
        
        }
        void clear(){

                m_has_wrapText_attr = false;
                
        if (m_wrapText_attr)
        {
            delete m_wrapText_attr;
            m_wrapText_attr = NULL;
        }
    
            
                m_has_distL_attr = false;
                
        if (m_distL_attr)
        {
            delete m_distL_attr;
            m_distL_attr = NULL;
        }
    
            
                m_has_distR_attr = false;
                
        if (m_distR_attr)
        {
            delete m_distR_attr;
            m_distR_attr = NULL;
        }
    
            
                m_has_wrapPolygon = false;
                
        if (m_wrapPolygon)
        {
            delete m_wrapPolygon;
            m_wrapPolygon = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_wrapText_attr->toXml(_attrName, _outStream);
m_distL_attr->toXml(_attrName, _outStream);
m_distR_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_wrapPolygon)
                {
                    m_wrapPolygon->toXml(wrapPolygon, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WrapThrough& default_instance(){

    if (!CT_WrapThrough::default_instance_)
    {
        CT_WrapThrough::default_instance_ = new CT_WrapThrough();
    }
    return *CT_WrapThrough::default_instance_;

        }
        bool has_wrapText_attr(){

            return m_has_wrapText_attr;
        
        }
        void set_wrapText_attr(const ST_WrapText& _wrapText_attr ){

            m_has_wrapText_attr = true;
            m_wrapText_attr = new ST_WrapText(_wrapText_attr);
        
        }
        const ST_WrapText& wrapText_attr(){

            if (m_wrapText_attr)
            {
                return *m_wrapText_attr;
            }
            return ST_WrapText::default_instance();
        
        }
        bool has_distL_attr(){

            return m_has_distL_attr;
        
        }
        void set_distL_attr(const ST_WrapDistance& _distL_attr ){

            m_has_distL_attr = true;
            m_distL_attr = new ST_WrapDistance(_distL_attr);
        
        }
        const ST_WrapDistance& distL_attr(){

            if (m_distL_attr)
            {
                return *m_distL_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distR_attr(){

            return m_has_distR_attr;
        
        }
        void set_distR_attr(const ST_WrapDistance& _distR_attr ){

            m_has_distR_attr = true;
            m_distR_attr = new ST_WrapDistance(_distR_attr);
        
        }
        const ST_WrapDistance& distR_attr(){

            if (m_distR_attr)
            {
                return *m_distR_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }

    private:
        bool m_has_wrapPolygon ;
        CT_WrapPath* m_wrapPolygon ;
        static CT_WrapThrough* default_instance_ ;
        bool m_has_wrapText_attr ;
        ST_WrapText* m_wrapText_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;

    }

    class CT_WrapTopBottom : public XSD::ComplexType{
    public:
        bool has_effectExtent(){

            return m_has_effectExtent;
        
        }
        CT_EffectExtent* mutable_effectExtent(){

                m_has_effectExtent = true;
                if (!m_effectExtent)
                {
                    m_effectExtent = new CT_EffectExtent();
                }
                return m_effectExtent;
            
        }
        const CT_EffectExtent& effectExtent(){

            if (m_effectExtent)
            {
                return *m_effectExtent;
            }
            return CT_EffectExtent::default_instance();
        
        }
        void clear(){

                m_has_distT_attr = false;
                
        if (m_distT_attr)
        {
            delete m_distT_attr;
            m_distT_attr = NULL;
        }
    
            
                m_has_distB_attr = false;
                
        if (m_distB_attr)
        {
            delete m_distB_attr;
            m_distB_attr = NULL;
        }
    
            
                m_has_effectExtent = false;
                
        if (m_effectExtent)
        {
            delete m_effectExtent;
            m_effectExtent = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_distT_attr->toXml(_attrName, _outStream);
m_distB_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_effectExtent)
                {
                    m_effectExtent->toXml(effectExtent, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WrapTopBottom& default_instance(){

    if (!CT_WrapTopBottom::default_instance_)
    {
        CT_WrapTopBottom::default_instance_ = new CT_WrapTopBottom();
    }
    return *CT_WrapTopBottom::default_instance_;

        }
        bool has_distT_attr(){

            return m_has_distT_attr;
        
        }
        void set_distT_attr(const ST_WrapDistance& _distT_attr ){

            m_has_distT_attr = true;
            m_distT_attr = new ST_WrapDistance(_distT_attr);
        
        }
        const ST_WrapDistance& distT_attr(){

            if (m_distT_attr)
            {
                return *m_distT_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distB_attr(){

            return m_has_distB_attr;
        
        }
        void set_distB_attr(const ST_WrapDistance& _distB_attr ){

            m_has_distB_attr = true;
            m_distB_attr = new ST_WrapDistance(_distB_attr);
        
        }
        const ST_WrapDistance& distB_attr(){

            if (m_distB_attr)
            {
                return *m_distB_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }

    private:
        bool m_has_effectExtent ;
        CT_EffectExtent* m_effectExtent ;
        static CT_WrapTopBottom* default_instance_ ;
        bool m_has_distT_attr ;
        ST_WrapDistance* m_distT_attr ;
        bool m_has_distB_attr ;
        ST_WrapDistance* m_distB_attr ;

    }

    class CT_PosH : public XSD::ComplexType{
    public:
        bool has_align(){

            return m_has_align;
        
        }
        ST_AlignH* mutable_align(){

                
                m_has_posOffset = false;
                
        if (m_posOffset)
        {
            delete m_posOffset;
            m_posOffset = NULL;
        }
    ;
            
                m_has_align = true;
                if (!m_align)
                {
                    m_align = new ST_AlignH();
                }
                return m_align;
            
        }
        const ST_AlignH& align(){

            if (m_align)
            {
                return *m_align;
            }
            return ST_AlignH::default_instance();
        
        }
        bool has_posOffset(){

            return m_has_posOffset;
        
        }
        ST_PositionOffset* mutable_posOffset(){

                
                m_has_align = false;
                
        if (m_align)
        {
            delete m_align;
            m_align = NULL;
        }
    ;
            
                m_has_posOffset = true;
                if (!m_posOffset)
                {
                    m_posOffset = new ST_PositionOffset();
                }
                return m_posOffset;
            
        }
        const ST_PositionOffset& posOffset(){

            if (m_posOffset)
            {
                return *m_posOffset;
            }
            return ST_PositionOffset::default_instance();
        
        }
        void clear(){

                m_has_relativeFrom_attr = false;
                
        if (m_relativeFrom_attr)
        {
            delete m_relativeFrom_attr;
            m_relativeFrom_attr = NULL;
        }
    
            
                m_has_align = false;
                
        if (m_align)
        {
            delete m_align;
            m_align = NULL;
        }
    
            
                m_has_posOffset = false;
                
        if (m_posOffset)
        {
            delete m_posOffset;
            m_posOffset = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_relativeFrom_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_align)
                {
                    _outStream << \<align>\ << m_align->toString() << \</align>\;;
                }
            
                if (m_has_posOffset)
                {
                    _outStream << \<posOffset>\ << m_align->toString() << \</posOffset>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PosH& default_instance(){

    if (!CT_PosH::default_instance_)
    {
        CT_PosH::default_instance_ = new CT_PosH();
    }
    return *CT_PosH::default_instance_;

        }
        bool has_relativeFrom_attr(){

            return m_has_relativeFrom_attr;
        
        }
        void set_relativeFrom_attr(const ST_RelFromH& _relativeFrom_attr ){

            m_has_relativeFrom_attr = true;
            m_relativeFrom_attr = new ST_RelFromH(_relativeFrom_attr);
        
        }
        const ST_RelFromH& relativeFrom_attr(){

            if (m_relativeFrom_attr)
            {
                return *m_relativeFrom_attr;
            }
            return ST_RelFromH::default_instance();
        
        }

    private:
        bool m_has_align ;
        ST_AlignH* m_align ;
        bool m_has_posOffset ;
        ST_PositionOffset* m_posOffset ;
        static CT_PosH* default_instance_ ;
        bool m_has_relativeFrom_attr ;
        ST_RelFromH* m_relativeFrom_attr ;

    }

    class CT_PosV : public XSD::ComplexType{
    public:
        bool has_align(){

            return m_has_align;
        
        }
        ST_AlignV* mutable_align(){

                
                m_has_posOffset = false;
                
        if (m_posOffset)
        {
            delete m_posOffset;
            m_posOffset = NULL;
        }
    ;
            
                m_has_align = true;
                if (!m_align)
                {
                    m_align = new ST_AlignV();
                }
                return m_align;
            
        }
        const ST_AlignV& align(){

            if (m_align)
            {
                return *m_align;
            }
            return ST_AlignV::default_instance();
        
        }
        bool has_posOffset(){

            return m_has_posOffset;
        
        }
        ST_PositionOffset* mutable_posOffset(){

                
                m_has_align = false;
                
        if (m_align)
        {
            delete m_align;
            m_align = NULL;
        }
    ;
            
                m_has_posOffset = true;
                if (!m_posOffset)
                {
                    m_posOffset = new ST_PositionOffset();
                }
                return m_posOffset;
            
        }
        const ST_PositionOffset& posOffset(){

            if (m_posOffset)
            {
                return *m_posOffset;
            }
            return ST_PositionOffset::default_instance();
        
        }
        void clear(){

                m_has_relativeFrom_attr = false;
                
        if (m_relativeFrom_attr)
        {
            delete m_relativeFrom_attr;
            m_relativeFrom_attr = NULL;
        }
    
            
                m_has_align = false;
                
        if (m_align)
        {
            delete m_align;
            m_align = NULL;
        }
    
            
                m_has_posOffset = false;
                
        if (m_posOffset)
        {
            delete m_posOffset;
            m_posOffset = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_relativeFrom_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_align)
                {
                    _outStream << \<align>\ << m_align->toString() << \</align>\;;
                }
            
                if (m_has_posOffset)
                {
                    _outStream << \<posOffset>\ << m_align->toString() << \</posOffset>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PosV& default_instance(){

    if (!CT_PosV::default_instance_)
    {
        CT_PosV::default_instance_ = new CT_PosV();
    }
    return *CT_PosV::default_instance_;

        }
        bool has_relativeFrom_attr(){

            return m_has_relativeFrom_attr;
        
        }
        void set_relativeFrom_attr(const ST_RelFromV& _relativeFrom_attr ){

            m_has_relativeFrom_attr = true;
            m_relativeFrom_attr = new ST_RelFromV(_relativeFrom_attr);
        
        }
        const ST_RelFromV& relativeFrom_attr(){

            if (m_relativeFrom_attr)
            {
                return *m_relativeFrom_attr;
            }
            return ST_RelFromV::default_instance();
        
        }

    private:
        bool m_has_align ;
        ST_AlignV* m_align ;
        bool m_has_posOffset ;
        ST_PositionOffset* m_posOffset ;
        static CT_PosV* default_instance_ ;
        bool m_has_relativeFrom_attr ;
        ST_RelFromV* m_relativeFrom_attr ;

    }

    class CT_Anchor : public XSD::ComplexType{
    public:
        bool has_simplePos(){

            return m_has_simplePos;
        
        }
        ns_a::CT_Point2D* mutable_simplePos(){

                m_has_simplePos = true;
                if (!m_simplePos)
                {
                    m_simplePos = new ns_a::CT_Point2D();
                }
                return m_simplePos;
            
        }
        const ns_a::CT_Point2D& simplePos(){

            if (m_simplePos)
            {
                return *m_simplePos;
            }
            return ns_a::CT_Point2D::default_instance();
        
        }
        bool has_positionH(){

            return m_has_positionH;
        
        }
        CT_PosH* mutable_positionH(){

                m_has_positionH = true;
                if (!m_positionH)
                {
                    m_positionH = new CT_PosH();
                }
                return m_positionH;
            
        }
        const CT_PosH& positionH(){

            if (m_positionH)
            {
                return *m_positionH;
            }
            return CT_PosH::default_instance();
        
        }
        bool has_positionV(){

            return m_has_positionV;
        
        }
        CT_PosV* mutable_positionV(){

                m_has_positionV = true;
                if (!m_positionV)
                {
                    m_positionV = new CT_PosV();
                }
                return m_positionV;
            
        }
        const CT_PosV& positionV(){

            if (m_positionV)
            {
                return *m_positionV;
            }
            return CT_PosV::default_instance();
        
        }
        bool has_extent(){

            return m_has_extent;
        
        }
        ns_a::CT_PositiveSize2D* mutable_extent(){

                m_has_extent = true;
                if (!m_extent)
                {
                    m_extent = new ns_a::CT_PositiveSize2D();
                }
                return m_extent;
            
        }
        const ns_a::CT_PositiveSize2D& extent(){

            if (m_extent)
            {
                return *m_extent;
            }
            return ns_a::CT_PositiveSize2D::default_instance();
        
        }
        bool has_effectExtent(){

            return m_has_effectExtent;
        
        }
        CT_EffectExtent* mutable_effectExtent(){

                m_has_effectExtent = true;
                if (!m_effectExtent)
                {
                    m_effectExtent = new CT_EffectExtent();
                }
                return m_effectExtent;
            
        }
        const CT_EffectExtent& effectExtent(){

            if (m_effectExtent)
            {
                return *m_effectExtent;
            }
            return CT_EffectExtent::default_instance();
        
        }
        bool has_wrapNone(){

            return m_has_wrapNone;
        
        }
        CT_WrapNone* mutable_wrapNone(){

                
                m_has_wrapSquare = false;
                
        if (m_wrapSquare)
        {
            delete m_wrapSquare;
            m_wrapSquare = NULL;
        }
    ;
            
                m_has_wrapTight = false;
                
        if (m_wrapTight)
        {
            delete m_wrapTight;
            m_wrapTight = NULL;
        }
    ;
            
                m_has_wrapThrough = false;
                
        if (m_wrapThrough)
        {
            delete m_wrapThrough;
            m_wrapThrough = NULL;
        }
    ;
            
                m_has_wrapTopAndBottom = false;
                
        if (m_wrapTopAndBottom)
        {
            delete m_wrapTopAndBottom;
            m_wrapTopAndBottom = NULL;
        }
    ;
            
                m_has_wrapNone = true;
                if (!m_wrapNone)
                {
                    m_wrapNone = new CT_WrapNone();
                }
                return m_wrapNone;
            
        }
        const CT_WrapNone& wrapNone(){

            if (m_wrapNone)
            {
                return *m_wrapNone;
            }
            return CT_WrapNone::default_instance();
        
        }
        bool has_wrapSquare(){

            return m_has_wrapSquare;
        
        }
        CT_WrapSquare* mutable_wrapSquare(){

                
                m_has_wrapNone = false;
                
        if (m_wrapNone)
        {
            delete m_wrapNone;
            m_wrapNone = NULL;
        }
    ;
            
                m_has_wrapTight = false;
                
        if (m_wrapTight)
        {
            delete m_wrapTight;
            m_wrapTight = NULL;
        }
    ;
            
                m_has_wrapThrough = false;
                
        if (m_wrapThrough)
        {
            delete m_wrapThrough;
            m_wrapThrough = NULL;
        }
    ;
            
                m_has_wrapTopAndBottom = false;
                
        if (m_wrapTopAndBottom)
        {
            delete m_wrapTopAndBottom;
            m_wrapTopAndBottom = NULL;
        }
    ;
            
                m_has_wrapSquare = true;
                if (!m_wrapSquare)
                {
                    m_wrapSquare = new CT_WrapSquare();
                }
                return m_wrapSquare;
            
        }
        const CT_WrapSquare& wrapSquare(){

            if (m_wrapSquare)
            {
                return *m_wrapSquare;
            }
            return CT_WrapSquare::default_instance();
        
        }
        bool has_wrapTight(){

            return m_has_wrapTight;
        
        }
        CT_WrapTight* mutable_wrapTight(){

                
                m_has_wrapNone = false;
                
        if (m_wrapNone)
        {
            delete m_wrapNone;
            m_wrapNone = NULL;
        }
    ;
            
                m_has_wrapSquare = false;
                
        if (m_wrapSquare)
        {
            delete m_wrapSquare;
            m_wrapSquare = NULL;
        }
    ;
            
                m_has_wrapThrough = false;
                
        if (m_wrapThrough)
        {
            delete m_wrapThrough;
            m_wrapThrough = NULL;
        }
    ;
            
                m_has_wrapTopAndBottom = false;
                
        if (m_wrapTopAndBottom)
        {
            delete m_wrapTopAndBottom;
            m_wrapTopAndBottom = NULL;
        }
    ;
            
                m_has_wrapTight = true;
                if (!m_wrapTight)
                {
                    m_wrapTight = new CT_WrapTight();
                }
                return m_wrapTight;
            
        }
        const CT_WrapTight& wrapTight(){

            if (m_wrapTight)
            {
                return *m_wrapTight;
            }
            return CT_WrapTight::default_instance();
        
        }
        bool has_wrapThrough(){

            return m_has_wrapThrough;
        
        }
        CT_WrapThrough* mutable_wrapThrough(){

                
                m_has_wrapNone = false;
                
        if (m_wrapNone)
        {
            delete m_wrapNone;
            m_wrapNone = NULL;
        }
    ;
            
                m_has_wrapSquare = false;
                
        if (m_wrapSquare)
        {
            delete m_wrapSquare;
            m_wrapSquare = NULL;
        }
    ;
            
                m_has_wrapTight = false;
                
        if (m_wrapTight)
        {
            delete m_wrapTight;
            m_wrapTight = NULL;
        }
    ;
            
                m_has_wrapTopAndBottom = false;
                
        if (m_wrapTopAndBottom)
        {
            delete m_wrapTopAndBottom;
            m_wrapTopAndBottom = NULL;
        }
    ;
            
                m_has_wrapThrough = true;
                if (!m_wrapThrough)
                {
                    m_wrapThrough = new CT_WrapThrough();
                }
                return m_wrapThrough;
            
        }
        const CT_WrapThrough& wrapThrough(){

            if (m_wrapThrough)
            {
                return *m_wrapThrough;
            }
            return CT_WrapThrough::default_instance();
        
        }
        bool has_wrapTopAndBottom(){

            return m_has_wrapTopAndBottom;
        
        }
        CT_WrapTopBottom* mutable_wrapTopAndBottom(){

                
                m_has_wrapNone = false;
                
        if (m_wrapNone)
        {
            delete m_wrapNone;
            m_wrapNone = NULL;
        }
    ;
            
                m_has_wrapSquare = false;
                
        if (m_wrapSquare)
        {
            delete m_wrapSquare;
            m_wrapSquare = NULL;
        }
    ;
            
                m_has_wrapTight = false;
                
        if (m_wrapTight)
        {
            delete m_wrapTight;
            m_wrapTight = NULL;
        }
    ;
            
                m_has_wrapThrough = false;
                
        if (m_wrapThrough)
        {
            delete m_wrapThrough;
            m_wrapThrough = NULL;
        }
    ;
            
                m_has_wrapTopAndBottom = true;
                if (!m_wrapTopAndBottom)
                {
                    m_wrapTopAndBottom = new CT_WrapTopBottom();
                }
                return m_wrapTopAndBottom;
            
        }
        const CT_WrapTopBottom& wrapTopAndBottom(){

            if (m_wrapTopAndBottom)
            {
                return *m_wrapTopAndBottom;
            }
            return CT_WrapTopBottom::default_instance();
        
        }
        bool has_docPr(){

            return m_has_docPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_docPr(){

                m_has_docPr = true;
                if (!m_docPr)
                {
                    m_docPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_docPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& docPr(){

            if (m_docPr)
            {
                return *m_docPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvGraphicFramePr(){

            return m_has_cNvGraphicFramePr;
        
        }
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvGraphicFramePr(){

                m_has_cNvGraphicFramePr = true;
                if (!m_cNvGraphicFramePr)
                {
                    m_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
                }
                return m_cNvGraphicFramePr;
            
        }
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvGraphicFramePr(){

            if (m_cNvGraphicFramePr)
            {
                return *m_cNvGraphicFramePr;
            }
            return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
        
        }
        bool has_graphic(){

            return m_has_graphic;
        
        }
        CT_GraphicalObject* mutable_graphic(){

                m_has_graphic = true;
                if (!m_graphic)
                {
                    m_graphic = new CT_GraphicalObject();
                }
                return m_graphic;
            
        }
        const CT_GraphicalObject& graphic(){

            if (m_graphic)
            {
                return *m_graphic;
            }
            return CT_GraphicalObject::default_instance();
        
        }
        void clear(){

                m_has_distT_attr = false;
                
        if (m_distT_attr)
        {
            delete m_distT_attr;
            m_distT_attr = NULL;
        }
    
            
                m_has_distB_attr = false;
                
        if (m_distB_attr)
        {
            delete m_distB_attr;
            m_distB_attr = NULL;
        }
    
            
                m_has_distL_attr = false;
                
        if (m_distL_attr)
        {
            delete m_distL_attr;
            m_distL_attr = NULL;
        }
    
            
                m_has_distR_attr = false;
                
        if (m_distR_attr)
        {
            delete m_distR_attr;
            m_distR_attr = NULL;
        }
    
            
                m_has_simplePos_attr = false;
                m_simplePos_attr = false;
            
                m_has_relativeHeight_attr = false;
                m_relativeHeight_attr = 0;
            
                m_has_behindDoc_attr = false;
                m_behindDoc_attr = false;
            
                m_has_locked_attr = false;
                m_locked_attr = false;
            
                m_has_layoutInCell_attr = false;
                m_layoutInCell_attr = false;
            
                m_has_hidden_attr = false;
                m_hidden_attr = false;
            
                m_has_allowOverlap_attr = false;
                m_allowOverlap_attr = false;
            
                m_has_simplePos = false;
                
        if (m_simplePos)
        {
            delete m_simplePos;
            m_simplePos = NULL;
        }
    
            
                m_has_positionH = false;
                
        if (m_positionH)
        {
            delete m_positionH;
            m_positionH = NULL;
        }
    
            
                m_has_positionV = false;
                
        if (m_positionV)
        {
            delete m_positionV;
            m_positionV = NULL;
        }
    
            
                m_has_extent = false;
                
        if (m_extent)
        {
            delete m_extent;
            m_extent = NULL;
        }
    
            
                m_has_effectExtent = false;
                
        if (m_effectExtent)
        {
            delete m_effectExtent;
            m_effectExtent = NULL;
        }
    
             
                m_has_wrapNone = false;
                
        if (m_wrapNone)
        {
            delete m_wrapNone;
            m_wrapNone = NULL;
        }
    
            
                m_has_wrapSquare = false;
                
        if (m_wrapSquare)
        {
            delete m_wrapSquare;
            m_wrapSquare = NULL;
        }
    
            
                m_has_wrapTight = false;
                
        if (m_wrapTight)
        {
            delete m_wrapTight;
            m_wrapTight = NULL;
        }
    
            
                m_has_wrapThrough = false;
                
        if (m_wrapThrough)
        {
            delete m_wrapThrough;
            m_wrapThrough = NULL;
        }
    
            
                m_has_wrapTopAndBottom = false;
                
        if (m_wrapTopAndBottom)
        {
            delete m_wrapTopAndBottom;
            m_wrapTopAndBottom = NULL;
        }
    
             
                m_has_docPr = false;
                
        if (m_docPr)
        {
            delete m_docPr;
            m_docPr = NULL;
        }
    
            
                m_has_cNvGraphicFramePr = false;
                
        if (m_cNvGraphicFramePr)
        {
            delete m_cNvGraphicFramePr;
            m_cNvGraphicFramePr = NULL;
        }
    
            
                m_has_graphic = false;
                
        if (m_graphic)
        {
            delete m_graphic;
            m_graphic = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    m_distT_attr->toXml(_attrName, _outStream);
m_distB_attr->toXml(_attrName, _outStream);
m_distL_attr->toXml(_attrName, _outStream);
m_distR_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_simplePos_attr) << \\\;
_outStream << _attrName << \=\\ << m_relativeHeight_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_behindDoc_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_locked_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_layoutInCell_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_hidden_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_allowOverlap_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_simplePos)
                {
                    m_simplePos->toXml(simplePos, _outStream);;
                }
            
                if (m_has_positionH)
                {
                    m_simplePos->toXml(positionH, _outStream);;
                }
            
                if (m_has_positionV)
                {
                    m_simplePos->toXml(positionV, _outStream);;
                }
            
                if (m_has_extent)
                {
                    m_simplePos->toXml(extent, _outStream);;
                }
            
                if (m_has_effectExtent)
                {
                    m_simplePos->toXml(effectExtent, _outStream);;
                }
             
                if (m_has_wrapNone)
                {
                    m_wrapNone->toXml(wrapNone, _outStream);;
                }
            
                if (m_has_wrapSquare)
                {
                    m_wrapNone->toXml(wrapSquare, _outStream);;
                }
            
                if (m_has_wrapTight)
                {
                    m_wrapNone->toXml(wrapTight, _outStream);;
                }
            
                if (m_has_wrapThrough)
                {
                    m_wrapNone->toXml(wrapThrough, _outStream);;
                }
            
                if (m_has_wrapTopAndBottom)
                {
                    m_wrapNone->toXml(wrapTopAndBottom, _outStream);;
                }
             
                if (m_has_docPr)
                {
                    m_docPr->toXml(docPr, _outStream);;
                }
            
                if (m_has_cNvGraphicFramePr)
                {
                    m_docPr->toXml(cNvGraphicFramePr, _outStream);;
                }
            
                if (m_has_graphic)
                {
                    m_docPr->toXml(graphic, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Anchor& default_instance(){

    if (!CT_Anchor::default_instance_)
    {
        CT_Anchor::default_instance_ = new CT_Anchor();
    }
    return *CT_Anchor::default_instance_;

        }
        bool has_distT_attr(){

            return m_has_distT_attr;
        
        }
        void set_distT_attr(const ST_WrapDistance& _distT_attr ){

            m_has_distT_attr = true;
            m_distT_attr = new ST_WrapDistance(_distT_attr);
        
        }
        const ST_WrapDistance& distT_attr(){

            if (m_distT_attr)
            {
                return *m_distT_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distB_attr(){

            return m_has_distB_attr;
        
        }
        void set_distB_attr(const ST_WrapDistance& _distB_attr ){

            m_has_distB_attr = true;
            m_distB_attr = new ST_WrapDistance(_distB_attr);
        
        }
        const ST_WrapDistance& distB_attr(){

            if (m_distB_attr)
            {
                return *m_distB_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distL_attr(){

            return m_has_distL_attr;
        
        }
        void set_distL_attr(const ST_WrapDistance& _distL_attr ){

            m_has_distL_attr = true;
            m_distL_attr = new ST_WrapDistance(_distL_attr);
        
        }
        const ST_WrapDistance& distL_attr(){

            if (m_distL_attr)
            {
                return *m_distL_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_distR_attr(){

            return m_has_distR_attr;
        
        }
        void set_distR_attr(const ST_WrapDistance& _distR_attr ){

            m_has_distR_attr = true;
            m_distR_attr = new ST_WrapDistance(_distR_attr);
        
        }
        const ST_WrapDistance& distR_attr(){

            if (m_distR_attr)
            {
                return *m_distR_attr;
            }
            return ST_WrapDistance::default_instance();
        
        }
        bool has_simplePos_attr(){

            return m_has_simplePos_attr;
        
        }
        void set_simplePos_attr(const boolean& _simplePos_attr ){

        m_has_simplePos_attr = true;
        m_simplePos_attr = _simplePos_attr;
        
        }
        const boolean& simplePos_attr(){

            return type: oolean\nname: \m_simplePos_attr\n;
        
        }
        bool has_relativeHeight_attr(){

            return m_has_relativeHeight_attr;
        
        }
        void set_relativeHeight_attr(const unsignedInt& _relativeHeight_attr ){

        m_has_relativeHeight_attr = true;
        m_relativeHeight_attr = _relativeHeight_attr;
        
        }
        const unsignedInt& relativeHeight_attr(){

            return type: \unsignedInt\nname: \m_relativeHeight_attr\n;
        
        }
        bool has_behindDoc_attr(){

            return m_has_behindDoc_attr;
        
        }
        void set_behindDoc_attr(const boolean& _behindDoc_attr ){

        m_has_behindDoc_attr = true;
        m_behindDoc_attr = _behindDoc_attr;
        
        }
        const boolean& behindDoc_attr(){

            return type: oolean\nname: \m_behindDoc_attr\n;
        
        }
        bool has_locked_attr(){

            return m_has_locked_attr;
        
        }
        void set_locked_attr(const boolean& _locked_attr ){

        m_has_locked_attr = true;
        m_locked_attr = _locked_attr;
        
        }
        const boolean& locked_attr(){

            return type: oolean\nname: \m_locked_attr\n;
        
        }
        bool has_layoutInCell_attr(){

            return m_has_layoutInCell_attr;
        
        }
        void set_layoutInCell_attr(const boolean& _layoutInCell_attr ){

        m_has_layoutInCell_attr = true;
        m_layoutInCell_attr = _layoutInCell_attr;
        
        }
        const boolean& layoutInCell_attr(){

            return type: oolean\nname: \m_layoutInCell_attr\n;
        
        }
        bool has_hidden_attr(){

            return m_has_hidden_attr;
        
        }
        void set_hidden_attr(const boolean& _hidden_attr ){

        m_has_hidden_attr = true;
        m_hidden_attr = _hidden_attr;
        
        }
        const boolean& hidden_attr(){

            return type: oolean\nname: \m_hidden_attr\n;
        
        }
        bool has_allowOverlap_attr(){

            return m_has_allowOverlap_attr;
        
        }
        void set_allowOverlap_attr(const boolean& _allowOverlap_attr ){

        m_has_allowOverlap_attr = true;
        m_allowOverlap_attr = _allowOverlap_attr;
        
        }
        const boolean& allowOverlap_attr(){

            return type: oolean\nname: \m_allowOverlap_attr\n;
        
        }

    private:
        bool m_has_simplePos ;
        ns_a::CT_Point2D* m_simplePos ;
        bool m_has_positionH ;
        CT_PosH* m_positionH ;
        bool m_has_positionV ;
        CT_PosV* m_positionV ;
        bool m_has_extent ;
        ns_a::CT_PositiveSize2D* m_extent ;
        bool m_has_effectExtent ;
        CT_EffectExtent* m_effectExtent ;
        bool m_has_wrapNone ;
        CT_WrapNone* m_wrapNone ;
        bool m_has_wrapSquare ;
        CT_WrapSquare* m_wrapSquare ;
        bool m_has_wrapTight ;
        CT_WrapTight* m_wrapTight ;
        bool m_has_wrapThrough ;
        CT_WrapThrough* m_wrapThrough ;
        bool m_has_wrapTopAndBottom ;
        CT_WrapTopBottom* m_wrapTopAndBottom ;
        bool m_has_docPr ;
        ns_a::CT_NonVisualDrawingProps* m_docPr ;
        bool m_has_cNvGraphicFramePr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        static CT_Anchor* default_instance_ ;
        bool m_has_distT_attr ;
        ST_WrapDistance* m_distT_attr ;
        bool m_has_distB_attr ;
        ST_WrapDistance* m_distB_attr ;
        bool m_has_distL_attr ;
        ST_WrapDistance* m_distL_attr ;
        bool m_has_distR_attr ;
        ST_WrapDistance* m_distR_attr ;
        bool m_has_simplePos_attr ;
        boolean m_simplePos_attr ;
        bool m_has_relativeHeight_attr ;
        unsignedInt m_relativeHeight_attr ;
        bool m_has_behindDoc_attr ;
        boolean m_behindDoc_attr ;
        bool m_has_locked_attr ;
        boolean m_locked_attr ;
        bool m_has_layoutInCell_attr ;
        boolean m_layoutInCell_attr ;
        bool m_has_hidden_attr ;
        boolean m_hidden_attr ;
        bool m_has_allowOverlap_attr ;
        boolean m_allowOverlap_attr ;

    }

    class CT_TxbxContent : public XSD::ComplexType{
    public:
        void clear(){

        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TxbxContent& default_instance(){

    if (!CT_TxbxContent::default_instance_)
    {
        CT_TxbxContent::default_instance_ = new CT_TxbxContent();
    }
    return *CT_TxbxContent::default_instance_;

        }

    private:
        static CT_TxbxContent* default_instance_ ;

    }

    class CT_TextboxInfo : public XSD::ComplexType{
    public:
        bool has_txbxContent(){

            return m_has_txbxContent;
        
        }
        CT_TxbxContent* mutable_txbxContent(){

                m_has_txbxContent = true;
                if (!m_txbxContent)
                {
                    m_txbxContent = new CT_TxbxContent();
                }
                return m_txbxContent;
            
        }
        const CT_TxbxContent& txbxContent(){

            if (m_txbxContent)
            {
                return *m_txbxContent;
            }
            return CT_TxbxContent::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                m_id_attr = 0;
            
                m_has_txbxContent = false;
                
        if (m_txbxContent)
        {
            delete m_txbxContent;
            m_txbxContent = NULL;
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
    _outStream << _attrName << \=\\ << m_id_attr << \\\;
        _outStream << \>\;
    
                if (m_has_txbxContent)
                {
                    m_txbxContent->toXml(txbxContent, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_txbxContent->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_TextboxInfo& default_instance(){

    if (!CT_TextboxInfo::default_instance_)
    {
        CT_TextboxInfo::default_instance_ = new CT_TextboxInfo();
    }
    return *CT_TextboxInfo::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const unsignedShort& _id_attr ){

        m_has_id_attr = true;
        m_id_attr = _id_attr;
        
        }
        const unsignedShort& id_attr(){

            return type: \unsignedShort\nname: \m_id_attr\n;
        
        }

    private:
        bool m_has_txbxContent ;
        CT_TxbxContent* m_txbxContent ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_TextboxInfo* default_instance_ ;
        bool m_has_id_attr ;
        unsignedShort m_id_attr ;

    }

    class CT_LinkedTextboxInformation : public XSD::ComplexType{
    public:
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_id_attr = false;
                m_id_attr = 0;
            
                m_has_seq_attr = false;
                m_seq_attr = 0;
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_id_attr << \\\;
_outStream << _attrName << \=\\ << m_seq_attr << \\\;
        _outStream << \>\;
    
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_LinkedTextboxInformation& default_instance(){

    if (!CT_LinkedTextboxInformation::default_instance_)
    {
        CT_LinkedTextboxInformation::default_instance_ = new CT_LinkedTextboxInformation();
    }
    return *CT_LinkedTextboxInformation::default_instance_;

        }
        bool has_id_attr(){

            return m_has_id_attr;
        
        }
        void set_id_attr(const unsignedShort& _id_attr ){

        m_has_id_attr = true;
        m_id_attr = _id_attr;
        
        }
        const unsignedShort& id_attr(){

            return type: \unsignedShort\nname: \m_id_attr\n;
        
        }
        bool has_seq_attr(){

            return m_has_seq_attr;
        
        }
        void set_seq_attr(const unsignedShort& _seq_attr ){

        m_has_seq_attr = true;
        m_seq_attr = _seq_attr;
        
        }
        const unsignedShort& seq_attr(){

            return type: \unsignedShort\nname: \m_seq_attr\n;
        
        }

    private:
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_LinkedTextboxInformation* default_instance_ ;
        bool m_has_id_attr ;
        unsignedShort m_id_attr ;
        bool m_has_seq_attr ;
        unsignedShort m_seq_attr ;

    }

    class CT_WordprocessingShape : public XSD::ComplexType{
    public:
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvSpPr(){

            return m_has_cNvSpPr;
        
        }
        ns_a::CT_NonVisualDrawingShapeProps* mutable_cNvSpPr(){

                
                m_has_cNvCnPr = false;
                
        if (m_cNvCnPr)
        {
            delete m_cNvCnPr;
            m_cNvCnPr = NULL;
        }
    ;
            
                m_has_cNvSpPr = true;
                if (!m_cNvSpPr)
                {
                    m_cNvSpPr = new ns_a::CT_NonVisualDrawingShapeProps();
                }
                return m_cNvSpPr;
            
        }
        const ns_a::CT_NonVisualDrawingShapeProps& cNvSpPr(){

            if (m_cNvSpPr)
            {
                return *m_cNvSpPr;
            }
            return ns_a::CT_NonVisualDrawingShapeProps::default_instance();
        
        }
        bool has_cNvCnPr(){

            return m_has_cNvCnPr;
        
        }
        ns_a::CT_NonVisualConnectorProperties* mutable_cNvCnPr(){

                
                m_has_cNvSpPr = false;
                
        if (m_cNvSpPr)
        {
            delete m_cNvSpPr;
            m_cNvSpPr = NULL;
        }
    ;
            
                m_has_cNvCnPr = true;
                if (!m_cNvCnPr)
                {
                    m_cNvCnPr = new ns_a::CT_NonVisualConnectorProperties();
                }
                return m_cNvCnPr;
            
        }
        const ns_a::CT_NonVisualConnectorProperties& cNvCnPr(){

            if (m_cNvCnPr)
            {
                return *m_cNvCnPr;
            }
            return ns_a::CT_NonVisualConnectorProperties::default_instance();
        
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
        bool has_style(){

            return m_has_style;
        
        }
        ns_a::CT_ShapeStyle* mutable_style(){

                m_has_style = true;
                if (!m_style)
                {
                    m_style = new ns_a::CT_ShapeStyle();
                }
                return m_style;
            
        }
        const ns_a::CT_ShapeStyle& style(){

            if (m_style)
            {
                return *m_style;
            }
            return ns_a::CT_ShapeStyle::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        bool has_txbx(){

            return m_has_txbx;
        
        }
        CT_TextboxInfo* mutable_txbx(){

                
                m_has_linkedTxbx = false;
                
        if (m_linkedTxbx)
        {
            delete m_linkedTxbx;
            m_linkedTxbx = NULL;
        }
    ;
            
                m_has_txbx = true;
                if (!m_txbx)
                {
                    m_txbx = new CT_TextboxInfo();
                }
                return m_txbx;
            
        }
        const CT_TextboxInfo& txbx(){

            if (m_txbx)
            {
                return *m_txbx;
            }
            return CT_TextboxInfo::default_instance();
        
        }
        bool has_linkedTxbx(){

            return m_has_linkedTxbx;
        
        }
        CT_LinkedTextboxInformation* mutable_linkedTxbx(){

                
                m_has_txbx = false;
                
        if (m_txbx)
        {
            delete m_txbx;
            m_txbx = NULL;
        }
    ;
            
                m_has_linkedTxbx = true;
                if (!m_linkedTxbx)
                {
                    m_linkedTxbx = new CT_LinkedTextboxInformation();
                }
                return m_linkedTxbx;
            
        }
        const CT_LinkedTextboxInformation& linkedTxbx(){

            if (m_linkedTxbx)
            {
                return *m_linkedTxbx;
            }
            return CT_LinkedTextboxInformation::default_instance();
        
        }
        bool has_bodyPr(){

            return m_has_bodyPr;
        
        }
        ns_a::CT_TextBodyProperties* mutable_bodyPr(){

                m_has_bodyPr = true;
                if (!m_bodyPr)
                {
                    m_bodyPr = new ns_a::CT_TextBodyProperties();
                }
                return m_bodyPr;
            
        }
        const ns_a::CT_TextBodyProperties& bodyPr(){

            if (m_bodyPr)
            {
                return *m_bodyPr;
            }
            return ns_a::CT_TextBodyProperties::default_instance();
        
        }
        void clear(){

                m_has_normalEastAsianFlow_attr = false;
                m_normalEastAsianFlow_attr = false;
            
                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
             
                m_has_cNvSpPr = false;
                
        if (m_cNvSpPr)
        {
            delete m_cNvSpPr;
            m_cNvSpPr = NULL;
        }
    
            
                m_has_cNvCnPr = false;
                
        if (m_cNvCnPr)
        {
            delete m_cNvCnPr;
            m_cNvCnPr = NULL;
        }
    
             
                m_has_spPr = false;
                
        if (m_spPr)
        {
            delete m_spPr;
            m_spPr = NULL;
        }
    
            
                m_has_style = false;
                
        if (m_style)
        {
            delete m_style;
            m_style = NULL;
        }
    
            
                m_has_extLst = false;
                
        if (m_extLst)
        {
            delete m_extLst;
            m_extLst = NULL;
        }
    
             
                m_has_txbx = false;
                
        if (m_txbx)
        {
            delete m_txbx;
            m_txbx = NULL;
        }
    
            
                m_has_linkedTxbx = false;
                
        if (m_linkedTxbx)
        {
            delete m_linkedTxbx;
            m_linkedTxbx = NULL;
        }
    
             
                m_has_bodyPr = false;
                
        if (m_bodyPr)
        {
            delete m_bodyPr;
            m_bodyPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << XSD::BooleanStr(m_normalEastAsianFlow_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
             
                if (m_has_cNvSpPr)
                {
                    m_cNvSpPr->toXml(cNvSpPr, _outStream);;
                }
            
                if (m_has_cNvCnPr)
                {
                    m_cNvSpPr->toXml(cNvCnPr, _outStream);;
                }
             
                if (m_has_spPr)
                {
                    m_spPr->toXml(spPr, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_spPr->toXml(style, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_spPr->toXml(extLst, _outStream);;
                }
             
                if (m_has_txbx)
                {
                    m_txbx->toXml(txbx, _outStream);;
                }
            
                if (m_has_linkedTxbx)
                {
                    m_txbx->toXml(linkedTxbx, _outStream);;
                }
             
                if (m_has_bodyPr)
                {
                    m_bodyPr->toXml(bodyPr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WordprocessingShape& default_instance(){

    if (!CT_WordprocessingShape::default_instance_)
    {
        CT_WordprocessingShape::default_instance_ = new CT_WordprocessingShape();
    }
    return *CT_WordprocessingShape::default_instance_;

        }
        bool has_normalEastAsianFlow_attr(){

            return m_has_normalEastAsianFlow_attr;
        
        }
        void set_normalEastAsianFlow_attr(const boolean& _normalEastAsianFlow_attr ){

        m_has_normalEastAsianFlow_attr = true;
        m_normalEastAsianFlow_attr = _normalEastAsianFlow_attr;
        
        }
        const boolean& normalEastAsianFlow_attr(){

            return type: oolean\nname: \m_normalEastAsianFlow_attr\n;
        
        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvSpPr ;
        ns_a::CT_NonVisualDrawingShapeProps* m_cNvSpPr ;
        bool m_has_cNvCnPr ;
        ns_a::CT_NonVisualConnectorProperties* m_cNvCnPr ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        bool m_has_txbx ;
        CT_TextboxInfo* m_txbx ;
        bool m_has_linkedTxbx ;
        CT_LinkedTextboxInformation* m_linkedTxbx ;
        bool m_has_bodyPr ;
        ns_a::CT_TextBodyProperties* m_bodyPr ;
        static CT_WordprocessingShape* default_instance_ ;
        bool m_has_normalEastAsianFlow_attr ;
        boolean m_normalEastAsianFlow_attr ;

    }

    class CT_GraphicFrame : public XSD::ComplexType{
    public:
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvFrPr(){

            return m_has_cNvFrPr;
        
        }
        ns_a::CT_NonVisualGraphicFrameProperties* mutable_cNvFrPr(){

                m_has_cNvFrPr = true;
                if (!m_cNvFrPr)
                {
                    m_cNvFrPr = new ns_a::CT_NonVisualGraphicFrameProperties();
                }
                return m_cNvFrPr;
            
        }
        const ns_a::CT_NonVisualGraphicFrameProperties& cNvFrPr(){

            if (m_cNvFrPr)
            {
                return *m_cNvFrPr;
            }
            return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
        
        }
        bool has_xfrm(){

            return m_has_xfrm;
        
        }
        ns_a::CT_Transform2D* mutable_xfrm(){

                m_has_xfrm = true;
                if (!m_xfrm)
                {
                    m_xfrm = new ns_a::CT_Transform2D();
                }
                return m_xfrm;
            
        }
        const ns_a::CT_Transform2D& xfrm(){

            if (m_xfrm)
            {
                return *m_xfrm;
            }
            return ns_a::CT_Transform2D::default_instance();
        
        }
        bool has_graphic(){

            return m_has_graphic;
        
        }
        CT_GraphicalObject* mutable_graphic(){

                m_has_graphic = true;
                if (!m_graphic)
                {
                    m_graphic = new CT_GraphicalObject();
                }
                return m_graphic;
            
        }
        const CT_GraphicalObject& graphic(){

            if (m_graphic)
            {
                return *m_graphic;
            }
            return CT_GraphicalObject::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvFrPr = false;
                
        if (m_cNvFrPr)
        {
            delete m_cNvFrPr;
            m_cNvFrPr = NULL;
        }
    
            
                m_has_xfrm = false;
                
        if (m_xfrm)
        {
            delete m_xfrm;
            m_xfrm = NULL;
        }
    
            
                m_has_graphic = false;
                
        if (m_graphic)
        {
            delete m_graphic;
            m_graphic = NULL;
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
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
            
                if (m_has_cNvFrPr)
                {
                    m_cNvPr->toXml(cNvFrPr, _outStream);;
                }
            
                if (m_has_xfrm)
                {
                    m_cNvPr->toXml(xfrm, _outStream);;
                }
            
                if (m_has_graphic)
                {
                    m_cNvPr->toXml(graphic, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_cNvPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GraphicFrame& default_instance(){

    if (!CT_GraphicFrame::default_instance_)
    {
        CT_GraphicFrame::default_instance_ = new CT_GraphicFrame();
    }
    return *CT_GraphicFrame::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvFrPr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvFrPr ;
        bool m_has_xfrm ;
        ns_a::CT_Transform2D* m_xfrm ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_GraphicFrame* default_instance_ ;

    }

    class CT_WordprocessingContentPartNonVisual : public XSD::ComplexType{
    public:
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvContentPartPr(){

            return m_has_cNvContentPartPr;
        
        }
        ns_a::CT_NonVisualContentPartProperties* mutable_cNvContentPartPr(){

                m_has_cNvContentPartPr = true;
                if (!m_cNvContentPartPr)
                {
                    m_cNvContentPartPr = new ns_a::CT_NonVisualContentPartProperties();
                }
                return m_cNvContentPartPr;
            
        }
        const ns_a::CT_NonVisualContentPartProperties& cNvContentPartPr(){

            if (m_cNvContentPartPr)
            {
                return *m_cNvContentPartPr;
            }
            return ns_a::CT_NonVisualContentPartProperties::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvContentPartPr = false;
                
        if (m_cNvContentPartPr)
        {
            delete m_cNvContentPartPr;
            m_cNvContentPartPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
            
                if (m_has_cNvContentPartPr)
                {
                    m_cNvPr->toXml(cNvContentPartPr, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WordprocessingContentPartNonVisual& default_instance(){

    if (!CT_WordprocessingContentPartNonVisual::default_instance_)
    {
        CT_WordprocessingContentPartNonVisual::default_instance_ = new CT_WordprocessingContentPartNonVisual();
    }
    return *CT_WordprocessingContentPartNonVisual::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvContentPartPr ;
        ns_a::CT_NonVisualContentPartProperties* m_cNvContentPartPr ;
        static CT_WordprocessingContentPartNonVisual* default_instance_ ;

    }

    class CT_WordprocessingContentPart : public XSD::ComplexType{
    public:
        bool has_nvContentPartPr(){

            return m_has_nvContentPartPr;
        
        }
        CT_WordprocessingContentPartNonVisual* mutable_nvContentPartPr(){

                m_has_nvContentPartPr = true;
                if (!m_nvContentPartPr)
                {
                    m_nvContentPartPr = new CT_WordprocessingContentPartNonVisual();
                }
                return m_nvContentPartPr;
            
        }
        const CT_WordprocessingContentPartNonVisual& nvContentPartPr(){

            if (m_nvContentPartPr)
            {
                return *m_nvContentPartPr;
            }
            return CT_WordprocessingContentPartNonVisual::default_instance();
        
        }
        bool has_xfrm(){

            return m_has_xfrm;
        
        }
        ns_a::CT_Transform2D* mutable_xfrm(){

                m_has_xfrm = true;
                if (!m_xfrm)
                {
                    m_xfrm = new ns_a::CT_Transform2D();
                }
                return m_xfrm;
            
        }
        const ns_a::CT_Transform2D& xfrm(){

            if (m_xfrm)
            {
                return *m_xfrm;
            }
            return ns_a::CT_Transform2D::default_instance();
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_bwMode_attr = false;
                
        if (m_bwMode_attr)
        {
            delete m_bwMode_attr;
            m_bwMode_attr = NULL;
        }
    
            
                m_has_id_attr = false;
                
        if (m_id_attr)
        {
            delete m_id_attr;
            m_id_attr = NULL;
        }
    
            
                m_has_nvContentPartPr = false;
                
        if (m_nvContentPartPr)
        {
            delete m_nvContentPartPr;
            m_nvContentPartPr = NULL;
        }
    
            
                m_has_xfrm = false;
                
        if (m_xfrm)
        {
            delete m_xfrm;
            m_xfrm = NULL;
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
    m_bwMode_attr->toXml(_attrName, _outStream);
m_id_attr->toXml(_attrName, _outStream);
        _outStream << \>\;
    
                if (m_has_nvContentPartPr)
                {
                    m_nvContentPartPr->toXml(nvContentPartPr, _outStream);;
                }
            
                if (m_has_xfrm)
                {
                    m_nvContentPartPr->toXml(xfrm, _outStream);;
                }
            
                if (m_has_extLst)
                {
                    m_nvContentPartPr->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WordprocessingContentPart& default_instance(){

    if (!CT_WordprocessingContentPart::default_instance_)
    {
        CT_WordprocessingContentPart::default_instance_ = new CT_WordprocessingContentPart();
    }
    return *CT_WordprocessingContentPart::default_instance_;

        }
        bool has_bwMode_attr(){

            return m_has_bwMode_attr;
        
        }
        void set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr ){

            m_has_bwMode_attr = true;
            m_bwMode_attr = new ns_a::ST_BlackWhiteMode(_bwMode_attr);
        
        }
        const ns_a::ST_BlackWhiteMode& bwMode_attr(){

            if (m_bwMode_attr)
            {
                return *m_bwMode_attr;
            }
            return ns_a::ST_BlackWhiteMode::default_instance();
        
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
        bool m_has_nvContentPartPr ;
        CT_WordprocessingContentPartNonVisual* m_nvContentPartPr ;
        bool m_has_xfrm ;
        ns_a::CT_Transform2D* m_xfrm ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_WordprocessingContentPart* default_instance_ ;
        bool m_has_bwMode_attr ;
        ns_a::ST_BlackWhiteMode* m_bwMode_attr ;
        bool m_has_id_attr ;
        ST_RelationshipId* m_id_attr ;

    }

    class CT_WordprocessingGroup : public XSD::ComplexType{
    public:
        bool has_cNvPr(){

            return m_has_cNvPr;
        
        }
        ns_a::CT_NonVisualDrawingProps* mutable_cNvPr(){

                m_has_cNvPr = true;
                if (!m_cNvPr)
                {
                    m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
                }
                return m_cNvPr;
            
        }
        const ns_a::CT_NonVisualDrawingProps& cNvPr(){

            if (m_cNvPr)
            {
                return *m_cNvPr;
            }
            return ns_a::CT_NonVisualDrawingProps::default_instance();
        
        }
        bool has_cNvGrpSpPr(){

            return m_has_cNvGrpSpPr;
        
        }
        ns_a::CT_NonVisualGroupDrawingShapeProps* mutable_cNvGrpSpPr(){

                m_has_cNvGrpSpPr = true;
                if (!m_cNvGrpSpPr)
                {
                    m_cNvGrpSpPr = new ns_a::CT_NonVisualGroupDrawingShapeProps();
                }
                return m_cNvGrpSpPr;
            
        }
        const ns_a::CT_NonVisualGroupDrawingShapeProps& cNvGrpSpPr(){

            if (m_cNvGrpSpPr)
            {
                return *m_cNvGrpSpPr;
            }
            return ns_a::CT_NonVisualGroupDrawingShapeProps::default_instance();
        
        }
        bool has_grpSpPr(){

            return m_has_grpSpPr;
        
        }
        ns_a::CT_GroupShapeProperties* mutable_grpSpPr(){

                m_has_grpSpPr = true;
                if (!m_grpSpPr)
                {
                    m_grpSpPr = new ns_a::CT_GroupShapeProperties();
                }
                return m_grpSpPr;
            
        }
        const ns_a::CT_GroupShapeProperties& grpSpPr(){

            if (m_grpSpPr)
            {
                return *m_grpSpPr;
            }
            return ns_a::CT_GroupShapeProperties::default_instance();
        
        }
        CT_WordprocessingShape* add_wsp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_WordprocessingShape* pNewChild = pChildGroup->mutable_wsp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_WordprocessingGroup* add_grpSp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_WordprocessingGroup* pNewChild = pChildGroup->mutable_grpSp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_GraphicFrame* add_graphicFrame(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_GraphicFrame* pNewChild = pChildGroup->mutable_graphicFrame();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Picture* add_pic(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Picture* pNewChild = pChildGroup->mutable_pic();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_WordprocessingContentPart* add_contentPart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_WordprocessingContentPart* pNewChild = pChildGroup->mutable_contentPart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvGrpSpPr = false;
                
        if (m_cNvGrpSpPr)
        {
            delete m_cNvGrpSpPr;
            m_cNvGrpSpPr = NULL;
        }
    
            
                m_has_grpSpPr = false;
                
        if (m_grpSpPr)
        {
            delete m_grpSpPr;
            m_grpSpPr = NULL;
        }
    
             
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
         
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
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(cNvPr, _outStream);;
                }
            
                if (m_has_cNvGrpSpPr)
                {
                    m_cNvPr->toXml(cNvGrpSpPr, _outStream);;
                }
            
                if (m_has_grpSpPr)
                {
                    m_cNvPr->toXml(grpSpPr, _outStream);;
                }
             
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_wsp())
            {
                (*iter)->toXml(wsp, _outStream);
            }
            else if ((*iter)->has_grpSp())
            {
                (*iter)->toXml(grpSp, _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->toXml(graphicFrame, _outStream);
            }
            else if ((*iter)->has_pic())
            {
                (*iter)->toXml(pic, _outStream);
            }
            else if ((*iter)->has_contentPart())
            {
                (*iter)->toXml(contentPart, _outStream);
            }
        } 
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WordprocessingGroup& default_instance(){

    if (!CT_WordprocessingGroup::default_instance_)
    {
        CT_WordprocessingGroup::default_instance_ = new CT_WordprocessingGroup();
    }
    return *CT_WordprocessingGroup::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGrpSpPr ;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_cNvGrpSpPr ;
        bool m_has_grpSpPr ;
        ns_a::CT_GroupShapeProperties* m_grpSpPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_WordprocessingGroup* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_wsp(){

            return m_has_wsp;
        
            }
            CT_WordprocessingShape* mutable_wsp(){

                
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_wsp = true;
                if (!m_wsp)
                {
                    m_wsp = new CT_WordprocessingShape();
                }
                return m_wsp;
            
            }
            const CT_WordprocessingShape& wsp(){

            if (m_wsp)
            {
                return *m_wsp;
            }
            return CT_WordprocessingShape::default_instance();
        
            }
            bool has_grpSp(){

            return m_has_grpSp;
        
            }
            CT_WordprocessingGroup* mutable_grpSp(){

                
                m_has_wsp = false;
                
        if (m_wsp)
        {
            delete m_wsp;
            m_wsp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_grpSp = true;
                if (!m_grpSp)
                {
                    m_grpSp = new CT_WordprocessingGroup();
                }
                return m_grpSp;
            
            }
            const CT_WordprocessingGroup& grpSp(){

            if (m_grpSp)
            {
                return *m_grpSp;
            }
            return CT_WordprocessingGroup::default_instance();
        
            }
            bool has_graphicFrame(){

            return m_has_graphicFrame;
        
            }
            CT_GraphicFrame* mutable_graphicFrame(){

                
                m_has_wsp = false;
                
        if (m_wsp)
        {
            delete m_wsp;
            m_wsp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_graphicFrame = true;
                if (!m_graphicFrame)
                {
                    m_graphicFrame = new CT_GraphicFrame();
                }
                return m_graphicFrame;
            
            }
            const CT_GraphicFrame& graphicFrame(){

            if (m_graphicFrame)
            {
                return *m_graphicFrame;
            }
            return CT_GraphicFrame::default_instance();
        
            }
            bool has_pic(){

            return m_has_pic;
        
            }
            CT_Picture* mutable_pic(){

                
                m_has_wsp = false;
                
        if (m_wsp)
        {
            delete m_wsp;
            m_wsp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_pic = true;
                if (!m_pic)
                {
                    m_pic = new CT_Picture();
                }
                return m_pic;
            
            }
            const CT_Picture& pic(){

            if (m_pic)
            {
                return *m_pic;
            }
            return CT_Picture::default_instance();
        
            }
            bool has_contentPart(){

            return m_has_contentPart;
        
            }
            CT_WordprocessingContentPart* mutable_contentPart(){

                
                m_has_wsp = false;
                
        if (m_wsp)
        {
            delete m_wsp;
            m_wsp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = true;
                if (!m_contentPart)
                {
                    m_contentPart = new CT_WordprocessingContentPart();
                }
                return m_contentPart;
            
            }
            const CT_WordprocessingContentPart& contentPart(){

            if (m_contentPart)
            {
                return *m_contentPart;
            }
            return CT_WordprocessingContentPart::default_instance();
        
            }

        private:
            bool m_has_wsp ;
            CT_WordprocessingShape* m_wsp ;
            bool m_has_grpSp ;
            CT_WordprocessingGroup* m_grpSp ;
            bool m_has_graphicFrame ;
            CT_GraphicFrame* m_graphicFrame ;
            bool m_has_pic ;
            CT_Picture* m_pic ;
            bool m_has_contentPart ;
            CT_WordprocessingContentPart* m_contentPart ;

        }


    }

    class CT_WordprocessingCanvas : public XSD::ComplexType{
    public:
        bool has_bg(){

            return m_has_bg;
        
        }
        ns_a::CT_BackgroundFormatting* mutable_bg(){

                m_has_bg = true;
                if (!m_bg)
                {
                    m_bg = new ns_a::CT_BackgroundFormatting();
                }
                return m_bg;
            
        }
        const ns_a::CT_BackgroundFormatting& bg(){

            if (m_bg)
            {
                return *m_bg;
            }
            return ns_a::CT_BackgroundFormatting::default_instance();
        
        }
        bool has_whole(){

            return m_has_whole;
        
        }
        ns_a::CT_WholeE2oFormatting* mutable_whole(){

                m_has_whole = true;
                if (!m_whole)
                {
                    m_whole = new ns_a::CT_WholeE2oFormatting();
                }
                return m_whole;
            
        }
        const ns_a::CT_WholeE2oFormatting& whole(){

            if (m_whole)
            {
                return *m_whole;
            }
            return ns_a::CT_WholeE2oFormatting::default_instance();
        
        }
        CT_WordprocessingShape* add_wsp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_WordprocessingShape* pNewChild = pChildGroup->mutable_wsp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Picture* add_pic(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Picture* pNewChild = pChildGroup->mutable_pic();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_WordprocessingContentPart* add_contentPart(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_WordprocessingContentPart* pNewChild = pChildGroup->mutable_contentPart();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_WordprocessingGroup* add_wgp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_WordprocessingGroup* pNewChild = pChildGroup->mutable_wgp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_GraphicFrame* add_graphicFrame(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_GraphicFrame* pNewChild = pChildGroup->mutable_graphicFrame();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        bool has_extLst(){

            return m_has_extLst;
        
        }
        ns_a::CT_OfficeArtExtensionList* mutable_extLst(){

                m_has_extLst = true;
                if (!m_extLst)
                {
                    m_extLst = new ns_a::CT_OfficeArtExtensionList();
                }
                return m_extLst;
            
        }
        const ns_a::CT_OfficeArtExtensionList& extLst(){

            if (m_extLst)
            {
                return *m_extLst;
            }
            return ns_a::CT_OfficeArtExtensionList::default_instance();
        
        }
        void clear(){

                m_has_bg = false;
                
        if (m_bg)
        {
            delete m_bg;
            m_bg = NULL;
        }
    
            
                m_has_whole = false;
                
        if (m_whole)
        {
            delete m_whole;
            m_whole = NULL;
        }
    
             
            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
         
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
    
                if (m_has_bg)
                {
                    m_bg->toXml(bg, _outStream);;
                }
            
                if (m_has_whole)
                {
                    m_bg->toXml(whole, _outStream);;
                }
             
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_wsp())
            {
                (*iter)->toXml(wsp, _outStream);
            }
            else if ((*iter)->has_pic())
            {
                (*iter)->toXml(pic, _outStream);
            }
            else if ((*iter)->has_contentPart())
            {
                (*iter)->toXml(contentPart, _outStream);
            }
            else if ((*iter)->has_wgp())
            {
                (*iter)->toXml(wgp, _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->toXml(graphicFrame, _outStream);
            }
        } 
                if (m_has_extLst)
                {
                    m_extLst->toXml(extLst, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_WordprocessingCanvas& default_instance(){

    if (!CT_WordprocessingCanvas::default_instance_)
    {
        CT_WordprocessingCanvas::default_instance_ = new CT_WordprocessingCanvas();
    }
    return *CT_WordprocessingCanvas::default_instance_;

        }

    private:
        bool m_has_bg ;
        ns_a::CT_BackgroundFormatting* m_bg ;
        bool m_has_whole ;
        ns_a::CT_WholeE2oFormatting* m_whole ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        bool m_has_extLst ;
        ns_a::CT_OfficeArtExtensionList* m_extLst ;
        static CT_WordprocessingCanvas* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_wsp(){

            return m_has_wsp;
        
            }
            CT_WordprocessingShape* mutable_wsp(){

                
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_wgp = false;
                
        if (m_wgp)
        {
            delete m_wgp;
            m_wgp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_wsp = true;
                if (!m_wsp)
                {
                    m_wsp = new CT_WordprocessingShape();
                }
                return m_wsp;
            
            }
            const CT_WordprocessingShape& wsp(){

            if (m_wsp)
            {
                return *m_wsp;
            }
            return CT_WordprocessingShape::default_instance();
        
            }
            bool has_pic(){

            return m_has_pic;
        
            }
            CT_Picture* mutable_pic(){

                
                m_has_wsp = false;
                
        if (m_wsp)
        {
            delete m_wsp;
            m_wsp = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_wgp = false;
                
        if (m_wgp)
        {
            delete m_wgp;
            m_wgp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_pic = true;
                if (!m_pic)
                {
                    m_pic = new CT_Picture();
                }
                return m_pic;
            
            }
            const CT_Picture& pic(){

            if (m_pic)
            {
                return *m_pic;
            }
            return CT_Picture::default_instance();
        
            }
            bool has_contentPart(){

            return m_has_contentPart;
        
            }
            CT_WordprocessingContentPart* mutable_contentPart(){

                
                m_has_wsp = false;
                
        if (m_wsp)
        {
            delete m_wsp;
            m_wsp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_wgp = false;
                
        if (m_wgp)
        {
            delete m_wgp;
            m_wgp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_contentPart = true;
                if (!m_contentPart)
                {
                    m_contentPart = new CT_WordprocessingContentPart();
                }
                return m_contentPart;
            
            }
            const CT_WordprocessingContentPart& contentPart(){

            if (m_contentPart)
            {
                return *m_contentPart;
            }
            return CT_WordprocessingContentPart::default_instance();
        
            }
            bool has_wgp(){

            return m_has_wgp;
        
            }
            CT_WordprocessingGroup* mutable_wgp(){

                
                m_has_wsp = false;
                
        if (m_wsp)
        {
            delete m_wsp;
            m_wsp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_wgp = true;
                if (!m_wgp)
                {
                    m_wgp = new CT_WordprocessingGroup();
                }
                return m_wgp;
            
            }
            const CT_WordprocessingGroup& wgp(){

            if (m_wgp)
            {
                return *m_wgp;
            }
            return CT_WordprocessingGroup::default_instance();
        
            }
            bool has_graphicFrame(){

            return m_has_graphicFrame;
        
            }
            CT_GraphicFrame* mutable_graphicFrame(){

                
                m_has_wsp = false;
                
        if (m_wsp)
        {
            delete m_wsp;
            m_wsp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_contentPart = false;
                
        if (m_contentPart)
        {
            delete m_contentPart;
            m_contentPart = NULL;
        }
    ;
            
                m_has_wgp = false;
                
        if (m_wgp)
        {
            delete m_wgp;
            m_wgp = NULL;
        }
    ;
            
                m_has_graphicFrame = true;
                if (!m_graphicFrame)
                {
                    m_graphicFrame = new CT_GraphicFrame();
                }
                return m_graphicFrame;
            
            }
            const CT_GraphicFrame& graphicFrame(){

            if (m_graphicFrame)
            {
                return *m_graphicFrame;
            }
            return CT_GraphicFrame::default_instance();
        
            }

        private:
            bool m_has_wsp ;
            CT_WordprocessingShape* m_wsp ;
            bool m_has_pic ;
            CT_Picture* m_pic ;
            bool m_has_contentPart ;
            CT_WordprocessingContentPart* m_contentPart ;
            bool m_has_wgp ;
            CT_WordprocessingGroup* m_wgp ;
            bool m_has_graphicFrame ;
            CT_GraphicFrame* m_graphicFrame ;

        }


    }

    class wpc : public CT_WordprocessingCanvas : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_WordprocessingCanvas::toXml(\wpc\, _outStream);
    
        }

    private:

    }

    class wgp : public CT_WordprocessingGroup : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_WordprocessingGroup::toXml(\wgp\, _outStream);
    
        }

    private:

    }

    class wsp : public CT_WordprocessingShape : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_WordprocessingShape::toXml(\wsp\, _outStream);
    
        }

    private:

    }

    class inline : public CT_Inline : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Inline::toXml(\inline\, _outStream);
    
        }

    private:

    }

    class anchor : public CT_Anchor : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Anchor::toXml(nchor\, _outStream);
    
        }

    private:

    }

}