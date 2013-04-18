#ifndef vml-presentationDrawing_xsd 
#define vml-presentationDrawing_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
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
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Empty& default_instance() const;

    private:
        static CT_Empty* default_instance_ ;

    }

    class CT_Rel : public XSD::ComplexType{
    public:
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Rel& default_instance() const;
        bool has_id_attr() const;
        void set_id_attr(const string& _id_attr );
        const string& id_attr() const;

    private:
        static CT_Rel* default_instance_ ;
        bool m_has_id_attr ;
        string m_id_attr ;

    }

    class iscomment : public CT_Empty : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

    class textdata : public CT_Rel : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}