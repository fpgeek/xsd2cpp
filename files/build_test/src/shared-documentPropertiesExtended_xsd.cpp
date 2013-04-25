#include "shared-documentPropertiesExtended_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "shared-documentPropertiesVariantTypes_xsd.h"
namespace ns_extended_properties {
 using namespace std;

    // Element

    // Attribute

    // CT_Properties
    bool CT_Properties::has_Template() const
    {    
    return m_has_Template;
    }

    void CT_Properties::set_Template(const XSD::string_& _Template)
    {    
    m_has_Template = true;
    m_Template = _Template;
    }

    const XSD::string_& CT_Properties::get_Template() const
    {    
    return m_Template;
    }

    bool CT_Properties::has_Manager() const
    {    
    return m_has_Manager;
    }

    void CT_Properties::set_Manager(const XSD::string_& _Manager)
    {    
    m_has_Manager = true;
    m_Manager = _Manager;
    }

    const XSD::string_& CT_Properties::get_Manager() const
    {    
    return m_Manager;
    }

    bool CT_Properties::has_Company() const
    {    
    return m_has_Company;
    }

    void CT_Properties::set_Company(const XSD::string_& _Company)
    {    
    m_has_Company = true;
    m_Company = _Company;
    }

    const XSD::string_& CT_Properties::get_Company() const
    {    
    return m_Company;
    }

    bool CT_Properties::has_Pages() const
    {    
    return m_has_Pages;
    }

    void CT_Properties::set_Pages(const XSD::int_& _Pages)
    {    
    m_has_Pages = true;
    m_Pages = _Pages;
    }

    const XSD::int_& CT_Properties::get_Pages() const
    {    
    return m_Pages;
    }

    bool CT_Properties::has_Words() const
    {    
    return m_has_Words;
    }

    void CT_Properties::set_Words(const XSD::int_& _Words)
    {    
    m_has_Words = true;
    m_Words = _Words;
    }

    const XSD::int_& CT_Properties::get_Words() const
    {    
    return m_Words;
    }

    bool CT_Properties::has_Characters() const
    {    
    return m_has_Characters;
    }

    void CT_Properties::set_Characters(const XSD::int_& _Characters)
    {    
    m_has_Characters = true;
    m_Characters = _Characters;
    }

    const XSD::int_& CT_Properties::get_Characters() const
    {    
    return m_Characters;
    }

    bool CT_Properties::has_PresentationFormat() const
    {    
    return m_has_PresentationFormat;
    }

    void CT_Properties::set_PresentationFormat(const XSD::string_& _PresentationFormat)
    {    
    m_has_PresentationFormat = true;
    m_PresentationFormat = _PresentationFormat;
    }

    const XSD::string_& CT_Properties::get_PresentationFormat() const
    {    
    return m_PresentationFormat;
    }

    bool CT_Properties::has_Lines() const
    {    
    return m_has_Lines;
    }

    void CT_Properties::set_Lines(const XSD::int_& _Lines)
    {    
    m_has_Lines = true;
    m_Lines = _Lines;
    }

    const XSD::int_& CT_Properties::get_Lines() const
    {    
    return m_Lines;
    }

    bool CT_Properties::has_Paragraphs() const
    {    
    return m_has_Paragraphs;
    }

    void CT_Properties::set_Paragraphs(const XSD::int_& _Paragraphs)
    {    
    m_has_Paragraphs = true;
    m_Paragraphs = _Paragraphs;
    }

    const XSD::int_& CT_Properties::get_Paragraphs() const
    {    
    return m_Paragraphs;
    }

    bool CT_Properties::has_Slides() const
    {    
    return m_has_Slides;
    }

    void CT_Properties::set_Slides(const XSD::int_& _Slides)
    {    
    m_has_Slides = true;
    m_Slides = _Slides;
    }

    const XSD::int_& CT_Properties::get_Slides() const
    {    
    return m_Slides;
    }

    bool CT_Properties::has_Notes() const
    {    
    return m_has_Notes;
    }

