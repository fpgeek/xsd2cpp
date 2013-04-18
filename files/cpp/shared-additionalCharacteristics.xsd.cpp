#include "shared-additionalCharacteristics_xsd.h"
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

    class ST_Relation : public XSD::SimpleType{
    public:
        ST_Relation(){
            m_has_type = false

        }
        ST_Relation(const Type _type ){
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

        return ST_Relation::TypeStrList[m_type];
    
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
        const ST_Relation& default_instance(){

    if (!ST_Relation::default_instance_)
    {
        ST_Relation::default_instance_ = new ST_Relation();
    }
    return *ST_Relation::default_instance_;

        }
        enum Type{
            _ge_ = 1,
            _le_,
            _gt_,
            _lt_,
            _eq_
        }

    private:
        static const string TypeStrList [];
        static ST_Relation* default_instance_ ;
        bool m_has_type ;
        Type m_type ;

    }

    class CT_AdditionalCharacteristics : public XSD::ComplexType{
    public:
        bool has_characteristic(){

            return m_has_characteristic;
        
        }
        CT_Characteristic* mutable_characteristic(){

                m_has_characteristic = true;
                if (!m_characteristic)
                {
                    m_characteristic = new CT_Characteristic();
                }
                return m_characteristic;
            
        }
        const CT_Characteristic& characteristic(){

            if (m_characteristic)
            {
                return *m_characteristic;
            }
            return CT_Characteristic::default_instance();
        
        }
        void clear(){

                m_has_characteristic = false;
                
        if (m_characteristic)
        {
            delete m_characteristic;
            m_characteristic = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_characteristic)
                {
                    m_characteristic->toXml(characteristic, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_AdditionalCharacteristics& default_instance(){

    if (!CT_AdditionalCharacteristics::default_instance_)
    {
        CT_AdditionalCharacteristics::default_instance_ = new CT_AdditionalCharacteristics();
    }
    return *CT_AdditionalCharacteristics::default_instance_;

        }

    private:
        bool m_has_characteristic ;
        CT_Characteristic* m_characteristic ;
        static CT_AdditionalCharacteristics* default_instance_ ;

    }

    class CT_Characteristic : public XSD::ComplexType{
    public:
        void clear(){

                m_has_name_attr = false;
                m_name_attr.clear();
            
                m_has_relation_attr = false;
                
        if (m_relation_attr)
        {
            delete m_relation_attr;
            m_relation_attr = NULL;
        }
    
            
                m_has_val_attr = false;
                m_val_attr.clear();
            
                m_has_vocabulary_attr = false;
                m_vocabulary_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_name_attr << \\\;
m_relation_attr->toXml(_attrName, _outStream);
_outStream << _attrName << \=\\ << m_val_attr << \\\;
_outStream << _attrName << \=\\ << m_vocabulary_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Characteristic& default_instance(){

    if (!CT_Characteristic::default_instance_)
    {
        CT_Characteristic::default_instance_ = new CT_Characteristic();
    }
    return *CT_Characteristic::default_instance_;

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
        bool has_relation_attr(){

            return m_has_relation_attr;
        
        }
        void set_relation_attr(const ST_Relation& _relation_attr ){

            m_has_relation_attr = true;
            m_relation_attr = new ST_Relation(_relation_attr);
        
        }
        const ST_Relation& relation_attr(){

            if (m_relation_attr)
            {
                return *m_relation_attr;
            }
            return ST_Relation::default_instance();
        
        }
        bool has_val_attr(){

            return m_has_val_attr;
        
        }
        void set_val_attr(const string& _val_attr ){

        m_has_val_attr = true;
        m_val_attr = _val_attr;
        
        }
        const string& val_attr(){

            return type: \string\nname: \m_val_attr\n;
        
        }
        bool has_vocabulary_attr(){

            return m_has_vocabulary_attr;
        
        }
        void set_vocabulary_attr(const anyURI& _vocabulary_attr ){

        m_has_vocabulary_attr = true;
        m_vocabulary_attr = _vocabulary_attr;
        
        }
        const anyURI& vocabulary_attr(){

            return type: nyURI\nname: \m_vocabulary_attr\n;
        
        }

    private:
        static CT_Characteristic* default_instance_ ;
        bool m_has_name_attr ;
        string m_name_attr ;
        bool m_has_relation_attr ;
        ST_Relation* m_relation_attr ;
        bool m_has_val_attr ;
        string m_val_attr ;
        bool m_has_vocabulary_attr ;
        anyURI m_vocabulary_attr ;

    }

    class additionalCharacteristics : public CT_AdditionalCharacteristics : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_AdditionalCharacteristics::toXml(dditionalCharacteristics\, _outStream);
    
        }

    private:

    }

}