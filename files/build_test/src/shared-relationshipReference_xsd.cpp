#include "shared-relationshipReference_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
namespace ns_r {
 using namespace std;

    // Element

    // Attribute

    // ST_RelationshipId
    ST_RelationshipId::ST_RelationshipId()
    :m_has_string(false),
    m_string("")
    {
    }
    ST_RelationshipId::ST_RelationshipId(const XSD::string_& _string)
    :m_has_string(true)
    {
    
    set_string(m_string);
    }
    bool ST_RelationshipId::has_string() const
    {    
    return m_has_string;
    }

    void ST_RelationshipId::set_string(const XSD::string_& _string)
    {    
    m_has_string = true;
    m_string = _string;
    }

    const XSD::string_& ST_RelationshipId::get_string() const
    {    
    return m_string;
    }

    void ST_RelationshipId::clear()
    {    
    m_has_string = false;
    m_string.clear();;
    }

    void ST_RelationshipId::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
    {    
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
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
    strStream << get_string();
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