#include "dcmitype_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_dcmitype {
using namespace std;

// Element

// Attribute

// DCMIType
DCMIType::DCMIType()

{
}
DCMIType::~DCMIType()
{
    clear();
}
std::string DCMIType::toString() const
{
    return string();
}

void DCMIType::clear()
{    }

void DCMIType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{    }

const DCMIType& DCMIType::default_instance()
{
    if (!DCMIType::default_instance_)
    {
        DCMIType::default_instance_ = new DCMIType();
    }
    return *DCMIType::default_instance_;
}

DCMIType* DCMIType::default_instance_ = NULL;
}