    void CT_Properties::set_Notes(const XSD::int_& _Notes)
    {    
    m_has_Notes = true;
    m_Notes = _Notes;
    }

    const XSD::int_& CT_Properties::get_Notes() const
    {    
    return m_Notes;
    }

    bool CT_Properties::has_TotalTime() const
    {    
    return m_has_TotalTime;
    }

    void CT_Properties::set_TotalTime(const XSD::int_& _TotalTime)
    {    
    m_has_TotalTime = true;
    m_TotalTime = _TotalTime;
    }

    const XSD::int_& CT_Properties::get_TotalTime() const
    {    
    return m_TotalTime;
    }

    bool CT_Properties::has_HiddenSlides() const
    {    
    return m_has_HiddenSlides;
    }

    void CT_Properties::set_HiddenSlides(const XSD::int_& _HiddenSlides)
    {    
    m_has_HiddenSlides = true;
    m_HiddenSlides = _HiddenSlides;
    }

    const XSD::int_& CT_Properties::get_HiddenSlides() const
    {    
    return m_HiddenSlides;
    }

    bool CT_Properties::has_MMClips() const
    {    
    return m_has_MMClips;
    }

    void CT_Properties::set_MMClips(const XSD::int_& _MMClips)
    {    
    m_has_MMClips = true;
    m_MMClips = _MMClips;
    }

    const XSD::int_& CT_Properties::get_MMClips() const
    {    
    return m_MMClips;
    }

    bool CT_Properties::has_ScaleCrop() const
    {    
    return m_has_ScaleCrop;
    }

    void CT_Properties::set_ScaleCrop(const XSD::boolean_& _ScaleCrop)
    {    
    m_has_ScaleCrop = true;
    m_ScaleCrop = _ScaleCrop;
    }

    const XSD::boolean_& CT_Properties::get_ScaleCrop() const
    {    
    return m_ScaleCrop;
    }

    bool CT_Properties::has_HeadingPairs() const
    {    
    return m_has_HeadingPairs;
    }

    CT_VectorVariant* CT_Properties::mutable_HeadingPairs()
    {    
    m_has_HeadingPairs = true;
    if (!m_HeadingPairs)
    {
        m_HeadingPairs = new CT_VectorVariant();
    }
    return m_HeadingPairs;
    }

    const CT_VectorVariant& CT_Properties::get_HeadingPairs() const
    {    
    if (m_HeadingPairs)
    {
        return *m_HeadingPairs;
    }
    return CT_VectorVariant::default_instance();
    }

    bool CT_Properties::has_TitlesOfParts() const
    {    
    return m_has_TitlesOfParts;
    }

    CT_VectorLpstr* CT_Properties::mutable_TitlesOfParts()
    {    
    m_has_TitlesOfParts = true;
    if (!m_TitlesOfParts)
    {
        m_TitlesOfParts = new CT_VectorLpstr();
    }
    return m_TitlesOfParts;
    }

    const CT_VectorLpstr& CT_Properties::get_TitlesOfParts() const
    {    
    if (m_TitlesOfParts)
    {
        return *m_TitlesOfParts;
    }
    return CT_VectorLpstr::default_instance();
    }

    bool CT_Properties::has_LinksUpToDate() const
    {    
    return m_has_LinksUpToDate;
    }

    void CT_Properties::set_LinksUpToDate(const XSD::boolean_& _LinksUpToDate)
    {    
    m_has_LinksUpToDate = true;
    m_LinksUpToDate = _LinksUpToDate;
    }

    const XSD::boolean_& CT_Properties::get_LinksUpToDate() const
    {    
    return m_LinksUpToDate;
    }

    bool CT_Properties::has_CharactersWithSpaces() const
    {    
    return m_has_CharactersWithSpaces;
    }

    void CT_Properties::set_CharactersWithSpaces(const XSD::int_& _CharactersWithSpaces)
    {    
    m_has_CharactersWithSpaces = true;
    m_CharactersWithSpaces = _CharactersWithSpaces;
    }

