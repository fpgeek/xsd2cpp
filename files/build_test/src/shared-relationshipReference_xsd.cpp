#include "shared-relationshipReference_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_r {
using namespace std;

// Element

// Attribute

// ST_RelationshipId
ST_RelationshipId::ST_RelationshipId()
    :m_has_value(false),
     m_value("")
{
}
ST_RelationshipId::ST_RelationshipId(const XSD::string_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_RelationshipId::~ST_RelationshipId()
{
    clear();
}
bool ST_RelationshipId::has_value() const
{
    return m_has_value;
}

void ST_RelationshipId::set_value(const XSD::string_& _value)
{
    m_has_value = true;
    m_value = _value;
}

const XSD::string_& ST_RelationshipId::get_value() const
{
    return m_value;
}

void ST_RelationshipId::clear()
{
    m_has_value = false;
    m_value.clear();;
}

void ST_RelationshipId::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_RelationshipId& ST_RelationshipId::default_instance()
{
    if (!ST_RelationshipId::default_instance_)
    {
        ST_RelationshipId::default_instance_ = new ST_RelationshipId();
    }
    return *ST_RelationshipId::default_instance_;
}

std::string ST_RelationshipId::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_RelationshipId* ST_RelationshipId::default_instance_ = NULL;

// id_attr
void id_attr::toXml(std::ostream& _outStream) const
{    }


// embed_attr
void embed_attr::toXml(std::ostream& _outStream) const
{    }


// link_attr
void link_attr::toXml(std::ostream& _outStream) const
{    }


// dm_attr
void dm_attr::toXml(std::ostream& _outStream) const
{    }


// lo_attr
void lo_attr::toXml(std::ostream& _outStream) const
{    }


// qs_attr
void qs_attr::toXml(std::ostream& _outStream) const
{    }


// cs_attr
void cs_attr::toXml(std::ostream& _outStream) const
{    }


// blip_attr
void blip_attr::toXml(std::ostream& _outStream) const
{    }


// pict_attr
void pict_attr::toXml(std::ostream& _outStream) const
{    }


// href_attr
void href_attr::toXml(std::ostream& _outStream) const
{    }


// topLeft_attr
void topLeft_attr::toXml(std::ostream& _outStream) const
{    }


// topRight_attr
void topRight_attr::toXml(std::ostream& _outStream) const
{    }


// bottomLeft_attr
void bottomLeft_attr::toXml(std::ostream& _outStream) const
{    }


// bottomRight_attr
void bottomRight_attr::toXml(std::ostream& _outStream) const
{    }

}