#include "pml_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "shared-relationshipReference_xsd.h"
#include "dml-main_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_p {
using namespace std;

// Element

// Attribute

// ST_TransitionSideDirectionType
ST_TransitionSideDirectionType::ST_TransitionSideDirectionType()
    :m_has_type(false)
{
}
ST_TransitionSideDirectionType::ST_TransitionSideDirectionType(const ST_TransitionSideDirectionType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TransitionSideDirectionType::~ST_TransitionSideDirectionType()
{
    clear();
}
bool ST_TransitionSideDirectionType::has_type() const
{
    return m_has_type;
}

void ST_TransitionSideDirectionType::set_type(const ST_TransitionSideDirectionType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TransitionSideDirectionType::Type& ST_TransitionSideDirectionType::get_type() const
{
    return m_type;
}

std::string ST_TransitionSideDirectionType::toString() const
{
    return ST_TransitionSideDirectionType::TypeStrList[m_type];
}

void ST_TransitionSideDirectionType::clear()
{
    m_has_type = false;
}

void ST_TransitionSideDirectionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TransitionSideDirectionType& ST_TransitionSideDirectionType::default_instance()
{
    if (!ST_TransitionSideDirectionType::default_instance_)
    {
        ST_TransitionSideDirectionType::default_instance_ = new ST_TransitionSideDirectionType();
    }
    return *ST_TransitionSideDirectionType::default_instance_;
}

const std::string ST_TransitionSideDirectionType::TypeStrList[] =
{
    "l",
    "u",
    "r",
    "d"
};
ST_TransitionSideDirectionType* ST_TransitionSideDirectionType::default_instance_ = NULL;

// ST_TransitionCornerDirectionType
ST_TransitionCornerDirectionType::ST_TransitionCornerDirectionType()
    :m_has_type(false)
{
}
ST_TransitionCornerDirectionType::ST_TransitionCornerDirectionType(const ST_TransitionCornerDirectionType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TransitionCornerDirectionType::~ST_TransitionCornerDirectionType()
{
    clear();
}
bool ST_TransitionCornerDirectionType::has_type() const
{
    return m_has_type;
}

void ST_TransitionCornerDirectionType::set_type(const ST_TransitionCornerDirectionType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TransitionCornerDirectionType::Type& ST_TransitionCornerDirectionType::get_type() const
{
    return m_type;
}

std::string ST_TransitionCornerDirectionType::toString() const
{
    return ST_TransitionCornerDirectionType::TypeStrList[m_type];
}

void ST_TransitionCornerDirectionType::clear()
{
    m_has_type = false;
}

void ST_TransitionCornerDirectionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TransitionCornerDirectionType& ST_TransitionCornerDirectionType::default_instance()
{
    if (!ST_TransitionCornerDirectionType::default_instance_)
    {
        ST_TransitionCornerDirectionType::default_instance_ = new ST_TransitionCornerDirectionType();
    }
    return *ST_TransitionCornerDirectionType::default_instance_;
}

const std::string ST_TransitionCornerDirectionType::TypeStrList[] =
{
    "lu",
    "ru",
    "ld",
    "rd"
};
ST_TransitionCornerDirectionType* ST_TransitionCornerDirectionType::default_instance_ = NULL;

// ST_TransitionInOutDirectionType
ST_TransitionInOutDirectionType::ST_TransitionInOutDirectionType()
    :m_has_type(false)
{
}
ST_TransitionInOutDirectionType::ST_TransitionInOutDirectionType(const ST_TransitionInOutDirectionType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TransitionInOutDirectionType::~ST_TransitionInOutDirectionType()
{
    clear();
}
bool ST_TransitionInOutDirectionType::has_type() const
{
    return m_has_type;
}

void ST_TransitionInOutDirectionType::set_type(const ST_TransitionInOutDirectionType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TransitionInOutDirectionType::Type& ST_TransitionInOutDirectionType::get_type() const
{
    return m_type;
}

std::string ST_TransitionInOutDirectionType::toString() const
{
    return ST_TransitionInOutDirectionType::TypeStrList[m_type];
}

void ST_TransitionInOutDirectionType::clear()
{
    m_has_type = false;
}

void ST_TransitionInOutDirectionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TransitionInOutDirectionType& ST_TransitionInOutDirectionType::default_instance()
{
    if (!ST_TransitionInOutDirectionType::default_instance_)
    {
        ST_TransitionInOutDirectionType::default_instance_ = new ST_TransitionInOutDirectionType();
    }
    return *ST_TransitionInOutDirectionType::default_instance_;
}

const std::string ST_TransitionInOutDirectionType::TypeStrList[] =
{
    "out",
    "in"
};
ST_TransitionInOutDirectionType* ST_TransitionInOutDirectionType::default_instance_ = NULL;

// ST_TransitionEightDirectionType
ST_TransitionEightDirectionType::ST_TransitionEightDirectionType()
    :m_has_ST_TransitionSideDirectionType(false),
     m_ST_TransitionSideDirectionType(NULL),
     m_has_ST_TransitionCornerDirectionType(false),
     m_ST_TransitionCornerDirectionType(NULL)
{
}
ST_TransitionEightDirectionType::ST_TransitionEightDirectionType(const ST_TransitionEightDirectionType& _ST_TransitionEightDirectionType)
    :m_has_ST_TransitionSideDirectionType(false),
     m_ST_TransitionSideDirectionType(NULL),
     m_has_ST_TransitionCornerDirectionType(false),
     m_ST_TransitionCornerDirectionType(NULL)
{

    m_has_ST_TransitionSideDirectionType = _ST_TransitionEightDirectionType.has_ST_TransitionSideDirectionType();
    if (_ST_TransitionEightDirectionType.has_ST_TransitionSideDirectionType())
    {
        m_ST_TransitionSideDirectionType = new ST_TransitionSideDirectionType(_ST_TransitionEightDirectionType.get_ST_TransitionSideDirectionType());
    }


    m_has_ST_TransitionCornerDirectionType = _ST_TransitionEightDirectionType.has_ST_TransitionCornerDirectionType();
    if (_ST_TransitionEightDirectionType.has_ST_TransitionCornerDirectionType())
    {
        m_ST_TransitionCornerDirectionType = new ST_TransitionCornerDirectionType(_ST_TransitionEightDirectionType.get_ST_TransitionCornerDirectionType());
    }
}
ST_TransitionEightDirectionType::~ST_TransitionEightDirectionType()
{
    clear();
}
bool ST_TransitionEightDirectionType::has_ST_TransitionSideDirectionType() const
{
    return m_has_ST_TransitionSideDirectionType;
}

ST_TransitionSideDirectionType* ST_TransitionEightDirectionType::mutable_ST_TransitionSideDirectionType()
{
    clear_ST_TransitionCornerDirectionType();
    m_has_ST_TransitionSideDirectionType = true;
    if (!m_ST_TransitionSideDirectionType)
    {
        m_ST_TransitionSideDirectionType = new ST_TransitionSideDirectionType();
    }
    return m_ST_TransitionSideDirectionType;
}

const ST_TransitionSideDirectionType& ST_TransitionEightDirectionType::get_ST_TransitionSideDirectionType() const
{
    if (m_ST_TransitionSideDirectionType)
    {
        return *m_ST_TransitionSideDirectionType;
    }
    return ST_TransitionSideDirectionType::default_instance();
}

void ST_TransitionEightDirectionType::clear_ST_TransitionSideDirectionType()
{
    m_has_ST_TransitionSideDirectionType = false;
    if (m_ST_TransitionSideDirectionType)
    {
        delete m_ST_TransitionSideDirectionType;
        m_ST_TransitionSideDirectionType = NULL;
    }
}

bool ST_TransitionEightDirectionType::has_ST_TransitionCornerDirectionType() const
{
    return m_has_ST_TransitionCornerDirectionType;
}

ST_TransitionCornerDirectionType* ST_TransitionEightDirectionType::mutable_ST_TransitionCornerDirectionType()
{
    clear_ST_TransitionSideDirectionType();
    m_has_ST_TransitionCornerDirectionType = true;
    if (!m_ST_TransitionCornerDirectionType)
    {
        m_ST_TransitionCornerDirectionType = new ST_TransitionCornerDirectionType();
    }
    return m_ST_TransitionCornerDirectionType;
}

const ST_TransitionCornerDirectionType& ST_TransitionEightDirectionType::get_ST_TransitionCornerDirectionType() const
{
    if (m_ST_TransitionCornerDirectionType)
    {
        return *m_ST_TransitionCornerDirectionType;
    }
    return ST_TransitionCornerDirectionType::default_instance();
}

void ST_TransitionEightDirectionType::clear_ST_TransitionCornerDirectionType()
{
    m_has_ST_TransitionCornerDirectionType = false;
    if (m_ST_TransitionCornerDirectionType)
    {
        delete m_ST_TransitionCornerDirectionType;
        m_ST_TransitionCornerDirectionType = NULL;
    }
}

std::string ST_TransitionEightDirectionType::toString() const
{
    if (m_has_ST_TransitionSideDirectionType)
    {
        return m_ST_TransitionSideDirectionType->toString();
    }

    if (m_has_ST_TransitionCornerDirectionType)
    {
        return m_ST_TransitionCornerDirectionType->toString();
    }

    return string();
}

void ST_TransitionEightDirectionType::clear()
{   clear_ST_TransitionSideDirectionType();
    clear_ST_TransitionCornerDirectionType();
}

void ST_TransitionEightDirectionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_TransitionSideDirectionType)
    {
        m_ST_TransitionSideDirectionType->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_TransitionCornerDirectionType)
    {
        m_ST_TransitionCornerDirectionType->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_TransitionEightDirectionType& ST_TransitionEightDirectionType::default_instance()
{
    if (!ST_TransitionEightDirectionType::default_instance_)
    {
        ST_TransitionEightDirectionType::default_instance_ = new ST_TransitionEightDirectionType();
    }
    return *ST_TransitionEightDirectionType::default_instance_;
}

ST_TransitionEightDirectionType* ST_TransitionEightDirectionType::default_instance_ = NULL;

// ST_TransitionSpeed
ST_TransitionSpeed::ST_TransitionSpeed()
    :m_has_type(false)
{
}
ST_TransitionSpeed::ST_TransitionSpeed(const ST_TransitionSpeed::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TransitionSpeed::~ST_TransitionSpeed()
{
    clear();
}
bool ST_TransitionSpeed::has_type() const
{
    return m_has_type;
}

void ST_TransitionSpeed::set_type(const ST_TransitionSpeed::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TransitionSpeed::Type& ST_TransitionSpeed::get_type() const
{
    return m_type;
}

std::string ST_TransitionSpeed::toString() const
{
    return ST_TransitionSpeed::TypeStrList[m_type];
}

void ST_TransitionSpeed::clear()
{
    m_has_type = false;
}

void ST_TransitionSpeed::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TransitionSpeed& ST_TransitionSpeed::default_instance()
{
    if (!ST_TransitionSpeed::default_instance_)
    {
        ST_TransitionSpeed::default_instance_ = new ST_TransitionSpeed();
    }
    return *ST_TransitionSpeed::default_instance_;
}

const std::string ST_TransitionSpeed::TypeStrList[] =
{
    "slow",
    "med",
    "fast"
};
ST_TransitionSpeed* ST_TransitionSpeed::default_instance_ = NULL;

// ST_TLTimeIndefinite
ST_TLTimeIndefinite::ST_TLTimeIndefinite()
    :m_has_type(false)
{
}
ST_TLTimeIndefinite::ST_TLTimeIndefinite(const ST_TLTimeIndefinite::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTimeIndefinite::~ST_TLTimeIndefinite()
{
    clear();
}
bool ST_TLTimeIndefinite::has_type() const
{
    return m_has_type;
}

void ST_TLTimeIndefinite::set_type(const ST_TLTimeIndefinite::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTimeIndefinite::Type& ST_TLTimeIndefinite::get_type() const
{
    return m_type;
}

std::string ST_TLTimeIndefinite::toString() const
{
    return ST_TLTimeIndefinite::TypeStrList[m_type];
}

void ST_TLTimeIndefinite::clear()
{
    m_has_type = false;
}

void ST_TLTimeIndefinite::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTimeIndefinite& ST_TLTimeIndefinite::default_instance()
{
    if (!ST_TLTimeIndefinite::default_instance_)
    {
        ST_TLTimeIndefinite::default_instance_ = new ST_TLTimeIndefinite();
    }
    return *ST_TLTimeIndefinite::default_instance_;
}

const std::string ST_TLTimeIndefinite::TypeStrList[] =
{
    "indefinite"
};
ST_TLTimeIndefinite* ST_TLTimeIndefinite::default_instance_ = NULL;

// ST_TLTime
ST_TLTime::ST_TLTime()
    :m_has_unsignedInt(false),
     m_unsignedInt(0),
     m_has_ST_TLTimeIndefinite(false),
     m_ST_TLTimeIndefinite(NULL)
{
}
ST_TLTime::ST_TLTime(const ST_TLTime& _ST_TLTime)
    :m_has_unsignedInt(false),
     m_unsignedInt(0),
     m_has_ST_TLTimeIndefinite(false),
     m_ST_TLTimeIndefinite(NULL)
{

    m_has_unsignedInt = _ST_TLTime.has_unsignedInt();
    m_unsignedInt = _ST_TLTime.get_unsignedInt();


    m_has_ST_TLTimeIndefinite = _ST_TLTime.has_ST_TLTimeIndefinite();
    if (_ST_TLTime.has_ST_TLTimeIndefinite())
    {
        m_ST_TLTimeIndefinite = new ST_TLTimeIndefinite(_ST_TLTime.get_ST_TLTimeIndefinite());
    }
}
ST_TLTime::~ST_TLTime()
{
    clear();
}
bool ST_TLTime::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_TLTime::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{
    clear_ST_TLTimeIndefinite();
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_TLTime::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_TLTime::clear_unsignedInt()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;
}

bool ST_TLTime::has_ST_TLTimeIndefinite() const
{
    return m_has_ST_TLTimeIndefinite;
}

ST_TLTimeIndefinite* ST_TLTime::mutable_ST_TLTimeIndefinite()
{
    clear_unsignedInt();
    m_has_ST_TLTimeIndefinite = true;
    if (!m_ST_TLTimeIndefinite)
    {
        m_ST_TLTimeIndefinite = new ST_TLTimeIndefinite();
    }
    return m_ST_TLTimeIndefinite;
}

const ST_TLTimeIndefinite& ST_TLTime::get_ST_TLTimeIndefinite() const
{
    if (m_ST_TLTimeIndefinite)
    {
        return *m_ST_TLTimeIndefinite;
    }
    return ST_TLTimeIndefinite::default_instance();
}

void ST_TLTime::clear_ST_TLTimeIndefinite()
{
    m_has_ST_TLTimeIndefinite = false;
    if (m_ST_TLTimeIndefinite)
    {
        delete m_ST_TLTimeIndefinite;
        m_ST_TLTimeIndefinite = NULL;
    }
}

std::string ST_TLTime::toString() const
{
    if (m_has_unsignedInt)
    {

        std::stringstream strStream;
        strStream << m_unsignedInt;
        return strStream.str();

    }

    if (m_has_ST_TLTimeIndefinite)
    {
        return m_ST_TLTimeIndefinite->toString();
    }

    return string();
}

void ST_TLTime::clear()
{   clear_unsignedInt();
    clear_ST_TLTimeIndefinite();
}

void ST_TLTime::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";
        return;
    }

    if (m_has_ST_TLTimeIndefinite)
    {
        m_ST_TLTimeIndefinite->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_TLTime& ST_TLTime::default_instance()
{
    if (!ST_TLTime::default_instance_)
    {
        ST_TLTime::default_instance_ = new ST_TLTime();
    }
    return *ST_TLTime::default_instance_;
}

ST_TLTime* ST_TLTime::default_instance_ = NULL;

// ST_TLTimeNodeID
ST_TLTimeNodeID::ST_TLTimeNodeID()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_TLTimeNodeID::ST_TLTimeNodeID(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_TLTimeNodeID::~ST_TLTimeNodeID()
{
    clear();
}
bool ST_TLTimeNodeID::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_TLTimeNodeID::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_TLTimeNodeID::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_TLTimeNodeID::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_TLTimeNodeID::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_TLTimeNodeID& ST_TLTimeNodeID::default_instance()
{
    if (!ST_TLTimeNodeID::default_instance_)
    {
        ST_TLTimeNodeID::default_instance_ = new ST_TLTimeNodeID();
    }
    return *ST_TLTimeNodeID::default_instance_;
}

std::string ST_TLTimeNodeID::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_TLTimeNodeID* ST_TLTimeNodeID::default_instance_ = NULL;

// ST_IterateType
ST_IterateType::ST_IterateType()
    :m_has_type(false)
{
}
ST_IterateType::ST_IterateType(const ST_IterateType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_IterateType::~ST_IterateType()
{
    clear();
}
bool ST_IterateType::has_type() const
{
    return m_has_type;
}

void ST_IterateType::set_type(const ST_IterateType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_IterateType::Type& ST_IterateType::get_type() const
{
    return m_type;
}

std::string ST_IterateType::toString() const
{
    return ST_IterateType::TypeStrList[m_type];
}

void ST_IterateType::clear()
{
    m_has_type = false;
}

void ST_IterateType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_IterateType& ST_IterateType::default_instance()
{
    if (!ST_IterateType::default_instance_)
    {
        ST_IterateType::default_instance_ = new ST_IterateType();
    }
    return *ST_IterateType::default_instance_;
}

const std::string ST_IterateType::TypeStrList[] =
{
    "el",
    "wd",
    "lt"
};
ST_IterateType* ST_IterateType::default_instance_ = NULL;

// ST_TLChartSubelementType
ST_TLChartSubelementType::ST_TLChartSubelementType()
    :m_has_type(false)
{
}
ST_TLChartSubelementType::ST_TLChartSubelementType(const ST_TLChartSubelementType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLChartSubelementType::~ST_TLChartSubelementType()
{
    clear();
}
bool ST_TLChartSubelementType::has_type() const
{
    return m_has_type;
}

void ST_TLChartSubelementType::set_type(const ST_TLChartSubelementType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLChartSubelementType::Type& ST_TLChartSubelementType::get_type() const
{
    return m_type;
}

std::string ST_TLChartSubelementType::toString() const
{
    return ST_TLChartSubelementType::TypeStrList[m_type];
}

void ST_TLChartSubelementType::clear()
{
    m_has_type = false;
}

void ST_TLChartSubelementType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLChartSubelementType& ST_TLChartSubelementType::default_instance()
{
    if (!ST_TLChartSubelementType::default_instance_)
    {
        ST_TLChartSubelementType::default_instance_ = new ST_TLChartSubelementType();
    }
    return *ST_TLChartSubelementType::default_instance_;
}

const std::string ST_TLChartSubelementType::TypeStrList[] =
{
    "gridLegend",
    "series",
    "category",
    "ptInSeries",
    "ptInCategory"
};
ST_TLChartSubelementType* ST_TLChartSubelementType::default_instance_ = NULL;

// ST_TLTriggerRuntimeNode
ST_TLTriggerRuntimeNode::ST_TLTriggerRuntimeNode()
    :m_has_type(false)
{
}
ST_TLTriggerRuntimeNode::ST_TLTriggerRuntimeNode(const ST_TLTriggerRuntimeNode::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTriggerRuntimeNode::~ST_TLTriggerRuntimeNode()
{
    clear();
}
bool ST_TLTriggerRuntimeNode::has_type() const
{
    return m_has_type;
}

void ST_TLTriggerRuntimeNode::set_type(const ST_TLTriggerRuntimeNode::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTriggerRuntimeNode::Type& ST_TLTriggerRuntimeNode::get_type() const
{
    return m_type;
}

std::string ST_TLTriggerRuntimeNode::toString() const
{
    return ST_TLTriggerRuntimeNode::TypeStrList[m_type];
}

void ST_TLTriggerRuntimeNode::clear()
{
    m_has_type = false;
}

void ST_TLTriggerRuntimeNode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTriggerRuntimeNode& ST_TLTriggerRuntimeNode::default_instance()
{
    if (!ST_TLTriggerRuntimeNode::default_instance_)
    {
        ST_TLTriggerRuntimeNode::default_instance_ = new ST_TLTriggerRuntimeNode();
    }
    return *ST_TLTriggerRuntimeNode::default_instance_;
}

const std::string ST_TLTriggerRuntimeNode::TypeStrList[] =
{
    "first",
    "last",
    "all"
};
ST_TLTriggerRuntimeNode* ST_TLTriggerRuntimeNode::default_instance_ = NULL;

// ST_TLTriggerEvent
ST_TLTriggerEvent::ST_TLTriggerEvent()
    :m_has_type(false)
{
}
ST_TLTriggerEvent::ST_TLTriggerEvent(const ST_TLTriggerEvent::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTriggerEvent::~ST_TLTriggerEvent()
{
    clear();
}
bool ST_TLTriggerEvent::has_type() const
{
    return m_has_type;
}

void ST_TLTriggerEvent::set_type(const ST_TLTriggerEvent::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTriggerEvent::Type& ST_TLTriggerEvent::get_type() const
{
    return m_type;
}

std::string ST_TLTriggerEvent::toString() const
{
    return ST_TLTriggerEvent::TypeStrList[m_type];
}

void ST_TLTriggerEvent::clear()
{
    m_has_type = false;
}

void ST_TLTriggerEvent::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTriggerEvent& ST_TLTriggerEvent::default_instance()
{
    if (!ST_TLTriggerEvent::default_instance_)
    {
        ST_TLTriggerEvent::default_instance_ = new ST_TLTriggerEvent();
    }
    return *ST_TLTriggerEvent::default_instance_;
}

const std::string ST_TLTriggerEvent::TypeStrList[] =
{
    "onBegin",
    "onEnd",
    "begin",
    "end",
    "onClick",
    "onDblClick",
    "onMouseOver",
    "onMouseOut",
    "onNext",
    "onPrev",
    "onStopAudio"
};
ST_TLTriggerEvent* ST_TLTriggerEvent::default_instance_ = NULL;

// ST_TLTimeNodePresetClassType
ST_TLTimeNodePresetClassType::ST_TLTimeNodePresetClassType()
    :m_has_type(false)
{
}
ST_TLTimeNodePresetClassType::ST_TLTimeNodePresetClassType(const ST_TLTimeNodePresetClassType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTimeNodePresetClassType::~ST_TLTimeNodePresetClassType()
{
    clear();
}
bool ST_TLTimeNodePresetClassType::has_type() const
{
    return m_has_type;
}

void ST_TLTimeNodePresetClassType::set_type(const ST_TLTimeNodePresetClassType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTimeNodePresetClassType::Type& ST_TLTimeNodePresetClassType::get_type() const
{
    return m_type;
}

std::string ST_TLTimeNodePresetClassType::toString() const
{
    return ST_TLTimeNodePresetClassType::TypeStrList[m_type];
}

void ST_TLTimeNodePresetClassType::clear()
{
    m_has_type = false;
}

void ST_TLTimeNodePresetClassType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTimeNodePresetClassType& ST_TLTimeNodePresetClassType::default_instance()
{
    if (!ST_TLTimeNodePresetClassType::default_instance_)
    {
        ST_TLTimeNodePresetClassType::default_instance_ = new ST_TLTimeNodePresetClassType();
    }
    return *ST_TLTimeNodePresetClassType::default_instance_;
}

const std::string ST_TLTimeNodePresetClassType::TypeStrList[] =
{
    "entr",
    "exit",
    "emph",
    "path",
    "verb",
    "mediacall"
};
ST_TLTimeNodePresetClassType* ST_TLTimeNodePresetClassType::default_instance_ = NULL;

// ST_TLTimeNodeRestartType
ST_TLTimeNodeRestartType::ST_TLTimeNodeRestartType()
    :m_has_type(false)
{
}
ST_TLTimeNodeRestartType::ST_TLTimeNodeRestartType(const ST_TLTimeNodeRestartType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTimeNodeRestartType::~ST_TLTimeNodeRestartType()
{
    clear();
}
bool ST_TLTimeNodeRestartType::has_type() const
{
    return m_has_type;
}

void ST_TLTimeNodeRestartType::set_type(const ST_TLTimeNodeRestartType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTimeNodeRestartType::Type& ST_TLTimeNodeRestartType::get_type() const
{
    return m_type;
}

std::string ST_TLTimeNodeRestartType::toString() const
{
    return ST_TLTimeNodeRestartType::TypeStrList[m_type];
}

void ST_TLTimeNodeRestartType::clear()
{
    m_has_type = false;
}

void ST_TLTimeNodeRestartType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTimeNodeRestartType& ST_TLTimeNodeRestartType::default_instance()
{
    if (!ST_TLTimeNodeRestartType::default_instance_)
    {
        ST_TLTimeNodeRestartType::default_instance_ = new ST_TLTimeNodeRestartType();
    }
    return *ST_TLTimeNodeRestartType::default_instance_;
}

const std::string ST_TLTimeNodeRestartType::TypeStrList[] =
{
    "always",
    "whenNotActive",
    "never"
};
ST_TLTimeNodeRestartType* ST_TLTimeNodeRestartType::default_instance_ = NULL;

// ST_TLTimeNodeFillType
ST_TLTimeNodeFillType::ST_TLTimeNodeFillType()
    :m_has_type(false)
{
}
ST_TLTimeNodeFillType::ST_TLTimeNodeFillType(const ST_TLTimeNodeFillType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTimeNodeFillType::~ST_TLTimeNodeFillType()
{
    clear();
}
bool ST_TLTimeNodeFillType::has_type() const
{
    return m_has_type;
}

void ST_TLTimeNodeFillType::set_type(const ST_TLTimeNodeFillType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTimeNodeFillType::Type& ST_TLTimeNodeFillType::get_type() const
{
    return m_type;
}

std::string ST_TLTimeNodeFillType::toString() const
{
    return ST_TLTimeNodeFillType::TypeStrList[m_type];
}

void ST_TLTimeNodeFillType::clear()
{
    m_has_type = false;
}

void ST_TLTimeNodeFillType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTimeNodeFillType& ST_TLTimeNodeFillType::default_instance()
{
    if (!ST_TLTimeNodeFillType::default_instance_)
    {
        ST_TLTimeNodeFillType::default_instance_ = new ST_TLTimeNodeFillType();
    }
    return *ST_TLTimeNodeFillType::default_instance_;
}

const std::string ST_TLTimeNodeFillType::TypeStrList[] =
{
    "remove",
    "freeze",
    "hold",
    "transition"
};
ST_TLTimeNodeFillType* ST_TLTimeNodeFillType::default_instance_ = NULL;

// ST_TLTimeNodeSyncType
ST_TLTimeNodeSyncType::ST_TLTimeNodeSyncType()
    :m_has_type(false)
{
}
ST_TLTimeNodeSyncType::ST_TLTimeNodeSyncType(const ST_TLTimeNodeSyncType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTimeNodeSyncType::~ST_TLTimeNodeSyncType()
{
    clear();
}
bool ST_TLTimeNodeSyncType::has_type() const
{
    return m_has_type;
}

void ST_TLTimeNodeSyncType::set_type(const ST_TLTimeNodeSyncType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTimeNodeSyncType::Type& ST_TLTimeNodeSyncType::get_type() const
{
    return m_type;
}

std::string ST_TLTimeNodeSyncType::toString() const
{
    return ST_TLTimeNodeSyncType::TypeStrList[m_type];
}

void ST_TLTimeNodeSyncType::clear()
{
    m_has_type = false;
}

void ST_TLTimeNodeSyncType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTimeNodeSyncType& ST_TLTimeNodeSyncType::default_instance()
{
    if (!ST_TLTimeNodeSyncType::default_instance_)
    {
        ST_TLTimeNodeSyncType::default_instance_ = new ST_TLTimeNodeSyncType();
    }
    return *ST_TLTimeNodeSyncType::default_instance_;
}

const std::string ST_TLTimeNodeSyncType::TypeStrList[] =
{
    "canSlip",
    "locked"
};
ST_TLTimeNodeSyncType* ST_TLTimeNodeSyncType::default_instance_ = NULL;

// ST_TLTimeNodeMasterRelation
ST_TLTimeNodeMasterRelation::ST_TLTimeNodeMasterRelation()
    :m_has_type(false)
{
}
ST_TLTimeNodeMasterRelation::ST_TLTimeNodeMasterRelation(const ST_TLTimeNodeMasterRelation::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTimeNodeMasterRelation::~ST_TLTimeNodeMasterRelation()
{
    clear();
}
bool ST_TLTimeNodeMasterRelation::has_type() const
{
    return m_has_type;
}

void ST_TLTimeNodeMasterRelation::set_type(const ST_TLTimeNodeMasterRelation::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTimeNodeMasterRelation::Type& ST_TLTimeNodeMasterRelation::get_type() const
{
    return m_type;
}

std::string ST_TLTimeNodeMasterRelation::toString() const
{
    return ST_TLTimeNodeMasterRelation::TypeStrList[m_type];
}

void ST_TLTimeNodeMasterRelation::clear()
{
    m_has_type = false;
}

void ST_TLTimeNodeMasterRelation::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTimeNodeMasterRelation& ST_TLTimeNodeMasterRelation::default_instance()
{
    if (!ST_TLTimeNodeMasterRelation::default_instance_)
    {
        ST_TLTimeNodeMasterRelation::default_instance_ = new ST_TLTimeNodeMasterRelation();
    }
    return *ST_TLTimeNodeMasterRelation::default_instance_;
}

const std::string ST_TLTimeNodeMasterRelation::TypeStrList[] =
{
    "sameClick",
    "lastClick",
    "nextClick"
};
ST_TLTimeNodeMasterRelation* ST_TLTimeNodeMasterRelation::default_instance_ = NULL;

// ST_TLTimeNodeType
ST_TLTimeNodeType::ST_TLTimeNodeType()
    :m_has_type(false)
{
}
ST_TLTimeNodeType::ST_TLTimeNodeType(const ST_TLTimeNodeType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLTimeNodeType::~ST_TLTimeNodeType()
{
    clear();
}
bool ST_TLTimeNodeType::has_type() const
{
    return m_has_type;
}

void ST_TLTimeNodeType::set_type(const ST_TLTimeNodeType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLTimeNodeType::Type& ST_TLTimeNodeType::get_type() const
{
    return m_type;
}

std::string ST_TLTimeNodeType::toString() const
{
    return ST_TLTimeNodeType::TypeStrList[m_type];
}

void ST_TLTimeNodeType::clear()
{
    m_has_type = false;
}

void ST_TLTimeNodeType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLTimeNodeType& ST_TLTimeNodeType::default_instance()
{
    if (!ST_TLTimeNodeType::default_instance_)
    {
        ST_TLTimeNodeType::default_instance_ = new ST_TLTimeNodeType();
    }
    return *ST_TLTimeNodeType::default_instance_;
}

const std::string ST_TLTimeNodeType::TypeStrList[] =
{
    "clickEffect",
    "withEffect",
    "afterEffect",
    "mainSeq",
    "interactiveSeq",
    "clickPar",
    "withGroup",
    "afterGroup",
    "tmRoot"
};
ST_TLTimeNodeType* ST_TLTimeNodeType::default_instance_ = NULL;

// ST_TLNextActionType
ST_TLNextActionType::ST_TLNextActionType()
    :m_has_type(false)
{
}
ST_TLNextActionType::ST_TLNextActionType(const ST_TLNextActionType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLNextActionType::~ST_TLNextActionType()
{
    clear();
}
bool ST_TLNextActionType::has_type() const
{
    return m_has_type;
}

void ST_TLNextActionType::set_type(const ST_TLNextActionType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLNextActionType::Type& ST_TLNextActionType::get_type() const
{
    return m_type;
}

std::string ST_TLNextActionType::toString() const
{
    return ST_TLNextActionType::TypeStrList[m_type];
}

void ST_TLNextActionType::clear()
{
    m_has_type = false;
}

void ST_TLNextActionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLNextActionType& ST_TLNextActionType::default_instance()
{
    if (!ST_TLNextActionType::default_instance_)
    {
        ST_TLNextActionType::default_instance_ = new ST_TLNextActionType();
    }
    return *ST_TLNextActionType::default_instance_;
}

const std::string ST_TLNextActionType::TypeStrList[] =
{
    "none",
    "seek"
};
ST_TLNextActionType* ST_TLNextActionType::default_instance_ = NULL;

// ST_TLPreviousActionType
ST_TLPreviousActionType::ST_TLPreviousActionType()
    :m_has_type(false)
{
}
ST_TLPreviousActionType::ST_TLPreviousActionType(const ST_TLPreviousActionType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLPreviousActionType::~ST_TLPreviousActionType()
{
    clear();
}
bool ST_TLPreviousActionType::has_type() const
{
    return m_has_type;
}

void ST_TLPreviousActionType::set_type(const ST_TLPreviousActionType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLPreviousActionType::Type& ST_TLPreviousActionType::get_type() const
{
    return m_type;
}

std::string ST_TLPreviousActionType::toString() const
{
    return ST_TLPreviousActionType::TypeStrList[m_type];
}

void ST_TLPreviousActionType::clear()
{
    m_has_type = false;
}

void ST_TLPreviousActionType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLPreviousActionType& ST_TLPreviousActionType::default_instance()
{
    if (!ST_TLPreviousActionType::default_instance_)
    {
        ST_TLPreviousActionType::default_instance_ = new ST_TLPreviousActionType();
    }
    return *ST_TLPreviousActionType::default_instance_;
}

const std::string ST_TLPreviousActionType::TypeStrList[] =
{
    "none",
    "skipTimed"
};
ST_TLPreviousActionType* ST_TLPreviousActionType::default_instance_ = NULL;

// ST_TLBehaviorAdditiveType
ST_TLBehaviorAdditiveType::ST_TLBehaviorAdditiveType()
    :m_has_type(false)
{
}
ST_TLBehaviorAdditiveType::ST_TLBehaviorAdditiveType(const ST_TLBehaviorAdditiveType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLBehaviorAdditiveType::~ST_TLBehaviorAdditiveType()
{
    clear();
}
bool ST_TLBehaviorAdditiveType::has_type() const
{
    return m_has_type;
}

void ST_TLBehaviorAdditiveType::set_type(const ST_TLBehaviorAdditiveType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLBehaviorAdditiveType::Type& ST_TLBehaviorAdditiveType::get_type() const
{
    return m_type;
}

std::string ST_TLBehaviorAdditiveType::toString() const
{
    return ST_TLBehaviorAdditiveType::TypeStrList[m_type];
}

void ST_TLBehaviorAdditiveType::clear()
{
    m_has_type = false;
}

void ST_TLBehaviorAdditiveType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLBehaviorAdditiveType& ST_TLBehaviorAdditiveType::default_instance()
{
    if (!ST_TLBehaviorAdditiveType::default_instance_)
    {
        ST_TLBehaviorAdditiveType::default_instance_ = new ST_TLBehaviorAdditiveType();
    }
    return *ST_TLBehaviorAdditiveType::default_instance_;
}

const std::string ST_TLBehaviorAdditiveType::TypeStrList[] =
{
    "base",
    "sum",
    "repl",
    "mult",
    "none"
};
ST_TLBehaviorAdditiveType* ST_TLBehaviorAdditiveType::default_instance_ = NULL;

// ST_TLBehaviorAccumulateType
ST_TLBehaviorAccumulateType::ST_TLBehaviorAccumulateType()
    :m_has_type(false)
{
}
ST_TLBehaviorAccumulateType::ST_TLBehaviorAccumulateType(const ST_TLBehaviorAccumulateType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLBehaviorAccumulateType::~ST_TLBehaviorAccumulateType()
{
    clear();
}
bool ST_TLBehaviorAccumulateType::has_type() const
{
    return m_has_type;
}

void ST_TLBehaviorAccumulateType::set_type(const ST_TLBehaviorAccumulateType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLBehaviorAccumulateType::Type& ST_TLBehaviorAccumulateType::get_type() const
{
    return m_type;
}

std::string ST_TLBehaviorAccumulateType::toString() const
{
    return ST_TLBehaviorAccumulateType::TypeStrList[m_type];
}

void ST_TLBehaviorAccumulateType::clear()
{
    m_has_type = false;
}

void ST_TLBehaviorAccumulateType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLBehaviorAccumulateType& ST_TLBehaviorAccumulateType::default_instance()
{
    if (!ST_TLBehaviorAccumulateType::default_instance_)
    {
        ST_TLBehaviorAccumulateType::default_instance_ = new ST_TLBehaviorAccumulateType();
    }
    return *ST_TLBehaviorAccumulateType::default_instance_;
}

const std::string ST_TLBehaviorAccumulateType::TypeStrList[] =
{
    "none",
    "always"
};
ST_TLBehaviorAccumulateType* ST_TLBehaviorAccumulateType::default_instance_ = NULL;

// ST_TLBehaviorTransformType
ST_TLBehaviorTransformType::ST_TLBehaviorTransformType()
    :m_has_type(false)
{
}
ST_TLBehaviorTransformType::ST_TLBehaviorTransformType(const ST_TLBehaviorTransformType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLBehaviorTransformType::~ST_TLBehaviorTransformType()
{
    clear();
}
bool ST_TLBehaviorTransformType::has_type() const
{
    return m_has_type;
}

void ST_TLBehaviorTransformType::set_type(const ST_TLBehaviorTransformType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLBehaviorTransformType::Type& ST_TLBehaviorTransformType::get_type() const
{
    return m_type;
}

std::string ST_TLBehaviorTransformType::toString() const
{
    return ST_TLBehaviorTransformType::TypeStrList[m_type];
}

void ST_TLBehaviorTransformType::clear()
{
    m_has_type = false;
}

void ST_TLBehaviorTransformType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLBehaviorTransformType& ST_TLBehaviorTransformType::default_instance()
{
    if (!ST_TLBehaviorTransformType::default_instance_)
    {
        ST_TLBehaviorTransformType::default_instance_ = new ST_TLBehaviorTransformType();
    }
    return *ST_TLBehaviorTransformType::default_instance_;
}

const std::string ST_TLBehaviorTransformType::TypeStrList[] =
{
    "pt",
    "img"
};
ST_TLBehaviorTransformType* ST_TLBehaviorTransformType::default_instance_ = NULL;

// ST_TLBehaviorOverrideType
ST_TLBehaviorOverrideType::ST_TLBehaviorOverrideType()
    :m_has_type(false)
{
}
ST_TLBehaviorOverrideType::ST_TLBehaviorOverrideType(const ST_TLBehaviorOverrideType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLBehaviorOverrideType::~ST_TLBehaviorOverrideType()
{
    clear();
}
bool ST_TLBehaviorOverrideType::has_type() const
{
    return m_has_type;
}

void ST_TLBehaviorOverrideType::set_type(const ST_TLBehaviorOverrideType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLBehaviorOverrideType::Type& ST_TLBehaviorOverrideType::get_type() const
{
    return m_type;
}

std::string ST_TLBehaviorOverrideType::toString() const
{
    return ST_TLBehaviorOverrideType::TypeStrList[m_type];
}

void ST_TLBehaviorOverrideType::clear()
{
    m_has_type = false;
}

void ST_TLBehaviorOverrideType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLBehaviorOverrideType& ST_TLBehaviorOverrideType::default_instance()
{
    if (!ST_TLBehaviorOverrideType::default_instance_)
    {
        ST_TLBehaviorOverrideType::default_instance_ = new ST_TLBehaviorOverrideType();
    }
    return *ST_TLBehaviorOverrideType::default_instance_;
}

const std::string ST_TLBehaviorOverrideType::TypeStrList[] =
{
    "normal",
    "childStyle"
};
ST_TLBehaviorOverrideType* ST_TLBehaviorOverrideType::default_instance_ = NULL;

// ST_TLTimeAnimateValueTime
ST_TLTimeAnimateValueTime::ST_TLTimeAnimateValueTime()
    :m_has_ST_PositiveFixedPercentage(false),
     m_ST_PositiveFixedPercentage(NULL),
     m_has_ST_TLTimeIndefinite(false),
     m_ST_TLTimeIndefinite(NULL)
{
}
ST_TLTimeAnimateValueTime::ST_TLTimeAnimateValueTime(const ST_TLTimeAnimateValueTime& _ST_TLTimeAnimateValueTime)
    :m_has_ST_PositiveFixedPercentage(false),
     m_ST_PositiveFixedPercentage(NULL),
     m_has_ST_TLTimeIndefinite(false),
     m_ST_TLTimeIndefinite(NULL)
{

    m_has_ST_PositiveFixedPercentage = _ST_TLTimeAnimateValueTime.has_ST_PositiveFixedPercentage();
    if (_ST_TLTimeAnimateValueTime.has_ST_PositiveFixedPercentage())
    {
        m_ST_PositiveFixedPercentage = new ns_a::ST_PositiveFixedPercentage(_ST_TLTimeAnimateValueTime.get_ST_PositiveFixedPercentage());
    }


    m_has_ST_TLTimeIndefinite = _ST_TLTimeAnimateValueTime.has_ST_TLTimeIndefinite();
    if (_ST_TLTimeAnimateValueTime.has_ST_TLTimeIndefinite())
    {
        m_ST_TLTimeIndefinite = new ST_TLTimeIndefinite(_ST_TLTimeAnimateValueTime.get_ST_TLTimeIndefinite());
    }
}
ST_TLTimeAnimateValueTime::~ST_TLTimeAnimateValueTime()
{
    clear();
}
bool ST_TLTimeAnimateValueTime::has_ST_PositiveFixedPercentage() const
{
    return m_has_ST_PositiveFixedPercentage;
}

ns_a::ST_PositiveFixedPercentage* ST_TLTimeAnimateValueTime::mutable_ST_PositiveFixedPercentage()
{
    clear_ST_TLTimeIndefinite();
    m_has_ST_PositiveFixedPercentage = true;
    if (!m_ST_PositiveFixedPercentage)
    {
        m_ST_PositiveFixedPercentage = new ns_a::ST_PositiveFixedPercentage();
    }
    return m_ST_PositiveFixedPercentage;
}

const ns_a::ST_PositiveFixedPercentage& ST_TLTimeAnimateValueTime::get_ST_PositiveFixedPercentage() const
{
    if (m_ST_PositiveFixedPercentage)
    {
        return *m_ST_PositiveFixedPercentage;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

void ST_TLTimeAnimateValueTime::clear_ST_PositiveFixedPercentage()
{
    m_has_ST_PositiveFixedPercentage = false;
    if (m_ST_PositiveFixedPercentage)
    {
        delete m_ST_PositiveFixedPercentage;
        m_ST_PositiveFixedPercentage = NULL;
    }
}

bool ST_TLTimeAnimateValueTime::has_ST_TLTimeIndefinite() const
{
    return m_has_ST_TLTimeIndefinite;
}

ST_TLTimeIndefinite* ST_TLTimeAnimateValueTime::mutable_ST_TLTimeIndefinite()
{
    clear_ST_PositiveFixedPercentage();
    m_has_ST_TLTimeIndefinite = true;
    if (!m_ST_TLTimeIndefinite)
    {
        m_ST_TLTimeIndefinite = new ST_TLTimeIndefinite();
    }
    return m_ST_TLTimeIndefinite;
}

const ST_TLTimeIndefinite& ST_TLTimeAnimateValueTime::get_ST_TLTimeIndefinite() const
{
    if (m_ST_TLTimeIndefinite)
    {
        return *m_ST_TLTimeIndefinite;
    }
    return ST_TLTimeIndefinite::default_instance();
}

void ST_TLTimeAnimateValueTime::clear_ST_TLTimeIndefinite()
{
    m_has_ST_TLTimeIndefinite = false;
    if (m_ST_TLTimeIndefinite)
    {
        delete m_ST_TLTimeIndefinite;
        m_ST_TLTimeIndefinite = NULL;
    }
}

std::string ST_TLTimeAnimateValueTime::toString() const
{
    if (m_has_ST_PositiveFixedPercentage)
    {
        return m_ST_PositiveFixedPercentage->toString();
    }

    if (m_has_ST_TLTimeIndefinite)
    {
        return m_ST_TLTimeIndefinite->toString();
    }

    return string();
}

void ST_TLTimeAnimateValueTime::clear()
{   clear_ST_PositiveFixedPercentage();
    clear_ST_TLTimeIndefinite();
}

void ST_TLTimeAnimateValueTime::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_ST_PositiveFixedPercentage)
    {
        m_ST_PositiveFixedPercentage->toXmlAttr(_attrName, _outStream);
        return;
    }

    if (m_has_ST_TLTimeIndefinite)
    {
        m_ST_TLTimeIndefinite->toXmlAttr(_attrName, _outStream);
        return;
    }
}

const ST_TLTimeAnimateValueTime& ST_TLTimeAnimateValueTime::default_instance()
{
    if (!ST_TLTimeAnimateValueTime::default_instance_)
    {
        ST_TLTimeAnimateValueTime::default_instance_ = new ST_TLTimeAnimateValueTime();
    }
    return *ST_TLTimeAnimateValueTime::default_instance_;
}

ST_TLTimeAnimateValueTime* ST_TLTimeAnimateValueTime::default_instance_ = NULL;

// ST_TLAnimateBehaviorCalcMode
ST_TLAnimateBehaviorCalcMode::ST_TLAnimateBehaviorCalcMode()
    :m_has_type(false)
{
}
ST_TLAnimateBehaviorCalcMode::ST_TLAnimateBehaviorCalcMode(const ST_TLAnimateBehaviorCalcMode::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLAnimateBehaviorCalcMode::~ST_TLAnimateBehaviorCalcMode()
{
    clear();
}
bool ST_TLAnimateBehaviorCalcMode::has_type() const
{
    return m_has_type;
}

void ST_TLAnimateBehaviorCalcMode::set_type(const ST_TLAnimateBehaviorCalcMode::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLAnimateBehaviorCalcMode::Type& ST_TLAnimateBehaviorCalcMode::get_type() const
{
    return m_type;
}

std::string ST_TLAnimateBehaviorCalcMode::toString() const
{
    return ST_TLAnimateBehaviorCalcMode::TypeStrList[m_type];
}

void ST_TLAnimateBehaviorCalcMode::clear()
{
    m_has_type = false;
}

void ST_TLAnimateBehaviorCalcMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLAnimateBehaviorCalcMode& ST_TLAnimateBehaviorCalcMode::default_instance()
{
    if (!ST_TLAnimateBehaviorCalcMode::default_instance_)
    {
        ST_TLAnimateBehaviorCalcMode::default_instance_ = new ST_TLAnimateBehaviorCalcMode();
    }
    return *ST_TLAnimateBehaviorCalcMode::default_instance_;
}

const std::string ST_TLAnimateBehaviorCalcMode::TypeStrList[] =
{
    "discrete",
    "lin",
    "fmla"
};
ST_TLAnimateBehaviorCalcMode* ST_TLAnimateBehaviorCalcMode::default_instance_ = NULL;

// ST_TLAnimateBehaviorValueType
ST_TLAnimateBehaviorValueType::ST_TLAnimateBehaviorValueType()
    :m_has_type(false)
{
}
ST_TLAnimateBehaviorValueType::ST_TLAnimateBehaviorValueType(const ST_TLAnimateBehaviorValueType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLAnimateBehaviorValueType::~ST_TLAnimateBehaviorValueType()
{
    clear();
}
bool ST_TLAnimateBehaviorValueType::has_type() const
{
    return m_has_type;
}

void ST_TLAnimateBehaviorValueType::set_type(const ST_TLAnimateBehaviorValueType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLAnimateBehaviorValueType::Type& ST_TLAnimateBehaviorValueType::get_type() const
{
    return m_type;
}

std::string ST_TLAnimateBehaviorValueType::toString() const
{
    return ST_TLAnimateBehaviorValueType::TypeStrList[m_type];
}

void ST_TLAnimateBehaviorValueType::clear()
{
    m_has_type = false;
}

void ST_TLAnimateBehaviorValueType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLAnimateBehaviorValueType& ST_TLAnimateBehaviorValueType::default_instance()
{
    if (!ST_TLAnimateBehaviorValueType::default_instance_)
    {
        ST_TLAnimateBehaviorValueType::default_instance_ = new ST_TLAnimateBehaviorValueType();
    }
    return *ST_TLAnimateBehaviorValueType::default_instance_;
}

const std::string ST_TLAnimateBehaviorValueType::TypeStrList[] =
{
    "str",
    "num",
    "clr"
};
ST_TLAnimateBehaviorValueType* ST_TLAnimateBehaviorValueType::default_instance_ = NULL;

// ST_TLAnimateColorSpace
ST_TLAnimateColorSpace::ST_TLAnimateColorSpace()
    :m_has_type(false)
{
}
ST_TLAnimateColorSpace::ST_TLAnimateColorSpace(const ST_TLAnimateColorSpace::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLAnimateColorSpace::~ST_TLAnimateColorSpace()
{
    clear();
}
bool ST_TLAnimateColorSpace::has_type() const
{
    return m_has_type;
}

void ST_TLAnimateColorSpace::set_type(const ST_TLAnimateColorSpace::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLAnimateColorSpace::Type& ST_TLAnimateColorSpace::get_type() const
{
    return m_type;
}

std::string ST_TLAnimateColorSpace::toString() const
{
    return ST_TLAnimateColorSpace::TypeStrList[m_type];
}

void ST_TLAnimateColorSpace::clear()
{
    m_has_type = false;
}

void ST_TLAnimateColorSpace::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLAnimateColorSpace& ST_TLAnimateColorSpace::default_instance()
{
    if (!ST_TLAnimateColorSpace::default_instance_)
    {
        ST_TLAnimateColorSpace::default_instance_ = new ST_TLAnimateColorSpace();
    }
    return *ST_TLAnimateColorSpace::default_instance_;
}

const std::string ST_TLAnimateColorSpace::TypeStrList[] =
{
    "rgb",
    "hsl"
};
ST_TLAnimateColorSpace* ST_TLAnimateColorSpace::default_instance_ = NULL;

// ST_TLAnimateColorDirection
ST_TLAnimateColorDirection::ST_TLAnimateColorDirection()
    :m_has_type(false)
{
}
ST_TLAnimateColorDirection::ST_TLAnimateColorDirection(const ST_TLAnimateColorDirection::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLAnimateColorDirection::~ST_TLAnimateColorDirection()
{
    clear();
}
bool ST_TLAnimateColorDirection::has_type() const
{
    return m_has_type;
}

void ST_TLAnimateColorDirection::set_type(const ST_TLAnimateColorDirection::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLAnimateColorDirection::Type& ST_TLAnimateColorDirection::get_type() const
{
    return m_type;
}

std::string ST_TLAnimateColorDirection::toString() const
{
    return ST_TLAnimateColorDirection::TypeStrList[m_type];
}

void ST_TLAnimateColorDirection::clear()
{
    m_has_type = false;
}

void ST_TLAnimateColorDirection::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLAnimateColorDirection& ST_TLAnimateColorDirection::default_instance()
{
    if (!ST_TLAnimateColorDirection::default_instance_)
    {
        ST_TLAnimateColorDirection::default_instance_ = new ST_TLAnimateColorDirection();
    }
    return *ST_TLAnimateColorDirection::default_instance_;
}

const std::string ST_TLAnimateColorDirection::TypeStrList[] =
{
    "cw",
    "ccw"
};
ST_TLAnimateColorDirection* ST_TLAnimateColorDirection::default_instance_ = NULL;

// ST_TLAnimateEffectTransition
ST_TLAnimateEffectTransition::ST_TLAnimateEffectTransition()
    :m_has_type(false)
{
}
ST_TLAnimateEffectTransition::ST_TLAnimateEffectTransition(const ST_TLAnimateEffectTransition::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLAnimateEffectTransition::~ST_TLAnimateEffectTransition()
{
    clear();
}
bool ST_TLAnimateEffectTransition::has_type() const
{
    return m_has_type;
}

void ST_TLAnimateEffectTransition::set_type(const ST_TLAnimateEffectTransition::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLAnimateEffectTransition::Type& ST_TLAnimateEffectTransition::get_type() const
{
    return m_type;
}

std::string ST_TLAnimateEffectTransition::toString() const
{
    return ST_TLAnimateEffectTransition::TypeStrList[m_type];
}

void ST_TLAnimateEffectTransition::clear()
{
    m_has_type = false;
}

void ST_TLAnimateEffectTransition::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLAnimateEffectTransition& ST_TLAnimateEffectTransition::default_instance()
{
    if (!ST_TLAnimateEffectTransition::default_instance_)
    {
        ST_TLAnimateEffectTransition::default_instance_ = new ST_TLAnimateEffectTransition();
    }
    return *ST_TLAnimateEffectTransition::default_instance_;
}

const std::string ST_TLAnimateEffectTransition::TypeStrList[] =
{
    "in",
    "out",
    "none"
};
ST_TLAnimateEffectTransition* ST_TLAnimateEffectTransition::default_instance_ = NULL;

// ST_TLAnimateMotionBehaviorOrigin
ST_TLAnimateMotionBehaviorOrigin::ST_TLAnimateMotionBehaviorOrigin()
    :m_has_type(false)
{
}
ST_TLAnimateMotionBehaviorOrigin::ST_TLAnimateMotionBehaviorOrigin(const ST_TLAnimateMotionBehaviorOrigin::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLAnimateMotionBehaviorOrigin::~ST_TLAnimateMotionBehaviorOrigin()
{
    clear();
}
bool ST_TLAnimateMotionBehaviorOrigin::has_type() const
{
    return m_has_type;
}

void ST_TLAnimateMotionBehaviorOrigin::set_type(const ST_TLAnimateMotionBehaviorOrigin::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLAnimateMotionBehaviorOrigin::Type& ST_TLAnimateMotionBehaviorOrigin::get_type() const
{
    return m_type;
}

std::string ST_TLAnimateMotionBehaviorOrigin::toString() const
{
    return ST_TLAnimateMotionBehaviorOrigin::TypeStrList[m_type];
}

void ST_TLAnimateMotionBehaviorOrigin::clear()
{
    m_has_type = false;
}

void ST_TLAnimateMotionBehaviorOrigin::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLAnimateMotionBehaviorOrigin& ST_TLAnimateMotionBehaviorOrigin::default_instance()
{
    if (!ST_TLAnimateMotionBehaviorOrigin::default_instance_)
    {
        ST_TLAnimateMotionBehaviorOrigin::default_instance_ = new ST_TLAnimateMotionBehaviorOrigin();
    }
    return *ST_TLAnimateMotionBehaviorOrigin::default_instance_;
}

const std::string ST_TLAnimateMotionBehaviorOrigin::TypeStrList[] =
{
    "parent",
    "layout"
};
ST_TLAnimateMotionBehaviorOrigin* ST_TLAnimateMotionBehaviorOrigin::default_instance_ = NULL;

// ST_TLAnimateMotionPathEditMode
ST_TLAnimateMotionPathEditMode::ST_TLAnimateMotionPathEditMode()
    :m_has_type(false)
{
}
ST_TLAnimateMotionPathEditMode::ST_TLAnimateMotionPathEditMode(const ST_TLAnimateMotionPathEditMode::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLAnimateMotionPathEditMode::~ST_TLAnimateMotionPathEditMode()
{
    clear();
}
bool ST_TLAnimateMotionPathEditMode::has_type() const
{
    return m_has_type;
}

void ST_TLAnimateMotionPathEditMode::set_type(const ST_TLAnimateMotionPathEditMode::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLAnimateMotionPathEditMode::Type& ST_TLAnimateMotionPathEditMode::get_type() const
{
    return m_type;
}

std::string ST_TLAnimateMotionPathEditMode::toString() const
{
    return ST_TLAnimateMotionPathEditMode::TypeStrList[m_type];
}

void ST_TLAnimateMotionPathEditMode::clear()
{
    m_has_type = false;
}

void ST_TLAnimateMotionPathEditMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLAnimateMotionPathEditMode& ST_TLAnimateMotionPathEditMode::default_instance()
{
    if (!ST_TLAnimateMotionPathEditMode::default_instance_)
    {
        ST_TLAnimateMotionPathEditMode::default_instance_ = new ST_TLAnimateMotionPathEditMode();
    }
    return *ST_TLAnimateMotionPathEditMode::default_instance_;
}

const std::string ST_TLAnimateMotionPathEditMode::TypeStrList[] =
{
    "relative",
    "fixed"
};
ST_TLAnimateMotionPathEditMode* ST_TLAnimateMotionPathEditMode::default_instance_ = NULL;

// ST_TLCommandType
ST_TLCommandType::ST_TLCommandType()
    :m_has_type(false)
{
}
ST_TLCommandType::ST_TLCommandType(const ST_TLCommandType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLCommandType::~ST_TLCommandType()
{
    clear();
}
bool ST_TLCommandType::has_type() const
{
    return m_has_type;
}

void ST_TLCommandType::set_type(const ST_TLCommandType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLCommandType::Type& ST_TLCommandType::get_type() const
{
    return m_type;
}

std::string ST_TLCommandType::toString() const
{
    return ST_TLCommandType::TypeStrList[m_type];
}

void ST_TLCommandType::clear()
{
    m_has_type = false;
}

void ST_TLCommandType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLCommandType& ST_TLCommandType::default_instance()
{
    if (!ST_TLCommandType::default_instance_)
    {
        ST_TLCommandType::default_instance_ = new ST_TLCommandType();
    }
    return *ST_TLCommandType::default_instance_;
}

const std::string ST_TLCommandType::TypeStrList[] =
{
    "evt",
    "call",
    "verb"
};
ST_TLCommandType* ST_TLCommandType::default_instance_ = NULL;

// ST_TLParaBuildType
ST_TLParaBuildType::ST_TLParaBuildType()
    :m_has_type(false)
{
}
ST_TLParaBuildType::ST_TLParaBuildType(const ST_TLParaBuildType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLParaBuildType::~ST_TLParaBuildType()
{
    clear();
}
bool ST_TLParaBuildType::has_type() const
{
    return m_has_type;
}

void ST_TLParaBuildType::set_type(const ST_TLParaBuildType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLParaBuildType::Type& ST_TLParaBuildType::get_type() const
{
    return m_type;
}

std::string ST_TLParaBuildType::toString() const
{
    return ST_TLParaBuildType::TypeStrList[m_type];
}

void ST_TLParaBuildType::clear()
{
    m_has_type = false;
}

void ST_TLParaBuildType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLParaBuildType& ST_TLParaBuildType::default_instance()
{
    if (!ST_TLParaBuildType::default_instance_)
    {
        ST_TLParaBuildType::default_instance_ = new ST_TLParaBuildType();
    }
    return *ST_TLParaBuildType::default_instance_;
}

const std::string ST_TLParaBuildType::TypeStrList[] =
{
    "allAtOnce",
    "p",
    "cust",
    "whole"
};
ST_TLParaBuildType* ST_TLParaBuildType::default_instance_ = NULL;

// ST_TLDiagramBuildType
ST_TLDiagramBuildType::ST_TLDiagramBuildType()
    :m_has_type(false)
{
}
ST_TLDiagramBuildType::ST_TLDiagramBuildType(const ST_TLDiagramBuildType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLDiagramBuildType::~ST_TLDiagramBuildType()
{
    clear();
}
bool ST_TLDiagramBuildType::has_type() const
{
    return m_has_type;
}

void ST_TLDiagramBuildType::set_type(const ST_TLDiagramBuildType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLDiagramBuildType::Type& ST_TLDiagramBuildType::get_type() const
{
    return m_type;
}

std::string ST_TLDiagramBuildType::toString() const
{
    return ST_TLDiagramBuildType::TypeStrList[m_type];
}

void ST_TLDiagramBuildType::clear()
{
    m_has_type = false;
}

void ST_TLDiagramBuildType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLDiagramBuildType& ST_TLDiagramBuildType::default_instance()
{
    if (!ST_TLDiagramBuildType::default_instance_)
    {
        ST_TLDiagramBuildType::default_instance_ = new ST_TLDiagramBuildType();
    }
    return *ST_TLDiagramBuildType::default_instance_;
}

const std::string ST_TLDiagramBuildType::TypeStrList[] =
{
    "whole",
    "depthByNode",
    "depthByBranch",
    "breadthByNode",
    "breadthByLvl",
    "cw",
    "cwIn",
    "cwOut",
    "ccw",
    "ccwIn",
    "ccwOut",
    "inByRing",
    "outByRing",
    "up",
    "down",
    "allAtOnce",
    "cust"
};
ST_TLDiagramBuildType* ST_TLDiagramBuildType::default_instance_ = NULL;

// ST_TLOleChartBuildType
ST_TLOleChartBuildType::ST_TLOleChartBuildType()
    :m_has_type(false)
{
}
ST_TLOleChartBuildType::ST_TLOleChartBuildType(const ST_TLOleChartBuildType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_TLOleChartBuildType::~ST_TLOleChartBuildType()
{
    clear();
}
bool ST_TLOleChartBuildType::has_type() const
{
    return m_has_type;
}

void ST_TLOleChartBuildType::set_type(const ST_TLOleChartBuildType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_TLOleChartBuildType::Type& ST_TLOleChartBuildType::get_type() const
{
    return m_type;
}

std::string ST_TLOleChartBuildType::toString() const
{
    return ST_TLOleChartBuildType::TypeStrList[m_type];
}

void ST_TLOleChartBuildType::clear()
{
    m_has_type = false;
}

void ST_TLOleChartBuildType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_TLOleChartBuildType& ST_TLOleChartBuildType::default_instance()
{
    if (!ST_TLOleChartBuildType::default_instance_)
    {
        ST_TLOleChartBuildType::default_instance_ = new ST_TLOleChartBuildType();
    }
    return *ST_TLOleChartBuildType::default_instance_;
}

const std::string ST_TLOleChartBuildType::TypeStrList[] =
{
    "allAtOnce",
    "series",
    "category",
    "seriesEl",
    "categoryEl"
};
ST_TLOleChartBuildType* ST_TLOleChartBuildType::default_instance_ = NULL;

// ST_Name
ST_Name::ST_Name()
    :m_has_string(false),
     m_string("")
{
}
ST_Name::ST_Name(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_Name::~ST_Name()
{
    clear();
}
bool ST_Name::has_string() const
{
    return m_has_string;
}

void ST_Name::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_Name::get_string() const
{
    return m_string;
}

void ST_Name::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_Name::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_Name& ST_Name::default_instance()
{
    if (!ST_Name::default_instance_)
    {
        ST_Name::default_instance_ = new ST_Name();
    }
    return *ST_Name::default_instance_;
}

std::string ST_Name::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_Name* ST_Name::default_instance_ = NULL;

// ST_Direction
ST_Direction::ST_Direction()
    :m_has_type(false)
{
}
ST_Direction::ST_Direction(const ST_Direction::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_Direction::~ST_Direction()
{
    clear();
}
bool ST_Direction::has_type() const
{
    return m_has_type;
}

void ST_Direction::set_type(const ST_Direction::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_Direction::Type& ST_Direction::get_type() const
{
    return m_type;
}

std::string ST_Direction::toString() const
{
    return ST_Direction::TypeStrList[m_type];
}

void ST_Direction::clear()
{
    m_has_type = false;
}

void ST_Direction::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_Direction& ST_Direction::default_instance()
{
    if (!ST_Direction::default_instance_)
    {
        ST_Direction::default_instance_ = new ST_Direction();
    }
    return *ST_Direction::default_instance_;
}

const std::string ST_Direction::TypeStrList[] =
{
    "horz",
    "vert"
};
ST_Direction* ST_Direction::default_instance_ = NULL;

// ST_Index
ST_Index::ST_Index()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_Index::ST_Index(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_Index::~ST_Index()
{
    clear();
}
bool ST_Index::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_Index::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{
    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_Index::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_Index::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_Index::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_Index& ST_Index::default_instance()
{
    if (!ST_Index::default_instance_)
    {
        ST_Index::default_instance_ = new ST_Index();
    }
    return *ST_Index::default_instance_;
}

std::string ST_Index::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_Index* ST_Index::default_instance_ = NULL;

// ST_OleObjectFollowColorScheme
ST_OleObjectFollowColorScheme::ST_OleObjectFollowColorScheme()
    :m_has_type(false)
{
}
ST_OleObjectFollowColorScheme::ST_OleObjectFollowColorScheme(const ST_OleObjectFollowColorScheme::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_OleObjectFollowColorScheme::~ST_OleObjectFollowColorScheme()
{
    clear();
}
bool ST_OleObjectFollowColorScheme::has_type() const
{
    return m_has_type;
}

void ST_OleObjectFollowColorScheme::set_type(const ST_OleObjectFollowColorScheme::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_OleObjectFollowColorScheme::Type& ST_OleObjectFollowColorScheme::get_type() const
{
    return m_type;
}

std::string ST_OleObjectFollowColorScheme::toString() const
{
    return ST_OleObjectFollowColorScheme::TypeStrList[m_type];
}

void ST_OleObjectFollowColorScheme::clear()
{
    m_has_type = false;
}

void ST_OleObjectFollowColorScheme::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_OleObjectFollowColorScheme& ST_OleObjectFollowColorScheme::default_instance()
{
    if (!ST_OleObjectFollowColorScheme::default_instance_)
    {
        ST_OleObjectFollowColorScheme::default_instance_ = new ST_OleObjectFollowColorScheme();
    }
    return *ST_OleObjectFollowColorScheme::default_instance_;
}

const std::string ST_OleObjectFollowColorScheme::TypeStrList[] =
{
    "none",
    "full",
    "textAndBackground"
};
ST_OleObjectFollowColorScheme* ST_OleObjectFollowColorScheme::default_instance_ = NULL;

// ST_SlideId
ST_SlideId::ST_SlideId()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_SlideId::ST_SlideId(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_SlideId::~ST_SlideId()
{
    clear();
}
bool ST_SlideId::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_SlideId::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{   assert(256 <= _unsignedInt);
    assert(_unsignedInt < 2147483648);

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_SlideId::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_SlideId::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_SlideId::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_SlideId& ST_SlideId::default_instance()
{
    if (!ST_SlideId::default_instance_)
    {
        ST_SlideId::default_instance_ = new ST_SlideId();
    }
    return *ST_SlideId::default_instance_;
}

std::string ST_SlideId::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_SlideId* ST_SlideId::default_instance_ = NULL;

// ST_SlideMasterId
ST_SlideMasterId::ST_SlideMasterId()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_SlideMasterId::ST_SlideMasterId(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_SlideMasterId::~ST_SlideMasterId()
{
    clear();
}
bool ST_SlideMasterId::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_SlideMasterId::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{   assert(2147483648 <= _unsignedInt);

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_SlideMasterId::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_SlideMasterId::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_SlideMasterId::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_SlideMasterId& ST_SlideMasterId::default_instance()
{
    if (!ST_SlideMasterId::default_instance_)
    {
        ST_SlideMasterId::default_instance_ = new ST_SlideMasterId();
    }
    return *ST_SlideMasterId::default_instance_;
}

std::string ST_SlideMasterId::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_SlideMasterId* ST_SlideMasterId::default_instance_ = NULL;

// ST_PhotoAlbumLayout
ST_PhotoAlbumLayout::ST_PhotoAlbumLayout()
    :m_has_type(false)
{
}
ST_PhotoAlbumLayout::ST_PhotoAlbumLayout(const ST_PhotoAlbumLayout::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_PhotoAlbumLayout::~ST_PhotoAlbumLayout()
{
    clear();
}
bool ST_PhotoAlbumLayout::has_type() const
{
    return m_has_type;
}

void ST_PhotoAlbumLayout::set_type(const ST_PhotoAlbumLayout::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_PhotoAlbumLayout::Type& ST_PhotoAlbumLayout::get_type() const
{
    return m_type;
}

std::string ST_PhotoAlbumLayout::toString() const
{
    return ST_PhotoAlbumLayout::TypeStrList[m_type];
}

void ST_PhotoAlbumLayout::clear()
{
    m_has_type = false;
}

void ST_PhotoAlbumLayout::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_PhotoAlbumLayout& ST_PhotoAlbumLayout::default_instance()
{
    if (!ST_PhotoAlbumLayout::default_instance_)
    {
        ST_PhotoAlbumLayout::default_instance_ = new ST_PhotoAlbumLayout();
    }
    return *ST_PhotoAlbumLayout::default_instance_;
}

const std::string ST_PhotoAlbumLayout::TypeStrList[] =
{
    "fitToSlide",
    "1pic",
    "2pic",
    "4pic",
    "1picTitle",
    "2picTitle",
    "4picTitle"
};
ST_PhotoAlbumLayout* ST_PhotoAlbumLayout::default_instance_ = NULL;

// ST_PhotoAlbumFrameShape
ST_PhotoAlbumFrameShape::ST_PhotoAlbumFrameShape()
    :m_has_type(false)
{
}
ST_PhotoAlbumFrameShape::ST_PhotoAlbumFrameShape(const ST_PhotoAlbumFrameShape::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_PhotoAlbumFrameShape::~ST_PhotoAlbumFrameShape()
{
    clear();
}
bool ST_PhotoAlbumFrameShape::has_type() const
{
    return m_has_type;
}

void ST_PhotoAlbumFrameShape::set_type(const ST_PhotoAlbumFrameShape::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_PhotoAlbumFrameShape::Type& ST_PhotoAlbumFrameShape::get_type() const
{
    return m_type;
}

std::string ST_PhotoAlbumFrameShape::toString() const
{
    return ST_PhotoAlbumFrameShape::TypeStrList[m_type];
}

void ST_PhotoAlbumFrameShape::clear()
{
    m_has_type = false;
}

void ST_PhotoAlbumFrameShape::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_PhotoAlbumFrameShape& ST_PhotoAlbumFrameShape::default_instance()
{
    if (!ST_PhotoAlbumFrameShape::default_instance_)
    {
        ST_PhotoAlbumFrameShape::default_instance_ = new ST_PhotoAlbumFrameShape();
    }
    return *ST_PhotoAlbumFrameShape::default_instance_;
}

const std::string ST_PhotoAlbumFrameShape::TypeStrList[] =
{
    "frameStyle1",
    "frameStyle2",
    "frameStyle3",
    "frameStyle4",
    "frameStyle5",
    "frameStyle6",
    "frameStyle7"
};
ST_PhotoAlbumFrameShape* ST_PhotoAlbumFrameShape::default_instance_ = NULL;

// ST_SlideSizeCoordinate
ST_SlideSizeCoordinate::ST_SlideSizeCoordinate()

{
}
ST_SlideSizeCoordinate::ST_SlideSizeCoordinate(const ns_a::ST_PositiveCoordinate32& _ST_PositiveCoordinate32)
    :ns_a::ST_PositiveCoordinate32(_ST_PositiveCoordinate32)
{
}
ST_SlideSizeCoordinate::~ST_SlideSizeCoordinate()
{
    clear();
}
const ST_SlideSizeCoordinate& ST_SlideSizeCoordinate::default_instance()
{
    if (!ST_SlideSizeCoordinate::default_instance_)
    {
        ST_SlideSizeCoordinate::default_instance_ = new ST_SlideSizeCoordinate();
    }
    return *ST_SlideSizeCoordinate::default_instance_;
}

ST_SlideSizeCoordinate* ST_SlideSizeCoordinate::default_instance_ = NULL;

// ST_SlideSizeType
ST_SlideSizeType::ST_SlideSizeType()
    :m_has_type(false)
{
}
ST_SlideSizeType::ST_SlideSizeType(const ST_SlideSizeType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_SlideSizeType::~ST_SlideSizeType()
{
    clear();
}
bool ST_SlideSizeType::has_type() const
{
    return m_has_type;
}

void ST_SlideSizeType::set_type(const ST_SlideSizeType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_SlideSizeType::Type& ST_SlideSizeType::get_type() const
{
    return m_type;
}

std::string ST_SlideSizeType::toString() const
{
    return ST_SlideSizeType::TypeStrList[m_type];
}

void ST_SlideSizeType::clear()
{
    m_has_type = false;
}

void ST_SlideSizeType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_SlideSizeType& ST_SlideSizeType::default_instance()
{
    if (!ST_SlideSizeType::default_instance_)
    {
        ST_SlideSizeType::default_instance_ = new ST_SlideSizeType();
    }
    return *ST_SlideSizeType::default_instance_;
}

const std::string ST_SlideSizeType::TypeStrList[] =
{
    "screen4x3",
    "letter",
    "A4",
    "35mm",
    "overhead",
    "banner",
    "custom",
    "ledger",
    "A3",
    "B4ISO",
    "B5ISO",
    "B4JIS",
    "B5JIS",
    "hagakiCard",
    "screen16x9",
    "screen16x10"
};
ST_SlideSizeType* ST_SlideSizeType::default_instance_ = NULL;

// ST_BookmarkIdSeed
ST_BookmarkIdSeed::ST_BookmarkIdSeed()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_BookmarkIdSeed::ST_BookmarkIdSeed(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_BookmarkIdSeed::~ST_BookmarkIdSeed()
{
    clear();
}
bool ST_BookmarkIdSeed::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_BookmarkIdSeed::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{   assert(1 <= _unsignedInt);
    assert(_unsignedInt < 2147483648);

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_BookmarkIdSeed::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_BookmarkIdSeed::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_BookmarkIdSeed::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_BookmarkIdSeed& ST_BookmarkIdSeed::default_instance()
{
    if (!ST_BookmarkIdSeed::default_instance_)
    {
        ST_BookmarkIdSeed::default_instance_ = new ST_BookmarkIdSeed();
    }
    return *ST_BookmarkIdSeed::default_instance_;
}

std::string ST_BookmarkIdSeed::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_BookmarkIdSeed* ST_BookmarkIdSeed::default_instance_ = NULL;

// ST_WebColorType
ST_WebColorType::ST_WebColorType()
    :m_has_type(false)
{
}
ST_WebColorType::ST_WebColorType(const ST_WebColorType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_WebColorType::~ST_WebColorType()
{
    clear();
}
bool ST_WebColorType::has_type() const
{
    return m_has_type;
}

void ST_WebColorType::set_type(const ST_WebColorType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_WebColorType::Type& ST_WebColorType::get_type() const
{
    return m_type;
}

std::string ST_WebColorType::toString() const
{
    return ST_WebColorType::TypeStrList[m_type];
}

void ST_WebColorType::clear()
{
    m_has_type = false;
}

void ST_WebColorType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_WebColorType& ST_WebColorType::default_instance()
{
    if (!ST_WebColorType::default_instance_)
    {
        ST_WebColorType::default_instance_ = new ST_WebColorType();
    }
    return *ST_WebColorType::default_instance_;
}

const std::string ST_WebColorType::TypeStrList[] =
{
    "none",
    "browser",
    "presentationText",
    "presentationAccent",
    "whiteTextOnBlack",
    "blackTextOnWhite"
};
ST_WebColorType* ST_WebColorType::default_instance_ = NULL;

// ST_WebScreenSize
ST_WebScreenSize::ST_WebScreenSize()
    :m_has_type(false)
{
}
ST_WebScreenSize::ST_WebScreenSize(const ST_WebScreenSize::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_WebScreenSize::~ST_WebScreenSize()
{
    clear();
}
bool ST_WebScreenSize::has_type() const
{
    return m_has_type;
}

void ST_WebScreenSize::set_type(const ST_WebScreenSize::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_WebScreenSize::Type& ST_WebScreenSize::get_type() const
{
    return m_type;
}

std::string ST_WebScreenSize::toString() const
{
    return ST_WebScreenSize::TypeStrList[m_type];
}

void ST_WebScreenSize::clear()
{
    m_has_type = false;
}

void ST_WebScreenSize::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_WebScreenSize& ST_WebScreenSize::default_instance()
{
    if (!ST_WebScreenSize::default_instance_)
    {
        ST_WebScreenSize::default_instance_ = new ST_WebScreenSize();
    }
    return *ST_WebScreenSize::default_instance_;
}

const std::string ST_WebScreenSize::TypeStrList[] =
{
    "544x376",
    "640x480",
    "720x512",
    "800x600",
    "1024x768",
    "1152x882",
    "1152x900",
    "1280x1024",
    "1600x1200",
    "1800x1400",
    "1920x1200"
};
ST_WebScreenSize* ST_WebScreenSize::default_instance_ = NULL;

// ST_WebEncoding
ST_WebEncoding::ST_WebEncoding()
    :m_has_string(false),
     m_string("")
{
}
ST_WebEncoding::ST_WebEncoding(const XSD::string_& _string)
    :m_has_string(true)
{

    set_string(_string);
}
ST_WebEncoding::~ST_WebEncoding()
{
    clear();
}
bool ST_WebEncoding::has_string() const
{
    return m_has_string;
}

void ST_WebEncoding::set_string(const XSD::string_& _string)
{
    m_has_string = true;
    m_string = _string;
}

const XSD::string_& ST_WebEncoding::get_string() const
{
    return m_string;
}

void ST_WebEncoding::clear()
{
    m_has_string = false;
    m_string.clear();;
}

void ST_WebEncoding::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_string)
    {
        _outStream << " " << _attrName << "=\"" << m_string << "\"";;
    }
}

const ST_WebEncoding& ST_WebEncoding::default_instance()
{
    if (!ST_WebEncoding::default_instance_)
    {
        ST_WebEncoding::default_instance_ = new ST_WebEncoding();
    }
    return *ST_WebEncoding::default_instance_;
}

std::string ST_WebEncoding::toString() const
{
    std::stringstream strStream;
    strStream << get_string();
    return strStream.str();
}

ST_WebEncoding* ST_WebEncoding::default_instance_ = NULL;

// ST_PrintWhat
ST_PrintWhat::ST_PrintWhat()
    :m_has_type(false)
{
}
ST_PrintWhat::ST_PrintWhat(const ST_PrintWhat::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_PrintWhat::~ST_PrintWhat()
{
    clear();
}
bool ST_PrintWhat::has_type() const
{
    return m_has_type;
}

void ST_PrintWhat::set_type(const ST_PrintWhat::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_PrintWhat::Type& ST_PrintWhat::get_type() const
{
    return m_type;
}

std::string ST_PrintWhat::toString() const
{
    return ST_PrintWhat::TypeStrList[m_type];
}

void ST_PrintWhat::clear()
{
    m_has_type = false;
}

void ST_PrintWhat::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_PrintWhat& ST_PrintWhat::default_instance()
{
    if (!ST_PrintWhat::default_instance_)
    {
        ST_PrintWhat::default_instance_ = new ST_PrintWhat();
    }
    return *ST_PrintWhat::default_instance_;
}

const std::string ST_PrintWhat::TypeStrList[] =
{
    "slides",
    "handouts1",
    "handouts2",
    "handouts3",
    "handouts4",
    "handouts6",
    "handouts9",
    "notes",
    "outline"
};
ST_PrintWhat* ST_PrintWhat::default_instance_ = NULL;

// ST_PrintColorMode
ST_PrintColorMode::ST_PrintColorMode()
    :m_has_type(false)
{
}
ST_PrintColorMode::ST_PrintColorMode(const ST_PrintColorMode::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_PrintColorMode::~ST_PrintColorMode()
{
    clear();
}
bool ST_PrintColorMode::has_type() const
{
    return m_has_type;
}

void ST_PrintColorMode::set_type(const ST_PrintColorMode::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_PrintColorMode::Type& ST_PrintColorMode::get_type() const
{
    return m_type;
}

std::string ST_PrintColorMode::toString() const
{
    return ST_PrintColorMode::TypeStrList[m_type];
}

void ST_PrintColorMode::clear()
{
    m_has_type = false;
}

void ST_PrintColorMode::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_PrintColorMode& ST_PrintColorMode::default_instance()
{
    if (!ST_PrintColorMode::default_instance_)
    {
        ST_PrintColorMode::default_instance_ = new ST_PrintColorMode();
    }
    return *ST_PrintColorMode::default_instance_;
}

const std::string ST_PrintColorMode::TypeStrList[] =
{
    "bw",
    "gray",
    "clr"
};
ST_PrintColorMode* ST_PrintColorMode::default_instance_ = NULL;

// ST_PlaceholderType
ST_PlaceholderType::ST_PlaceholderType()
    :m_has_type(false)
{
}
ST_PlaceholderType::ST_PlaceholderType(const ST_PlaceholderType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_PlaceholderType::~ST_PlaceholderType()
{
    clear();
}
bool ST_PlaceholderType::has_type() const
{
    return m_has_type;
}

void ST_PlaceholderType::set_type(const ST_PlaceholderType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_PlaceholderType::Type& ST_PlaceholderType::get_type() const
{
    return m_type;
}

std::string ST_PlaceholderType::toString() const
{
    return ST_PlaceholderType::TypeStrList[m_type];
}

void ST_PlaceholderType::clear()
{
    m_has_type = false;
}

void ST_PlaceholderType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_PlaceholderType& ST_PlaceholderType::default_instance()
{
    if (!ST_PlaceholderType::default_instance_)
    {
        ST_PlaceholderType::default_instance_ = new ST_PlaceholderType();
    }
    return *ST_PlaceholderType::default_instance_;
}

const std::string ST_PlaceholderType::TypeStrList[] =
{
    "title",
    "body",
    "ctrTitle",
    "subTitle",
    "dt",
    "sldNum",
    "ftr",
    "hdr",
    "obj",
    "chart",
    "tbl",
    "clipArt",
    "dgm",
    "media",
    "sldImg",
    "pic"
};
ST_PlaceholderType* ST_PlaceholderType::default_instance_ = NULL;

// ST_PlaceholderSize
ST_PlaceholderSize::ST_PlaceholderSize()
    :m_has_type(false)
{
}
ST_PlaceholderSize::ST_PlaceholderSize(const ST_PlaceholderSize::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_PlaceholderSize::~ST_PlaceholderSize()
{
    clear();
}
bool ST_PlaceholderSize::has_type() const
{
    return m_has_type;
}

void ST_PlaceholderSize::set_type(const ST_PlaceholderSize::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_PlaceholderSize::Type& ST_PlaceholderSize::get_type() const
{
    return m_type;
}

std::string ST_PlaceholderSize::toString() const
{
    return ST_PlaceholderSize::TypeStrList[m_type];
}

void ST_PlaceholderSize::clear()
{
    m_has_type = false;
}

void ST_PlaceholderSize::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_PlaceholderSize& ST_PlaceholderSize::default_instance()
{
    if (!ST_PlaceholderSize::default_instance_)
    {
        ST_PlaceholderSize::default_instance_ = new ST_PlaceholderSize();
    }
    return *ST_PlaceholderSize::default_instance_;
}

const std::string ST_PlaceholderSize::TypeStrList[] =
{
    "full",
    "half",
    "quarter"
};
ST_PlaceholderSize* ST_PlaceholderSize::default_instance_ = NULL;

// ST_SlideLayoutType
ST_SlideLayoutType::ST_SlideLayoutType()
    :m_has_type(false)
{
}
ST_SlideLayoutType::ST_SlideLayoutType(const ST_SlideLayoutType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_SlideLayoutType::~ST_SlideLayoutType()
{
    clear();
}
bool ST_SlideLayoutType::has_type() const
{
    return m_has_type;
}

void ST_SlideLayoutType::set_type(const ST_SlideLayoutType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_SlideLayoutType::Type& ST_SlideLayoutType::get_type() const
{
    return m_type;
}

std::string ST_SlideLayoutType::toString() const
{
    return ST_SlideLayoutType::TypeStrList[m_type];
}

void ST_SlideLayoutType::clear()
{
    m_has_type = false;
}

void ST_SlideLayoutType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_SlideLayoutType& ST_SlideLayoutType::default_instance()
{
    if (!ST_SlideLayoutType::default_instance_)
    {
        ST_SlideLayoutType::default_instance_ = new ST_SlideLayoutType();
    }
    return *ST_SlideLayoutType::default_instance_;
}

const std::string ST_SlideLayoutType::TypeStrList[] =
{
    "title",
    "tx",
    "twoColTx",
    "tbl",
    "txAndChart",
    "chartAndTx",
    "dgm",
    "chart",
    "txAndClipArt",
    "clipArtAndTx",
    "titleOnly",
    "blank",
    "txAndObj",
    "objAndTx",
    "objOnly",
    "obj",
    "txAndMedia",
    "mediaAndTx",
    "objOverTx",
    "txOverObj",
    "txAndTwoObj",
    "twoObjAndTx",
    "twoObjOverTx",
    "fourObj",
    "vertTx",
    "clipArtAndVertTx",
    "vertTitleAndTx",
    "vertTitleAndTxOverChart",
    "twoObj",
    "objAndTwoObj",
    "twoObjAndObj",
    "cust",
    "secHead",
    "twoTxTwoObj",
    "objTx",
    "picTx"
};
ST_SlideLayoutType* ST_SlideLayoutType::default_instance_ = NULL;

// ST_SlideLayoutId
ST_SlideLayoutId::ST_SlideLayoutId()
    :m_has_unsignedInt(false),
     m_unsignedInt(0)
{
}
ST_SlideLayoutId::ST_SlideLayoutId(const XSD::unsignedInt_& _unsignedInt)
    :m_has_unsignedInt(true)
{

    set_unsignedInt(_unsignedInt);
}
ST_SlideLayoutId::~ST_SlideLayoutId()
{
    clear();
}
bool ST_SlideLayoutId::has_unsignedInt() const
{
    return m_has_unsignedInt;
}

void ST_SlideLayoutId::set_unsignedInt(const XSD::unsignedInt_& _unsignedInt)
{   assert(2147483648 <= _unsignedInt);

    m_has_unsignedInt = true;
    m_unsignedInt = _unsignedInt;
}

const XSD::unsignedInt_& ST_SlideLayoutId::get_unsignedInt() const
{
    return m_unsignedInt;
}

void ST_SlideLayoutId::clear()
{
    m_has_unsignedInt = false;
    m_unsignedInt = 0;;
}

void ST_SlideLayoutId::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_unsignedInt)
    {
        _outStream << " " << _attrName << "=\"" << m_unsignedInt << "\"";;
    }
}

const ST_SlideLayoutId& ST_SlideLayoutId::default_instance()
{
    if (!ST_SlideLayoutId::default_instance_)
    {
        ST_SlideLayoutId::default_instance_ = new ST_SlideLayoutId();
    }
    return *ST_SlideLayoutId::default_instance_;
}

std::string ST_SlideLayoutId::toString() const
{
    std::stringstream strStream;
    strStream << get_unsignedInt();
    return strStream.str();
}

ST_SlideLayoutId* ST_SlideLayoutId::default_instance_ = NULL;

// ST_SplitterBarState
ST_SplitterBarState::ST_SplitterBarState()
    :m_has_type(false)
{
}
ST_SplitterBarState::ST_SplitterBarState(const ST_SplitterBarState::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_SplitterBarState::~ST_SplitterBarState()
{
    clear();
}
bool ST_SplitterBarState::has_type() const
{
    return m_has_type;
}

void ST_SplitterBarState::set_type(const ST_SplitterBarState::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_SplitterBarState::Type& ST_SplitterBarState::get_type() const
{
    return m_type;
}

std::string ST_SplitterBarState::toString() const
{
    return ST_SplitterBarState::TypeStrList[m_type];
}

void ST_SplitterBarState::clear()
{
    m_has_type = false;
}

void ST_SplitterBarState::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_SplitterBarState& ST_SplitterBarState::default_instance()
{
    if (!ST_SplitterBarState::default_instance_)
    {
        ST_SplitterBarState::default_instance_ = new ST_SplitterBarState();
    }
    return *ST_SplitterBarState::default_instance_;
}

const std::string ST_SplitterBarState::TypeStrList[] =
{
    "minimized",
    "restored",
    "maximized"
};
ST_SplitterBarState* ST_SplitterBarState::default_instance_ = NULL;

// ST_ViewType
ST_ViewType::ST_ViewType()
    :m_has_type(false)
{
}
ST_ViewType::ST_ViewType(const ST_ViewType::Type& _type)
    :m_has_type(true),
     m_type(_type)
{
}
ST_ViewType::~ST_ViewType()
{
    clear();
}
bool ST_ViewType::has_type() const
{
    return m_has_type;
}

void ST_ViewType::set_type(const ST_ViewType::Type& _type)
{
    m_has_type = true;
    m_type = _type;
}

const ST_ViewType::Type& ST_ViewType::get_type() const
{
    return m_type;
}

std::string ST_ViewType::toString() const
{
    return ST_ViewType::TypeStrList[m_type];
}

void ST_ViewType::clear()
{
    m_has_type = false;
}

void ST_ViewType::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_type)
    {
        _outStream << " " << _attrName << "=\"" << toString() << "\"";
    }
}

const ST_ViewType& ST_ViewType::default_instance()
{
    if (!ST_ViewType::default_instance_)
    {
        ST_ViewType::default_instance_ = new ST_ViewType();
    }
    return *ST_ViewType::default_instance_;
}

const std::string ST_ViewType::TypeStrList[] =
{
    "sldView",
    "sldMasterView",
    "notesView",
    "handoutView",
    "notesMasterView",
    "outlineView",
    "sldSorterView",
    "sldThumbnailView"
};
ST_ViewType* ST_ViewType::default_instance_ = NULL;

// CT_SideDirectionTransition
CT_SideDirectionTransition::CT_SideDirectionTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_SideDirectionTransition::~CT_SideDirectionTransition()
{
    clear();
}
void CT_SideDirectionTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_SideDirectionTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SideDirectionTransition& CT_SideDirectionTransition::default_instance()
{
    if (!CT_SideDirectionTransition::default_instance_)
    {
        CT_SideDirectionTransition::default_instance_ = new CT_SideDirectionTransition();
    }
    return *CT_SideDirectionTransition::default_instance_;
}

bool CT_SideDirectionTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_SideDirectionTransition::set_dir_attr(const ST_TransitionSideDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionSideDirectionType(_dir_attr);
}

const ST_TransitionSideDirectionType& CT_SideDirectionTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionSideDirectionType::default_instance();
}

CT_SideDirectionTransition* CT_SideDirectionTransition::default_instance_ = NULL;

// CT_CornerDirectionTransition
CT_CornerDirectionTransition::CT_CornerDirectionTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_CornerDirectionTransition::~CT_CornerDirectionTransition()
{
    clear();
}
void CT_CornerDirectionTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_CornerDirectionTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CornerDirectionTransition& CT_CornerDirectionTransition::default_instance()
{
    if (!CT_CornerDirectionTransition::default_instance_)
    {
        CT_CornerDirectionTransition::default_instance_ = new CT_CornerDirectionTransition();
    }
    return *CT_CornerDirectionTransition::default_instance_;
}

bool CT_CornerDirectionTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_CornerDirectionTransition::set_dir_attr(const ST_TransitionCornerDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionCornerDirectionType(_dir_attr);
}

const ST_TransitionCornerDirectionType& CT_CornerDirectionTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionCornerDirectionType::default_instance();
}

CT_CornerDirectionTransition* CT_CornerDirectionTransition::default_instance_ = NULL;

// CT_EightDirectionTransition
CT_EightDirectionTransition::CT_EightDirectionTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_EightDirectionTransition::~CT_EightDirectionTransition()
{
    clear();
}
void CT_EightDirectionTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_EightDirectionTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_EightDirectionTransition& CT_EightDirectionTransition::default_instance()
{
    if (!CT_EightDirectionTransition::default_instance_)
    {
        CT_EightDirectionTransition::default_instance_ = new CT_EightDirectionTransition();
    }
    return *CT_EightDirectionTransition::default_instance_;
}

bool CT_EightDirectionTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_EightDirectionTransition::set_dir_attr(const ST_TransitionEightDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionEightDirectionType(_dir_attr);
}

const ST_TransitionEightDirectionType& CT_EightDirectionTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionEightDirectionType::default_instance();
}

CT_EightDirectionTransition* CT_EightDirectionTransition::default_instance_ = NULL;

// CT_OrientationTransition
CT_OrientationTransition::CT_OrientationTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_OrientationTransition::~CT_OrientationTransition()
{
    clear();
}
void CT_OrientationTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_OrientationTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_OrientationTransition& CT_OrientationTransition::default_instance()
{
    if (!CT_OrientationTransition::default_instance_)
    {
        CT_OrientationTransition::default_instance_ = new CT_OrientationTransition();
    }
    return *CT_OrientationTransition::default_instance_;
}

bool CT_OrientationTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_OrientationTransition::set_dir_attr(const ST_Direction& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_Direction(_dir_attr);
}

const ST_Direction& CT_OrientationTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_Direction::default_instance();
}

CT_OrientationTransition* CT_OrientationTransition::default_instance_ = NULL;

// CT_InOutTransition
CT_InOutTransition::CT_InOutTransition()
    :m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_InOutTransition::~CT_InOutTransition()
{
    clear();
}
void CT_InOutTransition::clear()
{
    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_InOutTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_InOutTransition& CT_InOutTransition::default_instance()
{
    if (!CT_InOutTransition::default_instance_)
    {
        CT_InOutTransition::default_instance_ = new CT_InOutTransition();
    }
    return *CT_InOutTransition::default_instance_;
}

bool CT_InOutTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_InOutTransition::set_dir_attr(const ST_TransitionInOutDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionInOutDirectionType(_dir_attr);
}

const ST_TransitionInOutDirectionType& CT_InOutTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionInOutDirectionType::default_instance();
}

CT_InOutTransition* CT_InOutTransition::default_instance_ = NULL;

// CT_OptionalBlackTransition
CT_OptionalBlackTransition::CT_OptionalBlackTransition()
    :m_has_thruBlk_attr(false),
     m_thruBlk_attr(false)
{
}
CT_OptionalBlackTransition::~CT_OptionalBlackTransition()
{
    clear();
}
void CT_OptionalBlackTransition::clear()
{
    m_has_thruBlk_attr = false;
    m_thruBlk_attr = false;
}

void CT_OptionalBlackTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_thruBlk_attr)
    {
        _outStream << " " << "thruBlk" << "=\"" << XSD::XMLBooleanStr(m_thruBlk_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_OptionalBlackTransition& CT_OptionalBlackTransition::default_instance()
{
    if (!CT_OptionalBlackTransition::default_instance_)
    {
        CT_OptionalBlackTransition::default_instance_ = new CT_OptionalBlackTransition();
    }
    return *CT_OptionalBlackTransition::default_instance_;
}

bool CT_OptionalBlackTransition::has_thruBlk_attr() const
{
    return m_has_thruBlk_attr;
}

void CT_OptionalBlackTransition::set_thruBlk_attr(const XSD::boolean_& _thruBlk_attr)
{
    m_has_thruBlk_attr = true;
    m_thruBlk_attr = _thruBlk_attr;
}

const XSD::boolean_& CT_OptionalBlackTransition::get_thruBlk_attr() const
{
    return m_thruBlk_attr;
}

CT_OptionalBlackTransition* CT_OptionalBlackTransition::default_instance_ = NULL;

// CT_SplitTransition
CT_SplitTransition::CT_SplitTransition()
    :m_has_orient_attr(false),
     m_orient_attr(NULL),
     m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_SplitTransition::~CT_SplitTransition()
{
    clear();
}
void CT_SplitTransition::clear()
{
    m_has_orient_attr = false;

    if (m_orient_attr)
    {
        delete m_orient_attr;
        m_orient_attr = NULL;
    }


    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }

}

void CT_SplitTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_orient_attr)
    {
        m_orient_attr->toXmlAttr("orient", _outStream);
    }



    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SplitTransition& CT_SplitTransition::default_instance()
{
    if (!CT_SplitTransition::default_instance_)
    {
        CT_SplitTransition::default_instance_ = new CT_SplitTransition();
    }
    return *CT_SplitTransition::default_instance_;
}

bool CT_SplitTransition::has_orient_attr() const
{
    return m_has_orient_attr;
}

void CT_SplitTransition::set_orient_attr(const ST_Direction& _orient_attr)
{
    m_has_orient_attr = true;
    m_orient_attr = new ST_Direction(_orient_attr);
}

const ST_Direction& CT_SplitTransition::get_orient_attr() const
{
    if (m_orient_attr)
    {
        return *m_orient_attr;
    }
    return ST_Direction::default_instance();
}

bool CT_SplitTransition::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_SplitTransition::set_dir_attr(const ST_TransitionInOutDirectionType& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TransitionInOutDirectionType(_dir_attr);
}

const ST_TransitionInOutDirectionType& CT_SplitTransition::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TransitionInOutDirectionType::default_instance();
}

CT_SplitTransition* CT_SplitTransition::default_instance_ = NULL;

// CT_WheelTransition
CT_WheelTransition::CT_WheelTransition()
    :m_has_spokes_attr(false),
     m_spokes_attr(0)
{
}
CT_WheelTransition::~CT_WheelTransition()
{
    clear();
}
void CT_WheelTransition::clear()
{
    m_has_spokes_attr = false;
    m_spokes_attr = 0;
}

void CT_WheelTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_spokes_attr)
    {
        _outStream << " " << "spokes" << "=\"" << m_spokes_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_WheelTransition& CT_WheelTransition::default_instance()
{
    if (!CT_WheelTransition::default_instance_)
    {
        CT_WheelTransition::default_instance_ = new CT_WheelTransition();
    }
    return *CT_WheelTransition::default_instance_;
}

bool CT_WheelTransition::has_spokes_attr() const
{
    return m_has_spokes_attr;
}

void CT_WheelTransition::set_spokes_attr(const XSD::unsignedInt_& _spokes_attr)
{
    m_has_spokes_attr = true;
    m_spokes_attr = _spokes_attr;
}

const XSD::unsignedInt_& CT_WheelTransition::get_spokes_attr() const
{
    return m_spokes_attr;
}

CT_WheelTransition* CT_WheelTransition::default_instance_ = NULL;

// CT_TransitionStartSoundAction
CT_TransitionStartSoundAction::CT_TransitionStartSoundAction()
    :m_has_snd(false),
     m_snd(NULL),
     m_has_loop_attr(false),
     m_loop_attr(false)
{
}
CT_TransitionStartSoundAction::~CT_TransitionStartSoundAction()
{
    clear();
}
bool CT_TransitionStartSoundAction::has_snd() const
{
    return m_has_snd;
}

ns_a::CT_EmbeddedWAVAudioFile* CT_TransitionStartSoundAction::mutable_snd()
{
    m_has_snd = true;
    if (!m_snd)
    {
        m_snd = new ns_a::CT_EmbeddedWAVAudioFile();
    }
    return m_snd;
}

const ns_a::CT_EmbeddedWAVAudioFile& CT_TransitionStartSoundAction::get_snd() const
{
    if (m_snd)
    {
        return *m_snd;
    }
    return ns_a::CT_EmbeddedWAVAudioFile::default_instance();
}

void CT_TransitionStartSoundAction::clear()
{
    m_has_loop_attr = false;
    m_loop_attr = false;

    m_has_snd = false;

    if (m_snd)
    {
        delete m_snd;
        m_snd = NULL;
    }

}

void CT_TransitionStartSoundAction::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_loop_attr)
    {
        _outStream << " " << "loop" << "=\"" << XSD::XMLBooleanStr(m_loop_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_snd);


    if (m_has_snd)
    {
        m_snd->toXmlElem("p:snd", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TransitionStartSoundAction& CT_TransitionStartSoundAction::default_instance()
{
    if (!CT_TransitionStartSoundAction::default_instance_)
    {
        CT_TransitionStartSoundAction::default_instance_ = new CT_TransitionStartSoundAction();
    }
    return *CT_TransitionStartSoundAction::default_instance_;
}

bool CT_TransitionStartSoundAction::has_loop_attr() const
{
    return m_has_loop_attr;
}

void CT_TransitionStartSoundAction::set_loop_attr(const XSD::boolean_& _loop_attr)
{
    m_has_loop_attr = true;
    m_loop_attr = _loop_attr;
}

const XSD::boolean_& CT_TransitionStartSoundAction::get_loop_attr() const
{
    return m_loop_attr;
}

CT_TransitionStartSoundAction* CT_TransitionStartSoundAction::default_instance_ = NULL;

// CT_TransitionSoundAction
CT_TransitionSoundAction::CT_TransitionSoundAction()
    :m_has_stSnd(false),
     m_stSnd(NULL),
     m_has_endSnd(false),
     m_endSnd(NULL)
{
}
CT_TransitionSoundAction::~CT_TransitionSoundAction()
{
    clear();
}
bool CT_TransitionSoundAction::has_stSnd() const
{
    return m_has_stSnd;
}

CT_TransitionStartSoundAction* CT_TransitionSoundAction::mutable_stSnd()
{

    m_has_endSnd = false;

    if (m_endSnd)
    {
        delete m_endSnd;
        m_endSnd = NULL;
    }
    ;

    m_has_stSnd = true;
    if (!m_stSnd)
    {
        m_stSnd = new CT_TransitionStartSoundAction();
    }
    return m_stSnd;
}

const CT_TransitionStartSoundAction& CT_TransitionSoundAction::get_stSnd() const
{
    if (m_stSnd)
    {
        return *m_stSnd;
    }
    return CT_TransitionStartSoundAction::default_instance();
}

bool CT_TransitionSoundAction::has_endSnd() const
{
    return m_has_endSnd;
}

CT_Empty* CT_TransitionSoundAction::mutable_endSnd()
{

    m_has_stSnd = false;

    if (m_stSnd)
    {
        delete m_stSnd;
        m_stSnd = NULL;
    }
    ;

    m_has_endSnd = true;
    if (!m_endSnd)
    {
        m_endSnd = new CT_Empty();
    }
    return m_endSnd;
}

const CT_Empty& CT_TransitionSoundAction::get_endSnd() const
{
    if (m_endSnd)
    {
        return *m_endSnd;
    }
    return CT_Empty::default_instance();
}

void CT_TransitionSoundAction::clear()
{
    m_has_stSnd = false;

    if (m_stSnd)
    {
        delete m_stSnd;
        m_stSnd = NULL;
    }


    m_has_endSnd = false;

    if (m_endSnd)
    {
        delete m_endSnd;
        m_endSnd = NULL;
    }

}

void CT_TransitionSoundAction::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_stSnd, m_has_endSnd};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_stSnd)
    {
        m_stSnd->toXmlElem("p:stSnd", "", _outStream);
    }


    if (m_has_endSnd)
    {
        m_endSnd->toXmlElem("p:endSnd", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TransitionSoundAction& CT_TransitionSoundAction::default_instance()
{
    if (!CT_TransitionSoundAction::default_instance_)
    {
        CT_TransitionSoundAction::default_instance_ = new CT_TransitionSoundAction();
    }
    return *CT_TransitionSoundAction::default_instance_;
}

CT_TransitionSoundAction* CT_TransitionSoundAction::default_instance_ = NULL;

// CT_SlideTransition
CT_SlideTransition::CT_SlideTransition()
    :m_has_blinds(false),
     m_blinds(NULL),
     m_has_checker(false),
     m_checker(NULL),
     m_has_circle(false),
     m_circle(NULL),
     m_has_dissolve(false),
     m_dissolve(NULL),
     m_has_comb(false),
     m_comb(NULL),
     m_has_cover(false),
     m_cover(NULL),
     m_has_cut(false),
     m_cut(NULL),
     m_has_diamond(false),
     m_diamond(NULL),
     m_has_fade(false),
     m_fade(NULL),
     m_has_newsflash(false),
     m_newsflash(NULL),
     m_has_plus(false),
     m_plus(NULL),
     m_has_pull(false),
     m_pull(NULL),
     m_has_push(false),
     m_push(NULL),
     m_has_random(false),
     m_random(NULL),
     m_has_randomBar(false),
     m_randomBar(NULL),
     m_has_split(false),
     m_split(NULL),
     m_has_strips(false),
     m_strips(NULL),
     m_has_wedge(false),
     m_wedge(NULL),
     m_has_wheel(false),
     m_wheel(NULL),
     m_has_wipe(false),
     m_wipe(NULL),
     m_has_zoom(false),
     m_zoom(NULL),
     m_has_sndAc(false),
     m_sndAc(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_spd_attr(false),
     m_spd_attr(NULL),
     m_has_advClick_attr(false),
     m_advClick_attr(false),
     m_has_advTm_attr(false),
     m_advTm_attr(0)
{
}
CT_SlideTransition::~CT_SlideTransition()
{
    clear();
}
bool CT_SlideTransition::has_blinds() const
{
    return m_has_blinds;
}

CT_OrientationTransition* CT_SlideTransition::mutable_blinds()
{

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_blinds = true;
    if (!m_blinds)
    {
        m_blinds = new CT_OrientationTransition();
    }
    return m_blinds;
}

const CT_OrientationTransition& CT_SlideTransition::get_blinds() const
{
    if (m_blinds)
    {
        return *m_blinds;
    }
    return CT_OrientationTransition::default_instance();
}

bool CT_SlideTransition::has_checker() const
{
    return m_has_checker;
}

CT_OrientationTransition* CT_SlideTransition::mutable_checker()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_checker = true;
    if (!m_checker)
    {
        m_checker = new CT_OrientationTransition();
    }
    return m_checker;
}

const CT_OrientationTransition& CT_SlideTransition::get_checker() const
{
    if (m_checker)
    {
        return *m_checker;
    }
    return CT_OrientationTransition::default_instance();
}

bool CT_SlideTransition::has_circle() const
{
    return m_has_circle;
}

CT_Empty* CT_SlideTransition::mutable_circle()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_circle = true;
    if (!m_circle)
    {
        m_circle = new CT_Empty();
    }
    return m_circle;
}

const CT_Empty& CT_SlideTransition::get_circle() const
{
    if (m_circle)
    {
        return *m_circle;
    }
    return CT_Empty::default_instance();
}

bool CT_SlideTransition::has_dissolve() const
{
    return m_has_dissolve;
}

CT_Empty* CT_SlideTransition::mutable_dissolve()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_dissolve = true;
    if (!m_dissolve)
    {
        m_dissolve = new CT_Empty();
    }
    return m_dissolve;
}

const CT_Empty& CT_SlideTransition::get_dissolve() const
{
    if (m_dissolve)
    {
        return *m_dissolve;
    }
    return CT_Empty::default_instance();
}

bool CT_SlideTransition::has_comb() const
{
    return m_has_comb;
}

CT_OrientationTransition* CT_SlideTransition::mutable_comb()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_comb = true;
    if (!m_comb)
    {
        m_comb = new CT_OrientationTransition();
    }
    return m_comb;
}

const CT_OrientationTransition& CT_SlideTransition::get_comb() const
{
    if (m_comb)
    {
        return *m_comb;
    }
    return CT_OrientationTransition::default_instance();
}

bool CT_SlideTransition::has_cover() const
{
    return m_has_cover;
}

CT_EightDirectionTransition* CT_SlideTransition::mutable_cover()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_cover = true;
    if (!m_cover)
    {
        m_cover = new CT_EightDirectionTransition();
    }
    return m_cover;
}

const CT_EightDirectionTransition& CT_SlideTransition::get_cover() const
{
    if (m_cover)
    {
        return *m_cover;
    }
    return CT_EightDirectionTransition::default_instance();
}

bool CT_SlideTransition::has_cut() const
{
    return m_has_cut;
}

CT_OptionalBlackTransition* CT_SlideTransition::mutable_cut()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_cut = true;
    if (!m_cut)
    {
        m_cut = new CT_OptionalBlackTransition();
    }
    return m_cut;
}

const CT_OptionalBlackTransition& CT_SlideTransition::get_cut() const
{
    if (m_cut)
    {
        return *m_cut;
    }
    return CT_OptionalBlackTransition::default_instance();
}

bool CT_SlideTransition::has_diamond() const
{
    return m_has_diamond;
}

CT_Empty* CT_SlideTransition::mutable_diamond()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_diamond = true;
    if (!m_diamond)
    {
        m_diamond = new CT_Empty();
    }
    return m_diamond;
}

const CT_Empty& CT_SlideTransition::get_diamond() const
{
    if (m_diamond)
    {
        return *m_diamond;
    }
    return CT_Empty::default_instance();
}

bool CT_SlideTransition::has_fade() const
{
    return m_has_fade;
}

CT_OptionalBlackTransition* CT_SlideTransition::mutable_fade()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_fade = true;
    if (!m_fade)
    {
        m_fade = new CT_OptionalBlackTransition();
    }
    return m_fade;
}

const CT_OptionalBlackTransition& CT_SlideTransition::get_fade() const
{
    if (m_fade)
    {
        return *m_fade;
    }
    return CT_OptionalBlackTransition::default_instance();
}

bool CT_SlideTransition::has_newsflash() const
{
    return m_has_newsflash;
}

CT_Empty* CT_SlideTransition::mutable_newsflash()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_newsflash = true;
    if (!m_newsflash)
    {
        m_newsflash = new CT_Empty();
    }
    return m_newsflash;
}

const CT_Empty& CT_SlideTransition::get_newsflash() const
{
    if (m_newsflash)
    {
        return *m_newsflash;
    }
    return CT_Empty::default_instance();
}

bool CT_SlideTransition::has_plus() const
{
    return m_has_plus;
}

CT_Empty* CT_SlideTransition::mutable_plus()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_plus = true;
    if (!m_plus)
    {
        m_plus = new CT_Empty();
    }
    return m_plus;
}

const CT_Empty& CT_SlideTransition::get_plus() const
{
    if (m_plus)
    {
        return *m_plus;
    }
    return CT_Empty::default_instance();
}

bool CT_SlideTransition::has_pull() const
{
    return m_has_pull;
}

CT_EightDirectionTransition* CT_SlideTransition::mutable_pull()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_pull = true;
    if (!m_pull)
    {
        m_pull = new CT_EightDirectionTransition();
    }
    return m_pull;
}

const CT_EightDirectionTransition& CT_SlideTransition::get_pull() const
{
    if (m_pull)
    {
        return *m_pull;
    }
    return CT_EightDirectionTransition::default_instance();
}

bool CT_SlideTransition::has_push() const
{
    return m_has_push;
}

CT_SideDirectionTransition* CT_SlideTransition::mutable_push()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_push = true;
    if (!m_push)
    {
        m_push = new CT_SideDirectionTransition();
    }
    return m_push;
}

const CT_SideDirectionTransition& CT_SlideTransition::get_push() const
{
    if (m_push)
    {
        return *m_push;
    }
    return CT_SideDirectionTransition::default_instance();
}

bool CT_SlideTransition::has_random() const
{
    return m_has_random;
}

CT_Empty* CT_SlideTransition::mutable_random()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_random = true;
    if (!m_random)
    {
        m_random = new CT_Empty();
    }
    return m_random;
}

const CT_Empty& CT_SlideTransition::get_random() const
{
    if (m_random)
    {
        return *m_random;
    }
    return CT_Empty::default_instance();
}

bool CT_SlideTransition::has_randomBar() const
{
    return m_has_randomBar;
}

CT_OrientationTransition* CT_SlideTransition::mutable_randomBar()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_randomBar = true;
    if (!m_randomBar)
    {
        m_randomBar = new CT_OrientationTransition();
    }
    return m_randomBar;
}

const CT_OrientationTransition& CT_SlideTransition::get_randomBar() const
{
    if (m_randomBar)
    {
        return *m_randomBar;
    }
    return CT_OrientationTransition::default_instance();
}

bool CT_SlideTransition::has_split() const
{
    return m_has_split;
}

CT_SplitTransition* CT_SlideTransition::mutable_split()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_split = true;
    if (!m_split)
    {
        m_split = new CT_SplitTransition();
    }
    return m_split;
}

const CT_SplitTransition& CT_SlideTransition::get_split() const
{
    if (m_split)
    {
        return *m_split;
    }
    return CT_SplitTransition::default_instance();
}

bool CT_SlideTransition::has_strips() const
{
    return m_has_strips;
}

CT_CornerDirectionTransition* CT_SlideTransition::mutable_strips()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_strips = true;
    if (!m_strips)
    {
        m_strips = new CT_CornerDirectionTransition();
    }
    return m_strips;
}

const CT_CornerDirectionTransition& CT_SlideTransition::get_strips() const
{
    if (m_strips)
    {
        return *m_strips;
    }
    return CT_CornerDirectionTransition::default_instance();
}

bool CT_SlideTransition::has_wedge() const
{
    return m_has_wedge;
}

CT_Empty* CT_SlideTransition::mutable_wedge()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_wedge = true;
    if (!m_wedge)
    {
        m_wedge = new CT_Empty();
    }
    return m_wedge;
}

const CT_Empty& CT_SlideTransition::get_wedge() const
{
    if (m_wedge)
    {
        return *m_wedge;
    }
    return CT_Empty::default_instance();
}

bool CT_SlideTransition::has_wheel() const
{
    return m_has_wheel;
}

CT_WheelTransition* CT_SlideTransition::mutable_wheel()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_wheel = true;
    if (!m_wheel)
    {
        m_wheel = new CT_WheelTransition();
    }
    return m_wheel;
}

const CT_WheelTransition& CT_SlideTransition::get_wheel() const
{
    if (m_wheel)
    {
        return *m_wheel;
    }
    return CT_WheelTransition::default_instance();
}

bool CT_SlideTransition::has_wipe() const
{
    return m_has_wipe;
}

CT_SideDirectionTransition* CT_SlideTransition::mutable_wipe()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }
    ;

    m_has_wipe = true;
    if (!m_wipe)
    {
        m_wipe = new CT_SideDirectionTransition();
    }
    return m_wipe;
}

const CT_SideDirectionTransition& CT_SlideTransition::get_wipe() const
{
    if (m_wipe)
    {
        return *m_wipe;
    }
    return CT_SideDirectionTransition::default_instance();
}

bool CT_SlideTransition::has_zoom() const
{
    return m_has_zoom;
}

CT_InOutTransition* CT_SlideTransition::mutable_zoom()
{

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }
    ;

    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }
    ;

    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }
    ;

    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }
    ;

    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }
    ;

    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }
    ;

    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }
    ;

    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }
    ;

    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }
    ;

    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }
    ;

    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }
    ;

    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }
    ;

    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }
    ;

    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }
    ;

    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }
    ;

    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }
    ;

    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }
    ;

    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }
    ;

    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }
    ;

    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }
    ;

    m_has_zoom = true;
    if (!m_zoom)
    {
        m_zoom = new CT_InOutTransition();
    }
    return m_zoom;
}

const CT_InOutTransition& CT_SlideTransition::get_zoom() const
{
    if (m_zoom)
    {
        return *m_zoom;
    }
    return CT_InOutTransition::default_instance();
}

bool CT_SlideTransition::has_sndAc() const
{
    return m_has_sndAc;
}

CT_TransitionSoundAction* CT_SlideTransition::mutable_sndAc()
{
    m_has_sndAc = true;
    if (!m_sndAc)
    {
        m_sndAc = new CT_TransitionSoundAction();
    }
    return m_sndAc;
}

const CT_TransitionSoundAction& CT_SlideTransition::get_sndAc() const
{
    if (m_sndAc)
    {
        return *m_sndAc;
    }
    return CT_TransitionSoundAction::default_instance();
}

bool CT_SlideTransition::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_SlideTransition::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_SlideTransition::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_SlideTransition::clear()
{
    m_has_spd_attr = false;

    if (m_spd_attr)
    {
        delete m_spd_attr;
        m_spd_attr = NULL;
    }


    m_has_advClick_attr = false;
    m_advClick_attr = false;

    m_has_advTm_attr = false;
    m_advTm_attr = 0;

    m_has_blinds = false;

    if (m_blinds)
    {
        delete m_blinds;
        m_blinds = NULL;
    }


    m_has_checker = false;

    if (m_checker)
    {
        delete m_checker;
        m_checker = NULL;
    }


    m_has_circle = false;

    if (m_circle)
    {
        delete m_circle;
        m_circle = NULL;
    }


    m_has_dissolve = false;

    if (m_dissolve)
    {
        delete m_dissolve;
        m_dissolve = NULL;
    }


    m_has_comb = false;

    if (m_comb)
    {
        delete m_comb;
        m_comb = NULL;
    }


    m_has_cover = false;

    if (m_cover)
    {
        delete m_cover;
        m_cover = NULL;
    }


    m_has_cut = false;

    if (m_cut)
    {
        delete m_cut;
        m_cut = NULL;
    }


    m_has_diamond = false;

    if (m_diamond)
    {
        delete m_diamond;
        m_diamond = NULL;
    }


    m_has_fade = false;

    if (m_fade)
    {
        delete m_fade;
        m_fade = NULL;
    }


    m_has_newsflash = false;

    if (m_newsflash)
    {
        delete m_newsflash;
        m_newsflash = NULL;
    }


    m_has_plus = false;

    if (m_plus)
    {
        delete m_plus;
        m_plus = NULL;
    }


    m_has_pull = false;

    if (m_pull)
    {
        delete m_pull;
        m_pull = NULL;
    }


    m_has_push = false;

    if (m_push)
    {
        delete m_push;
        m_push = NULL;
    }


    m_has_random = false;

    if (m_random)
    {
        delete m_random;
        m_random = NULL;
    }


    m_has_randomBar = false;

    if (m_randomBar)
    {
        delete m_randomBar;
        m_randomBar = NULL;
    }


    m_has_split = false;

    if (m_split)
    {
        delete m_split;
        m_split = NULL;
    }


    m_has_strips = false;

    if (m_strips)
    {
        delete m_strips;
        m_strips = NULL;
    }


    m_has_wedge = false;

    if (m_wedge)
    {
        delete m_wedge;
        m_wedge = NULL;
    }


    m_has_wheel = false;

    if (m_wheel)
    {
        delete m_wheel;
        m_wheel = NULL;
    }


    m_has_wipe = false;

    if (m_wipe)
    {
        delete m_wipe;
        m_wipe = NULL;
    }


    m_has_zoom = false;

    if (m_zoom)
    {
        delete m_zoom;
        m_zoom = NULL;
    }


    m_has_sndAc = false;

    if (m_sndAc)
    {
        delete m_sndAc;
        m_sndAc = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideTransition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_spd_attr)
    {
        m_spd_attr->toXmlAttr("spd", _outStream);
    }



    if (m_has_advClick_attr)
    {
        _outStream << " " << "advClick" << "=\"" << XSD::XMLBooleanStr(m_advClick_attr) << "\"";
    }



    if (m_has_advTm_attr)
    {
        _outStream << " " << "advTm" << "=\"" << m_advTm_attr << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[21] = {m_has_blinds, m_has_checker, m_has_circle, m_has_dissolve, m_has_comb, m_has_cover, m_has_cut, m_has_diamond, m_has_fade, m_has_newsflash, m_has_plus, m_has_pull, m_has_push, m_has_random, m_has_randomBar, m_has_split, m_has_strips, m_has_wedge, m_has_wheel, m_has_wipe, m_has_zoom};
        int cnt = count(elemHasValueList, elemHasValueList + 21, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_blinds)
    {
        m_blinds->toXmlElem("p:blinds", "", _outStream);
    }


    if (m_has_checker)
    {
        m_checker->toXmlElem("p:checker", "", _outStream);
    }


    if (m_has_circle)
    {
        m_circle->toXmlElem("p:circle", "", _outStream);
    }


    if (m_has_dissolve)
    {
        m_dissolve->toXmlElem("p:dissolve", "", _outStream);
    }


    if (m_has_comb)
    {
        m_comb->toXmlElem("p:comb", "", _outStream);
    }


    if (m_has_cover)
    {
        m_cover->toXmlElem("p:cover", "", _outStream);
    }


    if (m_has_cut)
    {
        m_cut->toXmlElem("p:cut", "", _outStream);
    }


    if (m_has_diamond)
    {
        m_diamond->toXmlElem("p:diamond", "", _outStream);
    }


    if (m_has_fade)
    {
        m_fade->toXmlElem("p:fade", "", _outStream);
    }


    if (m_has_newsflash)
    {
        m_newsflash->toXmlElem("p:newsflash", "", _outStream);
    }


    if (m_has_plus)
    {
        m_plus->toXmlElem("p:plus", "", _outStream);
    }


    if (m_has_pull)
    {
        m_pull->toXmlElem("p:pull", "", _outStream);
    }


    if (m_has_push)
    {
        m_push->toXmlElem("p:push", "", _outStream);
    }


    if (m_has_random)
    {
        m_random->toXmlElem("p:random", "", _outStream);
    }


    if (m_has_randomBar)
    {
        m_randomBar->toXmlElem("p:randomBar", "", _outStream);
    }


    if (m_has_split)
    {
        m_split->toXmlElem("p:split", "", _outStream);
    }


    if (m_has_strips)
    {
        m_strips->toXmlElem("p:strips", "", _outStream);
    }


    if (m_has_wedge)
    {
        m_wedge->toXmlElem("p:wedge", "", _outStream);
    }


    if (m_has_wheel)
    {
        m_wheel->toXmlElem("p:wheel", "", _outStream);
    }


    if (m_has_wipe)
    {
        m_wipe->toXmlElem("p:wipe", "", _outStream);
    }


    if (m_has_zoom)
    {
        m_zoom->toXmlElem("p:zoom", "", _outStream);
    }


    if (m_has_sndAc)
    {
        m_sndAc->toXmlElem("p:sndAc", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideTransition& CT_SlideTransition::default_instance()
{
    if (!CT_SlideTransition::default_instance_)
    {
        CT_SlideTransition::default_instance_ = new CT_SlideTransition();
    }
    return *CT_SlideTransition::default_instance_;
}

bool CT_SlideTransition::has_spd_attr() const
{
    return m_has_spd_attr;
}

void CT_SlideTransition::set_spd_attr(const ST_TransitionSpeed& _spd_attr)
{
    m_has_spd_attr = true;
    m_spd_attr = new ST_TransitionSpeed(_spd_attr);
}

const ST_TransitionSpeed& CT_SlideTransition::get_spd_attr() const
{
    if (m_spd_attr)
    {
        return *m_spd_attr;
    }
    return ST_TransitionSpeed::default_instance();
}

bool CT_SlideTransition::has_advClick_attr() const
{
    return m_has_advClick_attr;
}

void CT_SlideTransition::set_advClick_attr(const XSD::boolean_& _advClick_attr)
{
    m_has_advClick_attr = true;
    m_advClick_attr = _advClick_attr;
}

const XSD::boolean_& CT_SlideTransition::get_advClick_attr() const
{
    return m_advClick_attr;
}

bool CT_SlideTransition::has_advTm_attr() const
{
    return m_has_advTm_attr;
}

void CT_SlideTransition::set_advTm_attr(const XSD::unsignedInt_& _advTm_attr)
{
    m_has_advTm_attr = true;
    m_advTm_attr = _advTm_attr;
}

const XSD::unsignedInt_& CT_SlideTransition::get_advTm_attr() const
{
    return m_advTm_attr;
}

CT_SlideTransition* CT_SlideTransition::default_instance_ = NULL;

// CT_TLIterateIntervalTime
CT_TLIterateIntervalTime::CT_TLIterateIntervalTime()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TLIterateIntervalTime::~CT_TLIterateIntervalTime()
{
    clear();
}
void CT_TLIterateIntervalTime::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TLIterateIntervalTime::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLIterateIntervalTime& CT_TLIterateIntervalTime::default_instance()
{
    if (!CT_TLIterateIntervalTime::default_instance_)
    {
        CT_TLIterateIntervalTime::default_instance_ = new CT_TLIterateIntervalTime();
    }
    return *CT_TLIterateIntervalTime::default_instance_;
}

bool CT_TLIterateIntervalTime::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TLIterateIntervalTime::set_val_attr(const ST_TLTime& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_TLTime(_val_attr);
}

const ST_TLTime& CT_TLIterateIntervalTime::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TLTime::default_instance();
}

CT_TLIterateIntervalTime* CT_TLIterateIntervalTime::default_instance_ = NULL;

// CT_TLIterateIntervalPercentage
CT_TLIterateIntervalPercentage::CT_TLIterateIntervalPercentage()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TLIterateIntervalPercentage::~CT_TLIterateIntervalPercentage()
{
    clear();
}
void CT_TLIterateIntervalPercentage::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TLIterateIntervalPercentage::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLIterateIntervalPercentage& CT_TLIterateIntervalPercentage::default_instance()
{
    if (!CT_TLIterateIntervalPercentage::default_instance_)
    {
        CT_TLIterateIntervalPercentage::default_instance_ = new CT_TLIterateIntervalPercentage();
    }
    return *CT_TLIterateIntervalPercentage::default_instance_;
}

bool CT_TLIterateIntervalPercentage::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TLIterateIntervalPercentage::set_val_attr(const ns_a::ST_PositivePercentage& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ns_a::ST_PositivePercentage(_val_attr);
}

const ns_a::ST_PositivePercentage& CT_TLIterateIntervalPercentage::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ns_a::ST_PositivePercentage::default_instance();
}

CT_TLIterateIntervalPercentage* CT_TLIterateIntervalPercentage::default_instance_ = NULL;

// CT_TLIterateData
CT_TLIterateData::CT_TLIterateData()
    :m_has_tmAbs(false),
     m_tmAbs(NULL),
     m_has_tmPct(false),
     m_tmPct(NULL),
     m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_backwards_attr(false),
     m_backwards_attr(false)
{
}
CT_TLIterateData::~CT_TLIterateData()
{
    clear();
}
bool CT_TLIterateData::has_tmAbs() const
{
    return m_has_tmAbs;
}

CT_TLIterateIntervalTime* CT_TLIterateData::mutable_tmAbs()
{

    m_has_tmPct = false;

    if (m_tmPct)
    {
        delete m_tmPct;
        m_tmPct = NULL;
    }
    ;

    m_has_tmAbs = true;
    if (!m_tmAbs)
    {
        m_tmAbs = new CT_TLIterateIntervalTime();
    }
    return m_tmAbs;
}

const CT_TLIterateIntervalTime& CT_TLIterateData::get_tmAbs() const
{
    if (m_tmAbs)
    {
        return *m_tmAbs;
    }
    return CT_TLIterateIntervalTime::default_instance();
}

bool CT_TLIterateData::has_tmPct() const
{
    return m_has_tmPct;
}

CT_TLIterateIntervalPercentage* CT_TLIterateData::mutable_tmPct()
{

    m_has_tmAbs = false;

    if (m_tmAbs)
    {
        delete m_tmAbs;
        m_tmAbs = NULL;
    }
    ;

    m_has_tmPct = true;
    if (!m_tmPct)
    {
        m_tmPct = new CT_TLIterateIntervalPercentage();
    }
    return m_tmPct;
}

const CT_TLIterateIntervalPercentage& CT_TLIterateData::get_tmPct() const
{
    if (m_tmPct)
    {
        return *m_tmPct;
    }
    return CT_TLIterateIntervalPercentage::default_instance();
}

void CT_TLIterateData::clear()
{
    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_backwards_attr = false;
    m_backwards_attr = false;

    m_has_tmAbs = false;

    if (m_tmAbs)
    {
        delete m_tmAbs;
        m_tmAbs = NULL;
    }


    m_has_tmPct = false;

    if (m_tmPct)
    {
        delete m_tmPct;
        m_tmPct = NULL;
    }

}

void CT_TLIterateData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_backwards_attr)
    {
        _outStream << " " << "backwards" << "=\"" << XSD::XMLBooleanStr(m_backwards_attr) << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_tmAbs, m_has_tmPct};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_tmAbs)
    {
        m_tmAbs->toXmlElem("p:tmAbs", "", _outStream);
    }


    if (m_has_tmPct)
    {
        m_tmPct->toXmlElem("p:tmPct", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLIterateData& CT_TLIterateData::default_instance()
{
    if (!CT_TLIterateData::default_instance_)
    {
        CT_TLIterateData::default_instance_ = new CT_TLIterateData();
    }
    return *CT_TLIterateData::default_instance_;
}

bool CT_TLIterateData::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_TLIterateData::set_type_attr(const ST_IterateType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_IterateType(_type_attr);
}

const ST_IterateType& CT_TLIterateData::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_IterateType::default_instance();
}

bool CT_TLIterateData::has_backwards_attr() const
{
    return m_has_backwards_attr;
}

void CT_TLIterateData::set_backwards_attr(const XSD::boolean_& _backwards_attr)
{
    m_has_backwards_attr = true;
    m_backwards_attr = _backwards_attr;
}

const XSD::boolean_& CT_TLIterateData::get_backwards_attr() const
{
    return m_backwards_attr;
}

CT_TLIterateData* CT_TLIterateData::default_instance_ = NULL;

// CT_TLSubShapeId
CT_TLSubShapeId::CT_TLSubShapeId()
    :m_has_spid_attr(false),
     m_spid_attr(NULL)
{
}
CT_TLSubShapeId::~CT_TLSubShapeId()
{
    clear();
}
void CT_TLSubShapeId::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }

}

void CT_TLSubShapeId::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_spid_attr);
    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLSubShapeId& CT_TLSubShapeId::default_instance()
{
    if (!CT_TLSubShapeId::default_instance_)
    {
        CT_TLSubShapeId::default_instance_ = new CT_TLSubShapeId();
    }
    return *CT_TLSubShapeId::default_instance_;
}

bool CT_TLSubShapeId::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_TLSubShapeId::set_spid_attr(const ns_a::ST_ShapeID& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_ShapeID(_spid_attr);
}

const ns_a::ST_ShapeID& CT_TLSubShapeId::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_ShapeID::default_instance();
}

CT_TLSubShapeId* CT_TLSubShapeId::default_instance_ = NULL;

// CT_TLTextTargetElement
CT_TLTextTargetElement::CT_TLTextTargetElement()
    :m_has_charRg(false),
     m_charRg(NULL),
     m_has_pRg(false),
     m_pRg(NULL)
{
}
CT_TLTextTargetElement::~CT_TLTextTargetElement()
{
    clear();
}
bool CT_TLTextTargetElement::has_charRg() const
{
    return m_has_charRg;
}

CT_IndexRange* CT_TLTextTargetElement::mutable_charRg()
{

    m_has_pRg = false;

    if (m_pRg)
    {
        delete m_pRg;
        m_pRg = NULL;
    }
    ;

    m_has_charRg = true;
    if (!m_charRg)
    {
        m_charRg = new CT_IndexRange();
    }
    return m_charRg;
}

const CT_IndexRange& CT_TLTextTargetElement::get_charRg() const
{
    if (m_charRg)
    {
        return *m_charRg;
    }
    return CT_IndexRange::default_instance();
}

bool CT_TLTextTargetElement::has_pRg() const
{
    return m_has_pRg;
}

CT_IndexRange* CT_TLTextTargetElement::mutable_pRg()
{

    m_has_charRg = false;

    if (m_charRg)
    {
        delete m_charRg;
        m_charRg = NULL;
    }
    ;

    m_has_pRg = true;
    if (!m_pRg)
    {
        m_pRg = new CT_IndexRange();
    }
    return m_pRg;
}

const CT_IndexRange& CT_TLTextTargetElement::get_pRg() const
{
    if (m_pRg)
    {
        return *m_pRg;
    }
    return CT_IndexRange::default_instance();
}

void CT_TLTextTargetElement::clear()
{
    m_has_charRg = false;

    if (m_charRg)
    {
        delete m_charRg;
        m_charRg = NULL;
    }


    m_has_pRg = false;

    if (m_pRg)
    {
        delete m_pRg;
        m_pRg = NULL;
    }

}

void CT_TLTextTargetElement::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_charRg, m_has_pRg};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_charRg)
    {
        m_charRg->toXmlElem("p:charRg", "", _outStream);
    }


    if (m_has_pRg)
    {
        m_pRg->toXmlElem("p:pRg", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTextTargetElement& CT_TLTextTargetElement::default_instance()
{
    if (!CT_TLTextTargetElement::default_instance_)
    {
        CT_TLTextTargetElement::default_instance_ = new CT_TLTextTargetElement();
    }
    return *CT_TLTextTargetElement::default_instance_;
}

CT_TLTextTargetElement* CT_TLTextTargetElement::default_instance_ = NULL;

// CT_TLOleChartTargetElement
CT_TLOleChartTargetElement::CT_TLOleChartTargetElement()
    :m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_lvl_attr(false),
     m_lvl_attr(0)
{
}
CT_TLOleChartTargetElement::~CT_TLOleChartTargetElement()
{
    clear();
}
void CT_TLOleChartTargetElement::clear()
{
    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_lvl_attr = false;
    m_lvl_attr = 0;
}

void CT_TLOleChartTargetElement::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_type_attr);
    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_lvl_attr)
    {
        _outStream << " " << "lvl" << "=\"" << m_lvl_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLOleChartTargetElement& CT_TLOleChartTargetElement::default_instance()
{
    if (!CT_TLOleChartTargetElement::default_instance_)
    {
        CT_TLOleChartTargetElement::default_instance_ = new CT_TLOleChartTargetElement();
    }
    return *CT_TLOleChartTargetElement::default_instance_;
}

bool CT_TLOleChartTargetElement::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_TLOleChartTargetElement::set_type_attr(const ST_TLChartSubelementType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_TLChartSubelementType(_type_attr);
}

const ST_TLChartSubelementType& CT_TLOleChartTargetElement::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_TLChartSubelementType::default_instance();
}

bool CT_TLOleChartTargetElement::has_lvl_attr() const
{
    return m_has_lvl_attr;
}

void CT_TLOleChartTargetElement::set_lvl_attr(const XSD::unsignedInt_& _lvl_attr)
{
    m_has_lvl_attr = true;
    m_lvl_attr = _lvl_attr;
}

const XSD::unsignedInt_& CT_TLOleChartTargetElement::get_lvl_attr() const
{
    return m_lvl_attr;
}

CT_TLOleChartTargetElement* CT_TLOleChartTargetElement::default_instance_ = NULL;

// CT_TLShapeTargetElement
CT_TLShapeTargetElement::CT_TLShapeTargetElement()
    :m_has_bg(false),
     m_bg(NULL),
     m_has_subSp(false),
     m_subSp(NULL),
     m_has_oleChartEl(false),
     m_oleChartEl(NULL),
     m_has_txEl(false),
     m_txEl(NULL),
     m_has_graphicEl(false),
     m_graphicEl(NULL),
     m_has_spid_attr(false),
     m_spid_attr(NULL)
{
}
CT_TLShapeTargetElement::~CT_TLShapeTargetElement()
{
    clear();
}
bool CT_TLShapeTargetElement::has_bg() const
{
    return m_has_bg;
}

CT_Empty* CT_TLShapeTargetElement::mutable_bg()
{

    m_has_subSp = false;

    if (m_subSp)
    {
        delete m_subSp;
        m_subSp = NULL;
    }
    ;

    m_has_oleChartEl = false;

    if (m_oleChartEl)
    {
        delete m_oleChartEl;
        m_oleChartEl = NULL;
    }
    ;

    m_has_txEl = false;

    if (m_txEl)
    {
        delete m_txEl;
        m_txEl = NULL;
    }
    ;

    m_has_graphicEl = false;

    if (m_graphicEl)
    {
        delete m_graphicEl;
        m_graphicEl = NULL;
    }
    ;

    m_has_bg = true;
    if (!m_bg)
    {
        m_bg = new CT_Empty();
    }
    return m_bg;
}

const CT_Empty& CT_TLShapeTargetElement::get_bg() const
{
    if (m_bg)
    {
        return *m_bg;
    }
    return CT_Empty::default_instance();
}

bool CT_TLShapeTargetElement::has_subSp() const
{
    return m_has_subSp;
}

CT_TLSubShapeId* CT_TLShapeTargetElement::mutable_subSp()
{

    m_has_bg = false;

    if (m_bg)
    {
        delete m_bg;
        m_bg = NULL;
    }
    ;

    m_has_oleChartEl = false;

    if (m_oleChartEl)
    {
        delete m_oleChartEl;
        m_oleChartEl = NULL;
    }
    ;

    m_has_txEl = false;

    if (m_txEl)
    {
        delete m_txEl;
        m_txEl = NULL;
    }
    ;

    m_has_graphicEl = false;

    if (m_graphicEl)
    {
        delete m_graphicEl;
        m_graphicEl = NULL;
    }
    ;

    m_has_subSp = true;
    if (!m_subSp)
    {
        m_subSp = new CT_TLSubShapeId();
    }
    return m_subSp;
}

const CT_TLSubShapeId& CT_TLShapeTargetElement::get_subSp() const
{
    if (m_subSp)
    {
        return *m_subSp;
    }
    return CT_TLSubShapeId::default_instance();
}

bool CT_TLShapeTargetElement::has_oleChartEl() const
{
    return m_has_oleChartEl;
}

CT_TLOleChartTargetElement* CT_TLShapeTargetElement::mutable_oleChartEl()
{

    m_has_bg = false;

    if (m_bg)
    {
        delete m_bg;
        m_bg = NULL;
    }
    ;

    m_has_subSp = false;

    if (m_subSp)
    {
        delete m_subSp;
        m_subSp = NULL;
    }
    ;

    m_has_txEl = false;

    if (m_txEl)
    {
        delete m_txEl;
        m_txEl = NULL;
    }
    ;

    m_has_graphicEl = false;

    if (m_graphicEl)
    {
        delete m_graphicEl;
        m_graphicEl = NULL;
    }
    ;

    m_has_oleChartEl = true;
    if (!m_oleChartEl)
    {
        m_oleChartEl = new CT_TLOleChartTargetElement();
    }
    return m_oleChartEl;
}

const CT_TLOleChartTargetElement& CT_TLShapeTargetElement::get_oleChartEl() const
{
    if (m_oleChartEl)
    {
        return *m_oleChartEl;
    }
    return CT_TLOleChartTargetElement::default_instance();
}

bool CT_TLShapeTargetElement::has_txEl() const
{
    return m_has_txEl;
}

CT_TLTextTargetElement* CT_TLShapeTargetElement::mutable_txEl()
{

    m_has_bg = false;

    if (m_bg)
    {
        delete m_bg;
        m_bg = NULL;
    }
    ;

    m_has_subSp = false;

    if (m_subSp)
    {
        delete m_subSp;
        m_subSp = NULL;
    }
    ;

    m_has_oleChartEl = false;

    if (m_oleChartEl)
    {
        delete m_oleChartEl;
        m_oleChartEl = NULL;
    }
    ;

    m_has_graphicEl = false;

    if (m_graphicEl)
    {
        delete m_graphicEl;
        m_graphicEl = NULL;
    }
    ;

    m_has_txEl = true;
    if (!m_txEl)
    {
        m_txEl = new CT_TLTextTargetElement();
    }
    return m_txEl;
}

const CT_TLTextTargetElement& CT_TLShapeTargetElement::get_txEl() const
{
    if (m_txEl)
    {
        return *m_txEl;
    }
    return CT_TLTextTargetElement::default_instance();
}

bool CT_TLShapeTargetElement::has_graphicEl() const
{
    return m_has_graphicEl;
}

ns_a::CT_AnimationElementChoice* CT_TLShapeTargetElement::mutable_graphicEl()
{

    m_has_bg = false;

    if (m_bg)
    {
        delete m_bg;
        m_bg = NULL;
    }
    ;

    m_has_subSp = false;

    if (m_subSp)
    {
        delete m_subSp;
        m_subSp = NULL;
    }
    ;

    m_has_oleChartEl = false;

    if (m_oleChartEl)
    {
        delete m_oleChartEl;
        m_oleChartEl = NULL;
    }
    ;

    m_has_txEl = false;

    if (m_txEl)
    {
        delete m_txEl;
        m_txEl = NULL;
    }
    ;

    m_has_graphicEl = true;
    if (!m_graphicEl)
    {
        m_graphicEl = new ns_a::CT_AnimationElementChoice();
    }
    return m_graphicEl;
}

const ns_a::CT_AnimationElementChoice& CT_TLShapeTargetElement::get_graphicEl() const
{
    if (m_graphicEl)
    {
        return *m_graphicEl;
    }
    return ns_a::CT_AnimationElementChoice::default_instance();
}

void CT_TLShapeTargetElement::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_bg = false;

    if (m_bg)
    {
        delete m_bg;
        m_bg = NULL;
    }


    m_has_subSp = false;

    if (m_subSp)
    {
        delete m_subSp;
        m_subSp = NULL;
    }


    m_has_oleChartEl = false;

    if (m_oleChartEl)
    {
        delete m_oleChartEl;
        m_oleChartEl = NULL;
    }


    m_has_txEl = false;

    if (m_txEl)
    {
        delete m_txEl;
        m_txEl = NULL;
    }


    m_has_graphicEl = false;

    if (m_graphicEl)
    {
        delete m_graphicEl;
        m_graphicEl = NULL;
    }

}

void CT_TLShapeTargetElement::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_spid_attr);
    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }

    _outStream << ">";

    {
        bool elemHasValueList[5] = {m_has_bg, m_has_subSp, m_has_oleChartEl, m_has_txEl, m_has_graphicEl};
        int cnt = count(elemHasValueList, elemHasValueList + 5, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_bg)
    {
        m_bg->toXmlElem("p:bg", "", _outStream);
    }


    if (m_has_subSp)
    {
        m_subSp->toXmlElem("p:subSp", "", _outStream);
    }


    if (m_has_oleChartEl)
    {
        m_oleChartEl->toXmlElem("p:oleChartEl", "", _outStream);
    }


    if (m_has_txEl)
    {
        m_txEl->toXmlElem("p:txEl", "", _outStream);
    }


    if (m_has_graphicEl)
    {
        m_graphicEl->toXmlElem("p:graphicEl", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLShapeTargetElement& CT_TLShapeTargetElement::default_instance()
{
    if (!CT_TLShapeTargetElement::default_instance_)
    {
        CT_TLShapeTargetElement::default_instance_ = new CT_TLShapeTargetElement();
    }
    return *CT_TLShapeTargetElement::default_instance_;
}

bool CT_TLShapeTargetElement::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_TLShapeTargetElement::set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
}

const ns_a::ST_DrawingElementId& CT_TLShapeTargetElement::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

CT_TLShapeTargetElement* CT_TLShapeTargetElement::default_instance_ = NULL;

// CT_TLTimeTargetElement
CT_TLTimeTargetElement::CT_TLTimeTargetElement()
    :m_has_sldTgt(false),
     m_sldTgt(NULL),
     m_has_sndTgt(false),
     m_sndTgt(NULL),
     m_has_spTgt(false),
     m_spTgt(NULL),
     m_has_inkTgt(false),
     m_inkTgt(NULL)
{
}
CT_TLTimeTargetElement::~CT_TLTimeTargetElement()
{
    clear();
}
bool CT_TLTimeTargetElement::has_sldTgt() const
{
    return m_has_sldTgt;
}

CT_Empty* CT_TLTimeTargetElement::mutable_sldTgt()
{

    m_has_sndTgt = false;

    if (m_sndTgt)
    {
        delete m_sndTgt;
        m_sndTgt = NULL;
    }
    ;

    m_has_spTgt = false;

    if (m_spTgt)
    {
        delete m_spTgt;
        m_spTgt = NULL;
    }
    ;

    m_has_inkTgt = false;

    if (m_inkTgt)
    {
        delete m_inkTgt;
        m_inkTgt = NULL;
    }
    ;

    m_has_sldTgt = true;
    if (!m_sldTgt)
    {
        m_sldTgt = new CT_Empty();
    }
    return m_sldTgt;
}

const CT_Empty& CT_TLTimeTargetElement::get_sldTgt() const
{
    if (m_sldTgt)
    {
        return *m_sldTgt;
    }
    return CT_Empty::default_instance();
}

bool CT_TLTimeTargetElement::has_sndTgt() const
{
    return m_has_sndTgt;
}

ns_a::CT_EmbeddedWAVAudioFile* CT_TLTimeTargetElement::mutable_sndTgt()
{

    m_has_sldTgt = false;

    if (m_sldTgt)
    {
        delete m_sldTgt;
        m_sldTgt = NULL;
    }
    ;

    m_has_spTgt = false;

    if (m_spTgt)
    {
        delete m_spTgt;
        m_spTgt = NULL;
    }
    ;

    m_has_inkTgt = false;

    if (m_inkTgt)
    {
        delete m_inkTgt;
        m_inkTgt = NULL;
    }
    ;

    m_has_sndTgt = true;
    if (!m_sndTgt)
    {
        m_sndTgt = new ns_a::CT_EmbeddedWAVAudioFile();
    }
    return m_sndTgt;
}

const ns_a::CT_EmbeddedWAVAudioFile& CT_TLTimeTargetElement::get_sndTgt() const
{
    if (m_sndTgt)
    {
        return *m_sndTgt;
    }
    return ns_a::CT_EmbeddedWAVAudioFile::default_instance();
}

bool CT_TLTimeTargetElement::has_spTgt() const
{
    return m_has_spTgt;
}

CT_TLShapeTargetElement* CT_TLTimeTargetElement::mutable_spTgt()
{

    m_has_sldTgt = false;

    if (m_sldTgt)
    {
        delete m_sldTgt;
        m_sldTgt = NULL;
    }
    ;

    m_has_sndTgt = false;

    if (m_sndTgt)
    {
        delete m_sndTgt;
        m_sndTgt = NULL;
    }
    ;

    m_has_inkTgt = false;

    if (m_inkTgt)
    {
        delete m_inkTgt;
        m_inkTgt = NULL;
    }
    ;

    m_has_spTgt = true;
    if (!m_spTgt)
    {
        m_spTgt = new CT_TLShapeTargetElement();
    }
    return m_spTgt;
}

const CT_TLShapeTargetElement& CT_TLTimeTargetElement::get_spTgt() const
{
    if (m_spTgt)
    {
        return *m_spTgt;
    }
    return CT_TLShapeTargetElement::default_instance();
}

bool CT_TLTimeTargetElement::has_inkTgt() const
{
    return m_has_inkTgt;
}

CT_TLSubShapeId* CT_TLTimeTargetElement::mutable_inkTgt()
{

    m_has_sldTgt = false;

    if (m_sldTgt)
    {
        delete m_sldTgt;
        m_sldTgt = NULL;
    }
    ;

    m_has_sndTgt = false;

    if (m_sndTgt)
    {
        delete m_sndTgt;
        m_sndTgt = NULL;
    }
    ;

    m_has_spTgt = false;

    if (m_spTgt)
    {
        delete m_spTgt;
        m_spTgt = NULL;
    }
    ;

    m_has_inkTgt = true;
    if (!m_inkTgt)
    {
        m_inkTgt = new CT_TLSubShapeId();
    }
    return m_inkTgt;
}

const CT_TLSubShapeId& CT_TLTimeTargetElement::get_inkTgt() const
{
    if (m_inkTgt)
    {
        return *m_inkTgt;
    }
    return CT_TLSubShapeId::default_instance();
}

void CT_TLTimeTargetElement::clear()
{
    m_has_sldTgt = false;

    if (m_sldTgt)
    {
        delete m_sldTgt;
        m_sldTgt = NULL;
    }


    m_has_sndTgt = false;

    if (m_sndTgt)
    {
        delete m_sndTgt;
        m_sndTgt = NULL;
    }


    m_has_spTgt = false;

    if (m_spTgt)
    {
        delete m_spTgt;
        m_spTgt = NULL;
    }


    m_has_inkTgt = false;

    if (m_inkTgt)
    {
        delete m_inkTgt;
        m_inkTgt = NULL;
    }

}

void CT_TLTimeTargetElement::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[4] = {m_has_sldTgt, m_has_sndTgt, m_has_spTgt, m_has_inkTgt};
        int cnt = count(elemHasValueList, elemHasValueList + 4, true);
        assert(cnt == 1);
    }


    if (m_has_sldTgt)
    {
        m_sldTgt->toXmlElem("p:sldTgt", "", _outStream);
    }


    if (m_has_sndTgt)
    {
        m_sndTgt->toXmlElem("p:sndTgt", "", _outStream);
    }


    if (m_has_spTgt)
    {
        m_spTgt->toXmlElem("p:spTgt", "", _outStream);
    }


    if (m_has_inkTgt)
    {
        m_inkTgt->toXmlElem("p:inkTgt", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTimeTargetElement& CT_TLTimeTargetElement::default_instance()
{
    if (!CT_TLTimeTargetElement::default_instance_)
    {
        CT_TLTimeTargetElement::default_instance_ = new CT_TLTimeTargetElement();
    }
    return *CT_TLTimeTargetElement::default_instance_;
}

CT_TLTimeTargetElement* CT_TLTimeTargetElement::default_instance_ = NULL;

// CT_TLTriggerTimeNodeID
CT_TLTriggerTimeNodeID::CT_TLTriggerTimeNodeID()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TLTriggerTimeNodeID::~CT_TLTriggerTimeNodeID()
{
    clear();
}
void CT_TLTriggerTimeNodeID::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TLTriggerTimeNodeID::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLTriggerTimeNodeID& CT_TLTriggerTimeNodeID::default_instance()
{
    if (!CT_TLTriggerTimeNodeID::default_instance_)
    {
        CT_TLTriggerTimeNodeID::default_instance_ = new CT_TLTriggerTimeNodeID();
    }
    return *CT_TLTriggerTimeNodeID::default_instance_;
}

bool CT_TLTriggerTimeNodeID::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TLTriggerTimeNodeID::set_val_attr(const ST_TLTimeNodeID& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_TLTimeNodeID(_val_attr);
}

const ST_TLTimeNodeID& CT_TLTriggerTimeNodeID::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TLTimeNodeID::default_instance();
}

CT_TLTriggerTimeNodeID* CT_TLTriggerTimeNodeID::default_instance_ = NULL;

// CT_TLTriggerRuntimeNode
CT_TLTriggerRuntimeNode::CT_TLTriggerRuntimeNode()
    :m_has_val_attr(false),
     m_val_attr(NULL)
{
}
CT_TLTriggerRuntimeNode::~CT_TLTriggerRuntimeNode()
{
    clear();
}
void CT_TLTriggerRuntimeNode::clear()
{
    m_has_val_attr = false;

    if (m_val_attr)
    {
        delete m_val_attr;
        m_val_attr = NULL;
    }

}

void CT_TLTriggerRuntimeNode::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        m_val_attr->toXmlAttr("val", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLTriggerRuntimeNode& CT_TLTriggerRuntimeNode::default_instance()
{
    if (!CT_TLTriggerRuntimeNode::default_instance_)
    {
        CT_TLTriggerRuntimeNode::default_instance_ = new CT_TLTriggerRuntimeNode();
    }
    return *CT_TLTriggerRuntimeNode::default_instance_;
}

bool CT_TLTriggerRuntimeNode::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TLTriggerRuntimeNode::set_val_attr(const ST_TLTriggerRuntimeNode& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = new ST_TLTriggerRuntimeNode(_val_attr);
}

const ST_TLTriggerRuntimeNode& CT_TLTriggerRuntimeNode::get_val_attr() const
{
    if (m_val_attr)
    {
        return *m_val_attr;
    }
    return ST_TLTriggerRuntimeNode::default_instance();
}

CT_TLTriggerRuntimeNode* CT_TLTriggerRuntimeNode::default_instance_ = NULL;

// CT_TLTimeCondition
CT_TLTimeCondition::CT_TLTimeCondition()
    :m_has_tgtEl(false),
     m_tgtEl(NULL),
     m_has_tn(false),
     m_tn(NULL),
     m_has_rtn(false),
     m_rtn(NULL),
     m_has_evt_attr(false),
     m_evt_attr(NULL),
     m_has_delay_attr(false),
     m_delay_attr(NULL)
{
}
CT_TLTimeCondition::~CT_TLTimeCondition()
{
    clear();
}
bool CT_TLTimeCondition::has_tgtEl() const
{
    return m_has_tgtEl;
}

CT_TLTimeTargetElement* CT_TLTimeCondition::mutable_tgtEl()
{

    m_has_tn = false;

    if (m_tn)
    {
        delete m_tn;
        m_tn = NULL;
    }
    ;

    m_has_rtn = false;

    if (m_rtn)
    {
        delete m_rtn;
        m_rtn = NULL;
    }
    ;

    m_has_tgtEl = true;
    if (!m_tgtEl)
    {
        m_tgtEl = new CT_TLTimeTargetElement();
    }
    return m_tgtEl;
}

const CT_TLTimeTargetElement& CT_TLTimeCondition::get_tgtEl() const
{
    if (m_tgtEl)
    {
        return *m_tgtEl;
    }
    return CT_TLTimeTargetElement::default_instance();
}

bool CT_TLTimeCondition::has_tn() const
{
    return m_has_tn;
}

CT_TLTriggerTimeNodeID* CT_TLTimeCondition::mutable_tn()
{

    m_has_tgtEl = false;

    if (m_tgtEl)
    {
        delete m_tgtEl;
        m_tgtEl = NULL;
    }
    ;

    m_has_rtn = false;

    if (m_rtn)
    {
        delete m_rtn;
        m_rtn = NULL;
    }
    ;

    m_has_tn = true;
    if (!m_tn)
    {
        m_tn = new CT_TLTriggerTimeNodeID();
    }
    return m_tn;
}

const CT_TLTriggerTimeNodeID& CT_TLTimeCondition::get_tn() const
{
    if (m_tn)
    {
        return *m_tn;
    }
    return CT_TLTriggerTimeNodeID::default_instance();
}

bool CT_TLTimeCondition::has_rtn() const
{
    return m_has_rtn;
}

CT_TLTriggerRuntimeNode* CT_TLTimeCondition::mutable_rtn()
{

    m_has_tgtEl = false;

    if (m_tgtEl)
    {
        delete m_tgtEl;
        m_tgtEl = NULL;
    }
    ;

    m_has_tn = false;

    if (m_tn)
    {
        delete m_tn;
        m_tn = NULL;
    }
    ;

    m_has_rtn = true;
    if (!m_rtn)
    {
        m_rtn = new CT_TLTriggerRuntimeNode();
    }
    return m_rtn;
}

const CT_TLTriggerRuntimeNode& CT_TLTimeCondition::get_rtn() const
{
    if (m_rtn)
    {
        return *m_rtn;
    }
    return CT_TLTriggerRuntimeNode::default_instance();
}

void CT_TLTimeCondition::clear()
{
    m_has_evt_attr = false;

    if (m_evt_attr)
    {
        delete m_evt_attr;
        m_evt_attr = NULL;
    }


    m_has_delay_attr = false;

    if (m_delay_attr)
    {
        delete m_delay_attr;
        m_delay_attr = NULL;
    }


    m_has_tgtEl = false;

    if (m_tgtEl)
    {
        delete m_tgtEl;
        m_tgtEl = NULL;
    }


    m_has_tn = false;

    if (m_tn)
    {
        delete m_tn;
        m_tn = NULL;
    }


    m_has_rtn = false;

    if (m_rtn)
    {
        delete m_rtn;
        m_rtn = NULL;
    }

}

void CT_TLTimeCondition::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_evt_attr)
    {
        m_evt_attr->toXmlAttr("evt", _outStream);
    }



    if (m_has_delay_attr)
    {
        m_delay_attr->toXmlAttr("delay", _outStream);
    }

    _outStream << ">";

    {
        bool elemHasValueList[3] = {m_has_tgtEl, m_has_tn, m_has_rtn};
        int cnt = count(elemHasValueList, elemHasValueList + 3, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_tgtEl)
    {
        m_tgtEl->toXmlElem("p:tgtEl", "", _outStream);
    }


    if (m_has_tn)
    {
        m_tn->toXmlElem("p:tn", "", _outStream);
    }


    if (m_has_rtn)
    {
        m_rtn->toXmlElem("p:rtn", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTimeCondition& CT_TLTimeCondition::default_instance()
{
    if (!CT_TLTimeCondition::default_instance_)
    {
        CT_TLTimeCondition::default_instance_ = new CT_TLTimeCondition();
    }
    return *CT_TLTimeCondition::default_instance_;
}

bool CT_TLTimeCondition::has_evt_attr() const
{
    return m_has_evt_attr;
}

void CT_TLTimeCondition::set_evt_attr(const ST_TLTriggerEvent& _evt_attr)
{
    m_has_evt_attr = true;
    m_evt_attr = new ST_TLTriggerEvent(_evt_attr);
}

const ST_TLTriggerEvent& CT_TLTimeCondition::get_evt_attr() const
{
    if (m_evt_attr)
    {
        return *m_evt_attr;
    }
    return ST_TLTriggerEvent::default_instance();
}

bool CT_TLTimeCondition::has_delay_attr() const
{
    return m_has_delay_attr;
}

void CT_TLTimeCondition::set_delay_attr(const ST_TLTime& _delay_attr)
{
    m_has_delay_attr = true;
    m_delay_attr = new ST_TLTime(_delay_attr);
}

const ST_TLTime& CT_TLTimeCondition::get_delay_attr() const
{
    if (m_delay_attr)
    {
        return *m_delay_attr;
    }
    return ST_TLTime::default_instance();
}

CT_TLTimeCondition* CT_TLTimeCondition::default_instance_ = NULL;

// CT_TLTimeConditionList
CT_TLTimeConditionList::CT_TLTimeConditionList()

{
}
CT_TLTimeConditionList::~CT_TLTimeConditionList()
{
    clear();
}
CT_TLTimeCondition* CT_TLTimeConditionList::add_cond()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLTimeCondition* pNewChild = pChildGroup->mutable_cond();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_TLTimeConditionList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_TLTimeConditionList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_cond));
        assert(1 <= elemCnt);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_cond())
            {
                (*iter)->get_cond().toXmlElem("p:cond", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTimeConditionList& CT_TLTimeConditionList::default_instance()
{
    if (!CT_TLTimeConditionList::default_instance_)
    {
        CT_TLTimeConditionList::default_instance_ = new CT_TLTimeConditionList();
    }
    return *CT_TLTimeConditionList::default_instance_;
}


// CT_TLTimeConditionList::ChildGroup_1
CT_TLTimeConditionList::ChildGroup_1::ChildGroup_1()
    :m_has_cond(false),
     m_cond(NULL)
{
}
bool CT_TLTimeConditionList::ChildGroup_1::has_cond() const
{
    return m_has_cond;
}

CT_TLTimeCondition* CT_TLTimeConditionList::ChildGroup_1::mutable_cond()
{

    m_has_cond = true;
    if (!m_cond)
    {
        m_cond = new CT_TLTimeCondition();
    }
    return m_cond;
}

const CT_TLTimeCondition& CT_TLTimeConditionList::ChildGroup_1::get_cond() const
{
    if (m_cond)
    {
        return *m_cond;
    }
    return CT_TLTimeCondition::default_instance();
}

CT_TLTimeConditionList* CT_TLTimeConditionList::default_instance_ = NULL;

// CT_TimeNodeList
CT_TimeNodeList::CT_TimeNodeList()

{
}
CT_TimeNodeList::~CT_TimeNodeList()
{
    clear();
}
CT_TLTimeNodeParallel* CT_TimeNodeList::add_par()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLTimeNodeParallel* pNewChild = pChildGroup->mutable_par();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLTimeNodeSequence* CT_TimeNodeList::add_seq()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLTimeNodeSequence* pNewChild = pChildGroup->mutable_seq();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLTimeNodeExclusive* CT_TimeNodeList::add_excl()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLTimeNodeExclusive* pNewChild = pChildGroup->mutable_excl();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLAnimateBehavior* CT_TimeNodeList::add_anim()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLAnimateBehavior* pNewChild = pChildGroup->mutable_anim();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLAnimateColorBehavior* CT_TimeNodeList::add_animClr()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLAnimateColorBehavior* pNewChild = pChildGroup->mutable_animClr();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLAnimateEffectBehavior* CT_TimeNodeList::add_animEffect()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLAnimateEffectBehavior* pNewChild = pChildGroup->mutable_animEffect();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLAnimateMotionBehavior* CT_TimeNodeList::add_animMotion()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLAnimateMotionBehavior* pNewChild = pChildGroup->mutable_animMotion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLAnimateRotationBehavior* CT_TimeNodeList::add_animRot()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLAnimateRotationBehavior* pNewChild = pChildGroup->mutable_animRot();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLAnimateScaleBehavior* CT_TimeNodeList::add_animScale()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLAnimateScaleBehavior* pNewChild = pChildGroup->mutable_animScale();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLCommandBehavior* CT_TimeNodeList::add_cmd()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLCommandBehavior* pNewChild = pChildGroup->mutable_cmd();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLSetBehavior* CT_TimeNodeList::add_set()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLSetBehavior* pNewChild = pChildGroup->mutable_set();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLMediaNodeAudio* CT_TimeNodeList::add_audio()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLMediaNodeAudio* pNewChild = pChildGroup->mutable_audio();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLMediaNodeVideo* CT_TimeNodeList::add_video()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLMediaNodeVideo* pNewChild = pChildGroup->mutable_video();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_TimeNodeList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_TimeNodeList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_par())
            {
                (*iter)->get_par().toXmlElem("p:par", "", _outStream);
            }


            else if ((*iter)->has_seq())
            {
                (*iter)->get_seq().toXmlElem("p:seq", "", _outStream);
            }


            else if ((*iter)->has_excl())
            {
                (*iter)->get_excl().toXmlElem("p:excl", "", _outStream);
            }


            else if ((*iter)->has_anim())
            {
                (*iter)->get_anim().toXmlElem("p:anim", "", _outStream);
            }


            else if ((*iter)->has_animClr())
            {
                (*iter)->get_animClr().toXmlElem("p:animClr", "", _outStream);
            }


            else if ((*iter)->has_animEffect())
            {
                (*iter)->get_animEffect().toXmlElem("p:animEffect", "", _outStream);
            }


            else if ((*iter)->has_animMotion())
            {
                (*iter)->get_animMotion().toXmlElem("p:animMotion", "", _outStream);
            }


            else if ((*iter)->has_animRot())
            {
                (*iter)->get_animRot().toXmlElem("p:animRot", "", _outStream);
            }


            else if ((*iter)->has_animScale())
            {
                (*iter)->get_animScale().toXmlElem("p:animScale", "", _outStream);
            }


            else if ((*iter)->has_cmd())
            {
                (*iter)->get_cmd().toXmlElem("p:cmd", "", _outStream);
            }


            else if ((*iter)->has_set())
            {
                (*iter)->get_set().toXmlElem("p:set", "", _outStream);
            }


            else if ((*iter)->has_audio())
            {
                (*iter)->get_audio().toXmlElem("p:audio", "", _outStream);
            }


            else if ((*iter)->has_video())
            {
                (*iter)->get_video().toXmlElem("p:video", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TimeNodeList& CT_TimeNodeList::default_instance()
{
    if (!CT_TimeNodeList::default_instance_)
    {
        CT_TimeNodeList::default_instance_ = new CT_TimeNodeList();
    }
    return *CT_TimeNodeList::default_instance_;
}


// CT_TimeNodeList::ChildGroup_1
CT_TimeNodeList::ChildGroup_1::ChildGroup_1()
    :m_has_par(false),
     m_par(NULL),
     m_has_seq(false),
     m_seq(NULL),
     m_has_excl(false),
     m_excl(NULL),
     m_has_anim(false),
     m_anim(NULL),
     m_has_animClr(false),
     m_animClr(NULL),
     m_has_animEffect(false),
     m_animEffect(NULL),
     m_has_animMotion(false),
     m_animMotion(NULL),
     m_has_animRot(false),
     m_animRot(NULL),
     m_has_animScale(false),
     m_animScale(NULL),
     m_has_cmd(false),
     m_cmd(NULL),
     m_has_set(false),
     m_set(NULL),
     m_has_audio(false),
     m_audio(NULL),
     m_has_video(false),
     m_video(NULL)
{
}
bool CT_TimeNodeList::ChildGroup_1::has_par() const
{
    return m_has_par;
}

CT_TLTimeNodeParallel* CT_TimeNodeList::ChildGroup_1::mutable_par()
{

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_par = true;
    if (!m_par)
    {
        m_par = new CT_TLTimeNodeParallel();
    }
    return m_par;
}

const CT_TLTimeNodeParallel& CT_TimeNodeList::ChildGroup_1::get_par() const
{
    if (m_par)
    {
        return *m_par;
    }
    return CT_TLTimeNodeParallel::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_seq() const
{
    return m_has_seq;
}

CT_TLTimeNodeSequence* CT_TimeNodeList::ChildGroup_1::mutable_seq()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_seq = true;
    if (!m_seq)
    {
        m_seq = new CT_TLTimeNodeSequence();
    }
    return m_seq;
}

const CT_TLTimeNodeSequence& CT_TimeNodeList::ChildGroup_1::get_seq() const
{
    if (m_seq)
    {
        return *m_seq;
    }
    return CT_TLTimeNodeSequence::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_excl() const
{
    return m_has_excl;
}

CT_TLTimeNodeExclusive* CT_TimeNodeList::ChildGroup_1::mutable_excl()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_excl = true;
    if (!m_excl)
    {
        m_excl = new CT_TLTimeNodeExclusive();
    }
    return m_excl;
}

const CT_TLTimeNodeExclusive& CT_TimeNodeList::ChildGroup_1::get_excl() const
{
    if (m_excl)
    {
        return *m_excl;
    }
    return CT_TLTimeNodeExclusive::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_anim() const
{
    return m_has_anim;
}

CT_TLAnimateBehavior* CT_TimeNodeList::ChildGroup_1::mutable_anim()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_anim = true;
    if (!m_anim)
    {
        m_anim = new CT_TLAnimateBehavior();
    }
    return m_anim;
}

const CT_TLAnimateBehavior& CT_TimeNodeList::ChildGroup_1::get_anim() const
{
    if (m_anim)
    {
        return *m_anim;
    }
    return CT_TLAnimateBehavior::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_animClr() const
{
    return m_has_animClr;
}

CT_TLAnimateColorBehavior* CT_TimeNodeList::ChildGroup_1::mutable_animClr()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_animClr = true;
    if (!m_animClr)
    {
        m_animClr = new CT_TLAnimateColorBehavior();
    }
    return m_animClr;
}

const CT_TLAnimateColorBehavior& CT_TimeNodeList::ChildGroup_1::get_animClr() const
{
    if (m_animClr)
    {
        return *m_animClr;
    }
    return CT_TLAnimateColorBehavior::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_animEffect() const
{
    return m_has_animEffect;
}

CT_TLAnimateEffectBehavior* CT_TimeNodeList::ChildGroup_1::mutable_animEffect()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_animEffect = true;
    if (!m_animEffect)
    {
        m_animEffect = new CT_TLAnimateEffectBehavior();
    }
    return m_animEffect;
}

const CT_TLAnimateEffectBehavior& CT_TimeNodeList::ChildGroup_1::get_animEffect() const
{
    if (m_animEffect)
    {
        return *m_animEffect;
    }
    return CT_TLAnimateEffectBehavior::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_animMotion() const
{
    return m_has_animMotion;
}

CT_TLAnimateMotionBehavior* CT_TimeNodeList::ChildGroup_1::mutable_animMotion()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_animMotion = true;
    if (!m_animMotion)
    {
        m_animMotion = new CT_TLAnimateMotionBehavior();
    }
    return m_animMotion;
}

const CT_TLAnimateMotionBehavior& CT_TimeNodeList::ChildGroup_1::get_animMotion() const
{
    if (m_animMotion)
    {
        return *m_animMotion;
    }
    return CT_TLAnimateMotionBehavior::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_animRot() const
{
    return m_has_animRot;
}

CT_TLAnimateRotationBehavior* CT_TimeNodeList::ChildGroup_1::mutable_animRot()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_animRot = true;
    if (!m_animRot)
    {
        m_animRot = new CT_TLAnimateRotationBehavior();
    }
    return m_animRot;
}

const CT_TLAnimateRotationBehavior& CT_TimeNodeList::ChildGroup_1::get_animRot() const
{
    if (m_animRot)
    {
        return *m_animRot;
    }
    return CT_TLAnimateRotationBehavior::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_animScale() const
{
    return m_has_animScale;
}

CT_TLAnimateScaleBehavior* CT_TimeNodeList::ChildGroup_1::mutable_animScale()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_animScale = true;
    if (!m_animScale)
    {
        m_animScale = new CT_TLAnimateScaleBehavior();
    }
    return m_animScale;
}

const CT_TLAnimateScaleBehavior& CT_TimeNodeList::ChildGroup_1::get_animScale() const
{
    if (m_animScale)
    {
        return *m_animScale;
    }
    return CT_TLAnimateScaleBehavior::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_cmd() const
{
    return m_has_cmd;
}

CT_TLCommandBehavior* CT_TimeNodeList::ChildGroup_1::mutable_cmd()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_cmd = true;
    if (!m_cmd)
    {
        m_cmd = new CT_TLCommandBehavior();
    }
    return m_cmd;
}

const CT_TLCommandBehavior& CT_TimeNodeList::ChildGroup_1::get_cmd() const
{
    if (m_cmd)
    {
        return *m_cmd;
    }
    return CT_TLCommandBehavior::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_set() const
{
    return m_has_set;
}

CT_TLSetBehavior* CT_TimeNodeList::ChildGroup_1::mutable_set()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_set = true;
    if (!m_set)
    {
        m_set = new CT_TLSetBehavior();
    }
    return m_set;
}

const CT_TLSetBehavior& CT_TimeNodeList::ChildGroup_1::get_set() const
{
    if (m_set)
    {
        return *m_set;
    }
    return CT_TLSetBehavior::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_audio() const
{
    return m_has_audio;
}

CT_TLMediaNodeAudio* CT_TimeNodeList::ChildGroup_1::mutable_audio()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_video = false;

    if (m_video)
    {
        delete m_video;
        m_video = NULL;
    }
    ;

    m_has_audio = true;
    if (!m_audio)
    {
        m_audio = new CT_TLMediaNodeAudio();
    }
    return m_audio;
}

const CT_TLMediaNodeAudio& CT_TimeNodeList::ChildGroup_1::get_audio() const
{
    if (m_audio)
    {
        return *m_audio;
    }
    return CT_TLMediaNodeAudio::default_instance();
}

bool CT_TimeNodeList::ChildGroup_1::has_video() const
{
    return m_has_video;
}

CT_TLMediaNodeVideo* CT_TimeNodeList::ChildGroup_1::mutable_video()
{

    m_has_par = false;

    if (m_par)
    {
        delete m_par;
        m_par = NULL;
    }
    ;

    m_has_seq = false;

    if (m_seq)
    {
        delete m_seq;
        m_seq = NULL;
    }
    ;

    m_has_excl = false;

    if (m_excl)
    {
        delete m_excl;
        m_excl = NULL;
    }
    ;

    m_has_anim = false;

    if (m_anim)
    {
        delete m_anim;
        m_anim = NULL;
    }
    ;

    m_has_animClr = false;

    if (m_animClr)
    {
        delete m_animClr;
        m_animClr = NULL;
    }
    ;

    m_has_animEffect = false;

    if (m_animEffect)
    {
        delete m_animEffect;
        m_animEffect = NULL;
    }
    ;

    m_has_animMotion = false;

    if (m_animMotion)
    {
        delete m_animMotion;
        m_animMotion = NULL;
    }
    ;

    m_has_animRot = false;

    if (m_animRot)
    {
        delete m_animRot;
        m_animRot = NULL;
    }
    ;

    m_has_animScale = false;

    if (m_animScale)
    {
        delete m_animScale;
        m_animScale = NULL;
    }
    ;

    m_has_cmd = false;

    if (m_cmd)
    {
        delete m_cmd;
        m_cmd = NULL;
    }
    ;

    m_has_set = false;

    if (m_set)
    {
        delete m_set;
        m_set = NULL;
    }
    ;

    m_has_audio = false;

    if (m_audio)
    {
        delete m_audio;
        m_audio = NULL;
    }
    ;

    m_has_video = true;
    if (!m_video)
    {
        m_video = new CT_TLMediaNodeVideo();
    }
    return m_video;
}

const CT_TLMediaNodeVideo& CT_TimeNodeList::ChildGroup_1::get_video() const
{
    if (m_video)
    {
        return *m_video;
    }
    return CT_TLMediaNodeVideo::default_instance();
}

CT_TimeNodeList* CT_TimeNodeList::default_instance_ = NULL;

// CT_TLCommonTimeNodeData
CT_TLCommonTimeNodeData::CT_TLCommonTimeNodeData()
    :m_has_stCondLst(false),
     m_stCondLst(NULL),
     m_has_endCondLst(false),
     m_endCondLst(NULL),
     m_has_endSync(false),
     m_endSync(NULL),
     m_has_iterate(false),
     m_iterate(NULL),
     m_has_childTnLst(false),
     m_childTnLst(NULL),
     m_has_subTnLst(false),
     m_subTnLst(NULL),
     m_has_id_attr(false),
     m_id_attr(NULL),
     m_has_presetID_attr(false),
     m_presetID_attr(0),
     m_has_presetClass_attr(false),
     m_presetClass_attr(NULL),
     m_has_presetSubtype_attr(false),
     m_presetSubtype_attr(0),
     m_has_dur_attr(false),
     m_dur_attr(NULL),
     m_has_repeatCount_attr(false),
     m_repeatCount_attr(NULL),
     m_has_repeatDur_attr(false),
     m_repeatDur_attr(NULL),
     m_has_spd_attr(false),
     m_spd_attr(NULL),
     m_has_accel_attr(false),
     m_accel_attr(NULL),
     m_has_decel_attr(false),
     m_decel_attr(NULL),
     m_has_autoRev_attr(false),
     m_autoRev_attr(false),
     m_has_restart_attr(false),
     m_restart_attr(NULL),
     m_has_fill_attr(false),
     m_fill_attr(NULL),
     m_has_syncBehavior_attr(false),
     m_syncBehavior_attr(NULL),
     m_has_tmFilter_attr(false),
     m_tmFilter_attr(""),
     m_has_evtFilter_attr(false),
     m_evtFilter_attr(""),
     m_has_display_attr(false),
     m_display_attr(false),
     m_has_masterRel_attr(false),
     m_masterRel_attr(NULL),
     m_has_bldLvl_attr(false),
     m_bldLvl_attr(0),
     m_has_grpId_attr(false),
     m_grpId_attr(0),
     m_has_afterEffect_attr(false),
     m_afterEffect_attr(false),
     m_has_nodeType_attr(false),
     m_nodeType_attr(NULL),
     m_has_nodePh_attr(false),
     m_nodePh_attr(false)
{
}
CT_TLCommonTimeNodeData::~CT_TLCommonTimeNodeData()
{
    clear();
}
bool CT_TLCommonTimeNodeData::has_stCondLst() const
{
    return m_has_stCondLst;
}

CT_TLTimeConditionList* CT_TLCommonTimeNodeData::mutable_stCondLst()
{
    m_has_stCondLst = true;
    if (!m_stCondLst)
    {
        m_stCondLst = new CT_TLTimeConditionList();
    }
    return m_stCondLst;
}

const CT_TLTimeConditionList& CT_TLCommonTimeNodeData::get_stCondLst() const
{
    if (m_stCondLst)
    {
        return *m_stCondLst;
    }
    return CT_TLTimeConditionList::default_instance();
}

bool CT_TLCommonTimeNodeData::has_endCondLst() const
{
    return m_has_endCondLst;
}

CT_TLTimeConditionList* CT_TLCommonTimeNodeData::mutable_endCondLst()
{
    m_has_endCondLst = true;
    if (!m_endCondLst)
    {
        m_endCondLst = new CT_TLTimeConditionList();
    }
    return m_endCondLst;
}

const CT_TLTimeConditionList& CT_TLCommonTimeNodeData::get_endCondLst() const
{
    if (m_endCondLst)
    {
        return *m_endCondLst;
    }
    return CT_TLTimeConditionList::default_instance();
}

bool CT_TLCommonTimeNodeData::has_endSync() const
{
    return m_has_endSync;
}

CT_TLTimeCondition* CT_TLCommonTimeNodeData::mutable_endSync()
{
    m_has_endSync = true;
    if (!m_endSync)
    {
        m_endSync = new CT_TLTimeCondition();
    }
    return m_endSync;
}

const CT_TLTimeCondition& CT_TLCommonTimeNodeData::get_endSync() const
{
    if (m_endSync)
    {
        return *m_endSync;
    }
    return CT_TLTimeCondition::default_instance();
}

bool CT_TLCommonTimeNodeData::has_iterate() const
{
    return m_has_iterate;
}

CT_TLIterateData* CT_TLCommonTimeNodeData::mutable_iterate()
{
    m_has_iterate = true;
    if (!m_iterate)
    {
        m_iterate = new CT_TLIterateData();
    }
    return m_iterate;
}

const CT_TLIterateData& CT_TLCommonTimeNodeData::get_iterate() const
{
    if (m_iterate)
    {
        return *m_iterate;
    }
    return CT_TLIterateData::default_instance();
}

bool CT_TLCommonTimeNodeData::has_childTnLst() const
{
    return m_has_childTnLst;
}

CT_TimeNodeList* CT_TLCommonTimeNodeData::mutable_childTnLst()
{
    m_has_childTnLst = true;
    if (!m_childTnLst)
    {
        m_childTnLst = new CT_TimeNodeList();
    }
    return m_childTnLst;
}

const CT_TimeNodeList& CT_TLCommonTimeNodeData::get_childTnLst() const
{
    if (m_childTnLst)
    {
        return *m_childTnLst;
    }
    return CT_TimeNodeList::default_instance();
}

bool CT_TLCommonTimeNodeData::has_subTnLst() const
{
    return m_has_subTnLst;
}

CT_TimeNodeList* CT_TLCommonTimeNodeData::mutable_subTnLst()
{
    m_has_subTnLst = true;
    if (!m_subTnLst)
    {
        m_subTnLst = new CT_TimeNodeList();
    }
    return m_subTnLst;
}

const CT_TimeNodeList& CT_TLCommonTimeNodeData::get_subTnLst() const
{
    if (m_subTnLst)
    {
        return *m_subTnLst;
    }
    return CT_TimeNodeList::default_instance();
}

void CT_TLCommonTimeNodeData::clear()
{
    m_has_id_attr = false;

    if (m_id_attr)
    {
        delete m_id_attr;
        m_id_attr = NULL;
    }


    m_has_presetID_attr = false;
    m_presetID_attr = 0;

    m_has_presetClass_attr = false;

    if (m_presetClass_attr)
    {
        delete m_presetClass_attr;
        m_presetClass_attr = NULL;
    }


    m_has_presetSubtype_attr = false;
    m_presetSubtype_attr = 0;

    m_has_dur_attr = false;

    if (m_dur_attr)
    {
        delete m_dur_attr;
        m_dur_attr = NULL;
    }


    m_has_repeatCount_attr = false;

    if (m_repeatCount_attr)
    {
        delete m_repeatCount_attr;
        m_repeatCount_attr = NULL;
    }


    m_has_repeatDur_attr = false;

    if (m_repeatDur_attr)
    {
        delete m_repeatDur_attr;
        m_repeatDur_attr = NULL;
    }


    m_has_spd_attr = false;

    if (m_spd_attr)
    {
        delete m_spd_attr;
        m_spd_attr = NULL;
    }


    m_has_accel_attr = false;

    if (m_accel_attr)
    {
        delete m_accel_attr;
        m_accel_attr = NULL;
    }


    m_has_decel_attr = false;

    if (m_decel_attr)
    {
        delete m_decel_attr;
        m_decel_attr = NULL;
    }


    m_has_autoRev_attr = false;
    m_autoRev_attr = false;

    m_has_restart_attr = false;

    if (m_restart_attr)
    {
        delete m_restart_attr;
        m_restart_attr = NULL;
    }


    m_has_fill_attr = false;

    if (m_fill_attr)
    {
        delete m_fill_attr;
        m_fill_attr = NULL;
    }


    m_has_syncBehavior_attr = false;

    if (m_syncBehavior_attr)
    {
        delete m_syncBehavior_attr;
        m_syncBehavior_attr = NULL;
    }


    m_has_tmFilter_attr = false;
    m_tmFilter_attr.clear();

    m_has_evtFilter_attr = false;
    m_evtFilter_attr.clear();

    m_has_display_attr = false;
    m_display_attr = false;

    m_has_masterRel_attr = false;

    if (m_masterRel_attr)
    {
        delete m_masterRel_attr;
        m_masterRel_attr = NULL;
    }


    m_has_bldLvl_attr = false;
    m_bldLvl_attr = 0;

    m_has_grpId_attr = false;
    m_grpId_attr = 0;

    m_has_afterEffect_attr = false;
    m_afterEffect_attr = false;

    m_has_nodeType_attr = false;

    if (m_nodeType_attr)
    {
        delete m_nodeType_attr;
        m_nodeType_attr = NULL;
    }


    m_has_nodePh_attr = false;
    m_nodePh_attr = false;

    m_has_stCondLst = false;

    if (m_stCondLst)
    {
        delete m_stCondLst;
        m_stCondLst = NULL;
    }


    m_has_endCondLst = false;

    if (m_endCondLst)
    {
        delete m_endCondLst;
        m_endCondLst = NULL;
    }


    m_has_endSync = false;

    if (m_endSync)
    {
        delete m_endSync;
        m_endSync = NULL;
    }


    m_has_iterate = false;

    if (m_iterate)
    {
        delete m_iterate;
        m_iterate = NULL;
    }


    m_has_childTnLst = false;

    if (m_childTnLst)
    {
        delete m_childTnLst;
        m_childTnLst = NULL;
    }


    m_has_subTnLst = false;

    if (m_subTnLst)
    {
        delete m_subTnLst;
        m_subTnLst = NULL;
    }

}

void CT_TLCommonTimeNodeData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_id_attr)
    {
        m_id_attr->toXmlAttr("id", _outStream);
    }



    if (m_has_presetID_attr)
    {
        _outStream << " " << "presetID" << "=\"" << m_presetID_attr << "\"";
    }



    if (m_has_presetClass_attr)
    {
        m_presetClass_attr->toXmlAttr("presetClass", _outStream);
    }



    if (m_has_presetSubtype_attr)
    {
        _outStream << " " << "presetSubtype" << "=\"" << m_presetSubtype_attr << "\"";
    }



    if (m_has_dur_attr)
    {
        m_dur_attr->toXmlAttr("dur", _outStream);
    }



    if (m_has_repeatCount_attr)
    {
        m_repeatCount_attr->toXmlAttr("repeatCount", _outStream);
    }



    if (m_has_repeatDur_attr)
    {
        m_repeatDur_attr->toXmlAttr("repeatDur", _outStream);
    }



    if (m_has_spd_attr)
    {
        m_spd_attr->toXmlAttr("spd", _outStream);
    }



    if (m_has_accel_attr)
    {
        m_accel_attr->toXmlAttr("accel", _outStream);
    }



    if (m_has_decel_attr)
    {
        m_decel_attr->toXmlAttr("decel", _outStream);
    }



    if (m_has_autoRev_attr)
    {
        _outStream << " " << "autoRev" << "=\"" << XSD::XMLBooleanStr(m_autoRev_attr) << "\"";
    }



    if (m_has_restart_attr)
    {
        m_restart_attr->toXmlAttr("restart", _outStream);
    }



    if (m_has_fill_attr)
    {
        m_fill_attr->toXmlAttr("fill", _outStream);
    }



    if (m_has_syncBehavior_attr)
    {
        m_syncBehavior_attr->toXmlAttr("syncBehavior", _outStream);
    }



    if (m_has_tmFilter_attr)
    {
        _outStream << " " << "tmFilter" << "=\"" << m_tmFilter_attr << "\"";
    }



    if (m_has_evtFilter_attr)
    {
        _outStream << " " << "evtFilter" << "=\"" << m_evtFilter_attr << "\"";
    }



    if (m_has_display_attr)
    {
        _outStream << " " << "display" << "=\"" << XSD::XMLBooleanStr(m_display_attr) << "\"";
    }



    if (m_has_masterRel_attr)
    {
        m_masterRel_attr->toXmlAttr("masterRel", _outStream);
    }



    if (m_has_bldLvl_attr)
    {
        _outStream << " " << "bldLvl" << "=\"" << m_bldLvl_attr << "\"";
    }



    if (m_has_grpId_attr)
    {
        _outStream << " " << "grpId" << "=\"" << m_grpId_attr << "\"";
    }



    if (m_has_afterEffect_attr)
    {
        _outStream << " " << "afterEffect" << "=\"" << XSD::XMLBooleanStr(m_afterEffect_attr) << "\"";
    }



    if (m_has_nodeType_attr)
    {
        m_nodeType_attr->toXmlAttr("nodeType", _outStream);
    }



    if (m_has_nodePh_attr)
    {
        _outStream << " " << "nodePh" << "=\"" << XSD::XMLBooleanStr(m_nodePh_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_stCondLst)
    {
        m_stCondLst->toXmlElem("p:stCondLst", "", _outStream);
    }


    if (m_has_endCondLst)
    {
        m_endCondLst->toXmlElem("p:endCondLst", "", _outStream);
    }


    if (m_has_endSync)
    {
        m_endSync->toXmlElem("p:endSync", "", _outStream);
    }


    if (m_has_iterate)
    {
        m_iterate->toXmlElem("p:iterate", "", _outStream);
    }


    if (m_has_childTnLst)
    {
        m_childTnLst->toXmlElem("p:childTnLst", "", _outStream);
    }


    if (m_has_subTnLst)
    {
        m_subTnLst->toXmlElem("p:subTnLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLCommonTimeNodeData& CT_TLCommonTimeNodeData::default_instance()
{
    if (!CT_TLCommonTimeNodeData::default_instance_)
    {
        CT_TLCommonTimeNodeData::default_instance_ = new CT_TLCommonTimeNodeData();
    }
    return *CT_TLCommonTimeNodeData::default_instance_;
}

bool CT_TLCommonTimeNodeData::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_TLCommonTimeNodeData::set_id_attr(const ST_TLTimeNodeID& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = new ST_TLTimeNodeID(_id_attr);
}

const ST_TLTimeNodeID& CT_TLCommonTimeNodeData::get_id_attr() const
{
    if (m_id_attr)
    {
        return *m_id_attr;
    }
    return ST_TLTimeNodeID::default_instance();
}

bool CT_TLCommonTimeNodeData::has_presetID_attr() const
{
    return m_has_presetID_attr;
}

void CT_TLCommonTimeNodeData::set_presetID_attr(const XSD::int_& _presetID_attr)
{
    m_has_presetID_attr = true;
    m_presetID_attr = _presetID_attr;
}

const XSD::int_& CT_TLCommonTimeNodeData::get_presetID_attr() const
{
    return m_presetID_attr;
}

bool CT_TLCommonTimeNodeData::has_presetClass_attr() const
{
    return m_has_presetClass_attr;
}

void CT_TLCommonTimeNodeData::set_presetClass_attr(const ST_TLTimeNodePresetClassType& _presetClass_attr)
{
    m_has_presetClass_attr = true;
    m_presetClass_attr = new ST_TLTimeNodePresetClassType(_presetClass_attr);
}

const ST_TLTimeNodePresetClassType& CT_TLCommonTimeNodeData::get_presetClass_attr() const
{
    if (m_presetClass_attr)
    {
        return *m_presetClass_attr;
    }
    return ST_TLTimeNodePresetClassType::default_instance();
}

bool CT_TLCommonTimeNodeData::has_presetSubtype_attr() const
{
    return m_has_presetSubtype_attr;
}

void CT_TLCommonTimeNodeData::set_presetSubtype_attr(const XSD::int_& _presetSubtype_attr)
{
    m_has_presetSubtype_attr = true;
    m_presetSubtype_attr = _presetSubtype_attr;
}

const XSD::int_& CT_TLCommonTimeNodeData::get_presetSubtype_attr() const
{
    return m_presetSubtype_attr;
}

bool CT_TLCommonTimeNodeData::has_dur_attr() const
{
    return m_has_dur_attr;
}

void CT_TLCommonTimeNodeData::set_dur_attr(const ST_TLTime& _dur_attr)
{
    m_has_dur_attr = true;
    m_dur_attr = new ST_TLTime(_dur_attr);
}

const ST_TLTime& CT_TLCommonTimeNodeData::get_dur_attr() const
{
    if (m_dur_attr)
    {
        return *m_dur_attr;
    }
    return ST_TLTime::default_instance();
}

bool CT_TLCommonTimeNodeData::has_repeatCount_attr() const
{
    return m_has_repeatCount_attr;
}

void CT_TLCommonTimeNodeData::set_repeatCount_attr(const ST_TLTime& _repeatCount_attr)
{
    m_has_repeatCount_attr = true;
    m_repeatCount_attr = new ST_TLTime(_repeatCount_attr);
}

const ST_TLTime& CT_TLCommonTimeNodeData::get_repeatCount_attr() const
{
    if (m_repeatCount_attr)
    {
        return *m_repeatCount_attr;
    }
    return ST_TLTime::default_instance();
}

bool CT_TLCommonTimeNodeData::has_repeatDur_attr() const
{
    return m_has_repeatDur_attr;
}

void CT_TLCommonTimeNodeData::set_repeatDur_attr(const ST_TLTime& _repeatDur_attr)
{
    m_has_repeatDur_attr = true;
    m_repeatDur_attr = new ST_TLTime(_repeatDur_attr);
}

const ST_TLTime& CT_TLCommonTimeNodeData::get_repeatDur_attr() const
{
    if (m_repeatDur_attr)
    {
        return *m_repeatDur_attr;
    }
    return ST_TLTime::default_instance();
}

bool CT_TLCommonTimeNodeData::has_spd_attr() const
{
    return m_has_spd_attr;
}

void CT_TLCommonTimeNodeData::set_spd_attr(const ns_a::ST_Percentage& _spd_attr)
{
    m_has_spd_attr = true;
    m_spd_attr = new ns_a::ST_Percentage(_spd_attr);
}

const ns_a::ST_Percentage& CT_TLCommonTimeNodeData::get_spd_attr() const
{
    if (m_spd_attr)
    {
        return *m_spd_attr;
    }
    return ns_a::ST_Percentage::default_instance();
}

bool CT_TLCommonTimeNodeData::has_accel_attr() const
{
    return m_has_accel_attr;
}

void CT_TLCommonTimeNodeData::set_accel_attr(const ns_a::ST_PositiveFixedPercentage& _accel_attr)
{
    m_has_accel_attr = true;
    m_accel_attr = new ns_a::ST_PositiveFixedPercentage(_accel_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_TLCommonTimeNodeData::get_accel_attr() const
{
    if (m_accel_attr)
    {
        return *m_accel_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_TLCommonTimeNodeData::has_decel_attr() const
{
    return m_has_decel_attr;
}

void CT_TLCommonTimeNodeData::set_decel_attr(const ns_a::ST_PositiveFixedPercentage& _decel_attr)
{
    m_has_decel_attr = true;
    m_decel_attr = new ns_a::ST_PositiveFixedPercentage(_decel_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_TLCommonTimeNodeData::get_decel_attr() const
{
    if (m_decel_attr)
    {
        return *m_decel_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_TLCommonTimeNodeData::has_autoRev_attr() const
{
    return m_has_autoRev_attr;
}

void CT_TLCommonTimeNodeData::set_autoRev_attr(const XSD::boolean_& _autoRev_attr)
{
    m_has_autoRev_attr = true;
    m_autoRev_attr = _autoRev_attr;
}

const XSD::boolean_& CT_TLCommonTimeNodeData::get_autoRev_attr() const
{
    return m_autoRev_attr;
}

bool CT_TLCommonTimeNodeData::has_restart_attr() const
{
    return m_has_restart_attr;
}

void CT_TLCommonTimeNodeData::set_restart_attr(const ST_TLTimeNodeRestartType& _restart_attr)
{
    m_has_restart_attr = true;
    m_restart_attr = new ST_TLTimeNodeRestartType(_restart_attr);
}

const ST_TLTimeNodeRestartType& CT_TLCommonTimeNodeData::get_restart_attr() const
{
    if (m_restart_attr)
    {
        return *m_restart_attr;
    }
    return ST_TLTimeNodeRestartType::default_instance();
}

bool CT_TLCommonTimeNodeData::has_fill_attr() const
{
    return m_has_fill_attr;
}

void CT_TLCommonTimeNodeData::set_fill_attr(const ST_TLTimeNodeFillType& _fill_attr)
{
    m_has_fill_attr = true;
    m_fill_attr = new ST_TLTimeNodeFillType(_fill_attr);
}

const ST_TLTimeNodeFillType& CT_TLCommonTimeNodeData::get_fill_attr() const
{
    if (m_fill_attr)
    {
        return *m_fill_attr;
    }
    return ST_TLTimeNodeFillType::default_instance();
}

bool CT_TLCommonTimeNodeData::has_syncBehavior_attr() const
{
    return m_has_syncBehavior_attr;
}

void CT_TLCommonTimeNodeData::set_syncBehavior_attr(const ST_TLTimeNodeSyncType& _syncBehavior_attr)
{
    m_has_syncBehavior_attr = true;
    m_syncBehavior_attr = new ST_TLTimeNodeSyncType(_syncBehavior_attr);
}

const ST_TLTimeNodeSyncType& CT_TLCommonTimeNodeData::get_syncBehavior_attr() const
{
    if (m_syncBehavior_attr)
    {
        return *m_syncBehavior_attr;
    }
    return ST_TLTimeNodeSyncType::default_instance();
}

bool CT_TLCommonTimeNodeData::has_tmFilter_attr() const
{
    return m_has_tmFilter_attr;
}

void CT_TLCommonTimeNodeData::set_tmFilter_attr(const XSD::string_& _tmFilter_attr)
{
    m_has_tmFilter_attr = true;
    m_tmFilter_attr = _tmFilter_attr;
}

const XSD::string_& CT_TLCommonTimeNodeData::get_tmFilter_attr() const
{
    return m_tmFilter_attr;
}

bool CT_TLCommonTimeNodeData::has_evtFilter_attr() const
{
    return m_has_evtFilter_attr;
}

void CT_TLCommonTimeNodeData::set_evtFilter_attr(const XSD::string_& _evtFilter_attr)
{
    m_has_evtFilter_attr = true;
    m_evtFilter_attr = _evtFilter_attr;
}

const XSD::string_& CT_TLCommonTimeNodeData::get_evtFilter_attr() const
{
    return m_evtFilter_attr;
}

bool CT_TLCommonTimeNodeData::has_display_attr() const
{
    return m_has_display_attr;
}

void CT_TLCommonTimeNodeData::set_display_attr(const XSD::boolean_& _display_attr)
{
    m_has_display_attr = true;
    m_display_attr = _display_attr;
}

const XSD::boolean_& CT_TLCommonTimeNodeData::get_display_attr() const
{
    return m_display_attr;
}

bool CT_TLCommonTimeNodeData::has_masterRel_attr() const
{
    return m_has_masterRel_attr;
}

void CT_TLCommonTimeNodeData::set_masterRel_attr(const ST_TLTimeNodeMasterRelation& _masterRel_attr)
{
    m_has_masterRel_attr = true;
    m_masterRel_attr = new ST_TLTimeNodeMasterRelation(_masterRel_attr);
}

const ST_TLTimeNodeMasterRelation& CT_TLCommonTimeNodeData::get_masterRel_attr() const
{
    if (m_masterRel_attr)
    {
        return *m_masterRel_attr;
    }
    return ST_TLTimeNodeMasterRelation::default_instance();
}

bool CT_TLCommonTimeNodeData::has_bldLvl_attr() const
{
    return m_has_bldLvl_attr;
}

void CT_TLCommonTimeNodeData::set_bldLvl_attr(const XSD::int_& _bldLvl_attr)
{
    m_has_bldLvl_attr = true;
    m_bldLvl_attr = _bldLvl_attr;
}

const XSD::int_& CT_TLCommonTimeNodeData::get_bldLvl_attr() const
{
    return m_bldLvl_attr;
}

bool CT_TLCommonTimeNodeData::has_grpId_attr() const
{
    return m_has_grpId_attr;
}

void CT_TLCommonTimeNodeData::set_grpId_attr(const XSD::unsignedInt_& _grpId_attr)
{
    m_has_grpId_attr = true;
    m_grpId_attr = _grpId_attr;
}

const XSD::unsignedInt_& CT_TLCommonTimeNodeData::get_grpId_attr() const
{
    return m_grpId_attr;
}

bool CT_TLCommonTimeNodeData::has_afterEffect_attr() const
{
    return m_has_afterEffect_attr;
}

void CT_TLCommonTimeNodeData::set_afterEffect_attr(const XSD::boolean_& _afterEffect_attr)
{
    m_has_afterEffect_attr = true;
    m_afterEffect_attr = _afterEffect_attr;
}

const XSD::boolean_& CT_TLCommonTimeNodeData::get_afterEffect_attr() const
{
    return m_afterEffect_attr;
}

bool CT_TLCommonTimeNodeData::has_nodeType_attr() const
{
    return m_has_nodeType_attr;
}

void CT_TLCommonTimeNodeData::set_nodeType_attr(const ST_TLTimeNodeType& _nodeType_attr)
{
    m_has_nodeType_attr = true;
    m_nodeType_attr = new ST_TLTimeNodeType(_nodeType_attr);
}

const ST_TLTimeNodeType& CT_TLCommonTimeNodeData::get_nodeType_attr() const
{
    if (m_nodeType_attr)
    {
        return *m_nodeType_attr;
    }
    return ST_TLTimeNodeType::default_instance();
}

bool CT_TLCommonTimeNodeData::has_nodePh_attr() const
{
    return m_has_nodePh_attr;
}

void CT_TLCommonTimeNodeData::set_nodePh_attr(const XSD::boolean_& _nodePh_attr)
{
    m_has_nodePh_attr = true;
    m_nodePh_attr = _nodePh_attr;
}

const XSD::boolean_& CT_TLCommonTimeNodeData::get_nodePh_attr() const
{
    return m_nodePh_attr;
}

CT_TLCommonTimeNodeData* CT_TLCommonTimeNodeData::default_instance_ = NULL;

// CT_TLTimeNodeParallel
CT_TLTimeNodeParallel::CT_TLTimeNodeParallel()
    :m_has_cTn(false),
     m_cTn(NULL)
{
}
CT_TLTimeNodeParallel::~CT_TLTimeNodeParallel()
{
    clear();
}
bool CT_TLTimeNodeParallel::has_cTn() const
{
    return m_has_cTn;
}

CT_TLCommonTimeNodeData* CT_TLTimeNodeParallel::mutable_cTn()
{
    m_has_cTn = true;
    if (!m_cTn)
    {
        m_cTn = new CT_TLCommonTimeNodeData();
    }
    return m_cTn;
}

const CT_TLCommonTimeNodeData& CT_TLTimeNodeParallel::get_cTn() const
{
    if (m_cTn)
    {
        return *m_cTn;
    }
    return CT_TLCommonTimeNodeData::default_instance();
}

void CT_TLTimeNodeParallel::clear()
{
    m_has_cTn = false;

    if (m_cTn)
    {
        delete m_cTn;
        m_cTn = NULL;
    }

}

void CT_TLTimeNodeParallel::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cTn);


    if (m_has_cTn)
    {
        m_cTn->toXmlElem("p:cTn", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTimeNodeParallel& CT_TLTimeNodeParallel::default_instance()
{
    if (!CT_TLTimeNodeParallel::default_instance_)
    {
        CT_TLTimeNodeParallel::default_instance_ = new CT_TLTimeNodeParallel();
    }
    return *CT_TLTimeNodeParallel::default_instance_;
}

CT_TLTimeNodeParallel* CT_TLTimeNodeParallel::default_instance_ = NULL;

// CT_TLTimeNodeSequence
CT_TLTimeNodeSequence::CT_TLTimeNodeSequence()
    :m_has_cTn(false),
     m_cTn(NULL),
     m_has_prevCondLst(false),
     m_prevCondLst(NULL),
     m_has_nextCondLst(false),
     m_nextCondLst(NULL),
     m_has_concurrent_attr(false),
     m_concurrent_attr(false),
     m_has_prevAc_attr(false),
     m_prevAc_attr(NULL),
     m_has_nextAc_attr(false),
     m_nextAc_attr(NULL)
{
}
CT_TLTimeNodeSequence::~CT_TLTimeNodeSequence()
{
    clear();
}
bool CT_TLTimeNodeSequence::has_cTn() const
{
    return m_has_cTn;
}

CT_TLCommonTimeNodeData* CT_TLTimeNodeSequence::mutable_cTn()
{
    m_has_cTn = true;
    if (!m_cTn)
    {
        m_cTn = new CT_TLCommonTimeNodeData();
    }
    return m_cTn;
}

const CT_TLCommonTimeNodeData& CT_TLTimeNodeSequence::get_cTn() const
{
    if (m_cTn)
    {
        return *m_cTn;
    }
    return CT_TLCommonTimeNodeData::default_instance();
}

bool CT_TLTimeNodeSequence::has_prevCondLst() const
{
    return m_has_prevCondLst;
}

CT_TLTimeConditionList* CT_TLTimeNodeSequence::mutable_prevCondLst()
{
    m_has_prevCondLst = true;
    if (!m_prevCondLst)
    {
        m_prevCondLst = new CT_TLTimeConditionList();
    }
    return m_prevCondLst;
}

const CT_TLTimeConditionList& CT_TLTimeNodeSequence::get_prevCondLst() const
{
    if (m_prevCondLst)
    {
        return *m_prevCondLst;
    }
    return CT_TLTimeConditionList::default_instance();
}

bool CT_TLTimeNodeSequence::has_nextCondLst() const
{
    return m_has_nextCondLst;
}

CT_TLTimeConditionList* CT_TLTimeNodeSequence::mutable_nextCondLst()
{
    m_has_nextCondLst = true;
    if (!m_nextCondLst)
    {
        m_nextCondLst = new CT_TLTimeConditionList();
    }
    return m_nextCondLst;
}

const CT_TLTimeConditionList& CT_TLTimeNodeSequence::get_nextCondLst() const
{
    if (m_nextCondLst)
    {
        return *m_nextCondLst;
    }
    return CT_TLTimeConditionList::default_instance();
}

void CT_TLTimeNodeSequence::clear()
{
    m_has_concurrent_attr = false;
    m_concurrent_attr = false;

    m_has_prevAc_attr = false;

    if (m_prevAc_attr)
    {
        delete m_prevAc_attr;
        m_prevAc_attr = NULL;
    }


    m_has_nextAc_attr = false;

    if (m_nextAc_attr)
    {
        delete m_nextAc_attr;
        m_nextAc_attr = NULL;
    }


    m_has_cTn = false;

    if (m_cTn)
    {
        delete m_cTn;
        m_cTn = NULL;
    }


    m_has_prevCondLst = false;

    if (m_prevCondLst)
    {
        delete m_prevCondLst;
        m_prevCondLst = NULL;
    }


    m_has_nextCondLst = false;

    if (m_nextCondLst)
    {
        delete m_nextCondLst;
        m_nextCondLst = NULL;
    }

}

void CT_TLTimeNodeSequence::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_concurrent_attr)
    {
        _outStream << " " << "concurrent" << "=\"" << XSD::XMLBooleanStr(m_concurrent_attr) << "\"";
    }



    if (m_has_prevAc_attr)
    {
        m_prevAc_attr->toXmlAttr("prevAc", _outStream);
    }



    if (m_has_nextAc_attr)
    {
        m_nextAc_attr->toXmlAttr("nextAc", _outStream);
    }

    _outStream << ">";

    assert(m_has_cTn);


    if (m_has_cTn)
    {
        m_cTn->toXmlElem("p:cTn", "", _outStream);
    }


    if (m_has_prevCondLst)
    {
        m_prevCondLst->toXmlElem("p:prevCondLst", "", _outStream);
    }


    if (m_has_nextCondLst)
    {
        m_nextCondLst->toXmlElem("p:nextCondLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTimeNodeSequence& CT_TLTimeNodeSequence::default_instance()
{
    if (!CT_TLTimeNodeSequence::default_instance_)
    {
        CT_TLTimeNodeSequence::default_instance_ = new CT_TLTimeNodeSequence();
    }
    return *CT_TLTimeNodeSequence::default_instance_;
}

bool CT_TLTimeNodeSequence::has_concurrent_attr() const
{
    return m_has_concurrent_attr;
}

void CT_TLTimeNodeSequence::set_concurrent_attr(const XSD::boolean_& _concurrent_attr)
{
    m_has_concurrent_attr = true;
    m_concurrent_attr = _concurrent_attr;
}

const XSD::boolean_& CT_TLTimeNodeSequence::get_concurrent_attr() const
{
    return m_concurrent_attr;
}

bool CT_TLTimeNodeSequence::has_prevAc_attr() const
{
    return m_has_prevAc_attr;
}

void CT_TLTimeNodeSequence::set_prevAc_attr(const ST_TLPreviousActionType& _prevAc_attr)
{
    m_has_prevAc_attr = true;
    m_prevAc_attr = new ST_TLPreviousActionType(_prevAc_attr);
}

const ST_TLPreviousActionType& CT_TLTimeNodeSequence::get_prevAc_attr() const
{
    if (m_prevAc_attr)
    {
        return *m_prevAc_attr;
    }
    return ST_TLPreviousActionType::default_instance();
}

bool CT_TLTimeNodeSequence::has_nextAc_attr() const
{
    return m_has_nextAc_attr;
}

void CT_TLTimeNodeSequence::set_nextAc_attr(const ST_TLNextActionType& _nextAc_attr)
{
    m_has_nextAc_attr = true;
    m_nextAc_attr = new ST_TLNextActionType(_nextAc_attr);
}

const ST_TLNextActionType& CT_TLTimeNodeSequence::get_nextAc_attr() const
{
    if (m_nextAc_attr)
    {
        return *m_nextAc_attr;
    }
    return ST_TLNextActionType::default_instance();
}

CT_TLTimeNodeSequence* CT_TLTimeNodeSequence::default_instance_ = NULL;

// CT_TLTimeNodeExclusive
CT_TLTimeNodeExclusive::CT_TLTimeNodeExclusive()
    :m_has_cTn(false),
     m_cTn(NULL)
{
}
CT_TLTimeNodeExclusive::~CT_TLTimeNodeExclusive()
{
    clear();
}
bool CT_TLTimeNodeExclusive::has_cTn() const
{
    return m_has_cTn;
}

CT_TLCommonTimeNodeData* CT_TLTimeNodeExclusive::mutable_cTn()
{
    m_has_cTn = true;
    if (!m_cTn)
    {
        m_cTn = new CT_TLCommonTimeNodeData();
    }
    return m_cTn;
}

const CT_TLCommonTimeNodeData& CT_TLTimeNodeExclusive::get_cTn() const
{
    if (m_cTn)
    {
        return *m_cTn;
    }
    return CT_TLCommonTimeNodeData::default_instance();
}

void CT_TLTimeNodeExclusive::clear()
{
    m_has_cTn = false;

    if (m_cTn)
    {
        delete m_cTn;
        m_cTn = NULL;
    }

}

void CT_TLTimeNodeExclusive::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cTn);


    if (m_has_cTn)
    {
        m_cTn->toXmlElem("p:cTn", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTimeNodeExclusive& CT_TLTimeNodeExclusive::default_instance()
{
    if (!CT_TLTimeNodeExclusive::default_instance_)
    {
        CT_TLTimeNodeExclusive::default_instance_ = new CT_TLTimeNodeExclusive();
    }
    return *CT_TLTimeNodeExclusive::default_instance_;
}

CT_TLTimeNodeExclusive* CT_TLTimeNodeExclusive::default_instance_ = NULL;

// CT_TLBehaviorAttributeNameList
CT_TLBehaviorAttributeNameList::CT_TLBehaviorAttributeNameList()

{
}
CT_TLBehaviorAttributeNameList::~CT_TLBehaviorAttributeNameList()
{
    clear();
}
void CT_TLBehaviorAttributeNameList::add_attrName(const XSD::string_& _attrName)
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    pChildGroup->set_attrName(_attrName);
    m_childGroupList_1.push_back(pChildGroup);
}

void CT_TLBehaviorAttributeNameList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_TLBehaviorAttributeNameList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_attrName));
        assert(1 <= elemCnt);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_attrName())
            {
                _outStream << "<p:attrName>" << (*iter)->get_attrName() << "</p:attrName>";
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLBehaviorAttributeNameList& CT_TLBehaviorAttributeNameList::default_instance()
{
    if (!CT_TLBehaviorAttributeNameList::default_instance_)
    {
        CT_TLBehaviorAttributeNameList::default_instance_ = new CT_TLBehaviorAttributeNameList();
    }
    return *CT_TLBehaviorAttributeNameList::default_instance_;
}


// CT_TLBehaviorAttributeNameList::ChildGroup_1
CT_TLBehaviorAttributeNameList::ChildGroup_1::ChildGroup_1()
    :m_has_attrName(false),
     m_attrName("")
{
}
bool CT_TLBehaviorAttributeNameList::ChildGroup_1::has_attrName() const
{
    return m_has_attrName;
}

void CT_TLBehaviorAttributeNameList::ChildGroup_1::set_attrName(const XSD::string_& _attrName)
{

    m_has_attrName = true;
    m_attrName = _attrName;
}

const XSD::string_& CT_TLBehaviorAttributeNameList::ChildGroup_1::get_attrName() const
{
    return m_attrName;
}

CT_TLBehaviorAttributeNameList* CT_TLBehaviorAttributeNameList::default_instance_ = NULL;

// CT_TLCommonBehaviorData
CT_TLCommonBehaviorData::CT_TLCommonBehaviorData()
    :m_has_cTn(false),
     m_cTn(NULL),
     m_has_tgtEl(false),
     m_tgtEl(NULL),
     m_has_attrNameLst(false),
     m_attrNameLst(NULL),
     m_has_additive_attr(false),
     m_additive_attr(NULL),
     m_has_accumulate_attr(false),
     m_accumulate_attr(NULL),
     m_has_xfrmType_attr(false),
     m_xfrmType_attr(NULL),
     m_has_from_attr(false),
     m_from_attr(""),
     m_has_to_attr(false),
     m_to_attr(""),
     m_has_by_attr(false),
     m_by_attr(""),
     m_has_rctx_attr(false),
     m_rctx_attr(""),
     m_has_override_attr(false),
     m_override_attr(NULL)
{
}
CT_TLCommonBehaviorData::~CT_TLCommonBehaviorData()
{
    clear();
}
bool CT_TLCommonBehaviorData::has_cTn() const
{
    return m_has_cTn;
}

CT_TLCommonTimeNodeData* CT_TLCommonBehaviorData::mutable_cTn()
{
    m_has_cTn = true;
    if (!m_cTn)
    {
        m_cTn = new CT_TLCommonTimeNodeData();
    }
    return m_cTn;
}

const CT_TLCommonTimeNodeData& CT_TLCommonBehaviorData::get_cTn() const
{
    if (m_cTn)
    {
        return *m_cTn;
    }
    return CT_TLCommonTimeNodeData::default_instance();
}

bool CT_TLCommonBehaviorData::has_tgtEl() const
{
    return m_has_tgtEl;
}

CT_TLTimeTargetElement* CT_TLCommonBehaviorData::mutable_tgtEl()
{
    m_has_tgtEl = true;
    if (!m_tgtEl)
    {
        m_tgtEl = new CT_TLTimeTargetElement();
    }
    return m_tgtEl;
}

const CT_TLTimeTargetElement& CT_TLCommonBehaviorData::get_tgtEl() const
{
    if (m_tgtEl)
    {
        return *m_tgtEl;
    }
    return CT_TLTimeTargetElement::default_instance();
}

bool CT_TLCommonBehaviorData::has_attrNameLst() const
{
    return m_has_attrNameLst;
}

CT_TLBehaviorAttributeNameList* CT_TLCommonBehaviorData::mutable_attrNameLst()
{
    m_has_attrNameLst = true;
    if (!m_attrNameLst)
    {
        m_attrNameLst = new CT_TLBehaviorAttributeNameList();
    }
    return m_attrNameLst;
}

const CT_TLBehaviorAttributeNameList& CT_TLCommonBehaviorData::get_attrNameLst() const
{
    if (m_attrNameLst)
    {
        return *m_attrNameLst;
    }
    return CT_TLBehaviorAttributeNameList::default_instance();
}

void CT_TLCommonBehaviorData::clear()
{
    m_has_additive_attr = false;

    if (m_additive_attr)
    {
        delete m_additive_attr;
        m_additive_attr = NULL;
    }


    m_has_accumulate_attr = false;

    if (m_accumulate_attr)
    {
        delete m_accumulate_attr;
        m_accumulate_attr = NULL;
    }


    m_has_xfrmType_attr = false;

    if (m_xfrmType_attr)
    {
        delete m_xfrmType_attr;
        m_xfrmType_attr = NULL;
    }


    m_has_from_attr = false;
    m_from_attr.clear();

    m_has_to_attr = false;
    m_to_attr.clear();

    m_has_by_attr = false;
    m_by_attr.clear();

    m_has_rctx_attr = false;
    m_rctx_attr.clear();

    m_has_override_attr = false;

    if (m_override_attr)
    {
        delete m_override_attr;
        m_override_attr = NULL;
    }


    m_has_cTn = false;

    if (m_cTn)
    {
        delete m_cTn;
        m_cTn = NULL;
    }


    m_has_tgtEl = false;

    if (m_tgtEl)
    {
        delete m_tgtEl;
        m_tgtEl = NULL;
    }


    m_has_attrNameLst = false;

    if (m_attrNameLst)
    {
        delete m_attrNameLst;
        m_attrNameLst = NULL;
    }

}

void CT_TLCommonBehaviorData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_additive_attr)
    {
        m_additive_attr->toXmlAttr("additive", _outStream);
    }



    if (m_has_accumulate_attr)
    {
        m_accumulate_attr->toXmlAttr("accumulate", _outStream);
    }



    if (m_has_xfrmType_attr)
    {
        m_xfrmType_attr->toXmlAttr("xfrmType", _outStream);
    }



    if (m_has_from_attr)
    {
        _outStream << " " << "from" << "=\"" << m_from_attr << "\"";
    }



    if (m_has_to_attr)
    {
        _outStream << " " << "to" << "=\"" << m_to_attr << "\"";
    }



    if (m_has_by_attr)
    {
        _outStream << " " << "by" << "=\"" << m_by_attr << "\"";
    }



    if (m_has_rctx_attr)
    {
        _outStream << " " << "rctx" << "=\"" << m_rctx_attr << "\"";
    }



    if (m_has_override_attr)
    {
        m_override_attr->toXmlAttr("override", _outStream);
    }

    _outStream << ">";

    assert(m_has_cTn);


    assert(m_has_tgtEl);


    if (m_has_cTn)
    {
        m_cTn->toXmlElem("p:cTn", "", _outStream);
    }


    if (m_has_tgtEl)
    {
        m_tgtEl->toXmlElem("p:tgtEl", "", _outStream);
    }


    if (m_has_attrNameLst)
    {
        m_attrNameLst->toXmlElem("p:attrNameLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLCommonBehaviorData& CT_TLCommonBehaviorData::default_instance()
{
    if (!CT_TLCommonBehaviorData::default_instance_)
    {
        CT_TLCommonBehaviorData::default_instance_ = new CT_TLCommonBehaviorData();
    }
    return *CT_TLCommonBehaviorData::default_instance_;
}

bool CT_TLCommonBehaviorData::has_additive_attr() const
{
    return m_has_additive_attr;
}

void CT_TLCommonBehaviorData::set_additive_attr(const ST_TLBehaviorAdditiveType& _additive_attr)
{
    m_has_additive_attr = true;
    m_additive_attr = new ST_TLBehaviorAdditiveType(_additive_attr);
}

const ST_TLBehaviorAdditiveType& CT_TLCommonBehaviorData::get_additive_attr() const
{
    if (m_additive_attr)
    {
        return *m_additive_attr;
    }
    return ST_TLBehaviorAdditiveType::default_instance();
}

bool CT_TLCommonBehaviorData::has_accumulate_attr() const
{
    return m_has_accumulate_attr;
}

void CT_TLCommonBehaviorData::set_accumulate_attr(const ST_TLBehaviorAccumulateType& _accumulate_attr)
{
    m_has_accumulate_attr = true;
    m_accumulate_attr = new ST_TLBehaviorAccumulateType(_accumulate_attr);
}

const ST_TLBehaviorAccumulateType& CT_TLCommonBehaviorData::get_accumulate_attr() const
{
    if (m_accumulate_attr)
    {
        return *m_accumulate_attr;
    }
    return ST_TLBehaviorAccumulateType::default_instance();
}

bool CT_TLCommonBehaviorData::has_xfrmType_attr() const
{
    return m_has_xfrmType_attr;
}

void CT_TLCommonBehaviorData::set_xfrmType_attr(const ST_TLBehaviorTransformType& _xfrmType_attr)
{
    m_has_xfrmType_attr = true;
    m_xfrmType_attr = new ST_TLBehaviorTransformType(_xfrmType_attr);
}

const ST_TLBehaviorTransformType& CT_TLCommonBehaviorData::get_xfrmType_attr() const
{
    if (m_xfrmType_attr)
    {
        return *m_xfrmType_attr;
    }
    return ST_TLBehaviorTransformType::default_instance();
}

bool CT_TLCommonBehaviorData::has_from_attr() const
{
    return m_has_from_attr;
}

void CT_TLCommonBehaviorData::set_from_attr(const XSD::string_& _from_attr)
{
    m_has_from_attr = true;
    m_from_attr = _from_attr;
}

const XSD::string_& CT_TLCommonBehaviorData::get_from_attr() const
{
    return m_from_attr;
}

bool CT_TLCommonBehaviorData::has_to_attr() const
{
    return m_has_to_attr;
}

void CT_TLCommonBehaviorData::set_to_attr(const XSD::string_& _to_attr)
{
    m_has_to_attr = true;
    m_to_attr = _to_attr;
}

const XSD::string_& CT_TLCommonBehaviorData::get_to_attr() const
{
    return m_to_attr;
}

bool CT_TLCommonBehaviorData::has_by_attr() const
{
    return m_has_by_attr;
}

void CT_TLCommonBehaviorData::set_by_attr(const XSD::string_& _by_attr)
{
    m_has_by_attr = true;
    m_by_attr = _by_attr;
}

const XSD::string_& CT_TLCommonBehaviorData::get_by_attr() const
{
    return m_by_attr;
}

bool CT_TLCommonBehaviorData::has_rctx_attr() const
{
    return m_has_rctx_attr;
}

void CT_TLCommonBehaviorData::set_rctx_attr(const XSD::string_& _rctx_attr)
{
    m_has_rctx_attr = true;
    m_rctx_attr = _rctx_attr;
}

const XSD::string_& CT_TLCommonBehaviorData::get_rctx_attr() const
{
    return m_rctx_attr;
}

bool CT_TLCommonBehaviorData::has_override_attr() const
{
    return m_has_override_attr;
}

void CT_TLCommonBehaviorData::set_override_attr(const ST_TLBehaviorOverrideType& _override_attr)
{
    m_has_override_attr = true;
    m_override_attr = new ST_TLBehaviorOverrideType(_override_attr);
}

const ST_TLBehaviorOverrideType& CT_TLCommonBehaviorData::get_override_attr() const
{
    if (m_override_attr)
    {
        return *m_override_attr;
    }
    return ST_TLBehaviorOverrideType::default_instance();
}

CT_TLCommonBehaviorData* CT_TLCommonBehaviorData::default_instance_ = NULL;

// CT_TLAnimVariantBooleanVal
CT_TLAnimVariantBooleanVal::CT_TLAnimVariantBooleanVal()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
CT_TLAnimVariantBooleanVal::~CT_TLAnimVariantBooleanVal()
{
    clear();
}
void CT_TLAnimVariantBooleanVal::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void CT_TLAnimVariantBooleanVal::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimVariantBooleanVal& CT_TLAnimVariantBooleanVal::default_instance()
{
    if (!CT_TLAnimVariantBooleanVal::default_instance_)
    {
        CT_TLAnimVariantBooleanVal::default_instance_ = new CT_TLAnimVariantBooleanVal();
    }
    return *CT_TLAnimVariantBooleanVal::default_instance_;
}

bool CT_TLAnimVariantBooleanVal::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TLAnimVariantBooleanVal::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& CT_TLAnimVariantBooleanVal::get_val_attr() const
{
    return m_val_attr;
}

CT_TLAnimVariantBooleanVal* CT_TLAnimVariantBooleanVal::default_instance_ = NULL;

// CT_TLAnimVariantIntegerVal
CT_TLAnimVariantIntegerVal::CT_TLAnimVariantIntegerVal()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
CT_TLAnimVariantIntegerVal::~CT_TLAnimVariantIntegerVal()
{
    clear();
}
void CT_TLAnimVariantIntegerVal::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void CT_TLAnimVariantIntegerVal::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimVariantIntegerVal& CT_TLAnimVariantIntegerVal::default_instance()
{
    if (!CT_TLAnimVariantIntegerVal::default_instance_)
    {
        CT_TLAnimVariantIntegerVal::default_instance_ = new CT_TLAnimVariantIntegerVal();
    }
    return *CT_TLAnimVariantIntegerVal::default_instance_;
}

bool CT_TLAnimVariantIntegerVal::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TLAnimVariantIntegerVal::set_val_attr(const XSD::int_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::int_& CT_TLAnimVariantIntegerVal::get_val_attr() const
{
    return m_val_attr;
}

CT_TLAnimVariantIntegerVal* CT_TLAnimVariantIntegerVal::default_instance_ = NULL;

// CT_TLAnimVariantFloatVal
CT_TLAnimVariantFloatVal::CT_TLAnimVariantFloatVal()
    :m_has_val_attr(false),
     m_val_attr(0)
{
}
CT_TLAnimVariantFloatVal::~CT_TLAnimVariantFloatVal()
{
    clear();
}
void CT_TLAnimVariantFloatVal::clear()
{
    m_has_val_attr = false;
    m_val_attr = 0;
}

void CT_TLAnimVariantFloatVal::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimVariantFloatVal& CT_TLAnimVariantFloatVal::default_instance()
{
    if (!CT_TLAnimVariantFloatVal::default_instance_)
    {
        CT_TLAnimVariantFloatVal::default_instance_ = new CT_TLAnimVariantFloatVal();
    }
    return *CT_TLAnimVariantFloatVal::default_instance_;
}

bool CT_TLAnimVariantFloatVal::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TLAnimVariantFloatVal::set_val_attr(const XSD::float_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::float_& CT_TLAnimVariantFloatVal::get_val_attr() const
{
    return m_val_attr;
}

CT_TLAnimVariantFloatVal* CT_TLAnimVariantFloatVal::default_instance_ = NULL;

// CT_TLAnimVariantStringVal
CT_TLAnimVariantStringVal::CT_TLAnimVariantStringVal()
    :m_has_val_attr(false),
     m_val_attr("")
{
}
CT_TLAnimVariantStringVal::~CT_TLAnimVariantStringVal()
{
    clear();
}
void CT_TLAnimVariantStringVal::clear()
{
    m_has_val_attr = false;
    m_val_attr.clear();
}

void CT_TLAnimVariantStringVal::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimVariantStringVal& CT_TLAnimVariantStringVal::default_instance()
{
    if (!CT_TLAnimVariantStringVal::default_instance_)
    {
        CT_TLAnimVariantStringVal::default_instance_ = new CT_TLAnimVariantStringVal();
    }
    return *CT_TLAnimVariantStringVal::default_instance_;
}

bool CT_TLAnimVariantStringVal::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_TLAnimVariantStringVal::set_val_attr(const XSD::string_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::string_& CT_TLAnimVariantStringVal::get_val_attr() const
{
    return m_val_attr;
}

CT_TLAnimVariantStringVal* CT_TLAnimVariantStringVal::default_instance_ = NULL;

// CT_TLAnimVariant
CT_TLAnimVariant::CT_TLAnimVariant()
    :m_has_boolVal(false),
     m_boolVal(NULL),
     m_has_intVal(false),
     m_intVal(NULL),
     m_has_fltVal(false),
     m_fltVal(NULL),
     m_has_strVal(false),
     m_strVal(NULL),
     m_has_clrVal(false),
     m_clrVal(NULL)
{
}
CT_TLAnimVariant::~CT_TLAnimVariant()
{
    clear();
}
bool CT_TLAnimVariant::has_boolVal() const
{
    return m_has_boolVal;
}

CT_TLAnimVariantBooleanVal* CT_TLAnimVariant::mutable_boolVal()
{

    m_has_intVal = false;

    if (m_intVal)
    {
        delete m_intVal;
        m_intVal = NULL;
    }
    ;

    m_has_fltVal = false;

    if (m_fltVal)
    {
        delete m_fltVal;
        m_fltVal = NULL;
    }
    ;

    m_has_strVal = false;

    if (m_strVal)
    {
        delete m_strVal;
        m_strVal = NULL;
    }
    ;

    m_has_clrVal = false;

    if (m_clrVal)
    {
        delete m_clrVal;
        m_clrVal = NULL;
    }
    ;

    m_has_boolVal = true;
    if (!m_boolVal)
    {
        m_boolVal = new CT_TLAnimVariantBooleanVal();
    }
    return m_boolVal;
}

const CT_TLAnimVariantBooleanVal& CT_TLAnimVariant::get_boolVal() const
{
    if (m_boolVal)
    {
        return *m_boolVal;
    }
    return CT_TLAnimVariantBooleanVal::default_instance();
}

bool CT_TLAnimVariant::has_intVal() const
{
    return m_has_intVal;
}

CT_TLAnimVariantIntegerVal* CT_TLAnimVariant::mutable_intVal()
{

    m_has_boolVal = false;

    if (m_boolVal)
    {
        delete m_boolVal;
        m_boolVal = NULL;
    }
    ;

    m_has_fltVal = false;

    if (m_fltVal)
    {
        delete m_fltVal;
        m_fltVal = NULL;
    }
    ;

    m_has_strVal = false;

    if (m_strVal)
    {
        delete m_strVal;
        m_strVal = NULL;
    }
    ;

    m_has_clrVal = false;

    if (m_clrVal)
    {
        delete m_clrVal;
        m_clrVal = NULL;
    }
    ;

    m_has_intVal = true;
    if (!m_intVal)
    {
        m_intVal = new CT_TLAnimVariantIntegerVal();
    }
    return m_intVal;
}

const CT_TLAnimVariantIntegerVal& CT_TLAnimVariant::get_intVal() const
{
    if (m_intVal)
    {
        return *m_intVal;
    }
    return CT_TLAnimVariantIntegerVal::default_instance();
}

bool CT_TLAnimVariant::has_fltVal() const
{
    return m_has_fltVal;
}

CT_TLAnimVariantFloatVal* CT_TLAnimVariant::mutable_fltVal()
{

    m_has_boolVal = false;

    if (m_boolVal)
    {
        delete m_boolVal;
        m_boolVal = NULL;
    }
    ;

    m_has_intVal = false;

    if (m_intVal)
    {
        delete m_intVal;
        m_intVal = NULL;
    }
    ;

    m_has_strVal = false;

    if (m_strVal)
    {
        delete m_strVal;
        m_strVal = NULL;
    }
    ;

    m_has_clrVal = false;

    if (m_clrVal)
    {
        delete m_clrVal;
        m_clrVal = NULL;
    }
    ;

    m_has_fltVal = true;
    if (!m_fltVal)
    {
        m_fltVal = new CT_TLAnimVariantFloatVal();
    }
    return m_fltVal;
}

const CT_TLAnimVariantFloatVal& CT_TLAnimVariant::get_fltVal() const
{
    if (m_fltVal)
    {
        return *m_fltVal;
    }
    return CT_TLAnimVariantFloatVal::default_instance();
}

bool CT_TLAnimVariant::has_strVal() const
{
    return m_has_strVal;
}

CT_TLAnimVariantStringVal* CT_TLAnimVariant::mutable_strVal()
{

    m_has_boolVal = false;

    if (m_boolVal)
    {
        delete m_boolVal;
        m_boolVal = NULL;
    }
    ;

    m_has_intVal = false;

    if (m_intVal)
    {
        delete m_intVal;
        m_intVal = NULL;
    }
    ;

    m_has_fltVal = false;

    if (m_fltVal)
    {
        delete m_fltVal;
        m_fltVal = NULL;
    }
    ;

    m_has_clrVal = false;

    if (m_clrVal)
    {
        delete m_clrVal;
        m_clrVal = NULL;
    }
    ;

    m_has_strVal = true;
    if (!m_strVal)
    {
        m_strVal = new CT_TLAnimVariantStringVal();
    }
    return m_strVal;
}

const CT_TLAnimVariantStringVal& CT_TLAnimVariant::get_strVal() const
{
    if (m_strVal)
    {
        return *m_strVal;
    }
    return CT_TLAnimVariantStringVal::default_instance();
}

bool CT_TLAnimVariant::has_clrVal() const
{
    return m_has_clrVal;
}

ns_a::CT_Color* CT_TLAnimVariant::mutable_clrVal()
{

    m_has_boolVal = false;

    if (m_boolVal)
    {
        delete m_boolVal;
        m_boolVal = NULL;
    }
    ;

    m_has_intVal = false;

    if (m_intVal)
    {
        delete m_intVal;
        m_intVal = NULL;
    }
    ;

    m_has_fltVal = false;

    if (m_fltVal)
    {
        delete m_fltVal;
        m_fltVal = NULL;
    }
    ;

    m_has_strVal = false;

    if (m_strVal)
    {
        delete m_strVal;
        m_strVal = NULL;
    }
    ;

    m_has_clrVal = true;
    if (!m_clrVal)
    {
        m_clrVal = new ns_a::CT_Color();
    }
    return m_clrVal;
}

const ns_a::CT_Color& CT_TLAnimVariant::get_clrVal() const
{
    if (m_clrVal)
    {
        return *m_clrVal;
    }
    return ns_a::CT_Color::default_instance();
}

void CT_TLAnimVariant::clear()
{
    m_has_boolVal = false;

    if (m_boolVal)
    {
        delete m_boolVal;
        m_boolVal = NULL;
    }


    m_has_intVal = false;

    if (m_intVal)
    {
        delete m_intVal;
        m_intVal = NULL;
    }


    m_has_fltVal = false;

    if (m_fltVal)
    {
        delete m_fltVal;
        m_fltVal = NULL;
    }


    m_has_strVal = false;

    if (m_strVal)
    {
        delete m_strVal;
        m_strVal = NULL;
    }


    m_has_clrVal = false;

    if (m_clrVal)
    {
        delete m_clrVal;
        m_clrVal = NULL;
    }

}

void CT_TLAnimVariant::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[5] = {m_has_boolVal, m_has_intVal, m_has_fltVal, m_has_strVal, m_has_clrVal};
        int cnt = count(elemHasValueList, elemHasValueList + 5, true);
        assert(cnt == 1);
    }


    if (m_has_boolVal)
    {
        m_boolVal->toXmlElem("p:boolVal", "", _outStream);
    }


    if (m_has_intVal)
    {
        m_intVal->toXmlElem("p:intVal", "", _outStream);
    }


    if (m_has_fltVal)
    {
        m_fltVal->toXmlElem("p:fltVal", "", _outStream);
    }


    if (m_has_strVal)
    {
        m_strVal->toXmlElem("p:strVal", "", _outStream);
    }


    if (m_has_clrVal)
    {
        m_clrVal->toXmlElem("p:clrVal", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimVariant& CT_TLAnimVariant::default_instance()
{
    if (!CT_TLAnimVariant::default_instance_)
    {
        CT_TLAnimVariant::default_instance_ = new CT_TLAnimVariant();
    }
    return *CT_TLAnimVariant::default_instance_;
}

CT_TLAnimVariant* CT_TLAnimVariant::default_instance_ = NULL;

// CT_TLTimeAnimateValue
CT_TLTimeAnimateValue::CT_TLTimeAnimateValue()
    :m_has_val(false),
     m_val(NULL),
     m_has_tm_attr(false),
     m_tm_attr(NULL),
     m_has_fmla_attr(false),
     m_fmla_attr("")
{
}
CT_TLTimeAnimateValue::~CT_TLTimeAnimateValue()
{
    clear();
}
bool CT_TLTimeAnimateValue::has_val() const
{
    return m_has_val;
}

CT_TLAnimVariant* CT_TLTimeAnimateValue::mutable_val()
{
    m_has_val = true;
    if (!m_val)
    {
        m_val = new CT_TLAnimVariant();
    }
    return m_val;
}

const CT_TLAnimVariant& CT_TLTimeAnimateValue::get_val() const
{
    if (m_val)
    {
        return *m_val;
    }
    return CT_TLAnimVariant::default_instance();
}

void CT_TLTimeAnimateValue::clear()
{
    m_has_tm_attr = false;

    if (m_tm_attr)
    {
        delete m_tm_attr;
        m_tm_attr = NULL;
    }


    m_has_fmla_attr = false;
    m_fmla_attr.clear();

    m_has_val = false;

    if (m_val)
    {
        delete m_val;
        m_val = NULL;
    }

}

void CT_TLTimeAnimateValue::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_tm_attr)
    {
        m_tm_attr->toXmlAttr("tm", _outStream);
    }



    if (m_has_fmla_attr)
    {
        _outStream << " " << "fmla" << "=\"" << m_fmla_attr << "\"";
    }

    _outStream << ">";


    if (m_has_val)
    {
        m_val->toXmlElem("p:val", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTimeAnimateValue& CT_TLTimeAnimateValue::default_instance()
{
    if (!CT_TLTimeAnimateValue::default_instance_)
    {
        CT_TLTimeAnimateValue::default_instance_ = new CT_TLTimeAnimateValue();
    }
    return *CT_TLTimeAnimateValue::default_instance_;
}

bool CT_TLTimeAnimateValue::has_tm_attr() const
{
    return m_has_tm_attr;
}

void CT_TLTimeAnimateValue::set_tm_attr(const ST_TLTimeAnimateValueTime& _tm_attr)
{
    m_has_tm_attr = true;
    m_tm_attr = new ST_TLTimeAnimateValueTime(_tm_attr);
}

const ST_TLTimeAnimateValueTime& CT_TLTimeAnimateValue::get_tm_attr() const
{
    if (m_tm_attr)
    {
        return *m_tm_attr;
    }
    return ST_TLTimeAnimateValueTime::default_instance();
}

bool CT_TLTimeAnimateValue::has_fmla_attr() const
{
    return m_has_fmla_attr;
}

void CT_TLTimeAnimateValue::set_fmla_attr(const XSD::string_& _fmla_attr)
{
    m_has_fmla_attr = true;
    m_fmla_attr = _fmla_attr;
}

const XSD::string_& CT_TLTimeAnimateValue::get_fmla_attr() const
{
    return m_fmla_attr;
}

CT_TLTimeAnimateValue* CT_TLTimeAnimateValue::default_instance_ = NULL;

// CT_TLTimeAnimateValueList
CT_TLTimeAnimateValueList::CT_TLTimeAnimateValueList()

{
}
CT_TLTimeAnimateValueList::~CT_TLTimeAnimateValueList()
{
    clear();
}
CT_TLTimeAnimateValue* CT_TLTimeAnimateValueList::add_tav()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLTimeAnimateValue* pNewChild = pChildGroup->mutable_tav();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_TLTimeAnimateValueList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_TLTimeAnimateValueList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tav())
            {
                (*iter)->get_tav().toXmlElem("p:tav", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTimeAnimateValueList& CT_TLTimeAnimateValueList::default_instance()
{
    if (!CT_TLTimeAnimateValueList::default_instance_)
    {
        CT_TLTimeAnimateValueList::default_instance_ = new CT_TLTimeAnimateValueList();
    }
    return *CT_TLTimeAnimateValueList::default_instance_;
}


// CT_TLTimeAnimateValueList::ChildGroup_1
CT_TLTimeAnimateValueList::ChildGroup_1::ChildGroup_1()
    :m_has_tav(false),
     m_tav(NULL)
{
}
bool CT_TLTimeAnimateValueList::ChildGroup_1::has_tav() const
{
    return m_has_tav;
}

CT_TLTimeAnimateValue* CT_TLTimeAnimateValueList::ChildGroup_1::mutable_tav()
{

    m_has_tav = true;
    if (!m_tav)
    {
        m_tav = new CT_TLTimeAnimateValue();
    }
    return m_tav;
}

const CT_TLTimeAnimateValue& CT_TLTimeAnimateValueList::ChildGroup_1::get_tav() const
{
    if (m_tav)
    {
        return *m_tav;
    }
    return CT_TLTimeAnimateValue::default_instance();
}

CT_TLTimeAnimateValueList* CT_TLTimeAnimateValueList::default_instance_ = NULL;

// CT_TLAnimateBehavior
CT_TLAnimateBehavior::CT_TLAnimateBehavior()
    :m_has_cBhvr(false),
     m_cBhvr(NULL),
     m_has_tavLst(false),
     m_tavLst(NULL),
     m_has_by_attr(false),
     m_by_attr(""),
     m_has_from_attr(false),
     m_from_attr(""),
     m_has_to_attr(false),
     m_to_attr(""),
     m_has_calcmode_attr(false),
     m_calcmode_attr(NULL),
     m_has_valueType_attr(false),
     m_valueType_attr(NULL)
{
}
CT_TLAnimateBehavior::~CT_TLAnimateBehavior()
{
    clear();
}
bool CT_TLAnimateBehavior::has_cBhvr() const
{
    return m_has_cBhvr;
}

CT_TLCommonBehaviorData* CT_TLAnimateBehavior::mutable_cBhvr()
{
    m_has_cBhvr = true;
    if (!m_cBhvr)
    {
        m_cBhvr = new CT_TLCommonBehaviorData();
    }
    return m_cBhvr;
}

const CT_TLCommonBehaviorData& CT_TLAnimateBehavior::get_cBhvr() const
{
    if (m_cBhvr)
    {
        return *m_cBhvr;
    }
    return CT_TLCommonBehaviorData::default_instance();
}

bool CT_TLAnimateBehavior::has_tavLst() const
{
    return m_has_tavLst;
}

CT_TLTimeAnimateValueList* CT_TLAnimateBehavior::mutable_tavLst()
{
    m_has_tavLst = true;
    if (!m_tavLst)
    {
        m_tavLst = new CT_TLTimeAnimateValueList();
    }
    return m_tavLst;
}

const CT_TLTimeAnimateValueList& CT_TLAnimateBehavior::get_tavLst() const
{
    if (m_tavLst)
    {
        return *m_tavLst;
    }
    return CT_TLTimeAnimateValueList::default_instance();
}

void CT_TLAnimateBehavior::clear()
{
    m_has_by_attr = false;
    m_by_attr.clear();

    m_has_from_attr = false;
    m_from_attr.clear();

    m_has_to_attr = false;
    m_to_attr.clear();

    m_has_calcmode_attr = false;

    if (m_calcmode_attr)
    {
        delete m_calcmode_attr;
        m_calcmode_attr = NULL;
    }


    m_has_valueType_attr = false;

    if (m_valueType_attr)
    {
        delete m_valueType_attr;
        m_valueType_attr = NULL;
    }


    m_has_cBhvr = false;

    if (m_cBhvr)
    {
        delete m_cBhvr;
        m_cBhvr = NULL;
    }


    m_has_tavLst = false;

    if (m_tavLst)
    {
        delete m_tavLst;
        m_tavLst = NULL;
    }

}

void CT_TLAnimateBehavior::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_by_attr)
    {
        _outStream << " " << "by" << "=\"" << m_by_attr << "\"";
    }



    if (m_has_from_attr)
    {
        _outStream << " " << "from" << "=\"" << m_from_attr << "\"";
    }



    if (m_has_to_attr)
    {
        _outStream << " " << "to" << "=\"" << m_to_attr << "\"";
    }



    if (m_has_calcmode_attr)
    {
        m_calcmode_attr->toXmlAttr("calcmode", _outStream);
    }



    if (m_has_valueType_attr)
    {
        m_valueType_attr->toXmlAttr("valueType", _outStream);
    }

    _outStream << ">";

    assert(m_has_cBhvr);


    if (m_has_cBhvr)
    {
        m_cBhvr->toXmlElem("p:cBhvr", "", _outStream);
    }


    if (m_has_tavLst)
    {
        m_tavLst->toXmlElem("p:tavLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimateBehavior& CT_TLAnimateBehavior::default_instance()
{
    if (!CT_TLAnimateBehavior::default_instance_)
    {
        CT_TLAnimateBehavior::default_instance_ = new CT_TLAnimateBehavior();
    }
    return *CT_TLAnimateBehavior::default_instance_;
}

bool CT_TLAnimateBehavior::has_by_attr() const
{
    return m_has_by_attr;
}

void CT_TLAnimateBehavior::set_by_attr(const XSD::string_& _by_attr)
{
    m_has_by_attr = true;
    m_by_attr = _by_attr;
}

const XSD::string_& CT_TLAnimateBehavior::get_by_attr() const
{
    return m_by_attr;
}

bool CT_TLAnimateBehavior::has_from_attr() const
{
    return m_has_from_attr;
}

void CT_TLAnimateBehavior::set_from_attr(const XSD::string_& _from_attr)
{
    m_has_from_attr = true;
    m_from_attr = _from_attr;
}

const XSD::string_& CT_TLAnimateBehavior::get_from_attr() const
{
    return m_from_attr;
}

bool CT_TLAnimateBehavior::has_to_attr() const
{
    return m_has_to_attr;
}

void CT_TLAnimateBehavior::set_to_attr(const XSD::string_& _to_attr)
{
    m_has_to_attr = true;
    m_to_attr = _to_attr;
}

const XSD::string_& CT_TLAnimateBehavior::get_to_attr() const
{
    return m_to_attr;
}

bool CT_TLAnimateBehavior::has_calcmode_attr() const
{
    return m_has_calcmode_attr;
}

void CT_TLAnimateBehavior::set_calcmode_attr(const ST_TLAnimateBehaviorCalcMode& _calcmode_attr)
{
    m_has_calcmode_attr = true;
    m_calcmode_attr = new ST_TLAnimateBehaviorCalcMode(_calcmode_attr);
}

const ST_TLAnimateBehaviorCalcMode& CT_TLAnimateBehavior::get_calcmode_attr() const
{
    if (m_calcmode_attr)
    {
        return *m_calcmode_attr;
    }
    return ST_TLAnimateBehaviorCalcMode::default_instance();
}

bool CT_TLAnimateBehavior::has_valueType_attr() const
{
    return m_has_valueType_attr;
}

void CT_TLAnimateBehavior::set_valueType_attr(const ST_TLAnimateBehaviorValueType& _valueType_attr)
{
    m_has_valueType_attr = true;
    m_valueType_attr = new ST_TLAnimateBehaviorValueType(_valueType_attr);
}

const ST_TLAnimateBehaviorValueType& CT_TLAnimateBehavior::get_valueType_attr() const
{
    if (m_valueType_attr)
    {
        return *m_valueType_attr;
    }
    return ST_TLAnimateBehaviorValueType::default_instance();
}

CT_TLAnimateBehavior* CT_TLAnimateBehavior::default_instance_ = NULL;

// CT_TLByRgbColorTransform
CT_TLByRgbColorTransform::CT_TLByRgbColorTransform()
    :m_has_r_attr(false),
     m_r_attr(NULL),
     m_has_g_attr(false),
     m_g_attr(NULL),
     m_has_b_attr(false),
     m_b_attr(NULL)
{
}
CT_TLByRgbColorTransform::~CT_TLByRgbColorTransform()
{
    clear();
}
void CT_TLByRgbColorTransform::clear()
{
    m_has_r_attr = false;

    if (m_r_attr)
    {
        delete m_r_attr;
        m_r_attr = NULL;
    }


    m_has_g_attr = false;

    if (m_g_attr)
    {
        delete m_g_attr;
        m_g_attr = NULL;
    }


    m_has_b_attr = false;

    if (m_b_attr)
    {
        delete m_b_attr;
        m_b_attr = NULL;
    }

}

void CT_TLByRgbColorTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_attr);
    if (m_has_r_attr)
    {
        m_r_attr->toXmlAttr("r", _outStream);
    }


    assert(m_has_g_attr);
    if (m_has_g_attr)
    {
        m_g_attr->toXmlAttr("g", _outStream);
    }


    assert(m_has_b_attr);
    if (m_has_b_attr)
    {
        m_b_attr->toXmlAttr("b", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLByRgbColorTransform& CT_TLByRgbColorTransform::default_instance()
{
    if (!CT_TLByRgbColorTransform::default_instance_)
    {
        CT_TLByRgbColorTransform::default_instance_ = new CT_TLByRgbColorTransform();
    }
    return *CT_TLByRgbColorTransform::default_instance_;
}

bool CT_TLByRgbColorTransform::has_r_attr() const
{
    return m_has_r_attr;
}

void CT_TLByRgbColorTransform::set_r_attr(const ns_a::ST_FixedPercentage& _r_attr)
{
    m_has_r_attr = true;
    m_r_attr = new ns_a::ST_FixedPercentage(_r_attr);
}

const ns_a::ST_FixedPercentage& CT_TLByRgbColorTransform::get_r_attr() const
{
    if (m_r_attr)
    {
        return *m_r_attr;
    }
    return ns_a::ST_FixedPercentage::default_instance();
}

bool CT_TLByRgbColorTransform::has_g_attr() const
{
    return m_has_g_attr;
}

void CT_TLByRgbColorTransform::set_g_attr(const ns_a::ST_FixedPercentage& _g_attr)
{
    m_has_g_attr = true;
    m_g_attr = new ns_a::ST_FixedPercentage(_g_attr);
}

const ns_a::ST_FixedPercentage& CT_TLByRgbColorTransform::get_g_attr() const
{
    if (m_g_attr)
    {
        return *m_g_attr;
    }
    return ns_a::ST_FixedPercentage::default_instance();
}

bool CT_TLByRgbColorTransform::has_b_attr() const
{
    return m_has_b_attr;
}

void CT_TLByRgbColorTransform::set_b_attr(const ns_a::ST_FixedPercentage& _b_attr)
{
    m_has_b_attr = true;
    m_b_attr = new ns_a::ST_FixedPercentage(_b_attr);
}

const ns_a::ST_FixedPercentage& CT_TLByRgbColorTransform::get_b_attr() const
{
    if (m_b_attr)
    {
        return *m_b_attr;
    }
    return ns_a::ST_FixedPercentage::default_instance();
}

CT_TLByRgbColorTransform* CT_TLByRgbColorTransform::default_instance_ = NULL;

// CT_TLByHslColorTransform
CT_TLByHslColorTransform::CT_TLByHslColorTransform()
    :m_has_h_attr(false),
     m_h_attr(NULL),
     m_has_s_attr(false),
     m_s_attr(NULL),
     m_has_l_attr(false),
     m_l_attr(NULL)
{
}
CT_TLByHslColorTransform::~CT_TLByHslColorTransform()
{
    clear();
}
void CT_TLByHslColorTransform::clear()
{
    m_has_h_attr = false;

    if (m_h_attr)
    {
        delete m_h_attr;
        m_h_attr = NULL;
    }


    m_has_s_attr = false;

    if (m_s_attr)
    {
        delete m_s_attr;
        m_s_attr = NULL;
    }


    m_has_l_attr = false;

    if (m_l_attr)
    {
        delete m_l_attr;
        m_l_attr = NULL;
    }

}

void CT_TLByHslColorTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_h_attr);
    if (m_has_h_attr)
    {
        m_h_attr->toXmlAttr("h", _outStream);
    }


    assert(m_has_s_attr);
    if (m_has_s_attr)
    {
        m_s_attr->toXmlAttr("s", _outStream);
    }


    assert(m_has_l_attr);
    if (m_has_l_attr)
    {
        m_l_attr->toXmlAttr("l", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLByHslColorTransform& CT_TLByHslColorTransform::default_instance()
{
    if (!CT_TLByHslColorTransform::default_instance_)
    {
        CT_TLByHslColorTransform::default_instance_ = new CT_TLByHslColorTransform();
    }
    return *CT_TLByHslColorTransform::default_instance_;
}

bool CT_TLByHslColorTransform::has_h_attr() const
{
    return m_has_h_attr;
}

void CT_TLByHslColorTransform::set_h_attr(const ns_a::ST_Angle& _h_attr)
{
    m_has_h_attr = true;
    m_h_attr = new ns_a::ST_Angle(_h_attr);
}

const ns_a::ST_Angle& CT_TLByHslColorTransform::get_h_attr() const
{
    if (m_h_attr)
    {
        return *m_h_attr;
    }
    return ns_a::ST_Angle::default_instance();
}

bool CT_TLByHslColorTransform::has_s_attr() const
{
    return m_has_s_attr;
}

void CT_TLByHslColorTransform::set_s_attr(const ns_a::ST_FixedPercentage& _s_attr)
{
    m_has_s_attr = true;
    m_s_attr = new ns_a::ST_FixedPercentage(_s_attr);
}

const ns_a::ST_FixedPercentage& CT_TLByHslColorTransform::get_s_attr() const
{
    if (m_s_attr)
    {
        return *m_s_attr;
    }
    return ns_a::ST_FixedPercentage::default_instance();
}

bool CT_TLByHslColorTransform::has_l_attr() const
{
    return m_has_l_attr;
}

void CT_TLByHslColorTransform::set_l_attr(const ns_a::ST_FixedPercentage& _l_attr)
{
    m_has_l_attr = true;
    m_l_attr = new ns_a::ST_FixedPercentage(_l_attr);
}

const ns_a::ST_FixedPercentage& CT_TLByHslColorTransform::get_l_attr() const
{
    if (m_l_attr)
    {
        return *m_l_attr;
    }
    return ns_a::ST_FixedPercentage::default_instance();
}

CT_TLByHslColorTransform* CT_TLByHslColorTransform::default_instance_ = NULL;

// CT_TLByAnimateColorTransform
CT_TLByAnimateColorTransform::CT_TLByAnimateColorTransform()
    :m_has_rgb(false),
     m_rgb(NULL),
     m_has_hsl(false),
     m_hsl(NULL)
{
}
CT_TLByAnimateColorTransform::~CT_TLByAnimateColorTransform()
{
    clear();
}
bool CT_TLByAnimateColorTransform::has_rgb() const
{
    return m_has_rgb;
}

CT_TLByRgbColorTransform* CT_TLByAnimateColorTransform::mutable_rgb()
{

    m_has_hsl = false;

    if (m_hsl)
    {
        delete m_hsl;
        m_hsl = NULL;
    }
    ;

    m_has_rgb = true;
    if (!m_rgb)
    {
        m_rgb = new CT_TLByRgbColorTransform();
    }
    return m_rgb;
}

const CT_TLByRgbColorTransform& CT_TLByAnimateColorTransform::get_rgb() const
{
    if (m_rgb)
    {
        return *m_rgb;
    }
    return CT_TLByRgbColorTransform::default_instance();
}

bool CT_TLByAnimateColorTransform::has_hsl() const
{
    return m_has_hsl;
}

CT_TLByHslColorTransform* CT_TLByAnimateColorTransform::mutable_hsl()
{

    m_has_rgb = false;

    if (m_rgb)
    {
        delete m_rgb;
        m_rgb = NULL;
    }
    ;

    m_has_hsl = true;
    if (!m_hsl)
    {
        m_hsl = new CT_TLByHslColorTransform();
    }
    return m_hsl;
}

const CT_TLByHslColorTransform& CT_TLByAnimateColorTransform::get_hsl() const
{
    if (m_hsl)
    {
        return *m_hsl;
    }
    return CT_TLByHslColorTransform::default_instance();
}

void CT_TLByAnimateColorTransform::clear()
{
    m_has_rgb = false;

    if (m_rgb)
    {
        delete m_rgb;
        m_rgb = NULL;
    }


    m_has_hsl = false;

    if (m_hsl)
    {
        delete m_hsl;
        m_hsl = NULL;
    }

}

void CT_TLByAnimateColorTransform::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_rgb, m_has_hsl};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_rgb)
    {
        m_rgb->toXmlElem("p:rgb", "", _outStream);
    }


    if (m_has_hsl)
    {
        m_hsl->toXmlElem("p:hsl", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLByAnimateColorTransform& CT_TLByAnimateColorTransform::default_instance()
{
    if (!CT_TLByAnimateColorTransform::default_instance_)
    {
        CT_TLByAnimateColorTransform::default_instance_ = new CT_TLByAnimateColorTransform();
    }
    return *CT_TLByAnimateColorTransform::default_instance_;
}

CT_TLByAnimateColorTransform* CT_TLByAnimateColorTransform::default_instance_ = NULL;

// CT_TLAnimateColorBehavior
CT_TLAnimateColorBehavior::CT_TLAnimateColorBehavior()
    :m_has_cBhvr(false),
     m_cBhvr(NULL),
     m_has_by(false),
     m_by(NULL),
     m_has_from(false),
     m_from(NULL),
     m_has_to(false),
     m_to(NULL),
     m_has_clrSpc_attr(false),
     m_clrSpc_attr(NULL),
     m_has_dir_attr(false),
     m_dir_attr(NULL)
{
}
CT_TLAnimateColorBehavior::~CT_TLAnimateColorBehavior()
{
    clear();
}
bool CT_TLAnimateColorBehavior::has_cBhvr() const
{
    return m_has_cBhvr;
}

CT_TLCommonBehaviorData* CT_TLAnimateColorBehavior::mutable_cBhvr()
{
    m_has_cBhvr = true;
    if (!m_cBhvr)
    {
        m_cBhvr = new CT_TLCommonBehaviorData();
    }
    return m_cBhvr;
}

const CT_TLCommonBehaviorData& CT_TLAnimateColorBehavior::get_cBhvr() const
{
    if (m_cBhvr)
    {
        return *m_cBhvr;
    }
    return CT_TLCommonBehaviorData::default_instance();
}

bool CT_TLAnimateColorBehavior::has_by() const
{
    return m_has_by;
}

CT_TLByAnimateColorTransform* CT_TLAnimateColorBehavior::mutable_by()
{
    m_has_by = true;
    if (!m_by)
    {
        m_by = new CT_TLByAnimateColorTransform();
    }
    return m_by;
}

const CT_TLByAnimateColorTransform& CT_TLAnimateColorBehavior::get_by() const
{
    if (m_by)
    {
        return *m_by;
    }
    return CT_TLByAnimateColorTransform::default_instance();
}

bool CT_TLAnimateColorBehavior::has_from() const
{
    return m_has_from;
}

ns_a::CT_Color* CT_TLAnimateColorBehavior::mutable_from()
{
    m_has_from = true;
    if (!m_from)
    {
        m_from = new ns_a::CT_Color();
    }
    return m_from;
}

const ns_a::CT_Color& CT_TLAnimateColorBehavior::get_from() const
{
    if (m_from)
    {
        return *m_from;
    }
    return ns_a::CT_Color::default_instance();
}

bool CT_TLAnimateColorBehavior::has_to() const
{
    return m_has_to;
}

ns_a::CT_Color* CT_TLAnimateColorBehavior::mutable_to()
{
    m_has_to = true;
    if (!m_to)
    {
        m_to = new ns_a::CT_Color();
    }
    return m_to;
}

const ns_a::CT_Color& CT_TLAnimateColorBehavior::get_to() const
{
    if (m_to)
    {
        return *m_to;
    }
    return ns_a::CT_Color::default_instance();
}

void CT_TLAnimateColorBehavior::clear()
{
    m_has_clrSpc_attr = false;

    if (m_clrSpc_attr)
    {
        delete m_clrSpc_attr;
        m_clrSpc_attr = NULL;
    }


    m_has_dir_attr = false;

    if (m_dir_attr)
    {
        delete m_dir_attr;
        m_dir_attr = NULL;
    }


    m_has_cBhvr = false;

    if (m_cBhvr)
    {
        delete m_cBhvr;
        m_cBhvr = NULL;
    }


    m_has_by = false;

    if (m_by)
    {
        delete m_by;
        m_by = NULL;
    }


    m_has_from = false;

    if (m_from)
    {
        delete m_from;
        m_from = NULL;
    }


    m_has_to = false;

    if (m_to)
    {
        delete m_to;
        m_to = NULL;
    }

}

void CT_TLAnimateColorBehavior::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_clrSpc_attr)
    {
        m_clrSpc_attr->toXmlAttr("clrSpc", _outStream);
    }



    if (m_has_dir_attr)
    {
        m_dir_attr->toXmlAttr("dir", _outStream);
    }

    _outStream << ">";

    assert(m_has_cBhvr);


    if (m_has_cBhvr)
    {
        m_cBhvr->toXmlElem("p:cBhvr", "", _outStream);
    }


    if (m_has_by)
    {
        m_by->toXmlElem("p:by", "", _outStream);
    }


    if (m_has_from)
    {
        m_from->toXmlElem("p:from", "", _outStream);
    }


    if (m_has_to)
    {
        m_to->toXmlElem("p:to", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimateColorBehavior& CT_TLAnimateColorBehavior::default_instance()
{
    if (!CT_TLAnimateColorBehavior::default_instance_)
    {
        CT_TLAnimateColorBehavior::default_instance_ = new CT_TLAnimateColorBehavior();
    }
    return *CT_TLAnimateColorBehavior::default_instance_;
}

bool CT_TLAnimateColorBehavior::has_clrSpc_attr() const
{
    return m_has_clrSpc_attr;
}

void CT_TLAnimateColorBehavior::set_clrSpc_attr(const ST_TLAnimateColorSpace& _clrSpc_attr)
{
    m_has_clrSpc_attr = true;
    m_clrSpc_attr = new ST_TLAnimateColorSpace(_clrSpc_attr);
}

const ST_TLAnimateColorSpace& CT_TLAnimateColorBehavior::get_clrSpc_attr() const
{
    if (m_clrSpc_attr)
    {
        return *m_clrSpc_attr;
    }
    return ST_TLAnimateColorSpace::default_instance();
}

bool CT_TLAnimateColorBehavior::has_dir_attr() const
{
    return m_has_dir_attr;
}

void CT_TLAnimateColorBehavior::set_dir_attr(const ST_TLAnimateColorDirection& _dir_attr)
{
    m_has_dir_attr = true;
    m_dir_attr = new ST_TLAnimateColorDirection(_dir_attr);
}

const ST_TLAnimateColorDirection& CT_TLAnimateColorBehavior::get_dir_attr() const
{
    if (m_dir_attr)
    {
        return *m_dir_attr;
    }
    return ST_TLAnimateColorDirection::default_instance();
}

CT_TLAnimateColorBehavior* CT_TLAnimateColorBehavior::default_instance_ = NULL;

// CT_TLAnimateEffectBehavior
CT_TLAnimateEffectBehavior::CT_TLAnimateEffectBehavior()
    :m_has_cBhvr(false),
     m_cBhvr(NULL),
     m_has_progress(false),
     m_progress(NULL),
     m_has_transition_attr(false),
     m_transition_attr(NULL),
     m_has_filter_attr(false),
     m_filter_attr(""),
     m_has_prLst_attr(false),
     m_prLst_attr("")
{
}
CT_TLAnimateEffectBehavior::~CT_TLAnimateEffectBehavior()
{
    clear();
}
bool CT_TLAnimateEffectBehavior::has_cBhvr() const
{
    return m_has_cBhvr;
}

CT_TLCommonBehaviorData* CT_TLAnimateEffectBehavior::mutable_cBhvr()
{
    m_has_cBhvr = true;
    if (!m_cBhvr)
    {
        m_cBhvr = new CT_TLCommonBehaviorData();
    }
    return m_cBhvr;
}

const CT_TLCommonBehaviorData& CT_TLAnimateEffectBehavior::get_cBhvr() const
{
    if (m_cBhvr)
    {
        return *m_cBhvr;
    }
    return CT_TLCommonBehaviorData::default_instance();
}

bool CT_TLAnimateEffectBehavior::has_progress() const
{
    return m_has_progress;
}

CT_TLAnimVariant* CT_TLAnimateEffectBehavior::mutable_progress()
{
    m_has_progress = true;
    if (!m_progress)
    {
        m_progress = new CT_TLAnimVariant();
    }
    return m_progress;
}

const CT_TLAnimVariant& CT_TLAnimateEffectBehavior::get_progress() const
{
    if (m_progress)
    {
        return *m_progress;
    }
    return CT_TLAnimVariant::default_instance();
}

void CT_TLAnimateEffectBehavior::clear()
{
    m_has_transition_attr = false;

    if (m_transition_attr)
    {
        delete m_transition_attr;
        m_transition_attr = NULL;
    }


    m_has_filter_attr = false;
    m_filter_attr.clear();

    m_has_prLst_attr = false;
    m_prLst_attr.clear();

    m_has_cBhvr = false;

    if (m_cBhvr)
    {
        delete m_cBhvr;
        m_cBhvr = NULL;
    }


    m_has_progress = false;

    if (m_progress)
    {
        delete m_progress;
        m_progress = NULL;
    }

}

void CT_TLAnimateEffectBehavior::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_transition_attr)
    {
        m_transition_attr->toXmlAttr("transition", _outStream);
    }



    if (m_has_filter_attr)
    {
        _outStream << " " << "filter" << "=\"" << m_filter_attr << "\"";
    }



    if (m_has_prLst_attr)
    {
        _outStream << " " << "prLst" << "=\"" << m_prLst_attr << "\"";
    }

    _outStream << ">";

    assert(m_has_cBhvr);


    if (m_has_cBhvr)
    {
        m_cBhvr->toXmlElem("p:cBhvr", "", _outStream);
    }


    if (m_has_progress)
    {
        m_progress->toXmlElem("p:progress", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimateEffectBehavior& CT_TLAnimateEffectBehavior::default_instance()
{
    if (!CT_TLAnimateEffectBehavior::default_instance_)
    {
        CT_TLAnimateEffectBehavior::default_instance_ = new CT_TLAnimateEffectBehavior();
    }
    return *CT_TLAnimateEffectBehavior::default_instance_;
}

bool CT_TLAnimateEffectBehavior::has_transition_attr() const
{
    return m_has_transition_attr;
}

void CT_TLAnimateEffectBehavior::set_transition_attr(const ST_TLAnimateEffectTransition& _transition_attr)
{
    m_has_transition_attr = true;
    m_transition_attr = new ST_TLAnimateEffectTransition(_transition_attr);
}

const ST_TLAnimateEffectTransition& CT_TLAnimateEffectBehavior::get_transition_attr() const
{
    if (m_transition_attr)
    {
        return *m_transition_attr;
    }
    return ST_TLAnimateEffectTransition::default_instance();
}

bool CT_TLAnimateEffectBehavior::has_filter_attr() const
{
    return m_has_filter_attr;
}

void CT_TLAnimateEffectBehavior::set_filter_attr(const XSD::string_& _filter_attr)
{
    m_has_filter_attr = true;
    m_filter_attr = _filter_attr;
}

const XSD::string_& CT_TLAnimateEffectBehavior::get_filter_attr() const
{
    return m_filter_attr;
}

bool CT_TLAnimateEffectBehavior::has_prLst_attr() const
{
    return m_has_prLst_attr;
}

void CT_TLAnimateEffectBehavior::set_prLst_attr(const XSD::string_& _prLst_attr)
{
    m_has_prLst_attr = true;
    m_prLst_attr = _prLst_attr;
}

const XSD::string_& CT_TLAnimateEffectBehavior::get_prLst_attr() const
{
    return m_prLst_attr;
}

CT_TLAnimateEffectBehavior* CT_TLAnimateEffectBehavior::default_instance_ = NULL;

// CT_TLPoint
CT_TLPoint::CT_TLPoint()
    :m_has_x_attr(false),
     m_x_attr(NULL),
     m_has_y_attr(false),
     m_y_attr(NULL)
{
}
CT_TLPoint::~CT_TLPoint()
{
    clear();
}
void CT_TLPoint::clear()
{
    m_has_x_attr = false;

    if (m_x_attr)
    {
        delete m_x_attr;
        m_x_attr = NULL;
    }


    m_has_y_attr = false;

    if (m_y_attr)
    {
        delete m_y_attr;
        m_y_attr = NULL;
    }

}

void CT_TLPoint::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_x_attr);
    if (m_has_x_attr)
    {
        m_x_attr->toXmlAttr("x", _outStream);
    }


    assert(m_has_y_attr);
    if (m_has_y_attr)
    {
        m_y_attr->toXmlAttr("y", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLPoint& CT_TLPoint::default_instance()
{
    if (!CT_TLPoint::default_instance_)
    {
        CT_TLPoint::default_instance_ = new CT_TLPoint();
    }
    return *CT_TLPoint::default_instance_;
}

bool CT_TLPoint::has_x_attr() const
{
    return m_has_x_attr;
}

void CT_TLPoint::set_x_attr(const ns_a::ST_Percentage& _x_attr)
{
    m_has_x_attr = true;
    m_x_attr = new ns_a::ST_Percentage(_x_attr);
}

const ns_a::ST_Percentage& CT_TLPoint::get_x_attr() const
{
    if (m_x_attr)
    {
        return *m_x_attr;
    }
    return ns_a::ST_Percentage::default_instance();
}

bool CT_TLPoint::has_y_attr() const
{
    return m_has_y_attr;
}

void CT_TLPoint::set_y_attr(const ns_a::ST_Percentage& _y_attr)
{
    m_has_y_attr = true;
    m_y_attr = new ns_a::ST_Percentage(_y_attr);
}

const ns_a::ST_Percentage& CT_TLPoint::get_y_attr() const
{
    if (m_y_attr)
    {
        return *m_y_attr;
    }
    return ns_a::ST_Percentage::default_instance();
}

CT_TLPoint* CT_TLPoint::default_instance_ = NULL;

// CT_TLAnimateMotionBehavior
CT_TLAnimateMotionBehavior::CT_TLAnimateMotionBehavior()
    :m_has_cBhvr(false),
     m_cBhvr(NULL),
     m_has_by(false),
     m_by(NULL),
     m_has_from(false),
     m_from(NULL),
     m_has_to(false),
     m_to(NULL),
     m_has_rCtr(false),
     m_rCtr(NULL),
     m_has_origin_attr(false),
     m_origin_attr(NULL),
     m_has_path_attr(false),
     m_path_attr(""),
     m_has_pathEditMode_attr(false),
     m_pathEditMode_attr(NULL),
     m_has_rAng_attr(false),
     m_rAng_attr(NULL),
     m_has_ptsTypes_attr(false),
     m_ptsTypes_attr("")
{
}
CT_TLAnimateMotionBehavior::~CT_TLAnimateMotionBehavior()
{
    clear();
}
bool CT_TLAnimateMotionBehavior::has_cBhvr() const
{
    return m_has_cBhvr;
}

CT_TLCommonBehaviorData* CT_TLAnimateMotionBehavior::mutable_cBhvr()
{
    m_has_cBhvr = true;
    if (!m_cBhvr)
    {
        m_cBhvr = new CT_TLCommonBehaviorData();
    }
    return m_cBhvr;
}

const CT_TLCommonBehaviorData& CT_TLAnimateMotionBehavior::get_cBhvr() const
{
    if (m_cBhvr)
    {
        return *m_cBhvr;
    }
    return CT_TLCommonBehaviorData::default_instance();
}

bool CT_TLAnimateMotionBehavior::has_by() const
{
    return m_has_by;
}

CT_TLPoint* CT_TLAnimateMotionBehavior::mutable_by()
{
    m_has_by = true;
    if (!m_by)
    {
        m_by = new CT_TLPoint();
    }
    return m_by;
}

const CT_TLPoint& CT_TLAnimateMotionBehavior::get_by() const
{
    if (m_by)
    {
        return *m_by;
    }
    return CT_TLPoint::default_instance();
}

bool CT_TLAnimateMotionBehavior::has_from() const
{
    return m_has_from;
}

CT_TLPoint* CT_TLAnimateMotionBehavior::mutable_from()
{
    m_has_from = true;
    if (!m_from)
    {
        m_from = new CT_TLPoint();
    }
    return m_from;
}

const CT_TLPoint& CT_TLAnimateMotionBehavior::get_from() const
{
    if (m_from)
    {
        return *m_from;
    }
    return CT_TLPoint::default_instance();
}

bool CT_TLAnimateMotionBehavior::has_to() const
{
    return m_has_to;
}

CT_TLPoint* CT_TLAnimateMotionBehavior::mutable_to()
{
    m_has_to = true;
    if (!m_to)
    {
        m_to = new CT_TLPoint();
    }
    return m_to;
}

const CT_TLPoint& CT_TLAnimateMotionBehavior::get_to() const
{
    if (m_to)
    {
        return *m_to;
    }
    return CT_TLPoint::default_instance();
}

bool CT_TLAnimateMotionBehavior::has_rCtr() const
{
    return m_has_rCtr;
}

CT_TLPoint* CT_TLAnimateMotionBehavior::mutable_rCtr()
{
    m_has_rCtr = true;
    if (!m_rCtr)
    {
        m_rCtr = new CT_TLPoint();
    }
    return m_rCtr;
}

const CT_TLPoint& CT_TLAnimateMotionBehavior::get_rCtr() const
{
    if (m_rCtr)
    {
        return *m_rCtr;
    }
    return CT_TLPoint::default_instance();
}

void CT_TLAnimateMotionBehavior::clear()
{
    m_has_origin_attr = false;

    if (m_origin_attr)
    {
        delete m_origin_attr;
        m_origin_attr = NULL;
    }


    m_has_path_attr = false;
    m_path_attr.clear();

    m_has_pathEditMode_attr = false;

    if (m_pathEditMode_attr)
    {
        delete m_pathEditMode_attr;
        m_pathEditMode_attr = NULL;
    }


    m_has_rAng_attr = false;

    if (m_rAng_attr)
    {
        delete m_rAng_attr;
        m_rAng_attr = NULL;
    }


    m_has_ptsTypes_attr = false;
    m_ptsTypes_attr.clear();

    m_has_cBhvr = false;

    if (m_cBhvr)
    {
        delete m_cBhvr;
        m_cBhvr = NULL;
    }


    m_has_by = false;

    if (m_by)
    {
        delete m_by;
        m_by = NULL;
    }


    m_has_from = false;

    if (m_from)
    {
        delete m_from;
        m_from = NULL;
    }


    m_has_to = false;

    if (m_to)
    {
        delete m_to;
        m_to = NULL;
    }


    m_has_rCtr = false;

    if (m_rCtr)
    {
        delete m_rCtr;
        m_rCtr = NULL;
    }

}

void CT_TLAnimateMotionBehavior::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_origin_attr)
    {
        m_origin_attr->toXmlAttr("origin", _outStream);
    }



    if (m_has_path_attr)
    {
        _outStream << " " << "path" << "=\"" << m_path_attr << "\"";
    }



    if (m_has_pathEditMode_attr)
    {
        m_pathEditMode_attr->toXmlAttr("pathEditMode", _outStream);
    }



    if (m_has_rAng_attr)
    {
        m_rAng_attr->toXmlAttr("rAng", _outStream);
    }



    if (m_has_ptsTypes_attr)
    {
        _outStream << " " << "ptsTypes" << "=\"" << m_ptsTypes_attr << "\"";
    }

    _outStream << ">";

    assert(m_has_cBhvr);


    if (m_has_cBhvr)
    {
        m_cBhvr->toXmlElem("p:cBhvr", "", _outStream);
    }


    if (m_has_by)
    {
        m_by->toXmlElem("p:by", "", _outStream);
    }


    if (m_has_from)
    {
        m_from->toXmlElem("p:from", "", _outStream);
    }


    if (m_has_to)
    {
        m_to->toXmlElem("p:to", "", _outStream);
    }


    if (m_has_rCtr)
    {
        m_rCtr->toXmlElem("p:rCtr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimateMotionBehavior& CT_TLAnimateMotionBehavior::default_instance()
{
    if (!CT_TLAnimateMotionBehavior::default_instance_)
    {
        CT_TLAnimateMotionBehavior::default_instance_ = new CT_TLAnimateMotionBehavior();
    }
    return *CT_TLAnimateMotionBehavior::default_instance_;
}

bool CT_TLAnimateMotionBehavior::has_origin_attr() const
{
    return m_has_origin_attr;
}

void CT_TLAnimateMotionBehavior::set_origin_attr(const ST_TLAnimateMotionBehaviorOrigin& _origin_attr)
{
    m_has_origin_attr = true;
    m_origin_attr = new ST_TLAnimateMotionBehaviorOrigin(_origin_attr);
}

const ST_TLAnimateMotionBehaviorOrigin& CT_TLAnimateMotionBehavior::get_origin_attr() const
{
    if (m_origin_attr)
    {
        return *m_origin_attr;
    }
    return ST_TLAnimateMotionBehaviorOrigin::default_instance();
}

bool CT_TLAnimateMotionBehavior::has_path_attr() const
{
    return m_has_path_attr;
}

void CT_TLAnimateMotionBehavior::set_path_attr(const XSD::string_& _path_attr)
{
    m_has_path_attr = true;
    m_path_attr = _path_attr;
}

const XSD::string_& CT_TLAnimateMotionBehavior::get_path_attr() const
{
    return m_path_attr;
}

bool CT_TLAnimateMotionBehavior::has_pathEditMode_attr() const
{
    return m_has_pathEditMode_attr;
}

void CT_TLAnimateMotionBehavior::set_pathEditMode_attr(const ST_TLAnimateMotionPathEditMode& _pathEditMode_attr)
{
    m_has_pathEditMode_attr = true;
    m_pathEditMode_attr = new ST_TLAnimateMotionPathEditMode(_pathEditMode_attr);
}

const ST_TLAnimateMotionPathEditMode& CT_TLAnimateMotionBehavior::get_pathEditMode_attr() const
{
    if (m_pathEditMode_attr)
    {
        return *m_pathEditMode_attr;
    }
    return ST_TLAnimateMotionPathEditMode::default_instance();
}

bool CT_TLAnimateMotionBehavior::has_rAng_attr() const
{
    return m_has_rAng_attr;
}

void CT_TLAnimateMotionBehavior::set_rAng_attr(const ns_a::ST_Angle& _rAng_attr)
{
    m_has_rAng_attr = true;
    m_rAng_attr = new ns_a::ST_Angle(_rAng_attr);
}

const ns_a::ST_Angle& CT_TLAnimateMotionBehavior::get_rAng_attr() const
{
    if (m_rAng_attr)
    {
        return *m_rAng_attr;
    }
    return ns_a::ST_Angle::default_instance();
}

bool CT_TLAnimateMotionBehavior::has_ptsTypes_attr() const
{
    return m_has_ptsTypes_attr;
}

void CT_TLAnimateMotionBehavior::set_ptsTypes_attr(const XSD::string_& _ptsTypes_attr)
{
    m_has_ptsTypes_attr = true;
    m_ptsTypes_attr = _ptsTypes_attr;
}

const XSD::string_& CT_TLAnimateMotionBehavior::get_ptsTypes_attr() const
{
    return m_ptsTypes_attr;
}

CT_TLAnimateMotionBehavior* CT_TLAnimateMotionBehavior::default_instance_ = NULL;

// CT_TLAnimateRotationBehavior
CT_TLAnimateRotationBehavior::CT_TLAnimateRotationBehavior()
    :m_has_cBhvr(false),
     m_cBhvr(NULL),
     m_has_by_attr(false),
     m_by_attr(NULL),
     m_has_from_attr(false),
     m_from_attr(NULL),
     m_has_to_attr(false),
     m_to_attr(NULL)
{
}
CT_TLAnimateRotationBehavior::~CT_TLAnimateRotationBehavior()
{
    clear();
}
bool CT_TLAnimateRotationBehavior::has_cBhvr() const
{
    return m_has_cBhvr;
}

CT_TLCommonBehaviorData* CT_TLAnimateRotationBehavior::mutable_cBhvr()
{
    m_has_cBhvr = true;
    if (!m_cBhvr)
    {
        m_cBhvr = new CT_TLCommonBehaviorData();
    }
    return m_cBhvr;
}

const CT_TLCommonBehaviorData& CT_TLAnimateRotationBehavior::get_cBhvr() const
{
    if (m_cBhvr)
    {
        return *m_cBhvr;
    }
    return CT_TLCommonBehaviorData::default_instance();
}

void CT_TLAnimateRotationBehavior::clear()
{
    m_has_by_attr = false;

    if (m_by_attr)
    {
        delete m_by_attr;
        m_by_attr = NULL;
    }


    m_has_from_attr = false;

    if (m_from_attr)
    {
        delete m_from_attr;
        m_from_attr = NULL;
    }


    m_has_to_attr = false;

    if (m_to_attr)
    {
        delete m_to_attr;
        m_to_attr = NULL;
    }


    m_has_cBhvr = false;

    if (m_cBhvr)
    {
        delete m_cBhvr;
        m_cBhvr = NULL;
    }

}

void CT_TLAnimateRotationBehavior::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_by_attr)
    {
        m_by_attr->toXmlAttr("by", _outStream);
    }



    if (m_has_from_attr)
    {
        m_from_attr->toXmlAttr("from", _outStream);
    }



    if (m_has_to_attr)
    {
        m_to_attr->toXmlAttr("to", _outStream);
    }

    _outStream << ">";

    assert(m_has_cBhvr);


    if (m_has_cBhvr)
    {
        m_cBhvr->toXmlElem("p:cBhvr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimateRotationBehavior& CT_TLAnimateRotationBehavior::default_instance()
{
    if (!CT_TLAnimateRotationBehavior::default_instance_)
    {
        CT_TLAnimateRotationBehavior::default_instance_ = new CT_TLAnimateRotationBehavior();
    }
    return *CT_TLAnimateRotationBehavior::default_instance_;
}

bool CT_TLAnimateRotationBehavior::has_by_attr() const
{
    return m_has_by_attr;
}

void CT_TLAnimateRotationBehavior::set_by_attr(const ns_a::ST_Angle& _by_attr)
{
    m_has_by_attr = true;
    m_by_attr = new ns_a::ST_Angle(_by_attr);
}

const ns_a::ST_Angle& CT_TLAnimateRotationBehavior::get_by_attr() const
{
    if (m_by_attr)
    {
        return *m_by_attr;
    }
    return ns_a::ST_Angle::default_instance();
}

bool CT_TLAnimateRotationBehavior::has_from_attr() const
{
    return m_has_from_attr;
}

void CT_TLAnimateRotationBehavior::set_from_attr(const ns_a::ST_Angle& _from_attr)
{
    m_has_from_attr = true;
    m_from_attr = new ns_a::ST_Angle(_from_attr);
}

const ns_a::ST_Angle& CT_TLAnimateRotationBehavior::get_from_attr() const
{
    if (m_from_attr)
    {
        return *m_from_attr;
    }
    return ns_a::ST_Angle::default_instance();
}

bool CT_TLAnimateRotationBehavior::has_to_attr() const
{
    return m_has_to_attr;
}

void CT_TLAnimateRotationBehavior::set_to_attr(const ns_a::ST_Angle& _to_attr)
{
    m_has_to_attr = true;
    m_to_attr = new ns_a::ST_Angle(_to_attr);
}

const ns_a::ST_Angle& CT_TLAnimateRotationBehavior::get_to_attr() const
{
    if (m_to_attr)
    {
        return *m_to_attr;
    }
    return ns_a::ST_Angle::default_instance();
}

CT_TLAnimateRotationBehavior* CT_TLAnimateRotationBehavior::default_instance_ = NULL;

// CT_TLAnimateScaleBehavior
CT_TLAnimateScaleBehavior::CT_TLAnimateScaleBehavior()
    :m_has_cBhvr(false),
     m_cBhvr(NULL),
     m_has_by(false),
     m_by(NULL),
     m_has_from(false),
     m_from(NULL),
     m_has_to(false),
     m_to(NULL),
     m_has_zoomContents_attr(false),
     m_zoomContents_attr(false)
{
}
CT_TLAnimateScaleBehavior::~CT_TLAnimateScaleBehavior()
{
    clear();
}
bool CT_TLAnimateScaleBehavior::has_cBhvr() const
{
    return m_has_cBhvr;
}

CT_TLCommonBehaviorData* CT_TLAnimateScaleBehavior::mutable_cBhvr()
{
    m_has_cBhvr = true;
    if (!m_cBhvr)
    {
        m_cBhvr = new CT_TLCommonBehaviorData();
    }
    return m_cBhvr;
}

const CT_TLCommonBehaviorData& CT_TLAnimateScaleBehavior::get_cBhvr() const
{
    if (m_cBhvr)
    {
        return *m_cBhvr;
    }
    return CT_TLCommonBehaviorData::default_instance();
}

bool CT_TLAnimateScaleBehavior::has_by() const
{
    return m_has_by;
}

CT_TLPoint* CT_TLAnimateScaleBehavior::mutable_by()
{
    m_has_by = true;
    if (!m_by)
    {
        m_by = new CT_TLPoint();
    }
    return m_by;
}

const CT_TLPoint& CT_TLAnimateScaleBehavior::get_by() const
{
    if (m_by)
    {
        return *m_by;
    }
    return CT_TLPoint::default_instance();
}

bool CT_TLAnimateScaleBehavior::has_from() const
{
    return m_has_from;
}

CT_TLPoint* CT_TLAnimateScaleBehavior::mutable_from()
{
    m_has_from = true;
    if (!m_from)
    {
        m_from = new CT_TLPoint();
    }
    return m_from;
}

const CT_TLPoint& CT_TLAnimateScaleBehavior::get_from() const
{
    if (m_from)
    {
        return *m_from;
    }
    return CT_TLPoint::default_instance();
}

bool CT_TLAnimateScaleBehavior::has_to() const
{
    return m_has_to;
}

CT_TLPoint* CT_TLAnimateScaleBehavior::mutable_to()
{
    m_has_to = true;
    if (!m_to)
    {
        m_to = new CT_TLPoint();
    }
    return m_to;
}

const CT_TLPoint& CT_TLAnimateScaleBehavior::get_to() const
{
    if (m_to)
    {
        return *m_to;
    }
    return CT_TLPoint::default_instance();
}

void CT_TLAnimateScaleBehavior::clear()
{
    m_has_zoomContents_attr = false;
    m_zoomContents_attr = false;

    m_has_cBhvr = false;

    if (m_cBhvr)
    {
        delete m_cBhvr;
        m_cBhvr = NULL;
    }


    m_has_by = false;

    if (m_by)
    {
        delete m_by;
        m_by = NULL;
    }


    m_has_from = false;

    if (m_from)
    {
        delete m_from;
        m_from = NULL;
    }


    m_has_to = false;

    if (m_to)
    {
        delete m_to;
        m_to = NULL;
    }

}

void CT_TLAnimateScaleBehavior::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_zoomContents_attr)
    {
        _outStream << " " << "zoomContents" << "=\"" << XSD::XMLBooleanStr(m_zoomContents_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cBhvr);


    if (m_has_cBhvr)
    {
        m_cBhvr->toXmlElem("p:cBhvr", "", _outStream);
    }


    if (m_has_by)
    {
        m_by->toXmlElem("p:by", "", _outStream);
    }


    if (m_has_from)
    {
        m_from->toXmlElem("p:from", "", _outStream);
    }


    if (m_has_to)
    {
        m_to->toXmlElem("p:to", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLAnimateScaleBehavior& CT_TLAnimateScaleBehavior::default_instance()
{
    if (!CT_TLAnimateScaleBehavior::default_instance_)
    {
        CT_TLAnimateScaleBehavior::default_instance_ = new CT_TLAnimateScaleBehavior();
    }
    return *CT_TLAnimateScaleBehavior::default_instance_;
}

bool CT_TLAnimateScaleBehavior::has_zoomContents_attr() const
{
    return m_has_zoomContents_attr;
}

void CT_TLAnimateScaleBehavior::set_zoomContents_attr(const XSD::boolean_& _zoomContents_attr)
{
    m_has_zoomContents_attr = true;
    m_zoomContents_attr = _zoomContents_attr;
}

const XSD::boolean_& CT_TLAnimateScaleBehavior::get_zoomContents_attr() const
{
    return m_zoomContents_attr;
}

CT_TLAnimateScaleBehavior* CT_TLAnimateScaleBehavior::default_instance_ = NULL;

// CT_TLCommandBehavior
CT_TLCommandBehavior::CT_TLCommandBehavior()
    :m_has_cBhvr(false),
     m_cBhvr(NULL),
     m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_cmd_attr(false),
     m_cmd_attr("")
{
}
CT_TLCommandBehavior::~CT_TLCommandBehavior()
{
    clear();
}
bool CT_TLCommandBehavior::has_cBhvr() const
{
    return m_has_cBhvr;
}

CT_TLCommonBehaviorData* CT_TLCommandBehavior::mutable_cBhvr()
{
    m_has_cBhvr = true;
    if (!m_cBhvr)
    {
        m_cBhvr = new CT_TLCommonBehaviorData();
    }
    return m_cBhvr;
}

const CT_TLCommonBehaviorData& CT_TLCommandBehavior::get_cBhvr() const
{
    if (m_cBhvr)
    {
        return *m_cBhvr;
    }
    return CT_TLCommonBehaviorData::default_instance();
}

void CT_TLCommandBehavior::clear()
{
    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_cmd_attr = false;
    m_cmd_attr.clear();

    m_has_cBhvr = false;

    if (m_cBhvr)
    {
        delete m_cBhvr;
        m_cBhvr = NULL;
    }

}

void CT_TLCommandBehavior::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_cmd_attr)
    {
        _outStream << " " << "cmd" << "=\"" << m_cmd_attr << "\"";
    }

    _outStream << ">";

    assert(m_has_cBhvr);


    if (m_has_cBhvr)
    {
        m_cBhvr->toXmlElem("p:cBhvr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLCommandBehavior& CT_TLCommandBehavior::default_instance()
{
    if (!CT_TLCommandBehavior::default_instance_)
    {
        CT_TLCommandBehavior::default_instance_ = new CT_TLCommandBehavior();
    }
    return *CT_TLCommandBehavior::default_instance_;
}

bool CT_TLCommandBehavior::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_TLCommandBehavior::set_type_attr(const ST_TLCommandType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_TLCommandType(_type_attr);
}

const ST_TLCommandType& CT_TLCommandBehavior::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_TLCommandType::default_instance();
}

bool CT_TLCommandBehavior::has_cmd_attr() const
{
    return m_has_cmd_attr;
}

void CT_TLCommandBehavior::set_cmd_attr(const XSD::string_& _cmd_attr)
{
    m_has_cmd_attr = true;
    m_cmd_attr = _cmd_attr;
}

const XSD::string_& CT_TLCommandBehavior::get_cmd_attr() const
{
    return m_cmd_attr;
}

CT_TLCommandBehavior* CT_TLCommandBehavior::default_instance_ = NULL;

// CT_TLSetBehavior
CT_TLSetBehavior::CT_TLSetBehavior()
    :m_has_cBhvr(false),
     m_cBhvr(NULL),
     m_has_to(false),
     m_to(NULL)
{
}
CT_TLSetBehavior::~CT_TLSetBehavior()
{
    clear();
}
bool CT_TLSetBehavior::has_cBhvr() const
{
    return m_has_cBhvr;
}

CT_TLCommonBehaviorData* CT_TLSetBehavior::mutable_cBhvr()
{
    m_has_cBhvr = true;
    if (!m_cBhvr)
    {
        m_cBhvr = new CT_TLCommonBehaviorData();
    }
    return m_cBhvr;
}

const CT_TLCommonBehaviorData& CT_TLSetBehavior::get_cBhvr() const
{
    if (m_cBhvr)
    {
        return *m_cBhvr;
    }
    return CT_TLCommonBehaviorData::default_instance();
}

bool CT_TLSetBehavior::has_to() const
{
    return m_has_to;
}

CT_TLAnimVariant* CT_TLSetBehavior::mutable_to()
{
    m_has_to = true;
    if (!m_to)
    {
        m_to = new CT_TLAnimVariant();
    }
    return m_to;
}

const CT_TLAnimVariant& CT_TLSetBehavior::get_to() const
{
    if (m_to)
    {
        return *m_to;
    }
    return CT_TLAnimVariant::default_instance();
}

void CT_TLSetBehavior::clear()
{
    m_has_cBhvr = false;

    if (m_cBhvr)
    {
        delete m_cBhvr;
        m_cBhvr = NULL;
    }


    m_has_to = false;

    if (m_to)
    {
        delete m_to;
        m_to = NULL;
    }

}

void CT_TLSetBehavior::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cBhvr);


    if (m_has_cBhvr)
    {
        m_cBhvr->toXmlElem("p:cBhvr", "", _outStream);
    }


    if (m_has_to)
    {
        m_to->toXmlElem("p:to", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLSetBehavior& CT_TLSetBehavior::default_instance()
{
    if (!CT_TLSetBehavior::default_instance_)
    {
        CT_TLSetBehavior::default_instance_ = new CT_TLSetBehavior();
    }
    return *CT_TLSetBehavior::default_instance_;
}

CT_TLSetBehavior* CT_TLSetBehavior::default_instance_ = NULL;

// CT_TLCommonMediaNodeData
CT_TLCommonMediaNodeData::CT_TLCommonMediaNodeData()
    :m_has_cTn(false),
     m_cTn(NULL),
     m_has_tgtEl(false),
     m_tgtEl(NULL),
     m_has_vol_attr(false),
     m_vol_attr(NULL),
     m_has_mute_attr(false),
     m_mute_attr(false),
     m_has_numSld_attr(false),
     m_numSld_attr(0),
     m_has_showWhenStopped_attr(false),
     m_showWhenStopped_attr(false)
{
}
CT_TLCommonMediaNodeData::~CT_TLCommonMediaNodeData()
{
    clear();
}
bool CT_TLCommonMediaNodeData::has_cTn() const
{
    return m_has_cTn;
}

CT_TLCommonTimeNodeData* CT_TLCommonMediaNodeData::mutable_cTn()
{
    m_has_cTn = true;
    if (!m_cTn)
    {
        m_cTn = new CT_TLCommonTimeNodeData();
    }
    return m_cTn;
}

const CT_TLCommonTimeNodeData& CT_TLCommonMediaNodeData::get_cTn() const
{
    if (m_cTn)
    {
        return *m_cTn;
    }
    return CT_TLCommonTimeNodeData::default_instance();
}

bool CT_TLCommonMediaNodeData::has_tgtEl() const
{
    return m_has_tgtEl;
}

CT_TLTimeTargetElement* CT_TLCommonMediaNodeData::mutable_tgtEl()
{
    m_has_tgtEl = true;
    if (!m_tgtEl)
    {
        m_tgtEl = new CT_TLTimeTargetElement();
    }
    return m_tgtEl;
}

const CT_TLTimeTargetElement& CT_TLCommonMediaNodeData::get_tgtEl() const
{
    if (m_tgtEl)
    {
        return *m_tgtEl;
    }
    return CT_TLTimeTargetElement::default_instance();
}

void CT_TLCommonMediaNodeData::clear()
{
    m_has_vol_attr = false;

    if (m_vol_attr)
    {
        delete m_vol_attr;
        m_vol_attr = NULL;
    }


    m_has_mute_attr = false;
    m_mute_attr = false;

    m_has_numSld_attr = false;
    m_numSld_attr = 0;

    m_has_showWhenStopped_attr = false;
    m_showWhenStopped_attr = false;

    m_has_cTn = false;

    if (m_cTn)
    {
        delete m_cTn;
        m_cTn = NULL;
    }


    m_has_tgtEl = false;

    if (m_tgtEl)
    {
        delete m_tgtEl;
        m_tgtEl = NULL;
    }

}

void CT_TLCommonMediaNodeData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_vol_attr)
    {
        m_vol_attr->toXmlAttr("vol", _outStream);
    }



    if (m_has_mute_attr)
    {
        _outStream << " " << "mute" << "=\"" << XSD::XMLBooleanStr(m_mute_attr) << "\"";
    }



    if (m_has_numSld_attr)
    {
        _outStream << " " << "numSld" << "=\"" << m_numSld_attr << "\"";
    }



    if (m_has_showWhenStopped_attr)
    {
        _outStream << " " << "showWhenStopped" << "=\"" << XSD::XMLBooleanStr(m_showWhenStopped_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cTn);


    assert(m_has_tgtEl);


    if (m_has_cTn)
    {
        m_cTn->toXmlElem("p:cTn", "", _outStream);
    }


    if (m_has_tgtEl)
    {
        m_tgtEl->toXmlElem("p:tgtEl", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLCommonMediaNodeData& CT_TLCommonMediaNodeData::default_instance()
{
    if (!CT_TLCommonMediaNodeData::default_instance_)
    {
        CT_TLCommonMediaNodeData::default_instance_ = new CT_TLCommonMediaNodeData();
    }
    return *CT_TLCommonMediaNodeData::default_instance_;
}

bool CT_TLCommonMediaNodeData::has_vol_attr() const
{
    return m_has_vol_attr;
}

void CT_TLCommonMediaNodeData::set_vol_attr(const ns_a::ST_PositiveFixedPercentage& _vol_attr)
{
    m_has_vol_attr = true;
    m_vol_attr = new ns_a::ST_PositiveFixedPercentage(_vol_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_TLCommonMediaNodeData::get_vol_attr() const
{
    if (m_vol_attr)
    {
        return *m_vol_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_TLCommonMediaNodeData::has_mute_attr() const
{
    return m_has_mute_attr;
}

void CT_TLCommonMediaNodeData::set_mute_attr(const XSD::boolean_& _mute_attr)
{
    m_has_mute_attr = true;
    m_mute_attr = _mute_attr;
}

const XSD::boolean_& CT_TLCommonMediaNodeData::get_mute_attr() const
{
    return m_mute_attr;
}

bool CT_TLCommonMediaNodeData::has_numSld_attr() const
{
    return m_has_numSld_attr;
}

void CT_TLCommonMediaNodeData::set_numSld_attr(const XSD::unsignedInt_& _numSld_attr)
{
    m_has_numSld_attr = true;
    m_numSld_attr = _numSld_attr;
}

const XSD::unsignedInt_& CT_TLCommonMediaNodeData::get_numSld_attr() const
{
    return m_numSld_attr;
}

bool CT_TLCommonMediaNodeData::has_showWhenStopped_attr() const
{
    return m_has_showWhenStopped_attr;
}

void CT_TLCommonMediaNodeData::set_showWhenStopped_attr(const XSD::boolean_& _showWhenStopped_attr)
{
    m_has_showWhenStopped_attr = true;
    m_showWhenStopped_attr = _showWhenStopped_attr;
}

const XSD::boolean_& CT_TLCommonMediaNodeData::get_showWhenStopped_attr() const
{
    return m_showWhenStopped_attr;
}

CT_TLCommonMediaNodeData* CT_TLCommonMediaNodeData::default_instance_ = NULL;

// CT_TLMediaNodeAudio
CT_TLMediaNodeAudio::CT_TLMediaNodeAudio()
    :m_has_cMediaNode(false),
     m_cMediaNode(NULL),
     m_has_isNarration_attr(false),
     m_isNarration_attr(false)
{
}
CT_TLMediaNodeAudio::~CT_TLMediaNodeAudio()
{
    clear();
}
bool CT_TLMediaNodeAudio::has_cMediaNode() const
{
    return m_has_cMediaNode;
}

CT_TLCommonMediaNodeData* CT_TLMediaNodeAudio::mutable_cMediaNode()
{
    m_has_cMediaNode = true;
    if (!m_cMediaNode)
    {
        m_cMediaNode = new CT_TLCommonMediaNodeData();
    }
    return m_cMediaNode;
}

const CT_TLCommonMediaNodeData& CT_TLMediaNodeAudio::get_cMediaNode() const
{
    if (m_cMediaNode)
    {
        return *m_cMediaNode;
    }
    return CT_TLCommonMediaNodeData::default_instance();
}

void CT_TLMediaNodeAudio::clear()
{
    m_has_isNarration_attr = false;
    m_isNarration_attr = false;

    m_has_cMediaNode = false;

    if (m_cMediaNode)
    {
        delete m_cMediaNode;
        m_cMediaNode = NULL;
    }

}

void CT_TLMediaNodeAudio::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_isNarration_attr)
    {
        _outStream << " " << "isNarration" << "=\"" << XSD::XMLBooleanStr(m_isNarration_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cMediaNode);


    if (m_has_cMediaNode)
    {
        m_cMediaNode->toXmlElem("p:cMediaNode", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLMediaNodeAudio& CT_TLMediaNodeAudio::default_instance()
{
    if (!CT_TLMediaNodeAudio::default_instance_)
    {
        CT_TLMediaNodeAudio::default_instance_ = new CT_TLMediaNodeAudio();
    }
    return *CT_TLMediaNodeAudio::default_instance_;
}

bool CT_TLMediaNodeAudio::has_isNarration_attr() const
{
    return m_has_isNarration_attr;
}

void CT_TLMediaNodeAudio::set_isNarration_attr(const XSD::boolean_& _isNarration_attr)
{
    m_has_isNarration_attr = true;
    m_isNarration_attr = _isNarration_attr;
}

const XSD::boolean_& CT_TLMediaNodeAudio::get_isNarration_attr() const
{
    return m_isNarration_attr;
}

CT_TLMediaNodeAudio* CT_TLMediaNodeAudio::default_instance_ = NULL;

// CT_TLMediaNodeVideo
CT_TLMediaNodeVideo::CT_TLMediaNodeVideo()
    :m_has_cMediaNode(false),
     m_cMediaNode(NULL),
     m_has_fullScrn_attr(false),
     m_fullScrn_attr(false)
{
}
CT_TLMediaNodeVideo::~CT_TLMediaNodeVideo()
{
    clear();
}
bool CT_TLMediaNodeVideo::has_cMediaNode() const
{
    return m_has_cMediaNode;
}

CT_TLCommonMediaNodeData* CT_TLMediaNodeVideo::mutable_cMediaNode()
{
    m_has_cMediaNode = true;
    if (!m_cMediaNode)
    {
        m_cMediaNode = new CT_TLCommonMediaNodeData();
    }
    return m_cMediaNode;
}

const CT_TLCommonMediaNodeData& CT_TLMediaNodeVideo::get_cMediaNode() const
{
    if (m_cMediaNode)
    {
        return *m_cMediaNode;
    }
    return CT_TLCommonMediaNodeData::default_instance();
}

void CT_TLMediaNodeVideo::clear()
{
    m_has_fullScrn_attr = false;
    m_fullScrn_attr = false;

    m_has_cMediaNode = false;

    if (m_cMediaNode)
    {
        delete m_cMediaNode;
        m_cMediaNode = NULL;
    }

}

void CT_TLMediaNodeVideo::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_fullScrn_attr)
    {
        _outStream << " " << "fullScrn" << "=\"" << XSD::XMLBooleanStr(m_fullScrn_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cMediaNode);


    if (m_has_cMediaNode)
    {
        m_cMediaNode->toXmlElem("p:cMediaNode", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLMediaNodeVideo& CT_TLMediaNodeVideo::default_instance()
{
    if (!CT_TLMediaNodeVideo::default_instance_)
    {
        CT_TLMediaNodeVideo::default_instance_ = new CT_TLMediaNodeVideo();
    }
    return *CT_TLMediaNodeVideo::default_instance_;
}

bool CT_TLMediaNodeVideo::has_fullScrn_attr() const
{
    return m_has_fullScrn_attr;
}

void CT_TLMediaNodeVideo::set_fullScrn_attr(const XSD::boolean_& _fullScrn_attr)
{
    m_has_fullScrn_attr = true;
    m_fullScrn_attr = _fullScrn_attr;
}

const XSD::boolean_& CT_TLMediaNodeVideo::get_fullScrn_attr() const
{
    return m_fullScrn_attr;
}

CT_TLMediaNodeVideo* CT_TLMediaNodeVideo::default_instance_ = NULL;

// CT_TLTemplate
CT_TLTemplate::CT_TLTemplate()
    :m_has_tnLst(false),
     m_tnLst(NULL),
     m_has_lvl_attr(false),
     m_lvl_attr(0)
{
}
CT_TLTemplate::~CT_TLTemplate()
{
    clear();
}
bool CT_TLTemplate::has_tnLst() const
{
    return m_has_tnLst;
}

CT_TimeNodeList* CT_TLTemplate::mutable_tnLst()
{
    m_has_tnLst = true;
    if (!m_tnLst)
    {
        m_tnLst = new CT_TimeNodeList();
    }
    return m_tnLst;
}

const CT_TimeNodeList& CT_TLTemplate::get_tnLst() const
{
    if (m_tnLst)
    {
        return *m_tnLst;
    }
    return CT_TimeNodeList::default_instance();
}

void CT_TLTemplate::clear()
{
    m_has_lvl_attr = false;
    m_lvl_attr = 0;

    m_has_tnLst = false;

    if (m_tnLst)
    {
        delete m_tnLst;
        m_tnLst = NULL;
    }

}

void CT_TLTemplate::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_lvl_attr)
    {
        _outStream << " " << "lvl" << "=\"" << m_lvl_attr << "\"";
    }

    _outStream << ">";

    assert(m_has_tnLst);


    if (m_has_tnLst)
    {
        m_tnLst->toXmlElem("p:tnLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTemplate& CT_TLTemplate::default_instance()
{
    if (!CT_TLTemplate::default_instance_)
    {
        CT_TLTemplate::default_instance_ = new CT_TLTemplate();
    }
    return *CT_TLTemplate::default_instance_;
}

bool CT_TLTemplate::has_lvl_attr() const
{
    return m_has_lvl_attr;
}

void CT_TLTemplate::set_lvl_attr(const XSD::unsignedInt_& _lvl_attr)
{
    m_has_lvl_attr = true;
    m_lvl_attr = _lvl_attr;
}

const XSD::unsignedInt_& CT_TLTemplate::get_lvl_attr() const
{
    return m_lvl_attr;
}

CT_TLTemplate* CT_TLTemplate::default_instance_ = NULL;

// CT_TLTemplateList
CT_TLTemplateList::CT_TLTemplateList()

{
}
CT_TLTemplateList::~CT_TLTemplateList()
{
    clear();
}
CT_TLTemplate* CT_TLTemplateList::add_tmpl()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLTemplate* pNewChild = pChildGroup->mutable_tmpl();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_TLTemplateList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_TLTemplateList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_tmpl));
        assert(0 <= elemCnt && elemCnt <= 9);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tmpl())
            {
                (*iter)->get_tmpl().toXmlElem("p:tmpl", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLTemplateList& CT_TLTemplateList::default_instance()
{
    if (!CT_TLTemplateList::default_instance_)
    {
        CT_TLTemplateList::default_instance_ = new CT_TLTemplateList();
    }
    return *CT_TLTemplateList::default_instance_;
}


// CT_TLTemplateList::ChildGroup_1
CT_TLTemplateList::ChildGroup_1::ChildGroup_1()
    :m_has_tmpl(false),
     m_tmpl(NULL)
{
}
bool CT_TLTemplateList::ChildGroup_1::has_tmpl() const
{
    return m_has_tmpl;
}

CT_TLTemplate* CT_TLTemplateList::ChildGroup_1::mutable_tmpl()
{

    m_has_tmpl = true;
    if (!m_tmpl)
    {
        m_tmpl = new CT_TLTemplate();
    }
    return m_tmpl;
}

const CT_TLTemplate& CT_TLTemplateList::ChildGroup_1::get_tmpl() const
{
    if (m_tmpl)
    {
        return *m_tmpl;
    }
    return CT_TLTemplate::default_instance();
}

CT_TLTemplateList* CT_TLTemplateList::default_instance_ = NULL;

// CT_TLBuildParagraph
CT_TLBuildParagraph::CT_TLBuildParagraph()
    :m_has_tmplLst(false),
     m_tmplLst(NULL),
     m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_grpId_attr(false),
     m_grpId_attr(0),
     m_has_uiExpand_attr(false),
     m_uiExpand_attr(false),
     m_has_build_attr(false),
     m_build_attr(NULL),
     m_has_bldLvl_attr(false),
     m_bldLvl_attr(0),
     m_has_animBg_attr(false),
     m_animBg_attr(false),
     m_has_autoUpdateAnimBg_attr(false),
     m_autoUpdateAnimBg_attr(false),
     m_has_rev_attr(false),
     m_rev_attr(false),
     m_has_advAuto_attr(false),
     m_advAuto_attr(NULL)
{
}
CT_TLBuildParagraph::~CT_TLBuildParagraph()
{
    clear();
}
bool CT_TLBuildParagraph::has_tmplLst() const
{
    return m_has_tmplLst;
}

CT_TLTemplateList* CT_TLBuildParagraph::mutable_tmplLst()
{
    m_has_tmplLst = true;
    if (!m_tmplLst)
    {
        m_tmplLst = new CT_TLTemplateList();
    }
    return m_tmplLst;
}

const CT_TLTemplateList& CT_TLBuildParagraph::get_tmplLst() const
{
    if (m_tmplLst)
    {
        return *m_tmplLst;
    }
    return CT_TLTemplateList::default_instance();
}

void CT_TLBuildParagraph::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_grpId_attr = false;
    m_grpId_attr = 0;

    m_has_uiExpand_attr = false;
    m_uiExpand_attr = false;

    m_has_build_attr = false;

    if (m_build_attr)
    {
        delete m_build_attr;
        m_build_attr = NULL;
    }


    m_has_bldLvl_attr = false;
    m_bldLvl_attr = 0;

    m_has_animBg_attr = false;
    m_animBg_attr = false;

    m_has_autoUpdateAnimBg_attr = false;
    m_autoUpdateAnimBg_attr = false;

    m_has_rev_attr = false;
    m_rev_attr = false;

    m_has_advAuto_attr = false;

    if (m_advAuto_attr)
    {
        delete m_advAuto_attr;
        m_advAuto_attr = NULL;
    }


    m_has_tmplLst = false;

    if (m_tmplLst)
    {
        delete m_tmplLst;
        m_tmplLst = NULL;
    }

}

void CT_TLBuildParagraph::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_spid_attr);
    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }


    assert(m_has_grpId_attr);
    if (m_has_grpId_attr)
    {
        _outStream << " " << "grpId" << "=\"" << m_grpId_attr << "\"";
    }



    if (m_has_uiExpand_attr)
    {
        _outStream << " " << "uiExpand" << "=\"" << XSD::XMLBooleanStr(m_uiExpand_attr) << "\"";
    }



    if (m_has_build_attr)
    {
        m_build_attr->toXmlAttr("build", _outStream);
    }



    if (m_has_bldLvl_attr)
    {
        _outStream << " " << "bldLvl" << "=\"" << m_bldLvl_attr << "\"";
    }



    if (m_has_animBg_attr)
    {
        _outStream << " " << "animBg" << "=\"" << XSD::XMLBooleanStr(m_animBg_attr) << "\"";
    }



    if (m_has_autoUpdateAnimBg_attr)
    {
        _outStream << " " << "autoUpdateAnimBg" << "=\"" << XSD::XMLBooleanStr(m_autoUpdateAnimBg_attr) << "\"";
    }



    if (m_has_rev_attr)
    {
        _outStream << " " << "rev" << "=\"" << XSD::XMLBooleanStr(m_rev_attr) << "\"";
    }



    if (m_has_advAuto_attr)
    {
        m_advAuto_attr->toXmlAttr("advAuto", _outStream);
    }

    _outStream << ">";


    if (m_has_tmplLst)
    {
        m_tmplLst->toXmlElem("p:tmplLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLBuildParagraph& CT_TLBuildParagraph::default_instance()
{
    if (!CT_TLBuildParagraph::default_instance_)
    {
        CT_TLBuildParagraph::default_instance_ = new CT_TLBuildParagraph();
    }
    return *CT_TLBuildParagraph::default_instance_;
}

bool CT_TLBuildParagraph::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_TLBuildParagraph::set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
}

const ns_a::ST_DrawingElementId& CT_TLBuildParagraph::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

bool CT_TLBuildParagraph::has_grpId_attr() const
{
    return m_has_grpId_attr;
}

void CT_TLBuildParagraph::set_grpId_attr(const XSD::unsignedInt_& _grpId_attr)
{
    m_has_grpId_attr = true;
    m_grpId_attr = _grpId_attr;
}

const XSD::unsignedInt_& CT_TLBuildParagraph::get_grpId_attr() const
{
    return m_grpId_attr;
}

bool CT_TLBuildParagraph::has_uiExpand_attr() const
{
    return m_has_uiExpand_attr;
}

void CT_TLBuildParagraph::set_uiExpand_attr(const XSD::boolean_& _uiExpand_attr)
{
    m_has_uiExpand_attr = true;
    m_uiExpand_attr = _uiExpand_attr;
}

const XSD::boolean_& CT_TLBuildParagraph::get_uiExpand_attr() const
{
    return m_uiExpand_attr;
}

bool CT_TLBuildParagraph::has_build_attr() const
{
    return m_has_build_attr;
}

void CT_TLBuildParagraph::set_build_attr(const ST_TLParaBuildType& _build_attr)
{
    m_has_build_attr = true;
    m_build_attr = new ST_TLParaBuildType(_build_attr);
}

const ST_TLParaBuildType& CT_TLBuildParagraph::get_build_attr() const
{
    if (m_build_attr)
    {
        return *m_build_attr;
    }
    return ST_TLParaBuildType::default_instance();
}

bool CT_TLBuildParagraph::has_bldLvl_attr() const
{
    return m_has_bldLvl_attr;
}

void CT_TLBuildParagraph::set_bldLvl_attr(const XSD::unsignedInt_& _bldLvl_attr)
{
    m_has_bldLvl_attr = true;
    m_bldLvl_attr = _bldLvl_attr;
}

const XSD::unsignedInt_& CT_TLBuildParagraph::get_bldLvl_attr() const
{
    return m_bldLvl_attr;
}

bool CT_TLBuildParagraph::has_animBg_attr() const
{
    return m_has_animBg_attr;
}

void CT_TLBuildParagraph::set_animBg_attr(const XSD::boolean_& _animBg_attr)
{
    m_has_animBg_attr = true;
    m_animBg_attr = _animBg_attr;
}

const XSD::boolean_& CT_TLBuildParagraph::get_animBg_attr() const
{
    return m_animBg_attr;
}

bool CT_TLBuildParagraph::has_autoUpdateAnimBg_attr() const
{
    return m_has_autoUpdateAnimBg_attr;
}

void CT_TLBuildParagraph::set_autoUpdateAnimBg_attr(const XSD::boolean_& _autoUpdateAnimBg_attr)
{
    m_has_autoUpdateAnimBg_attr = true;
    m_autoUpdateAnimBg_attr = _autoUpdateAnimBg_attr;
}

const XSD::boolean_& CT_TLBuildParagraph::get_autoUpdateAnimBg_attr() const
{
    return m_autoUpdateAnimBg_attr;
}

bool CT_TLBuildParagraph::has_rev_attr() const
{
    return m_has_rev_attr;
}

void CT_TLBuildParagraph::set_rev_attr(const XSD::boolean_& _rev_attr)
{
    m_has_rev_attr = true;
    m_rev_attr = _rev_attr;
}

const XSD::boolean_& CT_TLBuildParagraph::get_rev_attr() const
{
    return m_rev_attr;
}

bool CT_TLBuildParagraph::has_advAuto_attr() const
{
    return m_has_advAuto_attr;
}

void CT_TLBuildParagraph::set_advAuto_attr(const ST_TLTime& _advAuto_attr)
{
    m_has_advAuto_attr = true;
    m_advAuto_attr = new ST_TLTime(_advAuto_attr);
}

const ST_TLTime& CT_TLBuildParagraph::get_advAuto_attr() const
{
    if (m_advAuto_attr)
    {
        return *m_advAuto_attr;
    }
    return ST_TLTime::default_instance();
}

CT_TLBuildParagraph* CT_TLBuildParagraph::default_instance_ = NULL;

// CT_TLBuildDiagram
CT_TLBuildDiagram::CT_TLBuildDiagram()
    :m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_grpId_attr(false),
     m_grpId_attr(0),
     m_has_uiExpand_attr(false),
     m_uiExpand_attr(false),
     m_has_bld_attr(false),
     m_bld_attr(NULL)
{
}
CT_TLBuildDiagram::~CT_TLBuildDiagram()
{
    clear();
}
void CT_TLBuildDiagram::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_grpId_attr = false;
    m_grpId_attr = 0;

    m_has_uiExpand_attr = false;
    m_uiExpand_attr = false;

    m_has_bld_attr = false;

    if (m_bld_attr)
    {
        delete m_bld_attr;
        m_bld_attr = NULL;
    }

}

void CT_TLBuildDiagram::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_spid_attr);
    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }


    assert(m_has_grpId_attr);
    if (m_has_grpId_attr)
    {
        _outStream << " " << "grpId" << "=\"" << m_grpId_attr << "\"";
    }



    if (m_has_uiExpand_attr)
    {
        _outStream << " " << "uiExpand" << "=\"" << XSD::XMLBooleanStr(m_uiExpand_attr) << "\"";
    }



    if (m_has_bld_attr)
    {
        m_bld_attr->toXmlAttr("bld", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLBuildDiagram& CT_TLBuildDiagram::default_instance()
{
    if (!CT_TLBuildDiagram::default_instance_)
    {
        CT_TLBuildDiagram::default_instance_ = new CT_TLBuildDiagram();
    }
    return *CT_TLBuildDiagram::default_instance_;
}

bool CT_TLBuildDiagram::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_TLBuildDiagram::set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
}

const ns_a::ST_DrawingElementId& CT_TLBuildDiagram::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

bool CT_TLBuildDiagram::has_grpId_attr() const
{
    return m_has_grpId_attr;
}

void CT_TLBuildDiagram::set_grpId_attr(const XSD::unsignedInt_& _grpId_attr)
{
    m_has_grpId_attr = true;
    m_grpId_attr = _grpId_attr;
}

const XSD::unsignedInt_& CT_TLBuildDiagram::get_grpId_attr() const
{
    return m_grpId_attr;
}

bool CT_TLBuildDiagram::has_uiExpand_attr() const
{
    return m_has_uiExpand_attr;
}

void CT_TLBuildDiagram::set_uiExpand_attr(const XSD::boolean_& _uiExpand_attr)
{
    m_has_uiExpand_attr = true;
    m_uiExpand_attr = _uiExpand_attr;
}

const XSD::boolean_& CT_TLBuildDiagram::get_uiExpand_attr() const
{
    return m_uiExpand_attr;
}

bool CT_TLBuildDiagram::has_bld_attr() const
{
    return m_has_bld_attr;
}

void CT_TLBuildDiagram::set_bld_attr(const ST_TLDiagramBuildType& _bld_attr)
{
    m_has_bld_attr = true;
    m_bld_attr = new ST_TLDiagramBuildType(_bld_attr);
}

const ST_TLDiagramBuildType& CT_TLBuildDiagram::get_bld_attr() const
{
    if (m_bld_attr)
    {
        return *m_bld_attr;
    }
    return ST_TLDiagramBuildType::default_instance();
}

CT_TLBuildDiagram* CT_TLBuildDiagram::default_instance_ = NULL;

// CT_TLOleBuildChart
CT_TLOleBuildChart::CT_TLOleBuildChart()
    :m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_grpId_attr(false),
     m_grpId_attr(0),
     m_has_uiExpand_attr(false),
     m_uiExpand_attr(false),
     m_has_bld_attr(false),
     m_bld_attr(NULL),
     m_has_animBg_attr(false),
     m_animBg_attr(false)
{
}
CT_TLOleBuildChart::~CT_TLOleBuildChart()
{
    clear();
}
void CT_TLOleBuildChart::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_grpId_attr = false;
    m_grpId_attr = 0;

    m_has_uiExpand_attr = false;
    m_uiExpand_attr = false;

    m_has_bld_attr = false;

    if (m_bld_attr)
    {
        delete m_bld_attr;
        m_bld_attr = NULL;
    }


    m_has_animBg_attr = false;
    m_animBg_attr = false;
}

void CT_TLOleBuildChart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_spid_attr);
    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }


    assert(m_has_grpId_attr);
    if (m_has_grpId_attr)
    {
        _outStream << " " << "grpId" << "=\"" << m_grpId_attr << "\"";
    }



    if (m_has_uiExpand_attr)
    {
        _outStream << " " << "uiExpand" << "=\"" << XSD::XMLBooleanStr(m_uiExpand_attr) << "\"";
    }



    if (m_has_bld_attr)
    {
        m_bld_attr->toXmlAttr("bld", _outStream);
    }



    if (m_has_animBg_attr)
    {
        _outStream << " " << "animBg" << "=\"" << XSD::XMLBooleanStr(m_animBg_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TLOleBuildChart& CT_TLOleBuildChart::default_instance()
{
    if (!CT_TLOleBuildChart::default_instance_)
    {
        CT_TLOleBuildChart::default_instance_ = new CT_TLOleBuildChart();
    }
    return *CT_TLOleBuildChart::default_instance_;
}

bool CT_TLOleBuildChart::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_TLOleBuildChart::set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
}

const ns_a::ST_DrawingElementId& CT_TLOleBuildChart::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

bool CT_TLOleBuildChart::has_grpId_attr() const
{
    return m_has_grpId_attr;
}

void CT_TLOleBuildChart::set_grpId_attr(const XSD::unsignedInt_& _grpId_attr)
{
    m_has_grpId_attr = true;
    m_grpId_attr = _grpId_attr;
}

const XSD::unsignedInt_& CT_TLOleBuildChart::get_grpId_attr() const
{
    return m_grpId_attr;
}

bool CT_TLOleBuildChart::has_uiExpand_attr() const
{
    return m_has_uiExpand_attr;
}

void CT_TLOleBuildChart::set_uiExpand_attr(const XSD::boolean_& _uiExpand_attr)
{
    m_has_uiExpand_attr = true;
    m_uiExpand_attr = _uiExpand_attr;
}

const XSD::boolean_& CT_TLOleBuildChart::get_uiExpand_attr() const
{
    return m_uiExpand_attr;
}

bool CT_TLOleBuildChart::has_bld_attr() const
{
    return m_has_bld_attr;
}

void CT_TLOleBuildChart::set_bld_attr(const ST_TLOleChartBuildType& _bld_attr)
{
    m_has_bld_attr = true;
    m_bld_attr = new ST_TLOleChartBuildType(_bld_attr);
}

const ST_TLOleChartBuildType& CT_TLOleBuildChart::get_bld_attr() const
{
    if (m_bld_attr)
    {
        return *m_bld_attr;
    }
    return ST_TLOleChartBuildType::default_instance();
}

bool CT_TLOleBuildChart::has_animBg_attr() const
{
    return m_has_animBg_attr;
}

void CT_TLOleBuildChart::set_animBg_attr(const XSD::boolean_& _animBg_attr)
{
    m_has_animBg_attr = true;
    m_animBg_attr = _animBg_attr;
}

const XSD::boolean_& CT_TLOleBuildChart::get_animBg_attr() const
{
    return m_animBg_attr;
}

CT_TLOleBuildChart* CT_TLOleBuildChart::default_instance_ = NULL;

// CT_TLGraphicalObjectBuild
CT_TLGraphicalObjectBuild::CT_TLGraphicalObjectBuild()
    :m_has_bldAsOne(false),
     m_bldAsOne(NULL),
     m_has_bldSub(false),
     m_bldSub(NULL),
     m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_grpId_attr(false),
     m_grpId_attr(0),
     m_has_uiExpand_attr(false),
     m_uiExpand_attr(false)
{
}
CT_TLGraphicalObjectBuild::~CT_TLGraphicalObjectBuild()
{
    clear();
}
bool CT_TLGraphicalObjectBuild::has_bldAsOne() const
{
    return m_has_bldAsOne;
}

CT_Empty* CT_TLGraphicalObjectBuild::mutable_bldAsOne()
{

    m_has_bldSub = false;

    if (m_bldSub)
    {
        delete m_bldSub;
        m_bldSub = NULL;
    }
    ;

    m_has_bldAsOne = true;
    if (!m_bldAsOne)
    {
        m_bldAsOne = new CT_Empty();
    }
    return m_bldAsOne;
}

const CT_Empty& CT_TLGraphicalObjectBuild::get_bldAsOne() const
{
    if (m_bldAsOne)
    {
        return *m_bldAsOne;
    }
    return CT_Empty::default_instance();
}

bool CT_TLGraphicalObjectBuild::has_bldSub() const
{
    return m_has_bldSub;
}

ns_a::CT_AnimationGraphicalObjectBuildProperties* CT_TLGraphicalObjectBuild::mutable_bldSub()
{

    m_has_bldAsOne = false;

    if (m_bldAsOne)
    {
        delete m_bldAsOne;
        m_bldAsOne = NULL;
    }
    ;

    m_has_bldSub = true;
    if (!m_bldSub)
    {
        m_bldSub = new ns_a::CT_AnimationGraphicalObjectBuildProperties();
    }
    return m_bldSub;
}

const ns_a::CT_AnimationGraphicalObjectBuildProperties& CT_TLGraphicalObjectBuild::get_bldSub() const
{
    if (m_bldSub)
    {
        return *m_bldSub;
    }
    return ns_a::CT_AnimationGraphicalObjectBuildProperties::default_instance();
}

void CT_TLGraphicalObjectBuild::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_grpId_attr = false;
    m_grpId_attr = 0;

    m_has_uiExpand_attr = false;
    m_uiExpand_attr = false;

    m_has_bldAsOne = false;

    if (m_bldAsOne)
    {
        delete m_bldAsOne;
        m_bldAsOne = NULL;
    }


    m_has_bldSub = false;

    if (m_bldSub)
    {
        delete m_bldSub;
        m_bldSub = NULL;
    }

}

void CT_TLGraphicalObjectBuild::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_spid_attr);
    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }


    assert(m_has_grpId_attr);
    if (m_has_grpId_attr)
    {
        _outStream << " " << "grpId" << "=\"" << m_grpId_attr << "\"";
    }



    if (m_has_uiExpand_attr)
    {
        _outStream << " " << "uiExpand" << "=\"" << XSD::XMLBooleanStr(m_uiExpand_attr) << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_bldAsOne, m_has_bldSub};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_bldAsOne)
    {
        m_bldAsOne->toXmlElem("p:bldAsOne", "", _outStream);
    }


    if (m_has_bldSub)
    {
        m_bldSub->toXmlElem("p:bldSub", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TLGraphicalObjectBuild& CT_TLGraphicalObjectBuild::default_instance()
{
    if (!CT_TLGraphicalObjectBuild::default_instance_)
    {
        CT_TLGraphicalObjectBuild::default_instance_ = new CT_TLGraphicalObjectBuild();
    }
    return *CT_TLGraphicalObjectBuild::default_instance_;
}

bool CT_TLGraphicalObjectBuild::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_TLGraphicalObjectBuild::set_spid_attr(const ns_a::ST_DrawingElementId& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_DrawingElementId(_spid_attr);
}

const ns_a::ST_DrawingElementId& CT_TLGraphicalObjectBuild::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_DrawingElementId::default_instance();
}

bool CT_TLGraphicalObjectBuild::has_grpId_attr() const
{
    return m_has_grpId_attr;
}

void CT_TLGraphicalObjectBuild::set_grpId_attr(const XSD::unsignedInt_& _grpId_attr)
{
    m_has_grpId_attr = true;
    m_grpId_attr = _grpId_attr;
}

const XSD::unsignedInt_& CT_TLGraphicalObjectBuild::get_grpId_attr() const
{
    return m_grpId_attr;
}

bool CT_TLGraphicalObjectBuild::has_uiExpand_attr() const
{
    return m_has_uiExpand_attr;
}

void CT_TLGraphicalObjectBuild::set_uiExpand_attr(const XSD::boolean_& _uiExpand_attr)
{
    m_has_uiExpand_attr = true;
    m_uiExpand_attr = _uiExpand_attr;
}

const XSD::boolean_& CT_TLGraphicalObjectBuild::get_uiExpand_attr() const
{
    return m_uiExpand_attr;
}

CT_TLGraphicalObjectBuild* CT_TLGraphicalObjectBuild::default_instance_ = NULL;

// CT_BuildList
CT_BuildList::CT_BuildList()

{
}
CT_BuildList::~CT_BuildList()
{
    clear();
}
CT_TLBuildParagraph* CT_BuildList::add_bldP()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLBuildParagraph* pNewChild = pChildGroup->mutable_bldP();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLBuildDiagram* CT_BuildList::add_bldDgm()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLBuildDiagram* pNewChild = pChildGroup->mutable_bldDgm();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLOleBuildChart* CT_BuildList::add_bldOleChart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLOleBuildChart* pNewChild = pChildGroup->mutable_bldOleChart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_TLGraphicalObjectBuild* CT_BuildList::add_bldGraphic()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_TLGraphicalObjectBuild* pNewChild = pChildGroup->mutable_bldGraphic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_BuildList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_BuildList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_bldP())
            {
                (*iter)->get_bldP().toXmlElem("p:bldP", "", _outStream);
            }


            else if ((*iter)->has_bldDgm())
            {
                (*iter)->get_bldDgm().toXmlElem("p:bldDgm", "", _outStream);
            }


            else if ((*iter)->has_bldOleChart())
            {
                (*iter)->get_bldOleChart().toXmlElem("p:bldOleChart", "", _outStream);
            }


            else if ((*iter)->has_bldGraphic())
            {
                (*iter)->get_bldGraphic().toXmlElem("p:bldGraphic", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BuildList& CT_BuildList::default_instance()
{
    if (!CT_BuildList::default_instance_)
    {
        CT_BuildList::default_instance_ = new CT_BuildList();
    }
    return *CT_BuildList::default_instance_;
}


// CT_BuildList::ChildGroup_1
CT_BuildList::ChildGroup_1::ChildGroup_1()
    :m_has_bldP(false),
     m_bldP(NULL),
     m_has_bldDgm(false),
     m_bldDgm(NULL),
     m_has_bldOleChart(false),
     m_bldOleChart(NULL),
     m_has_bldGraphic(false),
     m_bldGraphic(NULL)
{
}
bool CT_BuildList::ChildGroup_1::has_bldP() const
{
    return m_has_bldP;
}

CT_TLBuildParagraph* CT_BuildList::ChildGroup_1::mutable_bldP()
{

    m_has_bldDgm = false;

    if (m_bldDgm)
    {
        delete m_bldDgm;
        m_bldDgm = NULL;
    }
    ;

    m_has_bldOleChart = false;

    if (m_bldOleChart)
    {
        delete m_bldOleChart;
        m_bldOleChart = NULL;
    }
    ;

    m_has_bldGraphic = false;

    if (m_bldGraphic)
    {
        delete m_bldGraphic;
        m_bldGraphic = NULL;
    }
    ;

    m_has_bldP = true;
    if (!m_bldP)
    {
        m_bldP = new CT_TLBuildParagraph();
    }
    return m_bldP;
}

const CT_TLBuildParagraph& CT_BuildList::ChildGroup_1::get_bldP() const
{
    if (m_bldP)
    {
        return *m_bldP;
    }
    return CT_TLBuildParagraph::default_instance();
}

bool CT_BuildList::ChildGroup_1::has_bldDgm() const
{
    return m_has_bldDgm;
}

CT_TLBuildDiagram* CT_BuildList::ChildGroup_1::mutable_bldDgm()
{

    m_has_bldP = false;

    if (m_bldP)
    {
        delete m_bldP;
        m_bldP = NULL;
    }
    ;

    m_has_bldOleChart = false;

    if (m_bldOleChart)
    {
        delete m_bldOleChart;
        m_bldOleChart = NULL;
    }
    ;

    m_has_bldGraphic = false;

    if (m_bldGraphic)
    {
        delete m_bldGraphic;
        m_bldGraphic = NULL;
    }
    ;

    m_has_bldDgm = true;
    if (!m_bldDgm)
    {
        m_bldDgm = new CT_TLBuildDiagram();
    }
    return m_bldDgm;
}

const CT_TLBuildDiagram& CT_BuildList::ChildGroup_1::get_bldDgm() const
{
    if (m_bldDgm)
    {
        return *m_bldDgm;
    }
    return CT_TLBuildDiagram::default_instance();
}

bool CT_BuildList::ChildGroup_1::has_bldOleChart() const
{
    return m_has_bldOleChart;
}

CT_TLOleBuildChart* CT_BuildList::ChildGroup_1::mutable_bldOleChart()
{

    m_has_bldP = false;

    if (m_bldP)
    {
        delete m_bldP;
        m_bldP = NULL;
    }
    ;

    m_has_bldDgm = false;

    if (m_bldDgm)
    {
        delete m_bldDgm;
        m_bldDgm = NULL;
    }
    ;

    m_has_bldGraphic = false;

    if (m_bldGraphic)
    {
        delete m_bldGraphic;
        m_bldGraphic = NULL;
    }
    ;

    m_has_bldOleChart = true;
    if (!m_bldOleChart)
    {
        m_bldOleChart = new CT_TLOleBuildChart();
    }
    return m_bldOleChart;
}

const CT_TLOleBuildChart& CT_BuildList::ChildGroup_1::get_bldOleChart() const
{
    if (m_bldOleChart)
    {
        return *m_bldOleChart;
    }
    return CT_TLOleBuildChart::default_instance();
}

bool CT_BuildList::ChildGroup_1::has_bldGraphic() const
{
    return m_has_bldGraphic;
}

CT_TLGraphicalObjectBuild* CT_BuildList::ChildGroup_1::mutable_bldGraphic()
{

    m_has_bldP = false;

    if (m_bldP)
    {
        delete m_bldP;
        m_bldP = NULL;
    }
    ;

    m_has_bldDgm = false;

    if (m_bldDgm)
    {
        delete m_bldDgm;
        m_bldDgm = NULL;
    }
    ;

    m_has_bldOleChart = false;

    if (m_bldOleChart)
    {
        delete m_bldOleChart;
        m_bldOleChart = NULL;
    }
    ;

    m_has_bldGraphic = true;
    if (!m_bldGraphic)
    {
        m_bldGraphic = new CT_TLGraphicalObjectBuild();
    }
    return m_bldGraphic;
}

const CT_TLGraphicalObjectBuild& CT_BuildList::ChildGroup_1::get_bldGraphic() const
{
    if (m_bldGraphic)
    {
        return *m_bldGraphic;
    }
    return CT_TLGraphicalObjectBuild::default_instance();
}

CT_BuildList* CT_BuildList::default_instance_ = NULL;

// CT_SlideTiming
CT_SlideTiming::CT_SlideTiming()
    :m_has_tnLst(false),
     m_tnLst(NULL),
     m_has_bldLst(false),
     m_bldLst(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_SlideTiming::~CT_SlideTiming()
{
    clear();
}
bool CT_SlideTiming::has_tnLst() const
{
    return m_has_tnLst;
}

CT_TimeNodeList* CT_SlideTiming::mutable_tnLst()
{
    m_has_tnLst = true;
    if (!m_tnLst)
    {
        m_tnLst = new CT_TimeNodeList();
    }
    return m_tnLst;
}

const CT_TimeNodeList& CT_SlideTiming::get_tnLst() const
{
    if (m_tnLst)
    {
        return *m_tnLst;
    }
    return CT_TimeNodeList::default_instance();
}

bool CT_SlideTiming::has_bldLst() const
{
    return m_has_bldLst;
}

CT_BuildList* CT_SlideTiming::mutable_bldLst()
{
    m_has_bldLst = true;
    if (!m_bldLst)
    {
        m_bldLst = new CT_BuildList();
    }
    return m_bldLst;
}

const CT_BuildList& CT_SlideTiming::get_bldLst() const
{
    if (m_bldLst)
    {
        return *m_bldLst;
    }
    return CT_BuildList::default_instance();
}

bool CT_SlideTiming::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_SlideTiming::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_SlideTiming::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_SlideTiming::clear()
{
    m_has_tnLst = false;

    if (m_tnLst)
    {
        delete m_tnLst;
        m_tnLst = NULL;
    }


    m_has_bldLst = false;

    if (m_bldLst)
    {
        delete m_bldLst;
        m_bldLst = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideTiming::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_tnLst)
    {
        m_tnLst->toXmlElem("p:tnLst", "", _outStream);
    }


    if (m_has_bldLst)
    {
        m_bldLst->toXmlElem("p:bldLst", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideTiming& CT_SlideTiming::default_instance()
{
    if (!CT_SlideTiming::default_instance_)
    {
        CT_SlideTiming::default_instance_ = new CT_SlideTiming();
    }
    return *CT_SlideTiming::default_instance_;
}

CT_SlideTiming* CT_SlideTiming::default_instance_ = NULL;

// CT_Empty
CT_Empty::CT_Empty()

{
}
CT_Empty::~CT_Empty()
{
    clear();
}
void CT_Empty::clear()
{    }

void CT_Empty::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Empty& CT_Empty::default_instance()
{
    if (!CT_Empty::default_instance_)
    {
        CT_Empty::default_instance_ = new CT_Empty();
    }
    return *CT_Empty::default_instance_;
}

CT_Empty* CT_Empty::default_instance_ = NULL;

// CT_IndexRange
CT_IndexRange::CT_IndexRange()
    :m_has_st_attr(false),
     m_st_attr(NULL),
     m_has_end_attr(false),
     m_end_attr(NULL)
{
}
CT_IndexRange::~CT_IndexRange()
{
    clear();
}
void CT_IndexRange::clear()
{
    m_has_st_attr = false;

    if (m_st_attr)
    {
        delete m_st_attr;
        m_st_attr = NULL;
    }


    m_has_end_attr = false;

    if (m_end_attr)
    {
        delete m_end_attr;
        m_end_attr = NULL;
    }

}

void CT_IndexRange::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_st_attr);
    if (m_has_st_attr)
    {
        m_st_attr->toXmlAttr("st", _outStream);
    }


    assert(m_has_end_attr);
    if (m_has_end_attr)
    {
        m_end_attr->toXmlAttr("end", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_IndexRange& CT_IndexRange::default_instance()
{
    if (!CT_IndexRange::default_instance_)
    {
        CT_IndexRange::default_instance_ = new CT_IndexRange();
    }
    return *CT_IndexRange::default_instance_;
}

bool CT_IndexRange::has_st_attr() const
{
    return m_has_st_attr;
}

void CT_IndexRange::set_st_attr(const ST_Index& _st_attr)
{
    m_has_st_attr = true;
    m_st_attr = new ST_Index(_st_attr);
}

const ST_Index& CT_IndexRange::get_st_attr() const
{
    if (m_st_attr)
    {
        return *m_st_attr;
    }
    return ST_Index::default_instance();
}

bool CT_IndexRange::has_end_attr() const
{
    return m_has_end_attr;
}

void CT_IndexRange::set_end_attr(const ST_Index& _end_attr)
{
    m_has_end_attr = true;
    m_end_attr = new ST_Index(_end_attr);
}

const ST_Index& CT_IndexRange::get_end_attr() const
{
    if (m_end_attr)
    {
        return *m_end_attr;
    }
    return ST_Index::default_instance();
}

CT_IndexRange* CT_IndexRange::default_instance_ = NULL;

// CT_SlideRelationshipListEntry
CT_SlideRelationshipListEntry::CT_SlideRelationshipListEntry()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_SlideRelationshipListEntry::~CT_SlideRelationshipListEntry()
{
    clear();
}
void CT_SlideRelationshipListEntry::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }

}

void CT_SlideRelationshipListEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SlideRelationshipListEntry& CT_SlideRelationshipListEntry::default_instance()
{
    if (!CT_SlideRelationshipListEntry::default_instance_)
    {
        CT_SlideRelationshipListEntry::default_instance_ = new CT_SlideRelationshipListEntry();
    }
    return *CT_SlideRelationshipListEntry::default_instance_;
}

bool CT_SlideRelationshipListEntry::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_SlideRelationshipListEntry::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_SlideRelationshipListEntry::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_SlideRelationshipListEntry* CT_SlideRelationshipListEntry::default_instance_ = NULL;

// CT_SlideRelationshipList
CT_SlideRelationshipList::CT_SlideRelationshipList()

{
}
CT_SlideRelationshipList::~CT_SlideRelationshipList()
{
    clear();
}
CT_SlideRelationshipListEntry* CT_SlideRelationshipList::add_sld()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SlideRelationshipListEntry* pNewChild = pChildGroup->mutable_sld();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_SlideRelationshipList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_SlideRelationshipList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sld())
            {
                (*iter)->get_sld().toXmlElem("p:sld", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideRelationshipList& CT_SlideRelationshipList::default_instance()
{
    if (!CT_SlideRelationshipList::default_instance_)
    {
        CT_SlideRelationshipList::default_instance_ = new CT_SlideRelationshipList();
    }
    return *CT_SlideRelationshipList::default_instance_;
}


// CT_SlideRelationshipList::ChildGroup_1
CT_SlideRelationshipList::ChildGroup_1::ChildGroup_1()
    :m_has_sld(false),
     m_sld(NULL)
{
}
bool CT_SlideRelationshipList::ChildGroup_1::has_sld() const
{
    return m_has_sld;
}

CT_SlideRelationshipListEntry* CT_SlideRelationshipList::ChildGroup_1::mutable_sld()
{

    m_has_sld = true;
    if (!m_sld)
    {
        m_sld = new CT_SlideRelationshipListEntry();
    }
    return m_sld;
}

const CT_SlideRelationshipListEntry& CT_SlideRelationshipList::ChildGroup_1::get_sld() const
{
    if (m_sld)
    {
        return *m_sld;
    }
    return CT_SlideRelationshipListEntry::default_instance();
}

CT_SlideRelationshipList* CT_SlideRelationshipList::default_instance_ = NULL;

// CT_CustomShowId
CT_CustomShowId::CT_CustomShowId()
    :m_has_id_attr(false),
     m_id_attr(0)
{
}
CT_CustomShowId::~CT_CustomShowId()
{
    clear();
}
void CT_CustomShowId::clear()
{
    m_has_id_attr = false;
    m_id_attr = 0;
}

void CT_CustomShowId::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_id_attr);
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CustomShowId& CT_CustomShowId::default_instance()
{
    if (!CT_CustomShowId::default_instance_)
    {
        CT_CustomShowId::default_instance_ = new CT_CustomShowId();
    }
    return *CT_CustomShowId::default_instance_;
}

bool CT_CustomShowId::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_CustomShowId::set_id_attr(const XSD::unsignedInt_& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = _id_attr;
}

const XSD::unsignedInt_& CT_CustomShowId::get_id_attr() const
{
    return m_id_attr;
}

CT_CustomShowId* CT_CustomShowId::default_instance_ = NULL;

// CT_CustomerData
CT_CustomerData::CT_CustomerData()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_CustomerData::~CT_CustomerData()
{
    clear();
}
void CT_CustomerData::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }

}

void CT_CustomerData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CustomerData& CT_CustomerData::default_instance()
{
    if (!CT_CustomerData::default_instance_)
    {
        CT_CustomerData::default_instance_ = new CT_CustomerData();
    }
    return *CT_CustomerData::default_instance_;
}

bool CT_CustomerData::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_CustomerData::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_CustomerData::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_CustomerData* CT_CustomerData::default_instance_ = NULL;

// CT_TagsData
CT_TagsData::CT_TagsData()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_TagsData::~CT_TagsData()
{
    clear();
}
void CT_TagsData::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }

}

void CT_TagsData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TagsData& CT_TagsData::default_instance()
{
    if (!CT_TagsData::default_instance_)
    {
        CT_TagsData::default_instance_ = new CT_TagsData();
    }
    return *CT_TagsData::default_instance_;
}

bool CT_TagsData::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_TagsData::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_TagsData::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_TagsData* CT_TagsData::default_instance_ = NULL;

// CT_CustomerDataList
CT_CustomerDataList::CT_CustomerDataList()
    :m_has_tags(false),
     m_tags(NULL)
{
}
CT_CustomerDataList::~CT_CustomerDataList()
{
    clear();
}
CT_CustomerData* CT_CustomerDataList::add_custData()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CustomerData* pNewChild = pChildGroup->mutable_custData();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_CustomerDataList::has_tags() const
{
    return m_has_tags;
}

CT_TagsData* CT_CustomerDataList::mutable_tags()
{
    m_has_tags = true;
    if (!m_tags)
    {
        m_tags = new CT_TagsData();
    }
    return m_tags;
}

const CT_TagsData& CT_CustomerDataList::get_tags() const
{
    if (m_tags)
    {
        return *m_tags;
    }
    return CT_TagsData::default_instance();
}

void CT_CustomerDataList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_tags = false;

    if (m_tags)
    {
        delete m_tags;
        m_tags = NULL;
    }

}

void CT_CustomerDataList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_custData())
            {
                (*iter)->get_custData().toXmlElem("p:custData", "", _outStream);
            }


        }
    }


    if (m_has_tags)
    {
        m_tags->toXmlElem("p:tags", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CustomerDataList& CT_CustomerDataList::default_instance()
{
    if (!CT_CustomerDataList::default_instance_)
    {
        CT_CustomerDataList::default_instance_ = new CT_CustomerDataList();
    }
    return *CT_CustomerDataList::default_instance_;
}


// CT_CustomerDataList::ChildGroup_1
CT_CustomerDataList::ChildGroup_1::ChildGroup_1()
    :m_has_custData(false),
     m_custData(NULL)
{
}
bool CT_CustomerDataList::ChildGroup_1::has_custData() const
{
    return m_has_custData;
}

CT_CustomerData* CT_CustomerDataList::ChildGroup_1::mutable_custData()
{

    m_has_custData = true;
    if (!m_custData)
    {
        m_custData = new CT_CustomerData();
    }
    return m_custData;
}

const CT_CustomerData& CT_CustomerDataList::ChildGroup_1::get_custData() const
{
    if (m_custData)
    {
        return *m_custData;
    }
    return CT_CustomerData::default_instance();
}

CT_CustomerDataList* CT_CustomerDataList::default_instance_ = NULL;

// CT_Extension
CT_Extension::CT_Extension()
    :m_has__any(false),
     m__any(NULL),
     m_has_uri_attr(false),
     m_uri_attr("")
{
}
CT_Extension::~CT_Extension()
{
    clear();
}
void CT_Extension::clear()
{
    m_has_uri_attr = false;
    m_uri_attr.clear();
}

void CT_Extension::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_uri_attr);
    if (m_has_uri_attr)
    {
        _outStream << " " << "uri" << "=\"" << m_uri_attr << "\"";
    }

    _outStream << ">";


    if (m_has__any)
    {
        m__any->toXml(_outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Extension& CT_Extension::default_instance()
{
    if (!CT_Extension::default_instance_)
    {
        CT_Extension::default_instance_ = new CT_Extension();
    }
    return *CT_Extension::default_instance_;
}

bool CT_Extension::has_uri_attr() const
{
    return m_has_uri_attr;
}

void CT_Extension::set_uri_attr(const XSD::token_& _uri_attr)
{
    m_has_uri_attr = true;
    m_uri_attr = _uri_attr;
}

const XSD::token_& CT_Extension::get_uri_attr() const
{
    return m_uri_attr;
}

CT_Extension* CT_Extension::default_instance_ = NULL;

// CT_ExtensionList
CT_ExtensionList::CT_ExtensionList()

{
}
CT_ExtensionList::~CT_ExtensionList()
{
    clear();
}
CT_Extension* CT_ExtensionList::add_ext()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Extension* pNewChild = pChildGroup->mutable_ext();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_ExtensionList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_ExtensionList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ext())
            {
                (*iter)->get_ext().toXmlElem("p:ext", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ExtensionList& CT_ExtensionList::default_instance()
{
    if (!CT_ExtensionList::default_instance_)
    {
        CT_ExtensionList::default_instance_ = new CT_ExtensionList();
    }
    return *CT_ExtensionList::default_instance_;
}


// CT_ExtensionList::ChildGroup_1
CT_ExtensionList::ChildGroup_1::ChildGroup_1()
    :m_has_ext(false),
     m_ext(NULL)
{
}
bool CT_ExtensionList::ChildGroup_1::has_ext() const
{
    return m_has_ext;
}

CT_Extension* CT_ExtensionList::ChildGroup_1::mutable_ext()
{

    m_has_ext = true;
    if (!m_ext)
    {
        m_ext = new CT_Extension();
    }
    return m_ext;
}

const CT_Extension& CT_ExtensionList::ChildGroup_1::get_ext() const
{
    if (m_ext)
    {
        return *m_ext;
    }
    return CT_Extension::default_instance();
}

CT_ExtensionList* CT_ExtensionList::default_instance_ = NULL;

// CT_ExtensionListModify
CT_ExtensionListModify::CT_ExtensionListModify()
    :m_has_mod_attr(false),
     m_mod_attr(false)
{
}
CT_ExtensionListModify::~CT_ExtensionListModify()
{
    clear();
}
CT_Extension* CT_ExtensionListModify::add_ext()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Extension* pNewChild = pChildGroup->mutable_ext();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_ExtensionListModify::clear()
{
    m_has_mod_attr = false;
    m_mod_attr = false;

    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_ExtensionListModify::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_mod_attr)
    {
        _outStream << " " << "mod" << "=\"" << XSD::XMLBooleanStr(m_mod_attr) << "\"";
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_ext())
            {
                (*iter)->get_ext().toXmlElem("p:ext", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ExtensionListModify& CT_ExtensionListModify::default_instance()
{
    if (!CT_ExtensionListModify::default_instance_)
    {
        CT_ExtensionListModify::default_instance_ = new CT_ExtensionListModify();
    }
    return *CT_ExtensionListModify::default_instance_;
}

bool CT_ExtensionListModify::has_mod_attr() const
{
    return m_has_mod_attr;
}

void CT_ExtensionListModify::set_mod_attr(const XSD::boolean_& _mod_attr)
{
    m_has_mod_attr = true;
    m_mod_attr = _mod_attr;
}

const XSD::boolean_& CT_ExtensionListModify::get_mod_attr() const
{
    return m_mod_attr;
}


// CT_ExtensionListModify::ChildGroup_1
CT_ExtensionListModify::ChildGroup_1::ChildGroup_1()
    :m_has_ext(false),
     m_ext(NULL)
{
}
bool CT_ExtensionListModify::ChildGroup_1::has_ext() const
{
    return m_has_ext;
}

CT_Extension* CT_ExtensionListModify::ChildGroup_1::mutable_ext()
{

    m_has_ext = true;
    if (!m_ext)
    {
        m_ext = new CT_Extension();
    }
    return m_ext;
}

const CT_Extension& CT_ExtensionListModify::ChildGroup_1::get_ext() const
{
    if (m_ext)
    {
        return *m_ext;
    }
    return CT_Extension::default_instance();
}

CT_ExtensionListModify* CT_ExtensionListModify::default_instance_ = NULL;

// CT_CommentAuthor
CT_CommentAuthor::CT_CommentAuthor()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_id_attr(false),
     m_id_attr(0),
     m_has_name_attr(false),
     m_name_attr(NULL),
     m_has_initials_attr(false),
     m_initials_attr(NULL),
     m_has_lastIdx_attr(false),
     m_lastIdx_attr(0),
     m_has_clrIdx_attr(false),
     m_clrIdx_attr(0)
{
}
CT_CommentAuthor::~CT_CommentAuthor()
{
    clear();
}
bool CT_CommentAuthor::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_CommentAuthor::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_CommentAuthor::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_CommentAuthor::clear()
{
    m_has_id_attr = false;
    m_id_attr = 0;

    m_has_name_attr = false;

    if (m_name_attr)
    {
        delete m_name_attr;
        m_name_attr = NULL;
    }


    m_has_initials_attr = false;

    if (m_initials_attr)
    {
        delete m_initials_attr;
        m_initials_attr = NULL;
    }


    m_has_lastIdx_attr = false;
    m_lastIdx_attr = 0;

    m_has_clrIdx_attr = false;
    m_clrIdx_attr = 0;

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_CommentAuthor::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_id_attr);
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }


    assert(m_has_name_attr);
    if (m_has_name_attr)
    {
        m_name_attr->toXmlAttr("name", _outStream);
    }


    assert(m_has_initials_attr);
    if (m_has_initials_attr)
    {
        m_initials_attr->toXmlAttr("initials", _outStream);
    }


    assert(m_has_lastIdx_attr);
    if (m_has_lastIdx_attr)
    {
        _outStream << " " << "lastIdx" << "=\"" << m_lastIdx_attr << "\"";
    }


    assert(m_has_clrIdx_attr);
    if (m_has_clrIdx_attr)
    {
        _outStream << " " << "clrIdx" << "=\"" << m_clrIdx_attr << "\"";
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CommentAuthor& CT_CommentAuthor::default_instance()
{
    if (!CT_CommentAuthor::default_instance_)
    {
        CT_CommentAuthor::default_instance_ = new CT_CommentAuthor();
    }
    return *CT_CommentAuthor::default_instance_;
}

bool CT_CommentAuthor::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_CommentAuthor::set_id_attr(const XSD::unsignedInt_& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = _id_attr;
}

const XSD::unsignedInt_& CT_CommentAuthor::get_id_attr() const
{
    return m_id_attr;
}

bool CT_CommentAuthor::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_CommentAuthor::set_name_attr(const ST_Name& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = new ST_Name(_name_attr);
}

const ST_Name& CT_CommentAuthor::get_name_attr() const
{
    if (m_name_attr)
    {
        return *m_name_attr;
    }
    return ST_Name::default_instance();
}

bool CT_CommentAuthor::has_initials_attr() const
{
    return m_has_initials_attr;
}

void CT_CommentAuthor::set_initials_attr(const ST_Name& _initials_attr)
{
    m_has_initials_attr = true;
    m_initials_attr = new ST_Name(_initials_attr);
}

const ST_Name& CT_CommentAuthor::get_initials_attr() const
{
    if (m_initials_attr)
    {
        return *m_initials_attr;
    }
    return ST_Name::default_instance();
}

bool CT_CommentAuthor::has_lastIdx_attr() const
{
    return m_has_lastIdx_attr;
}

void CT_CommentAuthor::set_lastIdx_attr(const XSD::unsignedInt_& _lastIdx_attr)
{
    m_has_lastIdx_attr = true;
    m_lastIdx_attr = _lastIdx_attr;
}

const XSD::unsignedInt_& CT_CommentAuthor::get_lastIdx_attr() const
{
    return m_lastIdx_attr;
}

bool CT_CommentAuthor::has_clrIdx_attr() const
{
    return m_has_clrIdx_attr;
}

void CT_CommentAuthor::set_clrIdx_attr(const XSD::unsignedInt_& _clrIdx_attr)
{
    m_has_clrIdx_attr = true;
    m_clrIdx_attr = _clrIdx_attr;
}

const XSD::unsignedInt_& CT_CommentAuthor::get_clrIdx_attr() const
{
    return m_clrIdx_attr;
}

CT_CommentAuthor* CT_CommentAuthor::default_instance_ = NULL;

// CT_CommentAuthorList
CT_CommentAuthorList::CT_CommentAuthorList()

{
}
CT_CommentAuthorList::~CT_CommentAuthorList()
{
    clear();
}
CT_CommentAuthor* CT_CommentAuthorList::add_cmAuthor()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CommentAuthor* pNewChild = pChildGroup->mutable_cmAuthor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_CommentAuthorList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_CommentAuthorList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_cmAuthor())
            {
                (*iter)->get_cmAuthor().toXmlElem("p:cmAuthor", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CommentAuthorList& CT_CommentAuthorList::default_instance()
{
    if (!CT_CommentAuthorList::default_instance_)
    {
        CT_CommentAuthorList::default_instance_ = new CT_CommentAuthorList();
    }
    return *CT_CommentAuthorList::default_instance_;
}


// CT_CommentAuthorList::ChildGroup_1
CT_CommentAuthorList::ChildGroup_1::ChildGroup_1()
    :m_has_cmAuthor(false),
     m_cmAuthor(NULL)
{
}
bool CT_CommentAuthorList::ChildGroup_1::has_cmAuthor() const
{
    return m_has_cmAuthor;
}

CT_CommentAuthor* CT_CommentAuthorList::ChildGroup_1::mutable_cmAuthor()
{

    m_has_cmAuthor = true;
    if (!m_cmAuthor)
    {
        m_cmAuthor = new CT_CommentAuthor();
    }
    return m_cmAuthor;
}

const CT_CommentAuthor& CT_CommentAuthorList::ChildGroup_1::get_cmAuthor() const
{
    if (m_cmAuthor)
    {
        return *m_cmAuthor;
    }
    return CT_CommentAuthor::default_instance();
}

CT_CommentAuthorList* CT_CommentAuthorList::default_instance_ = NULL;

// CT_Comment
CT_Comment::CT_Comment()
    :m_has_pos(false),
     m_pos(NULL),
     m_has_text(false),
     m_text(""),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_authorId_attr(false),
     m_authorId_attr(0),
     m_has_dt_attr(false),
     m_dt_attr(""),
     m_has_idx_attr(false),
     m_idx_attr(NULL)
{
}
CT_Comment::~CT_Comment()
{
    clear();
}
bool CT_Comment::has_pos() const
{
    return m_has_pos;
}

ns_a::CT_Point2D* CT_Comment::mutable_pos()
{
    m_has_pos = true;
    if (!m_pos)
    {
        m_pos = new ns_a::CT_Point2D();
    }
    return m_pos;
}

const ns_a::CT_Point2D& CT_Comment::get_pos() const
{
    if (m_pos)
    {
        return *m_pos;
    }
    return ns_a::CT_Point2D::default_instance();
}

bool CT_Comment::has_text() const
{
    return m_has_text;
}

void CT_Comment::set_text(const XSD::string_& _text)
{
    m_has_text = true;
    m_text = _text;
}

const XSD::string_& CT_Comment::get_text() const
{
    return m_text;
}

bool CT_Comment::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_Comment::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_Comment::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_Comment::clear()
{
    m_has_authorId_attr = false;
    m_authorId_attr = 0;

    m_has_dt_attr = false;
    m_dt_attr.clear();

    m_has_idx_attr = false;

    if (m_idx_attr)
    {
        delete m_idx_attr;
        m_idx_attr = NULL;
    }


    m_has_pos = false;

    if (m_pos)
    {
        delete m_pos;
        m_pos = NULL;
    }


    m_has_text = false;
    m_text.clear();

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Comment::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_authorId_attr);
    if (m_has_authorId_attr)
    {
        _outStream << " " << "authorId" << "=\"" << m_authorId_attr << "\"";
    }



    if (m_has_dt_attr)
    {
        _outStream << " " << "dt" << "=\"" << m_dt_attr << "\"";
    }


    assert(m_has_idx_attr);
    if (m_has_idx_attr)
    {
        m_idx_attr->toXmlAttr("idx", _outStream);
    }

    _outStream << ">";

    assert(m_has_pos);


    assert(m_has_text);


    if (m_has_pos)
    {
        m_pos->toXmlElem("p:pos", "", _outStream);
    }


    if (m_has_text)
    {
        _outStream << "<p:text>" << m_text << "</p:text>";
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Comment& CT_Comment::default_instance()
{
    if (!CT_Comment::default_instance_)
    {
        CT_Comment::default_instance_ = new CT_Comment();
    }
    return *CT_Comment::default_instance_;
}

bool CT_Comment::has_authorId_attr() const
{
    return m_has_authorId_attr;
}

void CT_Comment::set_authorId_attr(const XSD::unsignedInt_& _authorId_attr)
{
    m_has_authorId_attr = true;
    m_authorId_attr = _authorId_attr;
}

const XSD::unsignedInt_& CT_Comment::get_authorId_attr() const
{
    return m_authorId_attr;
}

bool CT_Comment::has_dt_attr() const
{
    return m_has_dt_attr;
}

void CT_Comment::set_dt_attr(const XSD::dateTime_& _dt_attr)
{
    m_has_dt_attr = true;
    m_dt_attr = _dt_attr;
}

const XSD::dateTime_& CT_Comment::get_dt_attr() const
{
    return m_dt_attr;
}

bool CT_Comment::has_idx_attr() const
{
    return m_has_idx_attr;
}

void CT_Comment::set_idx_attr(const ST_Index& _idx_attr)
{
    m_has_idx_attr = true;
    m_idx_attr = new ST_Index(_idx_attr);
}

const ST_Index& CT_Comment::get_idx_attr() const
{
    if (m_idx_attr)
    {
        return *m_idx_attr;
    }
    return ST_Index::default_instance();
}

CT_Comment* CT_Comment::default_instance_ = NULL;

// CT_CommentList
CT_CommentList::CT_CommentList()

{
}
CT_CommentList::~CT_CommentList()
{
    clear();
}
CT_Comment* CT_CommentList::add_cm()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Comment* pNewChild = pChildGroup->mutable_cm();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_CommentList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_CommentList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_cm())
            {
                (*iter)->get_cm().toXmlElem("p:cm", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CommentList& CT_CommentList::default_instance()
{
    if (!CT_CommentList::default_instance_)
    {
        CT_CommentList::default_instance_ = new CT_CommentList();
    }
    return *CT_CommentList::default_instance_;
}


// CT_CommentList::ChildGroup_1
CT_CommentList::ChildGroup_1::ChildGroup_1()
    :m_has_cm(false),
     m_cm(NULL)
{
}
bool CT_CommentList::ChildGroup_1::has_cm() const
{
    return m_has_cm;
}

CT_Comment* CT_CommentList::ChildGroup_1::mutable_cm()
{

    m_has_cm = true;
    if (!m_cm)
    {
        m_cm = new CT_Comment();
    }
    return m_cm;
}

const CT_Comment& CT_CommentList::ChildGroup_1::get_cm() const
{
    if (m_cm)
    {
        return *m_cm;
    }
    return CT_Comment::default_instance();
}

CT_CommentList* CT_CommentList::default_instance_ = NULL;

// CT_OleObjectEmbed
CT_OleObjectEmbed::CT_OleObjectEmbed()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_followColorScheme_attr(false),
     m_followColorScheme_attr(NULL)
{
}
CT_OleObjectEmbed::~CT_OleObjectEmbed()
{
    clear();
}
bool CT_OleObjectEmbed::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_OleObjectEmbed::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_OleObjectEmbed::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_OleObjectEmbed::clear()
{
    m_has_followColorScheme_attr = false;

    if (m_followColorScheme_attr)
    {
        delete m_followColorScheme_attr;
        m_followColorScheme_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_OleObjectEmbed::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_followColorScheme_attr)
    {
        m_followColorScheme_attr->toXmlAttr("followColorScheme", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OleObjectEmbed& CT_OleObjectEmbed::default_instance()
{
    if (!CT_OleObjectEmbed::default_instance_)
    {
        CT_OleObjectEmbed::default_instance_ = new CT_OleObjectEmbed();
    }
    return *CT_OleObjectEmbed::default_instance_;
}

bool CT_OleObjectEmbed::has_followColorScheme_attr() const
{
    return m_has_followColorScheme_attr;
}

void CT_OleObjectEmbed::set_followColorScheme_attr(const ST_OleObjectFollowColorScheme& _followColorScheme_attr)
{
    m_has_followColorScheme_attr = true;
    m_followColorScheme_attr = new ST_OleObjectFollowColorScheme(_followColorScheme_attr);
}

const ST_OleObjectFollowColorScheme& CT_OleObjectEmbed::get_followColorScheme_attr() const
{
    if (m_followColorScheme_attr)
    {
        return *m_followColorScheme_attr;
    }
    return ST_OleObjectFollowColorScheme::default_instance();
}

CT_OleObjectEmbed* CT_OleObjectEmbed::default_instance_ = NULL;

// CT_OleObjectLink
CT_OleObjectLink::CT_OleObjectLink()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_updateAutomatic_attr(false),
     m_updateAutomatic_attr(false)
{
}
CT_OleObjectLink::~CT_OleObjectLink()
{
    clear();
}
bool CT_OleObjectLink::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_OleObjectLink::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_OleObjectLink::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_OleObjectLink::clear()
{
    m_has_updateAutomatic_attr = false;
    m_updateAutomatic_attr = false;

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_OleObjectLink::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_updateAutomatic_attr)
    {
        _outStream << " " << "updateAutomatic" << "=\"" << XSD::XMLBooleanStr(m_updateAutomatic_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OleObjectLink& CT_OleObjectLink::default_instance()
{
    if (!CT_OleObjectLink::default_instance_)
    {
        CT_OleObjectLink::default_instance_ = new CT_OleObjectLink();
    }
    return *CT_OleObjectLink::default_instance_;
}

bool CT_OleObjectLink::has_updateAutomatic_attr() const
{
    return m_has_updateAutomatic_attr;
}

void CT_OleObjectLink::set_updateAutomatic_attr(const XSD::boolean_& _updateAutomatic_attr)
{
    m_has_updateAutomatic_attr = true;
    m_updateAutomatic_attr = _updateAutomatic_attr;
}

const XSD::boolean_& CT_OleObjectLink::get_updateAutomatic_attr() const
{
    return m_updateAutomatic_attr;
}

CT_OleObjectLink* CT_OleObjectLink::default_instance_ = NULL;

// CT_OleObject
CT_OleObject::CT_OleObject()
    :m_has_embed(false),
     m_embed(NULL),
     m_has_link(false),
     m_link(NULL),
     m_has_pic(false),
     m_pic(NULL),
     m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_name_attr(false),
     m_name_attr(""),
     m_has_showAsIcon_attr(false),
     m_showAsIcon_attr(false),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL),
     m_has_imgW_attr(false),
     m_imgW_attr(NULL),
     m_has_imgH_attr(false),
     m_imgH_attr(NULL),
     m_has_progId_attr(false),
     m_progId_attr("")
{
}
CT_OleObject::~CT_OleObject()
{
    clear();
}
bool CT_OleObject::has_embed() const
{
    return m_has_embed;
}

CT_OleObjectEmbed* CT_OleObject::mutable_embed()
{

    m_has_link = false;

    if (m_link)
    {
        delete m_link;
        m_link = NULL;
    }
    ;

    m_has_embed = true;
    if (!m_embed)
    {
        m_embed = new CT_OleObjectEmbed();
    }
    return m_embed;
}

const CT_OleObjectEmbed& CT_OleObject::get_embed() const
{
    if (m_embed)
    {
        return *m_embed;
    }
    return CT_OleObjectEmbed::default_instance();
}

bool CT_OleObject::has_link() const
{
    return m_has_link;
}

CT_OleObjectLink* CT_OleObject::mutable_link()
{

    m_has_embed = false;

    if (m_embed)
    {
        delete m_embed;
        m_embed = NULL;
    }
    ;

    m_has_link = true;
    if (!m_link)
    {
        m_link = new CT_OleObjectLink();
    }
    return m_link;
}

const CT_OleObjectLink& CT_OleObject::get_link() const
{
    if (m_link)
    {
        return *m_link;
    }
    return CT_OleObjectLink::default_instance();
}

bool CT_OleObject::has_pic() const
{
    return m_has_pic;
}

CT_Picture* CT_OleObject::mutable_pic()
{
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
}

const CT_Picture& CT_OleObject::get_pic() const
{
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
}

void CT_OleObject::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_showAsIcon_attr = false;
    m_showAsIcon_attr = false;

    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_imgW_attr = false;

    if (m_imgW_attr)
    {
        delete m_imgW_attr;
        m_imgW_attr = NULL;
    }


    m_has_imgH_attr = false;

    if (m_imgH_attr)
    {
        delete m_imgH_attr;
        m_imgH_attr = NULL;
    }


    m_has_progId_attr = false;
    m_progId_attr.clear();

    m_has_embed = false;

    if (m_embed)
    {
        delete m_embed;
        m_embed = NULL;
    }


    m_has_link = false;

    if (m_link)
    {
        delete m_link;
        m_link = NULL;
    }


    m_has_pic = false;

    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }

}

void CT_OleObject::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }



    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }



    if (m_has_showAsIcon_attr)
    {
        _outStream << " " << "showAsIcon" << "=\"" << XSD::XMLBooleanStr(m_showAsIcon_attr) << "\"";
    }



    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }



    if (m_has_imgW_attr)
    {
        m_imgW_attr->toXmlAttr("imgW", _outStream);
    }



    if (m_has_imgH_attr)
    {
        m_imgH_attr->toXmlAttr("imgH", _outStream);
    }



    if (m_has_progId_attr)
    {
        _outStream << " " << "progId" << "=\"" << m_progId_attr << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_embed, m_has_link};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_embed)
    {
        m_embed->toXmlElem("p:embed", "", _outStream);
    }


    if (m_has_link)
    {
        m_link->toXmlElem("p:link", "", _outStream);
    }


    if (m_has_pic)
    {
        m_pic->toXmlElem("p:pic", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OleObject& CT_OleObject::default_instance()
{
    if (!CT_OleObject::default_instance_)
    {
        CT_OleObject::default_instance_ = new CT_OleObject();
    }
    return *CT_OleObject::default_instance_;
}

bool CT_OleObject::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_OleObject::set_spid_attr(const ns_a::ST_ShapeID& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_ShapeID(_spid_attr);
}

const ns_a::ST_ShapeID& CT_OleObject::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_ShapeID::default_instance();
}

bool CT_OleObject::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_OleObject::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& CT_OleObject::get_name_attr() const
{
    return m_name_attr;
}

bool CT_OleObject::has_showAsIcon_attr() const
{
    return m_has_showAsIcon_attr;
}

void CT_OleObject::set_showAsIcon_attr(const XSD::boolean_& _showAsIcon_attr)
{
    m_has_showAsIcon_attr = true;
    m_showAsIcon_attr = _showAsIcon_attr;
}

const XSD::boolean_& CT_OleObject::get_showAsIcon_attr() const
{
    return m_showAsIcon_attr;
}

bool CT_OleObject::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_OleObject::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_OleObject::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

bool CT_OleObject::has_imgW_attr() const
{
    return m_has_imgW_attr;
}

void CT_OleObject::set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr)
{
    m_has_imgW_attr = true;
    m_imgW_attr = new ns_a::ST_PositiveCoordinate32(_imgW_attr);
}

const ns_a::ST_PositiveCoordinate32& CT_OleObject::get_imgW_attr() const
{
    if (m_imgW_attr)
    {
        return *m_imgW_attr;
    }
    return ns_a::ST_PositiveCoordinate32::default_instance();
}

bool CT_OleObject::has_imgH_attr() const
{
    return m_has_imgH_attr;
}

void CT_OleObject::set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr)
{
    m_has_imgH_attr = true;
    m_imgH_attr = new ns_a::ST_PositiveCoordinate32(_imgH_attr);
}

const ns_a::ST_PositiveCoordinate32& CT_OleObject::get_imgH_attr() const
{
    if (m_imgH_attr)
    {
        return *m_imgH_attr;
    }
    return ns_a::ST_PositiveCoordinate32::default_instance();
}

bool CT_OleObject::has_progId_attr() const
{
    return m_has_progId_attr;
}

void CT_OleObject::set_progId_attr(const XSD::string_& _progId_attr)
{
    m_has_progId_attr = true;
    m_progId_attr = _progId_attr;
}

const XSD::string_& CT_OleObject::get_progId_attr() const
{
    return m_progId_attr;
}

CT_OleObject* CT_OleObject::default_instance_ = NULL;

// CT_Control
CT_Control::CT_Control()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_pic(false),
     m_pic(NULL),
     m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_name_attr(false),
     m_name_attr(""),
     m_has_showAsIcon_attr(false),
     m_showAsIcon_attr(false),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL),
     m_has_imgW_attr(false),
     m_imgW_attr(NULL),
     m_has_imgH_attr(false),
     m_imgH_attr(NULL)
{
}
CT_Control::~CT_Control()
{
    clear();
}
bool CT_Control::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Control::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Control::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

bool CT_Control::has_pic() const
{
    return m_has_pic;
}

CT_Picture* CT_Control::mutable_pic()
{
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
}

const CT_Picture& CT_Control::get_pic() const
{
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
}

void CT_Control::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_showAsIcon_attr = false;
    m_showAsIcon_attr = false;

    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_imgW_attr = false;

    if (m_imgW_attr)
    {
        delete m_imgW_attr;
        m_imgW_attr = NULL;
    }


    m_has_imgH_attr = false;

    if (m_imgH_attr)
    {
        delete m_imgH_attr;
        m_imgH_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }


    m_has_pic = false;

    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }

}

void CT_Control::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }



    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }



    if (m_has_showAsIcon_attr)
    {
        _outStream << " " << "showAsIcon" << "=\"" << XSD::XMLBooleanStr(m_showAsIcon_attr) << "\"";
    }



    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }



    if (m_has_imgW_attr)
    {
        m_imgW_attr->toXmlAttr("imgW", _outStream);
    }



    if (m_has_imgH_attr)
    {
        m_imgH_attr->toXmlAttr("imgH", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }


    if (m_has_pic)
    {
        m_pic->toXmlElem("p:pic", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Control& CT_Control::default_instance()
{
    if (!CT_Control::default_instance_)
    {
        CT_Control::default_instance_ = new CT_Control();
    }
    return *CT_Control::default_instance_;
}

bool CT_Control::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_Control::set_spid_attr(const ns_a::ST_ShapeID& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_ShapeID(_spid_attr);
}

const ns_a::ST_ShapeID& CT_Control::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_ShapeID::default_instance();
}

bool CT_Control::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_Control::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& CT_Control::get_name_attr() const
{
    return m_name_attr;
}

bool CT_Control::has_showAsIcon_attr() const
{
    return m_has_showAsIcon_attr;
}

void CT_Control::set_showAsIcon_attr(const XSD::boolean_& _showAsIcon_attr)
{
    m_has_showAsIcon_attr = true;
    m_showAsIcon_attr = _showAsIcon_attr;
}

const XSD::boolean_& CT_Control::get_showAsIcon_attr() const
{
    return m_showAsIcon_attr;
}

bool CT_Control::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_Control::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_Control::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

bool CT_Control::has_imgW_attr() const
{
    return m_has_imgW_attr;
}

void CT_Control::set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr)
{
    m_has_imgW_attr = true;
    m_imgW_attr = new ns_a::ST_PositiveCoordinate32(_imgW_attr);
}

const ns_a::ST_PositiveCoordinate32& CT_Control::get_imgW_attr() const
{
    if (m_imgW_attr)
    {
        return *m_imgW_attr;
    }
    return ns_a::ST_PositiveCoordinate32::default_instance();
}

bool CT_Control::has_imgH_attr() const
{
    return m_has_imgH_attr;
}

void CT_Control::set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr)
{
    m_has_imgH_attr = true;
    m_imgH_attr = new ns_a::ST_PositiveCoordinate32(_imgH_attr);
}

const ns_a::ST_PositiveCoordinate32& CT_Control::get_imgH_attr() const
{
    if (m_imgH_attr)
    {
        return *m_imgH_attr;
    }
    return ns_a::ST_PositiveCoordinate32::default_instance();
}

CT_Control* CT_Control::default_instance_ = NULL;

// CT_ControlList
CT_ControlList::CT_ControlList()

{
}
CT_ControlList::~CT_ControlList()
{
    clear();
}
CT_Control* CT_ControlList::add_control()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Control* pNewChild = pChildGroup->mutable_control();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_ControlList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_ControlList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_control())
            {
                (*iter)->get_control().toXmlElem("p:control", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ControlList& CT_ControlList::default_instance()
{
    if (!CT_ControlList::default_instance_)
    {
        CT_ControlList::default_instance_ = new CT_ControlList();
    }
    return *CT_ControlList::default_instance_;
}


// CT_ControlList::ChildGroup_1
CT_ControlList::ChildGroup_1::ChildGroup_1()
    :m_has_control(false),
     m_control(NULL)
{
}
bool CT_ControlList::ChildGroup_1::has_control() const
{
    return m_has_control;
}

CT_Control* CT_ControlList::ChildGroup_1::mutable_control()
{

    m_has_control = true;
    if (!m_control)
    {
        m_control = new CT_Control();
    }
    return m_control;
}

const CT_Control& CT_ControlList::ChildGroup_1::get_control() const
{
    if (m_control)
    {
        return *m_control;
    }
    return CT_Control::default_instance();
}

CT_ControlList* CT_ControlList::default_instance_ = NULL;

// CT_SlideIdListEntry
CT_SlideIdListEntry::CT_SlideIdListEntry()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_id_attr(false),
     m_id_attr(NULL),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_SlideIdListEntry::~CT_SlideIdListEntry()
{
    clear();
}
bool CT_SlideIdListEntry::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SlideIdListEntry::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SlideIdListEntry::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SlideIdListEntry::clear()
{
    m_has_id_attr = false;

    if (m_id_attr)
    {
        delete m_id_attr;
        m_id_attr = NULL;
    }


    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideIdListEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_id_attr);
    if (m_has_id_attr)
    {
        m_id_attr->toXmlAttr("id", _outStream);
    }


    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideIdListEntry& CT_SlideIdListEntry::default_instance()
{
    if (!CT_SlideIdListEntry::default_instance_)
    {
        CT_SlideIdListEntry::default_instance_ = new CT_SlideIdListEntry();
    }
    return *CT_SlideIdListEntry::default_instance_;
}

bool CT_SlideIdListEntry::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_SlideIdListEntry::set_id_attr(const ST_SlideId& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = new ST_SlideId(_id_attr);
}

const ST_SlideId& CT_SlideIdListEntry::get_id_attr() const
{
    if (m_id_attr)
    {
        return *m_id_attr;
    }
    return ST_SlideId::default_instance();
}

bool CT_SlideIdListEntry::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_SlideIdListEntry::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_SlideIdListEntry::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_SlideIdListEntry* CT_SlideIdListEntry::default_instance_ = NULL;

// CT_SlideIdList
CT_SlideIdList::CT_SlideIdList()

{
}
CT_SlideIdList::~CT_SlideIdList()
{
    clear();
}
CT_SlideIdListEntry* CT_SlideIdList::add_sldId()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SlideIdListEntry* pNewChild = pChildGroup->mutable_sldId();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_SlideIdList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_SlideIdList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sldId())
            {
                (*iter)->get_sldId().toXmlElem("p:sldId", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideIdList& CT_SlideIdList::default_instance()
{
    if (!CT_SlideIdList::default_instance_)
    {
        CT_SlideIdList::default_instance_ = new CT_SlideIdList();
    }
    return *CT_SlideIdList::default_instance_;
}


// CT_SlideIdList::ChildGroup_1
CT_SlideIdList::ChildGroup_1::ChildGroup_1()
    :m_has_sldId(false),
     m_sldId(NULL)
{
}
bool CT_SlideIdList::ChildGroup_1::has_sldId() const
{
    return m_has_sldId;
}

CT_SlideIdListEntry* CT_SlideIdList::ChildGroup_1::mutable_sldId()
{

    m_has_sldId = true;
    if (!m_sldId)
    {
        m_sldId = new CT_SlideIdListEntry();
    }
    return m_sldId;
}

const CT_SlideIdListEntry& CT_SlideIdList::ChildGroup_1::get_sldId() const
{
    if (m_sldId)
    {
        return *m_sldId;
    }
    return CT_SlideIdListEntry::default_instance();
}

CT_SlideIdList* CT_SlideIdList::default_instance_ = NULL;

// CT_SlideMasterIdListEntry
CT_SlideMasterIdListEntry::CT_SlideMasterIdListEntry()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_id_attr(false),
     m_id_attr(NULL),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_SlideMasterIdListEntry::~CT_SlideMasterIdListEntry()
{
    clear();
}
bool CT_SlideMasterIdListEntry::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SlideMasterIdListEntry::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SlideMasterIdListEntry::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SlideMasterIdListEntry::clear()
{
    m_has_id_attr = false;

    if (m_id_attr)
    {
        delete m_id_attr;
        m_id_attr = NULL;
    }


    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideMasterIdListEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_id_attr)
    {
        m_id_attr->toXmlAttr("id", _outStream);
    }


    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideMasterIdListEntry& CT_SlideMasterIdListEntry::default_instance()
{
    if (!CT_SlideMasterIdListEntry::default_instance_)
    {
        CT_SlideMasterIdListEntry::default_instance_ = new CT_SlideMasterIdListEntry();
    }
    return *CT_SlideMasterIdListEntry::default_instance_;
}

bool CT_SlideMasterIdListEntry::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_SlideMasterIdListEntry::set_id_attr(const ST_SlideMasterId& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = new ST_SlideMasterId(_id_attr);
}

const ST_SlideMasterId& CT_SlideMasterIdListEntry::get_id_attr() const
{
    if (m_id_attr)
    {
        return *m_id_attr;
    }
    return ST_SlideMasterId::default_instance();
}

bool CT_SlideMasterIdListEntry::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_SlideMasterIdListEntry::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_SlideMasterIdListEntry::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_SlideMasterIdListEntry* CT_SlideMasterIdListEntry::default_instance_ = NULL;

// CT_SlideMasterIdList
CT_SlideMasterIdList::CT_SlideMasterIdList()

{
}
CT_SlideMasterIdList::~CT_SlideMasterIdList()
{
    clear();
}
CT_SlideMasterIdListEntry* CT_SlideMasterIdList::add_sldMasterId()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SlideMasterIdListEntry* pNewChild = pChildGroup->mutable_sldMasterId();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_SlideMasterIdList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_SlideMasterIdList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sldMasterId())
            {
                (*iter)->get_sldMasterId().toXmlElem("p:sldMasterId", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideMasterIdList& CT_SlideMasterIdList::default_instance()
{
    if (!CT_SlideMasterIdList::default_instance_)
    {
        CT_SlideMasterIdList::default_instance_ = new CT_SlideMasterIdList();
    }
    return *CT_SlideMasterIdList::default_instance_;
}


// CT_SlideMasterIdList::ChildGroup_1
CT_SlideMasterIdList::ChildGroup_1::ChildGroup_1()
    :m_has_sldMasterId(false),
     m_sldMasterId(NULL)
{
}
bool CT_SlideMasterIdList::ChildGroup_1::has_sldMasterId() const
{
    return m_has_sldMasterId;
}

CT_SlideMasterIdListEntry* CT_SlideMasterIdList::ChildGroup_1::mutable_sldMasterId()
{

    m_has_sldMasterId = true;
    if (!m_sldMasterId)
    {
        m_sldMasterId = new CT_SlideMasterIdListEntry();
    }
    return m_sldMasterId;
}

const CT_SlideMasterIdListEntry& CT_SlideMasterIdList::ChildGroup_1::get_sldMasterId() const
{
    if (m_sldMasterId)
    {
        return *m_sldMasterId;
    }
    return CT_SlideMasterIdListEntry::default_instance();
}

CT_SlideMasterIdList* CT_SlideMasterIdList::default_instance_ = NULL;

// CT_NotesMasterIdListEntry
CT_NotesMasterIdListEntry::CT_NotesMasterIdListEntry()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_NotesMasterIdListEntry::~CT_NotesMasterIdListEntry()
{
    clear();
}
bool CT_NotesMasterIdListEntry::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_NotesMasterIdListEntry::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_NotesMasterIdListEntry::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_NotesMasterIdListEntry::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NotesMasterIdListEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NotesMasterIdListEntry& CT_NotesMasterIdListEntry::default_instance()
{
    if (!CT_NotesMasterIdListEntry::default_instance_)
    {
        CT_NotesMasterIdListEntry::default_instance_ = new CT_NotesMasterIdListEntry();
    }
    return *CT_NotesMasterIdListEntry::default_instance_;
}

bool CT_NotesMasterIdListEntry::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_NotesMasterIdListEntry::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_NotesMasterIdListEntry::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_NotesMasterIdListEntry* CT_NotesMasterIdListEntry::default_instance_ = NULL;

// CT_NotesMasterIdList
CT_NotesMasterIdList::CT_NotesMasterIdList()
    :m_has_notesMasterId(false),
     m_notesMasterId(NULL)
{
}
CT_NotesMasterIdList::~CT_NotesMasterIdList()
{
    clear();
}
bool CT_NotesMasterIdList::has_notesMasterId() const
{
    return m_has_notesMasterId;
}

CT_NotesMasterIdListEntry* CT_NotesMasterIdList::mutable_notesMasterId()
{
    m_has_notesMasterId = true;
    if (!m_notesMasterId)
    {
        m_notesMasterId = new CT_NotesMasterIdListEntry();
    }
    return m_notesMasterId;
}

const CT_NotesMasterIdListEntry& CT_NotesMasterIdList::get_notesMasterId() const
{
    if (m_notesMasterId)
    {
        return *m_notesMasterId;
    }
    return CT_NotesMasterIdListEntry::default_instance();
}

void CT_NotesMasterIdList::clear()
{
    m_has_notesMasterId = false;

    if (m_notesMasterId)
    {
        delete m_notesMasterId;
        m_notesMasterId = NULL;
    }

}

void CT_NotesMasterIdList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_notesMasterId)
    {
        m_notesMasterId->toXmlElem("p:notesMasterId", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NotesMasterIdList& CT_NotesMasterIdList::default_instance()
{
    if (!CT_NotesMasterIdList::default_instance_)
    {
        CT_NotesMasterIdList::default_instance_ = new CT_NotesMasterIdList();
    }
    return *CT_NotesMasterIdList::default_instance_;
}

CT_NotesMasterIdList* CT_NotesMasterIdList::default_instance_ = NULL;

// CT_HandoutMasterIdListEntry
CT_HandoutMasterIdListEntry::CT_HandoutMasterIdListEntry()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_HandoutMasterIdListEntry::~CT_HandoutMasterIdListEntry()
{
    clear();
}
bool CT_HandoutMasterIdListEntry::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_HandoutMasterIdListEntry::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_HandoutMasterIdListEntry::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_HandoutMasterIdListEntry::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_HandoutMasterIdListEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_HandoutMasterIdListEntry& CT_HandoutMasterIdListEntry::default_instance()
{
    if (!CT_HandoutMasterIdListEntry::default_instance_)
    {
        CT_HandoutMasterIdListEntry::default_instance_ = new CT_HandoutMasterIdListEntry();
    }
    return *CT_HandoutMasterIdListEntry::default_instance_;
}

bool CT_HandoutMasterIdListEntry::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_HandoutMasterIdListEntry::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_HandoutMasterIdListEntry::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_HandoutMasterIdListEntry* CT_HandoutMasterIdListEntry::default_instance_ = NULL;

// CT_HandoutMasterIdList
CT_HandoutMasterIdList::CT_HandoutMasterIdList()
    :m_has_handoutMasterId(false),
     m_handoutMasterId(NULL)
{
}
CT_HandoutMasterIdList::~CT_HandoutMasterIdList()
{
    clear();
}
bool CT_HandoutMasterIdList::has_handoutMasterId() const
{
    return m_has_handoutMasterId;
}

CT_HandoutMasterIdListEntry* CT_HandoutMasterIdList::mutable_handoutMasterId()
{
    m_has_handoutMasterId = true;
    if (!m_handoutMasterId)
    {
        m_handoutMasterId = new CT_HandoutMasterIdListEntry();
    }
    return m_handoutMasterId;
}

const CT_HandoutMasterIdListEntry& CT_HandoutMasterIdList::get_handoutMasterId() const
{
    if (m_handoutMasterId)
    {
        return *m_handoutMasterId;
    }
    return CT_HandoutMasterIdListEntry::default_instance();
}

void CT_HandoutMasterIdList::clear()
{
    m_has_handoutMasterId = false;

    if (m_handoutMasterId)
    {
        delete m_handoutMasterId;
        m_handoutMasterId = NULL;
    }

}

void CT_HandoutMasterIdList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_handoutMasterId)
    {
        m_handoutMasterId->toXmlElem("p:handoutMasterId", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_HandoutMasterIdList& CT_HandoutMasterIdList::default_instance()
{
    if (!CT_HandoutMasterIdList::default_instance_)
    {
        CT_HandoutMasterIdList::default_instance_ = new CT_HandoutMasterIdList();
    }
    return *CT_HandoutMasterIdList::default_instance_;
}

CT_HandoutMasterIdList* CT_HandoutMasterIdList::default_instance_ = NULL;

// CT_EmbeddedFontDataId
CT_EmbeddedFontDataId::CT_EmbeddedFontDataId()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_EmbeddedFontDataId::~CT_EmbeddedFontDataId()
{
    clear();
}
void CT_EmbeddedFontDataId::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }

}

void CT_EmbeddedFontDataId::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_EmbeddedFontDataId& CT_EmbeddedFontDataId::default_instance()
{
    if (!CT_EmbeddedFontDataId::default_instance_)
    {
        CT_EmbeddedFontDataId::default_instance_ = new CT_EmbeddedFontDataId();
    }
    return *CT_EmbeddedFontDataId::default_instance_;
}

bool CT_EmbeddedFontDataId::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_EmbeddedFontDataId::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_EmbeddedFontDataId::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_EmbeddedFontDataId* CT_EmbeddedFontDataId::default_instance_ = NULL;

// CT_EmbeddedFontListEntry
CT_EmbeddedFontListEntry::CT_EmbeddedFontListEntry()
    :m_has_font(false),
     m_font(NULL),
     m_has_regular(false),
     m_regular(NULL),
     m_has_bold(false),
     m_bold(NULL),
     m_has_italic(false),
     m_italic(NULL),
     m_has_boldItalic(false),
     m_boldItalic(NULL)
{
}
CT_EmbeddedFontListEntry::~CT_EmbeddedFontListEntry()
{
    clear();
}
bool CT_EmbeddedFontListEntry::has_font() const
{
    return m_has_font;
}

ns_a::CT_TextFont* CT_EmbeddedFontListEntry::mutable_font()
{
    m_has_font = true;
    if (!m_font)
    {
        m_font = new ns_a::CT_TextFont();
    }
    return m_font;
}

const ns_a::CT_TextFont& CT_EmbeddedFontListEntry::get_font() const
{
    if (m_font)
    {
        return *m_font;
    }
    return ns_a::CT_TextFont::default_instance();
}

bool CT_EmbeddedFontListEntry::has_regular() const
{
    return m_has_regular;
}

CT_EmbeddedFontDataId* CT_EmbeddedFontListEntry::mutable_regular()
{
    m_has_regular = true;
    if (!m_regular)
    {
        m_regular = new CT_EmbeddedFontDataId();
    }
    return m_regular;
}

const CT_EmbeddedFontDataId& CT_EmbeddedFontListEntry::get_regular() const
{
    if (m_regular)
    {
        return *m_regular;
    }
    return CT_EmbeddedFontDataId::default_instance();
}

bool CT_EmbeddedFontListEntry::has_bold() const
{
    return m_has_bold;
}

CT_EmbeddedFontDataId* CT_EmbeddedFontListEntry::mutable_bold()
{
    m_has_bold = true;
    if (!m_bold)
    {
        m_bold = new CT_EmbeddedFontDataId();
    }
    return m_bold;
}

const CT_EmbeddedFontDataId& CT_EmbeddedFontListEntry::get_bold() const
{
    if (m_bold)
    {
        return *m_bold;
    }
    return CT_EmbeddedFontDataId::default_instance();
}

bool CT_EmbeddedFontListEntry::has_italic() const
{
    return m_has_italic;
}

CT_EmbeddedFontDataId* CT_EmbeddedFontListEntry::mutable_italic()
{
    m_has_italic = true;
    if (!m_italic)
    {
        m_italic = new CT_EmbeddedFontDataId();
    }
    return m_italic;
}

const CT_EmbeddedFontDataId& CT_EmbeddedFontListEntry::get_italic() const
{
    if (m_italic)
    {
        return *m_italic;
    }
    return CT_EmbeddedFontDataId::default_instance();
}

bool CT_EmbeddedFontListEntry::has_boldItalic() const
{
    return m_has_boldItalic;
}

CT_EmbeddedFontDataId* CT_EmbeddedFontListEntry::mutable_boldItalic()
{
    m_has_boldItalic = true;
    if (!m_boldItalic)
    {
        m_boldItalic = new CT_EmbeddedFontDataId();
    }
    return m_boldItalic;
}

const CT_EmbeddedFontDataId& CT_EmbeddedFontListEntry::get_boldItalic() const
{
    if (m_boldItalic)
    {
        return *m_boldItalic;
    }
    return CT_EmbeddedFontDataId::default_instance();
}

void CT_EmbeddedFontListEntry::clear()
{
    m_has_font = false;

    if (m_font)
    {
        delete m_font;
        m_font = NULL;
    }


    m_has_regular = false;

    if (m_regular)
    {
        delete m_regular;
        m_regular = NULL;
    }


    m_has_bold = false;

    if (m_bold)
    {
        delete m_bold;
        m_bold = NULL;
    }


    m_has_italic = false;

    if (m_italic)
    {
        delete m_italic;
        m_italic = NULL;
    }


    m_has_boldItalic = false;

    if (m_boldItalic)
    {
        delete m_boldItalic;
        m_boldItalic = NULL;
    }

}

void CT_EmbeddedFontListEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_font);


    if (m_has_font)
    {
        m_font->toXmlElem("p:font", "", _outStream);
    }


    if (m_has_regular)
    {
        m_regular->toXmlElem("p:regular", "", _outStream);
    }


    if (m_has_bold)
    {
        m_bold->toXmlElem("p:bold", "", _outStream);
    }


    if (m_has_italic)
    {
        m_italic->toXmlElem("p:italic", "", _outStream);
    }


    if (m_has_boldItalic)
    {
        m_boldItalic->toXmlElem("p:boldItalic", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_EmbeddedFontListEntry& CT_EmbeddedFontListEntry::default_instance()
{
    if (!CT_EmbeddedFontListEntry::default_instance_)
    {
        CT_EmbeddedFontListEntry::default_instance_ = new CT_EmbeddedFontListEntry();
    }
    return *CT_EmbeddedFontListEntry::default_instance_;
}

CT_EmbeddedFontListEntry* CT_EmbeddedFontListEntry::default_instance_ = NULL;

// CT_EmbeddedFontList
CT_EmbeddedFontList::CT_EmbeddedFontList()

{
}
CT_EmbeddedFontList::~CT_EmbeddedFontList()
{
    clear();
}
CT_EmbeddedFontListEntry* CT_EmbeddedFontList::add_embeddedFont()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_EmbeddedFontListEntry* pNewChild = pChildGroup->mutable_embeddedFont();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_EmbeddedFontList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_EmbeddedFontList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_embeddedFont())
            {
                (*iter)->get_embeddedFont().toXmlElem("p:embeddedFont", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_EmbeddedFontList& CT_EmbeddedFontList::default_instance()
{
    if (!CT_EmbeddedFontList::default_instance_)
    {
        CT_EmbeddedFontList::default_instance_ = new CT_EmbeddedFontList();
    }
    return *CT_EmbeddedFontList::default_instance_;
}


// CT_EmbeddedFontList::ChildGroup_1
CT_EmbeddedFontList::ChildGroup_1::ChildGroup_1()
    :m_has_embeddedFont(false),
     m_embeddedFont(NULL)
{
}
bool CT_EmbeddedFontList::ChildGroup_1::has_embeddedFont() const
{
    return m_has_embeddedFont;
}

CT_EmbeddedFontListEntry* CT_EmbeddedFontList::ChildGroup_1::mutable_embeddedFont()
{

    m_has_embeddedFont = true;
    if (!m_embeddedFont)
    {
        m_embeddedFont = new CT_EmbeddedFontListEntry();
    }
    return m_embeddedFont;
}

const CT_EmbeddedFontListEntry& CT_EmbeddedFontList::ChildGroup_1::get_embeddedFont() const
{
    if (m_embeddedFont)
    {
        return *m_embeddedFont;
    }
    return CT_EmbeddedFontListEntry::default_instance();
}

CT_EmbeddedFontList* CT_EmbeddedFontList::default_instance_ = NULL;

// CT_SmartTags
CT_SmartTags::CT_SmartTags()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_SmartTags::~CT_SmartTags()
{
    clear();
}
void CT_SmartTags::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }

}

void CT_SmartTags::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SmartTags& CT_SmartTags::default_instance()
{
    if (!CT_SmartTags::default_instance_)
    {
        CT_SmartTags::default_instance_ = new CT_SmartTags();
    }
    return *CT_SmartTags::default_instance_;
}

bool CT_SmartTags::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_SmartTags::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_SmartTags::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_SmartTags* CT_SmartTags::default_instance_ = NULL;

// CT_CustomShow
CT_CustomShow::CT_CustomShow()
    :m_has_sldLst(false),
     m_sldLst(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_name_attr(false),
     m_name_attr(NULL),
     m_has_id_attr(false),
     m_id_attr(0)
{
}
CT_CustomShow::~CT_CustomShow()
{
    clear();
}
bool CT_CustomShow::has_sldLst() const
{
    return m_has_sldLst;
}

CT_SlideRelationshipList* CT_CustomShow::mutable_sldLst()
{
    m_has_sldLst = true;
    if (!m_sldLst)
    {
        m_sldLst = new CT_SlideRelationshipList();
    }
    return m_sldLst;
}

const CT_SlideRelationshipList& CT_CustomShow::get_sldLst() const
{
    if (m_sldLst)
    {
        return *m_sldLst;
    }
    return CT_SlideRelationshipList::default_instance();
}

bool CT_CustomShow::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_CustomShow::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_CustomShow::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_CustomShow::clear()
{
    m_has_name_attr = false;

    if (m_name_attr)
    {
        delete m_name_attr;
        m_name_attr = NULL;
    }


    m_has_id_attr = false;
    m_id_attr = 0;

    m_has_sldLst = false;

    if (m_sldLst)
    {
        delete m_sldLst;
        m_sldLst = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_CustomShow::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_name_attr);
    if (m_has_name_attr)
    {
        m_name_attr->toXmlAttr("name", _outStream);
    }


    assert(m_has_id_attr);
    if (m_has_id_attr)
    {
        _outStream << " " << "id" << "=\"" << m_id_attr << "\"";
    }

    _outStream << ">";

    assert(m_has_sldLst);


    if (m_has_sldLst)
    {
        m_sldLst->toXmlElem("p:sldLst", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CustomShow& CT_CustomShow::default_instance()
{
    if (!CT_CustomShow::default_instance_)
    {
        CT_CustomShow::default_instance_ = new CT_CustomShow();
    }
    return *CT_CustomShow::default_instance_;
}

bool CT_CustomShow::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_CustomShow::set_name_attr(const ST_Name& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = new ST_Name(_name_attr);
}

const ST_Name& CT_CustomShow::get_name_attr() const
{
    if (m_name_attr)
    {
        return *m_name_attr;
    }
    return ST_Name::default_instance();
}

bool CT_CustomShow::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_CustomShow::set_id_attr(const XSD::unsignedInt_& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = _id_attr;
}

const XSD::unsignedInt_& CT_CustomShow::get_id_attr() const
{
    return m_id_attr;
}

CT_CustomShow* CT_CustomShow::default_instance_ = NULL;

// CT_CustomShowList
CT_CustomShowList::CT_CustomShowList()

{
}
CT_CustomShowList::~CT_CustomShowList()
{
    clear();
}
CT_CustomShow* CT_CustomShowList::add_custShow()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CustomShow* pNewChild = pChildGroup->mutable_custShow();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_CustomShowList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_CustomShowList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_custShow())
            {
                (*iter)->get_custShow().toXmlElem("p:custShow", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CustomShowList& CT_CustomShowList::default_instance()
{
    if (!CT_CustomShowList::default_instance_)
    {
        CT_CustomShowList::default_instance_ = new CT_CustomShowList();
    }
    return *CT_CustomShowList::default_instance_;
}


// CT_CustomShowList::ChildGroup_1
CT_CustomShowList::ChildGroup_1::ChildGroup_1()
    :m_has_custShow(false),
     m_custShow(NULL)
{
}
bool CT_CustomShowList::ChildGroup_1::has_custShow() const
{
    return m_has_custShow;
}

CT_CustomShow* CT_CustomShowList::ChildGroup_1::mutable_custShow()
{

    m_has_custShow = true;
    if (!m_custShow)
    {
        m_custShow = new CT_CustomShow();
    }
    return m_custShow;
}

const CT_CustomShow& CT_CustomShowList::ChildGroup_1::get_custShow() const
{
    if (m_custShow)
    {
        return *m_custShow;
    }
    return CT_CustomShow::default_instance();
}

CT_CustomShowList* CT_CustomShowList::default_instance_ = NULL;

// CT_PhotoAlbum
CT_PhotoAlbum::CT_PhotoAlbum()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_bw_attr(false),
     m_bw_attr(false),
     m_has_showCaptions_attr(false),
     m_showCaptions_attr(false),
     m_has_layout_attr(false),
     m_layout_attr(NULL),
     m_has_frame_attr(false),
     m_frame_attr(NULL)
{
}
CT_PhotoAlbum::~CT_PhotoAlbum()
{
    clear();
}
bool CT_PhotoAlbum::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_PhotoAlbum::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_PhotoAlbum::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_PhotoAlbum::clear()
{
    m_has_bw_attr = false;
    m_bw_attr = false;

    m_has_showCaptions_attr = false;
    m_showCaptions_attr = false;

    m_has_layout_attr = false;

    if (m_layout_attr)
    {
        delete m_layout_attr;
        m_layout_attr = NULL;
    }


    m_has_frame_attr = false;

    if (m_frame_attr)
    {
        delete m_frame_attr;
        m_frame_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_PhotoAlbum::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_bw_attr)
    {
        _outStream << " " << "bw" << "=\"" << XSD::XMLBooleanStr(m_bw_attr) << "\"";
    }



    if (m_has_showCaptions_attr)
    {
        _outStream << " " << "showCaptions" << "=\"" << XSD::XMLBooleanStr(m_showCaptions_attr) << "\"";
    }



    if (m_has_layout_attr)
    {
        m_layout_attr->toXmlAttr("layout", _outStream);
    }



    if (m_has_frame_attr)
    {
        m_frame_attr->toXmlAttr("frame", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PhotoAlbum& CT_PhotoAlbum::default_instance()
{
    if (!CT_PhotoAlbum::default_instance_)
    {
        CT_PhotoAlbum::default_instance_ = new CT_PhotoAlbum();
    }
    return *CT_PhotoAlbum::default_instance_;
}

bool CT_PhotoAlbum::has_bw_attr() const
{
    return m_has_bw_attr;
}

void CT_PhotoAlbum::set_bw_attr(const XSD::boolean_& _bw_attr)
{
    m_has_bw_attr = true;
    m_bw_attr = _bw_attr;
}

const XSD::boolean_& CT_PhotoAlbum::get_bw_attr() const
{
    return m_bw_attr;
}

bool CT_PhotoAlbum::has_showCaptions_attr() const
{
    return m_has_showCaptions_attr;
}

void CT_PhotoAlbum::set_showCaptions_attr(const XSD::boolean_& _showCaptions_attr)
{
    m_has_showCaptions_attr = true;
    m_showCaptions_attr = _showCaptions_attr;
}

const XSD::boolean_& CT_PhotoAlbum::get_showCaptions_attr() const
{
    return m_showCaptions_attr;
}

bool CT_PhotoAlbum::has_layout_attr() const
{
    return m_has_layout_attr;
}

void CT_PhotoAlbum::set_layout_attr(const ST_PhotoAlbumLayout& _layout_attr)
{
    m_has_layout_attr = true;
    m_layout_attr = new ST_PhotoAlbumLayout(_layout_attr);
}

const ST_PhotoAlbumLayout& CT_PhotoAlbum::get_layout_attr() const
{
    if (m_layout_attr)
    {
        return *m_layout_attr;
    }
    return ST_PhotoAlbumLayout::default_instance();
}

bool CT_PhotoAlbum::has_frame_attr() const
{
    return m_has_frame_attr;
}

void CT_PhotoAlbum::set_frame_attr(const ST_PhotoAlbumFrameShape& _frame_attr)
{
    m_has_frame_attr = true;
    m_frame_attr = new ST_PhotoAlbumFrameShape(_frame_attr);
}

const ST_PhotoAlbumFrameShape& CT_PhotoAlbum::get_frame_attr() const
{
    if (m_frame_attr)
    {
        return *m_frame_attr;
    }
    return ST_PhotoAlbumFrameShape::default_instance();
}

CT_PhotoAlbum* CT_PhotoAlbum::default_instance_ = NULL;

// CT_SlideSize
CT_SlideSize::CT_SlideSize()
    :m_has_cx_attr(false),
     m_cx_attr(NULL),
     m_has_cy_attr(false),
     m_cy_attr(NULL),
     m_has_type_attr(false),
     m_type_attr(NULL)
{
}
CT_SlideSize::~CT_SlideSize()
{
    clear();
}
void CT_SlideSize::clear()
{
    m_has_cx_attr = false;

    if (m_cx_attr)
    {
        delete m_cx_attr;
        m_cx_attr = NULL;
    }


    m_has_cy_attr = false;

    if (m_cy_attr)
    {
        delete m_cy_attr;
        m_cy_attr = NULL;
    }


    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }

}

void CT_SlideSize::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_cx_attr);
    if (m_has_cx_attr)
    {
        m_cx_attr->toXmlAttr("cx", _outStream);
    }


    assert(m_has_cy_attr);
    if (m_has_cy_attr)
    {
        m_cy_attr->toXmlAttr("cy", _outStream);
    }



    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_SlideSize& CT_SlideSize::default_instance()
{
    if (!CT_SlideSize::default_instance_)
    {
        CT_SlideSize::default_instance_ = new CT_SlideSize();
    }
    return *CT_SlideSize::default_instance_;
}

bool CT_SlideSize::has_cx_attr() const
{
    return m_has_cx_attr;
}

void CT_SlideSize::set_cx_attr(const ST_SlideSizeCoordinate& _cx_attr)
{
    m_has_cx_attr = true;
    m_cx_attr = new ST_SlideSizeCoordinate(_cx_attr);
}

const ST_SlideSizeCoordinate& CT_SlideSize::get_cx_attr() const
{
    if (m_cx_attr)
    {
        return *m_cx_attr;
    }
    return ST_SlideSizeCoordinate::default_instance();
}

bool CT_SlideSize::has_cy_attr() const
{
    return m_has_cy_attr;
}

void CT_SlideSize::set_cy_attr(const ST_SlideSizeCoordinate& _cy_attr)
{
    m_has_cy_attr = true;
    m_cy_attr = new ST_SlideSizeCoordinate(_cy_attr);
}

const ST_SlideSizeCoordinate& CT_SlideSize::get_cy_attr() const
{
    if (m_cy_attr)
    {
        return *m_cy_attr;
    }
    return ST_SlideSizeCoordinate::default_instance();
}

bool CT_SlideSize::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_SlideSize::set_type_attr(const ST_SlideSizeType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_SlideSizeType(_type_attr);
}

const ST_SlideSizeType& CT_SlideSize::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_SlideSizeType::default_instance();
}

CT_SlideSize* CT_SlideSize::default_instance_ = NULL;

// CT_Kinsoku
CT_Kinsoku::CT_Kinsoku()
    :m_has_lang_attr(false),
     m_lang_attr(""),
     m_has_invalStChars_attr(false),
     m_invalStChars_attr(""),
     m_has_invalEndChars_attr(false),
     m_invalEndChars_attr("")
{
}
CT_Kinsoku::~CT_Kinsoku()
{
    clear();
}
void CT_Kinsoku::clear()
{
    m_has_lang_attr = false;
    m_lang_attr.clear();

    m_has_invalStChars_attr = false;
    m_invalStChars_attr.clear();

    m_has_invalEndChars_attr = false;
    m_invalEndChars_attr.clear();
}

void CT_Kinsoku::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_lang_attr)
    {
        _outStream << " " << "lang" << "=\"" << m_lang_attr << "\"";
    }


    assert(m_has_invalStChars_attr);
    if (m_has_invalStChars_attr)
    {
        _outStream << " " << "invalStChars" << "=\"" << m_invalStChars_attr << "\"";
    }


    assert(m_has_invalEndChars_attr);
    if (m_has_invalEndChars_attr)
    {
        _outStream << " " << "invalEndChars" << "=\"" << m_invalEndChars_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Kinsoku& CT_Kinsoku::default_instance()
{
    if (!CT_Kinsoku::default_instance_)
    {
        CT_Kinsoku::default_instance_ = new CT_Kinsoku();
    }
    return *CT_Kinsoku::default_instance_;
}

bool CT_Kinsoku::has_lang_attr() const
{
    return m_has_lang_attr;
}

void CT_Kinsoku::set_lang_attr(const XSD::string_& _lang_attr)
{
    m_has_lang_attr = true;
    m_lang_attr = _lang_attr;
}

const XSD::string_& CT_Kinsoku::get_lang_attr() const
{
    return m_lang_attr;
}

bool CT_Kinsoku::has_invalStChars_attr() const
{
    return m_has_invalStChars_attr;
}

void CT_Kinsoku::set_invalStChars_attr(const XSD::string_& _invalStChars_attr)
{
    m_has_invalStChars_attr = true;
    m_invalStChars_attr = _invalStChars_attr;
}

const XSD::string_& CT_Kinsoku::get_invalStChars_attr() const
{
    return m_invalStChars_attr;
}

bool CT_Kinsoku::has_invalEndChars_attr() const
{
    return m_has_invalEndChars_attr;
}

void CT_Kinsoku::set_invalEndChars_attr(const XSD::string_& _invalEndChars_attr)
{
    m_has_invalEndChars_attr = true;
    m_invalEndChars_attr = _invalEndChars_attr;
}

const XSD::string_& CT_Kinsoku::get_invalEndChars_attr() const
{
    return m_invalEndChars_attr;
}

CT_Kinsoku* CT_Kinsoku::default_instance_ = NULL;

// CT_ModifyVerifier
CT_ModifyVerifier::CT_ModifyVerifier()
    :m_has_algorithmName_attr(false),
     m_algorithmName_attr(""),
     m_has_hashValue_attr(false),
     m_hashValue_attr(""),
     m_has_saltValue_attr(false),
     m_saltValue_attr(""),
     m_has_spinValue_attr(false),
     m_spinValue_attr(0),
     m_has_cryptProviderType_attr(false),
     m_cryptProviderType_attr(NULL),
     m_has_cryptAlgorithmClass_attr(false),
     m_cryptAlgorithmClass_attr(NULL),
     m_has_cryptAlgorithmType_attr(false),
     m_cryptAlgorithmType_attr(NULL),
     m_has_cryptAlgorithmSid_attr(false),
     m_cryptAlgorithmSid_attr(0),
     m_has_spinCount_attr(false),
     m_spinCount_attr(0),
     m_has_saltData_attr(false),
     m_saltData_attr(""),
     m_has_hashData_attr(false),
     m_hashData_attr(""),
     m_has_cryptProvider_attr(false),
     m_cryptProvider_attr(""),
     m_has_algIdExt_attr(false),
     m_algIdExt_attr(0),
     m_has_algIdExtSource_attr(false),
     m_algIdExtSource_attr(""),
     m_has_cryptProviderTypeExt_attr(false),
     m_cryptProviderTypeExt_attr(0),
     m_has_cryptProviderTypeExtSource_attr(false),
     m_cryptProviderTypeExtSource_attr("")
{
}
CT_ModifyVerifier::~CT_ModifyVerifier()
{
    clear();
}
void CT_ModifyVerifier::clear()
{
    m_has_algorithmName_attr = false;
    m_algorithmName_attr.clear();

    m_has_hashValue_attr = false;
    m_hashValue_attr.clear();

    m_has_saltValue_attr = false;
    m_saltValue_attr.clear();

    m_has_spinValue_attr = false;
    m_spinValue_attr = 0;

    m_has_cryptProviderType_attr = false;

    if (m_cryptProviderType_attr)
    {
        delete m_cryptProviderType_attr;
        m_cryptProviderType_attr = NULL;
    }


    m_has_cryptAlgorithmClass_attr = false;

    if (m_cryptAlgorithmClass_attr)
    {
        delete m_cryptAlgorithmClass_attr;
        m_cryptAlgorithmClass_attr = NULL;
    }


    m_has_cryptAlgorithmType_attr = false;

    if (m_cryptAlgorithmType_attr)
    {
        delete m_cryptAlgorithmType_attr;
        m_cryptAlgorithmType_attr = NULL;
    }


    m_has_cryptAlgorithmSid_attr = false;
    m_cryptAlgorithmSid_attr = 0;

    m_has_spinCount_attr = false;
    m_spinCount_attr = 0;

    m_has_saltData_attr = false;
    m_saltData_attr.clear();

    m_has_hashData_attr = false;
    m_hashData_attr.clear();

    m_has_cryptProvider_attr = false;
    m_cryptProvider_attr.clear();

    m_has_algIdExt_attr = false;
    m_algIdExt_attr = 0;

    m_has_algIdExtSource_attr = false;
    m_algIdExtSource_attr.clear();

    m_has_cryptProviderTypeExt_attr = false;
    m_cryptProviderTypeExt_attr = 0;

    m_has_cryptProviderTypeExtSource_attr = false;
    m_cryptProviderTypeExtSource_attr.clear();
}

void CT_ModifyVerifier::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_algorithmName_attr)
    {
        _outStream << " " << "algorithmName" << "=\"" << m_algorithmName_attr << "\"";
    }



    if (m_has_hashValue_attr)
    {
        _outStream << " " << "hashValue" << "=\"" << m_hashValue_attr << "\"";
    }



    if (m_has_saltValue_attr)
    {
        _outStream << " " << "saltValue" << "=\"" << m_saltValue_attr << "\"";
    }



    if (m_has_spinValue_attr)
    {
        _outStream << " " << "spinValue" << "=\"" << m_spinValue_attr << "\"";
    }



    if (m_has_cryptProviderType_attr)
    {
        m_cryptProviderType_attr->toXmlAttr("cryptProviderType", _outStream);
    }



    if (m_has_cryptAlgorithmClass_attr)
    {
        m_cryptAlgorithmClass_attr->toXmlAttr("cryptAlgorithmClass", _outStream);
    }



    if (m_has_cryptAlgorithmType_attr)
    {
        m_cryptAlgorithmType_attr->toXmlAttr("cryptAlgorithmType", _outStream);
    }



    if (m_has_cryptAlgorithmSid_attr)
    {
        _outStream << " " << "cryptAlgorithmSid" << "=\"" << m_cryptAlgorithmSid_attr << "\"";
    }



    if (m_has_spinCount_attr)
    {
        _outStream << " " << "spinCount" << "=\"" << m_spinCount_attr << "\"";
    }



    if (m_has_saltData_attr)
    {
        _outStream << " " << "saltData" << "=\"" << m_saltData_attr << "\"";
    }



    if (m_has_hashData_attr)
    {
        _outStream << " " << "hashData" << "=\"" << m_hashData_attr << "\"";
    }



    if (m_has_cryptProvider_attr)
    {
        _outStream << " " << "cryptProvider" << "=\"" << m_cryptProvider_attr << "\"";
    }



    if (m_has_algIdExt_attr)
    {
        _outStream << " " << "algIdExt" << "=\"" << m_algIdExt_attr << "\"";
    }



    if (m_has_algIdExtSource_attr)
    {
        _outStream << " " << "algIdExtSource" << "=\"" << m_algIdExtSource_attr << "\"";
    }



    if (m_has_cryptProviderTypeExt_attr)
    {
        _outStream << " " << "cryptProviderTypeExt" << "=\"" << m_cryptProviderTypeExt_attr << "\"";
    }



    if (m_has_cryptProviderTypeExtSource_attr)
    {
        _outStream << " " << "cryptProviderTypeExtSource" << "=\"" << m_cryptProviderTypeExtSource_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ModifyVerifier& CT_ModifyVerifier::default_instance()
{
    if (!CT_ModifyVerifier::default_instance_)
    {
        CT_ModifyVerifier::default_instance_ = new CT_ModifyVerifier();
    }
    return *CT_ModifyVerifier::default_instance_;
}

bool CT_ModifyVerifier::has_algorithmName_attr() const
{
    return m_has_algorithmName_attr;
}

void CT_ModifyVerifier::set_algorithmName_attr(const XSD::string_& _algorithmName_attr)
{
    m_has_algorithmName_attr = true;
    m_algorithmName_attr = _algorithmName_attr;
}

const XSD::string_& CT_ModifyVerifier::get_algorithmName_attr() const
{
    return m_algorithmName_attr;
}

bool CT_ModifyVerifier::has_hashValue_attr() const
{
    return m_has_hashValue_attr;
}

void CT_ModifyVerifier::set_hashValue_attr(const XSD::base64Binary_& _hashValue_attr)
{
    m_has_hashValue_attr = true;
    m_hashValue_attr = _hashValue_attr;
}

const XSD::base64Binary_& CT_ModifyVerifier::get_hashValue_attr() const
{
    return m_hashValue_attr;
}

bool CT_ModifyVerifier::has_saltValue_attr() const
{
    return m_has_saltValue_attr;
}

void CT_ModifyVerifier::set_saltValue_attr(const XSD::base64Binary_& _saltValue_attr)
{
    m_has_saltValue_attr = true;
    m_saltValue_attr = _saltValue_attr;
}

const XSD::base64Binary_& CT_ModifyVerifier::get_saltValue_attr() const
{
    return m_saltValue_attr;
}

bool CT_ModifyVerifier::has_spinValue_attr() const
{
    return m_has_spinValue_attr;
}

void CT_ModifyVerifier::set_spinValue_attr(const XSD::unsignedInt_& _spinValue_attr)
{
    m_has_spinValue_attr = true;
    m_spinValue_attr = _spinValue_attr;
}

const XSD::unsignedInt_& CT_ModifyVerifier::get_spinValue_attr() const
{
    return m_spinValue_attr;
}

bool CT_ModifyVerifier::has_cryptProviderType_attr() const
{
    return m_has_cryptProviderType_attr;
}

void CT_ModifyVerifier::set_cryptProviderType_attr(const ns_s::ST_CryptProv& _cryptProviderType_attr)
{
    m_has_cryptProviderType_attr = true;
    m_cryptProviderType_attr = new ns_s::ST_CryptProv(_cryptProviderType_attr);
}

const ns_s::ST_CryptProv& CT_ModifyVerifier::get_cryptProviderType_attr() const
{
    if (m_cryptProviderType_attr)
    {
        return *m_cryptProviderType_attr;
    }
    return ns_s::ST_CryptProv::default_instance();
}

bool CT_ModifyVerifier::has_cryptAlgorithmClass_attr() const
{
    return m_has_cryptAlgorithmClass_attr;
}

void CT_ModifyVerifier::set_cryptAlgorithmClass_attr(const ns_s::ST_AlgClass& _cryptAlgorithmClass_attr)
{
    m_has_cryptAlgorithmClass_attr = true;
    m_cryptAlgorithmClass_attr = new ns_s::ST_AlgClass(_cryptAlgorithmClass_attr);
}

const ns_s::ST_AlgClass& CT_ModifyVerifier::get_cryptAlgorithmClass_attr() const
{
    if (m_cryptAlgorithmClass_attr)
    {
        return *m_cryptAlgorithmClass_attr;
    }
    return ns_s::ST_AlgClass::default_instance();
}

bool CT_ModifyVerifier::has_cryptAlgorithmType_attr() const
{
    return m_has_cryptAlgorithmType_attr;
}

void CT_ModifyVerifier::set_cryptAlgorithmType_attr(const ns_s::ST_AlgType& _cryptAlgorithmType_attr)
{
    m_has_cryptAlgorithmType_attr = true;
    m_cryptAlgorithmType_attr = new ns_s::ST_AlgType(_cryptAlgorithmType_attr);
}

const ns_s::ST_AlgType& CT_ModifyVerifier::get_cryptAlgorithmType_attr() const
{
    if (m_cryptAlgorithmType_attr)
    {
        return *m_cryptAlgorithmType_attr;
    }
    return ns_s::ST_AlgType::default_instance();
}

bool CT_ModifyVerifier::has_cryptAlgorithmSid_attr() const
{
    return m_has_cryptAlgorithmSid_attr;
}

void CT_ModifyVerifier::set_cryptAlgorithmSid_attr(const XSD::unsignedInt_& _cryptAlgorithmSid_attr)
{
    m_has_cryptAlgorithmSid_attr = true;
    m_cryptAlgorithmSid_attr = _cryptAlgorithmSid_attr;
}

const XSD::unsignedInt_& CT_ModifyVerifier::get_cryptAlgorithmSid_attr() const
{
    return m_cryptAlgorithmSid_attr;
}

bool CT_ModifyVerifier::has_spinCount_attr() const
{
    return m_has_spinCount_attr;
}

void CT_ModifyVerifier::set_spinCount_attr(const XSD::unsignedInt_& _spinCount_attr)
{
    m_has_spinCount_attr = true;
    m_spinCount_attr = _spinCount_attr;
}

const XSD::unsignedInt_& CT_ModifyVerifier::get_spinCount_attr() const
{
    return m_spinCount_attr;
}

bool CT_ModifyVerifier::has_saltData_attr() const
{
    return m_has_saltData_attr;
}

void CT_ModifyVerifier::set_saltData_attr(const XSD::base64Binary_& _saltData_attr)
{
    m_has_saltData_attr = true;
    m_saltData_attr = _saltData_attr;
}

const XSD::base64Binary_& CT_ModifyVerifier::get_saltData_attr() const
{
    return m_saltData_attr;
}

bool CT_ModifyVerifier::has_hashData_attr() const
{
    return m_has_hashData_attr;
}

void CT_ModifyVerifier::set_hashData_attr(const XSD::base64Binary_& _hashData_attr)
{
    m_has_hashData_attr = true;
    m_hashData_attr = _hashData_attr;
}

const XSD::base64Binary_& CT_ModifyVerifier::get_hashData_attr() const
{
    return m_hashData_attr;
}

bool CT_ModifyVerifier::has_cryptProvider_attr() const
{
    return m_has_cryptProvider_attr;
}

void CT_ModifyVerifier::set_cryptProvider_attr(const XSD::string_& _cryptProvider_attr)
{
    m_has_cryptProvider_attr = true;
    m_cryptProvider_attr = _cryptProvider_attr;
}

const XSD::string_& CT_ModifyVerifier::get_cryptProvider_attr() const
{
    return m_cryptProvider_attr;
}

bool CT_ModifyVerifier::has_algIdExt_attr() const
{
    return m_has_algIdExt_attr;
}

void CT_ModifyVerifier::set_algIdExt_attr(const XSD::unsignedInt_& _algIdExt_attr)
{
    m_has_algIdExt_attr = true;
    m_algIdExt_attr = _algIdExt_attr;
}

const XSD::unsignedInt_& CT_ModifyVerifier::get_algIdExt_attr() const
{
    return m_algIdExt_attr;
}

bool CT_ModifyVerifier::has_algIdExtSource_attr() const
{
    return m_has_algIdExtSource_attr;
}

void CT_ModifyVerifier::set_algIdExtSource_attr(const XSD::string_& _algIdExtSource_attr)
{
    m_has_algIdExtSource_attr = true;
    m_algIdExtSource_attr = _algIdExtSource_attr;
}

const XSD::string_& CT_ModifyVerifier::get_algIdExtSource_attr() const
{
    return m_algIdExtSource_attr;
}

bool CT_ModifyVerifier::has_cryptProviderTypeExt_attr() const
{
    return m_has_cryptProviderTypeExt_attr;
}

void CT_ModifyVerifier::set_cryptProviderTypeExt_attr(const XSD::unsignedInt_& _cryptProviderTypeExt_attr)
{
    m_has_cryptProviderTypeExt_attr = true;
    m_cryptProviderTypeExt_attr = _cryptProviderTypeExt_attr;
}

const XSD::unsignedInt_& CT_ModifyVerifier::get_cryptProviderTypeExt_attr() const
{
    return m_cryptProviderTypeExt_attr;
}

bool CT_ModifyVerifier::has_cryptProviderTypeExtSource_attr() const
{
    return m_has_cryptProviderTypeExtSource_attr;
}

void CT_ModifyVerifier::set_cryptProviderTypeExtSource_attr(const XSD::string_& _cryptProviderTypeExtSource_attr)
{
    m_has_cryptProviderTypeExtSource_attr = true;
    m_cryptProviderTypeExtSource_attr = _cryptProviderTypeExtSource_attr;
}

const XSD::string_& CT_ModifyVerifier::get_cryptProviderTypeExtSource_attr() const
{
    return m_cryptProviderTypeExtSource_attr;
}

CT_ModifyVerifier* CT_ModifyVerifier::default_instance_ = NULL;

// CT_Presentation
CT_Presentation::CT_Presentation()
    :m_has_sldMasterIdLst(false),
     m_sldMasterIdLst(NULL),
     m_has_notesMasterIdLst(false),
     m_notesMasterIdLst(NULL),
     m_has_handoutMasterIdLst(false),
     m_handoutMasterIdLst(NULL),
     m_has_sldIdLst(false),
     m_sldIdLst(NULL),
     m_has_sldSz(false),
     m_sldSz(NULL),
     m_has_notesSz(false),
     m_notesSz(NULL),
     m_has_smartTags(false),
     m_smartTags(NULL),
     m_has_embeddedFontLst(false),
     m_embeddedFontLst(NULL),
     m_has_custShowLst(false),
     m_custShowLst(NULL),
     m_has_photoAlbum(false),
     m_photoAlbum(NULL),
     m_has_custDataLst(false),
     m_custDataLst(NULL),
     m_has_kinsoku(false),
     m_kinsoku(NULL),
     m_has_defaultTextStyle(false),
     m_defaultTextStyle(NULL),
     m_has_modifyVerifier(false),
     m_modifyVerifier(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_serverZoom_attr(false),
     m_serverZoom_attr(NULL),
     m_has_firstSlideNum_attr(false),
     m_firstSlideNum_attr(0),
     m_has_showSpecialPlsOnTitleSld_attr(false),
     m_showSpecialPlsOnTitleSld_attr(false),
     m_has_rtl_attr(false),
     m_rtl_attr(false),
     m_has_removePersonalInfoOnSave_attr(false),
     m_removePersonalInfoOnSave_attr(false),
     m_has_compatMode_attr(false),
     m_compatMode_attr(false),
     m_has_strictFirstAndLastChars_attr(false),
     m_strictFirstAndLastChars_attr(false),
     m_has_embedTrueTypeFonts_attr(false),
     m_embedTrueTypeFonts_attr(false),
     m_has_saveSubsetFonts_attr(false),
     m_saveSubsetFonts_attr(false),
     m_has_autoCompressPictures_attr(false),
     m_autoCompressPictures_attr(false),
     m_has_bookmarkIdSeed_attr(false),
     m_bookmarkIdSeed_attr(NULL),
     m_has_conformance_attr(false),
     m_conformance_attr(NULL)
{
}
CT_Presentation::~CT_Presentation()
{
    clear();
}
bool CT_Presentation::has_sldMasterIdLst() const
{
    return m_has_sldMasterIdLst;
}

CT_SlideMasterIdList* CT_Presentation::mutable_sldMasterIdLst()
{
    m_has_sldMasterIdLst = true;
    if (!m_sldMasterIdLst)
    {
        m_sldMasterIdLst = new CT_SlideMasterIdList();
    }
    return m_sldMasterIdLst;
}

const CT_SlideMasterIdList& CT_Presentation::get_sldMasterIdLst() const
{
    if (m_sldMasterIdLst)
    {
        return *m_sldMasterIdLst;
    }
    return CT_SlideMasterIdList::default_instance();
}

bool CT_Presentation::has_notesMasterIdLst() const
{
    return m_has_notesMasterIdLst;
}

CT_NotesMasterIdList* CT_Presentation::mutable_notesMasterIdLst()
{
    m_has_notesMasterIdLst = true;
    if (!m_notesMasterIdLst)
    {
        m_notesMasterIdLst = new CT_NotesMasterIdList();
    }
    return m_notesMasterIdLst;
}

const CT_NotesMasterIdList& CT_Presentation::get_notesMasterIdLst() const
{
    if (m_notesMasterIdLst)
    {
        return *m_notesMasterIdLst;
    }
    return CT_NotesMasterIdList::default_instance();
}

bool CT_Presentation::has_handoutMasterIdLst() const
{
    return m_has_handoutMasterIdLst;
}

CT_HandoutMasterIdList* CT_Presentation::mutable_handoutMasterIdLst()
{
    m_has_handoutMasterIdLst = true;
    if (!m_handoutMasterIdLst)
    {
        m_handoutMasterIdLst = new CT_HandoutMasterIdList();
    }
    return m_handoutMasterIdLst;
}

const CT_HandoutMasterIdList& CT_Presentation::get_handoutMasterIdLst() const
{
    if (m_handoutMasterIdLst)
    {
        return *m_handoutMasterIdLst;
    }
    return CT_HandoutMasterIdList::default_instance();
}

bool CT_Presentation::has_sldIdLst() const
{
    return m_has_sldIdLst;
}

CT_SlideIdList* CT_Presentation::mutable_sldIdLst()
{
    m_has_sldIdLst = true;
    if (!m_sldIdLst)
    {
        m_sldIdLst = new CT_SlideIdList();
    }
    return m_sldIdLst;
}

const CT_SlideIdList& CT_Presentation::get_sldIdLst() const
{
    if (m_sldIdLst)
    {
        return *m_sldIdLst;
    }
    return CT_SlideIdList::default_instance();
}

bool CT_Presentation::has_sldSz() const
{
    return m_has_sldSz;
}

CT_SlideSize* CT_Presentation::mutable_sldSz()
{
    m_has_sldSz = true;
    if (!m_sldSz)
    {
        m_sldSz = new CT_SlideSize();
    }
    return m_sldSz;
}

const CT_SlideSize& CT_Presentation::get_sldSz() const
{
    if (m_sldSz)
    {
        return *m_sldSz;
    }
    return CT_SlideSize::default_instance();
}

bool CT_Presentation::has_notesSz() const
{
    return m_has_notesSz;
}

ns_a::CT_PositiveSize2D* CT_Presentation::mutable_notesSz()
{
    m_has_notesSz = true;
    if (!m_notesSz)
    {
        m_notesSz = new ns_a::CT_PositiveSize2D();
    }
    return m_notesSz;
}

const ns_a::CT_PositiveSize2D& CT_Presentation::get_notesSz() const
{
    if (m_notesSz)
    {
        return *m_notesSz;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
}

bool CT_Presentation::has_smartTags() const
{
    return m_has_smartTags;
}

CT_SmartTags* CT_Presentation::mutable_smartTags()
{
    m_has_smartTags = true;
    if (!m_smartTags)
    {
        m_smartTags = new CT_SmartTags();
    }
    return m_smartTags;
}

const CT_SmartTags& CT_Presentation::get_smartTags() const
{
    if (m_smartTags)
    {
        return *m_smartTags;
    }
    return CT_SmartTags::default_instance();
}

bool CT_Presentation::has_embeddedFontLst() const
{
    return m_has_embeddedFontLst;
}

CT_EmbeddedFontList* CT_Presentation::mutable_embeddedFontLst()
{
    m_has_embeddedFontLst = true;
    if (!m_embeddedFontLst)
    {
        m_embeddedFontLst = new CT_EmbeddedFontList();
    }
    return m_embeddedFontLst;
}

const CT_EmbeddedFontList& CT_Presentation::get_embeddedFontLst() const
{
    if (m_embeddedFontLst)
    {
        return *m_embeddedFontLst;
    }
    return CT_EmbeddedFontList::default_instance();
}

bool CT_Presentation::has_custShowLst() const
{
    return m_has_custShowLst;
}

CT_CustomShowList* CT_Presentation::mutable_custShowLst()
{
    m_has_custShowLst = true;
    if (!m_custShowLst)
    {
        m_custShowLst = new CT_CustomShowList();
    }
    return m_custShowLst;
}

const CT_CustomShowList& CT_Presentation::get_custShowLst() const
{
    if (m_custShowLst)
    {
        return *m_custShowLst;
    }
    return CT_CustomShowList::default_instance();
}

bool CT_Presentation::has_photoAlbum() const
{
    return m_has_photoAlbum;
}

CT_PhotoAlbum* CT_Presentation::mutable_photoAlbum()
{
    m_has_photoAlbum = true;
    if (!m_photoAlbum)
    {
        m_photoAlbum = new CT_PhotoAlbum();
    }
    return m_photoAlbum;
}

const CT_PhotoAlbum& CT_Presentation::get_photoAlbum() const
{
    if (m_photoAlbum)
    {
        return *m_photoAlbum;
    }
    return CT_PhotoAlbum::default_instance();
}

bool CT_Presentation::has_custDataLst() const
{
    return m_has_custDataLst;
}

CT_CustomerDataList* CT_Presentation::mutable_custDataLst()
{
    m_has_custDataLst = true;
    if (!m_custDataLst)
    {
        m_custDataLst = new CT_CustomerDataList();
    }
    return m_custDataLst;
}

const CT_CustomerDataList& CT_Presentation::get_custDataLst() const
{
    if (m_custDataLst)
    {
        return *m_custDataLst;
    }
    return CT_CustomerDataList::default_instance();
}

bool CT_Presentation::has_kinsoku() const
{
    return m_has_kinsoku;
}

CT_Kinsoku* CT_Presentation::mutable_kinsoku()
{
    m_has_kinsoku = true;
    if (!m_kinsoku)
    {
        m_kinsoku = new CT_Kinsoku();
    }
    return m_kinsoku;
}

const CT_Kinsoku& CT_Presentation::get_kinsoku() const
{
    if (m_kinsoku)
    {
        return *m_kinsoku;
    }
    return CT_Kinsoku::default_instance();
}

bool CT_Presentation::has_defaultTextStyle() const
{
    return m_has_defaultTextStyle;
}

ns_a::CT_TextListStyle* CT_Presentation::mutable_defaultTextStyle()
{
    m_has_defaultTextStyle = true;
    if (!m_defaultTextStyle)
    {
        m_defaultTextStyle = new ns_a::CT_TextListStyle();
    }
    return m_defaultTextStyle;
}

const ns_a::CT_TextListStyle& CT_Presentation::get_defaultTextStyle() const
{
    if (m_defaultTextStyle)
    {
        return *m_defaultTextStyle;
    }
    return ns_a::CT_TextListStyle::default_instance();
}

bool CT_Presentation::has_modifyVerifier() const
{
    return m_has_modifyVerifier;
}

CT_ModifyVerifier* CT_Presentation::mutable_modifyVerifier()
{
    m_has_modifyVerifier = true;
    if (!m_modifyVerifier)
    {
        m_modifyVerifier = new CT_ModifyVerifier();
    }
    return m_modifyVerifier;
}

const CT_ModifyVerifier& CT_Presentation::get_modifyVerifier() const
{
    if (m_modifyVerifier)
    {
        return *m_modifyVerifier;
    }
    return CT_ModifyVerifier::default_instance();
}

bool CT_Presentation::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_Presentation::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_Presentation::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_Presentation::clear()
{
    m_has_serverZoom_attr = false;

    if (m_serverZoom_attr)
    {
        delete m_serverZoom_attr;
        m_serverZoom_attr = NULL;
    }


    m_has_firstSlideNum_attr = false;
    m_firstSlideNum_attr = 0;

    m_has_showSpecialPlsOnTitleSld_attr = false;
    m_showSpecialPlsOnTitleSld_attr = false;

    m_has_rtl_attr = false;
    m_rtl_attr = false;

    m_has_removePersonalInfoOnSave_attr = false;
    m_removePersonalInfoOnSave_attr = false;

    m_has_compatMode_attr = false;
    m_compatMode_attr = false;

    m_has_strictFirstAndLastChars_attr = false;
    m_strictFirstAndLastChars_attr = false;

    m_has_embedTrueTypeFonts_attr = false;
    m_embedTrueTypeFonts_attr = false;

    m_has_saveSubsetFonts_attr = false;
    m_saveSubsetFonts_attr = false;

    m_has_autoCompressPictures_attr = false;
    m_autoCompressPictures_attr = false;

    m_has_bookmarkIdSeed_attr = false;

    if (m_bookmarkIdSeed_attr)
    {
        delete m_bookmarkIdSeed_attr;
        m_bookmarkIdSeed_attr = NULL;
    }


    m_has_conformance_attr = false;

    if (m_conformance_attr)
    {
        delete m_conformance_attr;
        m_conformance_attr = NULL;
    }


    m_has_sldMasterIdLst = false;

    if (m_sldMasterIdLst)
    {
        delete m_sldMasterIdLst;
        m_sldMasterIdLst = NULL;
    }


    m_has_notesMasterIdLst = false;

    if (m_notesMasterIdLst)
    {
        delete m_notesMasterIdLst;
        m_notesMasterIdLst = NULL;
    }


    m_has_handoutMasterIdLst = false;

    if (m_handoutMasterIdLst)
    {
        delete m_handoutMasterIdLst;
        m_handoutMasterIdLst = NULL;
    }


    m_has_sldIdLst = false;

    if (m_sldIdLst)
    {
        delete m_sldIdLst;
        m_sldIdLst = NULL;
    }


    m_has_sldSz = false;

    if (m_sldSz)
    {
        delete m_sldSz;
        m_sldSz = NULL;
    }


    m_has_notesSz = false;

    if (m_notesSz)
    {
        delete m_notesSz;
        m_notesSz = NULL;
    }


    m_has_smartTags = false;

    if (m_smartTags)
    {
        delete m_smartTags;
        m_smartTags = NULL;
    }


    m_has_embeddedFontLst = false;

    if (m_embeddedFontLst)
    {
        delete m_embeddedFontLst;
        m_embeddedFontLst = NULL;
    }


    m_has_custShowLst = false;

    if (m_custShowLst)
    {
        delete m_custShowLst;
        m_custShowLst = NULL;
    }


    m_has_photoAlbum = false;

    if (m_photoAlbum)
    {
        delete m_photoAlbum;
        m_photoAlbum = NULL;
    }


    m_has_custDataLst = false;

    if (m_custDataLst)
    {
        delete m_custDataLst;
        m_custDataLst = NULL;
    }


    m_has_kinsoku = false;

    if (m_kinsoku)
    {
        delete m_kinsoku;
        m_kinsoku = NULL;
    }


    m_has_defaultTextStyle = false;

    if (m_defaultTextStyle)
    {
        delete m_defaultTextStyle;
        m_defaultTextStyle = NULL;
    }


    m_has_modifyVerifier = false;

    if (m_modifyVerifier)
    {
        delete m_modifyVerifier;
        m_modifyVerifier = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Presentation::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_serverZoom_attr)
    {
        m_serverZoom_attr->toXmlAttr("serverZoom", _outStream);
    }



    if (m_has_firstSlideNum_attr)
    {
        _outStream << " " << "firstSlideNum" << "=\"" << m_firstSlideNum_attr << "\"";
    }



    if (m_has_showSpecialPlsOnTitleSld_attr)
    {
        _outStream << " " << "showSpecialPlsOnTitleSld" << "=\"" << XSD::XMLBooleanStr(m_showSpecialPlsOnTitleSld_attr) << "\"";
    }



    if (m_has_rtl_attr)
    {
        _outStream << " " << "rtl" << "=\"" << XSD::XMLBooleanStr(m_rtl_attr) << "\"";
    }



    if (m_has_removePersonalInfoOnSave_attr)
    {
        _outStream << " " << "removePersonalInfoOnSave" << "=\"" << XSD::XMLBooleanStr(m_removePersonalInfoOnSave_attr) << "\"";
    }



    if (m_has_compatMode_attr)
    {
        _outStream << " " << "compatMode" << "=\"" << XSD::XMLBooleanStr(m_compatMode_attr) << "\"";
    }



    if (m_has_strictFirstAndLastChars_attr)
    {
        _outStream << " " << "strictFirstAndLastChars" << "=\"" << XSD::XMLBooleanStr(m_strictFirstAndLastChars_attr) << "\"";
    }



    if (m_has_embedTrueTypeFonts_attr)
    {
        _outStream << " " << "embedTrueTypeFonts" << "=\"" << XSD::XMLBooleanStr(m_embedTrueTypeFonts_attr) << "\"";
    }



    if (m_has_saveSubsetFonts_attr)
    {
        _outStream << " " << "saveSubsetFonts" << "=\"" << XSD::XMLBooleanStr(m_saveSubsetFonts_attr) << "\"";
    }



    if (m_has_autoCompressPictures_attr)
    {
        _outStream << " " << "autoCompressPictures" << "=\"" << XSD::XMLBooleanStr(m_autoCompressPictures_attr) << "\"";
    }



    if (m_has_bookmarkIdSeed_attr)
    {
        m_bookmarkIdSeed_attr->toXmlAttr("bookmarkIdSeed", _outStream);
    }



    if (m_has_conformance_attr)
    {
        m_conformance_attr->toXmlAttr("conformance", _outStream);
    }

    _outStream << ">";

    assert(m_has_notesSz);


    if (m_has_sldMasterIdLst)
    {
        m_sldMasterIdLst->toXmlElem("p:sldMasterIdLst", "", _outStream);
    }


    if (m_has_notesMasterIdLst)
    {
        m_notesMasterIdLst->toXmlElem("p:notesMasterIdLst", "", _outStream);
    }


    if (m_has_handoutMasterIdLst)
    {
        m_handoutMasterIdLst->toXmlElem("p:handoutMasterIdLst", "", _outStream);
    }


    if (m_has_sldIdLst)
    {
        m_sldIdLst->toXmlElem("p:sldIdLst", "", _outStream);
    }


    if (m_has_sldSz)
    {
        m_sldSz->toXmlElem("p:sldSz", "", _outStream);
    }


    if (m_has_notesSz)
    {
        m_notesSz->toXmlElem("p:notesSz", "", _outStream);
    }


    if (m_has_smartTags)
    {
        m_smartTags->toXmlElem("p:smartTags", "", _outStream);
    }


    if (m_has_embeddedFontLst)
    {
        m_embeddedFontLst->toXmlElem("p:embeddedFontLst", "", _outStream);
    }


    if (m_has_custShowLst)
    {
        m_custShowLst->toXmlElem("p:custShowLst", "", _outStream);
    }


    if (m_has_photoAlbum)
    {
        m_photoAlbum->toXmlElem("p:photoAlbum", "", _outStream);
    }


    if (m_has_custDataLst)
    {
        m_custDataLst->toXmlElem("p:custDataLst", "", _outStream);
    }


    if (m_has_kinsoku)
    {
        m_kinsoku->toXmlElem("p:kinsoku", "", _outStream);
    }


    if (m_has_defaultTextStyle)
    {
        m_defaultTextStyle->toXmlElem("p:defaultTextStyle", "", _outStream);
    }


    if (m_has_modifyVerifier)
    {
        m_modifyVerifier->toXmlElem("p:modifyVerifier", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Presentation& CT_Presentation::default_instance()
{
    if (!CT_Presentation::default_instance_)
    {
        CT_Presentation::default_instance_ = new CT_Presentation();
    }
    return *CT_Presentation::default_instance_;
}

bool CT_Presentation::has_serverZoom_attr() const
{
    return m_has_serverZoom_attr;
}

void CT_Presentation::set_serverZoom_attr(const ns_a::ST_Percentage& _serverZoom_attr)
{
    m_has_serverZoom_attr = true;
    m_serverZoom_attr = new ns_a::ST_Percentage(_serverZoom_attr);
}

const ns_a::ST_Percentage& CT_Presentation::get_serverZoom_attr() const
{
    if (m_serverZoom_attr)
    {
        return *m_serverZoom_attr;
    }
    return ns_a::ST_Percentage::default_instance();
}

bool CT_Presentation::has_firstSlideNum_attr() const
{
    return m_has_firstSlideNum_attr;
}

void CT_Presentation::set_firstSlideNum_attr(const XSD::int_& _firstSlideNum_attr)
{
    m_has_firstSlideNum_attr = true;
    m_firstSlideNum_attr = _firstSlideNum_attr;
}

const XSD::int_& CT_Presentation::get_firstSlideNum_attr() const
{
    return m_firstSlideNum_attr;
}

bool CT_Presentation::has_showSpecialPlsOnTitleSld_attr() const
{
    return m_has_showSpecialPlsOnTitleSld_attr;
}

void CT_Presentation::set_showSpecialPlsOnTitleSld_attr(const XSD::boolean_& _showSpecialPlsOnTitleSld_attr)
{
    m_has_showSpecialPlsOnTitleSld_attr = true;
    m_showSpecialPlsOnTitleSld_attr = _showSpecialPlsOnTitleSld_attr;
}

const XSD::boolean_& CT_Presentation::get_showSpecialPlsOnTitleSld_attr() const
{
    return m_showSpecialPlsOnTitleSld_attr;
}

bool CT_Presentation::has_rtl_attr() const
{
    return m_has_rtl_attr;
}

void CT_Presentation::set_rtl_attr(const XSD::boolean_& _rtl_attr)
{
    m_has_rtl_attr = true;
    m_rtl_attr = _rtl_attr;
}

const XSD::boolean_& CT_Presentation::get_rtl_attr() const
{
    return m_rtl_attr;
}

bool CT_Presentation::has_removePersonalInfoOnSave_attr() const
{
    return m_has_removePersonalInfoOnSave_attr;
}

void CT_Presentation::set_removePersonalInfoOnSave_attr(const XSD::boolean_& _removePersonalInfoOnSave_attr)
{
    m_has_removePersonalInfoOnSave_attr = true;
    m_removePersonalInfoOnSave_attr = _removePersonalInfoOnSave_attr;
}

const XSD::boolean_& CT_Presentation::get_removePersonalInfoOnSave_attr() const
{
    return m_removePersonalInfoOnSave_attr;
}

bool CT_Presentation::has_compatMode_attr() const
{
    return m_has_compatMode_attr;
}

void CT_Presentation::set_compatMode_attr(const XSD::boolean_& _compatMode_attr)
{
    m_has_compatMode_attr = true;
    m_compatMode_attr = _compatMode_attr;
}

const XSD::boolean_& CT_Presentation::get_compatMode_attr() const
{
    return m_compatMode_attr;
}

bool CT_Presentation::has_strictFirstAndLastChars_attr() const
{
    return m_has_strictFirstAndLastChars_attr;
}

void CT_Presentation::set_strictFirstAndLastChars_attr(const XSD::boolean_& _strictFirstAndLastChars_attr)
{
    m_has_strictFirstAndLastChars_attr = true;
    m_strictFirstAndLastChars_attr = _strictFirstAndLastChars_attr;
}

const XSD::boolean_& CT_Presentation::get_strictFirstAndLastChars_attr() const
{
    return m_strictFirstAndLastChars_attr;
}

bool CT_Presentation::has_embedTrueTypeFonts_attr() const
{
    return m_has_embedTrueTypeFonts_attr;
}

void CT_Presentation::set_embedTrueTypeFonts_attr(const XSD::boolean_& _embedTrueTypeFonts_attr)
{
    m_has_embedTrueTypeFonts_attr = true;
    m_embedTrueTypeFonts_attr = _embedTrueTypeFonts_attr;
}

const XSD::boolean_& CT_Presentation::get_embedTrueTypeFonts_attr() const
{
    return m_embedTrueTypeFonts_attr;
}

bool CT_Presentation::has_saveSubsetFonts_attr() const
{
    return m_has_saveSubsetFonts_attr;
}

void CT_Presentation::set_saveSubsetFonts_attr(const XSD::boolean_& _saveSubsetFonts_attr)
{
    m_has_saveSubsetFonts_attr = true;
    m_saveSubsetFonts_attr = _saveSubsetFonts_attr;
}

const XSD::boolean_& CT_Presentation::get_saveSubsetFonts_attr() const
{
    return m_saveSubsetFonts_attr;
}

bool CT_Presentation::has_autoCompressPictures_attr() const
{
    return m_has_autoCompressPictures_attr;
}

void CT_Presentation::set_autoCompressPictures_attr(const XSD::boolean_& _autoCompressPictures_attr)
{
    m_has_autoCompressPictures_attr = true;
    m_autoCompressPictures_attr = _autoCompressPictures_attr;
}

const XSD::boolean_& CT_Presentation::get_autoCompressPictures_attr() const
{
    return m_autoCompressPictures_attr;
}

bool CT_Presentation::has_bookmarkIdSeed_attr() const
{
    return m_has_bookmarkIdSeed_attr;
}

void CT_Presentation::set_bookmarkIdSeed_attr(const ST_BookmarkIdSeed& _bookmarkIdSeed_attr)
{
    m_has_bookmarkIdSeed_attr = true;
    m_bookmarkIdSeed_attr = new ST_BookmarkIdSeed(_bookmarkIdSeed_attr);
}

const ST_BookmarkIdSeed& CT_Presentation::get_bookmarkIdSeed_attr() const
{
    if (m_bookmarkIdSeed_attr)
    {
        return *m_bookmarkIdSeed_attr;
    }
    return ST_BookmarkIdSeed::default_instance();
}

bool CT_Presentation::has_conformance_attr() const
{
    return m_has_conformance_attr;
}

void CT_Presentation::set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr)
{
    m_has_conformance_attr = true;
    m_conformance_attr = new ns_s::ST_ConformanceClass(_conformance_attr);
}

const ns_s::ST_ConformanceClass& CT_Presentation::get_conformance_attr() const
{
    if (m_conformance_attr)
    {
        return *m_conformance_attr;
    }
    return ns_s::ST_ConformanceClass::default_instance();
}

CT_Presentation* CT_Presentation::default_instance_ = NULL;

// CT_HtmlPublishProperties
CT_HtmlPublishProperties::CT_HtmlPublishProperties()
    :m_has_sldAll(false),
     m_sldAll(NULL),
     m_has_sldRg(false),
     m_sldRg(NULL),
     m_has_custShow(false),
     m_custShow(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showSpeakerNotes_attr(false),
     m_showSpeakerNotes_attr(false),
     m_has_target_attr(false),
     m_target_attr(""),
     m_has_title_attr(false),
     m_title_attr(""),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_HtmlPublishProperties::~CT_HtmlPublishProperties()
{
    clear();
}
bool CT_HtmlPublishProperties::has_sldAll() const
{
    return m_has_sldAll;
}

CT_Empty* CT_HtmlPublishProperties::mutable_sldAll()
{

    m_has_sldRg = false;

    if (m_sldRg)
    {
        delete m_sldRg;
        m_sldRg = NULL;
    }
    ;

    m_has_custShow = false;

    if (m_custShow)
    {
        delete m_custShow;
        m_custShow = NULL;
    }
    ;

    m_has_sldAll = true;
    if (!m_sldAll)
    {
        m_sldAll = new CT_Empty();
    }
    return m_sldAll;
}

const CT_Empty& CT_HtmlPublishProperties::get_sldAll() const
{
    if (m_sldAll)
    {
        return *m_sldAll;
    }
    return CT_Empty::default_instance();
}

bool CT_HtmlPublishProperties::has_sldRg() const
{
    return m_has_sldRg;
}

CT_IndexRange* CT_HtmlPublishProperties::mutable_sldRg()
{

    m_has_sldAll = false;

    if (m_sldAll)
    {
        delete m_sldAll;
        m_sldAll = NULL;
    }
    ;

    m_has_custShow = false;

    if (m_custShow)
    {
        delete m_custShow;
        m_custShow = NULL;
    }
    ;

    m_has_sldRg = true;
    if (!m_sldRg)
    {
        m_sldRg = new CT_IndexRange();
    }
    return m_sldRg;
}

const CT_IndexRange& CT_HtmlPublishProperties::get_sldRg() const
{
    if (m_sldRg)
    {
        return *m_sldRg;
    }
    return CT_IndexRange::default_instance();
}

bool CT_HtmlPublishProperties::has_custShow() const
{
    return m_has_custShow;
}

CT_CustomShowId* CT_HtmlPublishProperties::mutable_custShow()
{

    m_has_sldAll = false;

    if (m_sldAll)
    {
        delete m_sldAll;
        m_sldAll = NULL;
    }
    ;

    m_has_sldRg = false;

    if (m_sldRg)
    {
        delete m_sldRg;
        m_sldRg = NULL;
    }
    ;

    m_has_custShow = true;
    if (!m_custShow)
    {
        m_custShow = new CT_CustomShowId();
    }
    return m_custShow;
}

const CT_CustomShowId& CT_HtmlPublishProperties::get_custShow() const
{
    if (m_custShow)
    {
        return *m_custShow;
    }
    return CT_CustomShowId::default_instance();
}

bool CT_HtmlPublishProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_HtmlPublishProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_HtmlPublishProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_HtmlPublishProperties::clear()
{
    m_has_showSpeakerNotes_attr = false;
    m_showSpeakerNotes_attr = false;

    m_has_target_attr = false;
    m_target_attr.clear();

    m_has_title_attr = false;
    m_title_attr.clear();

    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_sldAll = false;

    if (m_sldAll)
    {
        delete m_sldAll;
        m_sldAll = NULL;
    }


    m_has_sldRg = false;

    if (m_sldRg)
    {
        delete m_sldRg;
        m_sldRg = NULL;
    }


    m_has_custShow = false;

    if (m_custShow)
    {
        delete m_custShow;
        m_custShow = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_HtmlPublishProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showSpeakerNotes_attr)
    {
        _outStream << " " << "showSpeakerNotes" << "=\"" << XSD::XMLBooleanStr(m_showSpeakerNotes_attr) << "\"";
    }



    if (m_has_target_attr)
    {
        _outStream << " " << "target" << "=\"" << m_target_attr << "\"";
    }



    if (m_has_title_attr)
    {
        _outStream << " " << "title" << "=\"" << m_title_attr << "\"";
    }


    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    {
        bool elemHasValueList[3] = {m_has_sldAll, m_has_sldRg, m_has_custShow};
        int cnt = count(elemHasValueList, elemHasValueList + 3, true);
        assert(cnt == 1);
    }


    if (m_has_sldAll)
    {
        m_sldAll->toXmlElem("p:sldAll", "", _outStream);
    }


    if (m_has_sldRg)
    {
        m_sldRg->toXmlElem("p:sldRg", "", _outStream);
    }


    if (m_has_custShow)
    {
        m_custShow->toXmlElem("p:custShow", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_HtmlPublishProperties& CT_HtmlPublishProperties::default_instance()
{
    if (!CT_HtmlPublishProperties::default_instance_)
    {
        CT_HtmlPublishProperties::default_instance_ = new CT_HtmlPublishProperties();
    }
    return *CT_HtmlPublishProperties::default_instance_;
}

bool CT_HtmlPublishProperties::has_showSpeakerNotes_attr() const
{
    return m_has_showSpeakerNotes_attr;
}

void CT_HtmlPublishProperties::set_showSpeakerNotes_attr(const XSD::boolean_& _showSpeakerNotes_attr)
{
    m_has_showSpeakerNotes_attr = true;
    m_showSpeakerNotes_attr = _showSpeakerNotes_attr;
}

const XSD::boolean_& CT_HtmlPublishProperties::get_showSpeakerNotes_attr() const
{
    return m_showSpeakerNotes_attr;
}

bool CT_HtmlPublishProperties::has_target_attr() const
{
    return m_has_target_attr;
}

void CT_HtmlPublishProperties::set_target_attr(const XSD::string_& _target_attr)
{
    m_has_target_attr = true;
    m_target_attr = _target_attr;
}

const XSD::string_& CT_HtmlPublishProperties::get_target_attr() const
{
    return m_target_attr;
}

bool CT_HtmlPublishProperties::has_title_attr() const
{
    return m_has_title_attr;
}

void CT_HtmlPublishProperties::set_title_attr(const XSD::string_& _title_attr)
{
    m_has_title_attr = true;
    m_title_attr = _title_attr;
}

const XSD::string_& CT_HtmlPublishProperties::get_title_attr() const
{
    return m_title_attr;
}

bool CT_HtmlPublishProperties::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_HtmlPublishProperties::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_HtmlPublishProperties::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_HtmlPublishProperties* CT_HtmlPublishProperties::default_instance_ = NULL;

// CT_WebProperties
CT_WebProperties::CT_WebProperties()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_showAnimation_attr(false),
     m_showAnimation_attr(false),
     m_has_resizeGraphics_attr(false),
     m_resizeGraphics_attr(false),
     m_has_allowPng_attr(false),
     m_allowPng_attr(false),
     m_has_relyOnVml_attr(false),
     m_relyOnVml_attr(false),
     m_has_organizeInFolders_attr(false),
     m_organizeInFolders_attr(false),
     m_has_useLongFilenames_attr(false),
     m_useLongFilenames_attr(false),
     m_has_imgSz_attr(false),
     m_imgSz_attr(NULL),
     m_has_encoding_attr(false),
     m_encoding_attr(NULL),
     m_has_clr_attr(false),
     m_clr_attr(NULL)
{
}
CT_WebProperties::~CT_WebProperties()
{
    clear();
}
bool CT_WebProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_WebProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_WebProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_WebProperties::clear()
{
    m_has_showAnimation_attr = false;
    m_showAnimation_attr = false;

    m_has_resizeGraphics_attr = false;
    m_resizeGraphics_attr = false;

    m_has_allowPng_attr = false;
    m_allowPng_attr = false;

    m_has_relyOnVml_attr = false;
    m_relyOnVml_attr = false;

    m_has_organizeInFolders_attr = false;
    m_organizeInFolders_attr = false;

    m_has_useLongFilenames_attr = false;
    m_useLongFilenames_attr = false;

    m_has_imgSz_attr = false;

    if (m_imgSz_attr)
    {
        delete m_imgSz_attr;
        m_imgSz_attr = NULL;
    }


    m_has_encoding_attr = false;

    if (m_encoding_attr)
    {
        delete m_encoding_attr;
        m_encoding_attr = NULL;
    }


    m_has_clr_attr = false;

    if (m_clr_attr)
    {
        delete m_clr_attr;
        m_clr_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_WebProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showAnimation_attr)
    {
        _outStream << " " << "showAnimation" << "=\"" << XSD::XMLBooleanStr(m_showAnimation_attr) << "\"";
    }



    if (m_has_resizeGraphics_attr)
    {
        _outStream << " " << "resizeGraphics" << "=\"" << XSD::XMLBooleanStr(m_resizeGraphics_attr) << "\"";
    }



    if (m_has_allowPng_attr)
    {
        _outStream << " " << "allowPng" << "=\"" << XSD::XMLBooleanStr(m_allowPng_attr) << "\"";
    }



    if (m_has_relyOnVml_attr)
    {
        _outStream << " " << "relyOnVml" << "=\"" << XSD::XMLBooleanStr(m_relyOnVml_attr) << "\"";
    }



    if (m_has_organizeInFolders_attr)
    {
        _outStream << " " << "organizeInFolders" << "=\"" << XSD::XMLBooleanStr(m_organizeInFolders_attr) << "\"";
    }



    if (m_has_useLongFilenames_attr)
    {
        _outStream << " " << "useLongFilenames" << "=\"" << XSD::XMLBooleanStr(m_useLongFilenames_attr) << "\"";
    }



    if (m_has_imgSz_attr)
    {
        m_imgSz_attr->toXmlAttr("imgSz", _outStream);
    }



    if (m_has_encoding_attr)
    {
        m_encoding_attr->toXmlAttr("encoding", _outStream);
    }



    if (m_has_clr_attr)
    {
        m_clr_attr->toXmlAttr("clr", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_WebProperties& CT_WebProperties::default_instance()
{
    if (!CT_WebProperties::default_instance_)
    {
        CT_WebProperties::default_instance_ = new CT_WebProperties();
    }
    return *CT_WebProperties::default_instance_;
}

bool CT_WebProperties::has_showAnimation_attr() const
{
    return m_has_showAnimation_attr;
}

void CT_WebProperties::set_showAnimation_attr(const XSD::boolean_& _showAnimation_attr)
{
    m_has_showAnimation_attr = true;
    m_showAnimation_attr = _showAnimation_attr;
}

const XSD::boolean_& CT_WebProperties::get_showAnimation_attr() const
{
    return m_showAnimation_attr;
}

bool CT_WebProperties::has_resizeGraphics_attr() const
{
    return m_has_resizeGraphics_attr;
}

void CT_WebProperties::set_resizeGraphics_attr(const XSD::boolean_& _resizeGraphics_attr)
{
    m_has_resizeGraphics_attr = true;
    m_resizeGraphics_attr = _resizeGraphics_attr;
}

const XSD::boolean_& CT_WebProperties::get_resizeGraphics_attr() const
{
    return m_resizeGraphics_attr;
}

bool CT_WebProperties::has_allowPng_attr() const
{
    return m_has_allowPng_attr;
}

void CT_WebProperties::set_allowPng_attr(const XSD::boolean_& _allowPng_attr)
{
    m_has_allowPng_attr = true;
    m_allowPng_attr = _allowPng_attr;
}

const XSD::boolean_& CT_WebProperties::get_allowPng_attr() const
{
    return m_allowPng_attr;
}

bool CT_WebProperties::has_relyOnVml_attr() const
{
    return m_has_relyOnVml_attr;
}

void CT_WebProperties::set_relyOnVml_attr(const XSD::boolean_& _relyOnVml_attr)
{
    m_has_relyOnVml_attr = true;
    m_relyOnVml_attr = _relyOnVml_attr;
}

const XSD::boolean_& CT_WebProperties::get_relyOnVml_attr() const
{
    return m_relyOnVml_attr;
}

bool CT_WebProperties::has_organizeInFolders_attr() const
{
    return m_has_organizeInFolders_attr;
}

void CT_WebProperties::set_organizeInFolders_attr(const XSD::boolean_& _organizeInFolders_attr)
{
    m_has_organizeInFolders_attr = true;
    m_organizeInFolders_attr = _organizeInFolders_attr;
}

const XSD::boolean_& CT_WebProperties::get_organizeInFolders_attr() const
{
    return m_organizeInFolders_attr;
}

bool CT_WebProperties::has_useLongFilenames_attr() const
{
    return m_has_useLongFilenames_attr;
}

void CT_WebProperties::set_useLongFilenames_attr(const XSD::boolean_& _useLongFilenames_attr)
{
    m_has_useLongFilenames_attr = true;
    m_useLongFilenames_attr = _useLongFilenames_attr;
}

const XSD::boolean_& CT_WebProperties::get_useLongFilenames_attr() const
{
    return m_useLongFilenames_attr;
}

bool CT_WebProperties::has_imgSz_attr() const
{
    return m_has_imgSz_attr;
}

void CT_WebProperties::set_imgSz_attr(const ST_WebScreenSize& _imgSz_attr)
{
    m_has_imgSz_attr = true;
    m_imgSz_attr = new ST_WebScreenSize(_imgSz_attr);
}

const ST_WebScreenSize& CT_WebProperties::get_imgSz_attr() const
{
    if (m_imgSz_attr)
    {
        return *m_imgSz_attr;
    }
    return ST_WebScreenSize::default_instance();
}

bool CT_WebProperties::has_encoding_attr() const
{
    return m_has_encoding_attr;
}

void CT_WebProperties::set_encoding_attr(const ST_WebEncoding& _encoding_attr)
{
    m_has_encoding_attr = true;
    m_encoding_attr = new ST_WebEncoding(_encoding_attr);
}

const ST_WebEncoding& CT_WebProperties::get_encoding_attr() const
{
    if (m_encoding_attr)
    {
        return *m_encoding_attr;
    }
    return ST_WebEncoding::default_instance();
}

bool CT_WebProperties::has_clr_attr() const
{
    return m_has_clr_attr;
}

void CT_WebProperties::set_clr_attr(const ST_WebColorType& _clr_attr)
{
    m_has_clr_attr = true;
    m_clr_attr = new ST_WebColorType(_clr_attr);
}

const ST_WebColorType& CT_WebProperties::get_clr_attr() const
{
    if (m_clr_attr)
    {
        return *m_clr_attr;
    }
    return ST_WebColorType::default_instance();
}

CT_WebProperties* CT_WebProperties::default_instance_ = NULL;

// CT_PrintProperties
CT_PrintProperties::CT_PrintProperties()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_prnWhat_attr(false),
     m_prnWhat_attr(NULL),
     m_has_clrMode_attr(false),
     m_clrMode_attr(NULL),
     m_has_hiddenSlides_attr(false),
     m_hiddenSlides_attr(false),
     m_has_scaleToFitPaper_attr(false),
     m_scaleToFitPaper_attr(false),
     m_has_frameSlides_attr(false),
     m_frameSlides_attr(false)
{
}
CT_PrintProperties::~CT_PrintProperties()
{
    clear();
}
bool CT_PrintProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_PrintProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_PrintProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_PrintProperties::clear()
{
    m_has_prnWhat_attr = false;

    if (m_prnWhat_attr)
    {
        delete m_prnWhat_attr;
        m_prnWhat_attr = NULL;
    }


    m_has_clrMode_attr = false;

    if (m_clrMode_attr)
    {
        delete m_clrMode_attr;
        m_clrMode_attr = NULL;
    }


    m_has_hiddenSlides_attr = false;
    m_hiddenSlides_attr = false;

    m_has_scaleToFitPaper_attr = false;
    m_scaleToFitPaper_attr = false;

    m_has_frameSlides_attr = false;
    m_frameSlides_attr = false;

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_PrintProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_prnWhat_attr)
    {
        m_prnWhat_attr->toXmlAttr("prnWhat", _outStream);
    }



    if (m_has_clrMode_attr)
    {
        m_clrMode_attr->toXmlAttr("clrMode", _outStream);
    }



    if (m_has_hiddenSlides_attr)
    {
        _outStream << " " << "hiddenSlides" << "=\"" << XSD::XMLBooleanStr(m_hiddenSlides_attr) << "\"";
    }



    if (m_has_scaleToFitPaper_attr)
    {
        _outStream << " " << "scaleToFitPaper" << "=\"" << XSD::XMLBooleanStr(m_scaleToFitPaper_attr) << "\"";
    }



    if (m_has_frameSlides_attr)
    {
        _outStream << " " << "frameSlides" << "=\"" << XSD::XMLBooleanStr(m_frameSlides_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PrintProperties& CT_PrintProperties::default_instance()
{
    if (!CT_PrintProperties::default_instance_)
    {
        CT_PrintProperties::default_instance_ = new CT_PrintProperties();
    }
    return *CT_PrintProperties::default_instance_;
}

bool CT_PrintProperties::has_prnWhat_attr() const
{
    return m_has_prnWhat_attr;
}

void CT_PrintProperties::set_prnWhat_attr(const ST_PrintWhat& _prnWhat_attr)
{
    m_has_prnWhat_attr = true;
    m_prnWhat_attr = new ST_PrintWhat(_prnWhat_attr);
}

const ST_PrintWhat& CT_PrintProperties::get_prnWhat_attr() const
{
    if (m_prnWhat_attr)
    {
        return *m_prnWhat_attr;
    }
    return ST_PrintWhat::default_instance();
}

bool CT_PrintProperties::has_clrMode_attr() const
{
    return m_has_clrMode_attr;
}

void CT_PrintProperties::set_clrMode_attr(const ST_PrintColorMode& _clrMode_attr)
{
    m_has_clrMode_attr = true;
    m_clrMode_attr = new ST_PrintColorMode(_clrMode_attr);
}

const ST_PrintColorMode& CT_PrintProperties::get_clrMode_attr() const
{
    if (m_clrMode_attr)
    {
        return *m_clrMode_attr;
    }
    return ST_PrintColorMode::default_instance();
}

bool CT_PrintProperties::has_hiddenSlides_attr() const
{
    return m_has_hiddenSlides_attr;
}

void CT_PrintProperties::set_hiddenSlides_attr(const XSD::boolean_& _hiddenSlides_attr)
{
    m_has_hiddenSlides_attr = true;
    m_hiddenSlides_attr = _hiddenSlides_attr;
}

const XSD::boolean_& CT_PrintProperties::get_hiddenSlides_attr() const
{
    return m_hiddenSlides_attr;
}

bool CT_PrintProperties::has_scaleToFitPaper_attr() const
{
    return m_has_scaleToFitPaper_attr;
}

void CT_PrintProperties::set_scaleToFitPaper_attr(const XSD::boolean_& _scaleToFitPaper_attr)
{
    m_has_scaleToFitPaper_attr = true;
    m_scaleToFitPaper_attr = _scaleToFitPaper_attr;
}

const XSD::boolean_& CT_PrintProperties::get_scaleToFitPaper_attr() const
{
    return m_scaleToFitPaper_attr;
}

bool CT_PrintProperties::has_frameSlides_attr() const
{
    return m_has_frameSlides_attr;
}

void CT_PrintProperties::set_frameSlides_attr(const XSD::boolean_& _frameSlides_attr)
{
    m_has_frameSlides_attr = true;
    m_frameSlides_attr = _frameSlides_attr;
}

const XSD::boolean_& CT_PrintProperties::get_frameSlides_attr() const
{
    return m_frameSlides_attr;
}

CT_PrintProperties* CT_PrintProperties::default_instance_ = NULL;

// CT_ShowInfoBrowse
CT_ShowInfoBrowse::CT_ShowInfoBrowse()
    :m_has_showScrollbar_attr(false),
     m_showScrollbar_attr(false)
{
}
CT_ShowInfoBrowse::~CT_ShowInfoBrowse()
{
    clear();
}
void CT_ShowInfoBrowse::clear()
{
    m_has_showScrollbar_attr = false;
    m_showScrollbar_attr = false;
}

void CT_ShowInfoBrowse::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showScrollbar_attr)
    {
        _outStream << " " << "showScrollbar" << "=\"" << XSD::XMLBooleanStr(m_showScrollbar_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ShowInfoBrowse& CT_ShowInfoBrowse::default_instance()
{
    if (!CT_ShowInfoBrowse::default_instance_)
    {
        CT_ShowInfoBrowse::default_instance_ = new CT_ShowInfoBrowse();
    }
    return *CT_ShowInfoBrowse::default_instance_;
}

bool CT_ShowInfoBrowse::has_showScrollbar_attr() const
{
    return m_has_showScrollbar_attr;
}

void CT_ShowInfoBrowse::set_showScrollbar_attr(const XSD::boolean_& _showScrollbar_attr)
{
    m_has_showScrollbar_attr = true;
    m_showScrollbar_attr = _showScrollbar_attr;
}

const XSD::boolean_& CT_ShowInfoBrowse::get_showScrollbar_attr() const
{
    return m_showScrollbar_attr;
}

CT_ShowInfoBrowse* CT_ShowInfoBrowse::default_instance_ = NULL;

// CT_ShowInfoKiosk
CT_ShowInfoKiosk::CT_ShowInfoKiosk()
    :m_has_restart_attr(false),
     m_restart_attr(0)
{
}
CT_ShowInfoKiosk::~CT_ShowInfoKiosk()
{
    clear();
}
void CT_ShowInfoKiosk::clear()
{
    m_has_restart_attr = false;
    m_restart_attr = 0;
}

void CT_ShowInfoKiosk::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_restart_attr)
    {
        _outStream << " " << "restart" << "=\"" << m_restart_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ShowInfoKiosk& CT_ShowInfoKiosk::default_instance()
{
    if (!CT_ShowInfoKiosk::default_instance_)
    {
        CT_ShowInfoKiosk::default_instance_ = new CT_ShowInfoKiosk();
    }
    return *CT_ShowInfoKiosk::default_instance_;
}

bool CT_ShowInfoKiosk::has_restart_attr() const
{
    return m_has_restart_attr;
}

void CT_ShowInfoKiosk::set_restart_attr(const XSD::unsignedInt_& _restart_attr)
{
    m_has_restart_attr = true;
    m_restart_attr = _restart_attr;
}

const XSD::unsignedInt_& CT_ShowInfoKiosk::get_restart_attr() const
{
    return m_restart_attr;
}

CT_ShowInfoKiosk* CT_ShowInfoKiosk::default_instance_ = NULL;

// CT_ShowProperties
CT_ShowProperties::CT_ShowProperties()
    :m_has_present(false),
     m_present(NULL),
     m_has_browse(false),
     m_browse(NULL),
     m_has_kiosk(false),
     m_kiosk(NULL),
     m_has_sldAll(false),
     m_sldAll(NULL),
     m_has_sldRg(false),
     m_sldRg(NULL),
     m_has_custShow(false),
     m_custShow(NULL),
     m_has_penClr(false),
     m_penClr(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_loop_attr(false),
     m_loop_attr(false),
     m_has_showNarration_attr(false),
     m_showNarration_attr(false),
     m_has_showAnimation_attr(false),
     m_showAnimation_attr(false),
     m_has_useTimings_attr(false),
     m_useTimings_attr(false)
{
}
CT_ShowProperties::~CT_ShowProperties()
{
    clear();
}
bool CT_ShowProperties::has_present() const
{
    return m_has_present;
}

CT_Empty* CT_ShowProperties::mutable_present()
{

    m_has_browse = false;

    if (m_browse)
    {
        delete m_browse;
        m_browse = NULL;
    }
    ;

    m_has_kiosk = false;

    if (m_kiosk)
    {
        delete m_kiosk;
        m_kiosk = NULL;
    }
    ;

    m_has_present = true;
    if (!m_present)
    {
        m_present = new CT_Empty();
    }
    return m_present;
}

const CT_Empty& CT_ShowProperties::get_present() const
{
    if (m_present)
    {
        return *m_present;
    }
    return CT_Empty::default_instance();
}

bool CT_ShowProperties::has_browse() const
{
    return m_has_browse;
}

CT_ShowInfoBrowse* CT_ShowProperties::mutable_browse()
{

    m_has_present = false;

    if (m_present)
    {
        delete m_present;
        m_present = NULL;
    }
    ;

    m_has_kiosk = false;

    if (m_kiosk)
    {
        delete m_kiosk;
        m_kiosk = NULL;
    }
    ;

    m_has_browse = true;
    if (!m_browse)
    {
        m_browse = new CT_ShowInfoBrowse();
    }
    return m_browse;
}

const CT_ShowInfoBrowse& CT_ShowProperties::get_browse() const
{
    if (m_browse)
    {
        return *m_browse;
    }
    return CT_ShowInfoBrowse::default_instance();
}

bool CT_ShowProperties::has_kiosk() const
{
    return m_has_kiosk;
}

CT_ShowInfoKiosk* CT_ShowProperties::mutable_kiosk()
{

    m_has_present = false;

    if (m_present)
    {
        delete m_present;
        m_present = NULL;
    }
    ;

    m_has_browse = false;

    if (m_browse)
    {
        delete m_browse;
        m_browse = NULL;
    }
    ;

    m_has_kiosk = true;
    if (!m_kiosk)
    {
        m_kiosk = new CT_ShowInfoKiosk();
    }
    return m_kiosk;
}

const CT_ShowInfoKiosk& CT_ShowProperties::get_kiosk() const
{
    if (m_kiosk)
    {
        return *m_kiosk;
    }
    return CT_ShowInfoKiosk::default_instance();
}

bool CT_ShowProperties::has_sldAll() const
{
    return m_has_sldAll;
}

CT_Empty* CT_ShowProperties::mutable_sldAll()
{

    m_has_sldRg = false;

    if (m_sldRg)
    {
        delete m_sldRg;
        m_sldRg = NULL;
    }
    ;

    m_has_custShow = false;

    if (m_custShow)
    {
        delete m_custShow;
        m_custShow = NULL;
    }
    ;

    m_has_sldAll = true;
    if (!m_sldAll)
    {
        m_sldAll = new CT_Empty();
    }
    return m_sldAll;
}

const CT_Empty& CT_ShowProperties::get_sldAll() const
{
    if (m_sldAll)
    {
        return *m_sldAll;
    }
    return CT_Empty::default_instance();
}

bool CT_ShowProperties::has_sldRg() const
{
    return m_has_sldRg;
}

CT_IndexRange* CT_ShowProperties::mutable_sldRg()
{

    m_has_sldAll = false;

    if (m_sldAll)
    {
        delete m_sldAll;
        m_sldAll = NULL;
    }
    ;

    m_has_custShow = false;

    if (m_custShow)
    {
        delete m_custShow;
        m_custShow = NULL;
    }
    ;

    m_has_sldRg = true;
    if (!m_sldRg)
    {
        m_sldRg = new CT_IndexRange();
    }
    return m_sldRg;
}

const CT_IndexRange& CT_ShowProperties::get_sldRg() const
{
    if (m_sldRg)
    {
        return *m_sldRg;
    }
    return CT_IndexRange::default_instance();
}

bool CT_ShowProperties::has_custShow() const
{
    return m_has_custShow;
}

CT_CustomShowId* CT_ShowProperties::mutable_custShow()
{

    m_has_sldAll = false;

    if (m_sldAll)
    {
        delete m_sldAll;
        m_sldAll = NULL;
    }
    ;

    m_has_sldRg = false;

    if (m_sldRg)
    {
        delete m_sldRg;
        m_sldRg = NULL;
    }
    ;

    m_has_custShow = true;
    if (!m_custShow)
    {
        m_custShow = new CT_CustomShowId();
    }
    return m_custShow;
}

const CT_CustomShowId& CT_ShowProperties::get_custShow() const
{
    if (m_custShow)
    {
        return *m_custShow;
    }
    return CT_CustomShowId::default_instance();
}

bool CT_ShowProperties::has_penClr() const
{
    return m_has_penClr;
}

ns_a::CT_Color* CT_ShowProperties::mutable_penClr()
{
    m_has_penClr = true;
    if (!m_penClr)
    {
        m_penClr = new ns_a::CT_Color();
    }
    return m_penClr;
}

const ns_a::CT_Color& CT_ShowProperties::get_penClr() const
{
    if (m_penClr)
    {
        return *m_penClr;
    }
    return ns_a::CT_Color::default_instance();
}

bool CT_ShowProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ShowProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ShowProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ShowProperties::clear()
{
    m_has_loop_attr = false;
    m_loop_attr = false;

    m_has_showNarration_attr = false;
    m_showNarration_attr = false;

    m_has_showAnimation_attr = false;
    m_showAnimation_attr = false;

    m_has_useTimings_attr = false;
    m_useTimings_attr = false;

    m_has_present = false;

    if (m_present)
    {
        delete m_present;
        m_present = NULL;
    }


    m_has_browse = false;

    if (m_browse)
    {
        delete m_browse;
        m_browse = NULL;
    }


    m_has_kiosk = false;

    if (m_kiosk)
    {
        delete m_kiosk;
        m_kiosk = NULL;
    }


    m_has_sldAll = false;

    if (m_sldAll)
    {
        delete m_sldAll;
        m_sldAll = NULL;
    }


    m_has_sldRg = false;

    if (m_sldRg)
    {
        delete m_sldRg;
        m_sldRg = NULL;
    }


    m_has_custShow = false;

    if (m_custShow)
    {
        delete m_custShow;
        m_custShow = NULL;
    }


    m_has_penClr = false;

    if (m_penClr)
    {
        delete m_penClr;
        m_penClr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ShowProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_loop_attr)
    {
        _outStream << " " << "loop" << "=\"" << XSD::XMLBooleanStr(m_loop_attr) << "\"";
    }



    if (m_has_showNarration_attr)
    {
        _outStream << " " << "showNarration" << "=\"" << XSD::XMLBooleanStr(m_showNarration_attr) << "\"";
    }



    if (m_has_showAnimation_attr)
    {
        _outStream << " " << "showAnimation" << "=\"" << XSD::XMLBooleanStr(m_showAnimation_attr) << "\"";
    }



    if (m_has_useTimings_attr)
    {
        _outStream << " " << "useTimings" << "=\"" << XSD::XMLBooleanStr(m_useTimings_attr) << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[3] = {m_has_present, m_has_browse, m_has_kiosk};
        int cnt = count(elemHasValueList, elemHasValueList + 3, true);
        assert(cnt == 1);
    }


    if (m_has_present)
    {
        m_present->toXmlElem("p:present", "", _outStream);
    }


    if (m_has_browse)
    {
        m_browse->toXmlElem("p:browse", "", _outStream);
    }


    if (m_has_kiosk)
    {
        m_kiosk->toXmlElem("p:kiosk", "", _outStream);
    }

    {
        bool elemHasValueList[3] = {m_has_sldAll, m_has_sldRg, m_has_custShow};
        int cnt = count(elemHasValueList, elemHasValueList + 3, true);
        assert(cnt == 1);
    }


    if (m_has_sldAll)
    {
        m_sldAll->toXmlElem("p:sldAll", "", _outStream);
    }


    if (m_has_sldRg)
    {
        m_sldRg->toXmlElem("p:sldRg", "", _outStream);
    }


    if (m_has_custShow)
    {
        m_custShow->toXmlElem("p:custShow", "", _outStream);
    }


    if (m_has_penClr)
    {
        m_penClr->toXmlElem("p:penClr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ShowProperties& CT_ShowProperties::default_instance()
{
    if (!CT_ShowProperties::default_instance_)
    {
        CT_ShowProperties::default_instance_ = new CT_ShowProperties();
    }
    return *CT_ShowProperties::default_instance_;
}

bool CT_ShowProperties::has_loop_attr() const
{
    return m_has_loop_attr;
}

void CT_ShowProperties::set_loop_attr(const XSD::boolean_& _loop_attr)
{
    m_has_loop_attr = true;
    m_loop_attr = _loop_attr;
}

const XSD::boolean_& CT_ShowProperties::get_loop_attr() const
{
    return m_loop_attr;
}

bool CT_ShowProperties::has_showNarration_attr() const
{
    return m_has_showNarration_attr;
}

void CT_ShowProperties::set_showNarration_attr(const XSD::boolean_& _showNarration_attr)
{
    m_has_showNarration_attr = true;
    m_showNarration_attr = _showNarration_attr;
}

const XSD::boolean_& CT_ShowProperties::get_showNarration_attr() const
{
    return m_showNarration_attr;
}

bool CT_ShowProperties::has_showAnimation_attr() const
{
    return m_has_showAnimation_attr;
}

void CT_ShowProperties::set_showAnimation_attr(const XSD::boolean_& _showAnimation_attr)
{
    m_has_showAnimation_attr = true;
    m_showAnimation_attr = _showAnimation_attr;
}

const XSD::boolean_& CT_ShowProperties::get_showAnimation_attr() const
{
    return m_showAnimation_attr;
}

bool CT_ShowProperties::has_useTimings_attr() const
{
    return m_has_useTimings_attr;
}

void CT_ShowProperties::set_useTimings_attr(const XSD::boolean_& _useTimings_attr)
{
    m_has_useTimings_attr = true;
    m_useTimings_attr = _useTimings_attr;
}

const XSD::boolean_& CT_ShowProperties::get_useTimings_attr() const
{
    return m_useTimings_attr;
}

CT_ShowProperties* CT_ShowProperties::default_instance_ = NULL;

// CT_PresentationProperties
CT_PresentationProperties::CT_PresentationProperties()
    :m_has_htmlPubPr(false),
     m_htmlPubPr(NULL),
     m_has_webPr(false),
     m_webPr(NULL),
     m_has_prnPr(false),
     m_prnPr(NULL),
     m_has_showPr(false),
     m_showPr(NULL),
     m_has_clrMru(false),
     m_clrMru(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_PresentationProperties::~CT_PresentationProperties()
{
    clear();
}
bool CT_PresentationProperties::has_htmlPubPr() const
{
    return m_has_htmlPubPr;
}

CT_HtmlPublishProperties* CT_PresentationProperties::mutable_htmlPubPr()
{
    m_has_htmlPubPr = true;
    if (!m_htmlPubPr)
    {
        m_htmlPubPr = new CT_HtmlPublishProperties();
    }
    return m_htmlPubPr;
}

const CT_HtmlPublishProperties& CT_PresentationProperties::get_htmlPubPr() const
{
    if (m_htmlPubPr)
    {
        return *m_htmlPubPr;
    }
    return CT_HtmlPublishProperties::default_instance();
}

bool CT_PresentationProperties::has_webPr() const
{
    return m_has_webPr;
}

CT_WebProperties* CT_PresentationProperties::mutable_webPr()
{
    m_has_webPr = true;
    if (!m_webPr)
    {
        m_webPr = new CT_WebProperties();
    }
    return m_webPr;
}

const CT_WebProperties& CT_PresentationProperties::get_webPr() const
{
    if (m_webPr)
    {
        return *m_webPr;
    }
    return CT_WebProperties::default_instance();
}

bool CT_PresentationProperties::has_prnPr() const
{
    return m_has_prnPr;
}

CT_PrintProperties* CT_PresentationProperties::mutable_prnPr()
{
    m_has_prnPr = true;
    if (!m_prnPr)
    {
        m_prnPr = new CT_PrintProperties();
    }
    return m_prnPr;
}

const CT_PrintProperties& CT_PresentationProperties::get_prnPr() const
{
    if (m_prnPr)
    {
        return *m_prnPr;
    }
    return CT_PrintProperties::default_instance();
}

bool CT_PresentationProperties::has_showPr() const
{
    return m_has_showPr;
}

CT_ShowProperties* CT_PresentationProperties::mutable_showPr()
{
    m_has_showPr = true;
    if (!m_showPr)
    {
        m_showPr = new CT_ShowProperties();
    }
    return m_showPr;
}

const CT_ShowProperties& CT_PresentationProperties::get_showPr() const
{
    if (m_showPr)
    {
        return *m_showPr;
    }
    return CT_ShowProperties::default_instance();
}

bool CT_PresentationProperties::has_clrMru() const
{
    return m_has_clrMru;
}

ns_a::CT_ColorMRU* CT_PresentationProperties::mutable_clrMru()
{
    m_has_clrMru = true;
    if (!m_clrMru)
    {
        m_clrMru = new ns_a::CT_ColorMRU();
    }
    return m_clrMru;
}

const ns_a::CT_ColorMRU& CT_PresentationProperties::get_clrMru() const
{
    if (m_clrMru)
    {
        return *m_clrMru;
    }
    return ns_a::CT_ColorMRU::default_instance();
}

bool CT_PresentationProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_PresentationProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_PresentationProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_PresentationProperties::clear()
{
    m_has_htmlPubPr = false;

    if (m_htmlPubPr)
    {
        delete m_htmlPubPr;
        m_htmlPubPr = NULL;
    }


    m_has_webPr = false;

    if (m_webPr)
    {
        delete m_webPr;
        m_webPr = NULL;
    }


    m_has_prnPr = false;

    if (m_prnPr)
    {
        delete m_prnPr;
        m_prnPr = NULL;
    }


    m_has_showPr = false;

    if (m_showPr)
    {
        delete m_showPr;
        m_showPr = NULL;
    }


    m_has_clrMru = false;

    if (m_clrMru)
    {
        delete m_clrMru;
        m_clrMru = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_PresentationProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_htmlPubPr)
    {
        m_htmlPubPr->toXmlElem("p:htmlPubPr", "", _outStream);
    }


    if (m_has_webPr)
    {
        m_webPr->toXmlElem("p:webPr", "", _outStream);
    }


    if (m_has_prnPr)
    {
        m_prnPr->toXmlElem("p:prnPr", "", _outStream);
    }


    if (m_has_showPr)
    {
        m_showPr->toXmlElem("p:showPr", "", _outStream);
    }


    if (m_has_clrMru)
    {
        m_clrMru->toXmlElem("p:clrMru", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PresentationProperties& CT_PresentationProperties::default_instance()
{
    if (!CT_PresentationProperties::default_instance_)
    {
        CT_PresentationProperties::default_instance_ = new CT_PresentationProperties();
    }
    return *CT_PresentationProperties::default_instance_;
}

CT_PresentationProperties* CT_PresentationProperties::default_instance_ = NULL;

// CT_HeaderFooter
CT_HeaderFooter::CT_HeaderFooter()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_sldNum_attr(false),
     m_sldNum_attr(false),
     m_has_hdr_attr(false),
     m_hdr_attr(false),
     m_has_ftr_attr(false),
     m_ftr_attr(false),
     m_has_dt_attr(false),
     m_dt_attr(false)
{
}
CT_HeaderFooter::~CT_HeaderFooter()
{
    clear();
}
bool CT_HeaderFooter::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_HeaderFooter::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_HeaderFooter::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_HeaderFooter::clear()
{
    m_has_sldNum_attr = false;
    m_sldNum_attr = false;

    m_has_hdr_attr = false;
    m_hdr_attr = false;

    m_has_ftr_attr = false;
    m_ftr_attr = false;

    m_has_dt_attr = false;
    m_dt_attr = false;

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_HeaderFooter::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_sldNum_attr)
    {
        _outStream << " " << "sldNum" << "=\"" << XSD::XMLBooleanStr(m_sldNum_attr) << "\"";
    }



    if (m_has_hdr_attr)
    {
        _outStream << " " << "hdr" << "=\"" << XSD::XMLBooleanStr(m_hdr_attr) << "\"";
    }



    if (m_has_ftr_attr)
    {
        _outStream << " " << "ftr" << "=\"" << XSD::XMLBooleanStr(m_ftr_attr) << "\"";
    }



    if (m_has_dt_attr)
    {
        _outStream << " " << "dt" << "=\"" << XSD::XMLBooleanStr(m_dt_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_HeaderFooter& CT_HeaderFooter::default_instance()
{
    if (!CT_HeaderFooter::default_instance_)
    {
        CT_HeaderFooter::default_instance_ = new CT_HeaderFooter();
    }
    return *CT_HeaderFooter::default_instance_;
}

bool CT_HeaderFooter::has_sldNum_attr() const
{
    return m_has_sldNum_attr;
}

void CT_HeaderFooter::set_sldNum_attr(const XSD::boolean_& _sldNum_attr)
{
    m_has_sldNum_attr = true;
    m_sldNum_attr = _sldNum_attr;
}

const XSD::boolean_& CT_HeaderFooter::get_sldNum_attr() const
{
    return m_sldNum_attr;
}

bool CT_HeaderFooter::has_hdr_attr() const
{
    return m_has_hdr_attr;
}

void CT_HeaderFooter::set_hdr_attr(const XSD::boolean_& _hdr_attr)
{
    m_has_hdr_attr = true;
    m_hdr_attr = _hdr_attr;
}

const XSD::boolean_& CT_HeaderFooter::get_hdr_attr() const
{
    return m_hdr_attr;
}

bool CT_HeaderFooter::has_ftr_attr() const
{
    return m_has_ftr_attr;
}

void CT_HeaderFooter::set_ftr_attr(const XSD::boolean_& _ftr_attr)
{
    m_has_ftr_attr = true;
    m_ftr_attr = _ftr_attr;
}

const XSD::boolean_& CT_HeaderFooter::get_ftr_attr() const
{
    return m_ftr_attr;
}

bool CT_HeaderFooter::has_dt_attr() const
{
    return m_has_dt_attr;
}

void CT_HeaderFooter::set_dt_attr(const XSD::boolean_& _dt_attr)
{
    m_has_dt_attr = true;
    m_dt_attr = _dt_attr;
}

const XSD::boolean_& CT_HeaderFooter::get_dt_attr() const
{
    return m_dt_attr;
}

CT_HeaderFooter* CT_HeaderFooter::default_instance_ = NULL;

// CT_Placeholder
CT_Placeholder::CT_Placeholder()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_orient_attr(false),
     m_orient_attr(NULL),
     m_has_sz_attr(false),
     m_sz_attr(NULL),
     m_has_idx_attr(false),
     m_idx_attr(0),
     m_has_hasCustomPrompt_attr(false),
     m_hasCustomPrompt_attr(false)
{
}
CT_Placeholder::~CT_Placeholder()
{
    clear();
}
bool CT_Placeholder::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_Placeholder::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_Placeholder::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_Placeholder::clear()
{
    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_orient_attr = false;

    if (m_orient_attr)
    {
        delete m_orient_attr;
        m_orient_attr = NULL;
    }


    m_has_sz_attr = false;

    if (m_sz_attr)
    {
        delete m_sz_attr;
        m_sz_attr = NULL;
    }


    m_has_idx_attr = false;
    m_idx_attr = 0;

    m_has_hasCustomPrompt_attr = false;
    m_hasCustomPrompt_attr = false;

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Placeholder::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_orient_attr)
    {
        m_orient_attr->toXmlAttr("orient", _outStream);
    }



    if (m_has_sz_attr)
    {
        m_sz_attr->toXmlAttr("sz", _outStream);
    }



    if (m_has_idx_attr)
    {
        _outStream << " " << "idx" << "=\"" << m_idx_attr << "\"";
    }



    if (m_has_hasCustomPrompt_attr)
    {
        _outStream << " " << "hasCustomPrompt" << "=\"" << XSD::XMLBooleanStr(m_hasCustomPrompt_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Placeholder& CT_Placeholder::default_instance()
{
    if (!CT_Placeholder::default_instance_)
    {
        CT_Placeholder::default_instance_ = new CT_Placeholder();
    }
    return *CT_Placeholder::default_instance_;
}

bool CT_Placeholder::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_Placeholder::set_type_attr(const ST_PlaceholderType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_PlaceholderType(_type_attr);
}

const ST_PlaceholderType& CT_Placeholder::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_PlaceholderType::default_instance();
}

bool CT_Placeholder::has_orient_attr() const
{
    return m_has_orient_attr;
}

void CT_Placeholder::set_orient_attr(const ST_Direction& _orient_attr)
{
    m_has_orient_attr = true;
    m_orient_attr = new ST_Direction(_orient_attr);
}

const ST_Direction& CT_Placeholder::get_orient_attr() const
{
    if (m_orient_attr)
    {
        return *m_orient_attr;
    }
    return ST_Direction::default_instance();
}

bool CT_Placeholder::has_sz_attr() const
{
    return m_has_sz_attr;
}

void CT_Placeholder::set_sz_attr(const ST_PlaceholderSize& _sz_attr)
{
    m_has_sz_attr = true;
    m_sz_attr = new ST_PlaceholderSize(_sz_attr);
}

const ST_PlaceholderSize& CT_Placeholder::get_sz_attr() const
{
    if (m_sz_attr)
    {
        return *m_sz_attr;
    }
    return ST_PlaceholderSize::default_instance();
}

bool CT_Placeholder::has_idx_attr() const
{
    return m_has_idx_attr;
}

void CT_Placeholder::set_idx_attr(const XSD::unsignedInt_& _idx_attr)
{
    m_has_idx_attr = true;
    m_idx_attr = _idx_attr;
}

const XSD::unsignedInt_& CT_Placeholder::get_idx_attr() const
{
    return m_idx_attr;
}

bool CT_Placeholder::has_hasCustomPrompt_attr() const
{
    return m_has_hasCustomPrompt_attr;
}

void CT_Placeholder::set_hasCustomPrompt_attr(const XSD::boolean_& _hasCustomPrompt_attr)
{
    m_has_hasCustomPrompt_attr = true;
    m_hasCustomPrompt_attr = _hasCustomPrompt_attr;
}

const XSD::boolean_& CT_Placeholder::get_hasCustomPrompt_attr() const
{
    return m_hasCustomPrompt_attr;
}

CT_Placeholder* CT_Placeholder::default_instance_ = NULL;

// CT_ApplicationNonVisualDrawingProps
CT_ApplicationNonVisualDrawingProps::CT_ApplicationNonVisualDrawingProps()
    :m_has_ph(false),
     m_ph(NULL),
     m_has_a_audioCd(false),
     m_a_audioCd(NULL),
     m_has_a_wavAudioFile(false),
     m_a_wavAudioFile(NULL),
     m_has_a_audioFile(false),
     m_a_audioFile(NULL),
     m_has_a_videoFile(false),
     m_a_videoFile(NULL),
     m_has_a_quickTimeFile(false),
     m_a_quickTimeFile(NULL),
     m_has_custDataLst(false),
     m_custDataLst(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_isPhoto_attr(false),
     m_isPhoto_attr(false),
     m_has_userDrawn_attr(false),
     m_userDrawn_attr(false)
{
}
CT_ApplicationNonVisualDrawingProps::~CT_ApplicationNonVisualDrawingProps()
{
    clear();
}
bool CT_ApplicationNonVisualDrawingProps::has_ph() const
{
    return m_has_ph;
}

CT_Placeholder* CT_ApplicationNonVisualDrawingProps::mutable_ph()
{
    m_has_ph = true;
    if (!m_ph)
    {
        m_ph = new CT_Placeholder();
    }
    return m_ph;
}

const CT_Placeholder& CT_ApplicationNonVisualDrawingProps::get_ph() const
{
    if (m_ph)
    {
        return *m_ph;
    }
    return CT_Placeholder::default_instance();
}

bool CT_ApplicationNonVisualDrawingProps::has_a_audioCd() const
{
    return m_has_a_audioCd;
}

ns_a::CT_AudioCD* CT_ApplicationNonVisualDrawingProps::mutable_a_audioCd()
{

    m_has_a_wavAudioFile = false;

    if (m_a_wavAudioFile)
    {
        delete m_a_wavAudioFile;
        m_a_wavAudioFile = NULL;
    }
    ;

    m_has_a_audioFile = false;

    if (m_a_audioFile)
    {
        delete m_a_audioFile;
        m_a_audioFile = NULL;
    }
    ;

    m_has_a_videoFile = false;

    if (m_a_videoFile)
    {
        delete m_a_videoFile;
        m_a_videoFile = NULL;
    }
    ;

    m_has_a_quickTimeFile = false;

    if (m_a_quickTimeFile)
    {
        delete m_a_quickTimeFile;
        m_a_quickTimeFile = NULL;
    }
    ;

    m_has_a_audioCd = true;
    if (!m_a_audioCd)
    {
        m_a_audioCd = new ns_a::CT_AudioCD();
    }
    return m_a_audioCd;
}

const ns_a::CT_AudioCD& CT_ApplicationNonVisualDrawingProps::get_a_audioCd() const
{
    if (m_a_audioCd)
    {
        return *m_a_audioCd;
    }
    return ns_a::CT_AudioCD::default_instance();
}

bool CT_ApplicationNonVisualDrawingProps::has_a_wavAudioFile() const
{
    return m_has_a_wavAudioFile;
}

ns_a::CT_EmbeddedWAVAudioFile* CT_ApplicationNonVisualDrawingProps::mutable_a_wavAudioFile()
{

    m_has_a_audioCd = false;

    if (m_a_audioCd)
    {
        delete m_a_audioCd;
        m_a_audioCd = NULL;
    }
    ;

    m_has_a_audioFile = false;

    if (m_a_audioFile)
    {
        delete m_a_audioFile;
        m_a_audioFile = NULL;
    }
    ;

    m_has_a_videoFile = false;

    if (m_a_videoFile)
    {
        delete m_a_videoFile;
        m_a_videoFile = NULL;
    }
    ;

    m_has_a_quickTimeFile = false;

    if (m_a_quickTimeFile)
    {
        delete m_a_quickTimeFile;
        m_a_quickTimeFile = NULL;
    }
    ;

    m_has_a_wavAudioFile = true;
    if (!m_a_wavAudioFile)
    {
        m_a_wavAudioFile = new ns_a::CT_EmbeddedWAVAudioFile();
    }
    return m_a_wavAudioFile;
}

const ns_a::CT_EmbeddedWAVAudioFile& CT_ApplicationNonVisualDrawingProps::get_a_wavAudioFile() const
{
    if (m_a_wavAudioFile)
    {
        return *m_a_wavAudioFile;
    }
    return ns_a::CT_EmbeddedWAVAudioFile::default_instance();
}

bool CT_ApplicationNonVisualDrawingProps::has_a_audioFile() const
{
    return m_has_a_audioFile;
}

ns_a::CT_AudioFile* CT_ApplicationNonVisualDrawingProps::mutable_a_audioFile()
{

    m_has_a_audioCd = false;

    if (m_a_audioCd)
    {
        delete m_a_audioCd;
        m_a_audioCd = NULL;
    }
    ;

    m_has_a_wavAudioFile = false;

    if (m_a_wavAudioFile)
    {
        delete m_a_wavAudioFile;
        m_a_wavAudioFile = NULL;
    }
    ;

    m_has_a_videoFile = false;

    if (m_a_videoFile)
    {
        delete m_a_videoFile;
        m_a_videoFile = NULL;
    }
    ;

    m_has_a_quickTimeFile = false;

    if (m_a_quickTimeFile)
    {
        delete m_a_quickTimeFile;
        m_a_quickTimeFile = NULL;
    }
    ;

    m_has_a_audioFile = true;
    if (!m_a_audioFile)
    {
        m_a_audioFile = new ns_a::CT_AudioFile();
    }
    return m_a_audioFile;
}

const ns_a::CT_AudioFile& CT_ApplicationNonVisualDrawingProps::get_a_audioFile() const
{
    if (m_a_audioFile)
    {
        return *m_a_audioFile;
    }
    return ns_a::CT_AudioFile::default_instance();
}

bool CT_ApplicationNonVisualDrawingProps::has_a_videoFile() const
{
    return m_has_a_videoFile;
}

ns_a::CT_VideoFile* CT_ApplicationNonVisualDrawingProps::mutable_a_videoFile()
{

    m_has_a_audioCd = false;

    if (m_a_audioCd)
    {
        delete m_a_audioCd;
        m_a_audioCd = NULL;
    }
    ;

    m_has_a_wavAudioFile = false;

    if (m_a_wavAudioFile)
    {
        delete m_a_wavAudioFile;
        m_a_wavAudioFile = NULL;
    }
    ;

    m_has_a_audioFile = false;

    if (m_a_audioFile)
    {
        delete m_a_audioFile;
        m_a_audioFile = NULL;
    }
    ;

    m_has_a_quickTimeFile = false;

    if (m_a_quickTimeFile)
    {
        delete m_a_quickTimeFile;
        m_a_quickTimeFile = NULL;
    }
    ;

    m_has_a_videoFile = true;
    if (!m_a_videoFile)
    {
        m_a_videoFile = new ns_a::CT_VideoFile();
    }
    return m_a_videoFile;
}

const ns_a::CT_VideoFile& CT_ApplicationNonVisualDrawingProps::get_a_videoFile() const
{
    if (m_a_videoFile)
    {
        return *m_a_videoFile;
    }
    return ns_a::CT_VideoFile::default_instance();
}

bool CT_ApplicationNonVisualDrawingProps::has_a_quickTimeFile() const
{
    return m_has_a_quickTimeFile;
}

ns_a::CT_QuickTimeFile* CT_ApplicationNonVisualDrawingProps::mutable_a_quickTimeFile()
{

    m_has_a_audioCd = false;

    if (m_a_audioCd)
    {
        delete m_a_audioCd;
        m_a_audioCd = NULL;
    }
    ;

    m_has_a_wavAudioFile = false;

    if (m_a_wavAudioFile)
    {
        delete m_a_wavAudioFile;
        m_a_wavAudioFile = NULL;
    }
    ;

    m_has_a_audioFile = false;

    if (m_a_audioFile)
    {
        delete m_a_audioFile;
        m_a_audioFile = NULL;
    }
    ;

    m_has_a_videoFile = false;

    if (m_a_videoFile)
    {
        delete m_a_videoFile;
        m_a_videoFile = NULL;
    }
    ;

    m_has_a_quickTimeFile = true;
    if (!m_a_quickTimeFile)
    {
        m_a_quickTimeFile = new ns_a::CT_QuickTimeFile();
    }
    return m_a_quickTimeFile;
}

const ns_a::CT_QuickTimeFile& CT_ApplicationNonVisualDrawingProps::get_a_quickTimeFile() const
{
    if (m_a_quickTimeFile)
    {
        return *m_a_quickTimeFile;
    }
    return ns_a::CT_QuickTimeFile::default_instance();
}

bool CT_ApplicationNonVisualDrawingProps::has_custDataLst() const
{
    return m_has_custDataLst;
}

CT_CustomerDataList* CT_ApplicationNonVisualDrawingProps::mutable_custDataLst()
{
    m_has_custDataLst = true;
    if (!m_custDataLst)
    {
        m_custDataLst = new CT_CustomerDataList();
    }
    return m_custDataLst;
}

const CT_CustomerDataList& CT_ApplicationNonVisualDrawingProps::get_custDataLst() const
{
    if (m_custDataLst)
    {
        return *m_custDataLst;
    }
    return CT_CustomerDataList::default_instance();
}

bool CT_ApplicationNonVisualDrawingProps::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ApplicationNonVisualDrawingProps::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ApplicationNonVisualDrawingProps::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ApplicationNonVisualDrawingProps::clear()
{
    m_has_isPhoto_attr = false;
    m_isPhoto_attr = false;

    m_has_userDrawn_attr = false;
    m_userDrawn_attr = false;

    m_has_ph = false;

    if (m_ph)
    {
        delete m_ph;
        m_ph = NULL;
    }


    m_has_a_audioCd = false;

    if (m_a_audioCd)
    {
        delete m_a_audioCd;
        m_a_audioCd = NULL;
    }


    m_has_a_wavAudioFile = false;

    if (m_a_wavAudioFile)
    {
        delete m_a_wavAudioFile;
        m_a_wavAudioFile = NULL;
    }


    m_has_a_audioFile = false;

    if (m_a_audioFile)
    {
        delete m_a_audioFile;
        m_a_audioFile = NULL;
    }


    m_has_a_videoFile = false;

    if (m_a_videoFile)
    {
        delete m_a_videoFile;
        m_a_videoFile = NULL;
    }


    m_has_a_quickTimeFile = false;

    if (m_a_quickTimeFile)
    {
        delete m_a_quickTimeFile;
        m_a_quickTimeFile = NULL;
    }


    m_has_custDataLst = false;

    if (m_custDataLst)
    {
        delete m_custDataLst;
        m_custDataLst = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ApplicationNonVisualDrawingProps::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_isPhoto_attr)
    {
        _outStream << " " << "isPhoto" << "=\"" << XSD::XMLBooleanStr(m_isPhoto_attr) << "\"";
    }



    if (m_has_userDrawn_attr)
    {
        _outStream << " " << "userDrawn" << "=\"" << XSD::XMLBooleanStr(m_userDrawn_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_ph)
    {
        m_ph->toXmlElem("p:ph", "", _outStream);
    }

    {
        bool elemHasValueList[5] = {m_has_a_audioCd, m_has_a_wavAudioFile, m_has_a_audioFile, m_has_a_videoFile, m_has_a_quickTimeFile};
        int cnt = count(elemHasValueList, elemHasValueList + 5, true);
        assert(cnt == 1);
    }


    if (m_has_a_audioCd)
    {
        m_a_audioCd->toXmlElem("a:audioCd", "", _outStream);
    }


    if (m_has_a_wavAudioFile)
    {
        m_a_wavAudioFile->toXmlElem("a:wavAudioFile", "", _outStream);
    }


    if (m_has_a_audioFile)
    {
        m_a_audioFile->toXmlElem("a:audioFile", "", _outStream);
    }


    if (m_has_a_videoFile)
    {
        m_a_videoFile->toXmlElem("a:videoFile", "", _outStream);
    }


    if (m_has_a_quickTimeFile)
    {
        m_a_quickTimeFile->toXmlElem("a:quickTimeFile", "", _outStream);
    }


    if (m_has_custDataLst)
    {
        m_custDataLst->toXmlElem("p:custDataLst", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ApplicationNonVisualDrawingProps& CT_ApplicationNonVisualDrawingProps::default_instance()
{
    if (!CT_ApplicationNonVisualDrawingProps::default_instance_)
    {
        CT_ApplicationNonVisualDrawingProps::default_instance_ = new CT_ApplicationNonVisualDrawingProps();
    }
    return *CT_ApplicationNonVisualDrawingProps::default_instance_;
}

bool CT_ApplicationNonVisualDrawingProps::has_isPhoto_attr() const
{
    return m_has_isPhoto_attr;
}

void CT_ApplicationNonVisualDrawingProps::set_isPhoto_attr(const XSD::boolean_& _isPhoto_attr)
{
    m_has_isPhoto_attr = true;
    m_isPhoto_attr = _isPhoto_attr;
}

const XSD::boolean_& CT_ApplicationNonVisualDrawingProps::get_isPhoto_attr() const
{
    return m_isPhoto_attr;
}

bool CT_ApplicationNonVisualDrawingProps::has_userDrawn_attr() const
{
    return m_has_userDrawn_attr;
}

void CT_ApplicationNonVisualDrawingProps::set_userDrawn_attr(const XSD::boolean_& _userDrawn_attr)
{
    m_has_userDrawn_attr = true;
    m_userDrawn_attr = _userDrawn_attr;
}

const XSD::boolean_& CT_ApplicationNonVisualDrawingProps::get_userDrawn_attr() const
{
    return m_userDrawn_attr;
}

CT_ApplicationNonVisualDrawingProps* CT_ApplicationNonVisualDrawingProps::default_instance_ = NULL;

// CT_ShapeNonVisual
CT_ShapeNonVisual::CT_ShapeNonVisual()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvSpPr(false),
     m_cNvSpPr(NULL),
     m_has_nvPr(false),
     m_nvPr(NULL)
{
}
CT_ShapeNonVisual::~CT_ShapeNonVisual()
{
    clear();
}
bool CT_ShapeNonVisual::has_cNvPr() const
{
    return m_has_cNvPr;
}

ns_a::CT_NonVisualDrawingProps* CT_ShapeNonVisual::mutable_cNvPr()
{
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
}

const ns_a::CT_NonVisualDrawingProps& CT_ShapeNonVisual::get_cNvPr() const
{
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
}

bool CT_ShapeNonVisual::has_cNvSpPr() const
{
    return m_has_cNvSpPr;
}

ns_a::CT_NonVisualDrawingShapeProps* CT_ShapeNonVisual::mutable_cNvSpPr()
{
    m_has_cNvSpPr = true;
    if (!m_cNvSpPr)
    {
        m_cNvSpPr = new ns_a::CT_NonVisualDrawingShapeProps();
    }
    return m_cNvSpPr;
}

const ns_a::CT_NonVisualDrawingShapeProps& CT_ShapeNonVisual::get_cNvSpPr() const
{
    if (m_cNvSpPr)
    {
        return *m_cNvSpPr;
    }
    return ns_a::CT_NonVisualDrawingShapeProps::default_instance();
}

bool CT_ShapeNonVisual::has_nvPr() const
{
    return m_has_nvPr;
}

CT_ApplicationNonVisualDrawingProps* CT_ShapeNonVisual::mutable_nvPr()
{
    m_has_nvPr = true;
    if (!m_nvPr)
    {
        m_nvPr = new CT_ApplicationNonVisualDrawingProps();
    }
    return m_nvPr;
}

const CT_ApplicationNonVisualDrawingProps& CT_ShapeNonVisual::get_nvPr() const
{
    if (m_nvPr)
    {
        return *m_nvPr;
    }
    return CT_ApplicationNonVisualDrawingProps::default_instance();
}

void CT_ShapeNonVisual::clear()
{
    m_has_cNvPr = false;

    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }


    m_has_cNvSpPr = false;

    if (m_cNvSpPr)
    {
        delete m_cNvSpPr;
        m_cNvSpPr = NULL;
    }


    m_has_nvPr = false;

    if (m_nvPr)
    {
        delete m_nvPr;
        m_nvPr = NULL;
    }

}

void CT_ShapeNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cNvPr);


    assert(m_has_cNvSpPr);


    assert(m_has_nvPr);


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("p:cNvPr", "", _outStream);
    }


    if (m_has_cNvSpPr)
    {
        m_cNvSpPr->toXmlElem("p:cNvSpPr", "", _outStream);
    }


    if (m_has_nvPr)
    {
        m_nvPr->toXmlElem("p:nvPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ShapeNonVisual& CT_ShapeNonVisual::default_instance()
{
    if (!CT_ShapeNonVisual::default_instance_)
    {
        CT_ShapeNonVisual::default_instance_ = new CT_ShapeNonVisual();
    }
    return *CT_ShapeNonVisual::default_instance_;
}

CT_ShapeNonVisual* CT_ShapeNonVisual::default_instance_ = NULL;

// CT_Shape
CT_Shape::CT_Shape()
    :m_has_nvSpPr(false),
     m_nvSpPr(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_style(false),
     m_style(NULL),
     m_has_txBody(false),
     m_txBody(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_useBgFill_attr(false),
     m_useBgFill_attr(false)
{
}
CT_Shape::~CT_Shape()
{
    clear();
}
bool CT_Shape::has_nvSpPr() const
{
    return m_has_nvSpPr;
}

CT_ShapeNonVisual* CT_Shape::mutable_nvSpPr()
{
    m_has_nvSpPr = true;
    if (!m_nvSpPr)
    {
        m_nvSpPr = new CT_ShapeNonVisual();
    }
    return m_nvSpPr;
}

const CT_ShapeNonVisual& CT_Shape::get_nvSpPr() const
{
    if (m_nvSpPr)
    {
        return *m_nvSpPr;
    }
    return CT_ShapeNonVisual::default_instance();
}

bool CT_Shape::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_Shape::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_Shape::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_Shape::has_style() const
{
    return m_has_style;
}

ns_a::CT_ShapeStyle* CT_Shape::mutable_style()
{
    m_has_style = true;
    if (!m_style)
    {
        m_style = new ns_a::CT_ShapeStyle();
    }
    return m_style;
}

const ns_a::CT_ShapeStyle& CT_Shape::get_style() const
{
    if (m_style)
    {
        return *m_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
}

bool CT_Shape::has_txBody() const
{
    return m_has_txBody;
}

ns_a::CT_TextBody* CT_Shape::mutable_txBody()
{
    m_has_txBody = true;
    if (!m_txBody)
    {
        m_txBody = new ns_a::CT_TextBody();
    }
    return m_txBody;
}

const ns_a::CT_TextBody& CT_Shape::get_txBody() const
{
    if (m_txBody)
    {
        return *m_txBody;
    }
    return ns_a::CT_TextBody::default_instance();
}

bool CT_Shape::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_Shape::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_Shape::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_Shape::clear()
{
    m_has_useBgFill_attr = false;
    m_useBgFill_attr = false;

    m_has_nvSpPr = false;

    if (m_nvSpPr)
    {
        delete m_nvSpPr;
        m_nvSpPr = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_style = false;

    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }


    m_has_txBody = false;

    if (m_txBody)
    {
        delete m_txBody;
        m_txBody = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Shape::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_useBgFill_attr)
    {
        _outStream << " " << "useBgFill" << "=\"" << XSD::XMLBooleanStr(m_useBgFill_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_nvSpPr);


    assert(m_has_spPr);


    if (m_has_nvSpPr)
    {
        m_nvSpPr->toXmlElem("p:nvSpPr", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("p:spPr", "", _outStream);
    }


    if (m_has_style)
    {
        m_style->toXmlElem("p:style", "", _outStream);
    }


    if (m_has_txBody)
    {
        m_txBody->toXmlElem("p:txBody", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Shape& CT_Shape::default_instance()
{
    if (!CT_Shape::default_instance_)
    {
        CT_Shape::default_instance_ = new CT_Shape();
    }
    return *CT_Shape::default_instance_;
}

bool CT_Shape::has_useBgFill_attr() const
{
    return m_has_useBgFill_attr;
}

void CT_Shape::set_useBgFill_attr(const XSD::boolean_& _useBgFill_attr)
{
    m_has_useBgFill_attr = true;
    m_useBgFill_attr = _useBgFill_attr;
}

const XSD::boolean_& CT_Shape::get_useBgFill_attr() const
{
    return m_useBgFill_attr;
}

CT_Shape* CT_Shape::default_instance_ = NULL;

// CT_ConnectorNonVisual
CT_ConnectorNonVisual::CT_ConnectorNonVisual()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvCxnSpPr(false),
     m_cNvCxnSpPr(NULL),
     m_has_nvPr(false),
     m_nvPr(NULL)
{
}
CT_ConnectorNonVisual::~CT_ConnectorNonVisual()
{
    clear();
}
bool CT_ConnectorNonVisual::has_cNvPr() const
{
    return m_has_cNvPr;
}

ns_a::CT_NonVisualDrawingProps* CT_ConnectorNonVisual::mutable_cNvPr()
{
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
}

const ns_a::CT_NonVisualDrawingProps& CT_ConnectorNonVisual::get_cNvPr() const
{
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
}

bool CT_ConnectorNonVisual::has_cNvCxnSpPr() const
{
    return m_has_cNvCxnSpPr;
}

ns_a::CT_NonVisualConnectorProperties* CT_ConnectorNonVisual::mutable_cNvCxnSpPr()
{
    m_has_cNvCxnSpPr = true;
    if (!m_cNvCxnSpPr)
    {
        m_cNvCxnSpPr = new ns_a::CT_NonVisualConnectorProperties();
    }
    return m_cNvCxnSpPr;
}

const ns_a::CT_NonVisualConnectorProperties& CT_ConnectorNonVisual::get_cNvCxnSpPr() const
{
    if (m_cNvCxnSpPr)
    {
        return *m_cNvCxnSpPr;
    }
    return ns_a::CT_NonVisualConnectorProperties::default_instance();
}

bool CT_ConnectorNonVisual::has_nvPr() const
{
    return m_has_nvPr;
}

CT_ApplicationNonVisualDrawingProps* CT_ConnectorNonVisual::mutable_nvPr()
{
    m_has_nvPr = true;
    if (!m_nvPr)
    {
        m_nvPr = new CT_ApplicationNonVisualDrawingProps();
    }
    return m_nvPr;
}

const CT_ApplicationNonVisualDrawingProps& CT_ConnectorNonVisual::get_nvPr() const
{
    if (m_nvPr)
    {
        return *m_nvPr;
    }
    return CT_ApplicationNonVisualDrawingProps::default_instance();
}

void CT_ConnectorNonVisual::clear()
{
    m_has_cNvPr = false;

    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }


    m_has_cNvCxnSpPr = false;

    if (m_cNvCxnSpPr)
    {
        delete m_cNvCxnSpPr;
        m_cNvCxnSpPr = NULL;
    }


    m_has_nvPr = false;

    if (m_nvPr)
    {
        delete m_nvPr;
        m_nvPr = NULL;
    }

}

void CT_ConnectorNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cNvPr);


    assert(m_has_cNvCxnSpPr);


    assert(m_has_nvPr);


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("p:cNvPr", "", _outStream);
    }


    if (m_has_cNvCxnSpPr)
    {
        m_cNvCxnSpPr->toXmlElem("p:cNvCxnSpPr", "", _outStream);
    }


    if (m_has_nvPr)
    {
        m_nvPr->toXmlElem("p:nvPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ConnectorNonVisual& CT_ConnectorNonVisual::default_instance()
{
    if (!CT_ConnectorNonVisual::default_instance_)
    {
        CT_ConnectorNonVisual::default_instance_ = new CT_ConnectorNonVisual();
    }
    return *CT_ConnectorNonVisual::default_instance_;
}

CT_ConnectorNonVisual* CT_ConnectorNonVisual::default_instance_ = NULL;

// CT_Connector
CT_Connector::CT_Connector()
    :m_has_nvCxnSpPr(false),
     m_nvCxnSpPr(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_style(false),
     m_style(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Connector::~CT_Connector()
{
    clear();
}
bool CT_Connector::has_nvCxnSpPr() const
{
    return m_has_nvCxnSpPr;
}

CT_ConnectorNonVisual* CT_Connector::mutable_nvCxnSpPr()
{
    m_has_nvCxnSpPr = true;
    if (!m_nvCxnSpPr)
    {
        m_nvCxnSpPr = new CT_ConnectorNonVisual();
    }
    return m_nvCxnSpPr;
}

const CT_ConnectorNonVisual& CT_Connector::get_nvCxnSpPr() const
{
    if (m_nvCxnSpPr)
    {
        return *m_nvCxnSpPr;
    }
    return CT_ConnectorNonVisual::default_instance();
}

bool CT_Connector::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_Connector::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_Connector::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_Connector::has_style() const
{
    return m_has_style;
}

ns_a::CT_ShapeStyle* CT_Connector::mutable_style()
{
    m_has_style = true;
    if (!m_style)
    {
        m_style = new ns_a::CT_ShapeStyle();
    }
    return m_style;
}

const ns_a::CT_ShapeStyle& CT_Connector::get_style() const
{
    if (m_style)
    {
        return *m_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
}

bool CT_Connector::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_Connector::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_Connector::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_Connector::clear()
{
    m_has_nvCxnSpPr = false;

    if (m_nvCxnSpPr)
    {
        delete m_nvCxnSpPr;
        m_nvCxnSpPr = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_style = false;

    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Connector::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_nvCxnSpPr);


    assert(m_has_spPr);


    if (m_has_nvCxnSpPr)
    {
        m_nvCxnSpPr->toXmlElem("p:nvCxnSpPr", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("p:spPr", "", _outStream);
    }


    if (m_has_style)
    {
        m_style->toXmlElem("p:style", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Connector& CT_Connector::default_instance()
{
    if (!CT_Connector::default_instance_)
    {
        CT_Connector::default_instance_ = new CT_Connector();
    }
    return *CT_Connector::default_instance_;
}

CT_Connector* CT_Connector::default_instance_ = NULL;

// CT_PictureNonVisual
CT_PictureNonVisual::CT_PictureNonVisual()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvPicPr(false),
     m_cNvPicPr(NULL),
     m_has_nvPr(false),
     m_nvPr(NULL)
{
}
CT_PictureNonVisual::~CT_PictureNonVisual()
{
    clear();
}
bool CT_PictureNonVisual::has_cNvPr() const
{
    return m_has_cNvPr;
}

ns_a::CT_NonVisualDrawingProps* CT_PictureNonVisual::mutable_cNvPr()
{
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
}

const ns_a::CT_NonVisualDrawingProps& CT_PictureNonVisual::get_cNvPr() const
{
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
}

bool CT_PictureNonVisual::has_cNvPicPr() const
{
    return m_has_cNvPicPr;
}

ns_a::CT_NonVisualPictureProperties* CT_PictureNonVisual::mutable_cNvPicPr()
{
    m_has_cNvPicPr = true;
    if (!m_cNvPicPr)
    {
        m_cNvPicPr = new ns_a::CT_NonVisualPictureProperties();
    }
    return m_cNvPicPr;
}

const ns_a::CT_NonVisualPictureProperties& CT_PictureNonVisual::get_cNvPicPr() const
{
    if (m_cNvPicPr)
    {
        return *m_cNvPicPr;
    }
    return ns_a::CT_NonVisualPictureProperties::default_instance();
}

bool CT_PictureNonVisual::has_nvPr() const
{
    return m_has_nvPr;
}

CT_ApplicationNonVisualDrawingProps* CT_PictureNonVisual::mutable_nvPr()
{
    m_has_nvPr = true;
    if (!m_nvPr)
    {
        m_nvPr = new CT_ApplicationNonVisualDrawingProps();
    }
    return m_nvPr;
}

const CT_ApplicationNonVisualDrawingProps& CT_PictureNonVisual::get_nvPr() const
{
    if (m_nvPr)
    {
        return *m_nvPr;
    }
    return CT_ApplicationNonVisualDrawingProps::default_instance();
}

void CT_PictureNonVisual::clear()
{
    m_has_cNvPr = false;

    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }


    m_has_cNvPicPr = false;

    if (m_cNvPicPr)
    {
        delete m_cNvPicPr;
        m_cNvPicPr = NULL;
    }


    m_has_nvPr = false;

    if (m_nvPr)
    {
        delete m_nvPr;
        m_nvPr = NULL;
    }

}

void CT_PictureNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cNvPr);


    assert(m_has_cNvPicPr);


    assert(m_has_nvPr);


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("p:cNvPr", "", _outStream);
    }


    if (m_has_cNvPicPr)
    {
        m_cNvPicPr->toXmlElem("p:cNvPicPr", "", _outStream);
    }


    if (m_has_nvPr)
    {
        m_nvPr->toXmlElem("p:nvPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PictureNonVisual& CT_PictureNonVisual::default_instance()
{
    if (!CT_PictureNonVisual::default_instance_)
    {
        CT_PictureNonVisual::default_instance_ = new CT_PictureNonVisual();
    }
    return *CT_PictureNonVisual::default_instance_;
}

CT_PictureNonVisual* CT_PictureNonVisual::default_instance_ = NULL;

// CT_Picture
CT_Picture::CT_Picture()
    :m_has_nvPicPr(false),
     m_nvPicPr(NULL),
     m_has_blipFill(false),
     m_blipFill(NULL),
     m_has_spPr(false),
     m_spPr(NULL),
     m_has_style(false),
     m_style(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_Picture::~CT_Picture()
{
    clear();
}
bool CT_Picture::has_nvPicPr() const
{
    return m_has_nvPicPr;
}

CT_PictureNonVisual* CT_Picture::mutable_nvPicPr()
{
    m_has_nvPicPr = true;
    if (!m_nvPicPr)
    {
        m_nvPicPr = new CT_PictureNonVisual();
    }
    return m_nvPicPr;
}

const CT_PictureNonVisual& CT_Picture::get_nvPicPr() const
{
    if (m_nvPicPr)
    {
        return *m_nvPicPr;
    }
    return CT_PictureNonVisual::default_instance();
}

bool CT_Picture::has_blipFill() const
{
    return m_has_blipFill;
}

ns_a::CT_BlipFillProperties* CT_Picture::mutable_blipFill()
{
    m_has_blipFill = true;
    if (!m_blipFill)
    {
        m_blipFill = new ns_a::CT_BlipFillProperties();
    }
    return m_blipFill;
}

const ns_a::CT_BlipFillProperties& CT_Picture::get_blipFill() const
{
    if (m_blipFill)
    {
        return *m_blipFill;
    }
    return ns_a::CT_BlipFillProperties::default_instance();
}

bool CT_Picture::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* CT_Picture::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& CT_Picture::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

bool CT_Picture::has_style() const
{
    return m_has_style;
}

ns_a::CT_ShapeStyle* CT_Picture::mutable_style()
{
    m_has_style = true;
    if (!m_style)
    {
        m_style = new ns_a::CT_ShapeStyle();
    }
    return m_style;
}

const ns_a::CT_ShapeStyle& CT_Picture::get_style() const
{
    if (m_style)
    {
        return *m_style;
    }
    return ns_a::CT_ShapeStyle::default_instance();
}

bool CT_Picture::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_Picture::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_Picture::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_Picture::clear()
{
    m_has_nvPicPr = false;

    if (m_nvPicPr)
    {
        delete m_nvPicPr;
        m_nvPicPr = NULL;
    }


    m_has_blipFill = false;

    if (m_blipFill)
    {
        delete m_blipFill;
        m_blipFill = NULL;
    }


    m_has_spPr = false;

    if (m_spPr)
    {
        delete m_spPr;
        m_spPr = NULL;
    }


    m_has_style = false;

    if (m_style)
    {
        delete m_style;
        m_style = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Picture::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_nvPicPr);


    assert(m_has_blipFill);


    assert(m_has_spPr);


    if (m_has_nvPicPr)
    {
        m_nvPicPr->toXmlElem("p:nvPicPr", "", _outStream);
    }


    if (m_has_blipFill)
    {
        m_blipFill->toXmlElem("p:blipFill", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("p:spPr", "", _outStream);
    }


    if (m_has_style)
    {
        m_style->toXmlElem("p:style", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Picture& CT_Picture::default_instance()
{
    if (!CT_Picture::default_instance_)
    {
        CT_Picture::default_instance_ = new CT_Picture();
    }
    return *CT_Picture::default_instance_;
}

CT_Picture* CT_Picture::default_instance_ = NULL;

// CT_GraphicalObjectFrameNonVisual
CT_GraphicalObjectFrameNonVisual::CT_GraphicalObjectFrameNonVisual()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvGraphicFramePr(false),
     m_cNvGraphicFramePr(NULL),
     m_has_nvPr(false),
     m_nvPr(NULL)
{
}
CT_GraphicalObjectFrameNonVisual::~CT_GraphicalObjectFrameNonVisual()
{
    clear();
}
bool CT_GraphicalObjectFrameNonVisual::has_cNvPr() const
{
    return m_has_cNvPr;
}

ns_a::CT_NonVisualDrawingProps* CT_GraphicalObjectFrameNonVisual::mutable_cNvPr()
{
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
}

const ns_a::CT_NonVisualDrawingProps& CT_GraphicalObjectFrameNonVisual::get_cNvPr() const
{
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
}

bool CT_GraphicalObjectFrameNonVisual::has_cNvGraphicFramePr() const
{
    return m_has_cNvGraphicFramePr;
}

ns_a::CT_NonVisualGraphicFrameProperties* CT_GraphicalObjectFrameNonVisual::mutable_cNvGraphicFramePr()
{
    m_has_cNvGraphicFramePr = true;
    if (!m_cNvGraphicFramePr)
    {
        m_cNvGraphicFramePr = new ns_a::CT_NonVisualGraphicFrameProperties();
    }
    return m_cNvGraphicFramePr;
}

const ns_a::CT_NonVisualGraphicFrameProperties& CT_GraphicalObjectFrameNonVisual::get_cNvGraphicFramePr() const
{
    if (m_cNvGraphicFramePr)
    {
        return *m_cNvGraphicFramePr;
    }
    return ns_a::CT_NonVisualGraphicFrameProperties::default_instance();
}

bool CT_GraphicalObjectFrameNonVisual::has_nvPr() const
{
    return m_has_nvPr;
}

CT_ApplicationNonVisualDrawingProps* CT_GraphicalObjectFrameNonVisual::mutable_nvPr()
{
    m_has_nvPr = true;
    if (!m_nvPr)
    {
        m_nvPr = new CT_ApplicationNonVisualDrawingProps();
    }
    return m_nvPr;
}

const CT_ApplicationNonVisualDrawingProps& CT_GraphicalObjectFrameNonVisual::get_nvPr() const
{
    if (m_nvPr)
    {
        return *m_nvPr;
    }
    return CT_ApplicationNonVisualDrawingProps::default_instance();
}

void CT_GraphicalObjectFrameNonVisual::clear()
{
    m_has_cNvPr = false;

    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }


    m_has_cNvGraphicFramePr = false;

    if (m_cNvGraphicFramePr)
    {
        delete m_cNvGraphicFramePr;
        m_cNvGraphicFramePr = NULL;
    }


    m_has_nvPr = false;

    if (m_nvPr)
    {
        delete m_nvPr;
        m_nvPr = NULL;
    }

}

void CT_GraphicalObjectFrameNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cNvPr);


    assert(m_has_cNvGraphicFramePr);


    assert(m_has_nvPr);


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("p:cNvPr", "", _outStream);
    }


    if (m_has_cNvGraphicFramePr)
    {
        m_cNvGraphicFramePr->toXmlElem("p:cNvGraphicFramePr", "", _outStream);
    }


    if (m_has_nvPr)
    {
        m_nvPr->toXmlElem("p:nvPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GraphicalObjectFrameNonVisual& CT_GraphicalObjectFrameNonVisual::default_instance()
{
    if (!CT_GraphicalObjectFrameNonVisual::default_instance_)
    {
        CT_GraphicalObjectFrameNonVisual::default_instance_ = new CT_GraphicalObjectFrameNonVisual();
    }
    return *CT_GraphicalObjectFrameNonVisual::default_instance_;
}

CT_GraphicalObjectFrameNonVisual* CT_GraphicalObjectFrameNonVisual::default_instance_ = NULL;

// CT_GraphicalObjectFrame
CT_GraphicalObjectFrame::CT_GraphicalObjectFrame()
    :m_has_nvGraphicFramePr(false),
     m_nvGraphicFramePr(NULL),
     m_has_xfrm(false),
     m_xfrm(NULL),
     m_has_a_graphic(false),
     m_a_graphic(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_bwMode_attr(false),
     m_bwMode_attr(NULL)
{
}
CT_GraphicalObjectFrame::~CT_GraphicalObjectFrame()
{
    clear();
}
bool CT_GraphicalObjectFrame::has_nvGraphicFramePr() const
{
    return m_has_nvGraphicFramePr;
}

CT_GraphicalObjectFrameNonVisual* CT_GraphicalObjectFrame::mutable_nvGraphicFramePr()
{
    m_has_nvGraphicFramePr = true;
    if (!m_nvGraphicFramePr)
    {
        m_nvGraphicFramePr = new CT_GraphicalObjectFrameNonVisual();
    }
    return m_nvGraphicFramePr;
}

const CT_GraphicalObjectFrameNonVisual& CT_GraphicalObjectFrame::get_nvGraphicFramePr() const
{
    if (m_nvGraphicFramePr)
    {
        return *m_nvGraphicFramePr;
    }
    return CT_GraphicalObjectFrameNonVisual::default_instance();
}

bool CT_GraphicalObjectFrame::has_xfrm() const
{
    return m_has_xfrm;
}

ns_a::CT_Transform2D* CT_GraphicalObjectFrame::mutable_xfrm()
{
    m_has_xfrm = true;
    if (!m_xfrm)
    {
        m_xfrm = new ns_a::CT_Transform2D();
    }
    return m_xfrm;
}

const ns_a::CT_Transform2D& CT_GraphicalObjectFrame::get_xfrm() const
{
    if (m_xfrm)
    {
        return *m_xfrm;
    }
    return ns_a::CT_Transform2D::default_instance();
}

bool CT_GraphicalObjectFrame::has_a_graphic() const
{
    return m_has_a_graphic;
}

ns_a::CT_GraphicalObject* CT_GraphicalObjectFrame::mutable_a_graphic()
{
    m_has_a_graphic = true;
    if (!m_a_graphic)
    {
        m_a_graphic = new ns_a::CT_GraphicalObject();
    }
    return m_a_graphic;
}

const ns_a::CT_GraphicalObject& CT_GraphicalObjectFrame::get_a_graphic() const
{
    if (m_a_graphic)
    {
        return *m_a_graphic;
    }
    return ns_a::CT_GraphicalObject::default_instance();
}

bool CT_GraphicalObjectFrame::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_GraphicalObjectFrame::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_GraphicalObjectFrame::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_GraphicalObjectFrame::clear()
{
    m_has_bwMode_attr = false;

    if (m_bwMode_attr)
    {
        delete m_bwMode_attr;
        m_bwMode_attr = NULL;
    }


    m_has_nvGraphicFramePr = false;

    if (m_nvGraphicFramePr)
    {
        delete m_nvGraphicFramePr;
        m_nvGraphicFramePr = NULL;
    }


    m_has_xfrm = false;

    if (m_xfrm)
    {
        delete m_xfrm;
        m_xfrm = NULL;
    }


    m_has_a_graphic = false;

    if (m_a_graphic)
    {
        delete m_a_graphic;
        m_a_graphic = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_GraphicalObjectFrame::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_bwMode_attr)
    {
        m_bwMode_attr->toXmlAttr("bwMode", _outStream);
    }

    _outStream << ">";

    assert(m_has_nvGraphicFramePr);


    assert(m_has_xfrm);


    assert(m_has_a_graphic);


    if (m_has_nvGraphicFramePr)
    {
        m_nvGraphicFramePr->toXmlElem("p:nvGraphicFramePr", "", _outStream);
    }


    if (m_has_xfrm)
    {
        m_xfrm->toXmlElem("p:xfrm", "", _outStream);
    }


    if (m_has_a_graphic)
    {
        m_a_graphic->toXmlElem("a:graphic", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GraphicalObjectFrame& CT_GraphicalObjectFrame::default_instance()
{
    if (!CT_GraphicalObjectFrame::default_instance_)
    {
        CT_GraphicalObjectFrame::default_instance_ = new CT_GraphicalObjectFrame();
    }
    return *CT_GraphicalObjectFrame::default_instance_;
}

bool CT_GraphicalObjectFrame::has_bwMode_attr() const
{
    return m_has_bwMode_attr;
}

void CT_GraphicalObjectFrame::set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr)
{
    m_has_bwMode_attr = true;
    m_bwMode_attr = new ns_a::ST_BlackWhiteMode(_bwMode_attr);
}

const ns_a::ST_BlackWhiteMode& CT_GraphicalObjectFrame::get_bwMode_attr() const
{
    if (m_bwMode_attr)
    {
        return *m_bwMode_attr;
    }
    return ns_a::ST_BlackWhiteMode::default_instance();
}

CT_GraphicalObjectFrame* CT_GraphicalObjectFrame::default_instance_ = NULL;

// CT_GroupShapeNonVisual
CT_GroupShapeNonVisual::CT_GroupShapeNonVisual()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvGrpSpPr(false),
     m_cNvGrpSpPr(NULL),
     m_has_nvPr(false),
     m_nvPr(NULL)
{
}
CT_GroupShapeNonVisual::~CT_GroupShapeNonVisual()
{
    clear();
}
bool CT_GroupShapeNonVisual::has_cNvPr() const
{
    return m_has_cNvPr;
}

ns_a::CT_NonVisualDrawingProps* CT_GroupShapeNonVisual::mutable_cNvPr()
{
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
}

const ns_a::CT_NonVisualDrawingProps& CT_GroupShapeNonVisual::get_cNvPr() const
{
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
}

bool CT_GroupShapeNonVisual::has_cNvGrpSpPr() const
{
    return m_has_cNvGrpSpPr;
}

ns_a::CT_NonVisualGroupDrawingShapeProps* CT_GroupShapeNonVisual::mutable_cNvGrpSpPr()
{
    m_has_cNvGrpSpPr = true;
    if (!m_cNvGrpSpPr)
    {
        m_cNvGrpSpPr = new ns_a::CT_NonVisualGroupDrawingShapeProps();
    }
    return m_cNvGrpSpPr;
}

const ns_a::CT_NonVisualGroupDrawingShapeProps& CT_GroupShapeNonVisual::get_cNvGrpSpPr() const
{
    if (m_cNvGrpSpPr)
    {
        return *m_cNvGrpSpPr;
    }
    return ns_a::CT_NonVisualGroupDrawingShapeProps::default_instance();
}

bool CT_GroupShapeNonVisual::has_nvPr() const
{
    return m_has_nvPr;
}

CT_ApplicationNonVisualDrawingProps* CT_GroupShapeNonVisual::mutable_nvPr()
{
    m_has_nvPr = true;
    if (!m_nvPr)
    {
        m_nvPr = new CT_ApplicationNonVisualDrawingProps();
    }
    return m_nvPr;
}

const CT_ApplicationNonVisualDrawingProps& CT_GroupShapeNonVisual::get_nvPr() const
{
    if (m_nvPr)
    {
        return *m_nvPr;
    }
    return CT_ApplicationNonVisualDrawingProps::default_instance();
}

void CT_GroupShapeNonVisual::clear()
{
    m_has_cNvPr = false;

    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }


    m_has_cNvGrpSpPr = false;

    if (m_cNvGrpSpPr)
    {
        delete m_cNvGrpSpPr;
        m_cNvGrpSpPr = NULL;
    }


    m_has_nvPr = false;

    if (m_nvPr)
    {
        delete m_nvPr;
        m_nvPr = NULL;
    }

}

void CT_GroupShapeNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cNvPr);


    assert(m_has_cNvGrpSpPr);


    assert(m_has_nvPr);


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("p:cNvPr", "", _outStream);
    }


    if (m_has_cNvGrpSpPr)
    {
        m_cNvGrpSpPr->toXmlElem("p:cNvGrpSpPr", "", _outStream);
    }


    if (m_has_nvPr)
    {
        m_nvPr->toXmlElem("p:nvPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GroupShapeNonVisual& CT_GroupShapeNonVisual::default_instance()
{
    if (!CT_GroupShapeNonVisual::default_instance_)
    {
        CT_GroupShapeNonVisual::default_instance_ = new CT_GroupShapeNonVisual();
    }
    return *CT_GroupShapeNonVisual::default_instance_;
}

CT_GroupShapeNonVisual* CT_GroupShapeNonVisual::default_instance_ = NULL;

// CT_GroupShape
CT_GroupShape::CT_GroupShape()
    :m_has_nvGrpSpPr(false),
     m_nvGrpSpPr(NULL),
     m_has_grpSpPr(false),
     m_grpSpPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_GroupShape::~CT_GroupShape()
{
    clear();
}
bool CT_GroupShape::has_nvGrpSpPr() const
{
    return m_has_nvGrpSpPr;
}

CT_GroupShapeNonVisual* CT_GroupShape::mutable_nvGrpSpPr()
{
    m_has_nvGrpSpPr = true;
    if (!m_nvGrpSpPr)
    {
        m_nvGrpSpPr = new CT_GroupShapeNonVisual();
    }
    return m_nvGrpSpPr;
}

const CT_GroupShapeNonVisual& CT_GroupShape::get_nvGrpSpPr() const
{
    if (m_nvGrpSpPr)
    {
        return *m_nvGrpSpPr;
    }
    return CT_GroupShapeNonVisual::default_instance();
}

bool CT_GroupShape::has_grpSpPr() const
{
    return m_has_grpSpPr;
}

ns_a::CT_GroupShapeProperties* CT_GroupShape::mutable_grpSpPr()
{
    m_has_grpSpPr = true;
    if (!m_grpSpPr)
    {
        m_grpSpPr = new ns_a::CT_GroupShapeProperties();
    }
    return m_grpSpPr;
}

const ns_a::CT_GroupShapeProperties& CT_GroupShape::get_grpSpPr() const
{
    if (m_grpSpPr)
    {
        return *m_grpSpPr;
    }
    return ns_a::CT_GroupShapeProperties::default_instance();
}

CT_Shape* CT_GroupShape::add_sp()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Shape* pNewChild = pChildGroup->mutable_sp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_GroupShape* CT_GroupShape::add_grpSp()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GroupShape* pNewChild = pChildGroup->mutable_grpSp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_GraphicalObjectFrame* CT_GroupShape::add_graphicFrame()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_GraphicalObjectFrame* pNewChild = pChildGroup->mutable_graphicFrame();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Connector* CT_GroupShape::add_cxnSp()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Connector* pNewChild = pChildGroup->mutable_cxnSp();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Picture* CT_GroupShape::add_pic()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Picture* pNewChild = pChildGroup->mutable_pic();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_Rel* CT_GroupShape::add_contentPart()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Rel* pNewChild = pChildGroup->mutable_contentPart();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

bool CT_GroupShape::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_GroupShape::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_GroupShape::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_GroupShape::clear()
{
    m_has_nvGrpSpPr = false;

    if (m_nvGrpSpPr)
    {
        delete m_nvGrpSpPr;
        m_nvGrpSpPr = NULL;
    }


    m_has_grpSpPr = false;

    if (m_grpSpPr)
    {
        delete m_grpSpPr;
        m_grpSpPr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_GroupShape::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_nvGrpSpPr);


    assert(m_has_grpSpPr);


    if (m_has_nvGrpSpPr)
    {
        m_nvGrpSpPr->toXmlElem("p:nvGrpSpPr", "", _outStream);
    }


    if (m_has_grpSpPr)
    {
        m_grpSpPr->toXmlElem("p:grpSpPr", "", _outStream);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sp())
            {
                (*iter)->get_sp().toXmlElem("p:sp", "", _outStream);
            }


            else if ((*iter)->has_grpSp())
            {
                (*iter)->get_grpSp().toXmlElem("p:grpSp", "", _outStream);
            }


            else if ((*iter)->has_graphicFrame())
            {
                (*iter)->get_graphicFrame().toXmlElem("p:graphicFrame", "", _outStream);
            }


            else if ((*iter)->has_cxnSp())
            {
                (*iter)->get_cxnSp().toXmlElem("p:cxnSp", "", _outStream);
            }


            else if ((*iter)->has_pic())
            {
                (*iter)->get_pic().toXmlElem("p:pic", "", _outStream);
            }


            else if ((*iter)->has_contentPart())
            {
                (*iter)->get_contentPart().toXmlElem("p:contentPart", "", _outStream);
            }


        }
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GroupShape& CT_GroupShape::default_instance()
{
    if (!CT_GroupShape::default_instance_)
    {
        CT_GroupShape::default_instance_ = new CT_GroupShape();
    }
    return *CT_GroupShape::default_instance_;
}


// CT_GroupShape::ChildGroup_1
CT_GroupShape::ChildGroup_1::ChildGroup_1()
    :m_has_sp(false),
     m_sp(NULL),
     m_has_grpSp(false),
     m_grpSp(NULL),
     m_has_graphicFrame(false),
     m_graphicFrame(NULL),
     m_has_cxnSp(false),
     m_cxnSp(NULL),
     m_has_pic(false),
     m_pic(NULL),
     m_has_contentPart(false),
     m_contentPart(NULL)
{
}
bool CT_GroupShape::ChildGroup_1::has_sp() const
{
    return m_has_sp;
}

CT_Shape* CT_GroupShape::ChildGroup_1::mutable_sp()
{

    m_has_grpSp = false;

    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;

    m_has_graphicFrame = false;

    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;

    m_has_cxnSp = false;

    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;

    m_has_pic = false;

    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;

    m_has_contentPart = false;

    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;

    m_has_sp = true;
    if (!m_sp)
    {
        m_sp = new CT_Shape();
    }
    return m_sp;
}

const CT_Shape& CT_GroupShape::ChildGroup_1::get_sp() const
{
    if (m_sp)
    {
        return *m_sp;
    }
    return CT_Shape::default_instance();
}

bool CT_GroupShape::ChildGroup_1::has_grpSp() const
{
    return m_has_grpSp;
}

CT_GroupShape* CT_GroupShape::ChildGroup_1::mutable_grpSp()
{

    m_has_sp = false;

    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;

    m_has_graphicFrame = false;

    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;

    m_has_cxnSp = false;

    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;

    m_has_pic = false;

    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;

    m_has_contentPart = false;

    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;

    m_has_grpSp = true;
    if (!m_grpSp)
    {
        m_grpSp = new CT_GroupShape();
    }
    return m_grpSp;
}

const CT_GroupShape& CT_GroupShape::ChildGroup_1::get_grpSp() const
{
    if (m_grpSp)
    {
        return *m_grpSp;
    }
    return CT_GroupShape::default_instance();
}

bool CT_GroupShape::ChildGroup_1::has_graphicFrame() const
{
    return m_has_graphicFrame;
}

CT_GraphicalObjectFrame* CT_GroupShape::ChildGroup_1::mutable_graphicFrame()
{

    m_has_sp = false;

    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;

    m_has_grpSp = false;

    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;

    m_has_cxnSp = false;

    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;

    m_has_pic = false;

    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;

    m_has_contentPart = false;

    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;

    m_has_graphicFrame = true;
    if (!m_graphicFrame)
    {
        m_graphicFrame = new CT_GraphicalObjectFrame();
    }
    return m_graphicFrame;
}

const CT_GraphicalObjectFrame& CT_GroupShape::ChildGroup_1::get_graphicFrame() const
{
    if (m_graphicFrame)
    {
        return *m_graphicFrame;
    }
    return CT_GraphicalObjectFrame::default_instance();
}

bool CT_GroupShape::ChildGroup_1::has_cxnSp() const
{
    return m_has_cxnSp;
}

CT_Connector* CT_GroupShape::ChildGroup_1::mutable_cxnSp()
{

    m_has_sp = false;

    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;

    m_has_grpSp = false;

    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;

    m_has_graphicFrame = false;

    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;

    m_has_pic = false;

    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;

    m_has_contentPart = false;

    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;

    m_has_cxnSp = true;
    if (!m_cxnSp)
    {
        m_cxnSp = new CT_Connector();
    }
    return m_cxnSp;
}

const CT_Connector& CT_GroupShape::ChildGroup_1::get_cxnSp() const
{
    if (m_cxnSp)
    {
        return *m_cxnSp;
    }
    return CT_Connector::default_instance();
}

bool CT_GroupShape::ChildGroup_1::has_pic() const
{
    return m_has_pic;
}

CT_Picture* CT_GroupShape::ChildGroup_1::mutable_pic()
{

    m_has_sp = false;

    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;

    m_has_grpSp = false;

    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;

    m_has_graphicFrame = false;

    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;

    m_has_cxnSp = false;

    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;

    m_has_contentPart = false;

    if (m_contentPart)
    {
        delete m_contentPart;
        m_contentPart = NULL;
    }
    ;

    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
}

const CT_Picture& CT_GroupShape::ChildGroup_1::get_pic() const
{
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
}

bool CT_GroupShape::ChildGroup_1::has_contentPart() const
{
    return m_has_contentPart;
}

CT_Rel* CT_GroupShape::ChildGroup_1::mutable_contentPart()
{

    m_has_sp = false;

    if (m_sp)
    {
        delete m_sp;
        m_sp = NULL;
    }
    ;

    m_has_grpSp = false;

    if (m_grpSp)
    {
        delete m_grpSp;
        m_grpSp = NULL;
    }
    ;

    m_has_graphicFrame = false;

    if (m_graphicFrame)
    {
        delete m_graphicFrame;
        m_graphicFrame = NULL;
    }
    ;

    m_has_cxnSp = false;

    if (m_cxnSp)
    {
        delete m_cxnSp;
        m_cxnSp = NULL;
    }
    ;

    m_has_pic = false;

    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }
    ;

    m_has_contentPart = true;
    if (!m_contentPart)
    {
        m_contentPart = new CT_Rel();
    }
    return m_contentPart;
}

const CT_Rel& CT_GroupShape::ChildGroup_1::get_contentPart() const
{
    if (m_contentPart)
    {
        return *m_contentPart;
    }
    return CT_Rel::default_instance();
}

CT_GroupShape* CT_GroupShape::default_instance_ = NULL;

// CT_Rel
CT_Rel::CT_Rel()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_Rel::~CT_Rel()
{
    clear();
}
void CT_Rel::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }

}

void CT_Rel::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Rel& CT_Rel::default_instance()
{
    if (!CT_Rel::default_instance_)
    {
        CT_Rel::default_instance_ = new CT_Rel();
    }
    return *CT_Rel::default_instance_;
}

bool CT_Rel::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_Rel::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_Rel::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_Rel* CT_Rel::default_instance_ = NULL;

// CT_BackgroundProperties
CT_BackgroundProperties::CT_BackgroundProperties()
    :m_has_a_noFill(false),
     m_a_noFill(NULL),
     m_has_a_solidFill(false),
     m_a_solidFill(NULL),
     m_has_a_gradFill(false),
     m_a_gradFill(NULL),
     m_has_a_blipFill(false),
     m_a_blipFill(NULL),
     m_has_a_pattFill(false),
     m_a_pattFill(NULL),
     m_has_a_grpFill(false),
     m_a_grpFill(NULL),
     m_has_a_effectLst(false),
     m_a_effectLst(NULL),
     m_has_a_effectDag(false),
     m_a_effectDag(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_shadeToTitle_attr(false),
     m_shadeToTitle_attr(false)
{
}
CT_BackgroundProperties::~CT_BackgroundProperties()
{
    clear();
}
bool CT_BackgroundProperties::has_a_noFill() const
{
    return m_has_a_noFill;
}

ns_a::CT_NoFillProperties* CT_BackgroundProperties::mutable_a_noFill()
{

    m_has_a_solidFill = false;

    if (m_a_solidFill)
    {
        delete m_a_solidFill;
        m_a_solidFill = NULL;
    }
    ;

    m_has_a_gradFill = false;

    if (m_a_gradFill)
    {
        delete m_a_gradFill;
        m_a_gradFill = NULL;
    }
    ;

    m_has_a_blipFill = false;

    if (m_a_blipFill)
    {
        delete m_a_blipFill;
        m_a_blipFill = NULL;
    }
    ;

    m_has_a_pattFill = false;

    if (m_a_pattFill)
    {
        delete m_a_pattFill;
        m_a_pattFill = NULL;
    }
    ;

    m_has_a_grpFill = false;

    if (m_a_grpFill)
    {
        delete m_a_grpFill;
        m_a_grpFill = NULL;
    }
    ;

    m_has_a_noFill = true;
    if (!m_a_noFill)
    {
        m_a_noFill = new ns_a::CT_NoFillProperties();
    }
    return m_a_noFill;
}

const ns_a::CT_NoFillProperties& CT_BackgroundProperties::get_a_noFill() const
{
    if (m_a_noFill)
    {
        return *m_a_noFill;
    }
    return ns_a::CT_NoFillProperties::default_instance();
}

bool CT_BackgroundProperties::has_a_solidFill() const
{
    return m_has_a_solidFill;
}

ns_a::CT_SolidColorFillProperties* CT_BackgroundProperties::mutable_a_solidFill()
{

    m_has_a_noFill = false;

    if (m_a_noFill)
    {
        delete m_a_noFill;
        m_a_noFill = NULL;
    }
    ;

    m_has_a_gradFill = false;

    if (m_a_gradFill)
    {
        delete m_a_gradFill;
        m_a_gradFill = NULL;
    }
    ;

    m_has_a_blipFill = false;

    if (m_a_blipFill)
    {
        delete m_a_blipFill;
        m_a_blipFill = NULL;
    }
    ;

    m_has_a_pattFill = false;

    if (m_a_pattFill)
    {
        delete m_a_pattFill;
        m_a_pattFill = NULL;
    }
    ;

    m_has_a_grpFill = false;

    if (m_a_grpFill)
    {
        delete m_a_grpFill;
        m_a_grpFill = NULL;
    }
    ;

    m_has_a_solidFill = true;
    if (!m_a_solidFill)
    {
        m_a_solidFill = new ns_a::CT_SolidColorFillProperties();
    }
    return m_a_solidFill;
}

const ns_a::CT_SolidColorFillProperties& CT_BackgroundProperties::get_a_solidFill() const
{
    if (m_a_solidFill)
    {
        return *m_a_solidFill;
    }
    return ns_a::CT_SolidColorFillProperties::default_instance();
}

bool CT_BackgroundProperties::has_a_gradFill() const
{
    return m_has_a_gradFill;
}

ns_a::CT_GradientFillProperties* CT_BackgroundProperties::mutable_a_gradFill()
{

    m_has_a_noFill = false;

    if (m_a_noFill)
    {
        delete m_a_noFill;
        m_a_noFill = NULL;
    }
    ;

    m_has_a_solidFill = false;

    if (m_a_solidFill)
    {
        delete m_a_solidFill;
        m_a_solidFill = NULL;
    }
    ;

    m_has_a_blipFill = false;

    if (m_a_blipFill)
    {
        delete m_a_blipFill;
        m_a_blipFill = NULL;
    }
    ;

    m_has_a_pattFill = false;

    if (m_a_pattFill)
    {
        delete m_a_pattFill;
        m_a_pattFill = NULL;
    }
    ;

    m_has_a_grpFill = false;

    if (m_a_grpFill)
    {
        delete m_a_grpFill;
        m_a_grpFill = NULL;
    }
    ;

    m_has_a_gradFill = true;
    if (!m_a_gradFill)
    {
        m_a_gradFill = new ns_a::CT_GradientFillProperties();
    }
    return m_a_gradFill;
}

const ns_a::CT_GradientFillProperties& CT_BackgroundProperties::get_a_gradFill() const
{
    if (m_a_gradFill)
    {
        return *m_a_gradFill;
    }
    return ns_a::CT_GradientFillProperties::default_instance();
}

bool CT_BackgroundProperties::has_a_blipFill() const
{
    return m_has_a_blipFill;
}

ns_a::CT_BlipFillProperties* CT_BackgroundProperties::mutable_a_blipFill()
{

    m_has_a_noFill = false;

    if (m_a_noFill)
    {
        delete m_a_noFill;
        m_a_noFill = NULL;
    }
    ;

    m_has_a_solidFill = false;

    if (m_a_solidFill)
    {
        delete m_a_solidFill;
        m_a_solidFill = NULL;
    }
    ;

    m_has_a_gradFill = false;

    if (m_a_gradFill)
    {
        delete m_a_gradFill;
        m_a_gradFill = NULL;
    }
    ;

    m_has_a_pattFill = false;

    if (m_a_pattFill)
    {
        delete m_a_pattFill;
        m_a_pattFill = NULL;
    }
    ;

    m_has_a_grpFill = false;

    if (m_a_grpFill)
    {
        delete m_a_grpFill;
        m_a_grpFill = NULL;
    }
    ;

    m_has_a_blipFill = true;
    if (!m_a_blipFill)
    {
        m_a_blipFill = new ns_a::CT_BlipFillProperties();
    }
    return m_a_blipFill;
}

const ns_a::CT_BlipFillProperties& CT_BackgroundProperties::get_a_blipFill() const
{
    if (m_a_blipFill)
    {
        return *m_a_blipFill;
    }
    return ns_a::CT_BlipFillProperties::default_instance();
}

bool CT_BackgroundProperties::has_a_pattFill() const
{
    return m_has_a_pattFill;
}

ns_a::CT_PatternFillProperties* CT_BackgroundProperties::mutable_a_pattFill()
{

    m_has_a_noFill = false;

    if (m_a_noFill)
    {
        delete m_a_noFill;
        m_a_noFill = NULL;
    }
    ;

    m_has_a_solidFill = false;

    if (m_a_solidFill)
    {
        delete m_a_solidFill;
        m_a_solidFill = NULL;
    }
    ;

    m_has_a_gradFill = false;

    if (m_a_gradFill)
    {
        delete m_a_gradFill;
        m_a_gradFill = NULL;
    }
    ;

    m_has_a_blipFill = false;

    if (m_a_blipFill)
    {
        delete m_a_blipFill;
        m_a_blipFill = NULL;
    }
    ;

    m_has_a_grpFill = false;

    if (m_a_grpFill)
    {
        delete m_a_grpFill;
        m_a_grpFill = NULL;
    }
    ;

    m_has_a_pattFill = true;
    if (!m_a_pattFill)
    {
        m_a_pattFill = new ns_a::CT_PatternFillProperties();
    }
    return m_a_pattFill;
}

const ns_a::CT_PatternFillProperties& CT_BackgroundProperties::get_a_pattFill() const
{
    if (m_a_pattFill)
    {
        return *m_a_pattFill;
    }
    return ns_a::CT_PatternFillProperties::default_instance();
}

bool CT_BackgroundProperties::has_a_grpFill() const
{
    return m_has_a_grpFill;
}

ns_a::CT_GroupFillProperties* CT_BackgroundProperties::mutable_a_grpFill()
{

    m_has_a_noFill = false;

    if (m_a_noFill)
    {
        delete m_a_noFill;
        m_a_noFill = NULL;
    }
    ;

    m_has_a_solidFill = false;

    if (m_a_solidFill)
    {
        delete m_a_solidFill;
        m_a_solidFill = NULL;
    }
    ;

    m_has_a_gradFill = false;

    if (m_a_gradFill)
    {
        delete m_a_gradFill;
        m_a_gradFill = NULL;
    }
    ;

    m_has_a_blipFill = false;

    if (m_a_blipFill)
    {
        delete m_a_blipFill;
        m_a_blipFill = NULL;
    }
    ;

    m_has_a_pattFill = false;

    if (m_a_pattFill)
    {
        delete m_a_pattFill;
        m_a_pattFill = NULL;
    }
    ;

    m_has_a_grpFill = true;
    if (!m_a_grpFill)
    {
        m_a_grpFill = new ns_a::CT_GroupFillProperties();
    }
    return m_a_grpFill;
}

const ns_a::CT_GroupFillProperties& CT_BackgroundProperties::get_a_grpFill() const
{
    if (m_a_grpFill)
    {
        return *m_a_grpFill;
    }
    return ns_a::CT_GroupFillProperties::default_instance();
}

bool CT_BackgroundProperties::has_a_effectLst() const
{
    return m_has_a_effectLst;
}

ns_a::CT_EffectList* CT_BackgroundProperties::mutable_a_effectLst()
{

    m_has_a_effectDag = false;

    if (m_a_effectDag)
    {
        delete m_a_effectDag;
        m_a_effectDag = NULL;
    }
    ;

    m_has_a_effectLst = true;
    if (!m_a_effectLst)
    {
        m_a_effectLst = new ns_a::CT_EffectList();
    }
    return m_a_effectLst;
}

const ns_a::CT_EffectList& CT_BackgroundProperties::get_a_effectLst() const
{
    if (m_a_effectLst)
    {
        return *m_a_effectLst;
    }
    return ns_a::CT_EffectList::default_instance();
}

bool CT_BackgroundProperties::has_a_effectDag() const
{
    return m_has_a_effectDag;
}

ns_a::CT_EffectContainer* CT_BackgroundProperties::mutable_a_effectDag()
{

    m_has_a_effectLst = false;

    if (m_a_effectLst)
    {
        delete m_a_effectLst;
        m_a_effectLst = NULL;
    }
    ;

    m_has_a_effectDag = true;
    if (!m_a_effectDag)
    {
        m_a_effectDag = new ns_a::CT_EffectContainer();
    }
    return m_a_effectDag;
}

const ns_a::CT_EffectContainer& CT_BackgroundProperties::get_a_effectDag() const
{
    if (m_a_effectDag)
    {
        return *m_a_effectDag;
    }
    return ns_a::CT_EffectContainer::default_instance();
}

bool CT_BackgroundProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_BackgroundProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_BackgroundProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_BackgroundProperties::clear()
{
    m_has_shadeToTitle_attr = false;
    m_shadeToTitle_attr = false;

    m_has_a_noFill = false;

    if (m_a_noFill)
    {
        delete m_a_noFill;
        m_a_noFill = NULL;
    }


    m_has_a_solidFill = false;

    if (m_a_solidFill)
    {
        delete m_a_solidFill;
        m_a_solidFill = NULL;
    }


    m_has_a_gradFill = false;

    if (m_a_gradFill)
    {
        delete m_a_gradFill;
        m_a_gradFill = NULL;
    }


    m_has_a_blipFill = false;

    if (m_a_blipFill)
    {
        delete m_a_blipFill;
        m_a_blipFill = NULL;
    }


    m_has_a_pattFill = false;

    if (m_a_pattFill)
    {
        delete m_a_pattFill;
        m_a_pattFill = NULL;
    }


    m_has_a_grpFill = false;

    if (m_a_grpFill)
    {
        delete m_a_grpFill;
        m_a_grpFill = NULL;
    }


    m_has_a_effectLst = false;

    if (m_a_effectLst)
    {
        delete m_a_effectLst;
        m_a_effectLst = NULL;
    }


    m_has_a_effectDag = false;

    if (m_a_effectDag)
    {
        delete m_a_effectDag;
        m_a_effectDag = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_BackgroundProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_shadeToTitle_attr)
    {
        _outStream << " " << "shadeToTitle" << "=\"" << XSD::XMLBooleanStr(m_shadeToTitle_attr) << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[6] = {m_has_a_noFill, m_has_a_solidFill, m_has_a_gradFill, m_has_a_blipFill, m_has_a_pattFill, m_has_a_grpFill};
        int cnt = count(elemHasValueList, elemHasValueList + 6, true);
        assert(cnt == 1);
    }


    if (m_has_a_noFill)
    {
        m_a_noFill->toXmlElem("a:noFill", "", _outStream);
    }


    if (m_has_a_solidFill)
    {
        m_a_solidFill->toXmlElem("a:solidFill", "", _outStream);
    }


    if (m_has_a_gradFill)
    {
        m_a_gradFill->toXmlElem("a:gradFill", "", _outStream);
    }


    if (m_has_a_blipFill)
    {
        m_a_blipFill->toXmlElem("a:blipFill", "", _outStream);
    }


    if (m_has_a_pattFill)
    {
        m_a_pattFill->toXmlElem("a:pattFill", "", _outStream);
    }


    if (m_has_a_grpFill)
    {
        m_a_grpFill->toXmlElem("a:grpFill", "", _outStream);
    }

    {
        bool elemHasValueList[2] = {m_has_a_effectLst, m_has_a_effectDag};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_a_effectLst)
    {
        m_a_effectLst->toXmlElem("a:effectLst", "", _outStream);
    }


    if (m_has_a_effectDag)
    {
        m_a_effectDag->toXmlElem("a:effectDag", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_BackgroundProperties& CT_BackgroundProperties::default_instance()
{
    if (!CT_BackgroundProperties::default_instance_)
    {
        CT_BackgroundProperties::default_instance_ = new CT_BackgroundProperties();
    }
    return *CT_BackgroundProperties::default_instance_;
}

bool CT_BackgroundProperties::has_shadeToTitle_attr() const
{
    return m_has_shadeToTitle_attr;
}

void CT_BackgroundProperties::set_shadeToTitle_attr(const XSD::boolean_& _shadeToTitle_attr)
{
    m_has_shadeToTitle_attr = true;
    m_shadeToTitle_attr = _shadeToTitle_attr;
}

const XSD::boolean_& CT_BackgroundProperties::get_shadeToTitle_attr() const
{
    return m_shadeToTitle_attr;
}

CT_BackgroundProperties* CT_BackgroundProperties::default_instance_ = NULL;

// CT_Background
CT_Background::CT_Background()
    :m_has_bgPr(false),
     m_bgPr(NULL),
     m_has_bgRef(false),
     m_bgRef(NULL),
     m_has_bwMode_attr(false),
     m_bwMode_attr(NULL)
{
}
CT_Background::~CT_Background()
{
    clear();
}
bool CT_Background::has_bgPr() const
{
    return m_has_bgPr;
}

CT_BackgroundProperties* CT_Background::mutable_bgPr()
{

    m_has_bgRef = false;

    if (m_bgRef)
    {
        delete m_bgRef;
        m_bgRef = NULL;
    }
    ;

    m_has_bgPr = true;
    if (!m_bgPr)
    {
        m_bgPr = new CT_BackgroundProperties();
    }
    return m_bgPr;
}

const CT_BackgroundProperties& CT_Background::get_bgPr() const
{
    if (m_bgPr)
    {
        return *m_bgPr;
    }
    return CT_BackgroundProperties::default_instance();
}

bool CT_Background::has_bgRef() const
{
    return m_has_bgRef;
}

ns_a::CT_StyleMatrixReference* CT_Background::mutable_bgRef()
{

    m_has_bgPr = false;

    if (m_bgPr)
    {
        delete m_bgPr;
        m_bgPr = NULL;
    }
    ;

    m_has_bgRef = true;
    if (!m_bgRef)
    {
        m_bgRef = new ns_a::CT_StyleMatrixReference();
    }
    return m_bgRef;
}

const ns_a::CT_StyleMatrixReference& CT_Background::get_bgRef() const
{
    if (m_bgRef)
    {
        return *m_bgRef;
    }
    return ns_a::CT_StyleMatrixReference::default_instance();
}

void CT_Background::clear()
{
    m_has_bwMode_attr = false;

    if (m_bwMode_attr)
    {
        delete m_bwMode_attr;
        m_bwMode_attr = NULL;
    }


    m_has_bgPr = false;

    if (m_bgPr)
    {
        delete m_bgPr;
        m_bgPr = NULL;
    }


    m_has_bgRef = false;

    if (m_bgRef)
    {
        delete m_bgRef;
        m_bgRef = NULL;
    }

}

void CT_Background::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_bwMode_attr)
    {
        m_bwMode_attr->toXmlAttr("bwMode", _outStream);
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_bgPr, m_has_bgRef};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_bgPr)
    {
        m_bgPr->toXmlElem("p:bgPr", "", _outStream);
    }


    if (m_has_bgRef)
    {
        m_bgRef->toXmlElem("p:bgRef", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Background& CT_Background::default_instance()
{
    if (!CT_Background::default_instance_)
    {
        CT_Background::default_instance_ = new CT_Background();
    }
    return *CT_Background::default_instance_;
}

bool CT_Background::has_bwMode_attr() const
{
    return m_has_bwMode_attr;
}

void CT_Background::set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr)
{
    m_has_bwMode_attr = true;
    m_bwMode_attr = new ns_a::ST_BlackWhiteMode(_bwMode_attr);
}

const ns_a::ST_BlackWhiteMode& CT_Background::get_bwMode_attr() const
{
    if (m_bwMode_attr)
    {
        return *m_bwMode_attr;
    }
    return ns_a::ST_BlackWhiteMode::default_instance();
}

CT_Background* CT_Background::default_instance_ = NULL;

// CT_CommonSlideData
CT_CommonSlideData::CT_CommonSlideData()
    :m_has_bg(false),
     m_bg(NULL),
     m_has_spTree(false),
     m_spTree(NULL),
     m_has_custDataLst(false),
     m_custDataLst(NULL),
     m_has_controls(false),
     m_controls(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_name_attr(false),
     m_name_attr("")
{
}
CT_CommonSlideData::~CT_CommonSlideData()
{
    clear();
}
bool CT_CommonSlideData::has_bg() const
{
    return m_has_bg;
}

CT_Background* CT_CommonSlideData::mutable_bg()
{
    m_has_bg = true;
    if (!m_bg)
    {
        m_bg = new CT_Background();
    }
    return m_bg;
}

const CT_Background& CT_CommonSlideData::get_bg() const
{
    if (m_bg)
    {
        return *m_bg;
    }
    return CT_Background::default_instance();
}

bool CT_CommonSlideData::has_spTree() const
{
    return m_has_spTree;
}

CT_GroupShape* CT_CommonSlideData::mutable_spTree()
{
    m_has_spTree = true;
    if (!m_spTree)
    {
        m_spTree = new CT_GroupShape();
    }
    return m_spTree;
}

const CT_GroupShape& CT_CommonSlideData::get_spTree() const
{
    if (m_spTree)
    {
        return *m_spTree;
    }
    return CT_GroupShape::default_instance();
}

bool CT_CommonSlideData::has_custDataLst() const
{
    return m_has_custDataLst;
}

CT_CustomerDataList* CT_CommonSlideData::mutable_custDataLst()
{
    m_has_custDataLst = true;
    if (!m_custDataLst)
    {
        m_custDataLst = new CT_CustomerDataList();
    }
    return m_custDataLst;
}

const CT_CustomerDataList& CT_CommonSlideData::get_custDataLst() const
{
    if (m_custDataLst)
    {
        return *m_custDataLst;
    }
    return CT_CustomerDataList::default_instance();
}

bool CT_CommonSlideData::has_controls() const
{
    return m_has_controls;
}

CT_ControlList* CT_CommonSlideData::mutable_controls()
{
    m_has_controls = true;
    if (!m_controls)
    {
        m_controls = new CT_ControlList();
    }
    return m_controls;
}

const CT_ControlList& CT_CommonSlideData::get_controls() const
{
    if (m_controls)
    {
        return *m_controls;
    }
    return CT_ControlList::default_instance();
}

bool CT_CommonSlideData::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_CommonSlideData::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_CommonSlideData::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_CommonSlideData::clear()
{
    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_bg = false;

    if (m_bg)
    {
        delete m_bg;
        m_bg = NULL;
    }


    m_has_spTree = false;

    if (m_spTree)
    {
        delete m_spTree;
        m_spTree = NULL;
    }


    m_has_custDataLst = false;

    if (m_custDataLst)
    {
        delete m_custDataLst;
        m_custDataLst = NULL;
    }


    m_has_controls = false;

    if (m_controls)
    {
        delete m_controls;
        m_controls = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_CommonSlideData::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }

    _outStream << ">";

    assert(m_has_spTree);


    if (m_has_bg)
    {
        m_bg->toXmlElem("p:bg", "", _outStream);
    }


    if (m_has_spTree)
    {
        m_spTree->toXmlElem("p:spTree", "", _outStream);
    }


    if (m_has_custDataLst)
    {
        m_custDataLst->toXmlElem("p:custDataLst", "", _outStream);
    }


    if (m_has_controls)
    {
        m_controls->toXmlElem("p:controls", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CommonSlideData& CT_CommonSlideData::default_instance()
{
    if (!CT_CommonSlideData::default_instance_)
    {
        CT_CommonSlideData::default_instance_ = new CT_CommonSlideData();
    }
    return *CT_CommonSlideData::default_instance_;
}

bool CT_CommonSlideData::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_CommonSlideData::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& CT_CommonSlideData::get_name_attr() const
{
    return m_name_attr;
}

CT_CommonSlideData* CT_CommonSlideData::default_instance_ = NULL;

// CT_Slide
CT_Slide::CT_Slide()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMapOvr(false),
     m_clrMapOvr(NULL),
     m_has_transition(false),
     m_transition(NULL),
     m_has_timing(false),
     m_timing(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showMasterSp_attr(false),
     m_showMasterSp_attr(false),
     m_has_showMasterPhAnim_attr(false),
     m_showMasterPhAnim_attr(false),
     m_has_show_attr(false),
     m_show_attr(false)
{
}
CT_Slide::~CT_Slide()
{
    clear();
}
bool CT_Slide::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* CT_Slide::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& CT_Slide::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool CT_Slide::has_clrMapOvr() const
{
    return m_has_clrMapOvr;
}

ns_a::CT_ColorMappingOverride* CT_Slide::mutable_clrMapOvr()
{
    m_has_clrMapOvr = true;
    if (!m_clrMapOvr)
    {
        m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
    }
    return m_clrMapOvr;
}

const ns_a::CT_ColorMappingOverride& CT_Slide::get_clrMapOvr() const
{
    if (m_clrMapOvr)
    {
        return *m_clrMapOvr;
    }
    return ns_a::CT_ColorMappingOverride::default_instance();
}

bool CT_Slide::has_transition() const
{
    return m_has_transition;
}

CT_SlideTransition* CT_Slide::mutable_transition()
{
    m_has_transition = true;
    if (!m_transition)
    {
        m_transition = new CT_SlideTransition();
    }
    return m_transition;
}

const CT_SlideTransition& CT_Slide::get_transition() const
{
    if (m_transition)
    {
        return *m_transition;
    }
    return CT_SlideTransition::default_instance();
}

bool CT_Slide::has_timing() const
{
    return m_has_timing;
}

CT_SlideTiming* CT_Slide::mutable_timing()
{
    m_has_timing = true;
    if (!m_timing)
    {
        m_timing = new CT_SlideTiming();
    }
    return m_timing;
}

const CT_SlideTiming& CT_Slide::get_timing() const
{
    if (m_timing)
    {
        return *m_timing;
    }
    return CT_SlideTiming::default_instance();
}

bool CT_Slide::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_Slide::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_Slide::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_Slide::clear()
{
    m_has_showMasterSp_attr = false;
    m_showMasterSp_attr = false;

    m_has_showMasterPhAnim_attr = false;
    m_showMasterPhAnim_attr = false;

    m_has_show_attr = false;
    m_show_attr = false;

    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMapOvr = false;

    if (m_clrMapOvr)
    {
        delete m_clrMapOvr;
        m_clrMapOvr = NULL;
    }


    m_has_transition = false;

    if (m_transition)
    {
        delete m_transition;
        m_transition = NULL;
    }


    m_has_timing = false;

    if (m_timing)
    {
        delete m_timing;
        m_timing = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_Slide::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showMasterSp_attr)
    {
        _outStream << " " << "showMasterSp" << "=\"" << XSD::XMLBooleanStr(m_showMasterSp_attr) << "\"";
    }



    if (m_has_showMasterPhAnim_attr)
    {
        _outStream << " " << "showMasterPhAnim" << "=\"" << XSD::XMLBooleanStr(m_showMasterPhAnim_attr) << "\"";
    }



    if (m_has_show_attr)
    {
        _outStream << " " << "show" << "=\"" << XSD::XMLBooleanStr(m_show_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cSld);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMapOvr)
    {
        m_clrMapOvr->toXmlElem("p:clrMapOvr", "", _outStream);
    }


    if (m_has_transition)
    {
        m_transition->toXmlElem("p:transition", "", _outStream);
    }


    if (m_has_timing)
    {
        m_timing->toXmlElem("p:timing", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Slide& CT_Slide::default_instance()
{
    if (!CT_Slide::default_instance_)
    {
        CT_Slide::default_instance_ = new CT_Slide();
    }
    return *CT_Slide::default_instance_;
}

bool CT_Slide::has_showMasterSp_attr() const
{
    return m_has_showMasterSp_attr;
}

void CT_Slide::set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr)
{
    m_has_showMasterSp_attr = true;
    m_showMasterSp_attr = _showMasterSp_attr;
}

const XSD::boolean_& CT_Slide::get_showMasterSp_attr() const
{
    return m_showMasterSp_attr;
}

bool CT_Slide::has_showMasterPhAnim_attr() const
{
    return m_has_showMasterPhAnim_attr;
}

void CT_Slide::set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr)
{
    m_has_showMasterPhAnim_attr = true;
    m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
}

const XSD::boolean_& CT_Slide::get_showMasterPhAnim_attr() const
{
    return m_showMasterPhAnim_attr;
}

bool CT_Slide::has_show_attr() const
{
    return m_has_show_attr;
}

void CT_Slide::set_show_attr(const XSD::boolean_& _show_attr)
{
    m_has_show_attr = true;
    m_show_attr = _show_attr;
}

const XSD::boolean_& CT_Slide::get_show_attr() const
{
    return m_show_attr;
}

CT_Slide* CT_Slide::default_instance_ = NULL;

// CT_SlideLayout
CT_SlideLayout::CT_SlideLayout()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMapOvr(false),
     m_clrMapOvr(NULL),
     m_has_transition(false),
     m_transition(NULL),
     m_has_timing(false),
     m_timing(NULL),
     m_has_hf(false),
     m_hf(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showMasterSp_attr(false),
     m_showMasterSp_attr(false),
     m_has_showMasterPhAnim_attr(false),
     m_showMasterPhAnim_attr(false),
     m_has_matchingName_attr(false),
     m_matchingName_attr(""),
     m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_preserve_attr(false),
     m_preserve_attr(false),
     m_has_userDrawn_attr(false),
     m_userDrawn_attr(false)
{
}
CT_SlideLayout::~CT_SlideLayout()
{
    clear();
}
bool CT_SlideLayout::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* CT_SlideLayout::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& CT_SlideLayout::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool CT_SlideLayout::has_clrMapOvr() const
{
    return m_has_clrMapOvr;
}

ns_a::CT_ColorMappingOverride* CT_SlideLayout::mutable_clrMapOvr()
{
    m_has_clrMapOvr = true;
    if (!m_clrMapOvr)
    {
        m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
    }
    return m_clrMapOvr;
}

const ns_a::CT_ColorMappingOverride& CT_SlideLayout::get_clrMapOvr() const
{
    if (m_clrMapOvr)
    {
        return *m_clrMapOvr;
    }
    return ns_a::CT_ColorMappingOverride::default_instance();
}

bool CT_SlideLayout::has_transition() const
{
    return m_has_transition;
}

CT_SlideTransition* CT_SlideLayout::mutable_transition()
{
    m_has_transition = true;
    if (!m_transition)
    {
        m_transition = new CT_SlideTransition();
    }
    return m_transition;
}

const CT_SlideTransition& CT_SlideLayout::get_transition() const
{
    if (m_transition)
    {
        return *m_transition;
    }
    return CT_SlideTransition::default_instance();
}

bool CT_SlideLayout::has_timing() const
{
    return m_has_timing;
}

CT_SlideTiming* CT_SlideLayout::mutable_timing()
{
    m_has_timing = true;
    if (!m_timing)
    {
        m_timing = new CT_SlideTiming();
    }
    return m_timing;
}

const CT_SlideTiming& CT_SlideLayout::get_timing() const
{
    if (m_timing)
    {
        return *m_timing;
    }
    return CT_SlideTiming::default_instance();
}

bool CT_SlideLayout::has_hf() const
{
    return m_has_hf;
}

CT_HeaderFooter* CT_SlideLayout::mutable_hf()
{
    m_has_hf = true;
    if (!m_hf)
    {
        m_hf = new CT_HeaderFooter();
    }
    return m_hf;
}

const CT_HeaderFooter& CT_SlideLayout::get_hf() const
{
    if (m_hf)
    {
        return *m_hf;
    }
    return CT_HeaderFooter::default_instance();
}

bool CT_SlideLayout::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_SlideLayout::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_SlideLayout::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_SlideLayout::clear()
{
    m_has_showMasterSp_attr = false;
    m_showMasterSp_attr = false;

    m_has_showMasterPhAnim_attr = false;
    m_showMasterPhAnim_attr = false;

    m_has_matchingName_attr = false;
    m_matchingName_attr.clear();

    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_preserve_attr = false;
    m_preserve_attr = false;

    m_has_userDrawn_attr = false;
    m_userDrawn_attr = false;

    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMapOvr = false;

    if (m_clrMapOvr)
    {
        delete m_clrMapOvr;
        m_clrMapOvr = NULL;
    }


    m_has_transition = false;

    if (m_transition)
    {
        delete m_transition;
        m_transition = NULL;
    }


    m_has_timing = false;

    if (m_timing)
    {
        delete m_timing;
        m_timing = NULL;
    }


    m_has_hf = false;

    if (m_hf)
    {
        delete m_hf;
        m_hf = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideLayout::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showMasterSp_attr)
    {
        _outStream << " " << "showMasterSp" << "=\"" << XSD::XMLBooleanStr(m_showMasterSp_attr) << "\"";
    }



    if (m_has_showMasterPhAnim_attr)
    {
        _outStream << " " << "showMasterPhAnim" << "=\"" << XSD::XMLBooleanStr(m_showMasterPhAnim_attr) << "\"";
    }



    if (m_has_matchingName_attr)
    {
        _outStream << " " << "matchingName" << "=\"" << m_matchingName_attr << "\"";
    }



    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_preserve_attr)
    {
        _outStream << " " << "preserve" << "=\"" << XSD::XMLBooleanStr(m_preserve_attr) << "\"";
    }



    if (m_has_userDrawn_attr)
    {
        _outStream << " " << "userDrawn" << "=\"" << XSD::XMLBooleanStr(m_userDrawn_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cSld);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMapOvr)
    {
        m_clrMapOvr->toXmlElem("p:clrMapOvr", "", _outStream);
    }


    if (m_has_transition)
    {
        m_transition->toXmlElem("p:transition", "", _outStream);
    }


    if (m_has_timing)
    {
        m_timing->toXmlElem("p:timing", "", _outStream);
    }


    if (m_has_hf)
    {
        m_hf->toXmlElem("p:hf", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideLayout& CT_SlideLayout::default_instance()
{
    if (!CT_SlideLayout::default_instance_)
    {
        CT_SlideLayout::default_instance_ = new CT_SlideLayout();
    }
    return *CT_SlideLayout::default_instance_;
}

bool CT_SlideLayout::has_showMasterSp_attr() const
{
    return m_has_showMasterSp_attr;
}

void CT_SlideLayout::set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr)
{
    m_has_showMasterSp_attr = true;
    m_showMasterSp_attr = _showMasterSp_attr;
}

const XSD::boolean_& CT_SlideLayout::get_showMasterSp_attr() const
{
    return m_showMasterSp_attr;
}

bool CT_SlideLayout::has_showMasterPhAnim_attr() const
{
    return m_has_showMasterPhAnim_attr;
}

void CT_SlideLayout::set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr)
{
    m_has_showMasterPhAnim_attr = true;
    m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
}

const XSD::boolean_& CT_SlideLayout::get_showMasterPhAnim_attr() const
{
    return m_showMasterPhAnim_attr;
}

bool CT_SlideLayout::has_matchingName_attr() const
{
    return m_has_matchingName_attr;
}

void CT_SlideLayout::set_matchingName_attr(const XSD::string_& _matchingName_attr)
{
    m_has_matchingName_attr = true;
    m_matchingName_attr = _matchingName_attr;
}

const XSD::string_& CT_SlideLayout::get_matchingName_attr() const
{
    return m_matchingName_attr;
}

bool CT_SlideLayout::has_type_attr() const
{
    return m_has_type_attr;
}

void CT_SlideLayout::set_type_attr(const ST_SlideLayoutType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_SlideLayoutType(_type_attr);
}

const ST_SlideLayoutType& CT_SlideLayout::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_SlideLayoutType::default_instance();
}

bool CT_SlideLayout::has_preserve_attr() const
{
    return m_has_preserve_attr;
}

void CT_SlideLayout::set_preserve_attr(const XSD::boolean_& _preserve_attr)
{
    m_has_preserve_attr = true;
    m_preserve_attr = _preserve_attr;
}

const XSD::boolean_& CT_SlideLayout::get_preserve_attr() const
{
    return m_preserve_attr;
}

bool CT_SlideLayout::has_userDrawn_attr() const
{
    return m_has_userDrawn_attr;
}

void CT_SlideLayout::set_userDrawn_attr(const XSD::boolean_& _userDrawn_attr)
{
    m_has_userDrawn_attr = true;
    m_userDrawn_attr = _userDrawn_attr;
}

const XSD::boolean_& CT_SlideLayout::get_userDrawn_attr() const
{
    return m_userDrawn_attr;
}

CT_SlideLayout* CT_SlideLayout::default_instance_ = NULL;

// CT_SlideMasterTextStyles
CT_SlideMasterTextStyles::CT_SlideMasterTextStyles()
    :m_has_titleStyle(false),
     m_titleStyle(NULL),
     m_has_bodyStyle(false),
     m_bodyStyle(NULL),
     m_has_otherStyle(false),
     m_otherStyle(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_SlideMasterTextStyles::~CT_SlideMasterTextStyles()
{
    clear();
}
bool CT_SlideMasterTextStyles::has_titleStyle() const
{
    return m_has_titleStyle;
}

ns_a::CT_TextListStyle* CT_SlideMasterTextStyles::mutable_titleStyle()
{
    m_has_titleStyle = true;
    if (!m_titleStyle)
    {
        m_titleStyle = new ns_a::CT_TextListStyle();
    }
    return m_titleStyle;
}

const ns_a::CT_TextListStyle& CT_SlideMasterTextStyles::get_titleStyle() const
{
    if (m_titleStyle)
    {
        return *m_titleStyle;
    }
    return ns_a::CT_TextListStyle::default_instance();
}

bool CT_SlideMasterTextStyles::has_bodyStyle() const
{
    return m_has_bodyStyle;
}

ns_a::CT_TextListStyle* CT_SlideMasterTextStyles::mutable_bodyStyle()
{
    m_has_bodyStyle = true;
    if (!m_bodyStyle)
    {
        m_bodyStyle = new ns_a::CT_TextListStyle();
    }
    return m_bodyStyle;
}

const ns_a::CT_TextListStyle& CT_SlideMasterTextStyles::get_bodyStyle() const
{
    if (m_bodyStyle)
    {
        return *m_bodyStyle;
    }
    return ns_a::CT_TextListStyle::default_instance();
}

bool CT_SlideMasterTextStyles::has_otherStyle() const
{
    return m_has_otherStyle;
}

ns_a::CT_TextListStyle* CT_SlideMasterTextStyles::mutable_otherStyle()
{
    m_has_otherStyle = true;
    if (!m_otherStyle)
    {
        m_otherStyle = new ns_a::CT_TextListStyle();
    }
    return m_otherStyle;
}

const ns_a::CT_TextListStyle& CT_SlideMasterTextStyles::get_otherStyle() const
{
    if (m_otherStyle)
    {
        return *m_otherStyle;
    }
    return ns_a::CT_TextListStyle::default_instance();
}

bool CT_SlideMasterTextStyles::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SlideMasterTextStyles::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SlideMasterTextStyles::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SlideMasterTextStyles::clear()
{
    m_has_titleStyle = false;

    if (m_titleStyle)
    {
        delete m_titleStyle;
        m_titleStyle = NULL;
    }


    m_has_bodyStyle = false;

    if (m_bodyStyle)
    {
        delete m_bodyStyle;
        m_bodyStyle = NULL;
    }


    m_has_otherStyle = false;

    if (m_otherStyle)
    {
        delete m_otherStyle;
        m_otherStyle = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideMasterTextStyles::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";


    if (m_has_titleStyle)
    {
        m_titleStyle->toXmlElem("p:titleStyle", "", _outStream);
    }


    if (m_has_bodyStyle)
    {
        m_bodyStyle->toXmlElem("p:bodyStyle", "", _outStream);
    }


    if (m_has_otherStyle)
    {
        m_otherStyle->toXmlElem("p:otherStyle", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideMasterTextStyles& CT_SlideMasterTextStyles::default_instance()
{
    if (!CT_SlideMasterTextStyles::default_instance_)
    {
        CT_SlideMasterTextStyles::default_instance_ = new CT_SlideMasterTextStyles();
    }
    return *CT_SlideMasterTextStyles::default_instance_;
}

CT_SlideMasterTextStyles* CT_SlideMasterTextStyles::default_instance_ = NULL;

// CT_SlideLayoutIdListEntry
CT_SlideLayoutIdListEntry::CT_SlideLayoutIdListEntry()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_id_attr(false),
     m_id_attr(NULL),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_SlideLayoutIdListEntry::~CT_SlideLayoutIdListEntry()
{
    clear();
}
bool CT_SlideLayoutIdListEntry::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SlideLayoutIdListEntry::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SlideLayoutIdListEntry::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SlideLayoutIdListEntry::clear()
{
    m_has_id_attr = false;

    if (m_id_attr)
    {
        delete m_id_attr;
        m_id_attr = NULL;
    }


    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideLayoutIdListEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_id_attr)
    {
        m_id_attr->toXmlAttr("id", _outStream);
    }


    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideLayoutIdListEntry& CT_SlideLayoutIdListEntry::default_instance()
{
    if (!CT_SlideLayoutIdListEntry::default_instance_)
    {
        CT_SlideLayoutIdListEntry::default_instance_ = new CT_SlideLayoutIdListEntry();
    }
    return *CT_SlideLayoutIdListEntry::default_instance_;
}

bool CT_SlideLayoutIdListEntry::has_id_attr() const
{
    return m_has_id_attr;
}

void CT_SlideLayoutIdListEntry::set_id_attr(const ST_SlideLayoutId& _id_attr)
{
    m_has_id_attr = true;
    m_id_attr = new ST_SlideLayoutId(_id_attr);
}

const ST_SlideLayoutId& CT_SlideLayoutIdListEntry::get_id_attr() const
{
    if (m_id_attr)
    {
        return *m_id_attr;
    }
    return ST_SlideLayoutId::default_instance();
}

bool CT_SlideLayoutIdListEntry::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_SlideLayoutIdListEntry::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_SlideLayoutIdListEntry::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_SlideLayoutIdListEntry* CT_SlideLayoutIdListEntry::default_instance_ = NULL;

// CT_SlideLayoutIdList
CT_SlideLayoutIdList::CT_SlideLayoutIdList()

{
}
CT_SlideLayoutIdList::~CT_SlideLayoutIdList()
{
    clear();
}
CT_SlideLayoutIdListEntry* CT_SlideLayoutIdList::add_sldLayoutId()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SlideLayoutIdListEntry* pNewChild = pChildGroup->mutable_sldLayoutId();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_SlideLayoutIdList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_SlideLayoutIdList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sldLayoutId())
            {
                (*iter)->get_sldLayoutId().toXmlElem("p:sldLayoutId", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideLayoutIdList& CT_SlideLayoutIdList::default_instance()
{
    if (!CT_SlideLayoutIdList::default_instance_)
    {
        CT_SlideLayoutIdList::default_instance_ = new CT_SlideLayoutIdList();
    }
    return *CT_SlideLayoutIdList::default_instance_;
}


// CT_SlideLayoutIdList::ChildGroup_1
CT_SlideLayoutIdList::ChildGroup_1::ChildGroup_1()
    :m_has_sldLayoutId(false),
     m_sldLayoutId(NULL)
{
}
bool CT_SlideLayoutIdList::ChildGroup_1::has_sldLayoutId() const
{
    return m_has_sldLayoutId;
}

CT_SlideLayoutIdListEntry* CT_SlideLayoutIdList::ChildGroup_1::mutable_sldLayoutId()
{

    m_has_sldLayoutId = true;
    if (!m_sldLayoutId)
    {
        m_sldLayoutId = new CT_SlideLayoutIdListEntry();
    }
    return m_sldLayoutId;
}

const CT_SlideLayoutIdListEntry& CT_SlideLayoutIdList::ChildGroup_1::get_sldLayoutId() const
{
    if (m_sldLayoutId)
    {
        return *m_sldLayoutId;
    }
    return CT_SlideLayoutIdListEntry::default_instance();
}

CT_SlideLayoutIdList* CT_SlideLayoutIdList::default_instance_ = NULL;

// CT_SlideMaster
CT_SlideMaster::CT_SlideMaster()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMap(false),
     m_clrMap(NULL),
     m_has_sldLayoutIdLst(false),
     m_sldLayoutIdLst(NULL),
     m_has_transition(false),
     m_transition(NULL),
     m_has_timing(false),
     m_timing(NULL),
     m_has_hf(false),
     m_hf(NULL),
     m_has_txStyles(false),
     m_txStyles(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_preserve_attr(false),
     m_preserve_attr(false)
{
}
CT_SlideMaster::~CT_SlideMaster()
{
    clear();
}
bool CT_SlideMaster::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* CT_SlideMaster::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& CT_SlideMaster::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool CT_SlideMaster::has_clrMap() const
{
    return m_has_clrMap;
}

ns_a::CT_ColorMapping* CT_SlideMaster::mutable_clrMap()
{
    m_has_clrMap = true;
    if (!m_clrMap)
    {
        m_clrMap = new ns_a::CT_ColorMapping();
    }
    return m_clrMap;
}

const ns_a::CT_ColorMapping& CT_SlideMaster::get_clrMap() const
{
    if (m_clrMap)
    {
        return *m_clrMap;
    }
    return ns_a::CT_ColorMapping::default_instance();
}

bool CT_SlideMaster::has_sldLayoutIdLst() const
{
    return m_has_sldLayoutIdLst;
}

CT_SlideLayoutIdList* CT_SlideMaster::mutable_sldLayoutIdLst()
{
    m_has_sldLayoutIdLst = true;
    if (!m_sldLayoutIdLst)
    {
        m_sldLayoutIdLst = new CT_SlideLayoutIdList();
    }
    return m_sldLayoutIdLst;
}

const CT_SlideLayoutIdList& CT_SlideMaster::get_sldLayoutIdLst() const
{
    if (m_sldLayoutIdLst)
    {
        return *m_sldLayoutIdLst;
    }
    return CT_SlideLayoutIdList::default_instance();
}

bool CT_SlideMaster::has_transition() const
{
    return m_has_transition;
}

CT_SlideTransition* CT_SlideMaster::mutable_transition()
{
    m_has_transition = true;
    if (!m_transition)
    {
        m_transition = new CT_SlideTransition();
    }
    return m_transition;
}

const CT_SlideTransition& CT_SlideMaster::get_transition() const
{
    if (m_transition)
    {
        return *m_transition;
    }
    return CT_SlideTransition::default_instance();
}

bool CT_SlideMaster::has_timing() const
{
    return m_has_timing;
}

CT_SlideTiming* CT_SlideMaster::mutable_timing()
{
    m_has_timing = true;
    if (!m_timing)
    {
        m_timing = new CT_SlideTiming();
    }
    return m_timing;
}

const CT_SlideTiming& CT_SlideMaster::get_timing() const
{
    if (m_timing)
    {
        return *m_timing;
    }
    return CT_SlideTiming::default_instance();
}

bool CT_SlideMaster::has_hf() const
{
    return m_has_hf;
}

CT_HeaderFooter* CT_SlideMaster::mutable_hf()
{
    m_has_hf = true;
    if (!m_hf)
    {
        m_hf = new CT_HeaderFooter();
    }
    return m_hf;
}

const CT_HeaderFooter& CT_SlideMaster::get_hf() const
{
    if (m_hf)
    {
        return *m_hf;
    }
    return CT_HeaderFooter::default_instance();
}

bool CT_SlideMaster::has_txStyles() const
{
    return m_has_txStyles;
}

CT_SlideMasterTextStyles* CT_SlideMaster::mutable_txStyles()
{
    m_has_txStyles = true;
    if (!m_txStyles)
    {
        m_txStyles = new CT_SlideMasterTextStyles();
    }
    return m_txStyles;
}

const CT_SlideMasterTextStyles& CT_SlideMaster::get_txStyles() const
{
    if (m_txStyles)
    {
        return *m_txStyles;
    }
    return CT_SlideMasterTextStyles::default_instance();
}

bool CT_SlideMaster::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_SlideMaster::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_SlideMaster::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_SlideMaster::clear()
{
    m_has_preserve_attr = false;
    m_preserve_attr = false;

    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMap = false;

    if (m_clrMap)
    {
        delete m_clrMap;
        m_clrMap = NULL;
    }


    m_has_sldLayoutIdLst = false;

    if (m_sldLayoutIdLst)
    {
        delete m_sldLayoutIdLst;
        m_sldLayoutIdLst = NULL;
    }


    m_has_transition = false;

    if (m_transition)
    {
        delete m_transition;
        m_transition = NULL;
    }


    m_has_timing = false;

    if (m_timing)
    {
        delete m_timing;
        m_timing = NULL;
    }


    m_has_hf = false;

    if (m_hf)
    {
        delete m_hf;
        m_hf = NULL;
    }


    m_has_txStyles = false;

    if (m_txStyles)
    {
        delete m_txStyles;
        m_txStyles = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideMaster::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_preserve_attr)
    {
        _outStream << " " << "preserve" << "=\"" << XSD::XMLBooleanStr(m_preserve_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cSld);


    assert(m_has_clrMap);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMap)
    {
        m_clrMap->toXmlElem("p:clrMap", "", _outStream);
    }


    if (m_has_sldLayoutIdLst)
    {
        m_sldLayoutIdLst->toXmlElem("p:sldLayoutIdLst", "", _outStream);
    }


    if (m_has_transition)
    {
        m_transition->toXmlElem("p:transition", "", _outStream);
    }


    if (m_has_timing)
    {
        m_timing->toXmlElem("p:timing", "", _outStream);
    }


    if (m_has_hf)
    {
        m_hf->toXmlElem("p:hf", "", _outStream);
    }


    if (m_has_txStyles)
    {
        m_txStyles->toXmlElem("p:txStyles", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideMaster& CT_SlideMaster::default_instance()
{
    if (!CT_SlideMaster::default_instance_)
    {
        CT_SlideMaster::default_instance_ = new CT_SlideMaster();
    }
    return *CT_SlideMaster::default_instance_;
}

bool CT_SlideMaster::has_preserve_attr() const
{
    return m_has_preserve_attr;
}

void CT_SlideMaster::set_preserve_attr(const XSD::boolean_& _preserve_attr)
{
    m_has_preserve_attr = true;
    m_preserve_attr = _preserve_attr;
}

const XSD::boolean_& CT_SlideMaster::get_preserve_attr() const
{
    return m_preserve_attr;
}

CT_SlideMaster* CT_SlideMaster::default_instance_ = NULL;

// CT_HandoutMaster
CT_HandoutMaster::CT_HandoutMaster()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMap(false),
     m_clrMap(NULL),
     m_has_hf(false),
     m_hf(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_HandoutMaster::~CT_HandoutMaster()
{
    clear();
}
bool CT_HandoutMaster::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* CT_HandoutMaster::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& CT_HandoutMaster::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool CT_HandoutMaster::has_clrMap() const
{
    return m_has_clrMap;
}

ns_a::CT_ColorMapping* CT_HandoutMaster::mutable_clrMap()
{
    m_has_clrMap = true;
    if (!m_clrMap)
    {
        m_clrMap = new ns_a::CT_ColorMapping();
    }
    return m_clrMap;
}

const ns_a::CT_ColorMapping& CT_HandoutMaster::get_clrMap() const
{
    if (m_clrMap)
    {
        return *m_clrMap;
    }
    return ns_a::CT_ColorMapping::default_instance();
}

bool CT_HandoutMaster::has_hf() const
{
    return m_has_hf;
}

CT_HeaderFooter* CT_HandoutMaster::mutable_hf()
{
    m_has_hf = true;
    if (!m_hf)
    {
        m_hf = new CT_HeaderFooter();
    }
    return m_hf;
}

const CT_HeaderFooter& CT_HandoutMaster::get_hf() const
{
    if (m_hf)
    {
        return *m_hf;
    }
    return CT_HeaderFooter::default_instance();
}

bool CT_HandoutMaster::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_HandoutMaster::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_HandoutMaster::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_HandoutMaster::clear()
{
    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMap = false;

    if (m_clrMap)
    {
        delete m_clrMap;
        m_clrMap = NULL;
    }


    m_has_hf = false;

    if (m_hf)
    {
        delete m_hf;
        m_hf = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_HandoutMaster::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cSld);


    assert(m_has_clrMap);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMap)
    {
        m_clrMap->toXmlElem("p:clrMap", "", _outStream);
    }


    if (m_has_hf)
    {
        m_hf->toXmlElem("p:hf", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_HandoutMaster& CT_HandoutMaster::default_instance()
{
    if (!CT_HandoutMaster::default_instance_)
    {
        CT_HandoutMaster::default_instance_ = new CT_HandoutMaster();
    }
    return *CT_HandoutMaster::default_instance_;
}

CT_HandoutMaster* CT_HandoutMaster::default_instance_ = NULL;

// CT_NotesMaster
CT_NotesMaster::CT_NotesMaster()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMap(false),
     m_clrMap(NULL),
     m_has_hf(false),
     m_hf(NULL),
     m_has_notesStyle(false),
     m_notesStyle(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_NotesMaster::~CT_NotesMaster()
{
    clear();
}
bool CT_NotesMaster::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* CT_NotesMaster::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& CT_NotesMaster::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool CT_NotesMaster::has_clrMap() const
{
    return m_has_clrMap;
}

ns_a::CT_ColorMapping* CT_NotesMaster::mutable_clrMap()
{
    m_has_clrMap = true;
    if (!m_clrMap)
    {
        m_clrMap = new ns_a::CT_ColorMapping();
    }
    return m_clrMap;
}

const ns_a::CT_ColorMapping& CT_NotesMaster::get_clrMap() const
{
    if (m_clrMap)
    {
        return *m_clrMap;
    }
    return ns_a::CT_ColorMapping::default_instance();
}

bool CT_NotesMaster::has_hf() const
{
    return m_has_hf;
}

CT_HeaderFooter* CT_NotesMaster::mutable_hf()
{
    m_has_hf = true;
    if (!m_hf)
    {
        m_hf = new CT_HeaderFooter();
    }
    return m_hf;
}

const CT_HeaderFooter& CT_NotesMaster::get_hf() const
{
    if (m_hf)
    {
        return *m_hf;
    }
    return CT_HeaderFooter::default_instance();
}

bool CT_NotesMaster::has_notesStyle() const
{
    return m_has_notesStyle;
}

ns_a::CT_TextListStyle* CT_NotesMaster::mutable_notesStyle()
{
    m_has_notesStyle = true;
    if (!m_notesStyle)
    {
        m_notesStyle = new ns_a::CT_TextListStyle();
    }
    return m_notesStyle;
}

const ns_a::CT_TextListStyle& CT_NotesMaster::get_notesStyle() const
{
    if (m_notesStyle)
    {
        return *m_notesStyle;
    }
    return ns_a::CT_TextListStyle::default_instance();
}

bool CT_NotesMaster::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_NotesMaster::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_NotesMaster::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_NotesMaster::clear()
{
    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMap = false;

    if (m_clrMap)
    {
        delete m_clrMap;
        m_clrMap = NULL;
    }


    m_has_hf = false;

    if (m_hf)
    {
        delete m_hf;
        m_hf = NULL;
    }


    m_has_notesStyle = false;

    if (m_notesStyle)
    {
        delete m_notesStyle;
        m_notesStyle = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NotesMaster::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cSld);


    assert(m_has_clrMap);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMap)
    {
        m_clrMap->toXmlElem("p:clrMap", "", _outStream);
    }


    if (m_has_hf)
    {
        m_hf->toXmlElem("p:hf", "", _outStream);
    }


    if (m_has_notesStyle)
    {
        m_notesStyle->toXmlElem("p:notesStyle", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NotesMaster& CT_NotesMaster::default_instance()
{
    if (!CT_NotesMaster::default_instance_)
    {
        CT_NotesMaster::default_instance_ = new CT_NotesMaster();
    }
    return *CT_NotesMaster::default_instance_;
}

CT_NotesMaster* CT_NotesMaster::default_instance_ = NULL;

// CT_NotesSlide
CT_NotesSlide::CT_NotesSlide()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMapOvr(false),
     m_clrMapOvr(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showMasterSp_attr(false),
     m_showMasterSp_attr(false),
     m_has_showMasterPhAnim_attr(false),
     m_showMasterPhAnim_attr(false)
{
}
CT_NotesSlide::~CT_NotesSlide()
{
    clear();
}
bool CT_NotesSlide::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* CT_NotesSlide::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& CT_NotesSlide::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool CT_NotesSlide::has_clrMapOvr() const
{
    return m_has_clrMapOvr;
}

ns_a::CT_ColorMappingOverride* CT_NotesSlide::mutable_clrMapOvr()
{
    m_has_clrMapOvr = true;
    if (!m_clrMapOvr)
    {
        m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
    }
    return m_clrMapOvr;
}

const ns_a::CT_ColorMappingOverride& CT_NotesSlide::get_clrMapOvr() const
{
    if (m_clrMapOvr)
    {
        return *m_clrMapOvr;
    }
    return ns_a::CT_ColorMappingOverride::default_instance();
}

bool CT_NotesSlide::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* CT_NotesSlide::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& CT_NotesSlide::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void CT_NotesSlide::clear()
{
    m_has_showMasterSp_attr = false;
    m_showMasterSp_attr = false;

    m_has_showMasterPhAnim_attr = false;
    m_showMasterPhAnim_attr = false;

    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMapOvr = false;

    if (m_clrMapOvr)
    {
        delete m_clrMapOvr;
        m_clrMapOvr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NotesSlide::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showMasterSp_attr)
    {
        _outStream << " " << "showMasterSp" << "=\"" << XSD::XMLBooleanStr(m_showMasterSp_attr) << "\"";
    }



    if (m_has_showMasterPhAnim_attr)
    {
        _outStream << " " << "showMasterPhAnim" << "=\"" << XSD::XMLBooleanStr(m_showMasterPhAnim_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cSld);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMapOvr)
    {
        m_clrMapOvr->toXmlElem("p:clrMapOvr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NotesSlide& CT_NotesSlide::default_instance()
{
    if (!CT_NotesSlide::default_instance_)
    {
        CT_NotesSlide::default_instance_ = new CT_NotesSlide();
    }
    return *CT_NotesSlide::default_instance_;
}

bool CT_NotesSlide::has_showMasterSp_attr() const
{
    return m_has_showMasterSp_attr;
}

void CT_NotesSlide::set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr)
{
    m_has_showMasterSp_attr = true;
    m_showMasterSp_attr = _showMasterSp_attr;
}

const XSD::boolean_& CT_NotesSlide::get_showMasterSp_attr() const
{
    return m_showMasterSp_attr;
}

bool CT_NotesSlide::has_showMasterPhAnim_attr() const
{
    return m_has_showMasterPhAnim_attr;
}

void CT_NotesSlide::set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr)
{
    m_has_showMasterPhAnim_attr = true;
    m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
}

const XSD::boolean_& CT_NotesSlide::get_showMasterPhAnim_attr() const
{
    return m_showMasterPhAnim_attr;
}

CT_NotesSlide* CT_NotesSlide::default_instance_ = NULL;

// CT_SlideSyncProperties
CT_SlideSyncProperties::CT_SlideSyncProperties()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_serverSldId_attr(false),
     m_serverSldId_attr(""),
     m_has_serverSldModifiedTime_attr(false),
     m_serverSldModifiedTime_attr(""),
     m_has_clientInsertedTime_attr(false),
     m_clientInsertedTime_attr("")
{
}
CT_SlideSyncProperties::~CT_SlideSyncProperties()
{
    clear();
}
bool CT_SlideSyncProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SlideSyncProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SlideSyncProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SlideSyncProperties::clear()
{
    m_has_serverSldId_attr = false;
    m_serverSldId_attr.clear();

    m_has_serverSldModifiedTime_attr = false;
    m_serverSldModifiedTime_attr.clear();

    m_has_clientInsertedTime_attr = false;
    m_clientInsertedTime_attr.clear();

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideSyncProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_serverSldId_attr);
    if (m_has_serverSldId_attr)
    {
        _outStream << " " << "serverSldId" << "=\"" << m_serverSldId_attr << "\"";
    }


    assert(m_has_serverSldModifiedTime_attr);
    if (m_has_serverSldModifiedTime_attr)
    {
        _outStream << " " << "serverSldModifiedTime" << "=\"" << m_serverSldModifiedTime_attr << "\"";
    }


    assert(m_has_clientInsertedTime_attr);
    if (m_has_clientInsertedTime_attr)
    {
        _outStream << " " << "clientInsertedTime" << "=\"" << m_clientInsertedTime_attr << "\"";
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideSyncProperties& CT_SlideSyncProperties::default_instance()
{
    if (!CT_SlideSyncProperties::default_instance_)
    {
        CT_SlideSyncProperties::default_instance_ = new CT_SlideSyncProperties();
    }
    return *CT_SlideSyncProperties::default_instance_;
}

bool CT_SlideSyncProperties::has_serverSldId_attr() const
{
    return m_has_serverSldId_attr;
}

void CT_SlideSyncProperties::set_serverSldId_attr(const XSD::string_& _serverSldId_attr)
{
    m_has_serverSldId_attr = true;
    m_serverSldId_attr = _serverSldId_attr;
}

const XSD::string_& CT_SlideSyncProperties::get_serverSldId_attr() const
{
    return m_serverSldId_attr;
}

bool CT_SlideSyncProperties::has_serverSldModifiedTime_attr() const
{
    return m_has_serverSldModifiedTime_attr;
}

void CT_SlideSyncProperties::set_serverSldModifiedTime_attr(const XSD::dateTime_& _serverSldModifiedTime_attr)
{
    m_has_serverSldModifiedTime_attr = true;
    m_serverSldModifiedTime_attr = _serverSldModifiedTime_attr;
}

const XSD::dateTime_& CT_SlideSyncProperties::get_serverSldModifiedTime_attr() const
{
    return m_serverSldModifiedTime_attr;
}

bool CT_SlideSyncProperties::has_clientInsertedTime_attr() const
{
    return m_has_clientInsertedTime_attr;
}

void CT_SlideSyncProperties::set_clientInsertedTime_attr(const XSD::dateTime_& _clientInsertedTime_attr)
{
    m_has_clientInsertedTime_attr = true;
    m_clientInsertedTime_attr = _clientInsertedTime_attr;
}

const XSD::dateTime_& CT_SlideSyncProperties::get_clientInsertedTime_attr() const
{
    return m_clientInsertedTime_attr;
}

CT_SlideSyncProperties* CT_SlideSyncProperties::default_instance_ = NULL;

// CT_StringTag
CT_StringTag::CT_StringTag()
    :m_has_name_attr(false),
     m_name_attr(""),
     m_has_val_attr(false),
     m_val_attr("")
{
}
CT_StringTag::~CT_StringTag()
{
    clear();
}
void CT_StringTag::clear()
{
    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_val_attr = false;
    m_val_attr.clear();
}

void CT_StringTag::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_name_attr);
    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }


    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << m_val_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_StringTag& CT_StringTag::default_instance()
{
    if (!CT_StringTag::default_instance_)
    {
        CT_StringTag::default_instance_ = new CT_StringTag();
    }
    return *CT_StringTag::default_instance_;
}

bool CT_StringTag::has_name_attr() const
{
    return m_has_name_attr;
}

void CT_StringTag::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& CT_StringTag::get_name_attr() const
{
    return m_name_attr;
}

bool CT_StringTag::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_StringTag::set_val_attr(const XSD::string_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::string_& CT_StringTag::get_val_attr() const
{
    return m_val_attr;
}

CT_StringTag* CT_StringTag::default_instance_ = NULL;

// CT_TagList
CT_TagList::CT_TagList()

{
}
CT_TagList::~CT_TagList()
{
    clear();
}
CT_StringTag* CT_TagList::add_tag()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StringTag* pNewChild = pChildGroup->mutable_tag();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_TagList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_TagList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tag())
            {
                (*iter)->get_tag().toXmlElem("p:tag", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_TagList& CT_TagList::default_instance()
{
    if (!CT_TagList::default_instance_)
    {
        CT_TagList::default_instance_ = new CT_TagList();
    }
    return *CT_TagList::default_instance_;
}


// CT_TagList::ChildGroup_1
CT_TagList::ChildGroup_1::ChildGroup_1()
    :m_has_tag(false),
     m_tag(NULL)
{
}
bool CT_TagList::ChildGroup_1::has_tag() const
{
    return m_has_tag;
}

CT_StringTag* CT_TagList::ChildGroup_1::mutable_tag()
{

    m_has_tag = true;
    if (!m_tag)
    {
        m_tag = new CT_StringTag();
    }
    return m_tag;
}

const CT_StringTag& CT_TagList::ChildGroup_1::get_tag() const
{
    if (m_tag)
    {
        return *m_tag;
    }
    return CT_StringTag::default_instance();
}

CT_TagList* CT_TagList::default_instance_ = NULL;

// CT_NormalViewPortion
CT_NormalViewPortion::CT_NormalViewPortion()
    :m_has_sz_attr(false),
     m_sz_attr(NULL),
     m_has_autoAdjust_attr(false),
     m_autoAdjust_attr(false)
{
}
CT_NormalViewPortion::~CT_NormalViewPortion()
{
    clear();
}
void CT_NormalViewPortion::clear()
{
    m_has_sz_attr = false;

    if (m_sz_attr)
    {
        delete m_sz_attr;
        m_sz_attr = NULL;
    }


    m_has_autoAdjust_attr = false;
    m_autoAdjust_attr = false;
}

void CT_NormalViewPortion::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_sz_attr);
    if (m_has_sz_attr)
    {
        m_sz_attr->toXmlAttr("sz", _outStream);
    }



    if (m_has_autoAdjust_attr)
    {
        _outStream << " " << "autoAdjust" << "=\"" << XSD::XMLBooleanStr(m_autoAdjust_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_NormalViewPortion& CT_NormalViewPortion::default_instance()
{
    if (!CT_NormalViewPortion::default_instance_)
    {
        CT_NormalViewPortion::default_instance_ = new CT_NormalViewPortion();
    }
    return *CT_NormalViewPortion::default_instance_;
}

bool CT_NormalViewPortion::has_sz_attr() const
{
    return m_has_sz_attr;
}

void CT_NormalViewPortion::set_sz_attr(const ns_a::ST_PositiveFixedPercentage& _sz_attr)
{
    m_has_sz_attr = true;
    m_sz_attr = new ns_a::ST_PositiveFixedPercentage(_sz_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_NormalViewPortion::get_sz_attr() const
{
    if (m_sz_attr)
    {
        return *m_sz_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_NormalViewPortion::has_autoAdjust_attr() const
{
    return m_has_autoAdjust_attr;
}

void CT_NormalViewPortion::set_autoAdjust_attr(const XSD::boolean_& _autoAdjust_attr)
{
    m_has_autoAdjust_attr = true;
    m_autoAdjust_attr = _autoAdjust_attr;
}

const XSD::boolean_& CT_NormalViewPortion::get_autoAdjust_attr() const
{
    return m_autoAdjust_attr;
}

CT_NormalViewPortion* CT_NormalViewPortion::default_instance_ = NULL;

// CT_NormalViewProperties
CT_NormalViewProperties::CT_NormalViewProperties()
    :m_has_restoredLeft(false),
     m_restoredLeft(NULL),
     m_has_restoredTop(false),
     m_restoredTop(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showOutlineIcons_attr(false),
     m_showOutlineIcons_attr(false),
     m_has_snapVertSplitter_attr(false),
     m_snapVertSplitter_attr(false),
     m_has_vertBarState_attr(false),
     m_vertBarState_attr(NULL),
     m_has_horzBarState_attr(false),
     m_horzBarState_attr(NULL),
     m_has_preferSingleView_attr(false),
     m_preferSingleView_attr(false)
{
}
CT_NormalViewProperties::~CT_NormalViewProperties()
{
    clear();
}
bool CT_NormalViewProperties::has_restoredLeft() const
{
    return m_has_restoredLeft;
}

CT_NormalViewPortion* CT_NormalViewProperties::mutable_restoredLeft()
{
    m_has_restoredLeft = true;
    if (!m_restoredLeft)
    {
        m_restoredLeft = new CT_NormalViewPortion();
    }
    return m_restoredLeft;
}

const CT_NormalViewPortion& CT_NormalViewProperties::get_restoredLeft() const
{
    if (m_restoredLeft)
    {
        return *m_restoredLeft;
    }
    return CT_NormalViewPortion::default_instance();
}

bool CT_NormalViewProperties::has_restoredTop() const
{
    return m_has_restoredTop;
}

CT_NormalViewPortion* CT_NormalViewProperties::mutable_restoredTop()
{
    m_has_restoredTop = true;
    if (!m_restoredTop)
    {
        m_restoredTop = new CT_NormalViewPortion();
    }
    return m_restoredTop;
}

const CT_NormalViewPortion& CT_NormalViewProperties::get_restoredTop() const
{
    if (m_restoredTop)
    {
        return *m_restoredTop;
    }
    return CT_NormalViewPortion::default_instance();
}

bool CT_NormalViewProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_NormalViewProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_NormalViewProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_NormalViewProperties::clear()
{
    m_has_showOutlineIcons_attr = false;
    m_showOutlineIcons_attr = false;

    m_has_snapVertSplitter_attr = false;
    m_snapVertSplitter_attr = false;

    m_has_vertBarState_attr = false;

    if (m_vertBarState_attr)
    {
        delete m_vertBarState_attr;
        m_vertBarState_attr = NULL;
    }


    m_has_horzBarState_attr = false;

    if (m_horzBarState_attr)
    {
        delete m_horzBarState_attr;
        m_horzBarState_attr = NULL;
    }


    m_has_preferSingleView_attr = false;
    m_preferSingleView_attr = false;

    m_has_restoredLeft = false;

    if (m_restoredLeft)
    {
        delete m_restoredLeft;
        m_restoredLeft = NULL;
    }


    m_has_restoredTop = false;

    if (m_restoredTop)
    {
        delete m_restoredTop;
        m_restoredTop = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NormalViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showOutlineIcons_attr)
    {
        _outStream << " " << "showOutlineIcons" << "=\"" << XSD::XMLBooleanStr(m_showOutlineIcons_attr) << "\"";
    }



    if (m_has_snapVertSplitter_attr)
    {
        _outStream << " " << "snapVertSplitter" << "=\"" << XSD::XMLBooleanStr(m_snapVertSplitter_attr) << "\"";
    }



    if (m_has_vertBarState_attr)
    {
        m_vertBarState_attr->toXmlAttr("vertBarState", _outStream);
    }



    if (m_has_horzBarState_attr)
    {
        m_horzBarState_attr->toXmlAttr("horzBarState", _outStream);
    }



    if (m_has_preferSingleView_attr)
    {
        _outStream << " " << "preferSingleView" << "=\"" << XSD::XMLBooleanStr(m_preferSingleView_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_restoredLeft);


    assert(m_has_restoredTop);


    if (m_has_restoredLeft)
    {
        m_restoredLeft->toXmlElem("p:restoredLeft", "", _outStream);
    }


    if (m_has_restoredTop)
    {
        m_restoredTop->toXmlElem("p:restoredTop", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NormalViewProperties& CT_NormalViewProperties::default_instance()
{
    if (!CT_NormalViewProperties::default_instance_)
    {
        CT_NormalViewProperties::default_instance_ = new CT_NormalViewProperties();
    }
    return *CT_NormalViewProperties::default_instance_;
}

bool CT_NormalViewProperties::has_showOutlineIcons_attr() const
{
    return m_has_showOutlineIcons_attr;
}

void CT_NormalViewProperties::set_showOutlineIcons_attr(const XSD::boolean_& _showOutlineIcons_attr)
{
    m_has_showOutlineIcons_attr = true;
    m_showOutlineIcons_attr = _showOutlineIcons_attr;
}

const XSD::boolean_& CT_NormalViewProperties::get_showOutlineIcons_attr() const
{
    return m_showOutlineIcons_attr;
}

bool CT_NormalViewProperties::has_snapVertSplitter_attr() const
{
    return m_has_snapVertSplitter_attr;
}

void CT_NormalViewProperties::set_snapVertSplitter_attr(const XSD::boolean_& _snapVertSplitter_attr)
{
    m_has_snapVertSplitter_attr = true;
    m_snapVertSplitter_attr = _snapVertSplitter_attr;
}

const XSD::boolean_& CT_NormalViewProperties::get_snapVertSplitter_attr() const
{
    return m_snapVertSplitter_attr;
}

bool CT_NormalViewProperties::has_vertBarState_attr() const
{
    return m_has_vertBarState_attr;
}

void CT_NormalViewProperties::set_vertBarState_attr(const ST_SplitterBarState& _vertBarState_attr)
{
    m_has_vertBarState_attr = true;
    m_vertBarState_attr = new ST_SplitterBarState(_vertBarState_attr);
}

const ST_SplitterBarState& CT_NormalViewProperties::get_vertBarState_attr() const
{
    if (m_vertBarState_attr)
    {
        return *m_vertBarState_attr;
    }
    return ST_SplitterBarState::default_instance();
}

bool CT_NormalViewProperties::has_horzBarState_attr() const
{
    return m_has_horzBarState_attr;
}

void CT_NormalViewProperties::set_horzBarState_attr(const ST_SplitterBarState& _horzBarState_attr)
{
    m_has_horzBarState_attr = true;
    m_horzBarState_attr = new ST_SplitterBarState(_horzBarState_attr);
}

const ST_SplitterBarState& CT_NormalViewProperties::get_horzBarState_attr() const
{
    if (m_horzBarState_attr)
    {
        return *m_horzBarState_attr;
    }
    return ST_SplitterBarState::default_instance();
}

bool CT_NormalViewProperties::has_preferSingleView_attr() const
{
    return m_has_preferSingleView_attr;
}

void CT_NormalViewProperties::set_preferSingleView_attr(const XSD::boolean_& _preferSingleView_attr)
{
    m_has_preferSingleView_attr = true;
    m_preferSingleView_attr = _preferSingleView_attr;
}

const XSD::boolean_& CT_NormalViewProperties::get_preferSingleView_attr() const
{
    return m_preferSingleView_attr;
}

CT_NormalViewProperties* CT_NormalViewProperties::default_instance_ = NULL;

// CT_CommonViewProperties
CT_CommonViewProperties::CT_CommonViewProperties()
    :m_has_scale(false),
     m_scale(NULL),
     m_has_origin(false),
     m_origin(NULL),
     m_has_varScale_attr(false),
     m_varScale_attr(false)
{
}
CT_CommonViewProperties::~CT_CommonViewProperties()
{
    clear();
}
bool CT_CommonViewProperties::has_scale() const
{
    return m_has_scale;
}

ns_a::CT_Scale2D* CT_CommonViewProperties::mutable_scale()
{
    m_has_scale = true;
    if (!m_scale)
    {
        m_scale = new ns_a::CT_Scale2D();
    }
    return m_scale;
}

const ns_a::CT_Scale2D& CT_CommonViewProperties::get_scale() const
{
    if (m_scale)
    {
        return *m_scale;
    }
    return ns_a::CT_Scale2D::default_instance();
}

bool CT_CommonViewProperties::has_origin() const
{
    return m_has_origin;
}

ns_a::CT_Point2D* CT_CommonViewProperties::mutable_origin()
{
    m_has_origin = true;
    if (!m_origin)
    {
        m_origin = new ns_a::CT_Point2D();
    }
    return m_origin;
}

const ns_a::CT_Point2D& CT_CommonViewProperties::get_origin() const
{
    if (m_origin)
    {
        return *m_origin;
    }
    return ns_a::CT_Point2D::default_instance();
}

void CT_CommonViewProperties::clear()
{
    m_has_varScale_attr = false;
    m_varScale_attr = false;

    m_has_scale = false;

    if (m_scale)
    {
        delete m_scale;
        m_scale = NULL;
    }


    m_has_origin = false;

    if (m_origin)
    {
        delete m_origin;
        m_origin = NULL;
    }

}

void CT_CommonViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_varScale_attr)
    {
        _outStream << " " << "varScale" << "=\"" << XSD::XMLBooleanStr(m_varScale_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_scale);


    assert(m_has_origin);


    if (m_has_scale)
    {
        m_scale->toXmlElem("p:scale", "", _outStream);
    }


    if (m_has_origin)
    {
        m_origin->toXmlElem("p:origin", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CommonViewProperties& CT_CommonViewProperties::default_instance()
{
    if (!CT_CommonViewProperties::default_instance_)
    {
        CT_CommonViewProperties::default_instance_ = new CT_CommonViewProperties();
    }
    return *CT_CommonViewProperties::default_instance_;
}

bool CT_CommonViewProperties::has_varScale_attr() const
{
    return m_has_varScale_attr;
}

void CT_CommonViewProperties::set_varScale_attr(const XSD::boolean_& _varScale_attr)
{
    m_has_varScale_attr = true;
    m_varScale_attr = _varScale_attr;
}

const XSD::boolean_& CT_CommonViewProperties::get_varScale_attr() const
{
    return m_varScale_attr;
}

CT_CommonViewProperties* CT_CommonViewProperties::default_instance_ = NULL;

// CT_NotesTextViewProperties
CT_NotesTextViewProperties::CT_NotesTextViewProperties()
    :m_has_cViewPr(false),
     m_cViewPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_NotesTextViewProperties::~CT_NotesTextViewProperties()
{
    clear();
}
bool CT_NotesTextViewProperties::has_cViewPr() const
{
    return m_has_cViewPr;
}

CT_CommonViewProperties* CT_NotesTextViewProperties::mutable_cViewPr()
{
    m_has_cViewPr = true;
    if (!m_cViewPr)
    {
        m_cViewPr = new CT_CommonViewProperties();
    }
    return m_cViewPr;
}

const CT_CommonViewProperties& CT_NotesTextViewProperties::get_cViewPr() const
{
    if (m_cViewPr)
    {
        return *m_cViewPr;
    }
    return CT_CommonViewProperties::default_instance();
}

bool CT_NotesTextViewProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_NotesTextViewProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_NotesTextViewProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_NotesTextViewProperties::clear()
{
    m_has_cViewPr = false;

    if (m_cViewPr)
    {
        delete m_cViewPr;
        m_cViewPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NotesTextViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cViewPr);


    if (m_has_cViewPr)
    {
        m_cViewPr->toXmlElem("p:cViewPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NotesTextViewProperties& CT_NotesTextViewProperties::default_instance()
{
    if (!CT_NotesTextViewProperties::default_instance_)
    {
        CT_NotesTextViewProperties::default_instance_ = new CT_NotesTextViewProperties();
    }
    return *CT_NotesTextViewProperties::default_instance_;
}

CT_NotesTextViewProperties* CT_NotesTextViewProperties::default_instance_ = NULL;

// CT_OutlineViewSlideEntry
CT_OutlineViewSlideEntry::CT_OutlineViewSlideEntry()
    :m_has_r_id_attr(false),
     m_r_id_attr(NULL),
     m_has_collapse_attr(false),
     m_collapse_attr(false)
{
}
CT_OutlineViewSlideEntry::~CT_OutlineViewSlideEntry()
{
    clear();
}
void CT_OutlineViewSlideEntry::clear()
{
    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_collapse_attr = false;
    m_collapse_attr = false;
}

void CT_OutlineViewSlideEntry::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }



    if (m_has_collapse_attr)
    {
        _outStream << " " << "collapse" << "=\"" << XSD::XMLBooleanStr(m_collapse_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_OutlineViewSlideEntry& CT_OutlineViewSlideEntry::default_instance()
{
    if (!CT_OutlineViewSlideEntry::default_instance_)
    {
        CT_OutlineViewSlideEntry::default_instance_ = new CT_OutlineViewSlideEntry();
    }
    return *CT_OutlineViewSlideEntry::default_instance_;
}

bool CT_OutlineViewSlideEntry::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_OutlineViewSlideEntry::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_OutlineViewSlideEntry::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

bool CT_OutlineViewSlideEntry::has_collapse_attr() const
{
    return m_has_collapse_attr;
}

void CT_OutlineViewSlideEntry::set_collapse_attr(const XSD::boolean_& _collapse_attr)
{
    m_has_collapse_attr = true;
    m_collapse_attr = _collapse_attr;
}

const XSD::boolean_& CT_OutlineViewSlideEntry::get_collapse_attr() const
{
    return m_collapse_attr;
}

CT_OutlineViewSlideEntry* CT_OutlineViewSlideEntry::default_instance_ = NULL;

// CT_OutlineViewSlideList
CT_OutlineViewSlideList::CT_OutlineViewSlideList()

{
}
CT_OutlineViewSlideList::~CT_OutlineViewSlideList()
{
    clear();
}
CT_OutlineViewSlideEntry* CT_OutlineViewSlideList::add_sld()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_OutlineViewSlideEntry* pNewChild = pChildGroup->mutable_sld();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_OutlineViewSlideList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_OutlineViewSlideList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_sld())
            {
                (*iter)->get_sld().toXmlElem("p:sld", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OutlineViewSlideList& CT_OutlineViewSlideList::default_instance()
{
    if (!CT_OutlineViewSlideList::default_instance_)
    {
        CT_OutlineViewSlideList::default_instance_ = new CT_OutlineViewSlideList();
    }
    return *CT_OutlineViewSlideList::default_instance_;
}


// CT_OutlineViewSlideList::ChildGroup_1
CT_OutlineViewSlideList::ChildGroup_1::ChildGroup_1()
    :m_has_sld(false),
     m_sld(NULL)
{
}
bool CT_OutlineViewSlideList::ChildGroup_1::has_sld() const
{
    return m_has_sld;
}

CT_OutlineViewSlideEntry* CT_OutlineViewSlideList::ChildGroup_1::mutable_sld()
{

    m_has_sld = true;
    if (!m_sld)
    {
        m_sld = new CT_OutlineViewSlideEntry();
    }
    return m_sld;
}

const CT_OutlineViewSlideEntry& CT_OutlineViewSlideList::ChildGroup_1::get_sld() const
{
    if (m_sld)
    {
        return *m_sld;
    }
    return CT_OutlineViewSlideEntry::default_instance();
}

CT_OutlineViewSlideList* CT_OutlineViewSlideList::default_instance_ = NULL;

// CT_OutlineViewProperties
CT_OutlineViewProperties::CT_OutlineViewProperties()
    :m_has_cViewPr(false),
     m_cViewPr(NULL),
     m_has_sldLst(false),
     m_sldLst(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_OutlineViewProperties::~CT_OutlineViewProperties()
{
    clear();
}
bool CT_OutlineViewProperties::has_cViewPr() const
{
    return m_has_cViewPr;
}

CT_CommonViewProperties* CT_OutlineViewProperties::mutable_cViewPr()
{
    m_has_cViewPr = true;
    if (!m_cViewPr)
    {
        m_cViewPr = new CT_CommonViewProperties();
    }
    return m_cViewPr;
}

const CT_CommonViewProperties& CT_OutlineViewProperties::get_cViewPr() const
{
    if (m_cViewPr)
    {
        return *m_cViewPr;
    }
    return CT_CommonViewProperties::default_instance();
}

bool CT_OutlineViewProperties::has_sldLst() const
{
    return m_has_sldLst;
}

CT_OutlineViewSlideList* CT_OutlineViewProperties::mutable_sldLst()
{
    m_has_sldLst = true;
    if (!m_sldLst)
    {
        m_sldLst = new CT_OutlineViewSlideList();
    }
    return m_sldLst;
}

const CT_OutlineViewSlideList& CT_OutlineViewProperties::get_sldLst() const
{
    if (m_sldLst)
    {
        return *m_sldLst;
    }
    return CT_OutlineViewSlideList::default_instance();
}

bool CT_OutlineViewProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_OutlineViewProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_OutlineViewProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_OutlineViewProperties::clear()
{
    m_has_cViewPr = false;

    if (m_cViewPr)
    {
        delete m_cViewPr;
        m_cViewPr = NULL;
    }


    m_has_sldLst = false;

    if (m_sldLst)
    {
        delete m_sldLst;
        m_sldLst = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_OutlineViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cViewPr);


    if (m_has_cViewPr)
    {
        m_cViewPr->toXmlElem("p:cViewPr", "", _outStream);
    }


    if (m_has_sldLst)
    {
        m_sldLst->toXmlElem("p:sldLst", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_OutlineViewProperties& CT_OutlineViewProperties::default_instance()
{
    if (!CT_OutlineViewProperties::default_instance_)
    {
        CT_OutlineViewProperties::default_instance_ = new CT_OutlineViewProperties();
    }
    return *CT_OutlineViewProperties::default_instance_;
}

CT_OutlineViewProperties* CT_OutlineViewProperties::default_instance_ = NULL;

// CT_SlideSorterViewProperties
CT_SlideSorterViewProperties::CT_SlideSorterViewProperties()
    :m_has_cViewPr(false),
     m_cViewPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showFormatting_attr(false),
     m_showFormatting_attr(false)
{
}
CT_SlideSorterViewProperties::~CT_SlideSorterViewProperties()
{
    clear();
}
bool CT_SlideSorterViewProperties::has_cViewPr() const
{
    return m_has_cViewPr;
}

CT_CommonViewProperties* CT_SlideSorterViewProperties::mutable_cViewPr()
{
    m_has_cViewPr = true;
    if (!m_cViewPr)
    {
        m_cViewPr = new CT_CommonViewProperties();
    }
    return m_cViewPr;
}

const CT_CommonViewProperties& CT_SlideSorterViewProperties::get_cViewPr() const
{
    if (m_cViewPr)
    {
        return *m_cViewPr;
    }
    return CT_CommonViewProperties::default_instance();
}

bool CT_SlideSorterViewProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SlideSorterViewProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SlideSorterViewProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SlideSorterViewProperties::clear()
{
    m_has_showFormatting_attr = false;
    m_showFormatting_attr = false;

    m_has_cViewPr = false;

    if (m_cViewPr)
    {
        delete m_cViewPr;
        m_cViewPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideSorterViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_showFormatting_attr)
    {
        _outStream << " " << "showFormatting" << "=\"" << XSD::XMLBooleanStr(m_showFormatting_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cViewPr);


    if (m_has_cViewPr)
    {
        m_cViewPr->toXmlElem("p:cViewPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideSorterViewProperties& CT_SlideSorterViewProperties::default_instance()
{
    if (!CT_SlideSorterViewProperties::default_instance_)
    {
        CT_SlideSorterViewProperties::default_instance_ = new CT_SlideSorterViewProperties();
    }
    return *CT_SlideSorterViewProperties::default_instance_;
}

bool CT_SlideSorterViewProperties::has_showFormatting_attr() const
{
    return m_has_showFormatting_attr;
}

void CT_SlideSorterViewProperties::set_showFormatting_attr(const XSD::boolean_& _showFormatting_attr)
{
    m_has_showFormatting_attr = true;
    m_showFormatting_attr = _showFormatting_attr;
}

const XSD::boolean_& CT_SlideSorterViewProperties::get_showFormatting_attr() const
{
    return m_showFormatting_attr;
}

CT_SlideSorterViewProperties* CT_SlideSorterViewProperties::default_instance_ = NULL;

// CT_Guide
CT_Guide::CT_Guide()
    :m_has_orient_attr(false),
     m_orient_attr(NULL),
     m_has_pos_attr(false),
     m_pos_attr(NULL)
{
}
CT_Guide::~CT_Guide()
{
    clear();
}
void CT_Guide::clear()
{
    m_has_orient_attr = false;

    if (m_orient_attr)
    {
        delete m_orient_attr;
        m_orient_attr = NULL;
    }


    m_has_pos_attr = false;

    if (m_pos_attr)
    {
        delete m_pos_attr;
        m_pos_attr = NULL;
    }

}

void CT_Guide::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_orient_attr)
    {
        m_orient_attr->toXmlAttr("orient", _outStream);
    }



    if (m_has_pos_attr)
    {
        m_pos_attr->toXmlAttr("pos", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Guide& CT_Guide::default_instance()
{
    if (!CT_Guide::default_instance_)
    {
        CT_Guide::default_instance_ = new CT_Guide();
    }
    return *CT_Guide::default_instance_;
}

bool CT_Guide::has_orient_attr() const
{
    return m_has_orient_attr;
}

void CT_Guide::set_orient_attr(const ST_Direction& _orient_attr)
{
    m_has_orient_attr = true;
    m_orient_attr = new ST_Direction(_orient_attr);
}

const ST_Direction& CT_Guide::get_orient_attr() const
{
    if (m_orient_attr)
    {
        return *m_orient_attr;
    }
    return ST_Direction::default_instance();
}

bool CT_Guide::has_pos_attr() const
{
    return m_has_pos_attr;
}

void CT_Guide::set_pos_attr(const ns_a::ST_Coordinate32& _pos_attr)
{
    m_has_pos_attr = true;
    m_pos_attr = new ns_a::ST_Coordinate32(_pos_attr);
}

const ns_a::ST_Coordinate32& CT_Guide::get_pos_attr() const
{
    if (m_pos_attr)
    {
        return *m_pos_attr;
    }
    return ns_a::ST_Coordinate32::default_instance();
}

CT_Guide* CT_Guide::default_instance_ = NULL;

// CT_GuideList
CT_GuideList::CT_GuideList()

{
}
CT_GuideList::~CT_GuideList()
{
    clear();
}
CT_Guide* CT_GuideList::add_guide()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Guide* pNewChild = pChildGroup->mutable_guide();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_GuideList::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_GuideList::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_guide())
            {
                (*iter)->get_guide().toXmlElem("p:guide", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GuideList& CT_GuideList::default_instance()
{
    if (!CT_GuideList::default_instance_)
    {
        CT_GuideList::default_instance_ = new CT_GuideList();
    }
    return *CT_GuideList::default_instance_;
}


// CT_GuideList::ChildGroup_1
CT_GuideList::ChildGroup_1::ChildGroup_1()
    :m_has_guide(false),
     m_guide(NULL)
{
}
bool CT_GuideList::ChildGroup_1::has_guide() const
{
    return m_has_guide;
}

CT_Guide* CT_GuideList::ChildGroup_1::mutable_guide()
{

    m_has_guide = true;
    if (!m_guide)
    {
        m_guide = new CT_Guide();
    }
    return m_guide;
}

const CT_Guide& CT_GuideList::ChildGroup_1::get_guide() const
{
    if (m_guide)
    {
        return *m_guide;
    }
    return CT_Guide::default_instance();
}

CT_GuideList* CT_GuideList::default_instance_ = NULL;

// CT_CommonSlideViewProperties
CT_CommonSlideViewProperties::CT_CommonSlideViewProperties()
    :m_has_cViewPr(false),
     m_cViewPr(NULL),
     m_has_guideLst(false),
     m_guideLst(NULL),
     m_has_snapToGrid_attr(false),
     m_snapToGrid_attr(false),
     m_has_snapToObjects_attr(false),
     m_snapToObjects_attr(false),
     m_has_showGuides_attr(false),
     m_showGuides_attr(false)
{
}
CT_CommonSlideViewProperties::~CT_CommonSlideViewProperties()
{
    clear();
}
bool CT_CommonSlideViewProperties::has_cViewPr() const
{
    return m_has_cViewPr;
}

CT_CommonViewProperties* CT_CommonSlideViewProperties::mutable_cViewPr()
{
    m_has_cViewPr = true;
    if (!m_cViewPr)
    {
        m_cViewPr = new CT_CommonViewProperties();
    }
    return m_cViewPr;
}

const CT_CommonViewProperties& CT_CommonSlideViewProperties::get_cViewPr() const
{
    if (m_cViewPr)
    {
        return *m_cViewPr;
    }
    return CT_CommonViewProperties::default_instance();
}

bool CT_CommonSlideViewProperties::has_guideLst() const
{
    return m_has_guideLst;
}

CT_GuideList* CT_CommonSlideViewProperties::mutable_guideLst()
{
    m_has_guideLst = true;
    if (!m_guideLst)
    {
        m_guideLst = new CT_GuideList();
    }
    return m_guideLst;
}

const CT_GuideList& CT_CommonSlideViewProperties::get_guideLst() const
{
    if (m_guideLst)
    {
        return *m_guideLst;
    }
    return CT_GuideList::default_instance();
}

void CT_CommonSlideViewProperties::clear()
{
    m_has_snapToGrid_attr = false;
    m_snapToGrid_attr = false;

    m_has_snapToObjects_attr = false;
    m_snapToObjects_attr = false;

    m_has_showGuides_attr = false;
    m_showGuides_attr = false;

    m_has_cViewPr = false;

    if (m_cViewPr)
    {
        delete m_cViewPr;
        m_cViewPr = NULL;
    }


    m_has_guideLst = false;

    if (m_guideLst)
    {
        delete m_guideLst;
        m_guideLst = NULL;
    }

}

void CT_CommonSlideViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_snapToGrid_attr)
    {
        _outStream << " " << "snapToGrid" << "=\"" << XSD::XMLBooleanStr(m_snapToGrid_attr) << "\"";
    }



    if (m_has_snapToObjects_attr)
    {
        _outStream << " " << "snapToObjects" << "=\"" << XSD::XMLBooleanStr(m_snapToObjects_attr) << "\"";
    }



    if (m_has_showGuides_attr)
    {
        _outStream << " " << "showGuides" << "=\"" << XSD::XMLBooleanStr(m_showGuides_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cViewPr);


    if (m_has_cViewPr)
    {
        m_cViewPr->toXmlElem("p:cViewPr", "", _outStream);
    }


    if (m_has_guideLst)
    {
        m_guideLst->toXmlElem("p:guideLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_CommonSlideViewProperties& CT_CommonSlideViewProperties::default_instance()
{
    if (!CT_CommonSlideViewProperties::default_instance_)
    {
        CT_CommonSlideViewProperties::default_instance_ = new CT_CommonSlideViewProperties();
    }
    return *CT_CommonSlideViewProperties::default_instance_;
}

bool CT_CommonSlideViewProperties::has_snapToGrid_attr() const
{
    return m_has_snapToGrid_attr;
}

void CT_CommonSlideViewProperties::set_snapToGrid_attr(const XSD::boolean_& _snapToGrid_attr)
{
    m_has_snapToGrid_attr = true;
    m_snapToGrid_attr = _snapToGrid_attr;
}

const XSD::boolean_& CT_CommonSlideViewProperties::get_snapToGrid_attr() const
{
    return m_snapToGrid_attr;
}

bool CT_CommonSlideViewProperties::has_snapToObjects_attr() const
{
    return m_has_snapToObjects_attr;
}

void CT_CommonSlideViewProperties::set_snapToObjects_attr(const XSD::boolean_& _snapToObjects_attr)
{
    m_has_snapToObjects_attr = true;
    m_snapToObjects_attr = _snapToObjects_attr;
}

const XSD::boolean_& CT_CommonSlideViewProperties::get_snapToObjects_attr() const
{
    return m_snapToObjects_attr;
}

bool CT_CommonSlideViewProperties::has_showGuides_attr() const
{
    return m_has_showGuides_attr;
}

void CT_CommonSlideViewProperties::set_showGuides_attr(const XSD::boolean_& _showGuides_attr)
{
    m_has_showGuides_attr = true;
    m_showGuides_attr = _showGuides_attr;
}

const XSD::boolean_& CT_CommonSlideViewProperties::get_showGuides_attr() const
{
    return m_showGuides_attr;
}

CT_CommonSlideViewProperties* CT_CommonSlideViewProperties::default_instance_ = NULL;

// CT_SlideViewProperties
CT_SlideViewProperties::CT_SlideViewProperties()
    :m_has_cSldViewPr(false),
     m_cSldViewPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_SlideViewProperties::~CT_SlideViewProperties()
{
    clear();
}
bool CT_SlideViewProperties::has_cSldViewPr() const
{
    return m_has_cSldViewPr;
}

CT_CommonSlideViewProperties* CT_SlideViewProperties::mutable_cSldViewPr()
{
    m_has_cSldViewPr = true;
    if (!m_cSldViewPr)
    {
        m_cSldViewPr = new CT_CommonSlideViewProperties();
    }
    return m_cSldViewPr;
}

const CT_CommonSlideViewProperties& CT_SlideViewProperties::get_cSldViewPr() const
{
    if (m_cSldViewPr)
    {
        return *m_cSldViewPr;
    }
    return CT_CommonSlideViewProperties::default_instance();
}

bool CT_SlideViewProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_SlideViewProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_SlideViewProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_SlideViewProperties::clear()
{
    m_has_cSldViewPr = false;

    if (m_cSldViewPr)
    {
        delete m_cSldViewPr;
        m_cSldViewPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_SlideViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cSldViewPr);


    if (m_has_cSldViewPr)
    {
        m_cSldViewPr->toXmlElem("p:cSldViewPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_SlideViewProperties& CT_SlideViewProperties::default_instance()
{
    if (!CT_SlideViewProperties::default_instance_)
    {
        CT_SlideViewProperties::default_instance_ = new CT_SlideViewProperties();
    }
    return *CT_SlideViewProperties::default_instance_;
}

CT_SlideViewProperties* CT_SlideViewProperties::default_instance_ = NULL;

// CT_NotesViewProperties
CT_NotesViewProperties::CT_NotesViewProperties()
    :m_has_cSldViewPr(false),
     m_cSldViewPr(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
CT_NotesViewProperties::~CT_NotesViewProperties()
{
    clear();
}
bool CT_NotesViewProperties::has_cSldViewPr() const
{
    return m_has_cSldViewPr;
}

CT_CommonSlideViewProperties* CT_NotesViewProperties::mutable_cSldViewPr()
{
    m_has_cSldViewPr = true;
    if (!m_cSldViewPr)
    {
        m_cSldViewPr = new CT_CommonSlideViewProperties();
    }
    return m_cSldViewPr;
}

const CT_CommonSlideViewProperties& CT_NotesViewProperties::get_cSldViewPr() const
{
    if (m_cSldViewPr)
    {
        return *m_cSldViewPr;
    }
    return CT_CommonSlideViewProperties::default_instance();
}

bool CT_NotesViewProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_NotesViewProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_NotesViewProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_NotesViewProperties::clear()
{
    m_has_cSldViewPr = false;

    if (m_cSldViewPr)
    {
        delete m_cSldViewPr;
        m_cSldViewPr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NotesViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cSldViewPr);


    if (m_has_cSldViewPr)
    {
        m_cSldViewPr->toXmlElem("p:cSldViewPr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NotesViewProperties& CT_NotesViewProperties::default_instance()
{
    if (!CT_NotesViewProperties::default_instance_)
    {
        CT_NotesViewProperties::default_instance_ = new CT_NotesViewProperties();
    }
    return *CT_NotesViewProperties::default_instance_;
}

CT_NotesViewProperties* CT_NotesViewProperties::default_instance_ = NULL;

// CT_ViewProperties
CT_ViewProperties::CT_ViewProperties()
    :m_has_normalViewPr(false),
     m_normalViewPr(NULL),
     m_has_slideViewPr(false),
     m_slideViewPr(NULL),
     m_has_outlineViewPr(false),
     m_outlineViewPr(NULL),
     m_has_notesTextViewPr(false),
     m_notesTextViewPr(NULL),
     m_has_sorterViewPr(false),
     m_sorterViewPr(NULL),
     m_has_notesViewPr(false),
     m_notesViewPr(NULL),
     m_has_gridSpacing(false),
     m_gridSpacing(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_lastView_attr(false),
     m_lastView_attr(NULL),
     m_has_showComments_attr(false),
     m_showComments_attr(false)
{
}
CT_ViewProperties::~CT_ViewProperties()
{
    clear();
}
bool CT_ViewProperties::has_normalViewPr() const
{
    return m_has_normalViewPr;
}

CT_NormalViewProperties* CT_ViewProperties::mutable_normalViewPr()
{
    m_has_normalViewPr = true;
    if (!m_normalViewPr)
    {
        m_normalViewPr = new CT_NormalViewProperties();
    }
    return m_normalViewPr;
}

const CT_NormalViewProperties& CT_ViewProperties::get_normalViewPr() const
{
    if (m_normalViewPr)
    {
        return *m_normalViewPr;
    }
    return CT_NormalViewProperties::default_instance();
}

bool CT_ViewProperties::has_slideViewPr() const
{
    return m_has_slideViewPr;
}

CT_SlideViewProperties* CT_ViewProperties::mutable_slideViewPr()
{
    m_has_slideViewPr = true;
    if (!m_slideViewPr)
    {
        m_slideViewPr = new CT_SlideViewProperties();
    }
    return m_slideViewPr;
}

const CT_SlideViewProperties& CT_ViewProperties::get_slideViewPr() const
{
    if (m_slideViewPr)
    {
        return *m_slideViewPr;
    }
    return CT_SlideViewProperties::default_instance();
}

bool CT_ViewProperties::has_outlineViewPr() const
{
    return m_has_outlineViewPr;
}

CT_OutlineViewProperties* CT_ViewProperties::mutable_outlineViewPr()
{
    m_has_outlineViewPr = true;
    if (!m_outlineViewPr)
    {
        m_outlineViewPr = new CT_OutlineViewProperties();
    }
    return m_outlineViewPr;
}

const CT_OutlineViewProperties& CT_ViewProperties::get_outlineViewPr() const
{
    if (m_outlineViewPr)
    {
        return *m_outlineViewPr;
    }
    return CT_OutlineViewProperties::default_instance();
}

bool CT_ViewProperties::has_notesTextViewPr() const
{
    return m_has_notesTextViewPr;
}

CT_NotesTextViewProperties* CT_ViewProperties::mutable_notesTextViewPr()
{
    m_has_notesTextViewPr = true;
    if (!m_notesTextViewPr)
    {
        m_notesTextViewPr = new CT_NotesTextViewProperties();
    }
    return m_notesTextViewPr;
}

const CT_NotesTextViewProperties& CT_ViewProperties::get_notesTextViewPr() const
{
    if (m_notesTextViewPr)
    {
        return *m_notesTextViewPr;
    }
    return CT_NotesTextViewProperties::default_instance();
}

bool CT_ViewProperties::has_sorterViewPr() const
{
    return m_has_sorterViewPr;
}

CT_SlideSorterViewProperties* CT_ViewProperties::mutable_sorterViewPr()
{
    m_has_sorterViewPr = true;
    if (!m_sorterViewPr)
    {
        m_sorterViewPr = new CT_SlideSorterViewProperties();
    }
    return m_sorterViewPr;
}

const CT_SlideSorterViewProperties& CT_ViewProperties::get_sorterViewPr() const
{
    if (m_sorterViewPr)
    {
        return *m_sorterViewPr;
    }
    return CT_SlideSorterViewProperties::default_instance();
}

bool CT_ViewProperties::has_notesViewPr() const
{
    return m_has_notesViewPr;
}

CT_NotesViewProperties* CT_ViewProperties::mutable_notesViewPr()
{
    m_has_notesViewPr = true;
    if (!m_notesViewPr)
    {
        m_notesViewPr = new CT_NotesViewProperties();
    }
    return m_notesViewPr;
}

const CT_NotesViewProperties& CT_ViewProperties::get_notesViewPr() const
{
    if (m_notesViewPr)
    {
        return *m_notesViewPr;
    }
    return CT_NotesViewProperties::default_instance();
}

bool CT_ViewProperties::has_gridSpacing() const
{
    return m_has_gridSpacing;
}

ns_a::CT_PositiveSize2D* CT_ViewProperties::mutable_gridSpacing()
{
    m_has_gridSpacing = true;
    if (!m_gridSpacing)
    {
        m_gridSpacing = new ns_a::CT_PositiveSize2D();
    }
    return m_gridSpacing;
}

const ns_a::CT_PositiveSize2D& CT_ViewProperties::get_gridSpacing() const
{
    if (m_gridSpacing)
    {
        return *m_gridSpacing;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
}

bool CT_ViewProperties::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* CT_ViewProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& CT_ViewProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void CT_ViewProperties::clear()
{
    m_has_lastView_attr = false;

    if (m_lastView_attr)
    {
        delete m_lastView_attr;
        m_lastView_attr = NULL;
    }


    m_has_showComments_attr = false;
    m_showComments_attr = false;

    m_has_normalViewPr = false;

    if (m_normalViewPr)
    {
        delete m_normalViewPr;
        m_normalViewPr = NULL;
    }


    m_has_slideViewPr = false;

    if (m_slideViewPr)
    {
        delete m_slideViewPr;
        m_slideViewPr = NULL;
    }


    m_has_outlineViewPr = false;

    if (m_outlineViewPr)
    {
        delete m_outlineViewPr;
        m_outlineViewPr = NULL;
    }


    m_has_notesTextViewPr = false;

    if (m_notesTextViewPr)
    {
        delete m_notesTextViewPr;
        m_notesTextViewPr = NULL;
    }


    m_has_sorterViewPr = false;

    if (m_sorterViewPr)
    {
        delete m_sorterViewPr;
        m_sorterViewPr = NULL;
    }


    m_has_notesViewPr = false;

    if (m_notesViewPr)
    {
        delete m_notesViewPr;
        m_notesViewPr = NULL;
    }


    m_has_gridSpacing = false;

    if (m_gridSpacing)
    {
        delete m_gridSpacing;
        m_gridSpacing = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ViewProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_lastView_attr)
    {
        m_lastView_attr->toXmlAttr("lastView", _outStream);
    }



    if (m_has_showComments_attr)
    {
        _outStream << " " << "showComments" << "=\"" << XSD::XMLBooleanStr(m_showComments_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_normalViewPr)
    {
        m_normalViewPr->toXmlElem("p:normalViewPr", "", _outStream);
    }


    if (m_has_slideViewPr)
    {
        m_slideViewPr->toXmlElem("p:slideViewPr", "", _outStream);
    }


    if (m_has_outlineViewPr)
    {
        m_outlineViewPr->toXmlElem("p:outlineViewPr", "", _outStream);
    }


    if (m_has_notesTextViewPr)
    {
        m_notesTextViewPr->toXmlElem("p:notesTextViewPr", "", _outStream);
    }


    if (m_has_sorterViewPr)
    {
        m_sorterViewPr->toXmlElem("p:sorterViewPr", "", _outStream);
    }


    if (m_has_notesViewPr)
    {
        m_notesViewPr->toXmlElem("p:notesViewPr", "", _outStream);
    }


    if (m_has_gridSpacing)
    {
        m_gridSpacing->toXmlElem("p:gridSpacing", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ViewProperties& CT_ViewProperties::default_instance()
{
    if (!CT_ViewProperties::default_instance_)
    {
        CT_ViewProperties::default_instance_ = new CT_ViewProperties();
    }
    return *CT_ViewProperties::default_instance_;
}

bool CT_ViewProperties::has_lastView_attr() const
{
    return m_has_lastView_attr;
}

void CT_ViewProperties::set_lastView_attr(const ST_ViewType& _lastView_attr)
{
    m_has_lastView_attr = true;
    m_lastView_attr = new ST_ViewType(_lastView_attr);
}

const ST_ViewType& CT_ViewProperties::get_lastView_attr() const
{
    if (m_lastView_attr)
    {
        return *m_lastView_attr;
    }
    return ST_ViewType::default_instance();
}

bool CT_ViewProperties::has_showComments_attr() const
{
    return m_has_showComments_attr;
}

void CT_ViewProperties::set_showComments_attr(const XSD::boolean_& _showComments_attr)
{
    m_has_showComments_attr = true;
    m_showComments_attr = _showComments_attr;
}

const XSD::boolean_& CT_ViewProperties::get_showComments_attr() const
{
    return m_showComments_attr;
}

CT_ViewProperties* CT_ViewProperties::default_instance_ = NULL;

// cmAuthorLst_element
cmAuthorLst_element::cmAuthorLst_element()

{
}
cmAuthorLst_element::~cmAuthorLst_element()
{
    clear();
}
CT_CommentAuthor* cmAuthorLst_element::add_cmAuthor()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_CommentAuthor* pNewChild = pChildGroup->mutable_cmAuthor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void cmAuthorLst_element::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void cmAuthorLst_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:cmAuthorLst";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_cmAuthor())
            {
                (*iter)->get_cmAuthor().toXmlElem("p:cmAuthor", "", _outStream);
            }


        }
    }

    _outStream << "</p:cmAuthorLst>";
}

const cmAuthorLst_element& cmAuthorLst_element::default_instance()
{
    if (!cmAuthorLst_element::default_instance_)
    {
        cmAuthorLst_element::default_instance_ = new cmAuthorLst_element();
    }
    return *cmAuthorLst_element::default_instance_;
}


// cmAuthorLst_element::ChildGroup_1
cmAuthorLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_cmAuthor(false),
     m_cmAuthor(NULL)
{
}
bool cmAuthorLst_element::ChildGroup_1::has_cmAuthor() const
{
    return m_has_cmAuthor;
}

CT_CommentAuthor* cmAuthorLst_element::ChildGroup_1::mutable_cmAuthor()
{

    m_has_cmAuthor = true;
    if (!m_cmAuthor)
    {
        m_cmAuthor = new CT_CommentAuthor();
    }
    return m_cmAuthor;
}

const CT_CommentAuthor& cmAuthorLst_element::ChildGroup_1::get_cmAuthor() const
{
    if (m_cmAuthor)
    {
        return *m_cmAuthor;
    }
    return CT_CommentAuthor::default_instance();
}

cmAuthorLst_element* cmAuthorLst_element::default_instance_ = NULL;

// cmLst_element
cmLst_element::cmLst_element()

{
}
cmLst_element::~cmLst_element()
{
    clear();
}
CT_Comment* cmLst_element::add_cm()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_Comment* pNewChild = pChildGroup->mutable_cm();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void cmLst_element::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void cmLst_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:cmLst";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_cm())
            {
                (*iter)->get_cm().toXmlElem("p:cm", "", _outStream);
            }


        }
    }

    _outStream << "</p:cmLst>";
}

const cmLst_element& cmLst_element::default_instance()
{
    if (!cmLst_element::default_instance_)
    {
        cmLst_element::default_instance_ = new cmLst_element();
    }
    return *cmLst_element::default_instance_;
}


// cmLst_element::ChildGroup_1
cmLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_cm(false),
     m_cm(NULL)
{
}
bool cmLst_element::ChildGroup_1::has_cm() const
{
    return m_has_cm;
}

CT_Comment* cmLst_element::ChildGroup_1::mutable_cm()
{

    m_has_cm = true;
    if (!m_cm)
    {
        m_cm = new CT_Comment();
    }
    return m_cm;
}

const CT_Comment& cmLst_element::ChildGroup_1::get_cm() const
{
    if (m_cm)
    {
        return *m_cm;
    }
    return CT_Comment::default_instance();
}

cmLst_element* cmLst_element::default_instance_ = NULL;

// oleObj_element
oleObj_element::oleObj_element()
    :m_has_embed(false),
     m_embed(NULL),
     m_has_link(false),
     m_link(NULL),
     m_has_pic(false),
     m_pic(NULL),
     m_has_spid_attr(false),
     m_spid_attr(NULL),
     m_has_name_attr(false),
     m_name_attr(""),
     m_has_showAsIcon_attr(false),
     m_showAsIcon_attr(false),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL),
     m_has_imgW_attr(false),
     m_imgW_attr(NULL),
     m_has_imgH_attr(false),
     m_imgH_attr(NULL),
     m_has_progId_attr(false),
     m_progId_attr("")
{
}
oleObj_element::~oleObj_element()
{
    clear();
}
bool oleObj_element::has_embed() const
{
    return m_has_embed;
}

CT_OleObjectEmbed* oleObj_element::mutable_embed()
{

    m_has_link = false;

    if (m_link)
    {
        delete m_link;
        m_link = NULL;
    }
    ;

    m_has_embed = true;
    if (!m_embed)
    {
        m_embed = new CT_OleObjectEmbed();
    }
    return m_embed;
}

const CT_OleObjectEmbed& oleObj_element::get_embed() const
{
    if (m_embed)
    {
        return *m_embed;
    }
    return CT_OleObjectEmbed::default_instance();
}

bool oleObj_element::has_link() const
{
    return m_has_link;
}

CT_OleObjectLink* oleObj_element::mutable_link()
{

    m_has_embed = false;

    if (m_embed)
    {
        delete m_embed;
        m_embed = NULL;
    }
    ;

    m_has_link = true;
    if (!m_link)
    {
        m_link = new CT_OleObjectLink();
    }
    return m_link;
}

const CT_OleObjectLink& oleObj_element::get_link() const
{
    if (m_link)
    {
        return *m_link;
    }
    return CT_OleObjectLink::default_instance();
}

bool oleObj_element::has_pic() const
{
    return m_has_pic;
}

CT_Picture* oleObj_element::mutable_pic()
{
    m_has_pic = true;
    if (!m_pic)
    {
        m_pic = new CT_Picture();
    }
    return m_pic;
}

const CT_Picture& oleObj_element::get_pic() const
{
    if (m_pic)
    {
        return *m_pic;
    }
    return CT_Picture::default_instance();
}

void oleObj_element::clear()
{
    m_has_spid_attr = false;

    if (m_spid_attr)
    {
        delete m_spid_attr;
        m_spid_attr = NULL;
    }


    m_has_name_attr = false;
    m_name_attr.clear();

    m_has_showAsIcon_attr = false;
    m_showAsIcon_attr = false;

    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_imgW_attr = false;

    if (m_imgW_attr)
    {
        delete m_imgW_attr;
        m_imgW_attr = NULL;
    }


    m_has_imgH_attr = false;

    if (m_imgH_attr)
    {
        delete m_imgH_attr;
        m_imgH_attr = NULL;
    }


    m_has_progId_attr = false;
    m_progId_attr.clear();

    m_has_embed = false;

    if (m_embed)
    {
        delete m_embed;
        m_embed = NULL;
    }


    m_has_link = false;

    if (m_link)
    {
        delete m_link;
        m_link = NULL;
    }


    m_has_pic = false;

    if (m_pic)
    {
        delete m_pic;
        m_pic = NULL;
    }

}

void oleObj_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:oleObj";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_spid_attr)
    {
        m_spid_attr->toXmlAttr("spid", _outStream);
    }



    if (m_has_name_attr)
    {
        _outStream << " " << "name" << "=\"" << m_name_attr << "\"";
    }



    if (m_has_showAsIcon_attr)
    {
        _outStream << " " << "showAsIcon" << "=\"" << XSD::XMLBooleanStr(m_showAsIcon_attr) << "\"";
    }



    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }



    if (m_has_imgW_attr)
    {
        m_imgW_attr->toXmlAttr("imgW", _outStream);
    }



    if (m_has_imgH_attr)
    {
        m_imgH_attr->toXmlAttr("imgH", _outStream);
    }



    if (m_has_progId_attr)
    {
        _outStream << " " << "progId" << "=\"" << m_progId_attr << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[2] = {m_has_embed, m_has_link};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 1);
    }


    if (m_has_embed)
    {
        m_embed->toXmlElem("p:embed", "", _outStream);
    }


    if (m_has_link)
    {
        m_link->toXmlElem("p:link", "", _outStream);
    }


    if (m_has_pic)
    {
        m_pic->toXmlElem("p:pic", "", _outStream);
    }

    _outStream << "</p:oleObj>";
}

const oleObj_element& oleObj_element::default_instance()
{
    if (!oleObj_element::default_instance_)
    {
        oleObj_element::default_instance_ = new oleObj_element();
    }
    return *oleObj_element::default_instance_;
}

bool oleObj_element::has_spid_attr() const
{
    return m_has_spid_attr;
}

void oleObj_element::set_spid_attr(const ns_a::ST_ShapeID& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = new ns_a::ST_ShapeID(_spid_attr);
}

const ns_a::ST_ShapeID& oleObj_element::get_spid_attr() const
{
    if (m_spid_attr)
    {
        return *m_spid_attr;
    }
    return ns_a::ST_ShapeID::default_instance();
}

bool oleObj_element::has_name_attr() const
{
    return m_has_name_attr;
}

void oleObj_element::set_name_attr(const XSD::string_& _name_attr)
{
    m_has_name_attr = true;
    m_name_attr = _name_attr;
}

const XSD::string_& oleObj_element::get_name_attr() const
{
    return m_name_attr;
}

bool oleObj_element::has_showAsIcon_attr() const
{
    return m_has_showAsIcon_attr;
}

void oleObj_element::set_showAsIcon_attr(const XSD::boolean_& _showAsIcon_attr)
{
    m_has_showAsIcon_attr = true;
    m_showAsIcon_attr = _showAsIcon_attr;
}

const XSD::boolean_& oleObj_element::get_showAsIcon_attr() const
{
    return m_showAsIcon_attr;
}

bool oleObj_element::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void oleObj_element::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& oleObj_element::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

bool oleObj_element::has_imgW_attr() const
{
    return m_has_imgW_attr;
}

void oleObj_element::set_imgW_attr(const ns_a::ST_PositiveCoordinate32& _imgW_attr)
{
    m_has_imgW_attr = true;
    m_imgW_attr = new ns_a::ST_PositiveCoordinate32(_imgW_attr);
}

const ns_a::ST_PositiveCoordinate32& oleObj_element::get_imgW_attr() const
{
    if (m_imgW_attr)
    {
        return *m_imgW_attr;
    }
    return ns_a::ST_PositiveCoordinate32::default_instance();
}

bool oleObj_element::has_imgH_attr() const
{
    return m_has_imgH_attr;
}

void oleObj_element::set_imgH_attr(const ns_a::ST_PositiveCoordinate32& _imgH_attr)
{
    m_has_imgH_attr = true;
    m_imgH_attr = new ns_a::ST_PositiveCoordinate32(_imgH_attr);
}

const ns_a::ST_PositiveCoordinate32& oleObj_element::get_imgH_attr() const
{
    if (m_imgH_attr)
    {
        return *m_imgH_attr;
    }
    return ns_a::ST_PositiveCoordinate32::default_instance();
}

bool oleObj_element::has_progId_attr() const
{
    return m_has_progId_attr;
}

void oleObj_element::set_progId_attr(const XSD::string_& _progId_attr)
{
    m_has_progId_attr = true;
    m_progId_attr = _progId_attr;
}

const XSD::string_& oleObj_element::get_progId_attr() const
{
    return m_progId_attr;
}

oleObj_element* oleObj_element::default_instance_ = NULL;

// presentation_element
presentation_element::presentation_element()
    :m_has_sldMasterIdLst(false),
     m_sldMasterIdLst(NULL),
     m_has_notesMasterIdLst(false),
     m_notesMasterIdLst(NULL),
     m_has_handoutMasterIdLst(false),
     m_handoutMasterIdLst(NULL),
     m_has_sldIdLst(false),
     m_sldIdLst(NULL),
     m_has_sldSz(false),
     m_sldSz(NULL),
     m_has_notesSz(false),
     m_notesSz(NULL),
     m_has_smartTags(false),
     m_smartTags(NULL),
     m_has_embeddedFontLst(false),
     m_embeddedFontLst(NULL),
     m_has_custShowLst(false),
     m_custShowLst(NULL),
     m_has_photoAlbum(false),
     m_photoAlbum(NULL),
     m_has_custDataLst(false),
     m_custDataLst(NULL),
     m_has_kinsoku(false),
     m_kinsoku(NULL),
     m_has_defaultTextStyle(false),
     m_defaultTextStyle(NULL),
     m_has_modifyVerifier(false),
     m_modifyVerifier(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_serverZoom_attr(false),
     m_serverZoom_attr(NULL),
     m_has_firstSlideNum_attr(false),
     m_firstSlideNum_attr(0),
     m_has_showSpecialPlsOnTitleSld_attr(false),
     m_showSpecialPlsOnTitleSld_attr(false),
     m_has_rtl_attr(false),
     m_rtl_attr(false),
     m_has_removePersonalInfoOnSave_attr(false),
     m_removePersonalInfoOnSave_attr(false),
     m_has_compatMode_attr(false),
     m_compatMode_attr(false),
     m_has_strictFirstAndLastChars_attr(false),
     m_strictFirstAndLastChars_attr(false),
     m_has_embedTrueTypeFonts_attr(false),
     m_embedTrueTypeFonts_attr(false),
     m_has_saveSubsetFonts_attr(false),
     m_saveSubsetFonts_attr(false),
     m_has_autoCompressPictures_attr(false),
     m_autoCompressPictures_attr(false),
     m_has_bookmarkIdSeed_attr(false),
     m_bookmarkIdSeed_attr(NULL),
     m_has_conformance_attr(false),
     m_conformance_attr(NULL)
{
}
presentation_element::~presentation_element()
{
    clear();
}
bool presentation_element::has_sldMasterIdLst() const
{
    return m_has_sldMasterIdLst;
}

CT_SlideMasterIdList* presentation_element::mutable_sldMasterIdLst()
{
    m_has_sldMasterIdLst = true;
    if (!m_sldMasterIdLst)
    {
        m_sldMasterIdLst = new CT_SlideMasterIdList();
    }
    return m_sldMasterIdLst;
}

const CT_SlideMasterIdList& presentation_element::get_sldMasterIdLst() const
{
    if (m_sldMasterIdLst)
    {
        return *m_sldMasterIdLst;
    }
    return CT_SlideMasterIdList::default_instance();
}

bool presentation_element::has_notesMasterIdLst() const
{
    return m_has_notesMasterIdLst;
}

CT_NotesMasterIdList* presentation_element::mutable_notesMasterIdLst()
{
    m_has_notesMasterIdLst = true;
    if (!m_notesMasterIdLst)
    {
        m_notesMasterIdLst = new CT_NotesMasterIdList();
    }
    return m_notesMasterIdLst;
}

const CT_NotesMasterIdList& presentation_element::get_notesMasterIdLst() const
{
    if (m_notesMasterIdLst)
    {
        return *m_notesMasterIdLst;
    }
    return CT_NotesMasterIdList::default_instance();
}

bool presentation_element::has_handoutMasterIdLst() const
{
    return m_has_handoutMasterIdLst;
}

CT_HandoutMasterIdList* presentation_element::mutable_handoutMasterIdLst()
{
    m_has_handoutMasterIdLst = true;
    if (!m_handoutMasterIdLst)
    {
        m_handoutMasterIdLst = new CT_HandoutMasterIdList();
    }
    return m_handoutMasterIdLst;
}

const CT_HandoutMasterIdList& presentation_element::get_handoutMasterIdLst() const
{
    if (m_handoutMasterIdLst)
    {
        return *m_handoutMasterIdLst;
    }
    return CT_HandoutMasterIdList::default_instance();
}

bool presentation_element::has_sldIdLst() const
{
    return m_has_sldIdLst;
}

CT_SlideIdList* presentation_element::mutable_sldIdLst()
{
    m_has_sldIdLst = true;
    if (!m_sldIdLst)
    {
        m_sldIdLst = new CT_SlideIdList();
    }
    return m_sldIdLst;
}

const CT_SlideIdList& presentation_element::get_sldIdLst() const
{
    if (m_sldIdLst)
    {
        return *m_sldIdLst;
    }
    return CT_SlideIdList::default_instance();
}

bool presentation_element::has_sldSz() const
{
    return m_has_sldSz;
}

CT_SlideSize* presentation_element::mutable_sldSz()
{
    m_has_sldSz = true;
    if (!m_sldSz)
    {
        m_sldSz = new CT_SlideSize();
    }
    return m_sldSz;
}

const CT_SlideSize& presentation_element::get_sldSz() const
{
    if (m_sldSz)
    {
        return *m_sldSz;
    }
    return CT_SlideSize::default_instance();
}

bool presentation_element::has_notesSz() const
{
    return m_has_notesSz;
}

ns_a::CT_PositiveSize2D* presentation_element::mutable_notesSz()
{
    m_has_notesSz = true;
    if (!m_notesSz)
    {
        m_notesSz = new ns_a::CT_PositiveSize2D();
    }
    return m_notesSz;
}

const ns_a::CT_PositiveSize2D& presentation_element::get_notesSz() const
{
    if (m_notesSz)
    {
        return *m_notesSz;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
}

bool presentation_element::has_smartTags() const
{
    return m_has_smartTags;
}

CT_SmartTags* presentation_element::mutable_smartTags()
{
    m_has_smartTags = true;
    if (!m_smartTags)
    {
        m_smartTags = new CT_SmartTags();
    }
    return m_smartTags;
}

const CT_SmartTags& presentation_element::get_smartTags() const
{
    if (m_smartTags)
    {
        return *m_smartTags;
    }
    return CT_SmartTags::default_instance();
}

bool presentation_element::has_embeddedFontLst() const
{
    return m_has_embeddedFontLst;
}

CT_EmbeddedFontList* presentation_element::mutable_embeddedFontLst()
{
    m_has_embeddedFontLst = true;
    if (!m_embeddedFontLst)
    {
        m_embeddedFontLst = new CT_EmbeddedFontList();
    }
    return m_embeddedFontLst;
}

const CT_EmbeddedFontList& presentation_element::get_embeddedFontLst() const
{
    if (m_embeddedFontLst)
    {
        return *m_embeddedFontLst;
    }
    return CT_EmbeddedFontList::default_instance();
}

bool presentation_element::has_custShowLst() const
{
    return m_has_custShowLst;
}

CT_CustomShowList* presentation_element::mutable_custShowLst()
{
    m_has_custShowLst = true;
    if (!m_custShowLst)
    {
        m_custShowLst = new CT_CustomShowList();
    }
    return m_custShowLst;
}

const CT_CustomShowList& presentation_element::get_custShowLst() const
{
    if (m_custShowLst)
    {
        return *m_custShowLst;
    }
    return CT_CustomShowList::default_instance();
}

bool presentation_element::has_photoAlbum() const
{
    return m_has_photoAlbum;
}

CT_PhotoAlbum* presentation_element::mutable_photoAlbum()
{
    m_has_photoAlbum = true;
    if (!m_photoAlbum)
    {
        m_photoAlbum = new CT_PhotoAlbum();
    }
    return m_photoAlbum;
}

const CT_PhotoAlbum& presentation_element::get_photoAlbum() const
{
    if (m_photoAlbum)
    {
        return *m_photoAlbum;
    }
    return CT_PhotoAlbum::default_instance();
}

bool presentation_element::has_custDataLst() const
{
    return m_has_custDataLst;
}

CT_CustomerDataList* presentation_element::mutable_custDataLst()
{
    m_has_custDataLst = true;
    if (!m_custDataLst)
    {
        m_custDataLst = new CT_CustomerDataList();
    }
    return m_custDataLst;
}

const CT_CustomerDataList& presentation_element::get_custDataLst() const
{
    if (m_custDataLst)
    {
        return *m_custDataLst;
    }
    return CT_CustomerDataList::default_instance();
}

bool presentation_element::has_kinsoku() const
{
    return m_has_kinsoku;
}

CT_Kinsoku* presentation_element::mutable_kinsoku()
{
    m_has_kinsoku = true;
    if (!m_kinsoku)
    {
        m_kinsoku = new CT_Kinsoku();
    }
    return m_kinsoku;
}

const CT_Kinsoku& presentation_element::get_kinsoku() const
{
    if (m_kinsoku)
    {
        return *m_kinsoku;
    }
    return CT_Kinsoku::default_instance();
}

bool presentation_element::has_defaultTextStyle() const
{
    return m_has_defaultTextStyle;
}

ns_a::CT_TextListStyle* presentation_element::mutable_defaultTextStyle()
{
    m_has_defaultTextStyle = true;
    if (!m_defaultTextStyle)
    {
        m_defaultTextStyle = new ns_a::CT_TextListStyle();
    }
    return m_defaultTextStyle;
}

const ns_a::CT_TextListStyle& presentation_element::get_defaultTextStyle() const
{
    if (m_defaultTextStyle)
    {
        return *m_defaultTextStyle;
    }
    return ns_a::CT_TextListStyle::default_instance();
}

bool presentation_element::has_modifyVerifier() const
{
    return m_has_modifyVerifier;
}

CT_ModifyVerifier* presentation_element::mutable_modifyVerifier()
{
    m_has_modifyVerifier = true;
    if (!m_modifyVerifier)
    {
        m_modifyVerifier = new CT_ModifyVerifier();
    }
    return m_modifyVerifier;
}

const CT_ModifyVerifier& presentation_element::get_modifyVerifier() const
{
    if (m_modifyVerifier)
    {
        return *m_modifyVerifier;
    }
    return CT_ModifyVerifier::default_instance();
}

bool presentation_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* presentation_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& presentation_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void presentation_element::clear()
{
    m_has_serverZoom_attr = false;

    if (m_serverZoom_attr)
    {
        delete m_serverZoom_attr;
        m_serverZoom_attr = NULL;
    }


    m_has_firstSlideNum_attr = false;
    m_firstSlideNum_attr = 0;

    m_has_showSpecialPlsOnTitleSld_attr = false;
    m_showSpecialPlsOnTitleSld_attr = false;

    m_has_rtl_attr = false;
    m_rtl_attr = false;

    m_has_removePersonalInfoOnSave_attr = false;
    m_removePersonalInfoOnSave_attr = false;

    m_has_compatMode_attr = false;
    m_compatMode_attr = false;

    m_has_strictFirstAndLastChars_attr = false;
    m_strictFirstAndLastChars_attr = false;

    m_has_embedTrueTypeFonts_attr = false;
    m_embedTrueTypeFonts_attr = false;

    m_has_saveSubsetFonts_attr = false;
    m_saveSubsetFonts_attr = false;

    m_has_autoCompressPictures_attr = false;
    m_autoCompressPictures_attr = false;

    m_has_bookmarkIdSeed_attr = false;

    if (m_bookmarkIdSeed_attr)
    {
        delete m_bookmarkIdSeed_attr;
        m_bookmarkIdSeed_attr = NULL;
    }


    m_has_conformance_attr = false;

    if (m_conformance_attr)
    {
        delete m_conformance_attr;
        m_conformance_attr = NULL;
    }


    m_has_sldMasterIdLst = false;

    if (m_sldMasterIdLst)
    {
        delete m_sldMasterIdLst;
        m_sldMasterIdLst = NULL;
    }


    m_has_notesMasterIdLst = false;

    if (m_notesMasterIdLst)
    {
        delete m_notesMasterIdLst;
        m_notesMasterIdLst = NULL;
    }


    m_has_handoutMasterIdLst = false;

    if (m_handoutMasterIdLst)
    {
        delete m_handoutMasterIdLst;
        m_handoutMasterIdLst = NULL;
    }


    m_has_sldIdLst = false;

    if (m_sldIdLst)
    {
        delete m_sldIdLst;
        m_sldIdLst = NULL;
    }


    m_has_sldSz = false;

    if (m_sldSz)
    {
        delete m_sldSz;
        m_sldSz = NULL;
    }


    m_has_notesSz = false;

    if (m_notesSz)
    {
        delete m_notesSz;
        m_notesSz = NULL;
    }


    m_has_smartTags = false;

    if (m_smartTags)
    {
        delete m_smartTags;
        m_smartTags = NULL;
    }


    m_has_embeddedFontLst = false;

    if (m_embeddedFontLst)
    {
        delete m_embeddedFontLst;
        m_embeddedFontLst = NULL;
    }


    m_has_custShowLst = false;

    if (m_custShowLst)
    {
        delete m_custShowLst;
        m_custShowLst = NULL;
    }


    m_has_photoAlbum = false;

    if (m_photoAlbum)
    {
        delete m_photoAlbum;
        m_photoAlbum = NULL;
    }


    m_has_custDataLst = false;

    if (m_custDataLst)
    {
        delete m_custDataLst;
        m_custDataLst = NULL;
    }


    m_has_kinsoku = false;

    if (m_kinsoku)
    {
        delete m_kinsoku;
        m_kinsoku = NULL;
    }


    m_has_defaultTextStyle = false;

    if (m_defaultTextStyle)
    {
        delete m_defaultTextStyle;
        m_defaultTextStyle = NULL;
    }


    m_has_modifyVerifier = false;

    if (m_modifyVerifier)
    {
        delete m_modifyVerifier;
        m_modifyVerifier = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void presentation_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:presentation";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_serverZoom_attr)
    {
        m_serverZoom_attr->toXmlAttr("serverZoom", _outStream);
    }



    if (m_has_firstSlideNum_attr)
    {
        _outStream << " " << "firstSlideNum" << "=\"" << m_firstSlideNum_attr << "\"";
    }



    if (m_has_showSpecialPlsOnTitleSld_attr)
    {
        _outStream << " " << "showSpecialPlsOnTitleSld" << "=\"" << XSD::XMLBooleanStr(m_showSpecialPlsOnTitleSld_attr) << "\"";
    }



    if (m_has_rtl_attr)
    {
        _outStream << " " << "rtl" << "=\"" << XSD::XMLBooleanStr(m_rtl_attr) << "\"";
    }



    if (m_has_removePersonalInfoOnSave_attr)
    {
        _outStream << " " << "removePersonalInfoOnSave" << "=\"" << XSD::XMLBooleanStr(m_removePersonalInfoOnSave_attr) << "\"";
    }



    if (m_has_compatMode_attr)
    {
        _outStream << " " << "compatMode" << "=\"" << XSD::XMLBooleanStr(m_compatMode_attr) << "\"";
    }



    if (m_has_strictFirstAndLastChars_attr)
    {
        _outStream << " " << "strictFirstAndLastChars" << "=\"" << XSD::XMLBooleanStr(m_strictFirstAndLastChars_attr) << "\"";
    }



    if (m_has_embedTrueTypeFonts_attr)
    {
        _outStream << " " << "embedTrueTypeFonts" << "=\"" << XSD::XMLBooleanStr(m_embedTrueTypeFonts_attr) << "\"";
    }



    if (m_has_saveSubsetFonts_attr)
    {
        _outStream << " " << "saveSubsetFonts" << "=\"" << XSD::XMLBooleanStr(m_saveSubsetFonts_attr) << "\"";
    }



    if (m_has_autoCompressPictures_attr)
    {
        _outStream << " " << "autoCompressPictures" << "=\"" << XSD::XMLBooleanStr(m_autoCompressPictures_attr) << "\"";
    }



    if (m_has_bookmarkIdSeed_attr)
    {
        m_bookmarkIdSeed_attr->toXmlAttr("bookmarkIdSeed", _outStream);
    }



    if (m_has_conformance_attr)
    {
        m_conformance_attr->toXmlAttr("conformance", _outStream);
    }

    _outStream << ">";

    assert(m_has_notesSz);


    if (m_has_sldMasterIdLst)
    {
        m_sldMasterIdLst->toXmlElem("p:sldMasterIdLst", "", _outStream);
    }


    if (m_has_notesMasterIdLst)
    {
        m_notesMasterIdLst->toXmlElem("p:notesMasterIdLst", "", _outStream);
    }


    if (m_has_handoutMasterIdLst)
    {
        m_handoutMasterIdLst->toXmlElem("p:handoutMasterIdLst", "", _outStream);
    }


    if (m_has_sldIdLst)
    {
        m_sldIdLst->toXmlElem("p:sldIdLst", "", _outStream);
    }


    if (m_has_sldSz)
    {
        m_sldSz->toXmlElem("p:sldSz", "", _outStream);
    }


    if (m_has_notesSz)
    {
        m_notesSz->toXmlElem("p:notesSz", "", _outStream);
    }


    if (m_has_smartTags)
    {
        m_smartTags->toXmlElem("p:smartTags", "", _outStream);
    }


    if (m_has_embeddedFontLst)
    {
        m_embeddedFontLst->toXmlElem("p:embeddedFontLst", "", _outStream);
    }


    if (m_has_custShowLst)
    {
        m_custShowLst->toXmlElem("p:custShowLst", "", _outStream);
    }


    if (m_has_photoAlbum)
    {
        m_photoAlbum->toXmlElem("p:photoAlbum", "", _outStream);
    }


    if (m_has_custDataLst)
    {
        m_custDataLst->toXmlElem("p:custDataLst", "", _outStream);
    }


    if (m_has_kinsoku)
    {
        m_kinsoku->toXmlElem("p:kinsoku", "", _outStream);
    }


    if (m_has_defaultTextStyle)
    {
        m_defaultTextStyle->toXmlElem("p:defaultTextStyle", "", _outStream);
    }


    if (m_has_modifyVerifier)
    {
        m_modifyVerifier->toXmlElem("p:modifyVerifier", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:presentation>";
}

const presentation_element& presentation_element::default_instance()
{
    if (!presentation_element::default_instance_)
    {
        presentation_element::default_instance_ = new presentation_element();
    }
    return *presentation_element::default_instance_;
}

bool presentation_element::has_serverZoom_attr() const
{
    return m_has_serverZoom_attr;
}

void presentation_element::set_serverZoom_attr(const ns_a::ST_Percentage& _serverZoom_attr)
{
    m_has_serverZoom_attr = true;
    m_serverZoom_attr = new ns_a::ST_Percentage(_serverZoom_attr);
}

const ns_a::ST_Percentage& presentation_element::get_serverZoom_attr() const
{
    if (m_serverZoom_attr)
    {
        return *m_serverZoom_attr;
    }
    return ns_a::ST_Percentage::default_instance();
}

bool presentation_element::has_firstSlideNum_attr() const
{
    return m_has_firstSlideNum_attr;
}

void presentation_element::set_firstSlideNum_attr(const XSD::int_& _firstSlideNum_attr)
{
    m_has_firstSlideNum_attr = true;
    m_firstSlideNum_attr = _firstSlideNum_attr;
}

const XSD::int_& presentation_element::get_firstSlideNum_attr() const
{
    return m_firstSlideNum_attr;
}

bool presentation_element::has_showSpecialPlsOnTitleSld_attr() const
{
    return m_has_showSpecialPlsOnTitleSld_attr;
}

void presentation_element::set_showSpecialPlsOnTitleSld_attr(const XSD::boolean_& _showSpecialPlsOnTitleSld_attr)
{
    m_has_showSpecialPlsOnTitleSld_attr = true;
    m_showSpecialPlsOnTitleSld_attr = _showSpecialPlsOnTitleSld_attr;
}

const XSD::boolean_& presentation_element::get_showSpecialPlsOnTitleSld_attr() const
{
    return m_showSpecialPlsOnTitleSld_attr;
}

bool presentation_element::has_rtl_attr() const
{
    return m_has_rtl_attr;
}

void presentation_element::set_rtl_attr(const XSD::boolean_& _rtl_attr)
{
    m_has_rtl_attr = true;
    m_rtl_attr = _rtl_attr;
}

const XSD::boolean_& presentation_element::get_rtl_attr() const
{
    return m_rtl_attr;
}

bool presentation_element::has_removePersonalInfoOnSave_attr() const
{
    return m_has_removePersonalInfoOnSave_attr;
}

void presentation_element::set_removePersonalInfoOnSave_attr(const XSD::boolean_& _removePersonalInfoOnSave_attr)
{
    m_has_removePersonalInfoOnSave_attr = true;
    m_removePersonalInfoOnSave_attr = _removePersonalInfoOnSave_attr;
}

const XSD::boolean_& presentation_element::get_removePersonalInfoOnSave_attr() const
{
    return m_removePersonalInfoOnSave_attr;
}

bool presentation_element::has_compatMode_attr() const
{
    return m_has_compatMode_attr;
}

void presentation_element::set_compatMode_attr(const XSD::boolean_& _compatMode_attr)
{
    m_has_compatMode_attr = true;
    m_compatMode_attr = _compatMode_attr;
}

const XSD::boolean_& presentation_element::get_compatMode_attr() const
{
    return m_compatMode_attr;
}

bool presentation_element::has_strictFirstAndLastChars_attr() const
{
    return m_has_strictFirstAndLastChars_attr;
}

void presentation_element::set_strictFirstAndLastChars_attr(const XSD::boolean_& _strictFirstAndLastChars_attr)
{
    m_has_strictFirstAndLastChars_attr = true;
    m_strictFirstAndLastChars_attr = _strictFirstAndLastChars_attr;
}

const XSD::boolean_& presentation_element::get_strictFirstAndLastChars_attr() const
{
    return m_strictFirstAndLastChars_attr;
}

bool presentation_element::has_embedTrueTypeFonts_attr() const
{
    return m_has_embedTrueTypeFonts_attr;
}

void presentation_element::set_embedTrueTypeFonts_attr(const XSD::boolean_& _embedTrueTypeFonts_attr)
{
    m_has_embedTrueTypeFonts_attr = true;
    m_embedTrueTypeFonts_attr = _embedTrueTypeFonts_attr;
}

const XSD::boolean_& presentation_element::get_embedTrueTypeFonts_attr() const
{
    return m_embedTrueTypeFonts_attr;
}

bool presentation_element::has_saveSubsetFonts_attr() const
{
    return m_has_saveSubsetFonts_attr;
}

void presentation_element::set_saveSubsetFonts_attr(const XSD::boolean_& _saveSubsetFonts_attr)
{
    m_has_saveSubsetFonts_attr = true;
    m_saveSubsetFonts_attr = _saveSubsetFonts_attr;
}

const XSD::boolean_& presentation_element::get_saveSubsetFonts_attr() const
{
    return m_saveSubsetFonts_attr;
}

bool presentation_element::has_autoCompressPictures_attr() const
{
    return m_has_autoCompressPictures_attr;
}

void presentation_element::set_autoCompressPictures_attr(const XSD::boolean_& _autoCompressPictures_attr)
{
    m_has_autoCompressPictures_attr = true;
    m_autoCompressPictures_attr = _autoCompressPictures_attr;
}

const XSD::boolean_& presentation_element::get_autoCompressPictures_attr() const
{
    return m_autoCompressPictures_attr;
}

bool presentation_element::has_bookmarkIdSeed_attr() const
{
    return m_has_bookmarkIdSeed_attr;
}

void presentation_element::set_bookmarkIdSeed_attr(const ST_BookmarkIdSeed& _bookmarkIdSeed_attr)
{
    m_has_bookmarkIdSeed_attr = true;
    m_bookmarkIdSeed_attr = new ST_BookmarkIdSeed(_bookmarkIdSeed_attr);
}

const ST_BookmarkIdSeed& presentation_element::get_bookmarkIdSeed_attr() const
{
    if (m_bookmarkIdSeed_attr)
    {
        return *m_bookmarkIdSeed_attr;
    }
    return ST_BookmarkIdSeed::default_instance();
}

bool presentation_element::has_conformance_attr() const
{
    return m_has_conformance_attr;
}

void presentation_element::set_conformance_attr(const ns_s::ST_ConformanceClass& _conformance_attr)
{
    m_has_conformance_attr = true;
    m_conformance_attr = new ns_s::ST_ConformanceClass(_conformance_attr);
}

const ns_s::ST_ConformanceClass& presentation_element::get_conformance_attr() const
{
    if (m_conformance_attr)
    {
        return *m_conformance_attr;
    }
    return ns_s::ST_ConformanceClass::default_instance();
}

presentation_element* presentation_element::default_instance_ = NULL;

// presentationPr_element
presentationPr_element::presentationPr_element()
    :m_has_htmlPubPr(false),
     m_htmlPubPr(NULL),
     m_has_webPr(false),
     m_webPr(NULL),
     m_has_prnPr(false),
     m_prnPr(NULL),
     m_has_showPr(false),
     m_showPr(NULL),
     m_has_clrMru(false),
     m_clrMru(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
presentationPr_element::~presentationPr_element()
{
    clear();
}
bool presentationPr_element::has_htmlPubPr() const
{
    return m_has_htmlPubPr;
}

CT_HtmlPublishProperties* presentationPr_element::mutable_htmlPubPr()
{
    m_has_htmlPubPr = true;
    if (!m_htmlPubPr)
    {
        m_htmlPubPr = new CT_HtmlPublishProperties();
    }
    return m_htmlPubPr;
}

const CT_HtmlPublishProperties& presentationPr_element::get_htmlPubPr() const
{
    if (m_htmlPubPr)
    {
        return *m_htmlPubPr;
    }
    return CT_HtmlPublishProperties::default_instance();
}

bool presentationPr_element::has_webPr() const
{
    return m_has_webPr;
}

CT_WebProperties* presentationPr_element::mutable_webPr()
{
    m_has_webPr = true;
    if (!m_webPr)
    {
        m_webPr = new CT_WebProperties();
    }
    return m_webPr;
}

const CT_WebProperties& presentationPr_element::get_webPr() const
{
    if (m_webPr)
    {
        return *m_webPr;
    }
    return CT_WebProperties::default_instance();
}

bool presentationPr_element::has_prnPr() const
{
    return m_has_prnPr;
}

CT_PrintProperties* presentationPr_element::mutable_prnPr()
{
    m_has_prnPr = true;
    if (!m_prnPr)
    {
        m_prnPr = new CT_PrintProperties();
    }
    return m_prnPr;
}

const CT_PrintProperties& presentationPr_element::get_prnPr() const
{
    if (m_prnPr)
    {
        return *m_prnPr;
    }
    return CT_PrintProperties::default_instance();
}

bool presentationPr_element::has_showPr() const
{
    return m_has_showPr;
}

CT_ShowProperties* presentationPr_element::mutable_showPr()
{
    m_has_showPr = true;
    if (!m_showPr)
    {
        m_showPr = new CT_ShowProperties();
    }
    return m_showPr;
}

const CT_ShowProperties& presentationPr_element::get_showPr() const
{
    if (m_showPr)
    {
        return *m_showPr;
    }
    return CT_ShowProperties::default_instance();
}

bool presentationPr_element::has_clrMru() const
{
    return m_has_clrMru;
}

ns_a::CT_ColorMRU* presentationPr_element::mutable_clrMru()
{
    m_has_clrMru = true;
    if (!m_clrMru)
    {
        m_clrMru = new ns_a::CT_ColorMRU();
    }
    return m_clrMru;
}

const ns_a::CT_ColorMRU& presentationPr_element::get_clrMru() const
{
    if (m_clrMru)
    {
        return *m_clrMru;
    }
    return ns_a::CT_ColorMRU::default_instance();
}

bool presentationPr_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* presentationPr_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& presentationPr_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void presentationPr_element::clear()
{
    m_has_htmlPubPr = false;

    if (m_htmlPubPr)
    {
        delete m_htmlPubPr;
        m_htmlPubPr = NULL;
    }


    m_has_webPr = false;

    if (m_webPr)
    {
        delete m_webPr;
        m_webPr = NULL;
    }


    m_has_prnPr = false;

    if (m_prnPr)
    {
        delete m_prnPr;
        m_prnPr = NULL;
    }


    m_has_showPr = false;

    if (m_showPr)
    {
        delete m_showPr;
        m_showPr = NULL;
    }


    m_has_clrMru = false;

    if (m_clrMru)
    {
        delete m_clrMru;
        m_clrMru = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void presentationPr_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:presentationPr";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";


    if (m_has_htmlPubPr)
    {
        m_htmlPubPr->toXmlElem("p:htmlPubPr", "", _outStream);
    }


    if (m_has_webPr)
    {
        m_webPr->toXmlElem("p:webPr", "", _outStream);
    }


    if (m_has_prnPr)
    {
        m_prnPr->toXmlElem("p:prnPr", "", _outStream);
    }


    if (m_has_showPr)
    {
        m_showPr->toXmlElem("p:showPr", "", _outStream);
    }


    if (m_has_clrMru)
    {
        m_clrMru->toXmlElem("p:clrMru", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:presentationPr>";
}

const presentationPr_element& presentationPr_element::default_instance()
{
    if (!presentationPr_element::default_instance_)
    {
        presentationPr_element::default_instance_ = new presentationPr_element();
    }
    return *presentationPr_element::default_instance_;
}

presentationPr_element* presentationPr_element::default_instance_ = NULL;

// sld_element
sld_element::sld_element()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMapOvr(false),
     m_clrMapOvr(NULL),
     m_has_transition(false),
     m_transition(NULL),
     m_has_timing(false),
     m_timing(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showMasterSp_attr(false),
     m_showMasterSp_attr(false),
     m_has_showMasterPhAnim_attr(false),
     m_showMasterPhAnim_attr(false),
     m_has_show_attr(false),
     m_show_attr(false)
{
}
sld_element::~sld_element()
{
    clear();
}
bool sld_element::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* sld_element::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& sld_element::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool sld_element::has_clrMapOvr() const
{
    return m_has_clrMapOvr;
}

ns_a::CT_ColorMappingOverride* sld_element::mutable_clrMapOvr()
{
    m_has_clrMapOvr = true;
    if (!m_clrMapOvr)
    {
        m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
    }
    return m_clrMapOvr;
}

const ns_a::CT_ColorMappingOverride& sld_element::get_clrMapOvr() const
{
    if (m_clrMapOvr)
    {
        return *m_clrMapOvr;
    }
    return ns_a::CT_ColorMappingOverride::default_instance();
}

bool sld_element::has_transition() const
{
    return m_has_transition;
}

CT_SlideTransition* sld_element::mutable_transition()
{
    m_has_transition = true;
    if (!m_transition)
    {
        m_transition = new CT_SlideTransition();
    }
    return m_transition;
}

const CT_SlideTransition& sld_element::get_transition() const
{
    if (m_transition)
    {
        return *m_transition;
    }
    return CT_SlideTransition::default_instance();
}

bool sld_element::has_timing() const
{
    return m_has_timing;
}

CT_SlideTiming* sld_element::mutable_timing()
{
    m_has_timing = true;
    if (!m_timing)
    {
        m_timing = new CT_SlideTiming();
    }
    return m_timing;
}

const CT_SlideTiming& sld_element::get_timing() const
{
    if (m_timing)
    {
        return *m_timing;
    }
    return CT_SlideTiming::default_instance();
}

bool sld_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* sld_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& sld_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void sld_element::clear()
{
    m_has_showMasterSp_attr = false;
    m_showMasterSp_attr = false;

    m_has_showMasterPhAnim_attr = false;
    m_showMasterPhAnim_attr = false;

    m_has_show_attr = false;
    m_show_attr = false;

    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMapOvr = false;

    if (m_clrMapOvr)
    {
        delete m_clrMapOvr;
        m_clrMapOvr = NULL;
    }


    m_has_transition = false;

    if (m_transition)
    {
        delete m_transition;
        m_transition = NULL;
    }


    m_has_timing = false;

    if (m_timing)
    {
        delete m_timing;
        m_timing = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void sld_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:sld";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_showMasterSp_attr)
    {
        _outStream << " " << "showMasterSp" << "=\"" << XSD::XMLBooleanStr(m_showMasterSp_attr) << "\"";
    }



    if (m_has_showMasterPhAnim_attr)
    {
        _outStream << " " << "showMasterPhAnim" << "=\"" << XSD::XMLBooleanStr(m_showMasterPhAnim_attr) << "\"";
    }



    if (m_has_show_attr)
    {
        _outStream << " " << "show" << "=\"" << XSD::XMLBooleanStr(m_show_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cSld);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMapOvr)
    {
        m_clrMapOvr->toXmlElem("p:clrMapOvr", "", _outStream);
    }


    if (m_has_transition)
    {
        m_transition->toXmlElem("p:transition", "", _outStream);
    }


    if (m_has_timing)
    {
        m_timing->toXmlElem("p:timing", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:sld>";
}

const sld_element& sld_element::default_instance()
{
    if (!sld_element::default_instance_)
    {
        sld_element::default_instance_ = new sld_element();
    }
    return *sld_element::default_instance_;
}

bool sld_element::has_showMasterSp_attr() const
{
    return m_has_showMasterSp_attr;
}

void sld_element::set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr)
{
    m_has_showMasterSp_attr = true;
    m_showMasterSp_attr = _showMasterSp_attr;
}

const XSD::boolean_& sld_element::get_showMasterSp_attr() const
{
    return m_showMasterSp_attr;
}

bool sld_element::has_showMasterPhAnim_attr() const
{
    return m_has_showMasterPhAnim_attr;
}

void sld_element::set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr)
{
    m_has_showMasterPhAnim_attr = true;
    m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
}

const XSD::boolean_& sld_element::get_showMasterPhAnim_attr() const
{
    return m_showMasterPhAnim_attr;
}

bool sld_element::has_show_attr() const
{
    return m_has_show_attr;
}

void sld_element::set_show_attr(const XSD::boolean_& _show_attr)
{
    m_has_show_attr = true;
    m_show_attr = _show_attr;
}

const XSD::boolean_& sld_element::get_show_attr() const
{
    return m_show_attr;
}

sld_element* sld_element::default_instance_ = NULL;

// sldLayout_element
sldLayout_element::sldLayout_element()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMapOvr(false),
     m_clrMapOvr(NULL),
     m_has_transition(false),
     m_transition(NULL),
     m_has_timing(false),
     m_timing(NULL),
     m_has_hf(false),
     m_hf(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showMasterSp_attr(false),
     m_showMasterSp_attr(false),
     m_has_showMasterPhAnim_attr(false),
     m_showMasterPhAnim_attr(false),
     m_has_matchingName_attr(false),
     m_matchingName_attr(""),
     m_has_type_attr(false),
     m_type_attr(NULL),
     m_has_preserve_attr(false),
     m_preserve_attr(false),
     m_has_userDrawn_attr(false),
     m_userDrawn_attr(false)
{
}
sldLayout_element::~sldLayout_element()
{
    clear();
}
bool sldLayout_element::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* sldLayout_element::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& sldLayout_element::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool sldLayout_element::has_clrMapOvr() const
{
    return m_has_clrMapOvr;
}

ns_a::CT_ColorMappingOverride* sldLayout_element::mutable_clrMapOvr()
{
    m_has_clrMapOvr = true;
    if (!m_clrMapOvr)
    {
        m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
    }
    return m_clrMapOvr;
}

const ns_a::CT_ColorMappingOverride& sldLayout_element::get_clrMapOvr() const
{
    if (m_clrMapOvr)
    {
        return *m_clrMapOvr;
    }
    return ns_a::CT_ColorMappingOverride::default_instance();
}

bool sldLayout_element::has_transition() const
{
    return m_has_transition;
}

CT_SlideTransition* sldLayout_element::mutable_transition()
{
    m_has_transition = true;
    if (!m_transition)
    {
        m_transition = new CT_SlideTransition();
    }
    return m_transition;
}

const CT_SlideTransition& sldLayout_element::get_transition() const
{
    if (m_transition)
    {
        return *m_transition;
    }
    return CT_SlideTransition::default_instance();
}

bool sldLayout_element::has_timing() const
{
    return m_has_timing;
}

CT_SlideTiming* sldLayout_element::mutable_timing()
{
    m_has_timing = true;
    if (!m_timing)
    {
        m_timing = new CT_SlideTiming();
    }
    return m_timing;
}

const CT_SlideTiming& sldLayout_element::get_timing() const
{
    if (m_timing)
    {
        return *m_timing;
    }
    return CT_SlideTiming::default_instance();
}

bool sldLayout_element::has_hf() const
{
    return m_has_hf;
}

CT_HeaderFooter* sldLayout_element::mutable_hf()
{
    m_has_hf = true;
    if (!m_hf)
    {
        m_hf = new CT_HeaderFooter();
    }
    return m_hf;
}

const CT_HeaderFooter& sldLayout_element::get_hf() const
{
    if (m_hf)
    {
        return *m_hf;
    }
    return CT_HeaderFooter::default_instance();
}

bool sldLayout_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* sldLayout_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& sldLayout_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void sldLayout_element::clear()
{
    m_has_showMasterSp_attr = false;
    m_showMasterSp_attr = false;

    m_has_showMasterPhAnim_attr = false;
    m_showMasterPhAnim_attr = false;

    m_has_matchingName_attr = false;
    m_matchingName_attr.clear();

    m_has_type_attr = false;

    if (m_type_attr)
    {
        delete m_type_attr;
        m_type_attr = NULL;
    }


    m_has_preserve_attr = false;
    m_preserve_attr = false;

    m_has_userDrawn_attr = false;
    m_userDrawn_attr = false;

    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMapOvr = false;

    if (m_clrMapOvr)
    {
        delete m_clrMapOvr;
        m_clrMapOvr = NULL;
    }


    m_has_transition = false;

    if (m_transition)
    {
        delete m_transition;
        m_transition = NULL;
    }


    m_has_timing = false;

    if (m_timing)
    {
        delete m_timing;
        m_timing = NULL;
    }


    m_has_hf = false;

    if (m_hf)
    {
        delete m_hf;
        m_hf = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void sldLayout_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:sldLayout";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_showMasterSp_attr)
    {
        _outStream << " " << "showMasterSp" << "=\"" << XSD::XMLBooleanStr(m_showMasterSp_attr) << "\"";
    }



    if (m_has_showMasterPhAnim_attr)
    {
        _outStream << " " << "showMasterPhAnim" << "=\"" << XSD::XMLBooleanStr(m_showMasterPhAnim_attr) << "\"";
    }



    if (m_has_matchingName_attr)
    {
        _outStream << " " << "matchingName" << "=\"" << m_matchingName_attr << "\"";
    }



    if (m_has_type_attr)
    {
        m_type_attr->toXmlAttr("type", _outStream);
    }



    if (m_has_preserve_attr)
    {
        _outStream << " " << "preserve" << "=\"" << XSD::XMLBooleanStr(m_preserve_attr) << "\"";
    }



    if (m_has_userDrawn_attr)
    {
        _outStream << " " << "userDrawn" << "=\"" << XSD::XMLBooleanStr(m_userDrawn_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cSld);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMapOvr)
    {
        m_clrMapOvr->toXmlElem("p:clrMapOvr", "", _outStream);
    }


    if (m_has_transition)
    {
        m_transition->toXmlElem("p:transition", "", _outStream);
    }


    if (m_has_timing)
    {
        m_timing->toXmlElem("p:timing", "", _outStream);
    }


    if (m_has_hf)
    {
        m_hf->toXmlElem("p:hf", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:sldLayout>";
}

const sldLayout_element& sldLayout_element::default_instance()
{
    if (!sldLayout_element::default_instance_)
    {
        sldLayout_element::default_instance_ = new sldLayout_element();
    }
    return *sldLayout_element::default_instance_;
}

bool sldLayout_element::has_showMasterSp_attr() const
{
    return m_has_showMasterSp_attr;
}

void sldLayout_element::set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr)
{
    m_has_showMasterSp_attr = true;
    m_showMasterSp_attr = _showMasterSp_attr;
}

const XSD::boolean_& sldLayout_element::get_showMasterSp_attr() const
{
    return m_showMasterSp_attr;
}

bool sldLayout_element::has_showMasterPhAnim_attr() const
{
    return m_has_showMasterPhAnim_attr;
}

void sldLayout_element::set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr)
{
    m_has_showMasterPhAnim_attr = true;
    m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
}

const XSD::boolean_& sldLayout_element::get_showMasterPhAnim_attr() const
{
    return m_showMasterPhAnim_attr;
}

bool sldLayout_element::has_matchingName_attr() const
{
    return m_has_matchingName_attr;
}

void sldLayout_element::set_matchingName_attr(const XSD::string_& _matchingName_attr)
{
    m_has_matchingName_attr = true;
    m_matchingName_attr = _matchingName_attr;
}

const XSD::string_& sldLayout_element::get_matchingName_attr() const
{
    return m_matchingName_attr;
}

bool sldLayout_element::has_type_attr() const
{
    return m_has_type_attr;
}

void sldLayout_element::set_type_attr(const ST_SlideLayoutType& _type_attr)
{
    m_has_type_attr = true;
    m_type_attr = new ST_SlideLayoutType(_type_attr);
}

const ST_SlideLayoutType& sldLayout_element::get_type_attr() const
{
    if (m_type_attr)
    {
        return *m_type_attr;
    }
    return ST_SlideLayoutType::default_instance();
}

bool sldLayout_element::has_preserve_attr() const
{
    return m_has_preserve_attr;
}

void sldLayout_element::set_preserve_attr(const XSD::boolean_& _preserve_attr)
{
    m_has_preserve_attr = true;
    m_preserve_attr = _preserve_attr;
}

const XSD::boolean_& sldLayout_element::get_preserve_attr() const
{
    return m_preserve_attr;
}

bool sldLayout_element::has_userDrawn_attr() const
{
    return m_has_userDrawn_attr;
}

void sldLayout_element::set_userDrawn_attr(const XSD::boolean_& _userDrawn_attr)
{
    m_has_userDrawn_attr = true;
    m_userDrawn_attr = _userDrawn_attr;
}

const XSD::boolean_& sldLayout_element::get_userDrawn_attr() const
{
    return m_userDrawn_attr;
}

sldLayout_element* sldLayout_element::default_instance_ = NULL;

// sldMaster_element
sldMaster_element::sldMaster_element()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMap(false),
     m_clrMap(NULL),
     m_has_sldLayoutIdLst(false),
     m_sldLayoutIdLst(NULL),
     m_has_transition(false),
     m_transition(NULL),
     m_has_timing(false),
     m_timing(NULL),
     m_has_hf(false),
     m_hf(NULL),
     m_has_txStyles(false),
     m_txStyles(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_preserve_attr(false),
     m_preserve_attr(false)
{
}
sldMaster_element::~sldMaster_element()
{
    clear();
}
bool sldMaster_element::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* sldMaster_element::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& sldMaster_element::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool sldMaster_element::has_clrMap() const
{
    return m_has_clrMap;
}

ns_a::CT_ColorMapping* sldMaster_element::mutable_clrMap()
{
    m_has_clrMap = true;
    if (!m_clrMap)
    {
        m_clrMap = new ns_a::CT_ColorMapping();
    }
    return m_clrMap;
}

const ns_a::CT_ColorMapping& sldMaster_element::get_clrMap() const
{
    if (m_clrMap)
    {
        return *m_clrMap;
    }
    return ns_a::CT_ColorMapping::default_instance();
}

bool sldMaster_element::has_sldLayoutIdLst() const
{
    return m_has_sldLayoutIdLst;
}

CT_SlideLayoutIdList* sldMaster_element::mutable_sldLayoutIdLst()
{
    m_has_sldLayoutIdLst = true;
    if (!m_sldLayoutIdLst)
    {
        m_sldLayoutIdLst = new CT_SlideLayoutIdList();
    }
    return m_sldLayoutIdLst;
}

const CT_SlideLayoutIdList& sldMaster_element::get_sldLayoutIdLst() const
{
    if (m_sldLayoutIdLst)
    {
        return *m_sldLayoutIdLst;
    }
    return CT_SlideLayoutIdList::default_instance();
}

bool sldMaster_element::has_transition() const
{
    return m_has_transition;
}

CT_SlideTransition* sldMaster_element::mutable_transition()
{
    m_has_transition = true;
    if (!m_transition)
    {
        m_transition = new CT_SlideTransition();
    }
    return m_transition;
}

const CT_SlideTransition& sldMaster_element::get_transition() const
{
    if (m_transition)
    {
        return *m_transition;
    }
    return CT_SlideTransition::default_instance();
}

bool sldMaster_element::has_timing() const
{
    return m_has_timing;
}

CT_SlideTiming* sldMaster_element::mutable_timing()
{
    m_has_timing = true;
    if (!m_timing)
    {
        m_timing = new CT_SlideTiming();
    }
    return m_timing;
}

const CT_SlideTiming& sldMaster_element::get_timing() const
{
    if (m_timing)
    {
        return *m_timing;
    }
    return CT_SlideTiming::default_instance();
}

bool sldMaster_element::has_hf() const
{
    return m_has_hf;
}

CT_HeaderFooter* sldMaster_element::mutable_hf()
{
    m_has_hf = true;
    if (!m_hf)
    {
        m_hf = new CT_HeaderFooter();
    }
    return m_hf;
}

const CT_HeaderFooter& sldMaster_element::get_hf() const
{
    if (m_hf)
    {
        return *m_hf;
    }
    return CT_HeaderFooter::default_instance();
}

bool sldMaster_element::has_txStyles() const
{
    return m_has_txStyles;
}

CT_SlideMasterTextStyles* sldMaster_element::mutable_txStyles()
{
    m_has_txStyles = true;
    if (!m_txStyles)
    {
        m_txStyles = new CT_SlideMasterTextStyles();
    }
    return m_txStyles;
}

const CT_SlideMasterTextStyles& sldMaster_element::get_txStyles() const
{
    if (m_txStyles)
    {
        return *m_txStyles;
    }
    return CT_SlideMasterTextStyles::default_instance();
}

bool sldMaster_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* sldMaster_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& sldMaster_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void sldMaster_element::clear()
{
    m_has_preserve_attr = false;
    m_preserve_attr = false;

    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMap = false;

    if (m_clrMap)
    {
        delete m_clrMap;
        m_clrMap = NULL;
    }


    m_has_sldLayoutIdLst = false;

    if (m_sldLayoutIdLst)
    {
        delete m_sldLayoutIdLst;
        m_sldLayoutIdLst = NULL;
    }


    m_has_transition = false;

    if (m_transition)
    {
        delete m_transition;
        m_transition = NULL;
    }


    m_has_timing = false;

    if (m_timing)
    {
        delete m_timing;
        m_timing = NULL;
    }


    m_has_hf = false;

    if (m_hf)
    {
        delete m_hf;
        m_hf = NULL;
    }


    m_has_txStyles = false;

    if (m_txStyles)
    {
        delete m_txStyles;
        m_txStyles = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void sldMaster_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:sldMaster";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_preserve_attr)
    {
        _outStream << " " << "preserve" << "=\"" << XSD::XMLBooleanStr(m_preserve_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cSld);


    assert(m_has_clrMap);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMap)
    {
        m_clrMap->toXmlElem("p:clrMap", "", _outStream);
    }


    if (m_has_sldLayoutIdLst)
    {
        m_sldLayoutIdLst->toXmlElem("p:sldLayoutIdLst", "", _outStream);
    }


    if (m_has_transition)
    {
        m_transition->toXmlElem("p:transition", "", _outStream);
    }


    if (m_has_timing)
    {
        m_timing->toXmlElem("p:timing", "", _outStream);
    }


    if (m_has_hf)
    {
        m_hf->toXmlElem("p:hf", "", _outStream);
    }


    if (m_has_txStyles)
    {
        m_txStyles->toXmlElem("p:txStyles", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:sldMaster>";
}

const sldMaster_element& sldMaster_element::default_instance()
{
    if (!sldMaster_element::default_instance_)
    {
        sldMaster_element::default_instance_ = new sldMaster_element();
    }
    return *sldMaster_element::default_instance_;
}

bool sldMaster_element::has_preserve_attr() const
{
    return m_has_preserve_attr;
}

void sldMaster_element::set_preserve_attr(const XSD::boolean_& _preserve_attr)
{
    m_has_preserve_attr = true;
    m_preserve_attr = _preserve_attr;
}

const XSD::boolean_& sldMaster_element::get_preserve_attr() const
{
    return m_preserve_attr;
}

sldMaster_element* sldMaster_element::default_instance_ = NULL;

// handoutMaster_element
handoutMaster_element::handoutMaster_element()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMap(false),
     m_clrMap(NULL),
     m_has_hf(false),
     m_hf(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
handoutMaster_element::~handoutMaster_element()
{
    clear();
}
bool handoutMaster_element::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* handoutMaster_element::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& handoutMaster_element::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool handoutMaster_element::has_clrMap() const
{
    return m_has_clrMap;
}

ns_a::CT_ColorMapping* handoutMaster_element::mutable_clrMap()
{
    m_has_clrMap = true;
    if (!m_clrMap)
    {
        m_clrMap = new ns_a::CT_ColorMapping();
    }
    return m_clrMap;
}

const ns_a::CT_ColorMapping& handoutMaster_element::get_clrMap() const
{
    if (m_clrMap)
    {
        return *m_clrMap;
    }
    return ns_a::CT_ColorMapping::default_instance();
}

bool handoutMaster_element::has_hf() const
{
    return m_has_hf;
}

CT_HeaderFooter* handoutMaster_element::mutable_hf()
{
    m_has_hf = true;
    if (!m_hf)
    {
        m_hf = new CT_HeaderFooter();
    }
    return m_hf;
}

const CT_HeaderFooter& handoutMaster_element::get_hf() const
{
    if (m_hf)
    {
        return *m_hf;
    }
    return CT_HeaderFooter::default_instance();
}

bool handoutMaster_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* handoutMaster_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& handoutMaster_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void handoutMaster_element::clear()
{
    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMap = false;

    if (m_clrMap)
    {
        delete m_clrMap;
        m_clrMap = NULL;
    }


    m_has_hf = false;

    if (m_hf)
    {
        delete m_hf;
        m_hf = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void handoutMaster_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:handoutMaster";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    assert(m_has_cSld);


    assert(m_has_clrMap);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMap)
    {
        m_clrMap->toXmlElem("p:clrMap", "", _outStream);
    }


    if (m_has_hf)
    {
        m_hf->toXmlElem("p:hf", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:handoutMaster>";
}

const handoutMaster_element& handoutMaster_element::default_instance()
{
    if (!handoutMaster_element::default_instance_)
    {
        handoutMaster_element::default_instance_ = new handoutMaster_element();
    }
    return *handoutMaster_element::default_instance_;
}

handoutMaster_element* handoutMaster_element::default_instance_ = NULL;

// notesMaster_element
notesMaster_element::notesMaster_element()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMap(false),
     m_clrMap(NULL),
     m_has_hf(false),
     m_hf(NULL),
     m_has_notesStyle(false),
     m_notesStyle(NULL),
     m_has_extLst(false),
     m_extLst(NULL)
{
}
notesMaster_element::~notesMaster_element()
{
    clear();
}
bool notesMaster_element::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* notesMaster_element::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& notesMaster_element::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool notesMaster_element::has_clrMap() const
{
    return m_has_clrMap;
}

ns_a::CT_ColorMapping* notesMaster_element::mutable_clrMap()
{
    m_has_clrMap = true;
    if (!m_clrMap)
    {
        m_clrMap = new ns_a::CT_ColorMapping();
    }
    return m_clrMap;
}

const ns_a::CT_ColorMapping& notesMaster_element::get_clrMap() const
{
    if (m_clrMap)
    {
        return *m_clrMap;
    }
    return ns_a::CT_ColorMapping::default_instance();
}

bool notesMaster_element::has_hf() const
{
    return m_has_hf;
}

CT_HeaderFooter* notesMaster_element::mutable_hf()
{
    m_has_hf = true;
    if (!m_hf)
    {
        m_hf = new CT_HeaderFooter();
    }
    return m_hf;
}

const CT_HeaderFooter& notesMaster_element::get_hf() const
{
    if (m_hf)
    {
        return *m_hf;
    }
    return CT_HeaderFooter::default_instance();
}

bool notesMaster_element::has_notesStyle() const
{
    return m_has_notesStyle;
}

ns_a::CT_TextListStyle* notesMaster_element::mutable_notesStyle()
{
    m_has_notesStyle = true;
    if (!m_notesStyle)
    {
        m_notesStyle = new ns_a::CT_TextListStyle();
    }
    return m_notesStyle;
}

const ns_a::CT_TextListStyle& notesMaster_element::get_notesStyle() const
{
    if (m_notesStyle)
    {
        return *m_notesStyle;
    }
    return ns_a::CT_TextListStyle::default_instance();
}

bool notesMaster_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* notesMaster_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& notesMaster_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void notesMaster_element::clear()
{
    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMap = false;

    if (m_clrMap)
    {
        delete m_clrMap;
        m_clrMap = NULL;
    }


    m_has_hf = false;

    if (m_hf)
    {
        delete m_hf;
        m_hf = NULL;
    }


    m_has_notesStyle = false;

    if (m_notesStyle)
    {
        delete m_notesStyle;
        m_notesStyle = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void notesMaster_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:notesMaster";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    assert(m_has_cSld);


    assert(m_has_clrMap);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMap)
    {
        m_clrMap->toXmlElem("p:clrMap", "", _outStream);
    }


    if (m_has_hf)
    {
        m_hf->toXmlElem("p:hf", "", _outStream);
    }


    if (m_has_notesStyle)
    {
        m_notesStyle->toXmlElem("p:notesStyle", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:notesMaster>";
}

const notesMaster_element& notesMaster_element::default_instance()
{
    if (!notesMaster_element::default_instance_)
    {
        notesMaster_element::default_instance_ = new notesMaster_element();
    }
    return *notesMaster_element::default_instance_;
}

notesMaster_element* notesMaster_element::default_instance_ = NULL;

// notes_element
notes_element::notes_element()
    :m_has_cSld(false),
     m_cSld(NULL),
     m_has_clrMapOvr(false),
     m_clrMapOvr(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_showMasterSp_attr(false),
     m_showMasterSp_attr(false),
     m_has_showMasterPhAnim_attr(false),
     m_showMasterPhAnim_attr(false)
{
}
notes_element::~notes_element()
{
    clear();
}
bool notes_element::has_cSld() const
{
    return m_has_cSld;
}

CT_CommonSlideData* notes_element::mutable_cSld()
{
    m_has_cSld = true;
    if (!m_cSld)
    {
        m_cSld = new CT_CommonSlideData();
    }
    return m_cSld;
}

const CT_CommonSlideData& notes_element::get_cSld() const
{
    if (m_cSld)
    {
        return *m_cSld;
    }
    return CT_CommonSlideData::default_instance();
}

bool notes_element::has_clrMapOvr() const
{
    return m_has_clrMapOvr;
}

ns_a::CT_ColorMappingOverride* notes_element::mutable_clrMapOvr()
{
    m_has_clrMapOvr = true;
    if (!m_clrMapOvr)
    {
        m_clrMapOvr = new ns_a::CT_ColorMappingOverride();
    }
    return m_clrMapOvr;
}

const ns_a::CT_ColorMappingOverride& notes_element::get_clrMapOvr() const
{
    if (m_clrMapOvr)
    {
        return *m_clrMapOvr;
    }
    return ns_a::CT_ColorMappingOverride::default_instance();
}

bool notes_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionListModify* notes_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionListModify();
    }
    return m_extLst;
}

const CT_ExtensionListModify& notes_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionListModify::default_instance();
}

void notes_element::clear()
{
    m_has_showMasterSp_attr = false;
    m_showMasterSp_attr = false;

    m_has_showMasterPhAnim_attr = false;
    m_showMasterPhAnim_attr = false;

    m_has_cSld = false;

    if (m_cSld)
    {
        delete m_cSld;
        m_cSld = NULL;
    }


    m_has_clrMapOvr = false;

    if (m_clrMapOvr)
    {
        delete m_clrMapOvr;
        m_clrMapOvr = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void notes_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:notes";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_showMasterSp_attr)
    {
        _outStream << " " << "showMasterSp" << "=\"" << XSD::XMLBooleanStr(m_showMasterSp_attr) << "\"";
    }



    if (m_has_showMasterPhAnim_attr)
    {
        _outStream << " " << "showMasterPhAnim" << "=\"" << XSD::XMLBooleanStr(m_showMasterPhAnim_attr) << "\"";
    }

    _outStream << ">";

    assert(m_has_cSld);


    if (m_has_cSld)
    {
        m_cSld->toXmlElem("p:cSld", "", _outStream);
    }


    if (m_has_clrMapOvr)
    {
        m_clrMapOvr->toXmlElem("p:clrMapOvr", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:notes>";
}

const notes_element& notes_element::default_instance()
{
    if (!notes_element::default_instance_)
    {
        notes_element::default_instance_ = new notes_element();
    }
    return *notes_element::default_instance_;
}

bool notes_element::has_showMasterSp_attr() const
{
    return m_has_showMasterSp_attr;
}

void notes_element::set_showMasterSp_attr(const XSD::boolean_& _showMasterSp_attr)
{
    m_has_showMasterSp_attr = true;
    m_showMasterSp_attr = _showMasterSp_attr;
}

const XSD::boolean_& notes_element::get_showMasterSp_attr() const
{
    return m_showMasterSp_attr;
}

bool notes_element::has_showMasterPhAnim_attr() const
{
    return m_has_showMasterPhAnim_attr;
}

void notes_element::set_showMasterPhAnim_attr(const XSD::boolean_& _showMasterPhAnim_attr)
{
    m_has_showMasterPhAnim_attr = true;
    m_showMasterPhAnim_attr = _showMasterPhAnim_attr;
}

const XSD::boolean_& notes_element::get_showMasterPhAnim_attr() const
{
    return m_showMasterPhAnim_attr;
}

notes_element* notes_element::default_instance_ = NULL;

// sldSyncPr_element
sldSyncPr_element::sldSyncPr_element()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_serverSldId_attr(false),
     m_serverSldId_attr(""),
     m_has_serverSldModifiedTime_attr(false),
     m_serverSldModifiedTime_attr(""),
     m_has_clientInsertedTime_attr(false),
     m_clientInsertedTime_attr("")
{
}
sldSyncPr_element::~sldSyncPr_element()
{
    clear();
}
bool sldSyncPr_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* sldSyncPr_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& sldSyncPr_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void sldSyncPr_element::clear()
{
    m_has_serverSldId_attr = false;
    m_serverSldId_attr.clear();

    m_has_serverSldModifiedTime_attr = false;
    m_serverSldModifiedTime_attr.clear();

    m_has_clientInsertedTime_attr = false;
    m_clientInsertedTime_attr.clear();

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void sldSyncPr_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:sldSyncPr";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_serverSldId_attr);
    if (m_has_serverSldId_attr)
    {
        _outStream << " " << "serverSldId" << "=\"" << m_serverSldId_attr << "\"";
    }


    assert(m_has_serverSldModifiedTime_attr);
    if (m_has_serverSldModifiedTime_attr)
    {
        _outStream << " " << "serverSldModifiedTime" << "=\"" << m_serverSldModifiedTime_attr << "\"";
    }


    assert(m_has_clientInsertedTime_attr);
    if (m_has_clientInsertedTime_attr)
    {
        _outStream << " " << "clientInsertedTime" << "=\"" << m_clientInsertedTime_attr << "\"";
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:sldSyncPr>";
}

const sldSyncPr_element& sldSyncPr_element::default_instance()
{
    if (!sldSyncPr_element::default_instance_)
    {
        sldSyncPr_element::default_instance_ = new sldSyncPr_element();
    }
    return *sldSyncPr_element::default_instance_;
}

bool sldSyncPr_element::has_serverSldId_attr() const
{
    return m_has_serverSldId_attr;
}

void sldSyncPr_element::set_serverSldId_attr(const XSD::string_& _serverSldId_attr)
{
    m_has_serverSldId_attr = true;
    m_serverSldId_attr = _serverSldId_attr;
}

const XSD::string_& sldSyncPr_element::get_serverSldId_attr() const
{
    return m_serverSldId_attr;
}

bool sldSyncPr_element::has_serverSldModifiedTime_attr() const
{
    return m_has_serverSldModifiedTime_attr;
}

void sldSyncPr_element::set_serverSldModifiedTime_attr(const XSD::dateTime_& _serverSldModifiedTime_attr)
{
    m_has_serverSldModifiedTime_attr = true;
    m_serverSldModifiedTime_attr = _serverSldModifiedTime_attr;
}

const XSD::dateTime_& sldSyncPr_element::get_serverSldModifiedTime_attr() const
{
    return m_serverSldModifiedTime_attr;
}

bool sldSyncPr_element::has_clientInsertedTime_attr() const
{
    return m_has_clientInsertedTime_attr;
}

void sldSyncPr_element::set_clientInsertedTime_attr(const XSD::dateTime_& _clientInsertedTime_attr)
{
    m_has_clientInsertedTime_attr = true;
    m_clientInsertedTime_attr = _clientInsertedTime_attr;
}

const XSD::dateTime_& sldSyncPr_element::get_clientInsertedTime_attr() const
{
    return m_clientInsertedTime_attr;
}

sldSyncPr_element* sldSyncPr_element::default_instance_ = NULL;

// tagLst_element
tagLst_element::tagLst_element()

{
}
tagLst_element::~tagLst_element()
{
    clear();
}
CT_StringTag* tagLst_element::add_tag()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_StringTag* pNewChild = pChildGroup->mutable_tag();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void tagLst_element::clear()
{
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void tagLst_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:tagLst";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_tag())
            {
                (*iter)->get_tag().toXmlElem("p:tag", "", _outStream);
            }


        }
    }

    _outStream << "</p:tagLst>";
}

const tagLst_element& tagLst_element::default_instance()
{
    if (!tagLst_element::default_instance_)
    {
        tagLst_element::default_instance_ = new tagLst_element();
    }
    return *tagLst_element::default_instance_;
}


// tagLst_element::ChildGroup_1
tagLst_element::ChildGroup_1::ChildGroup_1()
    :m_has_tag(false),
     m_tag(NULL)
{
}
bool tagLst_element::ChildGroup_1::has_tag() const
{
    return m_has_tag;
}

CT_StringTag* tagLst_element::ChildGroup_1::mutable_tag()
{

    m_has_tag = true;
    if (!m_tag)
    {
        m_tag = new CT_StringTag();
    }
    return m_tag;
}

const CT_StringTag& tagLst_element::ChildGroup_1::get_tag() const
{
    if (m_tag)
    {
        return *m_tag;
    }
    return CT_StringTag::default_instance();
}

tagLst_element* tagLst_element::default_instance_ = NULL;

// viewPr_element
viewPr_element::viewPr_element()
    :m_has_normalViewPr(false),
     m_normalViewPr(NULL),
     m_has_slideViewPr(false),
     m_slideViewPr(NULL),
     m_has_outlineViewPr(false),
     m_outlineViewPr(NULL),
     m_has_notesTextViewPr(false),
     m_notesTextViewPr(NULL),
     m_has_sorterViewPr(false),
     m_sorterViewPr(NULL),
     m_has_notesViewPr(false),
     m_notesViewPr(NULL),
     m_has_gridSpacing(false),
     m_gridSpacing(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_lastView_attr(false),
     m_lastView_attr(NULL),
     m_has_showComments_attr(false),
     m_showComments_attr(false)
{
}
viewPr_element::~viewPr_element()
{
    clear();
}
bool viewPr_element::has_normalViewPr() const
{
    return m_has_normalViewPr;
}

CT_NormalViewProperties* viewPr_element::mutable_normalViewPr()
{
    m_has_normalViewPr = true;
    if (!m_normalViewPr)
    {
        m_normalViewPr = new CT_NormalViewProperties();
    }
    return m_normalViewPr;
}

const CT_NormalViewProperties& viewPr_element::get_normalViewPr() const
{
    if (m_normalViewPr)
    {
        return *m_normalViewPr;
    }
    return CT_NormalViewProperties::default_instance();
}

bool viewPr_element::has_slideViewPr() const
{
    return m_has_slideViewPr;
}

CT_SlideViewProperties* viewPr_element::mutable_slideViewPr()
{
    m_has_slideViewPr = true;
    if (!m_slideViewPr)
    {
        m_slideViewPr = new CT_SlideViewProperties();
    }
    return m_slideViewPr;
}

const CT_SlideViewProperties& viewPr_element::get_slideViewPr() const
{
    if (m_slideViewPr)
    {
        return *m_slideViewPr;
    }
    return CT_SlideViewProperties::default_instance();
}

bool viewPr_element::has_outlineViewPr() const
{
    return m_has_outlineViewPr;
}

CT_OutlineViewProperties* viewPr_element::mutable_outlineViewPr()
{
    m_has_outlineViewPr = true;
    if (!m_outlineViewPr)
    {
        m_outlineViewPr = new CT_OutlineViewProperties();
    }
    return m_outlineViewPr;
}

const CT_OutlineViewProperties& viewPr_element::get_outlineViewPr() const
{
    if (m_outlineViewPr)
    {
        return *m_outlineViewPr;
    }
    return CT_OutlineViewProperties::default_instance();
}

bool viewPr_element::has_notesTextViewPr() const
{
    return m_has_notesTextViewPr;
}

CT_NotesTextViewProperties* viewPr_element::mutable_notesTextViewPr()
{
    m_has_notesTextViewPr = true;
    if (!m_notesTextViewPr)
    {
        m_notesTextViewPr = new CT_NotesTextViewProperties();
    }
    return m_notesTextViewPr;
}

const CT_NotesTextViewProperties& viewPr_element::get_notesTextViewPr() const
{
    if (m_notesTextViewPr)
    {
        return *m_notesTextViewPr;
    }
    return CT_NotesTextViewProperties::default_instance();
}

bool viewPr_element::has_sorterViewPr() const
{
    return m_has_sorterViewPr;
}

CT_SlideSorterViewProperties* viewPr_element::mutable_sorterViewPr()
{
    m_has_sorterViewPr = true;
    if (!m_sorterViewPr)
    {
        m_sorterViewPr = new CT_SlideSorterViewProperties();
    }
    return m_sorterViewPr;
}

const CT_SlideSorterViewProperties& viewPr_element::get_sorterViewPr() const
{
    if (m_sorterViewPr)
    {
        return *m_sorterViewPr;
    }
    return CT_SlideSorterViewProperties::default_instance();
}

bool viewPr_element::has_notesViewPr() const
{
    return m_has_notesViewPr;
}

CT_NotesViewProperties* viewPr_element::mutable_notesViewPr()
{
    m_has_notesViewPr = true;
    if (!m_notesViewPr)
    {
        m_notesViewPr = new CT_NotesViewProperties();
    }
    return m_notesViewPr;
}

const CT_NotesViewProperties& viewPr_element::get_notesViewPr() const
{
    if (m_notesViewPr)
    {
        return *m_notesViewPr;
    }
    return CT_NotesViewProperties::default_instance();
}

bool viewPr_element::has_gridSpacing() const
{
    return m_has_gridSpacing;
}

ns_a::CT_PositiveSize2D* viewPr_element::mutable_gridSpacing()
{
    m_has_gridSpacing = true;
    if (!m_gridSpacing)
    {
        m_gridSpacing = new ns_a::CT_PositiveSize2D();
    }
    return m_gridSpacing;
}

const ns_a::CT_PositiveSize2D& viewPr_element::get_gridSpacing() const
{
    if (m_gridSpacing)
    {
        return *m_gridSpacing;
    }
    return ns_a::CT_PositiveSize2D::default_instance();
}

bool viewPr_element::has_extLst() const
{
    return m_has_extLst;
}

CT_ExtensionList* viewPr_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new CT_ExtensionList();
    }
    return m_extLst;
}

const CT_ExtensionList& viewPr_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return CT_ExtensionList::default_instance();
}

void viewPr_element::clear()
{
    m_has_lastView_attr = false;

    if (m_lastView_attr)
    {
        delete m_lastView_attr;
        m_lastView_attr = NULL;
    }


    m_has_showComments_attr = false;
    m_showComments_attr = false;

    m_has_normalViewPr = false;

    if (m_normalViewPr)
    {
        delete m_normalViewPr;
        m_normalViewPr = NULL;
    }


    m_has_slideViewPr = false;

    if (m_slideViewPr)
    {
        delete m_slideViewPr;
        m_slideViewPr = NULL;
    }


    m_has_outlineViewPr = false;

    if (m_outlineViewPr)
    {
        delete m_outlineViewPr;
        m_outlineViewPr = NULL;
    }


    m_has_notesTextViewPr = false;

    if (m_notesTextViewPr)
    {
        delete m_notesTextViewPr;
        m_notesTextViewPr = NULL;
    }


    m_has_sorterViewPr = false;

    if (m_sorterViewPr)
    {
        delete m_sorterViewPr;
        m_sorterViewPr = NULL;
    }


    m_has_notesViewPr = false;

    if (m_notesViewPr)
    {
        delete m_notesViewPr;
        m_notesViewPr = NULL;
    }


    m_has_gridSpacing = false;

    if (m_gridSpacing)
    {
        delete m_gridSpacing;
        m_gridSpacing = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void viewPr_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<p:viewPr";

    _outStream << " " << "xmlns:p=\"http://schemas.openxmlformats.org/presentationml/2006/main\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_lastView_attr)
    {
        m_lastView_attr->toXmlAttr("lastView", _outStream);
    }



    if (m_has_showComments_attr)
    {
        _outStream << " " << "showComments" << "=\"" << XSD::XMLBooleanStr(m_showComments_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_normalViewPr)
    {
        m_normalViewPr->toXmlElem("p:normalViewPr", "", _outStream);
    }


    if (m_has_slideViewPr)
    {
        m_slideViewPr->toXmlElem("p:slideViewPr", "", _outStream);
    }


    if (m_has_outlineViewPr)
    {
        m_outlineViewPr->toXmlElem("p:outlineViewPr", "", _outStream);
    }


    if (m_has_notesTextViewPr)
    {
        m_notesTextViewPr->toXmlElem("p:notesTextViewPr", "", _outStream);
    }


    if (m_has_sorterViewPr)
    {
        m_sorterViewPr->toXmlElem("p:sorterViewPr", "", _outStream);
    }


    if (m_has_notesViewPr)
    {
        m_notesViewPr->toXmlElem("p:notesViewPr", "", _outStream);
    }


    if (m_has_gridSpacing)
    {
        m_gridSpacing->toXmlElem("p:gridSpacing", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("p:extLst", "", _outStream);
    }

    _outStream << "</p:viewPr>";
}

const viewPr_element& viewPr_element::default_instance()
{
    if (!viewPr_element::default_instance_)
    {
        viewPr_element::default_instance_ = new viewPr_element();
    }
    return *viewPr_element::default_instance_;
}

bool viewPr_element::has_lastView_attr() const
{
    return m_has_lastView_attr;
}

void viewPr_element::set_lastView_attr(const ST_ViewType& _lastView_attr)
{
    m_has_lastView_attr = true;
    m_lastView_attr = new ST_ViewType(_lastView_attr);
}

const ST_ViewType& viewPr_element::get_lastView_attr() const
{
    if (m_lastView_attr)
    {
        return *m_lastView_attr;
    }
    return ST_ViewType::default_instance();
}

bool viewPr_element::has_showComments_attr() const
{
    return m_has_showComments_attr;
}

void viewPr_element::set_showComments_attr(const XSD::boolean_& _showComments_attr)
{
    m_has_showComments_attr = true;
    m_showComments_attr = _showComments_attr;
}

const XSD::boolean_& viewPr_element::get_showComments_attr() const
{
    return m_showComments_attr;
}

viewPr_element* viewPr_element::default_instance_ = NULL;
}