    const XSD::int_& CT_Properties::get_CharactersWithSpaces() const
    {    
    return m_CharactersWithSpaces;
    }

    bool CT_Properties::has_SharedDoc() const
    {    
    return m_has_SharedDoc;
    }

    void CT_Properties::set_SharedDoc(const XSD::boolean_& _SharedDoc)
    {    
    m_has_SharedDoc = true;
    m_SharedDoc = _SharedDoc;
    }

    const XSD::boolean_& CT_Properties::get_SharedDoc() const
    {    
    return m_SharedDoc;
    }

    bool CT_Properties::has_HyperlinkBase() const
    {    
    return m_has_HyperlinkBase;
    }

    void CT_Properties::set_HyperlinkBase(const XSD::string_& _HyperlinkBase)
    {    
    m_has_HyperlinkBase = true;
    m_HyperlinkBase = _HyperlinkBase;
    }

    const XSD::string_& CT_Properties::get_HyperlinkBase() const
    {    
    return m_HyperlinkBase;
    }

    bool CT_Properties::has_HLinks() const
    {    
    return m_has_HLinks;
    }

    CT_VectorVariant* CT_Properties::mutable_HLinks()
    {    
    m_has_HLinks = true;
    if (!m_HLinks)
    {
        m_HLinks = new CT_VectorVariant();
    }
    return m_HLinks;
    }

    const CT_VectorVariant& CT_Properties::get_HLinks() const
    {    
    if (m_HLinks)
    {
        return *m_HLinks;
    }
    return CT_VectorVariant::default_instance();
    }

    bool CT_Properties::has_HyperlinksChanged() const
    {    
    return m_has_HyperlinksChanged;
    }

    void CT_Properties::set_HyperlinksChanged(const XSD::boolean_& _HyperlinksChanged)
    {    
    m_has_HyperlinksChanged = true;
    m_HyperlinksChanged = _HyperlinksChanged;
    }

    const XSD::boolean_& CT_Properties::get_HyperlinksChanged() const
    {    
    return m_HyperlinksChanged;
    }

    bool CT_Properties::has_DigSig() const
    {    
    return m_has_DigSig;
    }

    CT_DigSigBlob* CT_Properties::mutable_DigSig()
    {    
    m_has_DigSig = true;
    if (!m_DigSig)
    {
        m_DigSig = new CT_DigSigBlob();
    }
    return m_DigSig;
    }

    const CT_DigSigBlob& CT_Properties::get_DigSig() const
    {    
    if (m_DigSig)
    {
        return *m_DigSig;
    }
    return CT_DigSigBlob::default_instance();
    }

    bool CT_Properties::has_Application() const
    {    
    return m_has_Application;
    }

    void CT_Properties::set_Application(const XSD::string_& _Application)
    {    
    m_has_Application = true;
    m_Application = _Application;
    }

    const XSD::string_& CT_Properties::get_Application() const
    {    
    return m_Application;
    }

    bool CT_Properties::has_AppVersion() const
    {    
    return m_has_AppVersion;
    }

    void CT_Properties::set_AppVersion(const XSD::string_& _AppVersion)
    {    
    m_has_AppVersion = true;
    m_AppVersion = _AppVersion;
    }

    const XSD::string_& CT_Properties::get_AppVersion() const
    {    
    return m_AppVersion;
    }

    bool CT_Properties::has_DocSecurity() const
    {    
    return m_has_DocSecurity;
    }

    void CT_Properties::set_DocSecurity(const XSD::int_& _DocSecurity)
    {    
    m_has_DocSecurity = true;
    m_DocSecurity = _DocSecurity;
    }

