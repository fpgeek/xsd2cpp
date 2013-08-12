#include "dml-picture_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "dml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-picture_xsd.h"
#include "dml-lockedCanvas_xsd.h"
#include "dml-chartDrawing_xsd.h"
namespace ns_dpct {
using namespace std;

// Element

// Attribute

// CT_PictureNonVisual
CT_PictureNonVisual::CT_PictureNonVisual()
    :m_has_cNvPr(false),
     m_cNvPr(NULL),
     m_has_cNvPicPr(false),
     m_cNvPicPr(NULL)
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


    if (m_has_cNvPr)
    {
        m_cNvPr->toXmlElem("dpct:cNvPr", "", _outStream);
    }


    if (m_has_cNvPicPr)
    {
        m_cNvPicPr->toXmlElem("dpct:cNvPicPr", "", _outStream);
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
     m_spPr(NULL)
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
        m_nvPicPr->toXmlElem("dpct:nvPicPr", "", _outStream);
    }


    if (m_has_blipFill)
    {
        m_blipFill->toXmlElem("dpct:blipFill", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("dpct:spPr", "", _outStream);
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

// pic_element
pic_element::pic_element()
    :m_has_nvPicPr(false),
     m_nvPicPr(NULL),
     m_has_blipFill(false),
     m_blipFill(NULL),
     m_has_spPr(false),
     m_spPr(NULL)
{
}
pic_element::~pic_element()
{
    clear();
}
bool pic_element::has_nvPicPr() const
{
    return m_has_nvPicPr;
}

CT_PictureNonVisual* pic_element::mutable_nvPicPr()
{
    m_has_nvPicPr = true;
    if (!m_nvPicPr)
    {
        m_nvPicPr = new CT_PictureNonVisual();
    }
    return m_nvPicPr;
}

const CT_PictureNonVisual& pic_element::get_nvPicPr() const
{
    if (m_nvPicPr)
    {
        return *m_nvPicPr;
    }
    return CT_PictureNonVisual::default_instance();
}

bool pic_element::has_blipFill() const
{
    return m_has_blipFill;
}

ns_a::CT_BlipFillProperties* pic_element::mutable_blipFill()
{
    m_has_blipFill = true;
    if (!m_blipFill)
    {
        m_blipFill = new ns_a::CT_BlipFillProperties();
    }
    return m_blipFill;
}

const ns_a::CT_BlipFillProperties& pic_element::get_blipFill() const
{
    if (m_blipFill)
    {
        return *m_blipFill;
    }
    return ns_a::CT_BlipFillProperties::default_instance();
}

bool pic_element::has_spPr() const
{
    return m_has_spPr;
}

ns_a::CT_ShapeProperties* pic_element::mutable_spPr()
{
    m_has_spPr = true;
    if (!m_spPr)
    {
        m_spPr = new ns_a::CT_ShapeProperties();
    }
    return m_spPr;
}

const ns_a::CT_ShapeProperties& pic_element::get_spPr() const
{
    if (m_spPr)
    {
        return *m_spPr;
    }
    return ns_a::CT_ShapeProperties::default_instance();
}

void pic_element::clear()
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

}

void pic_element::toXml(std::ostream& _outStream) const
{
    _outStream << "<dpct:pic";

    _outStream << " " << "xmlns:dpct=\"http://schemas.openxmlformats.org/drawingml/2006/main\"";
    _outStream << " " << "xmlns:dpct=\"http://schemas.openxmlformats.org/drawingml/2006/picture\"";

    _outStream << ">";

    assert(m_has_nvPicPr);


    assert(m_has_blipFill);


    assert(m_has_spPr);


    if (m_has_nvPicPr)
    {
        m_nvPicPr->toXmlElem("dpct:nvPicPr", "", _outStream);
    }


    if (m_has_blipFill)
    {
        m_blipFill->toXmlElem("dpct:blipFill", "", _outStream);
    }


    if (m_has_spPr)
    {
        m_spPr->toXmlElem("dpct:spPr", "", _outStream);
    }

    _outStream << "</dpct:pic>";
}

const pic_element& pic_element::default_instance()
{
    if (!pic_element::default_instance_)
    {
        pic_element::default_instance_ = new pic_element();
    }
    return *pic_element::default_instance_;
}

pic_element* pic_element::default_instance_ = NULL;
}