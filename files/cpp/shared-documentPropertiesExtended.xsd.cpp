#include "shared-documentPropertiesExtended_xsd.h"
#include <stdlib.h>
#include <sstream>
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
        bool has_Template(){

        return m_has_Template;
    
        }
        void set_Template(const string& _Template ){

            m_has_Template = true;
            string = _Template;
            
        }
        const string& Template(){

        return type: \string\nname: \m_Template\n;
    
        }
        bool has_Manager(){

        return m_has_Manager;
    
        }
        void set_Manager(const string& _Manager ){

            m_has_Manager = true;
            string = _Manager;
            
        }
        const string& Manager(){

        return type: \string\nname: \m_Manager\n;
    
        }
        bool has_Company(){

        return m_has_Company;
    
        }
        void set_Company(const string& _Company ){

            m_has_Company = true;
            string = _Company;
            
        }
        const string& Company(){

        return type: \string\nname: \m_Company\n;
    
        }
        bool has_Pages(){

        return m_has_Pages;
    
        }
        void set_Pages(const int& _Pages ){

            m_has_Pages = true;
            int = _Pages;
            
        }
        const int& Pages(){

        return type: \int\nname: \m_Pages\n;
    
        }
        bool has_Words(){

        return m_has_Words;
    
        }
        void set_Words(const int& _Words ){

            m_has_Words = true;
            int = _Words;
            
        }
        const int& Words(){

        return type: \int\nname: \m_Words\n;
    
        }
        bool has_Characters(){

        return m_has_Characters;
    
        }
        void set_Characters(const int& _Characters ){

            m_has_Characters = true;
            int = _Characters;
            
        }
        const int& Characters(){

        return type: \int\nname: \m_Characters\n;
    
        }
        bool has_PresentationFormat(){

        return m_has_PresentationFormat;
    
        }
        void set_PresentationFormat(const string& _PresentationFormat ){

            m_has_PresentationFormat = true;
            string = _PresentationFormat;
            
        }
        const string& PresentationFormat(){

        return type: \string\nname: \m_PresentationFormat\n;
    
        }
        bool has_Lines(){

        return m_has_Lines;
    
        }
        void set_Lines(const int& _Lines ){

            m_has_Lines = true;
            int = _Lines;
            
        }
        const int& Lines(){

        return type: \int\nname: \m_Lines\n;
    
        }
        bool has_Paragraphs(){

        return m_has_Paragraphs;
    
        }
        void set_Paragraphs(const int& _Paragraphs ){

            m_has_Paragraphs = true;
            int = _Paragraphs;
            
        }
        const int& Paragraphs(){

        return type: \int\nname: \m_Paragraphs\n;
    
        }
        bool has_Slides(){

        return m_has_Slides;
    
        }
        void set_Slides(const int& _Slides ){

            m_has_Slides = true;
            int = _Slides;
            
        }
        const int& Slides(){

        return type: \int\nname: \m_Slides\n;
    
        }
        bool has_Notes(){

        return m_has_Notes;
    
        }
        void set_Notes(const int& _Notes ){

            m_has_Notes = true;
            int = _Notes;
            
        }
        const int& Notes(){

        return type: \int\nname: \m_Notes\n;
    
        }
        bool has_TotalTime(){

        return m_has_TotalTime;
    
        }
        void set_TotalTime(const int& _TotalTime ){

            m_has_TotalTime = true;
            int = _TotalTime;
            
        }
        const int& TotalTime(){

        return type: \int\nname: \m_TotalTime\n;
    
        }
        bool has_HiddenSlides(){

        return m_has_HiddenSlides;
    
        }
        void set_HiddenSlides(const int& _HiddenSlides ){

            m_has_HiddenSlides = true;
            int = _HiddenSlides;
            
        }
        const int& HiddenSlides(){

        return type: \int\nname: \m_HiddenSlides\n;
    
        }
        bool has_MMClips(){

        return m_has_MMClips;
    
        }
        void set_MMClips(const int& _MMClips ){

            m_has_MMClips = true;
            int = _MMClips;
            
        }
        const int& MMClips(){

        return type: \int\nname: \m_MMClips\n;
    
        }
        bool has_ScaleCrop(){

        return m_has_ScaleCrop;
    
        }
        void set_ScaleCrop(const boolean& _ScaleCrop ){

            m_has_ScaleCrop = true;
            boolean = _ScaleCrop;
            
        }
        const boolean& ScaleCrop(){

        return type: oolean\nname: \m_ScaleCrop\n;
    
        }
        bool has_HeadingPairs(){

            return m_has_HeadingPairs;
        
        }
        CT_VectorVariant* mutable_HeadingPairs(){

                m_has_HeadingPairs = true;
                if (!m_HeadingPairs)
                {
                    m_HeadingPairs = new CT_VectorVariant();
                }
                return m_HeadingPairs;
            
        }
        const CT_VectorVariant& HeadingPairs(){

            if (m_HeadingPairs)
            {
                return *m_HeadingPairs;
            }
            return CT_VectorVariant::default_instance();
        
        }
        bool has_TitlesOfParts(){

            return m_has_TitlesOfParts;
        
        }
        CT_VectorLpstr* mutable_TitlesOfParts(){

                m_has_TitlesOfParts = true;
                if (!m_TitlesOfParts)
                {
                    m_TitlesOfParts = new CT_VectorLpstr();
                }
                return m_TitlesOfParts;
            
        }
        const CT_VectorLpstr& TitlesOfParts(){

            if (m_TitlesOfParts)
            {
                return *m_TitlesOfParts;
            }
            return CT_VectorLpstr::default_instance();
        
        }
        bool has_LinksUpToDate(){

        return m_has_LinksUpToDate;
    
        }
        void set_LinksUpToDate(const boolean& _LinksUpToDate ){

            m_has_LinksUpToDate = true;
            boolean = _LinksUpToDate;
            
        }
        const boolean& LinksUpToDate(){

        return type: oolean\nname: \m_LinksUpToDate\n;
    
        }
        bool has_CharactersWithSpaces(){

        return m_has_CharactersWithSpaces;
    
        }
        void set_CharactersWithSpaces(const int& _CharactersWithSpaces ){

            m_has_CharactersWithSpaces = true;
            int = _CharactersWithSpaces;
            
        }
        const int& CharactersWithSpaces(){

        return type: \int\nname: \m_CharactersWithSpaces\n;
    
        }
        bool has_SharedDoc(){

        return m_has_SharedDoc;
    
        }
        void set_SharedDoc(const boolean& _SharedDoc ){

            m_has_SharedDoc = true;
            boolean = _SharedDoc;
            
        }
        const boolean& SharedDoc(){

        return type: oolean\nname: \m_SharedDoc\n;
    
        }
        bool has_HyperlinkBase(){

        return m_has_HyperlinkBase;
    
        }
        void set_HyperlinkBase(const string& _HyperlinkBase ){

            m_has_HyperlinkBase = true;
            string = _HyperlinkBase;
            
        }
        const string& HyperlinkBase(){

        return type: \string\nname: \m_HyperlinkBase\n;
    
        }
        bool has_HLinks(){

            return m_has_HLinks;
        
        }
        CT_VectorVariant* mutable_HLinks(){

                m_has_HLinks = true;
                if (!m_HLinks)
                {
                    m_HLinks = new CT_VectorVariant();
                }
                return m_HLinks;
            
        }
        const CT_VectorVariant& HLinks(){

            if (m_HLinks)
            {
                return *m_HLinks;
            }
            return CT_VectorVariant::default_instance();
        
        }
        bool has_HyperlinksChanged(){

        return m_has_HyperlinksChanged;
    
        }
        void set_HyperlinksChanged(const boolean& _HyperlinksChanged ){

            m_has_HyperlinksChanged = true;
            boolean = _HyperlinksChanged;
            
        }
        const boolean& HyperlinksChanged(){

        return type: oolean\nname: \m_HyperlinksChanged\n;
    
        }
        bool has_DigSig(){

            return m_has_DigSig;
        
        }
        CT_DigSigBlob* mutable_DigSig(){

                m_has_DigSig = true;
                if (!m_DigSig)
                {
                    m_DigSig = new CT_DigSigBlob();
                }
                return m_DigSig;
            
        }
        const CT_DigSigBlob& DigSig(){

            if (m_DigSig)
            {
                return *m_DigSig;
            }
            return CT_DigSigBlob::default_instance();
        
        }
        bool has_Application(){

        return m_has_Application;
    
        }
        void set_Application(const string& _Application ){

            m_has_Application = true;
            string = _Application;
            
        }
        const string& Application(){

        return type: \string\nname: \m_Application\n;
    
        }
        bool has_AppVersion(){

        return m_has_AppVersion;
    
        }
        void set_AppVersion(const string& _AppVersion ){

            m_has_AppVersion = true;
            string = _AppVersion;
            
        }
        const string& AppVersion(){

        return type: \string\nname: \m_AppVersion\n;
    
        }
        bool has_DocSecurity(){

        return m_has_DocSecurity;
    
        }
        void set_DocSecurity(const int& _DocSecurity ){

            m_has_DocSecurity = true;
            int = _DocSecurity;
            
        }
        const int& DocSecurity(){

        return type: \int\nname: \m_DocSecurity\n;
    
        }
        void clear(){

                m_has_Template = false;
                m_Template.clear();
            
                m_has_Manager = false;
                m_Manager.clear();
            
                m_has_Company = false;
                m_Company.clear();
            
                m_has_Pages = false;
                m_Pages = 0;
            
                m_has_Words = false;
                m_Words = 0;
            
                m_has_Characters = false;
                m_Characters = 0;
            
                m_has_PresentationFormat = false;
                m_PresentationFormat.clear();
            
                m_has_Lines = false;
                m_Lines = 0;
            
                m_has_Paragraphs = false;
                m_Paragraphs = 0;
            
                m_has_Slides = false;
                m_Slides = 0;
            
                m_has_Notes = false;
                m_Notes = 0;
            
                m_has_TotalTime = false;
                m_TotalTime = 0;
            
                m_has_HiddenSlides = false;
                m_HiddenSlides = 0;
            
                m_has_MMClips = false;
                m_MMClips = 0;
            
                m_has_ScaleCrop = false;
                m_ScaleCrop = false;
            
                m_has_HeadingPairs = false;
                
        if (m_HeadingPairs)
        {
            delete m_HeadingPairs;
            m_HeadingPairs = NULL;
        }
    
            
                m_has_TitlesOfParts = false;
                
        if (m_TitlesOfParts)
        {
            delete m_TitlesOfParts;
            m_TitlesOfParts = NULL;
        }
    
            
                m_has_LinksUpToDate = false;
                m_LinksUpToDate = false;
            
                m_has_CharactersWithSpaces = false;
                m_CharactersWithSpaces = 0;
            
                m_has_SharedDoc = false;
                m_SharedDoc = false;
            
                m_has_HyperlinkBase = false;
                m_HyperlinkBase.clear();
            
                m_has_HLinks = false;
                
        if (m_HLinks)
        {
            delete m_HLinks;
            m_HLinks = NULL;
        }
    
            
                m_has_HyperlinksChanged = false;
                m_HyperlinksChanged = false;
            
                m_has_DigSig = false;
                
        if (m_DigSig)
        {
            delete m_DigSig;
            m_DigSig = NULL;
        }
    
            
                m_has_Application = false;
                m_Application.clear();
            
                m_has_AppVersion = false;
                m_AppVersion.clear();
            
                m_has_DocSecurity = false;
                m_DocSecurity = 0;
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_Template)
                {
                    _outStream << \<Template>\ << m_Template << \</Template>\;;
                }
            
                if (m_has_Manager)
                {
                    _outStream << \<Manager>\ << m_Template << \</Manager>\;;
                }
            
                if (m_has_Company)
                {
                    _outStream << \<Company>\ << m_Template << \</Company>\;;
                }
            
                if (m_has_Pages)
                {
                    _outStream << \<Pages>\ << m_Template << \</Pages>\;;
                }
            
                if (m_has_Words)
                {
                    _outStream << \<Words>\ << m_Template << \</Words>\;;
                }
            
                if (m_has_Characters)
                {
                    _outStream << \<Characters>\ << m_Template << \</Characters>\;;
                }
            
                if (m_has_PresentationFormat)
                {
                    _outStream << \<PresentationFormat>\ << m_Template << \</PresentationFormat>\;;
                }
            
                if (m_has_Lines)
                {
                    _outStream << \<Lines>\ << m_Template << \</Lines>\;;
                }
            
                if (m_has_Paragraphs)
                {
                    _outStream << \<Paragraphs>\ << m_Template << \</Paragraphs>\;;
                }
            
                if (m_has_Slides)
                {
                    _outStream << \<Slides>\ << m_Template << \</Slides>\;;
                }
            
                if (m_has_Notes)
                {
                    _outStream << \<Notes>\ << m_Template << \</Notes>\;;
                }
            
                if (m_has_TotalTime)
                {
                    _outStream << \<TotalTime>\ << m_Template << \</TotalTime>\;;
                }
            
                if (m_has_HiddenSlides)
                {
                    _outStream << \<HiddenSlides>\ << m_Template << \</HiddenSlides>\;;
                }
            
                if (m_has_MMClips)
                {
                    _outStream << \<MMClips>\ << m_Template << \</MMClips>\;;
                }
            
                if (m_has_ScaleCrop)
                {
                    _outStream << \<ScaleCrop>\ << m_Template << \</ScaleCrop>\;;
                }
            
                if (m_has_HeadingPairs)
                {
                    m_Template->toXml(HeadingPairs, _outStream);;
                }
            
                if (m_has_TitlesOfParts)
                {
                    m_Template->toXml(TitlesOfParts, _outStream);;
                }
            
                if (m_has_LinksUpToDate)
                {
                    _outStream << \<LinksUpToDate>\ << m_Template << \</LinksUpToDate>\;;
                }
            
                if (m_has_CharactersWithSpaces)
                {
                    _outStream << \<CharactersWithSpaces>\ << m_Template << \</CharactersWithSpaces>\;;
                }
            
                if (m_has_SharedDoc)
                {
                    _outStream << \<SharedDoc>\ << m_Template << \</SharedDoc>\;;
                }
            
                if (m_has_HyperlinkBase)
                {
                    _outStream << \<HyperlinkBase>\ << m_Template << \</HyperlinkBase>\;;
                }
            
                if (m_has_HLinks)
                {
                    m_Template->toXml(HLinks, _outStream);;
                }
            
                if (m_has_HyperlinksChanged)
                {
                    _outStream << \<HyperlinksChanged>\ << m_Template << \</HyperlinksChanged>\;;
                }
            
                if (m_has_DigSig)
                {
                    m_Template->toXml(DigSig, _outStream);;
                }
            
                if (m_has_Application)
                {
                    _outStream << \<Application>\ << m_Template << \</Application>\;;
                }
            
                if (m_has_AppVersion)
                {
                    _outStream << \<AppVersion>\ << m_Template << \</AppVersion>\;;
                }
            
                if (m_has_DocSecurity)
                {
                    _outStream << \<DocSecurity>\ << m_Template << \</DocSecurity>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_Properties& default_instance(){

    if (!CT_Properties::default_instance_)
    {
        CT_Properties::default_instance_ = new CT_Properties();
    }
    return *CT_Properties::default_instance_;

        }

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
        bool has_vector(){

            return m_has_vector;
        
        }
        CT_Vector* mutable_vector(){

                m_has_vector = true;
                if (!m_vector)
                {
                    m_vector = new CT_Vector();
                }
                return m_vector;
            
        }
        const CT_Vector& vector(){

            if (m_vector)
            {
                return *m_vector;
            }
            return CT_Vector::default_instance();
        
        }
        void clear(){

                m_has_vector = false;
                
        if (m_vector)
        {
            delete m_vector;
            m_vector = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_vector)
                {
                    m_vector->toXml(vector, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_VectorVariant& default_instance(){

    if (!CT_VectorVariant::default_instance_)
    {
        CT_VectorVariant::default_instance_ = new CT_VectorVariant();
    }
    return *CT_VectorVariant::default_instance_;

        }

    private:
        bool m_has_vector ;
        CT_Vector* m_vector ;
        static CT_VectorVariant* default_instance_ ;

    }

    class CT_VectorLpstr : public XSD::ComplexType{
    public:
        bool has_vector(){

            return m_has_vector;
        
        }
        CT_Vector* mutable_vector(){

                m_has_vector = true;
                if (!m_vector)
                {
                    m_vector = new CT_Vector();
                }
                return m_vector;
            
        }
        const CT_Vector& vector(){

            if (m_vector)
            {
                return *m_vector;
            }
            return CT_Vector::default_instance();
        
        }
        void clear(){

                m_has_vector = false;
                
        if (m_vector)
        {
            delete m_vector;
            m_vector = NULL;
        }
    
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_vector)
                {
                    m_vector->toXml(vector, _outStream);;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_VectorLpstr& default_instance(){

    if (!CT_VectorLpstr::default_instance_)
    {
        CT_VectorLpstr::default_instance_ = new CT_VectorLpstr();
    }
    return *CT_VectorLpstr::default_instance_;

        }

    private:
        bool m_has_vector ;
        CT_Vector* m_vector ;
        static CT_VectorLpstr* default_instance_ ;

    }

    class CT_DigSigBlob : public XSD::ComplexType{
    public:
        bool has_blob(){

        return m_has_blob;
    
        }
        void set_blob(const base64Binary& _blob ){

            m_has_blob = true;
            base64Binary = _blob;
            
        }
        const base64Binary& blob(){

        return type: ase64Binary\nname: \m_blob\n;
    
        }
        void clear(){

                m_has_blob = false;
                m_blob.clear();
            
        }
        void toXml(const string _elemName , ostream _outStream ){

        _outStream << \<\ << _elementName;
    
        _outStream << \>\;
    
                if (m_has_blob)
                {
                    _outStream << \<blob>\ << m_blob << \</blob>\;;
                }
            
        _outStream << \</\ << _elementName << \>\;
    
        }
        const CT_DigSigBlob& default_instance(){

    if (!CT_DigSigBlob::default_instance_)
    {
        CT_DigSigBlob::default_instance_ = new CT_DigSigBlob();
    }
    return *CT_DigSigBlob::default_instance_;

        }

    private:
        bool m_has_blob ;
        base64Binary m_blob ;
        static CT_DigSigBlob* default_instance_ ;

    }

    class Properties : public CT_Properties : public Element{
    public:
        void toXml(ostream& _outStream ){

        CT_Properties::toXml(\Properties\, _outStream);
    
        }

    private:

    }

}