    const XSD::int_& CT_Properties::get_DocSecurity() const
    {    
    return m_DocSecurity;
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
            
    if (m_has_Template)
    {
        _outStream << "<Template>" << m_Template << "</Template>";;
    }
    
    if (m_has_Manager)
    {
        _outStream << "<Manager>" << m_Manager << "</Manager>";;
    }
    
    if (m_has_Company)
    {
        _outStream << "<Company>" << m_Company << "</Company>";;
    }
    
    if (m_has_Pages)
    {
        _outStream << "<Pages>" << m_Pages << "</Pages>";;
    }
    
    if (m_has_Words)
    {
        _outStream << "<Words>" << m_Words << "</Words>";;
    }
    
    if (m_has_Characters)
    {
        _outStream << "<Characters>" << m_Characters << "</Characters>";;
    }
    
    if (m_has_PresentationFormat)
    {
        _outStream << "<PresentationFormat>" << m_PresentationFormat << "</PresentationFormat>";;
    }
    
    if (m_has_Lines)
    {
        _outStream << "<Lines>" << m_Lines << "</Lines>";;
    }
    
    if (m_has_Paragraphs)
    {
        _outStream << "<Paragraphs>" << m_Paragraphs << "</Paragraphs>";;
    }
    
    if (m_has_Slides)
    {
        _outStream << "<Slides>" << m_Slides << "</Slides>";;
    }
    
    if (m_has_Notes)
    {
        _outStream << "<Notes>" << m_Notes << "</Notes>";;
    }
    
    if (m_has_TotalTime)
    {
        _outStream << "<TotalTime>" << m_TotalTime << "</TotalTime>";;
    }
    
    if (m_has_HiddenSlides)
    {
        _outStream << "<HiddenSlides>" << m_HiddenSlides << "</HiddenSlides>";;
    }
    
    if (m_has_MMClips)
    {
        _outStream << "<MMClips>" << m_MMClips << "</MMClips>";;
    }
    
    if (m_has_ScaleCrop)
    {
        _outStream << "<ScaleCrop>" << m_ScaleCrop << "</ScaleCrop>";;
    }
    
    if (m_has_HeadingPairs)
    {
        m_HeadingPairs->toXmlElem("HeadingPairs", "", _outStream);;
    }
    
    if (m_has_TitlesOfParts)
    {
        m_TitlesOfParts->toXmlElem("TitlesOfParts", "", _outStream);;
    }
    
    if (m_has_LinksUpToDate)
    {
        _outStream << "<LinksUpToDate>" << m_LinksUpToDate << "</LinksUpToDate>";;
    }
    
    if (m_has_CharactersWithSpaces)
    {
        _outStream << "<CharactersWithSpaces>" << m_CharactersWithSpaces << "</CharactersWithSpaces>";;
    }
    
    if (m_has_SharedDoc)
    {
        _outStream << "<SharedDoc>" << m_SharedDoc << "</SharedDoc>";;
    }
    
    if (m_has_HyperlinkBase)
    {
        _outStream << "<HyperlinkBase>" << m_HyperlinkBase << "</HyperlinkBase>";;
    }
    
    if (m_has_HLinks)
    {
        m_HLinks->toXmlElem("HLinks", "", _outStream);;
    }
    
    if (m_has_HyperlinksChanged)
    {
        _outStream << "<HyperlinksChanged>" << m_HyperlinksChanged << "</HyperlinksChanged>";;
    }
    
    if (m_has_DigSig)
    {
        m_DigSig->toXmlElem("DigSig", "", _outStream);;
    }
    
    if (m_has_Application)
    {
        _outStream << "<Application>" << m_Application << "</Application>";;
    }
    
    if (m_has_AppVersion)
    {
        _outStream << "<AppVersion>" << m_AppVersion << "</AppVersion>";;
    }
    
    if (m_has_DocSecurity)
    {
        _outStream << "<DocSecurity>" << m_DocSecurity << "</DocSecurity>";;
    }
    
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
    {    }

    void CT_VectorVariant::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_vt_vector)
    {
        m_vt_vector->toXmlElem("vt:vector", "", _outStream);;
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
    {    }

    void CT_VectorLpstr::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_vt_vector)
    {
        m_vt_vector->toXmlElem("vt:vector", "", _outStream);;
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
    bool CT_DigSigBlob::has_blob() const
    {    
    return m_has_blob;
    }

    void CT_DigSigBlob::set_blob(const XSD::base64Binary_& _blob)
    {    
    m_has_blob = true;
    m_blob = _blob;
    }

    const XSD::base64Binary_& CT_DigSigBlob::get_blob() const
    {    
    return m_blob;
    }

    void CT_DigSigBlob::clear()
    {    }

    void CT_DigSigBlob::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_blob)
    {
        _outStream << "<blob>" << m_blob << "</blob>";;
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
    bool Properties_element::has_Template() const
    {    
    return m_has_Template;
    }

    void Properties_element::set_Template(const XSD::string_& _Template)
    {    
    m_has_Template = true;
    m_Template = _Template;
    }

    const XSD::string_& Properties_element::get_Template() const
    {    
    return m_Template;
    }

    bool Properties_element::has_Manager() const
    {    
    return m_has_Manager;
    }

    void Properties_element::set_Manager(const XSD::string_& _Manager)
    {    
    m_has_Manager = true;
    m_Manager = _Manager;
    }

    const XSD::string_& Properties_element::get_Manager() const
    {    
    return m_Manager;
    }

    bool Properties_element::has_Company() const
    {    
    return m_has_Company;
    }

    void Properties_element::set_Company(const XSD::string_& _Company)
    {    
    m_has_Company = true;
    m_Company = _Company;
    }

    const XSD::string_& Properties_element::get_Company() const
    {    
    return m_Company;
    }

    bool Properties_element::has_Pages() const
    {    
    return m_has_Pages;
    }

    void Properties_element::set_Pages(const XSD::int_& _Pages)
    {    
    m_has_Pages = true;
    m_Pages = _Pages;
    }

    const XSD::int_& Properties_element::get_Pages() const
    {    
    return m_Pages;
    }

    bool Properties_element::has_Words() const
    {    
    return m_has_Words;
    }

    void Properties_element::set_Words(const XSD::int_& _Words)
    {    
    m_has_Words = true;
    m_Words = _Words;
    }

    const XSD::int_& Properties_element::get_Words() const
    {    
    return m_Words;
    }

    bool Properties_element::has_Characters() const
    {    
    return m_has_Characters;
    }

    void Properties_element::set_Characters(const XSD::int_& _Characters)
    {    
    m_has_Characters = true;
    m_Characters = _Characters;
    }

    const XSD::int_& Properties_element::get_Characters() const
    {    
    return m_Characters;
    }

    bool Properties_element::has_PresentationFormat() const
    {    
    return m_has_PresentationFormat;
    }

    void Properties_element::set_PresentationFormat(const XSD::string_& _PresentationFormat)
    {    
    m_has_PresentationFormat = true;
    m_PresentationFormat = _PresentationFormat;
    }

    const XSD::string_& Properties_element::get_PresentationFormat() const
    {    
    return m_PresentationFormat;
    }

    bool Properties_element::has_Lines() const
    {    
    return m_has_Lines;
    }

    void Properties_element::set_Lines(const XSD::int_& _Lines)
    {    
    m_has_Lines = true;
    m_Lines = _Lines;
    }

    const XSD::int_& Properties_element::get_Lines() const
    {    
    return m_Lines;
    }

    bool Properties_element::has_Paragraphs() const
    {    
    return m_has_Paragraphs;
    }

    void Properties_element::set_Paragraphs(const XSD::int_& _Paragraphs)
    {    
    m_has_Paragraphs = true;
    m_Paragraphs = _Paragraphs;
    }

    const XSD::int_& Properties_element::get_Paragraphs() const
    {    
    return m_Paragraphs;
    }

    bool Properties_element::has_Slides() const
    {    
    return m_has_Slides;
    }

    void Properties_element::set_Slides(const XSD::int_& _Slides)
    {    
    m_has_Slides = true;
    m_Slides = _Slides;
    }

    const XSD::int_& Properties_element::get_Slides() const
    {    
    return m_Slides;
    }

    bool Properties_element::has_Notes() const
    {    
    return m_has_Notes;
    }

    void Properties_element::set_Notes(const XSD::int_& _Notes)
    {    
    m_has_Notes = true;
    m_Notes = _Notes;
    }

    const XSD::int_& Properties_element::get_Notes() const
    {    
    return m_Notes;
    }

    bool Properties_element::has_TotalTime() const
    {    
    return m_has_TotalTime;
    }

    void Properties_element::set_TotalTime(const XSD::int_& _TotalTime)
    {    
    m_has_TotalTime = true;
    m_TotalTime = _TotalTime;
    }

    const XSD::int_& Properties_element::get_TotalTime() const
    {    
    return m_TotalTime;
    }

    bool Properties_element::has_HiddenSlides() const
    {    
    return m_has_HiddenSlides;
    }

    void Properties_element::set_HiddenSlides(const XSD::int_& _HiddenSlides)
    {    
    m_has_HiddenSlides = true;
    m_HiddenSlides = _HiddenSlides;
    }

    const XSD::int_& Properties_element::get_HiddenSlides() const
    {    
    return m_HiddenSlides;
    }

    bool Properties_element::has_MMClips() const
    {    
    return m_has_MMClips;
    }

    void Properties_element::set_MMClips(const XSD::int_& _MMClips)
    {    
    m_has_MMClips = true;
    m_MMClips = _MMClips;
    }

    const XSD::int_& Properties_element::get_MMClips() const
    {    
    return m_MMClips;
    }

    bool Properties_element::has_ScaleCrop() const
    {    
    return m_has_ScaleCrop;
    }

    void Properties_element::set_ScaleCrop(const XSD::boolean_& _ScaleCrop)
    {    
    m_has_ScaleCrop = true;
    m_ScaleCrop = _ScaleCrop;
    }

    const XSD::boolean_& Properties_element::get_ScaleCrop() const
    {    
    return m_ScaleCrop;
    }

    bool Properties_element::has_HeadingPairs() const
    {    
    return m_has_HeadingPairs;
    }

    CT_VectorVariant* Properties_element::mutable_HeadingPairs()
    {    
    m_has_HeadingPairs = true;
    if (!m_HeadingPairs)
    {
        m_HeadingPairs = new CT_VectorVariant();
    }
    return m_HeadingPairs;
    }

    const CT_VectorVariant& Properties_element::get_HeadingPairs() const
    {    
    if (m_HeadingPairs)
    {
        return *m_HeadingPairs;
    }
    return CT_VectorVariant::default_instance();
    }

    bool Properties_element::has_TitlesOfParts() const
    {    
    return m_has_TitlesOfParts;
    }

    CT_VectorLpstr* Properties_element::mutable_TitlesOfParts()
    {    
    m_has_TitlesOfParts = true;
    if (!m_TitlesOfParts)
    {
        m_TitlesOfParts = new CT_VectorLpstr();
    }
    return m_TitlesOfParts;
    }

    const CT_VectorLpstr& Properties_element::get_TitlesOfParts() const
    {    
    if (m_TitlesOfParts)
    {
        return *m_TitlesOfParts;
    }
    return CT_VectorLpstr::default_instance();
    }

    bool Properties_element::has_LinksUpToDate() const
    {    
    return m_has_LinksUpToDate;
    }

    void Properties_element::set_LinksUpToDate(const XSD::boolean_& _LinksUpToDate)
    {    
    m_has_LinksUpToDate = true;
    m_LinksUpToDate = _LinksUpToDate;
    }

    const XSD::boolean_& Properties_element::get_LinksUpToDate() const
    {    
    return m_LinksUpToDate;
    }

    bool Properties_element::has_CharactersWithSpaces() const
    {    
    return m_has_CharactersWithSpaces;
    }

    void Properties_element::set_CharactersWithSpaces(const XSD::int_& _CharactersWithSpaces)
    {    
    m_has_CharactersWithSpaces = true;
    m_CharactersWithSpaces = _CharactersWithSpaces;
    }

    const XSD::int_& Properties_element::get_CharactersWithSpaces() const
    {    
    return m_CharactersWithSpaces;
    }

    bool Properties_element::has_SharedDoc() const
    {    
    return m_has_SharedDoc;
    }

    void Properties_element::set_SharedDoc(const XSD::boolean_& _SharedDoc)
    {    
    m_has_SharedDoc = true;
    m_SharedDoc = _SharedDoc;
    }

    const XSD::boolean_& Properties_element::get_SharedDoc() const
    {    
    return m_SharedDoc;
    }

    bool Properties_element::has_HyperlinkBase() const
    {    
    return m_has_HyperlinkBase;
    }

    void Properties_element::set_HyperlinkBase(const XSD::string_& _HyperlinkBase)
    {    
    m_has_HyperlinkBase = true;
    m_HyperlinkBase = _HyperlinkBase;
    }

    const XSD::string_& Properties_element::get_HyperlinkBase() const
    {    
    return m_HyperlinkBase;
    }

    bool Properties_element::has_HLinks() const
    {    
    return m_has_HLinks;
    }

    CT_VectorVariant* Properties_element::mutable_HLinks()
    {    
    m_has_HLinks = true;
    if (!m_HLinks)
    {
        m_HLinks = new CT_VectorVariant();
    }
    return m_HLinks;
    }

    const CT_VectorVariant& Properties_element::get_HLinks() const
    {    
    if (m_HLinks)
    {
        return *m_HLinks;
    }
    return CT_VectorVariant::default_instance();
    }

    bool Properties_element::has_HyperlinksChanged() const
    {    
    return m_has_HyperlinksChanged;
    }

    void Properties_element::set_HyperlinksChanged(const XSD::boolean_& _HyperlinksChanged)
    {    
    m_has_HyperlinksChanged = true;
    m_HyperlinksChanged = _HyperlinksChanged;
    }

    const XSD::boolean_& Properties_element::get_HyperlinksChanged() const
    {    
    return m_HyperlinksChanged;
    }

    bool Properties_element::has_DigSig() const
    {    
    return m_has_DigSig;
    }

    CT_DigSigBlob* Properties_element::mutable_DigSig()
    {    
    m_has_DigSig = true;
    if (!m_DigSig)
    {
        m_DigSig = new CT_DigSigBlob();
    }
    return m_DigSig;
    }

    const CT_DigSigBlob& Properties_element::get_DigSig() const
    {    
    if (m_DigSig)
    {
        return *m_DigSig;
    }
    return CT_DigSigBlob::default_instance();
    }

    bool Properties_element::has_Application() const
    {    
    return m_has_Application;
    }

    void Properties_element::set_Application(const XSD::string_& _Application)
    {    
    m_has_Application = true;
    m_Application = _Application;
    }

    const XSD::string_& Properties_element::get_Application() const
    {    
    return m_Application;
    }

    bool Properties_element::has_AppVersion() const
    {    
    return m_has_AppVersion;
    }

    void Properties_element::set_AppVersion(const XSD::string_& _AppVersion)
    {    
    m_has_AppVersion = true;
    m_AppVersion = _AppVersion;
    }

    const XSD::string_& Properties_element::get_AppVersion() const
    {    
    return m_AppVersion;
    }

    bool Properties_element::has_DocSecurity() const
    {    
    return m_has_DocSecurity;
    }

    void Properties_element::set_DocSecurity(const XSD::int_& _DocSecurity)
    {    
    m_has_DocSecurity = true;
    m_DocSecurity = _DocSecurity;
    }

    const XSD::int_& Properties_element::get_DocSecurity() const
    {    
    return m_DocSecurity;
    }

    void Properties_element::clear()
    {    }

    void Properties_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<Properties";
    
    _outStream << " " << "xmlns:extended_properties=\"http://schemas.openxmlformats.org/officeDocument/2006/extended-properties\"";
    _outStream << " " << "xmlns:vt=\"http://schemas.openxmlformats.org/officeDocument/2006/docPropsVTypes\"";
    
    _outStream << ">";
    
    if (m_has_Template)
    {
        _outStream << "<Template>" << m_Template << "</Template>";;
    }
    
    if (m_has_Manager)
    {
        _outStream << "<Manager>" << m_Manager << "</Manager>";;
    }
    
    if (m_has_Company)
    {
        _outStream << "<Company>" << m_Company << "</Company>";;
    }
    
    if (m_has_Pages)
    {
        _outStream << "<Pages>" << m_Pages << "</Pages>";;
    }
    
    if (m_has_Words)
    {
        _outStream << "<Words>" << m_Words << "</Words>";;
    }
    
    if (m_has_Characters)
    {
        _outStream << "<Characters>" << m_Characters << "</Characters>";;
    }
    
    if (m_has_PresentationFormat)
    {
        _outStream << "<PresentationFormat>" << m_PresentationFormat << "</PresentationFormat>";;
    }
    
    if (m_has_Lines)
    {
        _outStream << "<Lines>" << m_Lines << "</Lines>";;
    }
    
    if (m_has_Paragraphs)
    {
        _outStream << "<Paragraphs>" << m_Paragraphs << "</Paragraphs>";;
    }
    
    if (m_has_Slides)
    {
        _outStream << "<Slides>" << m_Slides << "</Slides>";;
    }
    
    if (m_has_Notes)
    {
        _outStream << "<Notes>" << m_Notes << "</Notes>";;
    }
    
    if (m_has_TotalTime)
    {
        _outStream << "<TotalTime>" << m_TotalTime << "</TotalTime>";;
    }
    
    if (m_has_HiddenSlides)
    {
        _outStream << "<HiddenSlides>" << m_HiddenSlides << "</HiddenSlides>";;
    }
    
    if (m_has_MMClips)
    {
        _outStream << "<MMClips>" << m_MMClips << "</MMClips>";;
    }
    
    if (m_has_ScaleCrop)
    {
        _outStream << "<ScaleCrop>" << m_ScaleCrop << "</ScaleCrop>";;
    }
    
    if (m_has_HeadingPairs)
    {
        m_HeadingPairs->toXmlElem("HeadingPairs", "", _outStream);;
    }
    
    if (m_has_TitlesOfParts)
    {
        m_TitlesOfParts->toXmlElem("TitlesOfParts", "", _outStream);;
    }
    
    if (m_has_LinksUpToDate)
    {
        _outStream << "<LinksUpToDate>" << m_LinksUpToDate << "</LinksUpToDate>";;
    }
    
    if (m_has_CharactersWithSpaces)
    {
        _outStream << "<CharactersWithSpaces>" << m_CharactersWithSpaces << "</CharactersWithSpaces>";;
    }
    
    if (m_has_SharedDoc)
    {
        _outStream << "<SharedDoc>" << m_SharedDoc << "</SharedDoc>";;
    }
    
    if (m_has_HyperlinkBase)
    {
        _outStream << "<HyperlinkBase>" << m_HyperlinkBase << "</HyperlinkBase>";;
    }
    
    if (m_has_HLinks)
    {
        m_HLinks->toXmlElem("HLinks", "", _outStream);;
    }
    
    if (m_has_HyperlinksChanged)
    {
        _outStream << "<HyperlinksChanged>" << m_HyperlinksChanged << "</HyperlinksChanged>";;
    }
    
    if (m_has_DigSig)
    {
        m_DigSig->toXmlElem("DigSig", "", _outStream);;
    }
    
    if (m_has_Application)
    {
        _outStream << "<Application>" << m_Application << "</Application>";;
    }
    
    if (m_has_AppVersion)
    {
        _outStream << "<AppVersion>" << m_AppVersion << "</AppVersion>";;
    }
    
    if (m_has_DocSecurity)
    {
        _outStream << "<DocSecurity>" << m_DocSecurity << "</DocSecurity>";;
    }
    
    _outStream << "</Properties>";
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