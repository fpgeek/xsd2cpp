#ifndef shared-documentPropertiesExtended_xsd 
#define shared-documentPropertiesExtended_xsd 0 

#include "xsddata.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-documentPropertiesVariantTypes_xsd.h"
namespace ns_s{
    class Element : public XSD::Element{
    public:

    private:

    }

    class Attribute : public XSD::Attribute{
    public:

    private:

    }

    class CT_Properties : public XSD::ComplexType{
    public:
        bool has_Template() const;
        void set_Template(const string& _Template );
        const string& Template() const;
        bool has_Manager() const;
        void set_Manager(const string& _Manager );
        const string& Manager() const;
        bool has_Company() const;
        void set_Company(const string& _Company );
        const string& Company() const;
        bool has_Pages() const;
        void set_Pages(const int& _Pages );
        const int& Pages() const;
        bool has_Words() const;
        void set_Words(const int& _Words );
        const int& Words() const;
        bool has_Characters() const;
        void set_Characters(const int& _Characters );
        const int& Characters() const;
        bool has_PresentationFormat() const;
        void set_PresentationFormat(const string& _PresentationFormat );
        const string& PresentationFormat() const;
        bool has_Lines() const;
        void set_Lines(const int& _Lines );
        const int& Lines() const;
        bool has_Paragraphs() const;
        void set_Paragraphs(const int& _Paragraphs );
        const int& Paragraphs() const;
        bool has_Slides() const;
        void set_Slides(const int& _Slides );
        const int& Slides() const;
        bool has_Notes() const;
        void set_Notes(const int& _Notes );
        const int& Notes() const;
        bool has_TotalTime() const;
        void set_TotalTime(const int& _TotalTime );
        const int& TotalTime() const;
        bool has_HiddenSlides() const;
        void set_HiddenSlides(const int& _HiddenSlides );
        const int& HiddenSlides() const;
        bool has_MMClips() const;
        void set_MMClips(const int& _MMClips );
        const int& MMClips() const;
        bool has_ScaleCrop() const;
        void set_ScaleCrop(const boolean& _ScaleCrop );
        const boolean& ScaleCrop() const;
        bool has_HeadingPairs() const;
        CT_VectorVariant* mutable_HeadingPairs();
        const CT_VectorVariant& HeadingPairs() const;
        bool has_TitlesOfParts() const;
        CT_VectorLpstr* mutable_TitlesOfParts();
        const CT_VectorLpstr& TitlesOfParts() const;
        bool has_LinksUpToDate() const;
        void set_LinksUpToDate(const boolean& _LinksUpToDate );
        const boolean& LinksUpToDate() const;
        bool has_CharactersWithSpaces() const;
        void set_CharactersWithSpaces(const int& _CharactersWithSpaces );
        const int& CharactersWithSpaces() const;
        bool has_SharedDoc() const;
        void set_SharedDoc(const boolean& _SharedDoc );
        const boolean& SharedDoc() const;
        bool has_HyperlinkBase() const;
        void set_HyperlinkBase(const string& _HyperlinkBase );
        const string& HyperlinkBase() const;
        bool has_HLinks() const;
        CT_VectorVariant* mutable_HLinks();
        const CT_VectorVariant& HLinks() const;
        bool has_HyperlinksChanged() const;
        void set_HyperlinksChanged(const boolean& _HyperlinksChanged );
        const boolean& HyperlinksChanged() const;
        bool has_DigSig() const;
        CT_DigSigBlob* mutable_DigSig();
        const CT_DigSigBlob& DigSig() const;
        bool has_Application() const;
        void set_Application(const string& _Application );
        const string& Application() const;
        bool has_AppVersion() const;
        void set_AppVersion(const string& _AppVersion );
        const string& AppVersion() const;
        bool has_DocSecurity() const;
        void set_DocSecurity(const int& _DocSecurity );
        const int& DocSecurity() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_Properties& default_instance() const;

    private:
        bool m_has_Template ;
        string m_Template ;
        bool m_has_Manager ;
        string m_Manager ;
        bool m_has_Company ;
        string m_Company ;
        bool m_has_Pages ;
        int m_Pages ;
        bool m_has_Words ;
        int m_Words ;
        bool m_has_Characters ;
        int m_Characters ;
        bool m_has_PresentationFormat ;
        string m_PresentationFormat ;
        bool m_has_Lines ;
        int m_Lines ;
        bool m_has_Paragraphs ;
        int m_Paragraphs ;
        bool m_has_Slides ;
        int m_Slides ;
        bool m_has_Notes ;
        int m_Notes ;
        bool m_has_TotalTime ;
        int m_TotalTime ;
        bool m_has_HiddenSlides ;
        int m_HiddenSlides ;
        bool m_has_MMClips ;
        int m_MMClips ;
        bool m_has_ScaleCrop ;
        boolean m_ScaleCrop ;
        bool m_has_HeadingPairs ;
        CT_VectorVariant* m_HeadingPairs ;
        bool m_has_TitlesOfParts ;
        CT_VectorLpstr* m_TitlesOfParts ;
        bool m_has_LinksUpToDate ;
        boolean m_LinksUpToDate ;
        bool m_has_CharactersWithSpaces ;
        int m_CharactersWithSpaces ;
        bool m_has_SharedDoc ;
        boolean m_SharedDoc ;
        bool m_has_HyperlinkBase ;
        string m_HyperlinkBase ;
        bool m_has_HLinks ;
        CT_VectorVariant* m_HLinks ;
        bool m_has_HyperlinksChanged ;
        boolean m_HyperlinksChanged ;
        bool m_has_DigSig ;
        CT_DigSigBlob* m_DigSig ;
        bool m_has_Application ;
        string m_Application ;
        bool m_has_AppVersion ;
        string m_AppVersion ;
        bool m_has_DocSecurity ;
        int m_DocSecurity ;
        static CT_Properties* default_instance_ ;

    }

    class CT_VectorVariant : public XSD::ComplexType{
    public:
        bool has_vector() const;
        CT_Vector* mutable_vector();
        const CT_Vector& vector() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_VectorVariant& default_instance() const;

    private:
        bool m_has_vector ;
        CT_Vector* m_vector ;
        static CT_VectorVariant* default_instance_ ;

    }

    class CT_VectorLpstr : public XSD::ComplexType{
    public:
        bool has_vector() const;
        CT_Vector* mutable_vector();
        const CT_Vector& vector() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_VectorLpstr& default_instance() const;

    private:
        bool m_has_vector ;
        CT_Vector* m_vector ;
        static CT_VectorLpstr* default_instance_ ;

    }

    class CT_DigSigBlob : public XSD::ComplexType{
    public:
        bool has_blob() const;
        void set_blob(const base64Binary& _blob );
        const base64Binary& blob() const;
        void clear();
        void toXml(const string _elemName , ostream _outStream ) const;
        static const CT_DigSigBlob& default_instance() const;

    private:
        bool m_has_blob ;
        base64Binary m_blob ;
        static CT_DigSigBlob* default_instance_ ;

    }

    class Properties : public CT_Properties : public Element{
    public:
        void toXml(ostream& _outStream ) const;

    private:

    }

}