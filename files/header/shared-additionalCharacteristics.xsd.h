#ifndef shared-additionalCharacteristics_xsd 
#define shared-additionalCharacteristics_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
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
        ST_Relation();
        ST_Relation(const Type _type );
        bool has_type() const;
        void set_type(const Type& _type );
        const Type& type() const;
        string toString() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_Relation& default_instance() const;
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
        bool has_characteristic() const;
        CT_Characteristic* mutable_characteristic();
        const CT_Characteristic& characteristic() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_AdditionalCharacteristics& default_instance() const;

    private:
        bool m_has_characteristic ;
        CT_Characteristic* m_characteristic ;
        static CT_AdditionalCharacteristics* default_instance_ ;

    }

    class CT_Characteristic : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Characteristic& default_instance() const;
        bool has_name_attr() const;
        void set_name_attr(const string& _name_attr );
        const string& name_attr() const;
        bool has_relation_attr() const;
        void set_relation_attr(const ST_Relation& _relation_attr );
        const ST_Relation& relation_attr() const;
        bool has_val_attr() const;
        void set_val_attr(const string& _val_attr );
        const string& val_attr() const;
        bool has_vocabulary_attr() const;
        void set_vocabulary_attr(const anyURI& _vocabulary_attr );
        const anyURI& vocabulary_attr() const;

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
        void toXml(ostream& _outStream ) const;

    private:

    }

}