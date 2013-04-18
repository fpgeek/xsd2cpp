#include "dml-chartDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
#include "dml-main_xsd.h"
namespace ns_cdr{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_MarkerCoordinate : public XSD::SimpleType{
    public:
        ST_MarkerCoordinate(){
            m_has_double = false
            m_double = 0

        }
        ST_MarkerCoordinate(const XSD::double& _double ){
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
        const ST_MarkerCoordinate& default_instance(){

    if (!ST_MarkerCoordinate::default_instance_)
    {
        ST_MarkerCoordinate::default_instance_ = new ST_MarkerCoordinate();
    }
    return *ST_MarkerCoordinate::default_instance_;

        }

    private:
        static ST_MarkerCoordinate* default_instance_ ;
        bool m_has_double ;
        double m_double ;

    }

    class CT_ShapeNonVisual : public XSD::ComplexType{
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
        void clear(){

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
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(\cdr:cNvPr\, _outStream);;
                }
            
                if (m_has_cNvSpPr)
                {
                    m_cNvPr->toXml(\cdr:cNvSpPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ShapeNonVisual& default_instance(){

    if (!CT_ShapeNonVisual::default_instance_)
    {
        CT_ShapeNonVisual::default_instance_ = new CT_ShapeNonVisual();
    }
    return *CT_ShapeNonVisual::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvSpPr ;
        ns_a::CT_NonVisualDrawingShapeProps* m_cNvSpPr ;
        static CT_ShapeNonVisual* default_instance_ ;

    }

    class CT_Shape : public XSD::ComplexType{
    public:
        bool has_nvSpPr(){

            return m_has_nvSpPr;
        
        }
        CT_ShapeNonVisual* mutable_nvSpPr(){

                m_has_nvSpPr = true;
                if (!m_nvSpPr)
                {
                    m_nvSpPr = new CT_ShapeNonVisual();
                }
                return m_nvSpPr;
            
        }
        const CT_ShapeNonVisual& nvSpPr(){

            if (m_nvSpPr)
            {
                return *m_nvSpPr;
            }
            return CT_ShapeNonVisual::default_instance();
        
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
        bool has_txBody(){

            return m_has_txBody;
        
        }
        ns_a::CT_TextBody* mutable_txBody(){

                m_has_txBody = true;
                if (!m_txBody)
                {
                    m_txBody = new ns_a::CT_TextBody();
                }
                return m_txBody;
            
        }
        const ns_a::CT_TextBody& txBody(){

            if (m_txBody)
            {
                return *m_txBody;
            }
            return ns_a::CT_TextBody::default_instance();
        
        }
        void clear(){

                m_has_macro_attr = false;
                m_macro_attr.clear();
            
                m_has_textlink_attr = false;
                m_textlink_attr.clear();
            
                m_has_fLocksText_attr = false;
                m_fLocksText_attr = false;
            
                m_has_fPublished_attr = false;
                m_fPublished_attr = false;
            
                m_has_nvSpPr = false;
                
        if (m_nvSpPr)
        {
            delete m_nvSpPr;
            m_nvSpPr = NULL;
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
    
            
                m_has_txBody = false;
                
        if (m_txBody)
        {
            delete m_txBody;
            m_txBody = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_macro_attr << \\\;
_outStream << _attrName << \=\\ << m_textlink_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_fLocksText_attr) << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_fPublished_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_nvSpPr)
                {
                    m_nvSpPr->toXml(\cdr:nvSpPr\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_nvSpPr->toXml(\cdr:spPr\, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_nvSpPr->toXml(\cdr:style\, _outStream);;
                }
            
                if (m_has_txBody)
                {
                    m_nvSpPr->toXml(\cdr:txBody\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Shape& default_instance(){

    if (!CT_Shape::default_instance_)
    {
        CT_Shape::default_instance_ = new CT_Shape();
    }
    return *CT_Shape::default_instance_;

        }
        bool has_macro_attr(){

            return m_has_macro_attr;
        
        }
        void set_macro_attr(const string& _macro_attr ){

        m_has_macro_attr = true;
        m_macro_attr = _macro_attr;
        
        }
        const string& macro_attr(){

            return type: \string\nname: \m_macro_attr\n;
        
        }
        bool has_textlink_attr(){

            return m_has_textlink_attr;
        
        }
        void set_textlink_attr(const string& _textlink_attr ){

        m_has_textlink_attr = true;
        m_textlink_attr = _textlink_attr;
        
        }
        const string& textlink_attr(){

            return type: \string\nname: \m_textlink_attr\n;
        
        }
        bool has_fLocksText_attr(){

            return m_has_fLocksText_attr;
        
        }
        void set_fLocksText_attr(const boolean& _fLocksText_attr ){

        m_has_fLocksText_attr = true;
        m_fLocksText_attr = _fLocksText_attr;
        
        }
        const boolean& fLocksText_attr(){

            return type: oolean\nname: \m_fLocksText_attr\n;
        
        }
        bool has_fPublished_attr(){

            return m_has_fPublished_attr;
        
        }
        void set_fPublished_attr(const boolean& _fPublished_attr ){

        m_has_fPublished_attr = true;
        m_fPublished_attr = _fPublished_attr;
        
        }
        const boolean& fPublished_attr(){

            return type: oolean\nname: \m_fPublished_attr\n;
        
        }

    private:
        bool m_has_nvSpPr ;
        CT_ShapeNonVisual* m_nvSpPr ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        bool m_has_txBody ;
        ns_a::CT_TextBody* m_txBody ;
        static CT_Shape* default_instance_ ;
        bool m_has_macro_attr ;
        string m_macro_attr ;
        bool m_has_textlink_attr ;
        string m_textlink_attr ;
        bool m_has_fLocksText_attr ;
        boolean m_fLocksText_attr ;
        bool m_has_fPublished_attr ;
        boolean m_fPublished_attr ;

    }

    class CT_ConnectorNonVisual : public XSD::ComplexType{
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
        bool has_cNvCxnSpPr(){

            return m_has_cNvCxnSpPr;
        
        }
        ns_a::CT_NonVisualConnectorProperties* mutable_cNvCxnSpPr(){

                m_has_cNvCxnSpPr = true;
                if (!m_cNvCxnSpPr)
                {
                    m_cNvCxnSpPr = new ns_a::CT_NonVisualConnectorProperties();
                }
                return m_cNvCxnSpPr;
            
        }
        const ns_a::CT_NonVisualConnectorProperties& cNvCxnSpPr(){

            if (m_cNvCxnSpPr)
            {
                return *m_cNvCxnSpPr;
            }
            return ns_a::CT_NonVisualConnectorProperties::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvCxnSpPr = false;
                
        if (m_cNvCxnSpPr)
        {
            delete m_cNvCxnSpPr;
            m_cNvCxnSpPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(\cdr:cNvPr\, _outStream);;
                }
            
                if (m_has_cNvCxnSpPr)
                {
                    m_cNvPr->toXml(\cdr:cNvCxnSpPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_ConnectorNonVisual& default_instance(){

    if (!CT_ConnectorNonVisual::default_instance_)
    {
        CT_ConnectorNonVisual::default_instance_ = new CT_ConnectorNonVisual();
    }
    return *CT_ConnectorNonVisual::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvCxnSpPr ;
        ns_a::CT_NonVisualConnectorProperties* m_cNvCxnSpPr ;
        static CT_ConnectorNonVisual* default_instance_ ;

    }

    class CT_Connector : public XSD::ComplexType{
    public:
        bool has_nvCxnSpPr(){

            return m_has_nvCxnSpPr;
        
        }
        CT_ConnectorNonVisual* mutable_nvCxnSpPr(){

                m_has_nvCxnSpPr = true;
                if (!m_nvCxnSpPr)
                {
                    m_nvCxnSpPr = new CT_ConnectorNonVisual();
                }
                return m_nvCxnSpPr;
            
        }
        const CT_ConnectorNonVisual& nvCxnSpPr(){

            if (m_nvCxnSpPr)
            {
                return *m_nvCxnSpPr;
            }
            return CT_ConnectorNonVisual::default_instance();
        
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
        void clear(){

                m_has_macro_attr = false;
                m_macro_attr.clear();
            
                m_has_fPublished_attr = false;
                m_fPublished_attr = false;
            
                m_has_nvCxnSpPr = false;
                
        if (m_nvCxnSpPr)
        {
            delete m_nvCxnSpPr;
            m_nvCxnSpPr = NULL;
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
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_macro_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_fPublished_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_nvCxnSpPr)
                {
                    m_nvCxnSpPr->toXml(\cdr:nvCxnSpPr\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_nvCxnSpPr->toXml(\cdr:spPr\, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_nvCxnSpPr->toXml(\cdr:style\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Connector& default_instance(){

    if (!CT_Connector::default_instance_)
    {
        CT_Connector::default_instance_ = new CT_Connector();
    }
    return *CT_Connector::default_instance_;

        }
        bool has_macro_attr(){

            return m_has_macro_attr;
        
        }
        void set_macro_attr(const string& _macro_attr ){

        m_has_macro_attr = true;
        m_macro_attr = _macro_attr;
        
        }
        const string& macro_attr(){

            return type: \string\nname: \m_macro_attr\n;
        
        }
        bool has_fPublished_attr(){

            return m_has_fPublished_attr;
        
        }
        void set_fPublished_attr(const boolean& _fPublished_attr ){

        m_has_fPublished_attr = true;
        m_fPublished_attr = _fPublished_attr;
        
        }
        const boolean& fPublished_attr(){

            return type: oolean\nname: \m_fPublished_attr\n;
        
        }

    private:
        bool m_has_nvCxnSpPr ;
        CT_ConnectorNonVisual* m_nvCxnSpPr ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        static CT_Connector* default_instance_ ;
        bool m_has_macro_attr ;
        string m_macro_attr ;
        bool m_has_fPublished_attr ;
        boolean m_fPublished_attr ;

    }

    class CT_PictureNonVisual : public XSD::ComplexType{
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
        bool has_cNvPicPr(){

            return m_has_cNvPicPr;
        
        }
        ns_a::CT_NonVisualPictureProperties* mutable_cNvPicPr(){

                m_has_cNvPicPr = true;
                if (!m_cNvPicPr)
                {
                    m_cNvPicPr = new ns_a::CT_NonVisualPictureProperties();
                }
                return m_cNvPicPr;
            
        }
        const ns_a::CT_NonVisualPictureProperties& cNvPicPr(){

            if (m_cNvPicPr)
            {
                return *m_cNvPicPr;
            }
            return ns_a::CT_NonVisualPictureProperties::default_instance();
        
        }
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvPicPr = false;
                
        if (m_cNvPicPr)
        {
            delete m_cNvPicPr;
            m_cNvPicPr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(\cdr:cNvPr\, _outStream);;
                }
            
                if (m_has_cNvPicPr)
                {
                    m_cNvPr->toXml(\cdr:cNvPicPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_PictureNonVisual& default_instance(){

    if (!CT_PictureNonVisual::default_instance_)
    {
        CT_PictureNonVisual::default_instance_ = new CT_PictureNonVisual();
    }
    return *CT_PictureNonVisual::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvPicPr ;
        ns_a::CT_NonVisualPictureProperties* m_cNvPicPr ;
        static CT_PictureNonVisual* default_instance_ ;

    }

    class CT_Picture : public XSD::ComplexType{
    public:
        bool has_nvPicPr(){

            return m_has_nvPicPr;
        
        }
        CT_PictureNonVisual* mutable_nvPicPr(){

                m_has_nvPicPr = true;
                if (!m_nvPicPr)
                {
                    m_nvPicPr = new CT_PictureNonVisual();
                }
                return m_nvPicPr;
            
        }
        const CT_PictureNonVisual& nvPicPr(){

            if (m_nvPicPr)
            {
                return *m_nvPicPr;
            }
            return CT_PictureNonVisual::default_instance();
        
        }
        bool has_blipFill(){

            return m_has_blipFill;
        
        }
        ns_a::CT_BlipFillProperties* mutable_blipFill(){

                m_has_blipFill = true;
                if (!m_blipFill)
                {
                    m_blipFill = new ns_a::CT_BlipFillProperties();
                }
                return m_blipFill;
            
        }
        const ns_a::CT_BlipFillProperties& blipFill(){

            if (m_blipFill)
            {
                return *m_blipFill;
            }
            return ns_a::CT_BlipFillProperties::default_instance();
        
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
        void clear(){

                m_has_macro_attr = false;
                m_macro_attr.clear();
            
                m_has_fPublished_attr = false;
                m_fPublished_attr = false;
            
                m_has_nvPicPr = false;
                
        if (m_nvPicPr)
        {
            delete m_nvPicPr;
            m_nvPicPr = NULL;
        }
    
            
                m_has_blipFill = false;
                
        if (m_blipFill)
        {
            delete m_blipFill;
            m_blipFill = NULL;
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
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_macro_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_fPublished_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_nvPicPr)
                {
                    m_nvPicPr->toXml(\cdr:nvPicPr\, _outStream);;
                }
            
                if (m_has_blipFill)
                {
                    m_nvPicPr->toXml(\cdr:blipFill\, _outStream);;
                }
            
                if (m_has_spPr)
                {
                    m_nvPicPr->toXml(\cdr:spPr\, _outStream);;
                }
            
                if (m_has_style)
                {
                    m_nvPicPr->toXml(\cdr:style\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Picture& default_instance(){

    if (!CT_Picture::default_instance_)
    {
        CT_Picture::default_instance_ = new CT_Picture();
    }
    return *CT_Picture::default_instance_;

        }
        bool has_macro_attr(){

            return m_has_macro_attr;
        
        }
        void set_macro_attr(const string& _macro_attr ){

        m_has_macro_attr = true;
        m_macro_attr = _macro_attr;
        
        }
        const string& macro_attr(){

            return type: \string\nname: \m_macro_attr\n;
        
        }
        bool has_fPublished_attr(){

            return m_has_fPublished_attr;
        
        }
        void set_fPublished_attr(const boolean& _fPublished_attr ){

        m_has_fPublished_attr = true;
        m_fPublished_attr = _fPublished_attr;
        
        }
        const boolean& fPublished_attr(){

            return type: oolean\nname: \m_fPublished_attr\n;
        
        }

    private:
        bool m_has_nvPicPr ;
        CT_PictureNonVisual* m_nvPicPr ;
        bool m_has_blipFill ;
        ns_a::CT_BlipFillProperties* m_blipFill ;
        bool m_has_spPr ;
        ns_a::CT_ShapeProperties* m_spPr ;
        bool m_has_style ;
        ns_a::CT_ShapeStyle* m_style ;
        static CT_Picture* default_instance_ ;
        bool m_has_macro_attr ;
        string m_macro_attr ;
        bool m_has_fPublished_attr ;
        boolean m_fPublished_attr ;

    }

    class CT_GraphicFrameNonVisual : public XSD::ComplexType{
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
        void clear(){

                m_has_cNvPr = false;
                
        if (m_cNvPr)
        {
            delete m_cNvPr;
            m_cNvPr = NULL;
        }
    
            
                m_has_cNvGraphicFramePr = false;
                
        if (m_cNvGraphicFramePr)
        {
            delete m_cNvGraphicFramePr;
            m_cNvGraphicFramePr = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(\cdr:cNvPr\, _outStream);;
                }
            
                if (m_has_cNvGraphicFramePr)
                {
                    m_cNvPr->toXml(\cdr:cNvGraphicFramePr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GraphicFrameNonVisual& default_instance(){

    if (!CT_GraphicFrameNonVisual::default_instance_)
    {
        CT_GraphicFrameNonVisual::default_instance_ = new CT_GraphicFrameNonVisual();
    }
    return *CT_GraphicFrameNonVisual::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGraphicFramePr ;
        ns_a::CT_NonVisualGraphicFrameProperties* m_cNvGraphicFramePr ;
        static CT_GraphicFrameNonVisual* default_instance_ ;

    }

    class CT_GraphicFrame : public XSD::ComplexType{
    public:
        bool has_nvGraphicFramePr(){

            return m_has_nvGraphicFramePr;
        
        }
        CT_GraphicFrameNonVisual* mutable_nvGraphicFramePr(){

                m_has_nvGraphicFramePr = true;
                if (!m_nvGraphicFramePr)
                {
                    m_nvGraphicFramePr = new CT_GraphicFrameNonVisual();
                }
                return m_nvGraphicFramePr;
            
        }
        const CT_GraphicFrameNonVisual& nvGraphicFramePr(){

            if (m_nvGraphicFramePr)
            {
                return *m_nvGraphicFramePr;
            }
            return CT_GraphicFrameNonVisual::default_instance();
        
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
        void clear(){

                m_has_macro_attr = false;
                m_macro_attr.clear();
            
                m_has_fPublished_attr = false;
                m_fPublished_attr = false;
            
                m_has_nvGraphicFramePr = false;
                
        if (m_nvGraphicFramePr)
        {
            delete m_nvGraphicFramePr;
            m_nvGraphicFramePr = NULL;
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
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_macro_attr << \\\;
_outStream << _attrName << \=\\ << XSD::BooleanStr(m_fPublished_attr) << \\\;
        _outStream << \>\;
    
                if (m_has_nvGraphicFramePr)
                {
                    m_nvGraphicFramePr->toXml(\cdr:nvGraphicFramePr\, _outStream);;
                }
            
                if (m_has_xfrm)
                {
                    m_nvGraphicFramePr->toXml(\cdr:xfrm\, _outStream);;
                }
            
                if (m_has_graphic)
                {
                    m_nvGraphicFramePr->toXml(\cdr:graphic\, _outStream);;
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
        bool has_macro_attr(){

            return m_has_macro_attr;
        
        }
        void set_macro_attr(const string& _macro_attr ){

        m_has_macro_attr = true;
        m_macro_attr = _macro_attr;
        
        }
        const string& macro_attr(){

            return type: \string\nname: \m_macro_attr\n;
        
        }
        bool has_fPublished_attr(){

            return m_has_fPublished_attr;
        
        }
        void set_fPublished_attr(const boolean& _fPublished_attr ){

        m_has_fPublished_attr = true;
        m_fPublished_attr = _fPublished_attr;
        
        }
        const boolean& fPublished_attr(){

            return type: oolean\nname: \m_fPublished_attr\n;
        
        }

    private:
        bool m_has_nvGraphicFramePr ;
        CT_GraphicFrameNonVisual* m_nvGraphicFramePr ;
        bool m_has_xfrm ;
        ns_a::CT_Transform2D* m_xfrm ;
        bool m_has_graphic ;
        CT_GraphicalObject* m_graphic ;
        static CT_GraphicFrame* default_instance_ ;
        bool m_has_macro_attr ;
        string m_macro_attr ;
        bool m_has_fPublished_attr ;
        boolean m_fPublished_attr ;

    }

    class CT_GroupShapeNonVisual : public XSD::ComplexType{
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
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_cNvPr)
                {
                    m_cNvPr->toXml(\cdr:cNvPr\, _outStream);;
                }
            
                if (m_has_cNvGrpSpPr)
                {
                    m_cNvPr->toXml(\cdr:cNvGrpSpPr\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GroupShapeNonVisual& default_instance(){

    if (!CT_GroupShapeNonVisual::default_instance_)
    {
        CT_GroupShapeNonVisual::default_instance_ = new CT_GroupShapeNonVisual();
    }
    return *CT_GroupShapeNonVisual::default_instance_;

        }

    private:
        bool m_has_cNvPr ;
        ns_a::CT_NonVisualDrawingProps* m_cNvPr ;
        bool m_has_cNvGrpSpPr ;
        ns_a::CT_NonVisualGroupDrawingShapeProps* m_cNvGrpSpPr ;
        static CT_GroupShapeNonVisual* default_instance_ ;

    }

    class CT_GroupShape : public XSD::ComplexType{
    public:
        bool has_nvGrpSpPr(){

            return m_has_nvGrpSpPr;
        
        }
        CT_GroupShapeNonVisual* mutable_nvGrpSpPr(){

                m_has_nvGrpSpPr = true;
                if (!m_nvGrpSpPr)
                {
                    m_nvGrpSpPr = new CT_GroupShapeNonVisual();
                }
                return m_nvGrpSpPr;
            
        }
        const CT_GroupShapeNonVisual& nvGrpSpPr(){

            if (m_nvGrpSpPr)
            {
                return *m_nvGrpSpPr;
            }
            return CT_GroupShapeNonVisual::default_instance();
        
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
        CT_Shape* add_sp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Shape* pNewChild = pChildGroup->mutable_sp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_GroupShape* add_grpSp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_GroupShape* pNewChild = pChildGroup->mutable_grpSp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_GraphicFrame* add_graphicFrame(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_GraphicFrame* pNewChild = pChildGroup->mutable_graphicFrame();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Connector* add_cxnSp(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Connector* pNewChild = pChildGroup->mutable_cxnSp();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_Picture* add_pic(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_Picture* pNewChild = pChildGroup->mutable_pic();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

                m_has_nvGrpSpPr = false;
                
        if (m_nvGrpSpPr)
        {
            delete m_nvGrpSpPr;
            m_nvGrpSpPr = NULL;
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
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_nvGrpSpPr)
                {
                    m_nvGrpSpPr->toXml(\cdr:nvGrpSpPr\, _outStream);;
                }
            
                if (m_has_grpSpPr)
                {
                    m_nvGrpSpPr->toXml(\cdr:grpSpPr\, _outStream);;
                }
             
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sp())
            {
                (*iter)->toXml(\cdr:sp\, _outStream);
            }
            else if ((*iter)->has_grpSp())
            {
                (*iter)->toXml(\cdr:grpSp\, _outStream);
            }
            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->toXml(\cdr:graphicFrame\, _outStream);
            }
            else if ((*iter)->has_cxnSp())
            {
                (*iter)->toXml(\cdr:cxnSp\, _outStream);
            }
            else if ((*iter)->has_pic())
            {
                (*iter)->toXml(\cdr:pic\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_GroupShape& default_instance(){

    if (!CT_GroupShape::default_instance_)
    {
        CT_GroupShape::default_instance_ = new CT_GroupShape();
    }
    return *CT_GroupShape::default_instance_;

        }

    private:
        bool m_has_nvGrpSpPr ;
        CT_GroupShapeNonVisual* m_nvGrpSpPr ;
        bool m_has_grpSpPr ;
        ns_a::CT_GroupShapeProperties* m_grpSpPr ;
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_GroupShape* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_sp(){

            return m_has_sp;
        
            }
            CT_Shape* mutable_sp(){

                
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
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_sp = true;
                if (!m_sp)
                {
                    m_sp = new CT_Shape();
                }
                return m_sp;
            
            }
            const CT_Shape& sp(){

            if (m_sp)
            {
                return *m_sp;
            }
            return CT_Shape::default_instance();
        
            }
            bool has_grpSp(){

            return m_has_grpSp;
        
            }
            CT_GroupShape* mutable_grpSp(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_grpSp = true;
                if (!m_grpSp)
                {
                    m_grpSp = new CT_GroupShape();
                }
                return m_grpSp;
            
            }
            const CT_GroupShape& grpSp(){

            if (m_grpSp)
            {
                return *m_grpSp;
            }
            return CT_GroupShape::default_instance();
        
            }
            bool has_graphicFrame(){

            return m_has_graphicFrame;
        
            }
            CT_GraphicFrame* mutable_graphicFrame(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
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
            bool has_cxnSp(){

            return m_has_cxnSp;
        
            }
            CT_Connector* mutable_cxnSp(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
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
            
                m_has_cxnSp = true;
                if (!m_cxnSp)
                {
                    m_cxnSp = new CT_Connector();
                }
                return m_cxnSp;
            
            }
            const CT_Connector& cxnSp(){

            if (m_cxnSp)
            {
                return *m_cxnSp;
            }
            return CT_Connector::default_instance();
        
            }
            bool has_pic(){

            return m_has_pic;
        
            }
            CT_Picture* mutable_pic(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
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
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
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

        private:
            bool m_has_sp ;
            CT_Shape* m_sp ;
            bool m_has_grpSp ;
            CT_GroupShape* m_grpSp ;
            bool m_has_graphicFrame ;
            CT_GraphicFrame* m_graphicFrame ;
            bool m_has_cxnSp ;
            CT_Connector* m_cxnSp ;
            bool m_has_pic ;
            CT_Picture* m_pic ;

        }


    }

    class CT_Marker : public XSD::ComplexType{
    public:
        bool has_x(){

            return m_has_x;
        
        }
        ST_MarkerCoordinate* mutable_x(){

                m_has_x = true;
                if (!m_x)
                {
                    m_x = new ST_MarkerCoordinate();
                }
                return m_x;
            
        }
        const ST_MarkerCoordinate& x(){

            if (m_x)
            {
                return *m_x;
            }
            return ST_MarkerCoordinate::default_instance();
        
        }
        bool has_y(){

            return m_has_y;
        
        }
        ST_MarkerCoordinate* mutable_y(){

                m_has_y = true;
                if (!m_y)
                {
                    m_y = new ST_MarkerCoordinate();
                }
                return m_y;
            
        }
        const ST_MarkerCoordinate& y(){

            if (m_y)
            {
                return *m_y;
            }
            return ST_MarkerCoordinate::default_instance();
        
        }
        void clear(){

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
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_x)
                {
                    _outStream << \<cdr:x>\ << m_x->toString() << \</cdr:x>\;;
                }
            
                if (m_has_y)
                {
                    _outStream << \<cdr:y>\ << m_x->toString() << \</cdr:y>\;;
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
        bool m_has_x ;
        ST_MarkerCoordinate* m_x ;
        bool m_has_y ;
        ST_MarkerCoordinate* m_y ;
        static CT_Marker* default_instance_ ;

    }

    class CT_RelSizeAnchor : public XSD::ComplexType{
    public:
        bool has_from(){

            return m_has_from;
        
        }
        CT_Marker* mutable_from(){

                m_has_from = true;
                if (!m_from)
                {
                    m_from = new CT_Marker();
                }
                return m_from;
            
        }
        const CT_Marker& from(){

            if (m_from)
            {
                return *m_from;
            }
            return CT_Marker::default_instance();
        
        }
        bool has_to(){

            return m_has_to;
        
        }
        CT_Marker* mutable_to(){

                m_has_to = true;
                if (!m_to)
                {
                    m_to = new CT_Marker();
                }
                return m_to;
            
        }
        const CT_Marker& to(){

            if (m_to)
            {
                return *m_to;
            }
            return CT_Marker::default_instance();
        
        }
        bool has_sp(){

            return m_has_sp;
        
        }
        CT_Shape* mutable_sp(){

                
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
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_sp = true;
                if (!m_sp)
                {
                    m_sp = new CT_Shape();
                }
                return m_sp;
            
        }
        const CT_Shape& sp(){

            if (m_sp)
            {
                return *m_sp;
            }
            return CT_Shape::default_instance();
        
        }
        bool has_grpSp(){

            return m_has_grpSp;
        
        }
        CT_GroupShape* mutable_grpSp(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_grpSp = true;
                if (!m_grpSp)
                {
                    m_grpSp = new CT_GroupShape();
                }
                return m_grpSp;
            
        }
        const CT_GroupShape& grpSp(){

            if (m_grpSp)
            {
                return *m_grpSp;
            }
            return CT_GroupShape::default_instance();
        
        }
        bool has_graphicFrame(){

            return m_has_graphicFrame;
        
        }
        CT_GraphicFrame* mutable_graphicFrame(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
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
        bool has_cxnSp(){

            return m_has_cxnSp;
        
        }
        CT_Connector* mutable_cxnSp(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
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
            
                m_has_cxnSp = true;
                if (!m_cxnSp)
                {
                    m_cxnSp = new CT_Connector();
                }
                return m_cxnSp;
            
        }
        const CT_Connector& cxnSp(){

            if (m_cxnSp)
            {
                return *m_cxnSp;
            }
            return CT_Connector::default_instance();
        
        }
        bool has_pic(){

            return m_has_pic;
        
        }
        CT_Picture* mutable_pic(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
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
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
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
        void clear(){

                m_has_from = false;
                
        if (m_from)
        {
            delete m_from;
            m_from = NULL;
        }
    
            
                m_has_to = false;
                
        if (m_to)
        {
            delete m_to;
            m_to = NULL;
        }
    
             
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_from)
                {
                    m_from->toXml(\cdr:from\, _outStream);;
                }
            
                if (m_has_to)
                {
                    m_from->toXml(\cdr:to\, _outStream);;
                }
             
                if (m_has_sp)
                {
                    m_sp->toXml(\cdr:sp\, _outStream);;
                }
            
                if (m_has_grpSp)
                {
                    m_sp->toXml(\cdr:grpSp\, _outStream);;
                }
            
                if (m_has_graphicFrame)
                {
                    m_sp->toXml(\cdr:graphicFrame\, _outStream);;
                }
            
                if (m_has_cxnSp)
                {
                    m_sp->toXml(\cdr:cxnSp\, _outStream);;
                }
            
                if (m_has_pic)
                {
                    m_sp->toXml(\cdr:pic\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_RelSizeAnchor& default_instance(){

    if (!CT_RelSizeAnchor::default_instance_)
    {
        CT_RelSizeAnchor::default_instance_ = new CT_RelSizeAnchor();
    }
    return *CT_RelSizeAnchor::default_instance_;

        }

    private:
        bool m_has_from ;
        CT_Marker* m_from ;
        bool m_has_to ;
        CT_Marker* m_to ;
        bool m_has_sp ;
        CT_Shape* m_sp ;
        bool m_has_grpSp ;
        CT_GroupShape* m_grpSp ;
        bool m_has_graphicFrame ;
        CT_GraphicFrame* m_graphicFrame ;
        bool m_has_cxnSp ;
        CT_Connector* m_cxnSp ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        static CT_RelSizeAnchor* default_instance_ ;

    }

    class CT_AbsSizeAnchor : public XSD::ComplexType{
    public:
        bool has_from(){

            return m_has_from;
        
        }
        CT_Marker* mutable_from(){

                m_has_from = true;
                if (!m_from)
                {
                    m_from = new CT_Marker();
                }
                return m_from;
            
        }
        const CT_Marker& from(){

            if (m_from)
            {
                return *m_from;
            }
            return CT_Marker::default_instance();
        
        }
        bool has_ext(){

            return m_has_ext;
        
        }
        ns_a::CT_PositiveSize2D* mutable_ext(){

                m_has_ext = true;
                if (!m_ext)
                {
                    m_ext = new ns_a::CT_PositiveSize2D();
                }
                return m_ext;
            
        }
        const ns_a::CT_PositiveSize2D& ext(){

            if (m_ext)
            {
                return *m_ext;
            }
            return ns_a::CT_PositiveSize2D::default_instance();
        
        }
        bool has_sp(){

            return m_has_sp;
        
        }
        CT_Shape* mutable_sp(){

                
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
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_sp = true;
                if (!m_sp)
                {
                    m_sp = new CT_Shape();
                }
                return m_sp;
            
        }
        const CT_Shape& sp(){

            if (m_sp)
            {
                return *m_sp;
            }
            return CT_Shape::default_instance();
        
        }
        bool has_grpSp(){

            return m_has_grpSp;
        
        }
        CT_GroupShape* mutable_grpSp(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    ;
            
                m_has_grpSp = true;
                if (!m_grpSp)
                {
                    m_grpSp = new CT_GroupShape();
                }
                return m_grpSp;
            
        }
        const CT_GroupShape& grpSp(){

            if (m_grpSp)
            {
                return *m_grpSp;
            }
            return CT_GroupShape::default_instance();
        
        }
        bool has_graphicFrame(){

            return m_has_graphicFrame;
        
        }
        CT_GraphicFrame* mutable_graphicFrame(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    ;
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    ;
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    ;
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
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
        bool has_cxnSp(){

            return m_has_cxnSp;
        
        }
        CT_Connector* mutable_cxnSp(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
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
            
                m_has_cxnSp = true;
                if (!m_cxnSp)
                {
                    m_cxnSp = new CT_Connector();
                }
                return m_cxnSp;
            
        }
        const CT_Connector& cxnSp(){

            if (m_cxnSp)
            {
                return *m_cxnSp;
            }
            return CT_Connector::default_instance();
        
        }
        bool has_pic(){

            return m_has_pic;
        
        }
        CT_Picture* mutable_pic(){

                
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
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
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
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
        void clear(){

                m_has_from = false;
                
        if (m_from)
        {
            delete m_from;
            m_from = NULL;
        }
    
            
                m_has_ext = false;
                
        if (m_ext)
        {
            delete m_ext;
            m_ext = NULL;
        }
    
             
                m_has_sp = false;
                
        if (m_sp)
        {
            delete m_sp;
            m_sp = NULL;
        }
    
            
                m_has_grpSp = false;
                
        if (m_grpSp)
        {
            delete m_grpSp;
            m_grpSp = NULL;
        }
    
            
                m_has_graphicFrame = false;
                
        if (m_graphicFrame)
        {
            delete m_graphicFrame;
            m_graphicFrame = NULL;
        }
    
            
                m_has_cxnSp = false;
                
        if (m_cxnSp)
        {
            delete m_cxnSp;
            m_cxnSp = NULL;
        }
    
            
                m_has_pic = false;
                
        if (m_pic)
        {
            delete m_pic;
            m_pic = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_from)
                {
                    m_from->toXml(\cdr:from\, _outStream);;
                }
            
                if (m_has_ext)
                {
                    m_from->toXml(\cdr:ext\, _outStream);;
                }
             
                if (m_has_sp)
                {
                    m_sp->toXml(\cdr:sp\, _outStream);;
                }
            
                if (m_has_grpSp)
                {
                    m_sp->toXml(\cdr:grpSp\, _outStream);;
                }
            
                if (m_has_graphicFrame)
                {
                    m_sp->toXml(\cdr:graphicFrame\, _outStream);;
                }
            
                if (m_has_cxnSp)
                {
                    m_sp->toXml(\cdr:cxnSp\, _outStream);;
                }
            
                if (m_has_pic)
                {
                    m_sp->toXml(\cdr:pic\, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AbsSizeAnchor& default_instance(){

    if (!CT_AbsSizeAnchor::default_instance_)
    {
        CT_AbsSizeAnchor::default_instance_ = new CT_AbsSizeAnchor();
    }
    return *CT_AbsSizeAnchor::default_instance_;

        }

    private:
        bool m_has_from ;
        CT_Marker* m_from ;
        bool m_has_ext ;
        ns_a::CT_PositiveSize2D* m_ext ;
        bool m_has_sp ;
        CT_Shape* m_sp ;
        bool m_has_grpSp ;
        CT_GroupShape* m_grpSp ;
        bool m_has_graphicFrame ;
        CT_GraphicFrame* m_graphicFrame ;
        bool m_has_cxnSp ;
        CT_Connector* m_cxnSp ;
        bool m_has_pic ;
        CT_Picture* m_pic ;
        static CT_AbsSizeAnchor* default_instance_ ;

    }

    class CT_Drawing : public XSD::ComplexType{
    public:
        CT_RelSizeAnchor* add_relSizeAnchor(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_RelSizeAnchor* pNewChild = pChildGroup->mutable_relSizeAnchor();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        CT_AbsSizeAnchor* add_absSizeAnchor(){

            vector<ChildGroup_1*> *pChildGroup = new ChildGroup_1();
            CT_AbsSizeAnchor* pNewChild = pChildGroup->mutable_absSizeAnchor();
            m_childGroupList_1.push_back(pChildGroup);
            return pNewChild;
        
        }
        void clear(){

            vector<ChildGroup_1*>::iterator iter;
            for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
            {
                delete *iter;
            }
            m_childGroupList_1.clear();
        
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_relSizeAnchor())
            {
                (*iter)->toXml(\cdr:relSizeAnchor\, _outStream);
            }
            else if ((*iter)->has_absSizeAnchor())
            {
                (*iter)->toXml(\cdr:absSizeAnchor\, _outStream);
            }
        }
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Drawing& default_instance(){

    if (!CT_Drawing::default_instance_)
    {
        CT_Drawing::default_instance_ = new CT_Drawing();
    }
    return *CT_Drawing::default_instance_;

        }

    private:
        vector<ChildGroup_1*> m_childGroupList_1 ;
        static CT_Drawing* default_instance_ ;
        class ChildGroup_1{
        public:
            bool has_relSizeAnchor(){

            return m_has_relSizeAnchor;
        
            }
            CT_RelSizeAnchor* mutable_relSizeAnchor(){

                
                m_has_absSizeAnchor = false;
                
        if (m_absSizeAnchor)
        {
            delete m_absSizeAnchor;
            m_absSizeAnchor = NULL;
        }
    ;
            
                m_has_relSizeAnchor = true;
                if (!m_relSizeAnchor)
                {
                    m_relSizeAnchor = new CT_RelSizeAnchor();
                }
                return m_relSizeAnchor;
            
            }
            const CT_RelSizeAnchor& relSizeAnchor(){

            if (m_relSizeAnchor)
            {
                return *m_relSizeAnchor;
            }
            return CT_RelSizeAnchor::default_instance();
        
            }
            bool has_absSizeAnchor(){

            return m_has_absSizeAnchor;
        
            }
            CT_AbsSizeAnchor* mutable_absSizeAnchor(){

                
                m_has_relSizeAnchor = false;
                
        if (m_relSizeAnchor)
        {
            delete m_relSizeAnchor;
            m_relSizeAnchor = NULL;
        }
    ;
            
                m_has_absSizeAnchor = true;
                if (!m_absSizeAnchor)
                {
                    m_absSizeAnchor = new CT_AbsSizeAnchor();
                }
                return m_absSizeAnchor;
            
            }
            const CT_AbsSizeAnchor& absSizeAnchor(){

            if (m_absSizeAnchor)
            {
                return *m_absSizeAnchor;
            }
            return CT_AbsSizeAnchor::default_instance();
        
            }

        private:
            bool m_has_relSizeAnchor ;
            CT_RelSizeAnchor* m_relSizeAnchor ;
            bool m_has_absSizeAnchor ;
            CT_AbsSizeAnchor* m_absSizeAnchor ;

        }


    }

}