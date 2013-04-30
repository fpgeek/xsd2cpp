namespace ns_bibliography {
    class Element;
    class Attribute;
    class ST_SourceType;
    class CT_NameListType;
    class CT_PersonType;
    class CT_NameType;
    class CT_NameOrCorporateType;
    class CT_AuthorType;
    class CT_SourceType;
    class CT_Sources;
    class Sources_element;
}
#ifndef __shared_bibliography_xsd_
#define __shared_bibliography_xsd_ 0

#include "xsdtype.h"
#include <vector>
#include <string>
#include <iostream>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_bibliography {
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

    class ST_SourceType: public ns_s::ST_String
    {
    public:
        ST_SourceType();
        ST_SourceType(const ns_s::ST_String& _ST_String);
        ~ST_SourceType();
        static const ST_SourceType& default_instance();
    protected:
    private:
        static ST_SourceType* default_instance_;
    };

    class CT_NameListType: public XSD::ComplexType
    {
    public:
        CT_NameListType();
        ~CT_NameListType();
        CT_PersonType* add_Person();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NameListType& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_Person() const;
            CT_PersonType* mutable_Person();
            const CT_PersonType& get_Person() const;
        protected:
        private:
            bool m_has_Person;
            CT_PersonType* m_Person;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_NameListType* default_instance_;
    };

    class CT_PersonType: public XSD::ComplexType
    {
    public:
        CT_PersonType();
        ~CT_PersonType();
        ns_s::ST_String* add_Last();
        ns_s::ST_String* add_First();
        ns_s::ST_String* add_Middle();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PersonType& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_Last() const;
            ns_s::ST_String* mutable_Last();
            const ns_s::ST_String& get_Last() const;
            bool has_First() const;
            ns_s::ST_String* mutable_First();
            const ns_s::ST_String& get_First() const;
            bool has_Middle() const;
            ns_s::ST_String* mutable_Middle();
            const ns_s::ST_String& get_Middle() const;
        protected:
        private:
            bool m_has_Last;
            ns_s::ST_String* m_Last;
            bool m_has_First;
            ns_s::ST_String* m_First;
            bool m_has_Middle;
            ns_s::ST_String* m_Middle;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_PersonType* default_instance_;
    };

    class CT_NameType: public XSD::ComplexType
    {
    public:
        CT_NameType();
        ~CT_NameType();
        bool has_NameList() const;
        CT_NameListType* mutable_NameList();
        const CT_NameListType& get_NameList() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NameType& default_instance();
    protected:
    private:
        bool m_has_NameList;
        CT_NameListType* m_NameList;
        static CT_NameType* default_instance_;
    };

    class CT_NameOrCorporateType: public XSD::ComplexType
    {
    public:
        CT_NameOrCorporateType();
        ~CT_NameOrCorporateType();
        bool has_NameList() const;
        CT_NameListType* mutable_NameList();
        const CT_NameListType& get_NameList() const;
        bool has_Corporate() const;
        ns_s::ST_String* mutable_Corporate();
        const ns_s::ST_String& get_Corporate() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NameOrCorporateType& default_instance();
    protected:
    private:
        bool m_has_NameList;
        CT_NameListType* m_NameList;
        bool m_has_Corporate;
        ns_s::ST_String* m_Corporate;
        static CT_NameOrCorporateType* default_instance_;
    };

    class CT_AuthorType: public XSD::ComplexType
    {
    public:
        CT_AuthorType();
        ~CT_AuthorType();
        CT_NameType* add_Artist();
        CT_NameOrCorporateType* add_Author();
        CT_NameType* add_BookAuthor();
        CT_NameType* add_Compiler();
        CT_NameType* add_Composer();
        CT_NameType* add_Conductor();
        CT_NameType* add_Counsel();
        CT_NameType* add_Director();
        CT_NameType* add_Editor();
        CT_NameType* add_Interviewee();
        CT_NameType* add_Interviewer();
        CT_NameType* add_Inventor();
        CT_NameOrCorporateType* add_Performer();
        CT_NameType* add_ProducerName();
        CT_NameType* add_Translator();
        CT_NameType* add_Writer();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_AuthorType& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_Artist() const;
            CT_NameType* mutable_Artist();
            const CT_NameType& get_Artist() const;
            bool has_Author() const;
            CT_NameOrCorporateType* mutable_Author();
            const CT_NameOrCorporateType& get_Author() const;
            bool has_BookAuthor() const;
            CT_NameType* mutable_BookAuthor();
            const CT_NameType& get_BookAuthor() const;
            bool has_Compiler() const;
            CT_NameType* mutable_Compiler();
            const CT_NameType& get_Compiler() const;
            bool has_Composer() const;
            CT_NameType* mutable_Composer();
            const CT_NameType& get_Composer() const;
            bool has_Conductor() const;
            CT_NameType* mutable_Conductor();
            const CT_NameType& get_Conductor() const;
            bool has_Counsel() const;
            CT_NameType* mutable_Counsel();
            const CT_NameType& get_Counsel() const;
            bool has_Director() const;
            CT_NameType* mutable_Director();
            const CT_NameType& get_Director() const;
            bool has_Editor() const;
            CT_NameType* mutable_Editor();
            const CT_NameType& get_Editor() const;
            bool has_Interviewee() const;
            CT_NameType* mutable_Interviewee();
            const CT_NameType& get_Interviewee() const;
            bool has_Interviewer() const;
            CT_NameType* mutable_Interviewer();
            const CT_NameType& get_Interviewer() const;
            bool has_Inventor() const;
            CT_NameType* mutable_Inventor();
            const CT_NameType& get_Inventor() const;
            bool has_Performer() const;
            CT_NameOrCorporateType* mutable_Performer();
            const CT_NameOrCorporateType& get_Performer() const;
            bool has_ProducerName() const;
            CT_NameType* mutable_ProducerName();
            const CT_NameType& get_ProducerName() const;
            bool has_Translator() const;
            CT_NameType* mutable_Translator();
            const CT_NameType& get_Translator() const;
            bool has_Writer() const;
            CT_NameType* mutable_Writer();
            const CT_NameType& get_Writer() const;
        protected:
        private:
            bool m_has_Artist;
            CT_NameType* m_Artist;
            bool m_has_Author;
            CT_NameOrCorporateType* m_Author;
            bool m_has_BookAuthor;
            CT_NameType* m_BookAuthor;
            bool m_has_Compiler;
            CT_NameType* m_Compiler;
            bool m_has_Composer;
            CT_NameType* m_Composer;
            bool m_has_Conductor;
            CT_NameType* m_Conductor;
            bool m_has_Counsel;
            CT_NameType* m_Counsel;
            bool m_has_Director;
            CT_NameType* m_Director;
            bool m_has_Editor;
            CT_NameType* m_Editor;
            bool m_has_Interviewee;
            CT_NameType* m_Interviewee;
            bool m_has_Interviewer;
            CT_NameType* m_Interviewer;
            bool m_has_Inventor;
            CT_NameType* m_Inventor;
            bool m_has_Performer;
            CT_NameOrCorporateType* m_Performer;
            bool m_has_ProducerName;
            CT_NameType* m_ProducerName;
            bool m_has_Translator;
            CT_NameType* m_Translator;
            bool m_has_Writer;
            CT_NameType* m_Writer;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_AuthorType* default_instance_;
    };

    class CT_SourceType: public XSD::ComplexType
    {
    public:
        CT_SourceType();
        ~CT_SourceType();
        ns_s::ST_String* add_AbbreviatedCaseNumber();
        ns_s::ST_String* add_AlbumTitle();
        CT_AuthorType* add_Author();
        ns_s::ST_String* add_BookTitle();
        ns_s::ST_String* add_Broadcaster();
        ns_s::ST_String* add_BroadcastTitle();
        ns_s::ST_String* add_CaseNumber();
        ns_s::ST_String* add_ChapterNumber();
        ns_s::ST_String* add_City();
        ns_s::ST_String* add_Comments();
        ns_s::ST_String* add_ConferenceName();
        ns_s::ST_String* add_CountryRegion();
        ns_s::ST_String* add_Court();
        ns_s::ST_String* add_Day();
        ns_s::ST_String* add_DayAccessed();
        ns_s::ST_String* add_Department();
        ns_s::ST_String* add_Distributor();
        ns_s::ST_String* add_Edition();
        ns_s::ST_String* add_Guid();
        ns_s::ST_String* add_Institution();
        ns_s::ST_String* add_InternetSiteTitle();
        ns_s::ST_String* add_Issue();
        ns_s::ST_String* add_JournalName();
        ns_s::ST_Lang* add_LCID();
        ns_s::ST_String* add_Medium();
        ns_s::ST_String* add_Month();
        ns_s::ST_String* add_MonthAccessed();
        ns_s::ST_String* add_NumberVolumes();
        ns_s::ST_String* add_Pages();
        ns_s::ST_String* add_PatentNumber();
        ns_s::ST_String* add_PeriodicalTitle();
        ns_s::ST_String* add_ProductionCompany();
        ns_s::ST_String* add_PublicationTitle();
        ns_s::ST_String* add_Publisher();
        ns_s::ST_String* add_RecordingNumber();
        ns_s::ST_String* add_RefOrder();
        ns_s::ST_String* add_Reporter();
        ST_SourceType* add_SourceType();
        ns_s::ST_String* add_ShortTitle();
        ns_s::ST_String* add_StandardNumber();
        ns_s::ST_String* add_StateProvince();
        ns_s::ST_String* add_Station();
        ns_s::ST_String* add_Tag();
        ns_s::ST_String* add_Theater();
        ns_s::ST_String* add_ThesisType();
        ns_s::ST_String* add_Title();
        ns_s::ST_String* add_Type();
        ns_s::ST_String* add_URL();
        ns_s::ST_String* add_Version();
        ns_s::ST_String* add_Volume();
        ns_s::ST_String* add_Year();
        ns_s::ST_String* add_YearAccessed();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SourceType& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_AbbreviatedCaseNumber() const;
            ns_s::ST_String* mutable_AbbreviatedCaseNumber();
            const ns_s::ST_String& get_AbbreviatedCaseNumber() const;
            bool has_AlbumTitle() const;
            ns_s::ST_String* mutable_AlbumTitle();
            const ns_s::ST_String& get_AlbumTitle() const;
            bool has_Author() const;
            CT_AuthorType* mutable_Author();
            const CT_AuthorType& get_Author() const;
            bool has_BookTitle() const;
            ns_s::ST_String* mutable_BookTitle();
            const ns_s::ST_String& get_BookTitle() const;
            bool has_Broadcaster() const;
            ns_s::ST_String* mutable_Broadcaster();
            const ns_s::ST_String& get_Broadcaster() const;
            bool has_BroadcastTitle() const;
            ns_s::ST_String* mutable_BroadcastTitle();
            const ns_s::ST_String& get_BroadcastTitle() const;
            bool has_CaseNumber() const;
            ns_s::ST_String* mutable_CaseNumber();
            const ns_s::ST_String& get_CaseNumber() const;
            bool has_ChapterNumber() const;
            ns_s::ST_String* mutable_ChapterNumber();
            const ns_s::ST_String& get_ChapterNumber() const;
            bool has_City() const;
            ns_s::ST_String* mutable_City();
            const ns_s::ST_String& get_City() const;
            bool has_Comments() const;
            ns_s::ST_String* mutable_Comments();
            const ns_s::ST_String& get_Comments() const;
            bool has_ConferenceName() const;
            ns_s::ST_String* mutable_ConferenceName();
            const ns_s::ST_String& get_ConferenceName() const;
            bool has_CountryRegion() const;
            ns_s::ST_String* mutable_CountryRegion();
            const ns_s::ST_String& get_CountryRegion() const;
            bool has_Court() const;
            ns_s::ST_String* mutable_Court();
            const ns_s::ST_String& get_Court() const;
            bool has_Day() const;
            ns_s::ST_String* mutable_Day();
            const ns_s::ST_String& get_Day() const;
            bool has_DayAccessed() const;
            ns_s::ST_String* mutable_DayAccessed();
            const ns_s::ST_String& get_DayAccessed() const;
            bool has_Department() const;
            ns_s::ST_String* mutable_Department();
            const ns_s::ST_String& get_Department() const;
            bool has_Distributor() const;
            ns_s::ST_String* mutable_Distributor();
            const ns_s::ST_String& get_Distributor() const;
            bool has_Edition() const;
            ns_s::ST_String* mutable_Edition();
            const ns_s::ST_String& get_Edition() const;
            bool has_Guid() const;
            ns_s::ST_String* mutable_Guid();
            const ns_s::ST_String& get_Guid() const;
            bool has_Institution() const;
            ns_s::ST_String* mutable_Institution();
            const ns_s::ST_String& get_Institution() const;
            bool has_InternetSiteTitle() const;
            ns_s::ST_String* mutable_InternetSiteTitle();
            const ns_s::ST_String& get_InternetSiteTitle() const;
            bool has_Issue() const;
            ns_s::ST_String* mutable_Issue();
            const ns_s::ST_String& get_Issue() const;
            bool has_JournalName() const;
            ns_s::ST_String* mutable_JournalName();
            const ns_s::ST_String& get_JournalName() const;
            bool has_LCID() const;
            ns_s::ST_Lang* mutable_LCID();
            const ns_s::ST_Lang& get_LCID() const;
            bool has_Medium() const;
            ns_s::ST_String* mutable_Medium();
            const ns_s::ST_String& get_Medium() const;
            bool has_Month() const;
            ns_s::ST_String* mutable_Month();
            const ns_s::ST_String& get_Month() const;
            bool has_MonthAccessed() const;
            ns_s::ST_String* mutable_MonthAccessed();
            const ns_s::ST_String& get_MonthAccessed() const;
            bool has_NumberVolumes() const;
            ns_s::ST_String* mutable_NumberVolumes();
            const ns_s::ST_String& get_NumberVolumes() const;
            bool has_Pages() const;
            ns_s::ST_String* mutable_Pages();
            const ns_s::ST_String& get_Pages() const;
            bool has_PatentNumber() const;
            ns_s::ST_String* mutable_PatentNumber();
            const ns_s::ST_String& get_PatentNumber() const;
            bool has_PeriodicalTitle() const;
            ns_s::ST_String* mutable_PeriodicalTitle();
            const ns_s::ST_String& get_PeriodicalTitle() const;
            bool has_ProductionCompany() const;
            ns_s::ST_String* mutable_ProductionCompany();
            const ns_s::ST_String& get_ProductionCompany() const;
            bool has_PublicationTitle() const;
            ns_s::ST_String* mutable_PublicationTitle();
            const ns_s::ST_String& get_PublicationTitle() const;
            bool has_Publisher() const;
            ns_s::ST_String* mutable_Publisher();
            const ns_s::ST_String& get_Publisher() const;
            bool has_RecordingNumber() const;
            ns_s::ST_String* mutable_RecordingNumber();
            const ns_s::ST_String& get_RecordingNumber() const;
            bool has_RefOrder() const;
            ns_s::ST_String* mutable_RefOrder();
            const ns_s::ST_String& get_RefOrder() const;
            bool has_Reporter() const;
            ns_s::ST_String* mutable_Reporter();
            const ns_s::ST_String& get_Reporter() const;
            bool has_SourceType() const;
            ST_SourceType* mutable_SourceType();
            const ST_SourceType& get_SourceType() const;
            bool has_ShortTitle() const;
            ns_s::ST_String* mutable_ShortTitle();
            const ns_s::ST_String& get_ShortTitle() const;
            bool has_StandardNumber() const;
            ns_s::ST_String* mutable_StandardNumber();
            const ns_s::ST_String& get_StandardNumber() const;
            bool has_StateProvince() const;
            ns_s::ST_String* mutable_StateProvince();
            const ns_s::ST_String& get_StateProvince() const;
            bool has_Station() const;
            ns_s::ST_String* mutable_Station();
            const ns_s::ST_String& get_Station() const;
            bool has_Tag() const;
            ns_s::ST_String* mutable_Tag();
            const ns_s::ST_String& get_Tag() const;
            bool has_Theater() const;
            ns_s::ST_String* mutable_Theater();
            const ns_s::ST_String& get_Theater() const;
            bool has_ThesisType() const;
            ns_s::ST_String* mutable_ThesisType();
            const ns_s::ST_String& get_ThesisType() const;
            bool has_Title() const;
            ns_s::ST_String* mutable_Title();
            const ns_s::ST_String& get_Title() const;
            bool has_Type() const;
            ns_s::ST_String* mutable_Type();
            const ns_s::ST_String& get_Type() const;
            bool has_URL() const;
            ns_s::ST_String* mutable_URL();
            const ns_s::ST_String& get_URL() const;
            bool has_Version() const;
            ns_s::ST_String* mutable_Version();
            const ns_s::ST_String& get_Version() const;
            bool has_Volume() const;
            ns_s::ST_String* mutable_Volume();
            const ns_s::ST_String& get_Volume() const;
            bool has_Year() const;
            ns_s::ST_String* mutable_Year();
            const ns_s::ST_String& get_Year() const;
            bool has_YearAccessed() const;
            ns_s::ST_String* mutable_YearAccessed();
            const ns_s::ST_String& get_YearAccessed() const;
        protected:
        private:
            bool m_has_AbbreviatedCaseNumber;
            ns_s::ST_String* m_AbbreviatedCaseNumber;
            bool m_has_AlbumTitle;
            ns_s::ST_String* m_AlbumTitle;
            bool m_has_Author;
            CT_AuthorType* m_Author;
            bool m_has_BookTitle;
            ns_s::ST_String* m_BookTitle;
            bool m_has_Broadcaster;
            ns_s::ST_String* m_Broadcaster;
            bool m_has_BroadcastTitle;
            ns_s::ST_String* m_BroadcastTitle;
            bool m_has_CaseNumber;
            ns_s::ST_String* m_CaseNumber;
            bool m_has_ChapterNumber;
            ns_s::ST_String* m_ChapterNumber;
            bool m_has_City;
            ns_s::ST_String* m_City;
            bool m_has_Comments;
            ns_s::ST_String* m_Comments;
            bool m_has_ConferenceName;
            ns_s::ST_String* m_ConferenceName;
            bool m_has_CountryRegion;
            ns_s::ST_String* m_CountryRegion;
            bool m_has_Court;
            ns_s::ST_String* m_Court;
            bool m_has_Day;
            ns_s::ST_String* m_Day;
            bool m_has_DayAccessed;
            ns_s::ST_String* m_DayAccessed;
            bool m_has_Department;
            ns_s::ST_String* m_Department;
            bool m_has_Distributor;
            ns_s::ST_String* m_Distributor;
            bool m_has_Edition;
            ns_s::ST_String* m_Edition;
            bool m_has_Guid;
            ns_s::ST_String* m_Guid;
            bool m_has_Institution;
            ns_s::ST_String* m_Institution;
            bool m_has_InternetSiteTitle;
            ns_s::ST_String* m_InternetSiteTitle;
            bool m_has_Issue;
            ns_s::ST_String* m_Issue;
            bool m_has_JournalName;
            ns_s::ST_String* m_JournalName;
            bool m_has_LCID;
            ns_s::ST_Lang* m_LCID;
            bool m_has_Medium;
            ns_s::ST_String* m_Medium;
            bool m_has_Month;
            ns_s::ST_String* m_Month;
            bool m_has_MonthAccessed;
            ns_s::ST_String* m_MonthAccessed;
            bool m_has_NumberVolumes;
            ns_s::ST_String* m_NumberVolumes;
            bool m_has_Pages;
            ns_s::ST_String* m_Pages;
            bool m_has_PatentNumber;
            ns_s::ST_String* m_PatentNumber;
            bool m_has_PeriodicalTitle;
            ns_s::ST_String* m_PeriodicalTitle;
            bool m_has_ProductionCompany;
            ns_s::ST_String* m_ProductionCompany;
            bool m_has_PublicationTitle;
            ns_s::ST_String* m_PublicationTitle;
            bool m_has_Publisher;
            ns_s::ST_String* m_Publisher;
            bool m_has_RecordingNumber;
            ns_s::ST_String* m_RecordingNumber;
            bool m_has_RefOrder;
            ns_s::ST_String* m_RefOrder;
            bool m_has_Reporter;
            ns_s::ST_String* m_Reporter;
            bool m_has_SourceType;
            ST_SourceType* m_SourceType;
            bool m_has_ShortTitle;
            ns_s::ST_String* m_ShortTitle;
            bool m_has_StandardNumber;
            ns_s::ST_String* m_StandardNumber;
            bool m_has_StateProvince;
            ns_s::ST_String* m_StateProvince;
            bool m_has_Station;
            ns_s::ST_String* m_Station;
            bool m_has_Tag;
            ns_s::ST_String* m_Tag;
            bool m_has_Theater;
            ns_s::ST_String* m_Theater;
            bool m_has_ThesisType;
            ns_s::ST_String* m_ThesisType;
            bool m_has_Title;
            ns_s::ST_String* m_Title;
            bool m_has_Type;
            ns_s::ST_String* m_Type;
            bool m_has_URL;
            ns_s::ST_String* m_URL;
            bool m_has_Version;
            ns_s::ST_String* m_Version;
            bool m_has_Volume;
            ns_s::ST_String* m_Volume;
            bool m_has_Year;
            ns_s::ST_String* m_Year;
            bool m_has_YearAccessed;
            ns_s::ST_String* m_YearAccessed;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_SourceType* default_instance_;
    };

    class CT_Sources: public XSD::ComplexType
    {
    public:
        CT_Sources();
        ~CT_Sources();
        CT_SourceType* add_Source();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Sources& default_instance();
        bool has_SelectedStyle_attr() const;
        void set_SelectedStyle_attr(const ns_s::ST_String& _SelectedStyle_attr);
        const ns_s::ST_String& get_SelectedStyle_attr() const;
        bool has_StyleName_attr() const;
        void set_StyleName_attr(const ns_s::ST_String& _StyleName_attr);
        const ns_s::ST_String& get_StyleName_attr() const;
        bool has_URI_attr() const;
        void set_URI_attr(const ns_s::ST_String& _URI_attr);
        const ns_s::ST_String& get_URI_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_Source() const;
            CT_SourceType* mutable_Source();
            const CT_SourceType& get_Source() const;
        protected:
        private:
            bool m_has_Source;
            CT_SourceType* m_Source;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_Sources* default_instance_;
        bool m_has_SelectedStyle_attr;
        ns_s::ST_String* m_SelectedStyle_attr;
        bool m_has_StyleName_attr;
        ns_s::ST_String* m_StyleName_attr;
        bool m_has_URI_attr;
        ns_s::ST_String* m_URI_attr;
    };

    class Sources_element: public Element
    {
    public:
        Sources_element();
        ~Sources_element();
        CT_SourceType* add_Source();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const Sources_element& default_instance();
        bool has_SelectedStyle_attr() const;
        void set_SelectedStyle_attr(const ns_s::ST_String& _SelectedStyle_attr);
        const ns_s::ST_String& get_SelectedStyle_attr() const;
        bool has_StyleName_attr() const;
        void set_StyleName_attr(const ns_s::ST_String& _StyleName_attr);
        const ns_s::ST_String& get_StyleName_attr() const;
        bool has_URI_attr() const;
        void set_URI_attr(const ns_s::ST_String& _URI_attr);
        const ns_s::ST_String& get_URI_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
            ChildGroup_1();
            bool has_Source() const;
            CT_SourceType* mutable_Source();
            const CT_SourceType& get_Source() const;
        protected:
        private:
            bool m_has_Source;
            CT_SourceType* m_Source;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static Sources_element* default_instance_;
        bool m_has_SelectedStyle_attr;
        ns_s::ST_String* m_SelectedStyle_attr;
        bool m_has_StyleName_attr;
        ns_s::ST_String* m_StyleName_attr;
        bool m_has_URI_attr;
        ns_s::ST_String* m_URI_attr;
    };

}
#endif