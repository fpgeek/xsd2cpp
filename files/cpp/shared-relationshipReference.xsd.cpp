#include "shared-relationshipReference_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        ST_RelationshipId(){
            m_has_string = false
            m_string = 

        }
        ST_RelationshipId(const XSD::string& _string ){
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
        const ST_RelationshipId& default_instance(){

    if (!ST_RelationshipId::default_instance_)
    {
        ST_RelationshipId::default_instance_ = new ST_RelationshipId();
    }
    return *ST_RelationshipId::default_instance_;

        }

    private:
        static ST_RelationshipId* default_instance_ ;
        bool m_has_string ;
        string m_string ;

    }

    class id_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\id\, _outStream);
        
        }

    private:

    }

    class embed_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\embed\, _outStream);
        
        }

    private:

    }

    class link_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\link\, _outStream);
        
        }

    private:

    }

    class dm_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\dm\, _outStream);
        
        }

    private:

    }

    class lo_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\lo\, _outStream);
        
        }

    private:

    }

    class qs_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\qs\, _outStream);
        
        }

    private:

    }

    class cs_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\cs\, _outStream);
        
        }

    private:

    }

    class blip_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(lip\, _outStream);
        
        }

    private:

    }

    class pict_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\pict\, _outStream);
        
        }

    private:

    }

    class href_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(\href\, _outStream);
        
        }

    private:

    }

    class topLeft_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(	opLeft\, _outStream);
        
        }

    private:

    }

    class topRight_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(	opRight\, _outStream);
        
        }

    private:

    }

    class bottomLeft_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(ottomLeft\, _outStream);
        
        }

    private:

    }

    class bottomRight_attr : public ST_RelationshipId : public Attribute{
    public:
        void toXml(ostream& _outStream ){

            ST_RelationshipId::toXml(ottomRight\, _outStream);
        
        }

    private:

    }

}