#include "dml-lockedCanvas_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        void toXml(ostream& _outStream ){

        ns_a::CT_GvmlGroupShape::toXml(\lockedCanvas\, _outStream);
    
        }

    private:

    }

}