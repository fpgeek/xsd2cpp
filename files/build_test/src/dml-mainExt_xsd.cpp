#include "dml-mainExt_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
namespace ns_a14 {
using namespace std;

// Element

// Attribute

// ST_LegacySpreadsheetColorIndex
ST_LegacySpreadsheetColorIndex::ST_LegacySpreadsheetColorIndex()
    :m_has_value(false),
     m_value(0)
{
}
ST_LegacySpreadsheetColorIndex::ST_LegacySpreadsheetColorIndex(const XSD::int_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_LegacySpreadsheetColorIndex::~ST_LegacySpreadsheetColorIndex()
{
    clear();
}
bool ST_LegacySpreadsheetColorIndex::has_value() const
{
    return m_has_value;
}

void ST_LegacySpreadsheetColorIndex::set_value(const XSD::int_& _value)
{   assert(0 <= _value);
    assert(_value <= 80);

    m_has_value = true;
    m_value = _value;
}

const XSD::int_& ST_LegacySpreadsheetColorIndex::get_value() const
{
    return m_value;
}

void ST_LegacySpreadsheetColorIndex::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_LegacySpreadsheetColorIndex::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_LegacySpreadsheetColorIndex& ST_LegacySpreadsheetColorIndex::default_instance()
{
    if (!ST_LegacySpreadsheetColorIndex::default_instance_)
    {
        ST_LegacySpreadsheetColorIndex::default_instance_ = new ST_LegacySpreadsheetColorIndex();
    }
    return *ST_LegacySpreadsheetColorIndex::default_instance_;
}

std::string ST_LegacySpreadsheetColorIndex::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_LegacySpreadsheetColorIndex* ST_LegacySpreadsheetColorIndex::default_instance_ = NULL;

// ST_ArtisticEffectParam100
ST_ArtisticEffectParam100::ST_ArtisticEffectParam100()
    :m_has_value(false),
     m_value(0)
{
}
ST_ArtisticEffectParam100::ST_ArtisticEffectParam100(const XSD::int_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_ArtisticEffectParam100::~ST_ArtisticEffectParam100()
{
    clear();
}
bool ST_ArtisticEffectParam100::has_value() const
{
    return m_has_value;
}

void ST_ArtisticEffectParam100::set_value(const XSD::int_& _value)
{   assert(0 <= _value);
    assert(_value <= 100);

    m_has_value = true;
    m_value = _value;
}

const XSD::int_& ST_ArtisticEffectParam100::get_value() const
{
    return m_value;
}

void ST_ArtisticEffectParam100::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_ArtisticEffectParam100::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_ArtisticEffectParam100& ST_ArtisticEffectParam100::default_instance()
{
    if (!ST_ArtisticEffectParam100::default_instance_)
    {
        ST_ArtisticEffectParam100::default_instance_ = new ST_ArtisticEffectParam100();
    }
    return *ST_ArtisticEffectParam100::default_instance_;
}

std::string ST_ArtisticEffectParam100::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_ArtisticEffectParam100* ST_ArtisticEffectParam100::default_instance_ = NULL;

// ST_ArtisticEffectParam10
ST_ArtisticEffectParam10::ST_ArtisticEffectParam10()
    :m_has_value(false),
     m_value(0)
{
}
ST_ArtisticEffectParam10::ST_ArtisticEffectParam10(const XSD::int_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_ArtisticEffectParam10::~ST_ArtisticEffectParam10()
{
    clear();
}
bool ST_ArtisticEffectParam10::has_value() const
{
    return m_has_value;
}

void ST_ArtisticEffectParam10::set_value(const XSD::int_& _value)
{   assert(0 <= _value);
    assert(_value <= 10);

    m_has_value = true;
    m_value = _value;
}

const XSD::int_& ST_ArtisticEffectParam10::get_value() const
{
    return m_value;
}

void ST_ArtisticEffectParam10::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_ArtisticEffectParam10::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_ArtisticEffectParam10& ST_ArtisticEffectParam10::default_instance()
{
    if (!ST_ArtisticEffectParam10::default_instance_)
    {
        ST_ArtisticEffectParam10::default_instance_ = new ST_ArtisticEffectParam10();
    }
    return *ST_ArtisticEffectParam10::default_instance_;
}

std::string ST_ArtisticEffectParam10::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_ArtisticEffectParam10* ST_ArtisticEffectParam10::default_instance_ = NULL;

// ST_ArtisticEffectParam6
ST_ArtisticEffectParam6::ST_ArtisticEffectParam6()
    :m_has_value(false),
     m_value(0)
{
}
ST_ArtisticEffectParam6::ST_ArtisticEffectParam6(const XSD::int_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_ArtisticEffectParam6::~ST_ArtisticEffectParam6()
{
    clear();
}
bool ST_ArtisticEffectParam6::has_value() const
{
    return m_has_value;
}

void ST_ArtisticEffectParam6::set_value(const XSD::int_& _value)
{   assert(0 <= _value);
    assert(_value <= 6);

    m_has_value = true;
    m_value = _value;
}

const XSD::int_& ST_ArtisticEffectParam6::get_value() const
{
    return m_value;
}

void ST_ArtisticEffectParam6::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_ArtisticEffectParam6::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_ArtisticEffectParam6& ST_ArtisticEffectParam6::default_instance()
{
    if (!ST_ArtisticEffectParam6::default_instance_)
    {
        ST_ArtisticEffectParam6::default_instance_ = new ST_ArtisticEffectParam6();
    }
    return *ST_ArtisticEffectParam6::default_instance_;
}

std::string ST_ArtisticEffectParam6::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_ArtisticEffectParam6* ST_ArtisticEffectParam6::default_instance_ = NULL;

// ST_ArtisticEffectParam4
ST_ArtisticEffectParam4::ST_ArtisticEffectParam4()
    :m_has_value(false),
     m_value(0)
{
}
ST_ArtisticEffectParam4::ST_ArtisticEffectParam4(const XSD::int_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_ArtisticEffectParam4::~ST_ArtisticEffectParam4()
{
    clear();
}
bool ST_ArtisticEffectParam4::has_value() const
{
    return m_has_value;
}

void ST_ArtisticEffectParam4::set_value(const XSD::int_& _value)
{   assert(0 <= _value);
    assert(_value <= 4);

    m_has_value = true;
    m_value = _value;
}

const XSD::int_& ST_ArtisticEffectParam4::get_value() const
{
    return m_value;
}

void ST_ArtisticEffectParam4::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_ArtisticEffectParam4::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_ArtisticEffectParam4& ST_ArtisticEffectParam4::default_instance()
{
    if (!ST_ArtisticEffectParam4::default_instance_)
    {
        ST_ArtisticEffectParam4::default_instance_ = new ST_ArtisticEffectParam4();
    }
    return *ST_ArtisticEffectParam4::default_instance_;
}

std::string ST_ArtisticEffectParam4::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_ArtisticEffectParam4* ST_ArtisticEffectParam4::default_instance_ = NULL;

// ST_ColorTemperature
ST_ColorTemperature::ST_ColorTemperature()
    :m_has_value(false),
     m_value(0)
{
}
ST_ColorTemperature::ST_ColorTemperature(const XSD::int_& _value)
    :m_has_value(true)
{

    set_value(_value);
}
ST_ColorTemperature::~ST_ColorTemperature()
{
    clear();
}
bool ST_ColorTemperature::has_value() const
{
    return m_has_value;
}

void ST_ColorTemperature::set_value(const XSD::int_& _value)
{   assert(1500 <= _value);
    assert(_value <= 11500);

    m_has_value = true;
    m_value = _value;
}

const XSD::int_& ST_ColorTemperature::get_value() const
{
    return m_value;
}

void ST_ColorTemperature::clear()
{
    m_has_value = false;
    m_value = 0;;
}

void ST_ColorTemperature::toXmlAttr(const std::string& _attrName, std::ostream& _outStream) const
{
    if (m_has_value)
    {
        _outStream << " " << _attrName << "=\"" << m_value << "\"";;
    }
}

const ST_ColorTemperature& ST_ColorTemperature::default_instance()
{
    if (!ST_ColorTemperature::default_instance_)
    {
        ST_ColorTemperature::default_instance_ = new ST_ColorTemperature();
    }
    return *ST_ColorTemperature::default_instance_;
}

std::string ST_ColorTemperature::toString() const
{
    std::stringstream strStream;
    strStream << get_value();
    return strStream.str();
}

ST_ColorTemperature* ST_ColorTemperature::default_instance_ = NULL;

// ST_SaturationAmount
ST_SaturationAmount::ST_SaturationAmount()

{
}
ST_SaturationAmount::ST_SaturationAmount(const ns_a::ST_Percentage& _ST_Percentage)
    :ns_a::ST_Percentage(_ST_Percentage)
{
}
ST_SaturationAmount::~ST_SaturationAmount()
{
    clear();
}
const ST_SaturationAmount& ST_SaturationAmount::default_instance()
{
    if (!ST_SaturationAmount::default_instance_)
    {
        ST_SaturationAmount::default_instance_ = new ST_SaturationAmount();
    }
    return *ST_SaturationAmount::default_instance_;
}

ST_SaturationAmount* ST_SaturationAmount::default_instance_ = NULL;

// CT_TextMath
CT_TextMath::CT_TextMath()

{
}
CT_TextMath::~CT_TextMath()
{
    clear();
}
void CT_TextMath::clear()
{    }

void CT_TextMath::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_TextMath& CT_TextMath::default_instance()
{
    if (!CT_TextMath::default_instance_)
    {
        CT_TextMath::default_instance_ = new CT_TextMath();
    }
    return *CT_TextMath::default_instance_;
}

CT_TextMath* CT_TextMath::default_instance_ = NULL;

// CT_ContentPartLocking
CT_ContentPartLocking::CT_ContentPartLocking()
    :m_has_extLst(false),
     m_extLst(NULL),
     m_has_a_noGrp_attr(false),
     m_a_noGrp_attr(false),
     m_has_a_noSelect_attr(false),
     m_a_noSelect_attr(false),
     m_has_a_noRot_attr(false),
     m_a_noRot_attr(false),
     m_has_a_noChangeAspect_attr(false),
     m_a_noChangeAspect_attr(false),
     m_has_a_noMove_attr(false),
     m_a_noMove_attr(false),
     m_has_a_noResize_attr(false),
     m_a_noResize_attr(false),
     m_has_a_noEditPoints_attr(false),
     m_a_noEditPoints_attr(false),
     m_has_a_noAdjustHandles_attr(false),
     m_a_noAdjustHandles_attr(false),
     m_has_a_noChangeArrowheads_attr(false),
     m_a_noChangeArrowheads_attr(false),
     m_has_a_noChangeShapeType_attr(false),
     m_a_noChangeShapeType_attr(false)
{
}
CT_ContentPartLocking::~CT_ContentPartLocking()
{
    clear();
}
bool CT_ContentPartLocking::has_extLst() const
{
    return m_has_extLst;
}

ns_a::CT_OfficeArtExtensionList* CT_ContentPartLocking::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
}

const ns_a::CT_OfficeArtExtensionList& CT_ContentPartLocking::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
}

void CT_ContentPartLocking::clear()
{
    m_has_a_noGrp_attr = false;
    m_a_noGrp_attr = false;

    m_has_a_noSelect_attr = false;
    m_a_noSelect_attr = false;

    m_has_a_noRot_attr = false;
    m_a_noRot_attr = false;

    m_has_a_noChangeAspect_attr = false;
    m_a_noChangeAspect_attr = false;

    m_has_a_noMove_attr = false;
    m_a_noMove_attr = false;

    m_has_a_noResize_attr = false;
    m_a_noResize_attr = false;

    m_has_a_noEditPoints_attr = false;
    m_a_noEditPoints_attr = false;

    m_has_a_noAdjustHandles_attr = false;
    m_a_noAdjustHandles_attr = false;

    m_has_a_noChangeArrowheads_attr = false;
    m_a_noChangeArrowheads_attr = false;

    m_has_a_noChangeShapeType_attr = false;
    m_a_noChangeShapeType_attr = false;

    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_ContentPartLocking::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_a_noGrp_attr)
    {
        _outStream << " " << "a:noGrp" << "=\"" << XSD::XMLBooleanStr(m_a_noGrp_attr) << "\"";
    }



    if (m_has_a_noSelect_attr)
    {
        _outStream << " " << "a:noSelect" << "=\"" << XSD::XMLBooleanStr(m_a_noSelect_attr) << "\"";
    }



    if (m_has_a_noRot_attr)
    {
        _outStream << " " << "a:noRot" << "=\"" << XSD::XMLBooleanStr(m_a_noRot_attr) << "\"";
    }



    if (m_has_a_noChangeAspect_attr)
    {
        _outStream << " " << "a:noChangeAspect" << "=\"" << XSD::XMLBooleanStr(m_a_noChangeAspect_attr) << "\"";
    }



    if (m_has_a_noMove_attr)
    {
        _outStream << " " << "a:noMove" << "=\"" << XSD::XMLBooleanStr(m_a_noMove_attr) << "\"";
    }



    if (m_has_a_noResize_attr)
    {
        _outStream << " " << "a:noResize" << "=\"" << XSD::XMLBooleanStr(m_a_noResize_attr) << "\"";
    }



    if (m_has_a_noEditPoints_attr)
    {
        _outStream << " " << "a:noEditPoints" << "=\"" << XSD::XMLBooleanStr(m_a_noEditPoints_attr) << "\"";
    }



    if (m_has_a_noAdjustHandles_attr)
    {
        _outStream << " " << "a:noAdjustHandles" << "=\"" << XSD::XMLBooleanStr(m_a_noAdjustHandles_attr) << "\"";
    }



    if (m_has_a_noChangeArrowheads_attr)
    {
        _outStream << " " << "a:noChangeArrowheads" << "=\"" << XSD::XMLBooleanStr(m_a_noChangeArrowheads_attr) << "\"";
    }



    if (m_has_a_noChangeShapeType_attr)
    {
        _outStream << " " << "a:noChangeShapeType" << "=\"" << XSD::XMLBooleanStr(m_a_noChangeShapeType_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("a14:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_ContentPartLocking& CT_ContentPartLocking::default_instance()
{
    if (!CT_ContentPartLocking::default_instance_)
    {
        CT_ContentPartLocking::default_instance_ = new CT_ContentPartLocking();
    }
    return *CT_ContentPartLocking::default_instance_;
}

bool CT_ContentPartLocking::has_a_noGrp_attr() const
{
    return m_has_a_noGrp_attr;
}

void CT_ContentPartLocking::set_a_noGrp_attr(const XSD::boolean_& _a_noGrp_attr)
{
    m_has_a_noGrp_attr = true;
    m_a_noGrp_attr = _a_noGrp_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noGrp_attr() const
{
    return m_a_noGrp_attr;
}

bool CT_ContentPartLocking::has_a_noSelect_attr() const
{
    return m_has_a_noSelect_attr;
}

void CT_ContentPartLocking::set_a_noSelect_attr(const XSD::boolean_& _a_noSelect_attr)
{
    m_has_a_noSelect_attr = true;
    m_a_noSelect_attr = _a_noSelect_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noSelect_attr() const
{
    return m_a_noSelect_attr;
}

bool CT_ContentPartLocking::has_a_noRot_attr() const
{
    return m_has_a_noRot_attr;
}

void CT_ContentPartLocking::set_a_noRot_attr(const XSD::boolean_& _a_noRot_attr)
{
    m_has_a_noRot_attr = true;
    m_a_noRot_attr = _a_noRot_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noRot_attr() const
{
    return m_a_noRot_attr;
}

bool CT_ContentPartLocking::has_a_noChangeAspect_attr() const
{
    return m_has_a_noChangeAspect_attr;
}

void CT_ContentPartLocking::set_a_noChangeAspect_attr(const XSD::boolean_& _a_noChangeAspect_attr)
{
    m_has_a_noChangeAspect_attr = true;
    m_a_noChangeAspect_attr = _a_noChangeAspect_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noChangeAspect_attr() const
{
    return m_a_noChangeAspect_attr;
}

bool CT_ContentPartLocking::has_a_noMove_attr() const
{
    return m_has_a_noMove_attr;
}

void CT_ContentPartLocking::set_a_noMove_attr(const XSD::boolean_& _a_noMove_attr)
{
    m_has_a_noMove_attr = true;
    m_a_noMove_attr = _a_noMove_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noMove_attr() const
{
    return m_a_noMove_attr;
}

bool CT_ContentPartLocking::has_a_noResize_attr() const
{
    return m_has_a_noResize_attr;
}

void CT_ContentPartLocking::set_a_noResize_attr(const XSD::boolean_& _a_noResize_attr)
{
    m_has_a_noResize_attr = true;
    m_a_noResize_attr = _a_noResize_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noResize_attr() const
{
    return m_a_noResize_attr;
}

bool CT_ContentPartLocking::has_a_noEditPoints_attr() const
{
    return m_has_a_noEditPoints_attr;
}

void CT_ContentPartLocking::set_a_noEditPoints_attr(const XSD::boolean_& _a_noEditPoints_attr)
{
    m_has_a_noEditPoints_attr = true;
    m_a_noEditPoints_attr = _a_noEditPoints_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noEditPoints_attr() const
{
    return m_a_noEditPoints_attr;
}

bool CT_ContentPartLocking::has_a_noAdjustHandles_attr() const
{
    return m_has_a_noAdjustHandles_attr;
}

void CT_ContentPartLocking::set_a_noAdjustHandles_attr(const XSD::boolean_& _a_noAdjustHandles_attr)
{
    m_has_a_noAdjustHandles_attr = true;
    m_a_noAdjustHandles_attr = _a_noAdjustHandles_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noAdjustHandles_attr() const
{
    return m_a_noAdjustHandles_attr;
}

bool CT_ContentPartLocking::has_a_noChangeArrowheads_attr() const
{
    return m_has_a_noChangeArrowheads_attr;
}

void CT_ContentPartLocking::set_a_noChangeArrowheads_attr(const XSD::boolean_& _a_noChangeArrowheads_attr)
{
    m_has_a_noChangeArrowheads_attr = true;
    m_a_noChangeArrowheads_attr = _a_noChangeArrowheads_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noChangeArrowheads_attr() const
{
    return m_a_noChangeArrowheads_attr;
}

bool CT_ContentPartLocking::has_a_noChangeShapeType_attr() const
{
    return m_has_a_noChangeShapeType_attr;
}

void CT_ContentPartLocking::set_a_noChangeShapeType_attr(const XSD::boolean_& _a_noChangeShapeType_attr)
{
    m_has_a_noChangeShapeType_attr = true;
    m_a_noChangeShapeType_attr = _a_noChangeShapeType_attr;
}

const XSD::boolean_& CT_ContentPartLocking::get_a_noChangeShapeType_attr() const
{
    return m_a_noChangeShapeType_attr;
}

CT_ContentPartLocking* CT_ContentPartLocking::default_instance_ = NULL;

// CT_NonVisualInkContentPartProperties
CT_NonVisualInkContentPartProperties::CT_NonVisualInkContentPartProperties()
    :m_has_cpLocks(false),
     m_cpLocks(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_isComment_attr(false),
     m_isComment_attr(false)
{
}
CT_NonVisualInkContentPartProperties::~CT_NonVisualInkContentPartProperties()
{
    clear();
}
bool CT_NonVisualInkContentPartProperties::has_cpLocks() const
{
    return m_has_cpLocks;
}

CT_ContentPartLocking* CT_NonVisualInkContentPartProperties::mutable_cpLocks()
{
    m_has_cpLocks = true;
    if (!m_cpLocks)
    {
        m_cpLocks = new CT_ContentPartLocking();
    }
    return m_cpLocks;
}

const CT_ContentPartLocking& CT_NonVisualInkContentPartProperties::get_cpLocks() const
{
    if (m_cpLocks)
    {
        return *m_cpLocks;
    }
    return CT_ContentPartLocking::default_instance();
}

bool CT_NonVisualInkContentPartProperties::has_extLst() const
{
    return m_has_extLst;
}

ns_a::CT_OfficeArtExtensionList* CT_NonVisualInkContentPartProperties::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
}

const ns_a::CT_OfficeArtExtensionList& CT_NonVisualInkContentPartProperties::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
}

void CT_NonVisualInkContentPartProperties::clear()
{
    m_has_isComment_attr = false;
    m_isComment_attr = false;

    m_has_cpLocks = false;

    if (m_cpLocks)
    {
        delete m_cpLocks;
        m_cpLocks = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_NonVisualInkContentPartProperties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_isComment_attr)
    {
        _outStream << " " << "isComment" << "=\"" << XSD::XMLBooleanStr(m_isComment_attr) << "\"";
    }

    _outStream << ">";


    if (m_has_cpLocks)
    {
        m_cpLocks->toXmlElem("a14:cpLocks", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("a14:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_NonVisualInkContentPartProperties& CT_NonVisualInkContentPartProperties::default_instance()
{
    if (!CT_NonVisualInkContentPartProperties::default_instance_)
    {
        CT_NonVisualInkContentPartProperties::default_instance_ = new CT_NonVisualInkContentPartProperties();
    }
    return *CT_NonVisualInkContentPartProperties::default_instance_;
}

bool CT_NonVisualInkContentPartProperties::has_isComment_attr() const
{
    return m_has_isComment_attr;
}

void CT_NonVisualInkContentPartProperties::set_isComment_attr(const XSD::boolean_& _isComment_attr)
{
    m_has_isComment_attr = true;
    m_isComment_attr = _isComment_attr;
}

const XSD::boolean_& CT_NonVisualInkContentPartProperties::get_isComment_attr() const
{
    return m_isComment_attr;
}

CT_NonVisualInkContentPartProperties* CT_NonVisualInkContentPartProperties::default_instance_ = NULL;

// CT_CameraTool
CT_CameraTool::CT_CameraTool()
    :m_has_cellRange_attr(false),
     m_cellRange_attr(""),
     m_has_spid_attr(false),
     m_spid_attr("")
{
}
CT_CameraTool::~CT_CameraTool()
{
    clear();
}
void CT_CameraTool::clear()
{
    m_has_cellRange_attr = false;
    m_cellRange_attr.clear();

    m_has_spid_attr = false;
    m_spid_attr.clear();
}

void CT_CameraTool::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_cellRange_attr)
    {
        _outStream << " " << "cellRange" << "=\"" << m_cellRange_attr << "\"";
    }



    if (m_has_spid_attr)
    {
        _outStream << " " << "spid" << "=\"" << m_spid_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CameraTool& CT_CameraTool::default_instance()
{
    if (!CT_CameraTool::default_instance_)
    {
        CT_CameraTool::default_instance_ = new CT_CameraTool();
    }
    return *CT_CameraTool::default_instance_;
}

bool CT_CameraTool::has_cellRange_attr() const
{
    return m_has_cellRange_attr;
}

void CT_CameraTool::set_cellRange_attr(const XSD::string_& _cellRange_attr)
{
    m_has_cellRange_attr = true;
    m_cellRange_attr = _cellRange_attr;
}

const XSD::string_& CT_CameraTool::get_cellRange_attr() const
{
    return m_cellRange_attr;
}

bool CT_CameraTool::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_CameraTool::set_spid_attr(const XSD::string_& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = _spid_attr;
}

const XSD::string_& CT_CameraTool::get_spid_attr() const
{
    return m_spid_attr;
}

CT_CameraTool* CT_CameraTool::default_instance_ = NULL;

// CT_CompatExt
CT_CompatExt::CT_CompatExt()
    :m_has_spid_attr(false),
     m_spid_attr("")
{
}
CT_CompatExt::~CT_CompatExt()
{
    clear();
}
void CT_CompatExt::clear()
{
    m_has_spid_attr = false;
    m_spid_attr.clear();
}

void CT_CompatExt::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_spid_attr)
    {
        _outStream << " " << "spid" << "=\"" << m_spid_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_CompatExt& CT_CompatExt::default_instance()
{
    if (!CT_CompatExt::default_instance_)
    {
        CT_CompatExt::default_instance_ = new CT_CompatExt();
    }
    return *CT_CompatExt::default_instance_;
}

bool CT_CompatExt::has_spid_attr() const
{
    return m_has_spid_attr;
}

void CT_CompatExt::set_spid_attr(const XSD::string_& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = _spid_attr;
}

const XSD::string_& CT_CompatExt::get_spid_attr() const
{
    return m_spid_attr;
}

CT_CompatExt* CT_CompatExt::default_instance_ = NULL;

// CT_IsGvmlCanvas
CT_IsGvmlCanvas::CT_IsGvmlCanvas()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
CT_IsGvmlCanvas::~CT_IsGvmlCanvas()
{
    clear();
}
void CT_IsGvmlCanvas::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void CT_IsGvmlCanvas::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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

const CT_IsGvmlCanvas& CT_IsGvmlCanvas::default_instance()
{
    if (!CT_IsGvmlCanvas::default_instance_)
    {
        CT_IsGvmlCanvas::default_instance_ = new CT_IsGvmlCanvas();
    }
    return *CT_IsGvmlCanvas::default_instance_;
}

bool CT_IsGvmlCanvas::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_IsGvmlCanvas::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& CT_IsGvmlCanvas::get_val_attr() const
{
    return m_val_attr;
}

CT_IsGvmlCanvas* CT_IsGvmlCanvas::default_instance_ = NULL;

// CT_GvmlContentPartNonVisual
CT_GvmlContentPartNonVisual::CT_GvmlContentPartNonVisual()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvContentPartPr(false),
     m_cNvContentPartPr(NULL)
{
}
CT_GvmlContentPartNonVisual::~CT_GvmlContentPartNonVisual()
{
    clear();
}
bool CT_GvmlContentPartNonVisual::has_cNvPr() const
{
    return m_has_cNvPr;
}

ns_a::CT_NonVisualDrawingProps* CT_GvmlContentPartNonVisual::mutable_cNvPr()
{
    m_has_cNvPr = true;
    if (!m_cNvPr)
    {
        m_cNvPr = new ns_a::CT_NonVisualDrawingProps();
    }
    return m_cNvPr;
}

const ns_a::CT_NonVisualDrawingProps& CT_GvmlContentPartNonVisual::get_cNvPr() const
{
    if (m_cNvPr)
    {
        return *m_cNvPr;
    }
    return ns_a::CT_NonVisualDrawingProps::default_instance();
}

bool CT_GvmlContentPartNonVisual::has_cNvContentPartPr() const
{
    return m_has_cNvContentPartPr;
}

CT_NonVisualInkContentPartProperties* CT_GvmlContentPartNonVisual::mutable_cNvContentPartPr()
{
    m_has_cNvContentPartPr = true;
    if (!m_cNvContentPartPr)
    {
        m_cNvContentPartPr = new CT_NonVisualInkContentPartProperties();
    }
    return m_cNvContentPartPr;
}

const CT_NonVisualInkContentPartProperties& CT_GvmlContentPartNonVisual::get_cNvContentPartPr() const
{
    if (m_cNvContentPartPr)
    {
        return *m_cNvContentPartPr;
    }
    return CT_NonVisualInkContentPartProperties::default_instance();
}

void CT_GvmlContentPartNonVisual::clear()
{
    m_has_cNvPr = false;

    if (m_cNvPr)
    {
        delete m_cNvPr;
        m_cNvPr = NULL;
    }


    m_has_cNvContentPartPr = false;

    if (m_cNvContentPartPr)
    {
        delete m_cNvContentPartPr;
        m_cNvContentPartPr = NULL;
    }

}

void CT_GvmlContentPartNonVisual::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_cNvPr);


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("a14:cNvPr", "", _outStream);
    }


    if (m_has_cNvContentPartPr)
    {
        m_cNvContentPartPr->toXmlElem("a14:cNvContentPartPr", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GvmlContentPartNonVisual& CT_GvmlContentPartNonVisual::default_instance()
{
    if (!CT_GvmlContentPartNonVisual::default_instance_)
    {
        CT_GvmlContentPartNonVisual::default_instance_ = new CT_GvmlContentPartNonVisual();
    }
    return *CT_GvmlContentPartNonVisual::default_instance_;
}

CT_GvmlContentPartNonVisual* CT_GvmlContentPartNonVisual::default_instance_ = NULL;

// CT_GvmlContentPart
CT_GvmlContentPart::CT_GvmlContentPart()
    :m_has_nvContentPartPr(false),
     m_nvContentPartPr(NULL),
     m_has_xfrm(false),
     m_xfrm(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_bwMode_attr(false),
     m_bwMode_attr(NULL),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
CT_GvmlContentPart::~CT_GvmlContentPart()
{
    clear();
}
bool CT_GvmlContentPart::has_nvContentPartPr() const
{
    return m_has_nvContentPartPr;
}

CT_GvmlContentPartNonVisual* CT_GvmlContentPart::mutable_nvContentPartPr()
{
    m_has_nvContentPartPr = true;
    if (!m_nvContentPartPr)
    {
        m_nvContentPartPr = new CT_GvmlContentPartNonVisual();
    }
    return m_nvContentPartPr;
}

const CT_GvmlContentPartNonVisual& CT_GvmlContentPart::get_nvContentPartPr() const
{
    if (m_nvContentPartPr)
    {
        return *m_nvContentPartPr;
    }
    return CT_GvmlContentPartNonVisual::default_instance();
}

bool CT_GvmlContentPart::has_xfrm() const
{
    return m_has_xfrm;
}

ns_a::CT_Transform2D* CT_GvmlContentPart::mutable_xfrm()
{
    m_has_xfrm = true;
    if (!m_xfrm)
    {
        m_xfrm = new ns_a::CT_Transform2D();
    }
    return m_xfrm;
}

const ns_a::CT_Transform2D& CT_GvmlContentPart::get_xfrm() const
{
    if (m_xfrm)
    {
        return *m_xfrm;
    }
    return ns_a::CT_Transform2D::default_instance();
}

bool CT_GvmlContentPart::has_extLst() const
{
    return m_has_extLst;
}

ns_a::CT_OfficeArtExtensionList* CT_GvmlContentPart::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
}

const ns_a::CT_OfficeArtExtensionList& CT_GvmlContentPart::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
}

void CT_GvmlContentPart::clear()
{
    m_has_bwMode_attr = false;

    if (m_bwMode_attr)
    {
        delete m_bwMode_attr;
        m_bwMode_attr = NULL;
    }


    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_nvContentPartPr = false;

    if (m_nvContentPartPr)
    {
        delete m_nvContentPartPr;
        m_nvContentPartPr = NULL;
    }


    m_has_xfrm = false;

    if (m_xfrm)
    {
        delete m_xfrm;
        m_xfrm = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void CT_GvmlContentPart::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
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


    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";


    if (m_has_nvContentPartPr)
    {
        m_nvContentPartPr->toXmlElem("a14:nvContentPartPr", "", _outStream);
    }


    if (m_has_xfrm)
    {
        m_xfrm->toXmlElem("a14:xfrm", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("a14:extLst", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_GvmlContentPart& CT_GvmlContentPart::default_instance()
{
    if (!CT_GvmlContentPart::default_instance_)
    {
        CT_GvmlContentPart::default_instance_ = new CT_GvmlContentPart();
    }
    return *CT_GvmlContentPart::default_instance_;
}

bool CT_GvmlContentPart::has_bwMode_attr() const
{
    return m_has_bwMode_attr;
}

void CT_GvmlContentPart::set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr)
{
    m_has_bwMode_attr = true;
    m_bwMode_attr = new ns_a::ST_BlackWhiteMode(_bwMode_attr);
}

const ns_a::ST_BlackWhiteMode& CT_GvmlContentPart::get_bwMode_attr() const
{
    if (m_bwMode_attr)
    {
        return *m_bwMode_attr;
    }
    return ns_a::ST_BlackWhiteMode::default_instance();
}

bool CT_GvmlContentPart::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void CT_GvmlContentPart::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& CT_GvmlContentPart::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

CT_GvmlContentPart* CT_GvmlContentPart::default_instance_ = NULL;

// CT_ShadowObscured
CT_ShadowObscured::CT_ShadowObscured()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
CT_ShadowObscured::~CT_ShadowObscured()
{
    clear();
}
void CT_ShadowObscured::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void CT_ShadowObscured::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_ShadowObscured& CT_ShadowObscured::default_instance()
{
    if (!CT_ShadowObscured::default_instance_)
    {
        CT_ShadowObscured::default_instance_ = new CT_ShadowObscured();
    }
    return *CT_ShadowObscured::default_instance_;
}

bool CT_ShadowObscured::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_ShadowObscured::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& CT_ShadowObscured::get_val_attr() const
{
    return m_val_attr;
}

CT_ShadowObscured* CT_ShadowObscured::default_instance_ = NULL;

// CT_PictureEffectBlur
CT_PictureEffectBlur::CT_PictureEffectBlur()
    :m_has_radius_attr(false),
     m_radius_attr(NULL)
{
}
CT_PictureEffectBlur::~CT_PictureEffectBlur()
{
    clear();
}
void CT_PictureEffectBlur::clear()
{
    m_has_radius_attr = false;

    if (m_radius_attr)
    {
        delete m_radius_attr;
        m_radius_attr = NULL;
    }

}

void CT_PictureEffectBlur::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_radius_attr)
    {
        m_radius_attr->toXmlAttr("radius", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectBlur& CT_PictureEffectBlur::default_instance()
{
    if (!CT_PictureEffectBlur::default_instance_)
    {
        CT_PictureEffectBlur::default_instance_ = new CT_PictureEffectBlur();
    }
    return *CT_PictureEffectBlur::default_instance_;
}

bool CT_PictureEffectBlur::has_radius_attr() const
{
    return m_has_radius_attr;
}

void CT_PictureEffectBlur::set_radius_attr(const ST_ArtisticEffectParam100& _radius_attr)
{
    m_has_radius_attr = true;
    m_radius_attr = new ST_ArtisticEffectParam100(_radius_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectBlur::get_radius_attr() const
{
    if (m_radius_attr)
    {
        return *m_radius_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectBlur* CT_PictureEffectBlur::default_instance_ = NULL;

// CT_PictureEffectCement
CT_PictureEffectCement::CT_PictureEffectCement()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_crackSpacing_attr(false),
     m_crackSpacing_attr(NULL)
{
}
CT_PictureEffectCement::~CT_PictureEffectCement()
{
    clear();
}
void CT_PictureEffectCement::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_crackSpacing_attr = false;

    if (m_crackSpacing_attr)
    {
        delete m_crackSpacing_attr;
        m_crackSpacing_attr = NULL;
    }

}

void CT_PictureEffectCement::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_crackSpacing_attr)
    {
        m_crackSpacing_attr->toXmlAttr("crackSpacing", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectCement& CT_PictureEffectCement::default_instance()
{
    if (!CT_PictureEffectCement::default_instance_)
    {
        CT_PictureEffectCement::default_instance_ = new CT_PictureEffectCement();
    }
    return *CT_PictureEffectCement::default_instance_;
}

bool CT_PictureEffectCement::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectCement::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectCement::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectCement::has_crackSpacing_attr() const
{
    return m_has_crackSpacing_attr;
}

void CT_PictureEffectCement::set_crackSpacing_attr(const ST_ArtisticEffectParam100& _crackSpacing_attr)
{
    m_has_crackSpacing_attr = true;
    m_crackSpacing_attr = new ST_ArtisticEffectParam100(_crackSpacing_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectCement::get_crackSpacing_attr() const
{
    if (m_crackSpacing_attr)
    {
        return *m_crackSpacing_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectCement* CT_PictureEffectCement::default_instance_ = NULL;

// CT_PictureEffectChalkSketch
CT_PictureEffectChalkSketch::CT_PictureEffectChalkSketch()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_pressure_attr(false),
     m_pressure_attr(NULL)
{
}
CT_PictureEffectChalkSketch::~CT_PictureEffectChalkSketch()
{
    clear();
}
void CT_PictureEffectChalkSketch::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_pressure_attr = false;

    if (m_pressure_attr)
    {
        delete m_pressure_attr;
        m_pressure_attr = NULL;
    }

}

void CT_PictureEffectChalkSketch::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_pressure_attr)
    {
        m_pressure_attr->toXmlAttr("pressure", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectChalkSketch& CT_PictureEffectChalkSketch::default_instance()
{
    if (!CT_PictureEffectChalkSketch::default_instance_)
    {
        CT_PictureEffectChalkSketch::default_instance_ = new CT_PictureEffectChalkSketch();
    }
    return *CT_PictureEffectChalkSketch::default_instance_;
}

bool CT_PictureEffectChalkSketch::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectChalkSketch::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectChalkSketch::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectChalkSketch::has_pressure_attr() const
{
    return m_has_pressure_attr;
}

void CT_PictureEffectChalkSketch::set_pressure_attr(const ST_ArtisticEffectParam4& _pressure_attr)
{
    m_has_pressure_attr = true;
    m_pressure_attr = new ST_ArtisticEffectParam4(_pressure_attr);
}

const ST_ArtisticEffectParam4& CT_PictureEffectChalkSketch::get_pressure_attr() const
{
    if (m_pressure_attr)
    {
        return *m_pressure_attr;
    }
    return ST_ArtisticEffectParam4::default_instance();
}

CT_PictureEffectChalkSketch* CT_PictureEffectChalkSketch::default_instance_ = NULL;

// CT_PictureEffectCrisscrossEtching
CT_PictureEffectCrisscrossEtching::CT_PictureEffectCrisscrossEtching()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_pressure_attr(false),
     m_pressure_attr(NULL)
{
}
CT_PictureEffectCrisscrossEtching::~CT_PictureEffectCrisscrossEtching()
{
    clear();
}
void CT_PictureEffectCrisscrossEtching::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_pressure_attr = false;

    if (m_pressure_attr)
    {
        delete m_pressure_attr;
        m_pressure_attr = NULL;
    }

}

void CT_PictureEffectCrisscrossEtching::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_pressure_attr)
    {
        m_pressure_attr->toXmlAttr("pressure", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectCrisscrossEtching& CT_PictureEffectCrisscrossEtching::default_instance()
{
    if (!CT_PictureEffectCrisscrossEtching::default_instance_)
    {
        CT_PictureEffectCrisscrossEtching::default_instance_ = new CT_PictureEffectCrisscrossEtching();
    }
    return *CT_PictureEffectCrisscrossEtching::default_instance_;
}

bool CT_PictureEffectCrisscrossEtching::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectCrisscrossEtching::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectCrisscrossEtching::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectCrisscrossEtching::has_pressure_attr() const
{
    return m_has_pressure_attr;
}

void CT_PictureEffectCrisscrossEtching::set_pressure_attr(const ST_ArtisticEffectParam100& _pressure_attr)
{
    m_has_pressure_attr = true;
    m_pressure_attr = new ST_ArtisticEffectParam100(_pressure_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectCrisscrossEtching::get_pressure_attr() const
{
    if (m_pressure_attr)
    {
        return *m_pressure_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectCrisscrossEtching* CT_PictureEffectCrisscrossEtching::default_instance_ = NULL;

// CT_PictureEffectCutout
CT_PictureEffectCutout::CT_PictureEffectCutout()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_numberOfShades_attr(false),
     m_numberOfShades_attr(NULL)
{
}
CT_PictureEffectCutout::~CT_PictureEffectCutout()
{
    clear();
}
void CT_PictureEffectCutout::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_numberOfShades_attr = false;

    if (m_numberOfShades_attr)
    {
        delete m_numberOfShades_attr;
        m_numberOfShades_attr = NULL;
    }

}

void CT_PictureEffectCutout::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_numberOfShades_attr)
    {
        m_numberOfShades_attr->toXmlAttr("numberOfShades", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectCutout& CT_PictureEffectCutout::default_instance()
{
    if (!CT_PictureEffectCutout::default_instance_)
    {
        CT_PictureEffectCutout::default_instance_ = new CT_PictureEffectCutout();
    }
    return *CT_PictureEffectCutout::default_instance_;
}

bool CT_PictureEffectCutout::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectCutout::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectCutout::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectCutout::has_numberOfShades_attr() const
{
    return m_has_numberOfShades_attr;
}

void CT_PictureEffectCutout::set_numberOfShades_attr(const ST_ArtisticEffectParam6& _numberOfShades_attr)
{
    m_has_numberOfShades_attr = true;
    m_numberOfShades_attr = new ST_ArtisticEffectParam6(_numberOfShades_attr);
}

const ST_ArtisticEffectParam6& CT_PictureEffectCutout::get_numberOfShades_attr() const
{
    if (m_numberOfShades_attr)
    {
        return *m_numberOfShades_attr;
    }
    return ST_ArtisticEffectParam6::default_instance();
}

CT_PictureEffectCutout* CT_PictureEffectCutout::default_instance_ = NULL;

// CT_PictureEffectFilmGrain
CT_PictureEffectFilmGrain::CT_PictureEffectFilmGrain()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_grainSize_attr(false),
     m_grainSize_attr(NULL)
{
}
CT_PictureEffectFilmGrain::~CT_PictureEffectFilmGrain()
{
    clear();
}
void CT_PictureEffectFilmGrain::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_grainSize_attr = false;

    if (m_grainSize_attr)
    {
        delete m_grainSize_attr;
        m_grainSize_attr = NULL;
    }

}

void CT_PictureEffectFilmGrain::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_grainSize_attr)
    {
        m_grainSize_attr->toXmlAttr("grainSize", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectFilmGrain& CT_PictureEffectFilmGrain::default_instance()
{
    if (!CT_PictureEffectFilmGrain::default_instance_)
    {
        CT_PictureEffectFilmGrain::default_instance_ = new CT_PictureEffectFilmGrain();
    }
    return *CT_PictureEffectFilmGrain::default_instance_;
}

bool CT_PictureEffectFilmGrain::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectFilmGrain::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectFilmGrain::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectFilmGrain::has_grainSize_attr() const
{
    return m_has_grainSize_attr;
}

void CT_PictureEffectFilmGrain::set_grainSize_attr(const ST_ArtisticEffectParam100& _grainSize_attr)
{
    m_has_grainSize_attr = true;
    m_grainSize_attr = new ST_ArtisticEffectParam100(_grainSize_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectFilmGrain::get_grainSize_attr() const
{
    if (m_grainSize_attr)
    {
        return *m_grainSize_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectFilmGrain* CT_PictureEffectFilmGrain::default_instance_ = NULL;

// CT_PictureEffectGlass
CT_PictureEffectGlass::CT_PictureEffectGlass()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_scaling_attr(false),
     m_scaling_attr(NULL)
{
}
CT_PictureEffectGlass::~CT_PictureEffectGlass()
{
    clear();
}
void CT_PictureEffectGlass::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_scaling_attr = false;

    if (m_scaling_attr)
    {
        delete m_scaling_attr;
        m_scaling_attr = NULL;
    }

}

void CT_PictureEffectGlass::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_scaling_attr)
    {
        m_scaling_attr->toXmlAttr("scaling", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectGlass& CT_PictureEffectGlass::default_instance()
{
    if (!CT_PictureEffectGlass::default_instance_)
    {
        CT_PictureEffectGlass::default_instance_ = new CT_PictureEffectGlass();
    }
    return *CT_PictureEffectGlass::default_instance_;
}

bool CT_PictureEffectGlass::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectGlass::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectGlass::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectGlass::has_scaling_attr() const
{
    return m_has_scaling_attr;
}

void CT_PictureEffectGlass::set_scaling_attr(const ST_ArtisticEffectParam100& _scaling_attr)
{
    m_has_scaling_attr = true;
    m_scaling_attr = new ST_ArtisticEffectParam100(_scaling_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectGlass::get_scaling_attr() const
{
    if (m_scaling_attr)
    {
        return *m_scaling_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectGlass* CT_PictureEffectGlass::default_instance_ = NULL;

// CT_PictureEffectGlowDiffused
CT_PictureEffectGlowDiffused::CT_PictureEffectGlowDiffused()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_intensity_attr(false),
     m_intensity_attr(NULL)
{
}
CT_PictureEffectGlowDiffused::~CT_PictureEffectGlowDiffused()
{
    clear();
}
void CT_PictureEffectGlowDiffused::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_intensity_attr = false;

    if (m_intensity_attr)
    {
        delete m_intensity_attr;
        m_intensity_attr = NULL;
    }

}

void CT_PictureEffectGlowDiffused::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_intensity_attr)
    {
        m_intensity_attr->toXmlAttr("intensity", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectGlowDiffused& CT_PictureEffectGlowDiffused::default_instance()
{
    if (!CT_PictureEffectGlowDiffused::default_instance_)
    {
        CT_PictureEffectGlowDiffused::default_instance_ = new CT_PictureEffectGlowDiffused();
    }
    return *CT_PictureEffectGlowDiffused::default_instance_;
}

bool CT_PictureEffectGlowDiffused::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectGlowDiffused::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectGlowDiffused::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectGlowDiffused::has_intensity_attr() const
{
    return m_has_intensity_attr;
}

void CT_PictureEffectGlowDiffused::set_intensity_attr(const ST_ArtisticEffectParam10& _intensity_attr)
{
    m_has_intensity_attr = true;
    m_intensity_attr = new ST_ArtisticEffectParam10(_intensity_attr);
}

const ST_ArtisticEffectParam10& CT_PictureEffectGlowDiffused::get_intensity_attr() const
{
    if (m_intensity_attr)
    {
        return *m_intensity_attr;
    }
    return ST_ArtisticEffectParam10::default_instance();
}

CT_PictureEffectGlowDiffused* CT_PictureEffectGlowDiffused::default_instance_ = NULL;

// CT_PictureEffectGlowEdges
CT_PictureEffectGlowEdges::CT_PictureEffectGlowEdges()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_smoothness_attr(false),
     m_smoothness_attr(NULL)
{
}
CT_PictureEffectGlowEdges::~CT_PictureEffectGlowEdges()
{
    clear();
}
void CT_PictureEffectGlowEdges::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_smoothness_attr = false;

    if (m_smoothness_attr)
    {
        delete m_smoothness_attr;
        m_smoothness_attr = NULL;
    }

}

void CT_PictureEffectGlowEdges::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_smoothness_attr)
    {
        m_smoothness_attr->toXmlAttr("smoothness", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectGlowEdges& CT_PictureEffectGlowEdges::default_instance()
{
    if (!CT_PictureEffectGlowEdges::default_instance_)
    {
        CT_PictureEffectGlowEdges::default_instance_ = new CT_PictureEffectGlowEdges();
    }
    return *CT_PictureEffectGlowEdges::default_instance_;
}

bool CT_PictureEffectGlowEdges::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectGlowEdges::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectGlowEdges::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectGlowEdges::has_smoothness_attr() const
{
    return m_has_smoothness_attr;
}

void CT_PictureEffectGlowEdges::set_smoothness_attr(const ST_ArtisticEffectParam10& _smoothness_attr)
{
    m_has_smoothness_attr = true;
    m_smoothness_attr = new ST_ArtisticEffectParam10(_smoothness_attr);
}

const ST_ArtisticEffectParam10& CT_PictureEffectGlowEdges::get_smoothness_attr() const
{
    if (m_smoothness_attr)
    {
        return *m_smoothness_attr;
    }
    return ST_ArtisticEffectParam10::default_instance();
}

CT_PictureEffectGlowEdges* CT_PictureEffectGlowEdges::default_instance_ = NULL;

// CT_PictureEffectLightScreen
CT_PictureEffectLightScreen::CT_PictureEffectLightScreen()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_gridSize_attr(false),
     m_gridSize_attr(NULL)
{
}
CT_PictureEffectLightScreen::~CT_PictureEffectLightScreen()
{
    clear();
}
void CT_PictureEffectLightScreen::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_gridSize_attr = false;

    if (m_gridSize_attr)
    {
        delete m_gridSize_attr;
        m_gridSize_attr = NULL;
    }

}

void CT_PictureEffectLightScreen::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_gridSize_attr)
    {
        m_gridSize_attr->toXmlAttr("gridSize", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectLightScreen& CT_PictureEffectLightScreen::default_instance()
{
    if (!CT_PictureEffectLightScreen::default_instance_)
    {
        CT_PictureEffectLightScreen::default_instance_ = new CT_PictureEffectLightScreen();
    }
    return *CT_PictureEffectLightScreen::default_instance_;
}

bool CT_PictureEffectLightScreen::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectLightScreen::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectLightScreen::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectLightScreen::has_gridSize_attr() const
{
    return m_has_gridSize_attr;
}

void CT_PictureEffectLightScreen::set_gridSize_attr(const ST_ArtisticEffectParam10& _gridSize_attr)
{
    m_has_gridSize_attr = true;
    m_gridSize_attr = new ST_ArtisticEffectParam10(_gridSize_attr);
}

const ST_ArtisticEffectParam10& CT_PictureEffectLightScreen::get_gridSize_attr() const
{
    if (m_gridSize_attr)
    {
        return *m_gridSize_attr;
    }
    return ST_ArtisticEffectParam10::default_instance();
}

CT_PictureEffectLightScreen* CT_PictureEffectLightScreen::default_instance_ = NULL;

// CT_PictureEffectLineDrawing
CT_PictureEffectLineDrawing::CT_PictureEffectLineDrawing()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_pencilSize_attr(false),
     m_pencilSize_attr(NULL)
{
}
CT_PictureEffectLineDrawing::~CT_PictureEffectLineDrawing()
{
    clear();
}
void CT_PictureEffectLineDrawing::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_pencilSize_attr = false;

    if (m_pencilSize_attr)
    {
        delete m_pencilSize_attr;
        m_pencilSize_attr = NULL;
    }

}

void CT_PictureEffectLineDrawing::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_pencilSize_attr)
    {
        m_pencilSize_attr->toXmlAttr("pencilSize", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectLineDrawing& CT_PictureEffectLineDrawing::default_instance()
{
    if (!CT_PictureEffectLineDrawing::default_instance_)
    {
        CT_PictureEffectLineDrawing::default_instance_ = new CT_PictureEffectLineDrawing();
    }
    return *CT_PictureEffectLineDrawing::default_instance_;
}

bool CT_PictureEffectLineDrawing::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectLineDrawing::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectLineDrawing::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectLineDrawing::has_pencilSize_attr() const
{
    return m_has_pencilSize_attr;
}

void CT_PictureEffectLineDrawing::set_pencilSize_attr(const ST_ArtisticEffectParam100& _pencilSize_attr)
{
    m_has_pencilSize_attr = true;
    m_pencilSize_attr = new ST_ArtisticEffectParam100(_pencilSize_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectLineDrawing::get_pencilSize_attr() const
{
    if (m_pencilSize_attr)
    {
        return *m_pencilSize_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectLineDrawing* CT_PictureEffectLineDrawing::default_instance_ = NULL;

// CT_PictureEffectMarker
CT_PictureEffectMarker::CT_PictureEffectMarker()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_size_attr(false),
     m_size_attr(NULL)
{
}
CT_PictureEffectMarker::~CT_PictureEffectMarker()
{
    clear();
}
void CT_PictureEffectMarker::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_size_attr = false;

    if (m_size_attr)
    {
        delete m_size_attr;
        m_size_attr = NULL;
    }

}

void CT_PictureEffectMarker::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_size_attr)
    {
        m_size_attr->toXmlAttr("size", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectMarker& CT_PictureEffectMarker::default_instance()
{
    if (!CT_PictureEffectMarker::default_instance_)
    {
        CT_PictureEffectMarker::default_instance_ = new CT_PictureEffectMarker();
    }
    return *CT_PictureEffectMarker::default_instance_;
}

bool CT_PictureEffectMarker::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectMarker::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectMarker::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectMarker::has_size_attr() const
{
    return m_has_size_attr;
}

void CT_PictureEffectMarker::set_size_attr(const ST_ArtisticEffectParam100& _size_attr)
{
    m_has_size_attr = true;
    m_size_attr = new ST_ArtisticEffectParam100(_size_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectMarker::get_size_attr() const
{
    if (m_size_attr)
    {
        return *m_size_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectMarker* CT_PictureEffectMarker::default_instance_ = NULL;

// CT_PictureEffectMosiaicBubbles
CT_PictureEffectMosiaicBubbles::CT_PictureEffectMosiaicBubbles()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_pressure_attr(false),
     m_pressure_attr(NULL)
{
}
CT_PictureEffectMosiaicBubbles::~CT_PictureEffectMosiaicBubbles()
{
    clear();
}
void CT_PictureEffectMosiaicBubbles::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_pressure_attr = false;

    if (m_pressure_attr)
    {
        delete m_pressure_attr;
        m_pressure_attr = NULL;
    }

}

void CT_PictureEffectMosiaicBubbles::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_pressure_attr)
    {
        m_pressure_attr->toXmlAttr("pressure", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectMosiaicBubbles& CT_PictureEffectMosiaicBubbles::default_instance()
{
    if (!CT_PictureEffectMosiaicBubbles::default_instance_)
    {
        CT_PictureEffectMosiaicBubbles::default_instance_ = new CT_PictureEffectMosiaicBubbles();
    }
    return *CT_PictureEffectMosiaicBubbles::default_instance_;
}

bool CT_PictureEffectMosiaicBubbles::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectMosiaicBubbles::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectMosiaicBubbles::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectMosiaicBubbles::has_pressure_attr() const
{
    return m_has_pressure_attr;
}

void CT_PictureEffectMosiaicBubbles::set_pressure_attr(const ST_ArtisticEffectParam100& _pressure_attr)
{
    m_has_pressure_attr = true;
    m_pressure_attr = new ST_ArtisticEffectParam100(_pressure_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectMosiaicBubbles::get_pressure_attr() const
{
    if (m_pressure_attr)
    {
        return *m_pressure_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectMosiaicBubbles* CT_PictureEffectMosiaicBubbles::default_instance_ = NULL;

// CT_PictureEffectPaintBrush
CT_PictureEffectPaintBrush::CT_PictureEffectPaintBrush()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_brushSize_attr(false),
     m_brushSize_attr(NULL)
{
}
CT_PictureEffectPaintBrush::~CT_PictureEffectPaintBrush()
{
    clear();
}
void CT_PictureEffectPaintBrush::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_brushSize_attr = false;

    if (m_brushSize_attr)
    {
        delete m_brushSize_attr;
        m_brushSize_attr = NULL;
    }

}

void CT_PictureEffectPaintBrush::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_brushSize_attr)
    {
        m_brushSize_attr->toXmlAttr("brushSize", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectPaintBrush& CT_PictureEffectPaintBrush::default_instance()
{
    if (!CT_PictureEffectPaintBrush::default_instance_)
    {
        CT_PictureEffectPaintBrush::default_instance_ = new CT_PictureEffectPaintBrush();
    }
    return *CT_PictureEffectPaintBrush::default_instance_;
}

bool CT_PictureEffectPaintBrush::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectPaintBrush::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectPaintBrush::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectPaintBrush::has_brushSize_attr() const
{
    return m_has_brushSize_attr;
}

void CT_PictureEffectPaintBrush::set_brushSize_attr(const ST_ArtisticEffectParam10& _brushSize_attr)
{
    m_has_brushSize_attr = true;
    m_brushSize_attr = new ST_ArtisticEffectParam10(_brushSize_attr);
}

const ST_ArtisticEffectParam10& CT_PictureEffectPaintBrush::get_brushSize_attr() const
{
    if (m_brushSize_attr)
    {
        return *m_brushSize_attr;
    }
    return ST_ArtisticEffectParam10::default_instance();
}

CT_PictureEffectPaintBrush* CT_PictureEffectPaintBrush::default_instance_ = NULL;

// CT_PictureEffectPaintStrokes
CT_PictureEffectPaintStrokes::CT_PictureEffectPaintStrokes()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_intensity_attr(false),
     m_intensity_attr(NULL)
{
}
CT_PictureEffectPaintStrokes::~CT_PictureEffectPaintStrokes()
{
    clear();
}
void CT_PictureEffectPaintStrokes::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_intensity_attr = false;

    if (m_intensity_attr)
    {
        delete m_intensity_attr;
        m_intensity_attr = NULL;
    }

}

void CT_PictureEffectPaintStrokes::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_intensity_attr)
    {
        m_intensity_attr->toXmlAttr("intensity", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectPaintStrokes& CT_PictureEffectPaintStrokes::default_instance()
{
    if (!CT_PictureEffectPaintStrokes::default_instance_)
    {
        CT_PictureEffectPaintStrokes::default_instance_ = new CT_PictureEffectPaintStrokes();
    }
    return *CT_PictureEffectPaintStrokes::default_instance_;
}

bool CT_PictureEffectPaintStrokes::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectPaintStrokes::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectPaintStrokes::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectPaintStrokes::has_intensity_attr() const
{
    return m_has_intensity_attr;
}

void CT_PictureEffectPaintStrokes::set_intensity_attr(const ST_ArtisticEffectParam10& _intensity_attr)
{
    m_has_intensity_attr = true;
    m_intensity_attr = new ST_ArtisticEffectParam10(_intensity_attr);
}

const ST_ArtisticEffectParam10& CT_PictureEffectPaintStrokes::get_intensity_attr() const
{
    if (m_intensity_attr)
    {
        return *m_intensity_attr;
    }
    return ST_ArtisticEffectParam10::default_instance();
}

CT_PictureEffectPaintStrokes* CT_PictureEffectPaintStrokes::default_instance_ = NULL;

// CT_PictureEffectPastelsSmooth
CT_PictureEffectPastelsSmooth::CT_PictureEffectPastelsSmooth()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_scaling_attr(false),
     m_scaling_attr(NULL)
{
}
CT_PictureEffectPastelsSmooth::~CT_PictureEffectPastelsSmooth()
{
    clear();
}
void CT_PictureEffectPastelsSmooth::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_scaling_attr = false;

    if (m_scaling_attr)
    {
        delete m_scaling_attr;
        m_scaling_attr = NULL;
    }

}

void CT_PictureEffectPastelsSmooth::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_scaling_attr)
    {
        m_scaling_attr->toXmlAttr("scaling", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectPastelsSmooth& CT_PictureEffectPastelsSmooth::default_instance()
{
    if (!CT_PictureEffectPastelsSmooth::default_instance_)
    {
        CT_PictureEffectPastelsSmooth::default_instance_ = new CT_PictureEffectPastelsSmooth();
    }
    return *CT_PictureEffectPastelsSmooth::default_instance_;
}

bool CT_PictureEffectPastelsSmooth::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectPastelsSmooth::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectPastelsSmooth::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectPastelsSmooth::has_scaling_attr() const
{
    return m_has_scaling_attr;
}

void CT_PictureEffectPastelsSmooth::set_scaling_attr(const ST_ArtisticEffectParam100& _scaling_attr)
{
    m_has_scaling_attr = true;
    m_scaling_attr = new ST_ArtisticEffectParam100(_scaling_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectPastelsSmooth::get_scaling_attr() const
{
    if (m_scaling_attr)
    {
        return *m_scaling_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectPastelsSmooth* CT_PictureEffectPastelsSmooth::default_instance_ = NULL;

// CT_PictureEffectPencilGrayscale
CT_PictureEffectPencilGrayscale::CT_PictureEffectPencilGrayscale()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_pencilSize_attr(false),
     m_pencilSize_attr(NULL)
{
}
CT_PictureEffectPencilGrayscale::~CT_PictureEffectPencilGrayscale()
{
    clear();
}
void CT_PictureEffectPencilGrayscale::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_pencilSize_attr = false;

    if (m_pencilSize_attr)
    {
        delete m_pencilSize_attr;
        m_pencilSize_attr = NULL;
    }

}

void CT_PictureEffectPencilGrayscale::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_pencilSize_attr)
    {
        m_pencilSize_attr->toXmlAttr("pencilSize", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectPencilGrayscale& CT_PictureEffectPencilGrayscale::default_instance()
{
    if (!CT_PictureEffectPencilGrayscale::default_instance_)
    {
        CT_PictureEffectPencilGrayscale::default_instance_ = new CT_PictureEffectPencilGrayscale();
    }
    return *CT_PictureEffectPencilGrayscale::default_instance_;
}

bool CT_PictureEffectPencilGrayscale::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectPencilGrayscale::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectPencilGrayscale::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectPencilGrayscale::has_pencilSize_attr() const
{
    return m_has_pencilSize_attr;
}

void CT_PictureEffectPencilGrayscale::set_pencilSize_attr(const ST_ArtisticEffectParam100& _pencilSize_attr)
{
    m_has_pencilSize_attr = true;
    m_pencilSize_attr = new ST_ArtisticEffectParam100(_pencilSize_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectPencilGrayscale::get_pencilSize_attr() const
{
    if (m_pencilSize_attr)
    {
        return *m_pencilSize_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectPencilGrayscale* CT_PictureEffectPencilGrayscale::default_instance_ = NULL;

// CT_PictureEffectPencilSketch
CT_PictureEffectPencilSketch::CT_PictureEffectPencilSketch()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_pressure_attr(false),
     m_pressure_attr(NULL)
{
}
CT_PictureEffectPencilSketch::~CT_PictureEffectPencilSketch()
{
    clear();
}
void CT_PictureEffectPencilSketch::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_pressure_attr = false;

    if (m_pressure_attr)
    {
        delete m_pressure_attr;
        m_pressure_attr = NULL;
    }

}

void CT_PictureEffectPencilSketch::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_pressure_attr)
    {
        m_pressure_attr->toXmlAttr("pressure", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectPencilSketch& CT_PictureEffectPencilSketch::default_instance()
{
    if (!CT_PictureEffectPencilSketch::default_instance_)
    {
        CT_PictureEffectPencilSketch::default_instance_ = new CT_PictureEffectPencilSketch();
    }
    return *CT_PictureEffectPencilSketch::default_instance_;
}

bool CT_PictureEffectPencilSketch::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectPencilSketch::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectPencilSketch::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectPencilSketch::has_pressure_attr() const
{
    return m_has_pressure_attr;
}

void CT_PictureEffectPencilSketch::set_pressure_attr(const ST_ArtisticEffectParam100& _pressure_attr)
{
    m_has_pressure_attr = true;
    m_pressure_attr = new ST_ArtisticEffectParam100(_pressure_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectPencilSketch::get_pressure_attr() const
{
    if (m_pressure_attr)
    {
        return *m_pressure_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectPencilSketch* CT_PictureEffectPencilSketch::default_instance_ = NULL;

// CT_PictureEffectPhotocopy
CT_PictureEffectPhotocopy::CT_PictureEffectPhotocopy()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_detail_attr(false),
     m_detail_attr(NULL)
{
}
CT_PictureEffectPhotocopy::~CT_PictureEffectPhotocopy()
{
    clear();
}
void CT_PictureEffectPhotocopy::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_detail_attr = false;

    if (m_detail_attr)
    {
        delete m_detail_attr;
        m_detail_attr = NULL;
    }

}

void CT_PictureEffectPhotocopy::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_detail_attr)
    {
        m_detail_attr->toXmlAttr("detail", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectPhotocopy& CT_PictureEffectPhotocopy::default_instance()
{
    if (!CT_PictureEffectPhotocopy::default_instance_)
    {
        CT_PictureEffectPhotocopy::default_instance_ = new CT_PictureEffectPhotocopy();
    }
    return *CT_PictureEffectPhotocopy::default_instance_;
}

bool CT_PictureEffectPhotocopy::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectPhotocopy::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectPhotocopy::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectPhotocopy::has_detail_attr() const
{
    return m_has_detail_attr;
}

void CT_PictureEffectPhotocopy::set_detail_attr(const ST_ArtisticEffectParam10& _detail_attr)
{
    m_has_detail_attr = true;
    m_detail_attr = new ST_ArtisticEffectParam10(_detail_attr);
}

const ST_ArtisticEffectParam10& CT_PictureEffectPhotocopy::get_detail_attr() const
{
    if (m_detail_attr)
    {
        return *m_detail_attr;
    }
    return ST_ArtisticEffectParam10::default_instance();
}

CT_PictureEffectPhotocopy* CT_PictureEffectPhotocopy::default_instance_ = NULL;

// CT_PictureEffectPlasticWrap
CT_PictureEffectPlasticWrap::CT_PictureEffectPlasticWrap()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_smoothness_attr(false),
     m_smoothness_attr(NULL)
{
}
CT_PictureEffectPlasticWrap::~CT_PictureEffectPlasticWrap()
{
    clear();
}
void CT_PictureEffectPlasticWrap::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_smoothness_attr = false;

    if (m_smoothness_attr)
    {
        delete m_smoothness_attr;
        m_smoothness_attr = NULL;
    }

}

void CT_PictureEffectPlasticWrap::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_smoothness_attr)
    {
        m_smoothness_attr->toXmlAttr("smoothness", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectPlasticWrap& CT_PictureEffectPlasticWrap::default_instance()
{
    if (!CT_PictureEffectPlasticWrap::default_instance_)
    {
        CT_PictureEffectPlasticWrap::default_instance_ = new CT_PictureEffectPlasticWrap();
    }
    return *CT_PictureEffectPlasticWrap::default_instance_;
}

bool CT_PictureEffectPlasticWrap::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectPlasticWrap::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectPlasticWrap::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectPlasticWrap::has_smoothness_attr() const
{
    return m_has_smoothness_attr;
}

void CT_PictureEffectPlasticWrap::set_smoothness_attr(const ST_ArtisticEffectParam10& _smoothness_attr)
{
    m_has_smoothness_attr = true;
    m_smoothness_attr = new ST_ArtisticEffectParam10(_smoothness_attr);
}

const ST_ArtisticEffectParam10& CT_PictureEffectPlasticWrap::get_smoothness_attr() const
{
    if (m_smoothness_attr)
    {
        return *m_smoothness_attr;
    }
    return ST_ArtisticEffectParam10::default_instance();
}

CT_PictureEffectPlasticWrap* CT_PictureEffectPlasticWrap::default_instance_ = NULL;

// CT_PictureEffectTexturizer
CT_PictureEffectTexturizer::CT_PictureEffectTexturizer()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_scaling_attr(false),
     m_scaling_attr(NULL)
{
}
CT_PictureEffectTexturizer::~CT_PictureEffectTexturizer()
{
    clear();
}
void CT_PictureEffectTexturizer::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_scaling_attr = false;

    if (m_scaling_attr)
    {
        delete m_scaling_attr;
        m_scaling_attr = NULL;
    }

}

void CT_PictureEffectTexturizer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_scaling_attr)
    {
        m_scaling_attr->toXmlAttr("scaling", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectTexturizer& CT_PictureEffectTexturizer::default_instance()
{
    if (!CT_PictureEffectTexturizer::default_instance_)
    {
        CT_PictureEffectTexturizer::default_instance_ = new CT_PictureEffectTexturizer();
    }
    return *CT_PictureEffectTexturizer::default_instance_;
}

bool CT_PictureEffectTexturizer::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectTexturizer::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectTexturizer::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectTexturizer::has_scaling_attr() const
{
    return m_has_scaling_attr;
}

void CT_PictureEffectTexturizer::set_scaling_attr(const ST_ArtisticEffectParam100& _scaling_attr)
{
    m_has_scaling_attr = true;
    m_scaling_attr = new ST_ArtisticEffectParam100(_scaling_attr);
}

const ST_ArtisticEffectParam100& CT_PictureEffectTexturizer::get_scaling_attr() const
{
    if (m_scaling_attr)
    {
        return *m_scaling_attr;
    }
    return ST_ArtisticEffectParam100::default_instance();
}

CT_PictureEffectTexturizer* CT_PictureEffectTexturizer::default_instance_ = NULL;

// CT_PictureEffectWatercolorSponge
CT_PictureEffectWatercolorSponge::CT_PictureEffectWatercolorSponge()
    :m_has_trans_attr(false),
     m_trans_attr(NULL),
     m_has_brushSize_attr(false),
     m_brushSize_attr(NULL)
{
}
CT_PictureEffectWatercolorSponge::~CT_PictureEffectWatercolorSponge()
{
    clear();
}
void CT_PictureEffectWatercolorSponge::clear()
{
    m_has_trans_attr = false;

    if (m_trans_attr)
    {
        delete m_trans_attr;
        m_trans_attr = NULL;
    }


    m_has_brushSize_attr = false;

    if (m_brushSize_attr)
    {
        delete m_brushSize_attr;
        m_brushSize_attr = NULL;
    }

}

void CT_PictureEffectWatercolorSponge::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_trans_attr)
    {
        m_trans_attr->toXmlAttr("trans", _outStream);
    }



    if (m_has_brushSize_attr)
    {
        m_brushSize_attr->toXmlAttr("brushSize", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectWatercolorSponge& CT_PictureEffectWatercolorSponge::default_instance()
{
    if (!CT_PictureEffectWatercolorSponge::default_instance_)
    {
        CT_PictureEffectWatercolorSponge::default_instance_ = new CT_PictureEffectWatercolorSponge();
    }
    return *CT_PictureEffectWatercolorSponge::default_instance_;
}

bool CT_PictureEffectWatercolorSponge::has_trans_attr() const
{
    return m_has_trans_attr;
}

void CT_PictureEffectWatercolorSponge::set_trans_attr(const ns_a::ST_PositiveFixedPercentage& _trans_attr)
{
    m_has_trans_attr = true;
    m_trans_attr = new ns_a::ST_PositiveFixedPercentage(_trans_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectWatercolorSponge::get_trans_attr() const
{
    if (m_trans_attr)
    {
        return *m_trans_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectWatercolorSponge::has_brushSize_attr() const
{
    return m_has_brushSize_attr;
}

void CT_PictureEffectWatercolorSponge::set_brushSize_attr(const ST_ArtisticEffectParam10& _brushSize_attr)
{
    m_has_brushSize_attr = true;
    m_brushSize_attr = new ST_ArtisticEffectParam10(_brushSize_attr);
}

const ST_ArtisticEffectParam10& CT_PictureEffectWatercolorSponge::get_brushSize_attr() const
{
    if (m_brushSize_attr)
    {
        return *m_brushSize_attr;
    }
    return ST_ArtisticEffectParam10::default_instance();
}

CT_PictureEffectWatercolorSponge* CT_PictureEffectWatercolorSponge::default_instance_ = NULL;

// CT_PictureEffectBackgroundRemovalForegroundMark
CT_PictureEffectBackgroundRemovalForegroundMark::CT_PictureEffectBackgroundRemovalForegroundMark()
    :m_has_x1_attr(false),
     m_x1_attr(NULL),
     m_has_y1_attr(false),
     m_y1_attr(NULL),
     m_has_x2_attr(false),
     m_x2_attr(NULL),
     m_has_y2_attr(false),
     m_y2_attr(NULL)
{
}
CT_PictureEffectBackgroundRemovalForegroundMark::~CT_PictureEffectBackgroundRemovalForegroundMark()
{
    clear();
}
void CT_PictureEffectBackgroundRemovalForegroundMark::clear()
{
    m_has_x1_attr = false;

    if (m_x1_attr)
    {
        delete m_x1_attr;
        m_x1_attr = NULL;
    }


    m_has_y1_attr = false;

    if (m_y1_attr)
    {
        delete m_y1_attr;
        m_y1_attr = NULL;
    }


    m_has_x2_attr = false;

    if (m_x2_attr)
    {
        delete m_x2_attr;
        m_x2_attr = NULL;
    }


    m_has_y2_attr = false;

    if (m_y2_attr)
    {
        delete m_y2_attr;
        m_y2_attr = NULL;
    }

}

void CT_PictureEffectBackgroundRemovalForegroundMark::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_x1_attr);
    if (m_has_x1_attr)
    {
        m_x1_attr->toXmlAttr("x1", _outStream);
    }


    assert(m_has_y1_attr);
    if (m_has_y1_attr)
    {
        m_y1_attr->toXmlAttr("y1", _outStream);
    }


    assert(m_has_x2_attr);
    if (m_has_x2_attr)
    {
        m_x2_attr->toXmlAttr("x2", _outStream);
    }


    assert(m_has_y2_attr);
    if (m_has_y2_attr)
    {
        m_y2_attr->toXmlAttr("y2", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectBackgroundRemovalForegroundMark& CT_PictureEffectBackgroundRemovalForegroundMark::default_instance()
{
    if (!CT_PictureEffectBackgroundRemovalForegroundMark::default_instance_)
    {
        CT_PictureEffectBackgroundRemovalForegroundMark::default_instance_ = new CT_PictureEffectBackgroundRemovalForegroundMark();
    }
    return *CT_PictureEffectBackgroundRemovalForegroundMark::default_instance_;
}

bool CT_PictureEffectBackgroundRemovalForegroundMark::has_x1_attr() const
{
    return m_has_x1_attr;
}

void CT_PictureEffectBackgroundRemovalForegroundMark::set_x1_attr(const ns_a::ST_PositiveFixedPercentage& _x1_attr)
{
    m_has_x1_attr = true;
    m_x1_attr = new ns_a::ST_PositiveFixedPercentage(_x1_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemovalForegroundMark::get_x1_attr() const
{
    if (m_x1_attr)
    {
        return *m_x1_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemovalForegroundMark::has_y1_attr() const
{
    return m_has_y1_attr;
}

void CT_PictureEffectBackgroundRemovalForegroundMark::set_y1_attr(const ns_a::ST_PositiveFixedPercentage& _y1_attr)
{
    m_has_y1_attr = true;
    m_y1_attr = new ns_a::ST_PositiveFixedPercentage(_y1_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemovalForegroundMark::get_y1_attr() const
{
    if (m_y1_attr)
    {
        return *m_y1_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemovalForegroundMark::has_x2_attr() const
{
    return m_has_x2_attr;
}

void CT_PictureEffectBackgroundRemovalForegroundMark::set_x2_attr(const ns_a::ST_PositiveFixedPercentage& _x2_attr)
{
    m_has_x2_attr = true;
    m_x2_attr = new ns_a::ST_PositiveFixedPercentage(_x2_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemovalForegroundMark::get_x2_attr() const
{
    if (m_x2_attr)
    {
        return *m_x2_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemovalForegroundMark::has_y2_attr() const
{
    return m_has_y2_attr;
}

void CT_PictureEffectBackgroundRemovalForegroundMark::set_y2_attr(const ns_a::ST_PositiveFixedPercentage& _y2_attr)
{
    m_has_y2_attr = true;
    m_y2_attr = new ns_a::ST_PositiveFixedPercentage(_y2_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemovalForegroundMark::get_y2_attr() const
{
    if (m_y2_attr)
    {
        return *m_y2_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

CT_PictureEffectBackgroundRemovalForegroundMark* CT_PictureEffectBackgroundRemovalForegroundMark::default_instance_ = NULL;

// CT_PictureEffectBackgroundRemovalBackgroundMark
CT_PictureEffectBackgroundRemovalBackgroundMark::CT_PictureEffectBackgroundRemovalBackgroundMark()
    :m_has_x1_attr(false),
     m_x1_attr(NULL),
     m_has_y1_attr(false),
     m_y1_attr(NULL),
     m_has_x2_attr(false),
     m_x2_attr(NULL),
     m_has_y2_attr(false),
     m_y2_attr(NULL)
{
}
CT_PictureEffectBackgroundRemovalBackgroundMark::~CT_PictureEffectBackgroundRemovalBackgroundMark()
{
    clear();
}
void CT_PictureEffectBackgroundRemovalBackgroundMark::clear()
{
    m_has_x1_attr = false;

    if (m_x1_attr)
    {
        delete m_x1_attr;
        m_x1_attr = NULL;
    }


    m_has_y1_attr = false;

    if (m_y1_attr)
    {
        delete m_y1_attr;
        m_y1_attr = NULL;
    }


    m_has_x2_attr = false;

    if (m_x2_attr)
    {
        delete m_x2_attr;
        m_x2_attr = NULL;
    }


    m_has_y2_attr = false;

    if (m_y2_attr)
    {
        delete m_y2_attr;
        m_y2_attr = NULL;
    }

}

void CT_PictureEffectBackgroundRemovalBackgroundMark::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_x1_attr);
    if (m_has_x1_attr)
    {
        m_x1_attr->toXmlAttr("x1", _outStream);
    }


    assert(m_has_y1_attr);
    if (m_has_y1_attr)
    {
        m_y1_attr->toXmlAttr("y1", _outStream);
    }


    assert(m_has_x2_attr);
    if (m_has_x2_attr)
    {
        m_x2_attr->toXmlAttr("x2", _outStream);
    }


    assert(m_has_y2_attr);
    if (m_has_y2_attr)
    {
        m_y2_attr->toXmlAttr("y2", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectBackgroundRemovalBackgroundMark& CT_PictureEffectBackgroundRemovalBackgroundMark::default_instance()
{
    if (!CT_PictureEffectBackgroundRemovalBackgroundMark::default_instance_)
    {
        CT_PictureEffectBackgroundRemovalBackgroundMark::default_instance_ = new CT_PictureEffectBackgroundRemovalBackgroundMark();
    }
    return *CT_PictureEffectBackgroundRemovalBackgroundMark::default_instance_;
}

bool CT_PictureEffectBackgroundRemovalBackgroundMark::has_x1_attr() const
{
    return m_has_x1_attr;
}

void CT_PictureEffectBackgroundRemovalBackgroundMark::set_x1_attr(const ns_a::ST_PositiveFixedPercentage& _x1_attr)
{
    m_has_x1_attr = true;
    m_x1_attr = new ns_a::ST_PositiveFixedPercentage(_x1_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemovalBackgroundMark::get_x1_attr() const
{
    if (m_x1_attr)
    {
        return *m_x1_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemovalBackgroundMark::has_y1_attr() const
{
    return m_has_y1_attr;
}

void CT_PictureEffectBackgroundRemovalBackgroundMark::set_y1_attr(const ns_a::ST_PositiveFixedPercentage& _y1_attr)
{
    m_has_y1_attr = true;
    m_y1_attr = new ns_a::ST_PositiveFixedPercentage(_y1_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemovalBackgroundMark::get_y1_attr() const
{
    if (m_y1_attr)
    {
        return *m_y1_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemovalBackgroundMark::has_x2_attr() const
{
    return m_has_x2_attr;
}

void CT_PictureEffectBackgroundRemovalBackgroundMark::set_x2_attr(const ns_a::ST_PositiveFixedPercentage& _x2_attr)
{
    m_has_x2_attr = true;
    m_x2_attr = new ns_a::ST_PositiveFixedPercentage(_x2_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemovalBackgroundMark::get_x2_attr() const
{
    if (m_x2_attr)
    {
        return *m_x2_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemovalBackgroundMark::has_y2_attr() const
{
    return m_has_y2_attr;
}

void CT_PictureEffectBackgroundRemovalBackgroundMark::set_y2_attr(const ns_a::ST_PositiveFixedPercentage& _y2_attr)
{
    m_has_y2_attr = true;
    m_y2_attr = new ns_a::ST_PositiveFixedPercentage(_y2_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemovalBackgroundMark::get_y2_attr() const
{
    if (m_y2_attr)
    {
        return *m_y2_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

CT_PictureEffectBackgroundRemovalBackgroundMark* CT_PictureEffectBackgroundRemovalBackgroundMark::default_instance_ = NULL;

// CT_PictureEffectBackgroundRemoval
CT_PictureEffectBackgroundRemoval::CT_PictureEffectBackgroundRemoval()
    :m_has_t_attr(false),
     m_t_attr(NULL),
     m_has_b_attr(false),
     m_b_attr(NULL),
     m_has_l_attr(false),
     m_l_attr(NULL),
     m_has_r_attr(false),
     m_r_attr(NULL)
{
}
CT_PictureEffectBackgroundRemoval::~CT_PictureEffectBackgroundRemoval()
{
    clear();
}
CT_PictureEffectBackgroundRemovalForegroundMark* CT_PictureEffectBackgroundRemoval::add_foregroundMark()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PictureEffectBackgroundRemovalForegroundMark* pNewChild = pChildGroup->mutable_foregroundMark();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

CT_PictureEffectBackgroundRemovalBackgroundMark* CT_PictureEffectBackgroundRemoval::add_backgroundMark()
{
    ChildGroup_2 *pChildGroup = new ChildGroup_2();
    CT_PictureEffectBackgroundRemovalBackgroundMark* pNewChild = pChildGroup->mutable_backgroundMark();
    m_childGroupList_2.push_back(pChildGroup);
    return pNewChild;
}

void CT_PictureEffectBackgroundRemoval::clear()
{
    m_has_t_attr = false;

    if (m_t_attr)
    {
        delete m_t_attr;
        m_t_attr = NULL;
    }


    m_has_b_attr = false;

    if (m_b_attr)
    {
        delete m_b_attr;
        m_b_attr = NULL;
    }


    m_has_l_attr = false;

    if (m_l_attr)
    {
        delete m_l_attr;
        m_l_attr = NULL;
    }


    m_has_r_attr = false;

    if (m_r_attr)
    {
        delete m_r_attr;
        m_r_attr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }

    {
        vector<ChildGroup_2*>::iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_2.clear();
    }
}

void CT_PictureEffectBackgroundRemoval::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    assert(m_has_t_attr);
    if (m_has_t_attr)
    {
        m_t_attr->toXmlAttr("t", _outStream);
    }


    assert(m_has_b_attr);
    if (m_has_b_attr)
    {
        m_b_attr->toXmlAttr("b", _outStream);
    }


    assert(m_has_l_attr);
    if (m_has_l_attr)
    {
        m_l_attr->toXmlAttr("l", _outStream);
    }


    assert(m_has_r_attr);
    if (m_has_r_attr)
    {
        m_r_attr->toXmlAttr("r", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_foregroundMark())
            {
                (*iter)->get_foregroundMark().toXmlElem("a14:foregroundMark", "", _outStream);
            }


        }
    }

    {
        vector<ChildGroup_2*>::const_iterator iter;
        for (iter = m_childGroupList_2.begin(); iter != m_childGroupList_2.end(); ++iter)
        {
            if ((*iter)->has_backgroundMark())
            {
                (*iter)->get_backgroundMark().toXmlElem("a14:backgroundMark", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectBackgroundRemoval& CT_PictureEffectBackgroundRemoval::default_instance()
{
    if (!CT_PictureEffectBackgroundRemoval::default_instance_)
    {
        CT_PictureEffectBackgroundRemoval::default_instance_ = new CT_PictureEffectBackgroundRemoval();
    }
    return *CT_PictureEffectBackgroundRemoval::default_instance_;
}

bool CT_PictureEffectBackgroundRemoval::has_t_attr() const
{
    return m_has_t_attr;
}

void CT_PictureEffectBackgroundRemoval::set_t_attr(const ns_a::ST_PositiveFixedPercentage& _t_attr)
{
    m_has_t_attr = true;
    m_t_attr = new ns_a::ST_PositiveFixedPercentage(_t_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemoval::get_t_attr() const
{
    if (m_t_attr)
    {
        return *m_t_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemoval::has_b_attr() const
{
    return m_has_b_attr;
}

void CT_PictureEffectBackgroundRemoval::set_b_attr(const ns_a::ST_PositiveFixedPercentage& _b_attr)
{
    m_has_b_attr = true;
    m_b_attr = new ns_a::ST_PositiveFixedPercentage(_b_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemoval::get_b_attr() const
{
    if (m_b_attr)
    {
        return *m_b_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemoval::has_l_attr() const
{
    return m_has_l_attr;
}

void CT_PictureEffectBackgroundRemoval::set_l_attr(const ns_a::ST_PositiveFixedPercentage& _l_attr)
{
    m_has_l_attr = true;
    m_l_attr = new ns_a::ST_PositiveFixedPercentage(_l_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemoval::get_l_attr() const
{
    if (m_l_attr)
    {
        return *m_l_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}

bool CT_PictureEffectBackgroundRemoval::has_r_attr() const
{
    return m_has_r_attr;
}

void CT_PictureEffectBackgroundRemoval::set_r_attr(const ns_a::ST_PositiveFixedPercentage& _r_attr)
{
    m_has_r_attr = true;
    m_r_attr = new ns_a::ST_PositiveFixedPercentage(_r_attr);
}

const ns_a::ST_PositiveFixedPercentage& CT_PictureEffectBackgroundRemoval::get_r_attr() const
{
    if (m_r_attr)
    {
        return *m_r_attr;
    }
    return ns_a::ST_PositiveFixedPercentage::default_instance();
}


// CT_PictureEffectBackgroundRemoval::ChildGroup_1
CT_PictureEffectBackgroundRemoval::ChildGroup_1::ChildGroup_1()
    :m_has_foregroundMark(false),
     m_foregroundMark(NULL)
{
}
bool CT_PictureEffectBackgroundRemoval::ChildGroup_1::has_foregroundMark() const
{
    return m_has_foregroundMark;
}

CT_PictureEffectBackgroundRemovalForegroundMark* CT_PictureEffectBackgroundRemoval::ChildGroup_1::mutable_foregroundMark()
{

    m_has_foregroundMark = true;
    if (!m_foregroundMark)
    {
        m_foregroundMark = new CT_PictureEffectBackgroundRemovalForegroundMark();
    }
    return m_foregroundMark;
}

const CT_PictureEffectBackgroundRemovalForegroundMark& CT_PictureEffectBackgroundRemoval::ChildGroup_1::get_foregroundMark() const
{
    if (m_foregroundMark)
    {
        return *m_foregroundMark;
    }
    return CT_PictureEffectBackgroundRemovalForegroundMark::default_instance();
}


// CT_PictureEffectBackgroundRemoval::ChildGroup_2
CT_PictureEffectBackgroundRemoval::ChildGroup_2::ChildGroup_2()
    :m_has_backgroundMark(false),
     m_backgroundMark(NULL)
{
}
bool CT_PictureEffectBackgroundRemoval::ChildGroup_2::has_backgroundMark() const
{
    return m_has_backgroundMark;
}

CT_PictureEffectBackgroundRemovalBackgroundMark* CT_PictureEffectBackgroundRemoval::ChildGroup_2::mutable_backgroundMark()
{

    m_has_backgroundMark = true;
    if (!m_backgroundMark)
    {
        m_backgroundMark = new CT_PictureEffectBackgroundRemovalBackgroundMark();
    }
    return m_backgroundMark;
}

const CT_PictureEffectBackgroundRemovalBackgroundMark& CT_PictureEffectBackgroundRemoval::ChildGroup_2::get_backgroundMark() const
{
    if (m_backgroundMark)
    {
        return *m_backgroundMark;
    }
    return CT_PictureEffectBackgroundRemovalBackgroundMark::default_instance();
}

CT_PictureEffectBackgroundRemoval* CT_PictureEffectBackgroundRemoval::default_instance_ = NULL;

// CT_PictureEffectBrightnessContrast
CT_PictureEffectBrightnessContrast::CT_PictureEffectBrightnessContrast()
    :m_has_bright_attr(false),
     m_bright_attr(NULL),
     m_has_contrast_attr(false),
     m_contrast_attr(NULL)
{
}
CT_PictureEffectBrightnessContrast::~CT_PictureEffectBrightnessContrast()
{
    clear();
}
void CT_PictureEffectBrightnessContrast::clear()
{
    m_has_bright_attr = false;

    if (m_bright_attr)
    {
        delete m_bright_attr;
        m_bright_attr = NULL;
    }


    m_has_contrast_attr = false;

    if (m_contrast_attr)
    {
        delete m_contrast_attr;
        m_contrast_attr = NULL;
    }

}

void CT_PictureEffectBrightnessContrast::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_bright_attr)
    {
        m_bright_attr->toXmlAttr("bright", _outStream);
    }



    if (m_has_contrast_attr)
    {
        m_contrast_attr->toXmlAttr("contrast", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectBrightnessContrast& CT_PictureEffectBrightnessContrast::default_instance()
{
    if (!CT_PictureEffectBrightnessContrast::default_instance_)
    {
        CT_PictureEffectBrightnessContrast::default_instance_ = new CT_PictureEffectBrightnessContrast();
    }
    return *CT_PictureEffectBrightnessContrast::default_instance_;
}

bool CT_PictureEffectBrightnessContrast::has_bright_attr() const
{
    return m_has_bright_attr;
}

void CT_PictureEffectBrightnessContrast::set_bright_attr(const ns_a::ST_FixedPercentage& _bright_attr)
{
    m_has_bright_attr = true;
    m_bright_attr = new ns_a::ST_FixedPercentage(_bright_attr);
}

const ns_a::ST_FixedPercentage& CT_PictureEffectBrightnessContrast::get_bright_attr() const
{
    if (m_bright_attr)
    {
        return *m_bright_attr;
    }
    return ns_a::ST_FixedPercentage::default_instance();
}

bool CT_PictureEffectBrightnessContrast::has_contrast_attr() const
{
    return m_has_contrast_attr;
}

void CT_PictureEffectBrightnessContrast::set_contrast_attr(const ns_a::ST_FixedPercentage& _contrast_attr)
{
    m_has_contrast_attr = true;
    m_contrast_attr = new ns_a::ST_FixedPercentage(_contrast_attr);
}

const ns_a::ST_FixedPercentage& CT_PictureEffectBrightnessContrast::get_contrast_attr() const
{
    if (m_contrast_attr)
    {
        return *m_contrast_attr;
    }
    return ns_a::ST_FixedPercentage::default_instance();
}

CT_PictureEffectBrightnessContrast* CT_PictureEffectBrightnessContrast::default_instance_ = NULL;

// CT_PictureEffectColorTemperature
CT_PictureEffectColorTemperature::CT_PictureEffectColorTemperature()
    :m_has_colorTemp_attr(false),
     m_colorTemp_attr(NULL)
{
}
CT_PictureEffectColorTemperature::~CT_PictureEffectColorTemperature()
{
    clear();
}
void CT_PictureEffectColorTemperature::clear()
{
    m_has_colorTemp_attr = false;

    if (m_colorTemp_attr)
    {
        delete m_colorTemp_attr;
        m_colorTemp_attr = NULL;
    }

}

void CT_PictureEffectColorTemperature::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_colorTemp_attr)
    {
        m_colorTemp_attr->toXmlAttr("colorTemp", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectColorTemperature& CT_PictureEffectColorTemperature::default_instance()
{
    if (!CT_PictureEffectColorTemperature::default_instance_)
    {
        CT_PictureEffectColorTemperature::default_instance_ = new CT_PictureEffectColorTemperature();
    }
    return *CT_PictureEffectColorTemperature::default_instance_;
}

bool CT_PictureEffectColorTemperature::has_colorTemp_attr() const
{
    return m_has_colorTemp_attr;
}

void CT_PictureEffectColorTemperature::set_colorTemp_attr(const ST_ColorTemperature& _colorTemp_attr)
{
    m_has_colorTemp_attr = true;
    m_colorTemp_attr = new ST_ColorTemperature(_colorTemp_attr);
}

const ST_ColorTemperature& CT_PictureEffectColorTemperature::get_colorTemp_attr() const
{
    if (m_colorTemp_attr)
    {
        return *m_colorTemp_attr;
    }
    return ST_ColorTemperature::default_instance();
}

CT_PictureEffectColorTemperature* CT_PictureEffectColorTemperature::default_instance_ = NULL;

// CT_PictureEffectSaturation
CT_PictureEffectSaturation::CT_PictureEffectSaturation()
    :m_has_sat_attr(false),
     m_sat_attr(NULL)
{
}
CT_PictureEffectSaturation::~CT_PictureEffectSaturation()
{
    clear();
}
void CT_PictureEffectSaturation::clear()
{
    m_has_sat_attr = false;

    if (m_sat_attr)
    {
        delete m_sat_attr;
        m_sat_attr = NULL;
    }

}

void CT_PictureEffectSaturation::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_sat_attr)
    {
        m_sat_attr->toXmlAttr("sat", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectSaturation& CT_PictureEffectSaturation::default_instance()
{
    if (!CT_PictureEffectSaturation::default_instance_)
    {
        CT_PictureEffectSaturation::default_instance_ = new CT_PictureEffectSaturation();
    }
    return *CT_PictureEffectSaturation::default_instance_;
}

bool CT_PictureEffectSaturation::has_sat_attr() const
{
    return m_has_sat_attr;
}

void CT_PictureEffectSaturation::set_sat_attr(const ST_SaturationAmount& _sat_attr)
{
    m_has_sat_attr = true;
    m_sat_attr = new ST_SaturationAmount(_sat_attr);
}

const ST_SaturationAmount& CT_PictureEffectSaturation::get_sat_attr() const
{
    if (m_sat_attr)
    {
        return *m_sat_attr;
    }
    return ST_SaturationAmount::default_instance();
}

CT_PictureEffectSaturation* CT_PictureEffectSaturation::default_instance_ = NULL;

// CT_PictureEffectSharpenSoften
CT_PictureEffectSharpenSoften::CT_PictureEffectSharpenSoften()
    :m_has_amount_attr(false),
     m_amount_attr(NULL)
{
}
CT_PictureEffectSharpenSoften::~CT_PictureEffectSharpenSoften()
{
    clear();
}
void CT_PictureEffectSharpenSoften::clear()
{
    m_has_amount_attr = false;

    if (m_amount_attr)
    {
        delete m_amount_attr;
        m_amount_attr = NULL;
    }

}

void CT_PictureEffectSharpenSoften::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_amount_attr)
    {
        m_amount_attr->toXmlAttr("amount", _outStream);
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffectSharpenSoften& CT_PictureEffectSharpenSoften::default_instance()
{
    if (!CT_PictureEffectSharpenSoften::default_instance_)
    {
        CT_PictureEffectSharpenSoften::default_instance_ = new CT_PictureEffectSharpenSoften();
    }
    return *CT_PictureEffectSharpenSoften::default_instance_;
}

bool CT_PictureEffectSharpenSoften::has_amount_attr() const
{
    return m_has_amount_attr;
}

void CT_PictureEffectSharpenSoften::set_amount_attr(const ns_a::ST_FixedPercentage& _amount_attr)
{
    m_has_amount_attr = true;
    m_amount_attr = new ns_a::ST_FixedPercentage(_amount_attr);
}

const ns_a::ST_FixedPercentage& CT_PictureEffectSharpenSoften::get_amount_attr() const
{
    if (m_amount_attr)
    {
        return *m_amount_attr;
    }
    return ns_a::ST_FixedPercentage::default_instance();
}

CT_PictureEffectSharpenSoften* CT_PictureEffectSharpenSoften::default_instance_ = NULL;

// CT_PictureEffect
CT_PictureEffect::CT_PictureEffect()
    :m_has_artisticBlur(false),
     m_artisticBlur(NULL),
     m_has_artisticCement(false),
     m_artisticCement(NULL),
     m_has_artisticChalkSketch(false),
     m_artisticChalkSketch(NULL),
     m_has_artisticCrisscrossEtching(false),
     m_artisticCrisscrossEtching(NULL),
     m_has_artisticCutout(false),
     m_artisticCutout(NULL),
     m_has_artisticFilmGrain(false),
     m_artisticFilmGrain(NULL),
     m_has_artisticGlass(false),
     m_artisticGlass(NULL),
     m_has_artisticGlowDiffused(false),
     m_artisticGlowDiffused(NULL),
     m_has_artisticGlowEdges(false),
     m_artisticGlowEdges(NULL),
     m_has_artisticLightScreen(false),
     m_artisticLightScreen(NULL),
     m_has_artisticLineDrawing(false),
     m_artisticLineDrawing(NULL),
     m_has_artisticMarker(false),
     m_artisticMarker(NULL),
     m_has_artisticMosiaicBubbles(false),
     m_artisticMosiaicBubbles(NULL),
     m_has_artisticPaintStrokes(false),
     m_artisticPaintStrokes(NULL),
     m_has_artisticPaintBrush(false),
     m_artisticPaintBrush(NULL),
     m_has_artisticPastelsSmooth(false),
     m_artisticPastelsSmooth(NULL),
     m_has_artisticPencilGrayscale(false),
     m_artisticPencilGrayscale(NULL),
     m_has_artisticPencilSketch(false),
     m_artisticPencilSketch(NULL),
     m_has_artisticPhotocopy(false),
     m_artisticPhotocopy(NULL),
     m_has_artisticPlasticWrap(false),
     m_artisticPlasticWrap(NULL),
     m_has_artisticTexturizer(false),
     m_artisticTexturizer(NULL),
     m_has_artisticWatercolorSponge(false),
     m_artisticWatercolorSponge(NULL),
     m_has_backgroundRemoval(false),
     m_backgroundRemoval(NULL),
     m_has_brightnessContrast(false),
     m_brightnessContrast(NULL),
     m_has_colorTemperature(false),
     m_colorTemperature(NULL),
     m_has_saturation(false),
     m_saturation(NULL),
     m_has_sharpenSoften(false),
     m_sharpenSoften(NULL),
     m_has_visible_attr(false),
     m_visible_attr(false)
{
}
CT_PictureEffect::~CT_PictureEffect()
{
    clear();
}
bool CT_PictureEffect::has_artisticBlur() const
{
    return m_has_artisticBlur;
}

CT_PictureEffectBlur* CT_PictureEffect::mutable_artisticBlur()
{

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticBlur = true;
    if (!m_artisticBlur)
    {
        m_artisticBlur = new CT_PictureEffectBlur();
    }
    return m_artisticBlur;
}

const CT_PictureEffectBlur& CT_PictureEffect::get_artisticBlur() const
{
    if (m_artisticBlur)
    {
        return *m_artisticBlur;
    }
    return CT_PictureEffectBlur::default_instance();
}

bool CT_PictureEffect::has_artisticCement() const
{
    return m_has_artisticCement;
}

CT_PictureEffectCement* CT_PictureEffect::mutable_artisticCement()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticCement = true;
    if (!m_artisticCement)
    {
        m_artisticCement = new CT_PictureEffectCement();
    }
    return m_artisticCement;
}

const CT_PictureEffectCement& CT_PictureEffect::get_artisticCement() const
{
    if (m_artisticCement)
    {
        return *m_artisticCement;
    }
    return CT_PictureEffectCement::default_instance();
}

bool CT_PictureEffect::has_artisticChalkSketch() const
{
    return m_has_artisticChalkSketch;
}

CT_PictureEffectChalkSketch* CT_PictureEffect::mutable_artisticChalkSketch()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticChalkSketch = true;
    if (!m_artisticChalkSketch)
    {
        m_artisticChalkSketch = new CT_PictureEffectChalkSketch();
    }
    return m_artisticChalkSketch;
}

const CT_PictureEffectChalkSketch& CT_PictureEffect::get_artisticChalkSketch() const
{
    if (m_artisticChalkSketch)
    {
        return *m_artisticChalkSketch;
    }
    return CT_PictureEffectChalkSketch::default_instance();
}

bool CT_PictureEffect::has_artisticCrisscrossEtching() const
{
    return m_has_artisticCrisscrossEtching;
}

CT_PictureEffectCrisscrossEtching* CT_PictureEffect::mutable_artisticCrisscrossEtching()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = true;
    if (!m_artisticCrisscrossEtching)
    {
        m_artisticCrisscrossEtching = new CT_PictureEffectCrisscrossEtching();
    }
    return m_artisticCrisscrossEtching;
}

const CT_PictureEffectCrisscrossEtching& CT_PictureEffect::get_artisticCrisscrossEtching() const
{
    if (m_artisticCrisscrossEtching)
    {
        return *m_artisticCrisscrossEtching;
    }
    return CT_PictureEffectCrisscrossEtching::default_instance();
}

bool CT_PictureEffect::has_artisticCutout() const
{
    return m_has_artisticCutout;
}

CT_PictureEffectCutout* CT_PictureEffect::mutable_artisticCutout()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticCutout = true;
    if (!m_artisticCutout)
    {
        m_artisticCutout = new CT_PictureEffectCutout();
    }
    return m_artisticCutout;
}

const CT_PictureEffectCutout& CT_PictureEffect::get_artisticCutout() const
{
    if (m_artisticCutout)
    {
        return *m_artisticCutout;
    }
    return CT_PictureEffectCutout::default_instance();
}

bool CT_PictureEffect::has_artisticFilmGrain() const
{
    return m_has_artisticFilmGrain;
}

CT_PictureEffectFilmGrain* CT_PictureEffect::mutable_artisticFilmGrain()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticFilmGrain = true;
    if (!m_artisticFilmGrain)
    {
        m_artisticFilmGrain = new CT_PictureEffectFilmGrain();
    }
    return m_artisticFilmGrain;
}

const CT_PictureEffectFilmGrain& CT_PictureEffect::get_artisticFilmGrain() const
{
    if (m_artisticFilmGrain)
    {
        return *m_artisticFilmGrain;
    }
    return CT_PictureEffectFilmGrain::default_instance();
}

bool CT_PictureEffect::has_artisticGlass() const
{
    return m_has_artisticGlass;
}

CT_PictureEffectGlass* CT_PictureEffect::mutable_artisticGlass()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticGlass = true;
    if (!m_artisticGlass)
    {
        m_artisticGlass = new CT_PictureEffectGlass();
    }
    return m_artisticGlass;
}

const CT_PictureEffectGlass& CT_PictureEffect::get_artisticGlass() const
{
    if (m_artisticGlass)
    {
        return *m_artisticGlass;
    }
    return CT_PictureEffectGlass::default_instance();
}

bool CT_PictureEffect::has_artisticGlowDiffused() const
{
    return m_has_artisticGlowDiffused;
}

CT_PictureEffectGlowDiffused* CT_PictureEffect::mutable_artisticGlowDiffused()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticGlowDiffused = true;
    if (!m_artisticGlowDiffused)
    {
        m_artisticGlowDiffused = new CT_PictureEffectGlowDiffused();
    }
    return m_artisticGlowDiffused;
}

const CT_PictureEffectGlowDiffused& CT_PictureEffect::get_artisticGlowDiffused() const
{
    if (m_artisticGlowDiffused)
    {
        return *m_artisticGlowDiffused;
    }
    return CT_PictureEffectGlowDiffused::default_instance();
}

bool CT_PictureEffect::has_artisticGlowEdges() const
{
    return m_has_artisticGlowEdges;
}

CT_PictureEffectGlowEdges* CT_PictureEffect::mutable_artisticGlowEdges()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticGlowEdges = true;
    if (!m_artisticGlowEdges)
    {
        m_artisticGlowEdges = new CT_PictureEffectGlowEdges();
    }
    return m_artisticGlowEdges;
}

const CT_PictureEffectGlowEdges& CT_PictureEffect::get_artisticGlowEdges() const
{
    if (m_artisticGlowEdges)
    {
        return *m_artisticGlowEdges;
    }
    return CT_PictureEffectGlowEdges::default_instance();
}

bool CT_PictureEffect::has_artisticLightScreen() const
{
    return m_has_artisticLightScreen;
}

CT_PictureEffectLightScreen* CT_PictureEffect::mutable_artisticLightScreen()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticLightScreen = true;
    if (!m_artisticLightScreen)
    {
        m_artisticLightScreen = new CT_PictureEffectLightScreen();
    }
    return m_artisticLightScreen;
}

const CT_PictureEffectLightScreen& CT_PictureEffect::get_artisticLightScreen() const
{
    if (m_artisticLightScreen)
    {
        return *m_artisticLightScreen;
    }
    return CT_PictureEffectLightScreen::default_instance();
}

bool CT_PictureEffect::has_artisticLineDrawing() const
{
    return m_has_artisticLineDrawing;
}

CT_PictureEffectLineDrawing* CT_PictureEffect::mutable_artisticLineDrawing()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticLineDrawing = true;
    if (!m_artisticLineDrawing)
    {
        m_artisticLineDrawing = new CT_PictureEffectLineDrawing();
    }
    return m_artisticLineDrawing;
}

const CT_PictureEffectLineDrawing& CT_PictureEffect::get_artisticLineDrawing() const
{
    if (m_artisticLineDrawing)
    {
        return *m_artisticLineDrawing;
    }
    return CT_PictureEffectLineDrawing::default_instance();
}

bool CT_PictureEffect::has_artisticMarker() const
{
    return m_has_artisticMarker;
}

CT_PictureEffectMarker* CT_PictureEffect::mutable_artisticMarker()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticMarker = true;
    if (!m_artisticMarker)
    {
        m_artisticMarker = new CT_PictureEffectMarker();
    }
    return m_artisticMarker;
}

const CT_PictureEffectMarker& CT_PictureEffect::get_artisticMarker() const
{
    if (m_artisticMarker)
    {
        return *m_artisticMarker;
    }
    return CT_PictureEffectMarker::default_instance();
}

bool CT_PictureEffect::has_artisticMosiaicBubbles() const
{
    return m_has_artisticMosiaicBubbles;
}

CT_PictureEffectMosiaicBubbles* CT_PictureEffect::mutable_artisticMosiaicBubbles()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = true;
    if (!m_artisticMosiaicBubbles)
    {
        m_artisticMosiaicBubbles = new CT_PictureEffectMosiaicBubbles();
    }
    return m_artisticMosiaicBubbles;
}

const CT_PictureEffectMosiaicBubbles& CT_PictureEffect::get_artisticMosiaicBubbles() const
{
    if (m_artisticMosiaicBubbles)
    {
        return *m_artisticMosiaicBubbles;
    }
    return CT_PictureEffectMosiaicBubbles::default_instance();
}

bool CT_PictureEffect::has_artisticPaintStrokes() const
{
    return m_has_artisticPaintStrokes;
}

CT_PictureEffectPaintStrokes* CT_PictureEffect::mutable_artisticPaintStrokes()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticPaintStrokes = true;
    if (!m_artisticPaintStrokes)
    {
        m_artisticPaintStrokes = new CT_PictureEffectPaintStrokes();
    }
    return m_artisticPaintStrokes;
}

const CT_PictureEffectPaintStrokes& CT_PictureEffect::get_artisticPaintStrokes() const
{
    if (m_artisticPaintStrokes)
    {
        return *m_artisticPaintStrokes;
    }
    return CT_PictureEffectPaintStrokes::default_instance();
}

bool CT_PictureEffect::has_artisticPaintBrush() const
{
    return m_has_artisticPaintBrush;
}

CT_PictureEffectPaintBrush* CT_PictureEffect::mutable_artisticPaintBrush()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticPaintBrush = true;
    if (!m_artisticPaintBrush)
    {
        m_artisticPaintBrush = new CT_PictureEffectPaintBrush();
    }
    return m_artisticPaintBrush;
}

const CT_PictureEffectPaintBrush& CT_PictureEffect::get_artisticPaintBrush() const
{
    if (m_artisticPaintBrush)
    {
        return *m_artisticPaintBrush;
    }
    return CT_PictureEffectPaintBrush::default_instance();
}

bool CT_PictureEffect::has_artisticPastelsSmooth() const
{
    return m_has_artisticPastelsSmooth;
}

CT_PictureEffectPastelsSmooth* CT_PictureEffect::mutable_artisticPastelsSmooth()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = true;
    if (!m_artisticPastelsSmooth)
    {
        m_artisticPastelsSmooth = new CT_PictureEffectPastelsSmooth();
    }
    return m_artisticPastelsSmooth;
}

const CT_PictureEffectPastelsSmooth& CT_PictureEffect::get_artisticPastelsSmooth() const
{
    if (m_artisticPastelsSmooth)
    {
        return *m_artisticPastelsSmooth;
    }
    return CT_PictureEffectPastelsSmooth::default_instance();
}

bool CT_PictureEffect::has_artisticPencilGrayscale() const
{
    return m_has_artisticPencilGrayscale;
}

CT_PictureEffectPencilGrayscale* CT_PictureEffect::mutable_artisticPencilGrayscale()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = true;
    if (!m_artisticPencilGrayscale)
    {
        m_artisticPencilGrayscale = new CT_PictureEffectPencilGrayscale();
    }
    return m_artisticPencilGrayscale;
}

const CT_PictureEffectPencilGrayscale& CT_PictureEffect::get_artisticPencilGrayscale() const
{
    if (m_artisticPencilGrayscale)
    {
        return *m_artisticPencilGrayscale;
    }
    return CT_PictureEffectPencilGrayscale::default_instance();
}

bool CT_PictureEffect::has_artisticPencilSketch() const
{
    return m_has_artisticPencilSketch;
}

CT_PictureEffectPencilSketch* CT_PictureEffect::mutable_artisticPencilSketch()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticPencilSketch = true;
    if (!m_artisticPencilSketch)
    {
        m_artisticPencilSketch = new CT_PictureEffectPencilSketch();
    }
    return m_artisticPencilSketch;
}

const CT_PictureEffectPencilSketch& CT_PictureEffect::get_artisticPencilSketch() const
{
    if (m_artisticPencilSketch)
    {
        return *m_artisticPencilSketch;
    }
    return CT_PictureEffectPencilSketch::default_instance();
}

bool CT_PictureEffect::has_artisticPhotocopy() const
{
    return m_has_artisticPhotocopy;
}

CT_PictureEffectPhotocopy* CT_PictureEffect::mutable_artisticPhotocopy()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticPhotocopy = true;
    if (!m_artisticPhotocopy)
    {
        m_artisticPhotocopy = new CT_PictureEffectPhotocopy();
    }
    return m_artisticPhotocopy;
}

const CT_PictureEffectPhotocopy& CT_PictureEffect::get_artisticPhotocopy() const
{
    if (m_artisticPhotocopy)
    {
        return *m_artisticPhotocopy;
    }
    return CT_PictureEffectPhotocopy::default_instance();
}

bool CT_PictureEffect::has_artisticPlasticWrap() const
{
    return m_has_artisticPlasticWrap;
}

CT_PictureEffectPlasticWrap* CT_PictureEffect::mutable_artisticPlasticWrap()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticPlasticWrap = true;
    if (!m_artisticPlasticWrap)
    {
        m_artisticPlasticWrap = new CT_PictureEffectPlasticWrap();
    }
    return m_artisticPlasticWrap;
}

const CT_PictureEffectPlasticWrap& CT_PictureEffect::get_artisticPlasticWrap() const
{
    if (m_artisticPlasticWrap)
    {
        return *m_artisticPlasticWrap;
    }
    return CT_PictureEffectPlasticWrap::default_instance();
}

bool CT_PictureEffect::has_artisticTexturizer() const
{
    return m_has_artisticTexturizer;
}

CT_PictureEffectTexturizer* CT_PictureEffect::mutable_artisticTexturizer()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticTexturizer = true;
    if (!m_artisticTexturizer)
    {
        m_artisticTexturizer = new CT_PictureEffectTexturizer();
    }
    return m_artisticTexturizer;
}

const CT_PictureEffectTexturizer& CT_PictureEffect::get_artisticTexturizer() const
{
    if (m_artisticTexturizer)
    {
        return *m_artisticTexturizer;
    }
    return CT_PictureEffectTexturizer::default_instance();
}

bool CT_PictureEffect::has_artisticWatercolorSponge() const
{
    return m_has_artisticWatercolorSponge;
}

CT_PictureEffectWatercolorSponge* CT_PictureEffect::mutable_artisticWatercolorSponge()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = true;
    if (!m_artisticWatercolorSponge)
    {
        m_artisticWatercolorSponge = new CT_PictureEffectWatercolorSponge();
    }
    return m_artisticWatercolorSponge;
}

const CT_PictureEffectWatercolorSponge& CT_PictureEffect::get_artisticWatercolorSponge() const
{
    if (m_artisticWatercolorSponge)
    {
        return *m_artisticWatercolorSponge;
    }
    return CT_PictureEffectWatercolorSponge::default_instance();
}

bool CT_PictureEffect::has_backgroundRemoval() const
{
    return m_has_backgroundRemoval;
}

CT_PictureEffectBackgroundRemoval* CT_PictureEffect::mutable_backgroundRemoval()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_backgroundRemoval = true;
    if (!m_backgroundRemoval)
    {
        m_backgroundRemoval = new CT_PictureEffectBackgroundRemoval();
    }
    return m_backgroundRemoval;
}

const CT_PictureEffectBackgroundRemoval& CT_PictureEffect::get_backgroundRemoval() const
{
    if (m_backgroundRemoval)
    {
        return *m_backgroundRemoval;
    }
    return CT_PictureEffectBackgroundRemoval::default_instance();
}

bool CT_PictureEffect::has_brightnessContrast() const
{
    return m_has_brightnessContrast;
}

CT_PictureEffectBrightnessContrast* CT_PictureEffect::mutable_brightnessContrast()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_brightnessContrast = true;
    if (!m_brightnessContrast)
    {
        m_brightnessContrast = new CT_PictureEffectBrightnessContrast();
    }
    return m_brightnessContrast;
}

const CT_PictureEffectBrightnessContrast& CT_PictureEffect::get_brightnessContrast() const
{
    if (m_brightnessContrast)
    {
        return *m_brightnessContrast;
    }
    return CT_PictureEffectBrightnessContrast::default_instance();
}

bool CT_PictureEffect::has_colorTemperature() const
{
    return m_has_colorTemperature;
}

CT_PictureEffectColorTemperature* CT_PictureEffect::mutable_colorTemperature()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_colorTemperature = true;
    if (!m_colorTemperature)
    {
        m_colorTemperature = new CT_PictureEffectColorTemperature();
    }
    return m_colorTemperature;
}

const CT_PictureEffectColorTemperature& CT_PictureEffect::get_colorTemperature() const
{
    if (m_colorTemperature)
    {
        return *m_colorTemperature;
    }
    return CT_PictureEffectColorTemperature::default_instance();
}

bool CT_PictureEffect::has_saturation() const
{
    return m_has_saturation;
}

CT_PictureEffectSaturation* CT_PictureEffect::mutable_saturation()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }
    ;

    m_has_saturation = true;
    if (!m_saturation)
    {
        m_saturation = new CT_PictureEffectSaturation();
    }
    return m_saturation;
}

const CT_PictureEffectSaturation& CT_PictureEffect::get_saturation() const
{
    if (m_saturation)
    {
        return *m_saturation;
    }
    return CT_PictureEffectSaturation::default_instance();
}

bool CT_PictureEffect::has_sharpenSoften() const
{
    return m_has_sharpenSoften;
}

CT_PictureEffectSharpenSoften* CT_PictureEffect::mutable_sharpenSoften()
{

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }
    ;

    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }
    ;

    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }
    ;

    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }
    ;

    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }
    ;

    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }
    ;

    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }
    ;

    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }
    ;

    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }
    ;

    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }
    ;

    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }
    ;

    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }
    ;

    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }
    ;

    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }
    ;

    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }
    ;

    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }
    ;

    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }
    ;

    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }
    ;

    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }
    ;

    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }
    ;

    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }
    ;

    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }
    ;

    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }
    ;

    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }
    ;

    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }
    ;

    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }
    ;

    m_has_sharpenSoften = true;
    if (!m_sharpenSoften)
    {
        m_sharpenSoften = new CT_PictureEffectSharpenSoften();
    }
    return m_sharpenSoften;
}

const CT_PictureEffectSharpenSoften& CT_PictureEffect::get_sharpenSoften() const
{
    if (m_sharpenSoften)
    {
        return *m_sharpenSoften;
    }
    return CT_PictureEffectSharpenSoften::default_instance();
}

void CT_PictureEffect::clear()
{
    m_has_visible_attr = false;
    m_visible_attr = false;

    m_has_artisticBlur = false;

    if (m_artisticBlur)
    {
        delete m_artisticBlur;
        m_artisticBlur = NULL;
    }


    m_has_artisticCement = false;

    if (m_artisticCement)
    {
        delete m_artisticCement;
        m_artisticCement = NULL;
    }


    m_has_artisticChalkSketch = false;

    if (m_artisticChalkSketch)
    {
        delete m_artisticChalkSketch;
        m_artisticChalkSketch = NULL;
    }


    m_has_artisticCrisscrossEtching = false;

    if (m_artisticCrisscrossEtching)
    {
        delete m_artisticCrisscrossEtching;
        m_artisticCrisscrossEtching = NULL;
    }


    m_has_artisticCutout = false;

    if (m_artisticCutout)
    {
        delete m_artisticCutout;
        m_artisticCutout = NULL;
    }


    m_has_artisticFilmGrain = false;

    if (m_artisticFilmGrain)
    {
        delete m_artisticFilmGrain;
        m_artisticFilmGrain = NULL;
    }


    m_has_artisticGlass = false;

    if (m_artisticGlass)
    {
        delete m_artisticGlass;
        m_artisticGlass = NULL;
    }


    m_has_artisticGlowDiffused = false;

    if (m_artisticGlowDiffused)
    {
        delete m_artisticGlowDiffused;
        m_artisticGlowDiffused = NULL;
    }


    m_has_artisticGlowEdges = false;

    if (m_artisticGlowEdges)
    {
        delete m_artisticGlowEdges;
        m_artisticGlowEdges = NULL;
    }


    m_has_artisticLightScreen = false;

    if (m_artisticLightScreen)
    {
        delete m_artisticLightScreen;
        m_artisticLightScreen = NULL;
    }


    m_has_artisticLineDrawing = false;

    if (m_artisticLineDrawing)
    {
        delete m_artisticLineDrawing;
        m_artisticLineDrawing = NULL;
    }


    m_has_artisticMarker = false;

    if (m_artisticMarker)
    {
        delete m_artisticMarker;
        m_artisticMarker = NULL;
    }


    m_has_artisticMosiaicBubbles = false;

    if (m_artisticMosiaicBubbles)
    {
        delete m_artisticMosiaicBubbles;
        m_artisticMosiaicBubbles = NULL;
    }


    m_has_artisticPaintStrokes = false;

    if (m_artisticPaintStrokes)
    {
        delete m_artisticPaintStrokes;
        m_artisticPaintStrokes = NULL;
    }


    m_has_artisticPaintBrush = false;

    if (m_artisticPaintBrush)
    {
        delete m_artisticPaintBrush;
        m_artisticPaintBrush = NULL;
    }


    m_has_artisticPastelsSmooth = false;

    if (m_artisticPastelsSmooth)
    {
        delete m_artisticPastelsSmooth;
        m_artisticPastelsSmooth = NULL;
    }


    m_has_artisticPencilGrayscale = false;

    if (m_artisticPencilGrayscale)
    {
        delete m_artisticPencilGrayscale;
        m_artisticPencilGrayscale = NULL;
    }


    m_has_artisticPencilSketch = false;

    if (m_artisticPencilSketch)
    {
        delete m_artisticPencilSketch;
        m_artisticPencilSketch = NULL;
    }


    m_has_artisticPhotocopy = false;

    if (m_artisticPhotocopy)
    {
        delete m_artisticPhotocopy;
        m_artisticPhotocopy = NULL;
    }


    m_has_artisticPlasticWrap = false;

    if (m_artisticPlasticWrap)
    {
        delete m_artisticPlasticWrap;
        m_artisticPlasticWrap = NULL;
    }


    m_has_artisticTexturizer = false;

    if (m_artisticTexturizer)
    {
        delete m_artisticTexturizer;
        m_artisticTexturizer = NULL;
    }


    m_has_artisticWatercolorSponge = false;

    if (m_artisticWatercolorSponge)
    {
        delete m_artisticWatercolorSponge;
        m_artisticWatercolorSponge = NULL;
    }


    m_has_backgroundRemoval = false;

    if (m_backgroundRemoval)
    {
        delete m_backgroundRemoval;
        m_backgroundRemoval = NULL;
    }


    m_has_brightnessContrast = false;

    if (m_brightnessContrast)
    {
        delete m_brightnessContrast;
        m_brightnessContrast = NULL;
    }


    m_has_colorTemperature = false;

    if (m_colorTemperature)
    {
        delete m_colorTemperature;
        m_colorTemperature = NULL;
    }


    m_has_saturation = false;

    if (m_saturation)
    {
        delete m_saturation;
        m_saturation = NULL;
    }


    m_has_sharpenSoften = false;

    if (m_sharpenSoften)
    {
        delete m_sharpenSoften;
        m_sharpenSoften = NULL;
    }

}

void CT_PictureEffect::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_visible_attr)
    {
        _outStream << " " << "visible" << "=\"" << XSD::XMLBooleanStr(m_visible_attr) << "\"";
    }

    _outStream << ">";

    {
        bool elemHasValueList[27] = {m_has_artisticBlur, m_has_artisticCement, m_has_artisticChalkSketch, m_has_artisticCrisscrossEtching, m_has_artisticCutout, m_has_artisticFilmGrain, m_has_artisticGlass, m_has_artisticGlowDiffused, m_has_artisticGlowEdges, m_has_artisticLightScreen, m_has_artisticLineDrawing, m_has_artisticMarker, m_has_artisticMosiaicBubbles, m_has_artisticPaintStrokes, m_has_artisticPaintBrush, m_has_artisticPastelsSmooth, m_has_artisticPencilGrayscale, m_has_artisticPencilSketch, m_has_artisticPhotocopy, m_has_artisticPlasticWrap, m_has_artisticTexturizer, m_has_artisticWatercolorSponge, m_has_backgroundRemoval, m_has_brightnessContrast, m_has_colorTemperature, m_has_saturation, m_has_sharpenSoften};
        int cnt = count(elemHasValueList, elemHasValueList + 27, true);
        assert(cnt == 1);
    }


    if (m_has_artisticBlur)
    {
        m_artisticBlur->toXmlElem("a14:artisticBlur", "", _outStream);
    }


    if (m_has_artisticCement)
    {
        m_artisticCement->toXmlElem("a14:artisticCement", "", _outStream);
    }


    if (m_has_artisticChalkSketch)
    {
        m_artisticChalkSketch->toXmlElem("a14:artisticChalkSketch", "", _outStream);
    }


    if (m_has_artisticCrisscrossEtching)
    {
        m_artisticCrisscrossEtching->toXmlElem("a14:artisticCrisscrossEtching", "", _outStream);
    }


    if (m_has_artisticCutout)
    {
        m_artisticCutout->toXmlElem("a14:artisticCutout", "", _outStream);
    }


    if (m_has_artisticFilmGrain)
    {
        m_artisticFilmGrain->toXmlElem("a14:artisticFilmGrain", "", _outStream);
    }


    if (m_has_artisticGlass)
    {
        m_artisticGlass->toXmlElem("a14:artisticGlass", "", _outStream);
    }


    if (m_has_artisticGlowDiffused)
    {
        m_artisticGlowDiffused->toXmlElem("a14:artisticGlowDiffused", "", _outStream);
    }


    if (m_has_artisticGlowEdges)
    {
        m_artisticGlowEdges->toXmlElem("a14:artisticGlowEdges", "", _outStream);
    }


    if (m_has_artisticLightScreen)
    {
        m_artisticLightScreen->toXmlElem("a14:artisticLightScreen", "", _outStream);
    }


    if (m_has_artisticLineDrawing)
    {
        m_artisticLineDrawing->toXmlElem("a14:artisticLineDrawing", "", _outStream);
    }


    if (m_has_artisticMarker)
    {
        m_artisticMarker->toXmlElem("a14:artisticMarker", "", _outStream);
    }


    if (m_has_artisticMosiaicBubbles)
    {
        m_artisticMosiaicBubbles->toXmlElem("a14:artisticMosiaicBubbles", "", _outStream);
    }


    if (m_has_artisticPaintStrokes)
    {
        m_artisticPaintStrokes->toXmlElem("a14:artisticPaintStrokes", "", _outStream);
    }


    if (m_has_artisticPaintBrush)
    {
        m_artisticPaintBrush->toXmlElem("a14:artisticPaintBrush", "", _outStream);
    }


    if (m_has_artisticPastelsSmooth)
    {
        m_artisticPastelsSmooth->toXmlElem("a14:artisticPastelsSmooth", "", _outStream);
    }


    if (m_has_artisticPencilGrayscale)
    {
        m_artisticPencilGrayscale->toXmlElem("a14:artisticPencilGrayscale", "", _outStream);
    }


    if (m_has_artisticPencilSketch)
    {
        m_artisticPencilSketch->toXmlElem("a14:artisticPencilSketch", "", _outStream);
    }


    if (m_has_artisticPhotocopy)
    {
        m_artisticPhotocopy->toXmlElem("a14:artisticPhotocopy", "", _outStream);
    }


    if (m_has_artisticPlasticWrap)
    {
        m_artisticPlasticWrap->toXmlElem("a14:artisticPlasticWrap", "", _outStream);
    }


    if (m_has_artisticTexturizer)
    {
        m_artisticTexturizer->toXmlElem("a14:artisticTexturizer", "", _outStream);
    }


    if (m_has_artisticWatercolorSponge)
    {
        m_artisticWatercolorSponge->toXmlElem("a14:artisticWatercolorSponge", "", _outStream);
    }


    if (m_has_backgroundRemoval)
    {
        m_backgroundRemoval->toXmlElem("a14:backgroundRemoval", "", _outStream);
    }


    if (m_has_brightnessContrast)
    {
        m_brightnessContrast->toXmlElem("a14:brightnessContrast", "", _outStream);
    }


    if (m_has_colorTemperature)
    {
        m_colorTemperature->toXmlElem("a14:colorTemperature", "", _outStream);
    }


    if (m_has_saturation)
    {
        m_saturation->toXmlElem("a14:saturation", "", _outStream);
    }


    if (m_has_sharpenSoften)
    {
        m_sharpenSoften->toXmlElem("a14:sharpenSoften", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PictureEffect& CT_PictureEffect::default_instance()
{
    if (!CT_PictureEffect::default_instance_)
    {
        CT_PictureEffect::default_instance_ = new CT_PictureEffect();
    }
    return *CT_PictureEffect::default_instance_;
}

bool CT_PictureEffect::has_visible_attr() const
{
    return m_has_visible_attr;
}

void CT_PictureEffect::set_visible_attr(const XSD::boolean_& _visible_attr)
{
    m_has_visible_attr = true;
    m_visible_attr = _visible_attr;
}

const XSD::boolean_& CT_PictureEffect::get_visible_attr() const
{
    return m_visible_attr;
}

CT_PictureEffect* CT_PictureEffect::default_instance_ = NULL;

// CT_PictureLayer
CT_PictureLayer::CT_PictureLayer()
    :m_has_r_embed_attr(false),
     m_r_embed_attr(NULL)
{
}
CT_PictureLayer::~CT_PictureLayer()
{
    clear();
}
CT_PictureEffect* CT_PictureLayer::add_imgEffect()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PictureEffect* pNewChild = pChildGroup->mutable_imgEffect();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_PictureLayer::clear()
{
    m_has_r_embed_attr = false;

    if (m_r_embed_attr)
    {
        delete m_r_embed_attr;
        m_r_embed_attr = NULL;
    }


    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
}

void CT_PictureLayer::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_r_embed_attr)
    {
        m_r_embed_attr->toXmlAttr("r:embed", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_imgEffect())
            {
                (*iter)->get_imgEffect().toXmlElem("a14:imgEffect", "", _outStream);
            }


        }
    }

    _outStream << "</" << _elemName << ">";
}

const CT_PictureLayer& CT_PictureLayer::default_instance()
{
    if (!CT_PictureLayer::default_instance_)
    {
        CT_PictureLayer::default_instance_ = new CT_PictureLayer();
    }
    return *CT_PictureLayer::default_instance_;
}

bool CT_PictureLayer::has_r_embed_attr() const
{
    return m_has_r_embed_attr;
}

void CT_PictureLayer::set_r_embed_attr(const ns_r::ST_RelationshipId& _r_embed_attr)
{
    m_has_r_embed_attr = true;
    m_r_embed_attr = new ns_r::ST_RelationshipId(_r_embed_attr);
}

const ns_r::ST_RelationshipId& CT_PictureLayer::get_r_embed_attr() const
{
    if (m_r_embed_attr)
    {
        return *m_r_embed_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}


// CT_PictureLayer::ChildGroup_1
CT_PictureLayer::ChildGroup_1::ChildGroup_1()
    :m_has_imgEffect(false),
     m_imgEffect(NULL)
{
}
bool CT_PictureLayer::ChildGroup_1::has_imgEffect() const
{
    return m_has_imgEffect;
}

CT_PictureEffect* CT_PictureLayer::ChildGroup_1::mutable_imgEffect()
{

    m_has_imgEffect = true;
    if (!m_imgEffect)
    {
        m_imgEffect = new CT_PictureEffect();
    }
    return m_imgEffect;
}

const CT_PictureEffect& CT_PictureLayer::ChildGroup_1::get_imgEffect() const
{
    if (m_imgEffect)
    {
        return *m_imgEffect;
    }
    return CT_PictureEffect::default_instance();
}

CT_PictureLayer* CT_PictureLayer::default_instance_ = NULL;

// CT_Photo
CT_Photo::CT_Photo()
    :m_has_imgLayer(false),
     m_imgLayer(NULL)
{
}
CT_Photo::~CT_Photo()
{
    clear();
}
bool CT_Photo::has_imgLayer() const
{
    return m_has_imgLayer;
}

CT_PictureLayer* CT_Photo::mutable_imgLayer()
{
    m_has_imgLayer = true;
    if (!m_imgLayer)
    {
        m_imgLayer = new CT_PictureLayer();
    }
    return m_imgLayer;
}

const CT_PictureLayer& CT_Photo::get_imgLayer() const
{
    if (m_imgLayer)
    {
        return *m_imgLayer;
    }
    return CT_PictureLayer::default_instance();
}

void CT_Photo::clear()
{
    m_has_imgLayer = false;

    if (m_imgLayer)
    {
        delete m_imgLayer;
        m_imgLayer = NULL;
    }

}

void CT_Photo::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_imgLayer);


    if (m_has_imgLayer)
    {
        m_imgLayer->toXmlElem("a14:imgLayer", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_Photo& CT_Photo::default_instance()
{
    if (!CT_Photo::default_instance_)
    {
        CT_Photo::default_instance_ = new CT_Photo();
    }
    return *CT_Photo::default_instance_;
}

CT_Photo* CT_Photo::default_instance_ = NULL;

// CT_UseLocalDpi
CT_UseLocalDpi::CT_UseLocalDpi()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
CT_UseLocalDpi::~CT_UseLocalDpi()
{
    clear();
}
void CT_UseLocalDpi::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void CT_UseLocalDpi::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }


    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_UseLocalDpi& CT_UseLocalDpi::default_instance()
{
    if (!CT_UseLocalDpi::default_instance_)
    {
        CT_UseLocalDpi::default_instance_ = new CT_UseLocalDpi();
    }
    return *CT_UseLocalDpi::default_instance_;
}

bool CT_UseLocalDpi::has_val_attr() const
{
    return m_has_val_attr;
}

void CT_UseLocalDpi::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& CT_UseLocalDpi::get_val_attr() const
{
    return m_val_attr;
}

CT_UseLocalDpi* CT_UseLocalDpi::default_instance_ = NULL;

// m_element
m_element::m_element()

{
}
m_element::~m_element()
{
    clear();
}
void m_element::clear()
{    }

void m_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<a14:m";

    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    _outStream << "</a14:m>";
}

const m_element& m_element::default_instance()
{
    if (!m_element::default_instance_)
    {
        m_element::default_instance_ = new m_element();
    }
    return *m_element::default_instance_;
}

m_element* m_element::default_instance_ = NULL;

// cameraTool_element
cameraTool_element::cameraTool_element()
    :m_has_cellRange_attr(false),
     m_cellRange_attr(""),
     m_has_spid_attr(false),
     m_spid_attr("")
{
}
cameraTool_element::~cameraTool_element()
{
    clear();
}
void cameraTool_element::clear()
{
    m_has_cellRange_attr = false;
    m_cellRange_attr.clear();

    m_has_spid_attr = false;
    m_spid_attr.clear();
}

void cameraTool_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<a14:cameraTool";

    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_cellRange_attr)
    {
        _outStream << " " << "cellRange" << "=\"" << m_cellRange_attr << "\"";
    }



    if (m_has_spid_attr)
    {
        _outStream << " " << "spid" << "=\"" << m_spid_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</a14:cameraTool>";
}

const cameraTool_element& cameraTool_element::default_instance()
{
    if (!cameraTool_element::default_instance_)
    {
        cameraTool_element::default_instance_ = new cameraTool_element();
    }
    return *cameraTool_element::default_instance_;
}

bool cameraTool_element::has_cellRange_attr() const
{
    return m_has_cellRange_attr;
}

void cameraTool_element::set_cellRange_attr(const XSD::string_& _cellRange_attr)
{
    m_has_cellRange_attr = true;
    m_cellRange_attr = _cellRange_attr;
}

const XSD::string_& cameraTool_element::get_cellRange_attr() const
{
    return m_cellRange_attr;
}

bool cameraTool_element::has_spid_attr() const
{
    return m_has_spid_attr;
}

void cameraTool_element::set_spid_attr(const XSD::string_& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = _spid_attr;
}

const XSD::string_& cameraTool_element::get_spid_attr() const
{
    return m_spid_attr;
}

cameraTool_element* cameraTool_element::default_instance_ = NULL;

// compatExt_element
compatExt_element::compatExt_element()
    :m_has_spid_attr(false),
     m_spid_attr("")
{
}
compatExt_element::~compatExt_element()
{
    clear();
}
void compatExt_element::clear()
{
    m_has_spid_attr = false;
    m_spid_attr.clear();
}

void compatExt_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<a14:compatExt";

    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_spid_attr)
    {
        _outStream << " " << "spid" << "=\"" << m_spid_attr << "\"";
    }

    _outStream << ">";

    _outStream << "</a14:compatExt>";
}

const compatExt_element& compatExt_element::default_instance()
{
    if (!compatExt_element::default_instance_)
    {
        compatExt_element::default_instance_ = new compatExt_element();
    }
    return *compatExt_element::default_instance_;
}

bool compatExt_element::has_spid_attr() const
{
    return m_has_spid_attr;
}

void compatExt_element::set_spid_attr(const XSD::string_& _spid_attr)
{
    m_has_spid_attr = true;
    m_spid_attr = _spid_attr;
}

const XSD::string_& compatExt_element::get_spid_attr() const
{
    return m_spid_attr;
}

compatExt_element* compatExt_element::default_instance_ = NULL;

// isCanvas_element
isCanvas_element::isCanvas_element()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
isCanvas_element::~isCanvas_element()
{
    clear();
}
void isCanvas_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void isCanvas_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<a14:isCanvas";

    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    assert(m_has_val_attr);
    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</a14:isCanvas>";
}

const isCanvas_element& isCanvas_element::default_instance()
{
    if (!isCanvas_element::default_instance_)
    {
        isCanvas_element::default_instance_ = new isCanvas_element();
    }
    return *isCanvas_element::default_instance_;
}

bool isCanvas_element::has_val_attr() const
{
    return m_has_val_attr;
}

void isCanvas_element::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& isCanvas_element::get_val_attr() const
{
    return m_val_attr;
}

isCanvas_element* isCanvas_element::default_instance_ = NULL;

// contentPart_element
contentPart_element::contentPart_element()
    :m_has_nvContentPartPr(false),
     m_nvContentPartPr(NULL),
     m_has_xfrm(false),
     m_xfrm(NULL),
     m_has_extLst(false),
     m_extLst(NULL),
     m_has_bwMode_attr(false),
     m_bwMode_attr(NULL),
     m_has_r_id_attr(false),
     m_r_id_attr(NULL)
{
}
contentPart_element::~contentPart_element()
{
    clear();
}
bool contentPart_element::has_nvContentPartPr() const
{
    return m_has_nvContentPartPr;
}

CT_GvmlContentPartNonVisual* contentPart_element::mutable_nvContentPartPr()
{
    m_has_nvContentPartPr = true;
    if (!m_nvContentPartPr)
    {
        m_nvContentPartPr = new CT_GvmlContentPartNonVisual();
    }
    return m_nvContentPartPr;
}

const CT_GvmlContentPartNonVisual& contentPart_element::get_nvContentPartPr() const
{
    if (m_nvContentPartPr)
    {
        return *m_nvContentPartPr;
    }
    return CT_GvmlContentPartNonVisual::default_instance();
}

bool contentPart_element::has_xfrm() const
{
    return m_has_xfrm;
}

ns_a::CT_Transform2D* contentPart_element::mutable_xfrm()
{
    m_has_xfrm = true;
    if (!m_xfrm)
    {
        m_xfrm = new ns_a::CT_Transform2D();
    }
    return m_xfrm;
}

const ns_a::CT_Transform2D& contentPart_element::get_xfrm() const
{
    if (m_xfrm)
    {
        return *m_xfrm;
    }
    return ns_a::CT_Transform2D::default_instance();
}

bool contentPart_element::has_extLst() const
{
    return m_has_extLst;
}

ns_a::CT_OfficeArtExtensionList* contentPart_element::mutable_extLst()
{
    m_has_extLst = true;
    if (!m_extLst)
    {
        m_extLst = new ns_a::CT_OfficeArtExtensionList();
    }
    return m_extLst;
}

const ns_a::CT_OfficeArtExtensionList& contentPart_element::get_extLst() const
{
    if (m_extLst)
    {
        return *m_extLst;
    }
    return ns_a::CT_OfficeArtExtensionList::default_instance();
}

void contentPart_element::clear()
{
    m_has_bwMode_attr = false;

    if (m_bwMode_attr)
    {
        delete m_bwMode_attr;
        m_bwMode_attr = NULL;
    }


    m_has_r_id_attr = false;

    if (m_r_id_attr)
    {
        delete m_r_id_attr;
        m_r_id_attr = NULL;
    }


    m_has_nvContentPartPr = false;

    if (m_nvContentPartPr)
    {
        delete m_nvContentPartPr;
        m_nvContentPartPr = NULL;
    }


    m_has_xfrm = false;

    if (m_xfrm)
    {
        delete m_xfrm;
        m_xfrm = NULL;
    }


    m_has_extLst = false;

    if (m_extLst)
    {
        delete m_extLst;
        m_extLst = NULL;
    }

}

void contentPart_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<a14:contentPart";

    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_bwMode_attr)
    {
        m_bwMode_attr->toXmlAttr("bwMode", _outStream);
    }


    assert(m_has_r_id_attr);
    if (m_has_r_id_attr)
    {
        m_r_id_attr->toXmlAttr("r:id", _outStream);
    }

    _outStream << ">";


    if (m_has_nvContentPartPr)
    {
        m_nvContentPartPr->toXmlElem("a14:nvContentPartPr", "", _outStream);
    }


    if (m_has_xfrm)
    {
        m_xfrm->toXmlElem("a14:xfrm", "", _outStream);
    }


    if (m_has_extLst)
    {
        m_extLst->toXmlElem("a14:extLst", "", _outStream);
    }

    _outStream << "</a14:contentPart>";
}

const contentPart_element& contentPart_element::default_instance()
{
    if (!contentPart_element::default_instance_)
    {
        contentPart_element::default_instance_ = new contentPart_element();
    }
    return *contentPart_element::default_instance_;
}

bool contentPart_element::has_bwMode_attr() const
{
    return m_has_bwMode_attr;
}

void contentPart_element::set_bwMode_attr(const ns_a::ST_BlackWhiteMode& _bwMode_attr)
{
    m_has_bwMode_attr = true;
    m_bwMode_attr = new ns_a::ST_BlackWhiteMode(_bwMode_attr);
}

const ns_a::ST_BlackWhiteMode& contentPart_element::get_bwMode_attr() const
{
    if (m_bwMode_attr)
    {
        return *m_bwMode_attr;
    }
    return ns_a::ST_BlackWhiteMode::default_instance();
}

bool contentPart_element::has_r_id_attr() const
{
    return m_has_r_id_attr;
}

void contentPart_element::set_r_id_attr(const ns_r::ST_RelationshipId& _r_id_attr)
{
    m_has_r_id_attr = true;
    m_r_id_attr = new ns_r::ST_RelationshipId(_r_id_attr);
}

const ns_r::ST_RelationshipId& contentPart_element::get_r_id_attr() const
{
    if (m_r_id_attr)
    {
        return *m_r_id_attr;
    }
    return ns_r::ST_RelationshipId::default_instance();
}

contentPart_element* contentPart_element::default_instance_ = NULL;

// shadowObscured_element
shadowObscured_element::shadowObscured_element()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
shadowObscured_element::~shadowObscured_element()
{
    clear();
}
void shadowObscured_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void shadowObscured_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<a14:shadowObscured";

    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</a14:shadowObscured>";
}

const shadowObscured_element& shadowObscured_element::default_instance()
{
    if (!shadowObscured_element::default_instance_)
    {
        shadowObscured_element::default_instance_ = new shadowObscured_element();
    }
    return *shadowObscured_element::default_instance_;
}

bool shadowObscured_element::has_val_attr() const
{
    return m_has_val_attr;
}

void shadowObscured_element::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& shadowObscured_element::get_val_attr() const
{
    return m_val_attr;
}

shadowObscured_element* shadowObscured_element::default_instance_ = NULL;

// hiddenFill_element

// hiddenLine_element

// hiddenEffects_element

// hiddenScene3d_element

// hiddenSp3d_element

// imgProps_element
imgProps_element::imgProps_element()
    :m_has_imgLayer(false),
     m_imgLayer(NULL)
{
}
imgProps_element::~imgProps_element()
{
    clear();
}
bool imgProps_element::has_imgLayer() const
{
    return m_has_imgLayer;
}

CT_PictureLayer* imgProps_element::mutable_imgLayer()
{
    m_has_imgLayer = true;
    if (!m_imgLayer)
    {
        m_imgLayer = new CT_PictureLayer();
    }
    return m_imgLayer;
}

const CT_PictureLayer& imgProps_element::get_imgLayer() const
{
    if (m_imgLayer)
    {
        return *m_imgLayer;
    }
    return CT_PictureLayer::default_instance();
}

void imgProps_element::clear()
{
    m_has_imgLayer = false;

    if (m_imgLayer)
    {
        delete m_imgLayer;
        m_imgLayer = NULL;
    }

}

void imgProps_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<a14:imgProps";

    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";

    _outStream << ">";

    assert(m_has_imgLayer);


    if (m_has_imgLayer)
    {
        m_imgLayer->toXmlElem("a14:imgLayer", "", _outStream);
    }

    _outStream << "</a14:imgProps>";
}

const imgProps_element& imgProps_element::default_instance()
{
    if (!imgProps_element::default_instance_)
    {
        imgProps_element::default_instance_ = new imgProps_element();
    }
    return *imgProps_element::default_instance_;
}

imgProps_element* imgProps_element::default_instance_ = NULL;

// useLocalDpi_element
useLocalDpi_element::useLocalDpi_element()
    :m_has_val_attr(false),
     m_val_attr(false)
{
}
useLocalDpi_element::~useLocalDpi_element()
{
    clear();
}
void useLocalDpi_element::clear()
{
    m_has_val_attr = false;
    m_val_attr = false;
}

void useLocalDpi_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<a14:useLocalDpi";

    _outStream << " " << "xmlns:a14=\"http://schemas.microsoft.com/office/drawing/2010/main\"";
    _outStream << " " << "xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\"";
    _outStream << " " << "xmlns:m=\"http://schemas.openxmlformats.org/officeDocument/2006/math\"";
    _outStream << " " << "xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";


    if (m_has_val_attr)
    {
        _outStream << " " << "val" << "=\"" << XSD::XMLBooleanStr(m_val_attr) << "\"";
    }

    _outStream << ">";

    _outStream << "</a14:useLocalDpi>";
}

const useLocalDpi_element& useLocalDpi_element::default_instance()
{
    if (!useLocalDpi_element::default_instance_)
    {
        useLocalDpi_element::default_instance_ = new useLocalDpi_element();
    }
    return *useLocalDpi_element::default_instance_;
}

bool useLocalDpi_element::has_val_attr() const
{
    return m_has_val_attr;
}

void useLocalDpi_element::set_val_attr(const XSD::boolean_& _val_attr)
{
    m_has_val_attr = true;
    m_val_attr = _val_attr;
}

const XSD::boolean_& useLocalDpi_element::get_val_attr() const
{
    return m_val_attr;
}

useLocalDpi_element* useLocalDpi_element::default_instance_ = NULL;

// legacySpreadsheetColorIndex_attr
void legacySpreadsheetColorIndex_attr::toXml(std::ostream& _outStream) const
{    }

}