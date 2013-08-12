namespace ns_dpct {
class Element;
class Attribute;
class CT_PictureNonVisual;
class CT_Picture;
class pic_element;
}
#ifndef __dml_picture_xsd_
#define __dml_picture_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "dml-main_xsd.h"
#include "shared-relationshipReference_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
#include "dml-diagram_xsd.h"
#include "dml-chart_xsd.h"
#include "dml-lockedCanvas_xsd.h"
#include "dml-chartDrawing_xsd.h"
namespace ns_dpct {
using namespace std;
class Element: public XSD::Element
{
public:
protected:
private:
};

class Attribute: public XSD::Attribute
{
public:
protected:
private:
};

class CT_PictureNonVisual: public XSD::ComplexType
{
public:
    CT_PictureNonVisual();
    ~CT_PictureNonVisual();
    bool has_cNvPr() const;
    ns_a::CT_NonVisualDrawingProps* mutable_cNvPr();
    const ns_a::CT_NonVisualDrawingProps& get_cNvPr() const;
    bool has_cNvPicPr() const;
    ns_a::CT_NonVisualPictureProperties* mutable_cNvPicPr();
    const ns_a::CT_NonVisualPictureProperties& get_cNvPicPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_PictureNonVisual& default_instance();
protected:
private:
    bool m_has_cNvPr;
    ns_a::CT_NonVisualDrawingProps* m_cNvPr;
    bool m_has_cNvPicPr;
    ns_a::CT_NonVisualPictureProperties* m_cNvPicPr;
    static CT_PictureNonVisual* default_instance_;
};

class CT_Picture: public XSD::ComplexType
{
public:
    CT_Picture();
    ~CT_Picture();
    bool has_nvPicPr() const;
    CT_PictureNonVisual* mutable_nvPicPr();
    const CT_PictureNonVisual& get_nvPicPr() const;
    bool has_blipFill() const;
    ns_a::CT_BlipFillProperties* mutable_blipFill();
    const ns_a::CT_BlipFillProperties& get_blipFill() const;
    bool has_spPr() const;
    ns_a::CT_ShapeProperties* mutable_spPr();
    const ns_a::CT_ShapeProperties& get_spPr() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Picture& default_instance();
protected:
private:
    bool m_has_nvPicPr;
    CT_PictureNonVisual* m_nvPicPr;
    bool m_has_blipFill;
    ns_a::CT_BlipFillProperties* m_blipFill;
    bool m_has_spPr;
    ns_a::CT_ShapeProperties* m_spPr;
    static CT_Picture* default_instance_;
};

class pic_element: public Element
{
public:
    pic_element();
    ~pic_element();
    bool has_nvPicPr() const;
    CT_PictureNonVisual* mutable_nvPicPr();
    const CT_PictureNonVisual& get_nvPicPr() const;
    bool has_blipFill() const;
    ns_a::CT_BlipFillProperties* mutable_blipFill();
    const ns_a::CT_BlipFillProperties& get_blipFill() const;
    bool has_spPr() const;
    ns_a::CT_ShapeProperties* mutable_spPr();
    const ns_a::CT_ShapeProperties& get_spPr() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const pic_element& default_instance();
protected:
private:
    bool m_has_nvPicPr;
    CT_PictureNonVisual* m_nvPicPr;
    bool m_has_blipFill;
    ns_a::CT_BlipFillProperties* m_blipFill;
    bool m_has_spPr;
    ns_a::CT_ShapeProperties* m_spPr;
    static pic_element* default_instance_;
};

}
#endif