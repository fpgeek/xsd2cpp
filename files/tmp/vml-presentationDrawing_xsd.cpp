#include "vml-presentationDrawing_xsd.h"
#include <stdlib.h>
#include <sstream>
namespace ns_pvml{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class CT_Empty : public XSD::ComplexType{
    public:
        void clear(){

        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Empty& default_instance(){

    if (!CT_Empty::default_instance_)
    {
        CT_Empty::default_instance_ = new CT_Empty();
    }
    return *CT_Empty::default_instance_;

        }

    private:
        static CT_Empty* default_instance_ ;

    }

    class CT_Rel : public XSD::ComplexType{
    public:
        void clear(){

                m_has_id_attr = false;
                m_id_attr.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    _outStream << _attrName << \=\\ << m_id_attr << \\\;
        _outStream << \>\;
    
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Rel& default_instance(){

    if (!CT_Rel::default_instance_)
    {
        CT_Rel::default_instance_ = new CT_Rel();
    }
    return *CT_Rel::default_instance_;

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

    private:
        static CT_Rel* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;

    }

    class iscomment : public CT_Empty : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Empty::toXml(\iscomment\, _outStream);
    
        }

    private:

    }

    class textdata : public CT_Rel : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Rel::toXml(	extdata\, _outStream);
    
        }

    private:

    }

}