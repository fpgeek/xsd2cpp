#ifndef shared-relationshipReference_xsd 
#define shared-relationshipReference_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
namespace ns_r{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class ST_RelationshipId : public XSD::SimpleType{
    public:
        ST_RelationshipId();
        ST_RelationshipId(const XSD::string& _string );
        bool has_string() const;
        void set_string(const string& _string );
        const string& string() const;
        void clear();
        void toXml(const string _attrName , ostream _outStream ) const;
        static const ST_RelationshipId& default_instance() const;

    private:
        static ST_RelationshipId* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class id_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class embed_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class link_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class dm_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class lo_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class qs_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class cs_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class blip_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class pict_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class href_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class topLeft_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class topRight_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bottomLeft_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class bottomRight_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}