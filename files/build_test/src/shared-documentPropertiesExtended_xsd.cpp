#include "shared-documentPropertiesExtended_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "shared-documentPropertiesVariantTypes_xsd.h"
namespace ns_ap {
using namespace std;

// Element

// Attribute

// CT_Properties
CT_Properties::CT_Properties()

{
}
CT_Properties::~CT_Properties()
{
    clear();
}
void CT_Properties::clear()
{    }

void CT_Properties::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    _outStream << "</" << _elemName << ">";
}

const CT_Properties& CT_Properties::default_instance()
{
    if (!CT_Properties::default_instance_)
    {
        CT_Properties::default_instance_ = new CT_Properties();
    }
    return *CT_Properties::default_instance_;
}

CT_Properties* CT_Properties::default_instance_ = NULL;

// CT_VectorVariant
CT_VectorVariant::CT_VectorVariant()
    :m_has_vt_vector(false),
     m_vt_vector(NULL)
{
}
CT_VectorVariant::~CT_VectorVariant()
{
    clear();
}
bool CT_VectorVariant::has_vt_vector() const
{
    return m_has_vt_vector;
}

ns_vt::CT_Vector* CT_VectorVariant::mutable_vt_vector()
{
    m_has_vt_vector = true;
    if (!m_vt_vector)
    {
        m_vt_vector = new ns_vt::CT_Vector();
    }
    return m_vt_vector;
}

const ns_vt::CT_Vector& CT_VectorVariant::get_vt_vector() const
{
    if (m_vt_vector)
    {
        return *m_vt_vector;
    }
    return ns_vt::CT_Vector::default_instance();
}

void CT_VectorVariant::clear()
{
    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }

}

void CT_VectorVariant::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_vt_vector);


    if (m_has_vt_vector)
    {
        m_vt_vector->toXmlElem("vt:vector", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_VectorVariant& CT_VectorVariant::default_instance()
{
    if (!CT_VectorVariant::default_instance_)
    {
        CT_VectorVariant::default_instance_ = new CT_VectorVariant();
    }
    return *CT_VectorVariant::default_instance_;
}

CT_VectorVariant* CT_VectorVariant::default_instance_ = NULL;

// CT_VectorLpstr
CT_VectorLpstr::CT_VectorLpstr()
    :m_has_vt_vector(false),
     m_vt_vector(NULL)
{
}
CT_VectorLpstr::~CT_VectorLpstr()
{
    clear();
}
bool CT_VectorLpstr::has_vt_vector() const
{
    return m_has_vt_vector;
}

ns_vt::CT_Vector* CT_VectorLpstr::mutable_vt_vector()
{
    m_has_vt_vector = true;
    if (!m_vt_vector)
    {
        m_vt_vector = new ns_vt::CT_Vector();
    }
    return m_vt_vector;
}

const ns_vt::CT_Vector& CT_VectorLpstr::get_vt_vector() const
{
    if (m_vt_vector)
    {
        return *m_vt_vector;
    }
    return ns_vt::CT_Vector::default_instance();
}

void CT_VectorLpstr::clear()
{
    m_has_vt_vector = false;

    if (m_vt_vector)
    {
        delete m_vt_vector;
        m_vt_vector = NULL;
    }

}

void CT_VectorLpstr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_vt_vector);


    if (m_has_vt_vector)
    {
        m_vt_vector->toXmlElem("vt:vector", "", _outStream);
    }

    _outStream << "</" << _elemName << ">";
}

const CT_VectorLpstr& CT_VectorLpstr::default_instance()
{
    if (!CT_VectorLpstr::default_instance_)
    {
        CT_VectorLpstr::default_instance_ = new CT_VectorLpstr();
    }
    return *CT_VectorLpstr::default_instance_;
}

CT_VectorLpstr* CT_VectorLpstr::default_instance_ = NULL;

// CT_DigSigBlob
CT_DigSigBlob::CT_DigSigBlob()
    :m_has_vt_blob(false),
     m_vt_blob("")
{
}
CT_DigSigBlob::~CT_DigSigBlob()
{
    clear();
}
bool CT_DigSigBlob::has_vt_blob() const
{
    return m_has_vt_blob;
}

void CT_DigSigBlob::set_vt_blob(const XSD::base64Binary_& _vt_blob)
{
    m_has_vt_blob = true;
    m_vt_blob = _vt_blob;
}

const XSD::base64Binary_& CT_DigSigBlob::get_vt_blob() const
{
    return m_vt_blob;
}

void CT_DigSigBlob::clear()
{
    m_has_vt_blob = false;
    m_vt_blob.clear();
}

void CT_DigSigBlob::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
{
    _outStream << "<" << _elemName;

    if (!_xmlNsStr.empty())
    {
        _outStream << _xmlNsStr;
    }

    _outStream << ">";

    assert(m_has_vt_blob);


    if (m_has_vt_blob)
    {
        _outStream << "<vt:blob>" << m_vt_blob << "</vt:blob>";
    }

    _outStream << "</" << _elemName << ">";
}

const CT_DigSigBlob& CT_DigSigBlob::default_instance()
{
    if (!CT_DigSigBlob::default_instance_)
    {
        CT_DigSigBlob::default_instance_ = new CT_DigSigBlob();
    }
    return *CT_DigSigBlob::default_instance_;
}

CT_DigSigBlob* CT_DigSigBlob::default_instance_ = NULL;

// Properties_element
Properties_element::Properties_element()

{
}
Properties_element::~Properties_element()
{
    clear();
}
void Properties_element::clear()
{    }

void Properties_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<ap:Properties";

    _outStream << " " << "xmlns:ap=\"http://schemas.openxmlformats.org/officeDocument/2006/extended-properties\"";
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";

    _outStream << ">";

    _outStream << "</ap:Properties>";
}

const Properties_element& Properties_element::default_instance()
{
    if (!Properties_element::default_instance_)
    {
        Properties_element::default_instance_ = new Properties_element();
    }
    return *Properties_element::default_instance_;
}

Properties_element* Properties_element::default_instance_ = NULL;
}