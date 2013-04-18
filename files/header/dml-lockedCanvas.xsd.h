#ifndef dml-lockedCanvas_xsd 
#define dml-lockedCanvas_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
namespace ns_d{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class lockedCanvas : public ns_a::CT_GvmlGroupShape : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}