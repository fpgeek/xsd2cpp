namespace ns_ap {
class Element;
class Attribute;
class CT_Properties;
class CT_VectorVariant;
class CT_VectorLpstr;
class CT_DigSigBlob;
class Properties_element;
}
#ifndef __shared_documentPropertiesExtended_xsd_
#define __shared_documentPropertiesExtended_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-documentPropertiesVariantTypes_xsd.h"
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_ap {
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

class CT_Properties: public XSD::ComplexType
{
public:
    CT_Properties();
    ~CT_Properties();
    bool has_Template() const;
    void set_Template(const XSD::string_& _Template);
    const XSD::string_& get_Template() const;
    bool has_Manager() const;
    void set_Manager(const XSD::string_& _Manager);
    const XSD::string_& get_Manager() const;
    bool has_Company() const;
    void set_Company(const XSD::string_& _Company);
    const XSD::string_& get_Company() const;
    bool has_Pages() const;
    void set_Pages(const XSD::int_& _Pages);
    const XSD::int_& get_Pages() const;
    bool has_Words() const;
    void set_Words(const XSD::int_& _Words);
    const XSD::int_& get_Words() const;
    bool has_Characters() const;
    void set_Characters(const XSD::int_& _Characters);
    const XSD::int_& get_Characters() const;
    bool has_PresentationFormat() const;
    void set_PresentationFormat(const XSD::string_& _PresentationFormat);
    const XSD::string_& get_PresentationFormat() const;
    bool has_Lines() const;
    void set_Lines(const XSD::int_& _Lines);
    const XSD::int_& get_Lines() const;
    bool has_Paragraphs() const;
    void set_Paragraphs(const XSD::int_& _Paragraphs);
    const XSD::int_& get_Paragraphs() const;
    bool has_Slides() const;
    void set_Slides(const XSD::int_& _Slides);
    const XSD::int_& get_Slides() const;
    bool has_Notes() const;
    void set_Notes(const XSD::int_& _Notes);
    const XSD::int_& get_Notes() const;
    bool has_TotalTime() const;
    void set_TotalTime(const XSD::int_& _TotalTime);
    const XSD::int_& get_TotalTime() const;
    bool has_HiddenSlides() const;
    void set_HiddenSlides(const XSD::int_& _HiddenSlides);
    const XSD::int_& get_HiddenSlides() const;
    bool has_MMClips() const;
    void set_MMClips(const XSD::int_& _MMClips);
    const XSD::int_& get_MMClips() const;
    bool has_ScaleCrop() const;
    void set_ScaleCrop(const XSD::boolean_& _ScaleCrop);
    const XSD::boolean_& get_ScaleCrop() const;
    bool has_HeadingPairs() const;
    CT_VectorVariant* mutable_HeadingPairs();
    const CT_VectorVariant& get_HeadingPairs() const;
    bool has_TitlesOfParts() const;
    CT_VectorLpstr* mutable_TitlesOfParts();
    const CT_VectorLpstr& get_TitlesOfParts() const;
    bool has_LinksUpToDate() const;
    void set_LinksUpToDate(const XSD::boolean_& _LinksUpToDate);
    const XSD::boolean_& get_LinksUpToDate() const;
    bool has_CharactersWithSpaces() const;
    void set_CharactersWithSpaces(const XSD::int_& _CharactersWithSpaces);
    const XSD::int_& get_CharactersWithSpaces() const;
    bool has_SharedDoc() const;
    void set_SharedDoc(const XSD::boolean_& _SharedDoc);
    const XSD::boolean_& get_SharedDoc() const;
    bool has_HyperlinkBase() const;
    void set_HyperlinkBase(const XSD::string_& _HyperlinkBase);
    const XSD::string_& get_HyperlinkBase() const;
    bool has_HLinks() const;
    CT_VectorVariant* mutable_HLinks();
    const CT_VectorVariant& get_HLinks() const;
    bool has_HyperlinksChanged() const;
    void set_HyperlinksChanged(const XSD::boolean_& _HyperlinksChanged);
    const XSD::boolean_& get_HyperlinksChanged() const;
    bool has_DigSig() const;
    CT_DigSigBlob* mutable_DigSig();
    const CT_DigSigBlob& get_DigSig() const;
    bool has_Application() const;
    void set_Application(const XSD::string_& _Application);
    const XSD::string_& get_Application() const;
    bool has_AppVersion() const;
    void set_AppVersion(const XSD::string_& _AppVersion);
    const XSD::string_& get_AppVersion() const;
    bool has_DocSecurity() const;
    void set_DocSecurity(const XSD::int_& _DocSecurity);
    const XSD::int_& get_DocSecurity() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_Properties& default_instance();
protected:
private:
    bool m_has_Template;
    XSD::string_ m_Template;
    bool m_has_Manager;
    XSD::string_ m_Manager;
    bool m_has_Company;
    XSD::string_ m_Company;
    bool m_has_Pages;
    XSD::int_ m_Pages;
    bool m_has_Words;
    XSD::int_ m_Words;
    bool m_has_Characters;
    XSD::int_ m_Characters;
    bool m_has_PresentationFormat;
    XSD::string_ m_PresentationFormat;
    bool m_has_Lines;
    XSD::int_ m_Lines;
    bool m_has_Paragraphs;
    XSD::int_ m_Paragraphs;
    bool m_has_Slides;
    XSD::int_ m_Slides;
    bool m_has_Notes;
    XSD::int_ m_Notes;
    bool m_has_TotalTime;
    XSD::int_ m_TotalTime;
    bool m_has_HiddenSlides;
    XSD::int_ m_HiddenSlides;
    bool m_has_MMClips;
    XSD::int_ m_MMClips;
    bool m_has_ScaleCrop;
    XSD::boolean_ m_ScaleCrop;
    bool m_has_HeadingPairs;
    CT_VectorVariant* m_HeadingPairs;
    bool m_has_TitlesOfParts;
    CT_VectorLpstr* m_TitlesOfParts;
    bool m_has_LinksUpToDate;
    XSD::boolean_ m_LinksUpToDate;
    bool m_has_CharactersWithSpaces;
    XSD::int_ m_CharactersWithSpaces;
    bool m_has_SharedDoc;
    XSD::boolean_ m_SharedDoc;
    bool m_has_HyperlinkBase;
    XSD::string_ m_HyperlinkBase;
    bool m_has_HLinks;
    CT_VectorVariant* m_HLinks;
    bool m_has_HyperlinksChanged;
    XSD::boolean_ m_HyperlinksChanged;
    bool m_has_DigSig;
    CT_DigSigBlob* m_DigSig;
    bool m_has_Application;
    XSD::string_ m_Application;
    bool m_has_AppVersion;
    XSD::string_ m_AppVersion;
    bool m_has_DocSecurity;
    XSD::int_ m_DocSecurity;
    static CT_Properties* default_instance_;
};

class CT_VectorVariant: public XSD::ComplexType
{
public:
    CT_VectorVariant();
    ~CT_VectorVariant();
    bool has_vt_vector() const;
    ns_vt::CT_Vector* mutable_vt_vector();
    const ns_vt::CT_Vector& get_vt_vector() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_VectorVariant& default_instance();
protected:
private:
    bool m_has_vt_vector;
    ns_vt::CT_Vector* m_vt_vector;
    static CT_VectorVariant* default_instance_;
};

class CT_VectorLpstr: public XSD::ComplexType
{
public:
    CT_VectorLpstr();
    ~CT_VectorLpstr();
    bool has_vt_vector() const;
    ns_vt::CT_Vector* mutable_vt_vector();
    const ns_vt::CT_Vector& get_vt_vector() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_VectorLpstr& default_instance();
protected:
private:
    bool m_has_vt_vector;
    ns_vt::CT_Vector* m_vt_vector;
    static CT_VectorLpstr* default_instance_;
};

class CT_DigSigBlob: public XSD::ComplexType
{
public:
    CT_DigSigBlob();
    ~CT_DigSigBlob();
    bool has_vt_blob() const;
    void set_vt_blob(const XSD::base64Binary_& _vt_blob);
    const XSD::base64Binary_& get_vt_blob() const;
    void clear();
    void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
    static const CT_DigSigBlob& default_instance();
protected:
private:
    bool m_has_vt_blob;
    XSD::base64Binary_ m_vt_blob;
    static CT_DigSigBlob* default_instance_;
};

class Properties_element: public Element
{
public:
    Properties_element();
    ~Properties_element();
    bool has_Template() const;
    void set_Template(const XSD::string_& _Template);
    const XSD::string_& get_Template() const;
    bool has_Manager() const;
    void set_Manager(const XSD::string_& _Manager);
    const XSD::string_& get_Manager() const;
    bool has_Company() const;
    void set_Company(const XSD::string_& _Company);
    const XSD::string_& get_Company() const;
    bool has_Pages() const;
    void set_Pages(const XSD::int_& _Pages);
    const XSD::int_& get_Pages() const;
    bool has_Words() const;
    void set_Words(const XSD::int_& _Words);
    const XSD::int_& get_Words() const;
    bool has_Characters() const;
    void set_Characters(const XSD::int_& _Characters);
    const XSD::int_& get_Characters() const;
    bool has_PresentationFormat() const;
    void set_PresentationFormat(const XSD::string_& _PresentationFormat);
    const XSD::string_& get_PresentationFormat() const;
    bool has_Lines() const;
    void set_Lines(const XSD::int_& _Lines);
    const XSD::int_& get_Lines() const;
    bool has_Paragraphs() const;
    void set_Paragraphs(const XSD::int_& _Paragraphs);
    const XSD::int_& get_Paragraphs() const;
    bool has_Slides() const;
    void set_Slides(const XSD::int_& _Slides);
    const XSD::int_& get_Slides() const;
    bool has_Notes() const;
    void set_Notes(const XSD::int_& _Notes);
    const XSD::int_& get_Notes() const;
    bool has_TotalTime() const;
    void set_TotalTime(const XSD::int_& _TotalTime);
    const XSD::int_& get_TotalTime() const;
    bool has_HiddenSlides() const;
    void set_HiddenSlides(const XSD::int_& _HiddenSlides);
    const XSD::int_& get_HiddenSlides() const;
    bool has_MMClips() const;
    void set_MMClips(const XSD::int_& _MMClips);
    const XSD::int_& get_MMClips() const;
    bool has_ScaleCrop() const;
    void set_ScaleCrop(const XSD::boolean_& _ScaleCrop);
    const XSD::boolean_& get_ScaleCrop() const;
    bool has_HeadingPairs() const;
    CT_VectorVariant* mutable_HeadingPairs();
    const CT_VectorVariant& get_HeadingPairs() const;
    bool has_TitlesOfParts() const;
    CT_VectorLpstr* mutable_TitlesOfParts();
    const CT_VectorLpstr& get_TitlesOfParts() const;
    bool has_LinksUpToDate() const;
    void set_LinksUpToDate(const XSD::boolean_& _LinksUpToDate);
    const XSD::boolean_& get_LinksUpToDate() const;
    bool has_CharactersWithSpaces() const;
    void set_CharactersWithSpaces(const XSD::int_& _CharactersWithSpaces);
    const XSD::int_& get_CharactersWithSpaces() const;
    bool has_SharedDoc() const;
    void set_SharedDoc(const XSD::boolean_& _SharedDoc);
    const XSD::boolean_& get_SharedDoc() const;
    bool has_HyperlinkBase() const;
    void set_HyperlinkBase(const XSD::string_& _HyperlinkBase);
    const XSD::string_& get_HyperlinkBase() const;
    bool has_HLinks() const;
    CT_VectorVariant* mutable_HLinks();
    const CT_VectorVariant& get_HLinks() const;
    bool has_HyperlinksChanged() const;
    void set_HyperlinksChanged(const XSD::boolean_& _HyperlinksChanged);
    const XSD::boolean_& get_HyperlinksChanged() const;
    bool has_DigSig() const;
    CT_DigSigBlob* mutable_DigSig();
    const CT_DigSigBlob& get_DigSig() const;
    bool has_Application() const;
    void set_Application(const XSD::string_& _Application);
    const XSD::string_& get_Application() const;
    bool has_AppVersion() const;
    void set_AppVersion(const XSD::string_& _AppVersion);
    const XSD::string_& get_AppVersion() const;
    bool has_DocSecurity() const;
    void set_DocSecurity(const XSD::int_& _DocSecurity);
    const XSD::int_& get_DocSecurity() const;
    void clear();
    void toXml(std::ostream& _outStream) const;
    static const Properties_element& default_instance();
protected:
private:
    bool m_has_Template;
    XSD::string_ m_Template;
    bool m_has_Manager;
    XSD::string_ m_Manager;
    bool m_has_Company;
    XSD::string_ m_Company;
    bool m_has_Pages;
    XSD::int_ m_Pages;
    bool m_has_Words;
    XSD::int_ m_Words;
    bool m_has_Characters;
    XSD::int_ m_Characters;
    bool m_has_PresentationFormat;
    XSD::string_ m_PresentationFormat;
    bool m_has_Lines;
    XSD::int_ m_Lines;
    bool m_has_Paragraphs;
    XSD::int_ m_Paragraphs;
    bool m_has_Slides;
    XSD::int_ m_Slides;
    bool m_has_Notes;
    XSD::int_ m_Notes;
    bool m_has_TotalTime;
    XSD::int_ m_TotalTime;
    bool m_has_HiddenSlides;
    XSD::int_ m_HiddenSlides;
    bool m_has_MMClips;
    XSD::int_ m_MMClips;
    bool m_has_ScaleCrop;
    XSD::boolean_ m_ScaleCrop;
    bool m_has_HeadingPairs;
    CT_VectorVariant* m_HeadingPairs;
    bool m_has_TitlesOfParts;
    CT_VectorLpstr* m_TitlesOfParts;
    bool m_has_LinksUpToDate;
    XSD::boolean_ m_LinksUpToDate;
    bool m_has_CharactersWithSpaces;
    XSD::int_ m_CharactersWithSpaces;
    bool m_has_SharedDoc;
    XSD::boolean_ m_SharedDoc;
    bool m_has_HyperlinkBase;
    XSD::string_ m_HyperlinkBase;
    bool m_has_HLinks;
    CT_VectorVariant* m_HLinks;
    bool m_has_HyperlinksChanged;
    XSD::boolean_ m_HyperlinksChanged;
    bool m_has_DigSig;
    CT_DigSigBlob* m_DigSig;
    bool m_has_Application;
    XSD::string_ m_Application;
    bool m_has_AppVersion;
    XSD::string_ m_AppVersion;
    bool m_has_DocSecurity;
    XSD::int_ m_DocSecurity;
    static Properties_element* default_instance_;
};

}
#endif