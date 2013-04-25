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
    protected:
    private:
    };

    class CT_NameListType: public XSD::ComplexType
    {
    public:
        CT_PersonType* add_Person();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NameListType& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
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
        ns_s::ST_String* add_s_Last();
        ns_s::ST_String* add_s_First();
        ns_s::ST_String* add_s_Middle();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_PersonType& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            bool has_s_Last() const;
            ns_s::ST_String* mutable_s_Last();
            const ns_s::ST_String& get_s_Last() const;
            bool has_s_First() const;
            ns_s::ST_String* mutable_s_First();
            const ns_s::ST_String& get_s_First() const;
            bool has_s_Middle() const;
            ns_s::ST_String* mutable_s_Middle();
            const ns_s::ST_String& get_s_Middle() const;
        protected:
        private:
            bool m_has_s_Last;
            ns_s::ST_String* m_s_Last;
            bool m_has_s_First;
            ns_s::ST_String* m_s_First;
            bool m_has_s_Middle;
            ns_s::ST_String* m_s_Middle;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_PersonType* default_instance_;
    };

    class CT_NameType: public XSD::ComplexType
    {
    public:
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
        bool has_NameList() const;
        CT_NameListType* mutable_NameList();
        const CT_NameListType& get_NameList() const;
        bool has_s_Corporate() const;
        ns_s::ST_String* mutable_s_Corporate();
        const ns_s::ST_String& get_s_Corporate() const;
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_NameOrCorporateType& default_instance();
    protected:
    private:
        bool m_has_NameList;
        CT_NameListType* m_NameList;
        bool m_has_s_Corporate;
        ns_s::ST_String* m_s_Corporate;
        static CT_NameOrCorporateType* default_instance_;
    };

    class CT_AuthorType: public XSD::ComplexType
    {
    public:
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
        ns_s::ST_String* add_s_AbbreviatedCaseNumber();
        ns_s::ST_String* add_s_AlbumTitle();
        CT_AuthorType* add_Author();
        ns_s::ST_String* add_s_BookTitle();
        ns_s::ST_String* add_s_Broadcaster();
        ns_s::ST_String* add_s_BroadcastTitle();
        ns_s::ST_String* add_s_CaseNumber();
        ns_s::ST_String* add_s_ChapterNumber();
        ns_s::ST_String* add_s_City();
        ns_s::ST_String* add_s_Comments();
        ns_s::ST_String* add_s_ConferenceName();
        ns_s::ST_String* add_s_CountryRegion();
        ns_s::ST_String* add_s_Court();
        ns_s::ST_String* add_s_Day();
        ns_s::ST_String* add_s_DayAccessed();
        ns_s::ST_String* add_s_Department();
        ns_s::ST_String* add_s_Distributor();
        ns_s::ST_String* add_s_Edition();
        ns_s::ST_String* add_s_Guid();
        ns_s::ST_String* add_s_Institution();
        ns_s::ST_String* add_s_InternetSiteTitle();
        ns_s::ST_String* add_s_Issue();
        ns_s::ST_String* add_s_JournalName();
        ns_s::ST_Lang* add_s_LCID();
        ns_s::ST_String* add_s_Medium();
        ns_s::ST_String* add_s_Month();
        ns_s::ST_String* add_s_MonthAccessed();
        ns_s::ST_String* add_s_NumberVolumes();
        ns_s::ST_String* add_s_Pages();
        ns_s::ST_String* add_s_PatentNumber();
        ns_s::ST_String* add_s_PeriodicalTitle();
        ns_s::ST_String* add_s_ProductionCompany();
        ns_s::ST_String* add_s_PublicationTitle();
        ns_s::ST_String* add_s_Publisher();
        ns_s::ST_String* add_s_RecordingNumber();
        ns_s::ST_String* add_s_RefOrder();
        ns_s::ST_String* add_s_Reporter();
        ST_SourceType* add_SourceType();
        ns_s::ST_String* add_s_ShortTitle();
        ns_s::ST_String* add_s_StandardNumber();
        ns_s::ST_String* add_s_StateProvince();
        ns_s::ST_String* add_s_Station();
        ns_s::ST_String* add_s_Tag();
        ns_s::ST_String* add_s_Theater();
        ns_s::ST_String* add_s_ThesisType();
        ns_s::ST_String* add_s_Title();
        ns_s::ST_String* add_s_Type();
        ns_s::ST_String* add_s_URL();
        ns_s::ST_String* add_s_Version();
        ns_s::ST_String* add_s_Volume();
        ns_s::ST_String* add_s_Year();
        ns_s::ST_String* add_s_YearAccessed();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_SourceType& default_instance();
    protected:
    private:
        class ChildGroup_1
        {
        public:
            bool has_s_AbbreviatedCaseNumber() const;
            ns_s::ST_String* mutable_s_AbbreviatedCaseNumber();
            const ns_s::ST_String& get_s_AbbreviatedCaseNumber() const;
            bool has_s_AlbumTitle() const;
            ns_s::ST_String* mutable_s_AlbumTitle();
            const ns_s::ST_String& get_s_AlbumTitle() const;
            bool has_Author() const;
            CT_AuthorType* mutable_Author();
            const CT_AuthorType& get_Author() const;
            bool has_s_BookTitle() const;
            ns_s::ST_String* mutable_s_BookTitle();
            const ns_s::ST_String& get_s_BookTitle() const;
            bool has_s_Broadcaster() const;
            ns_s::ST_String* mutable_s_Broadcaster();
            const ns_s::ST_String& get_s_Broadcaster() const;
            bool has_s_BroadcastTitle() const;
            ns_s::ST_String* mutable_s_BroadcastTitle();
            const ns_s::ST_String& get_s_BroadcastTitle() const;
            bool has_s_CaseNumber() const;
            ns_s::ST_String* mutable_s_CaseNumber();
            const ns_s::ST_String& get_s_CaseNumber() const;
            bool has_s_ChapterNumber() const;
            ns_s::ST_String* mutable_s_ChapterNumber();
            const ns_s::ST_String& get_s_ChapterNumber() const;
            bool has_s_City() const;
            ns_s::ST_String* mutable_s_City();
            const ns_s::ST_String& get_s_City() const;
            bool has_s_Comments() const;
            ns_s::ST_String* mutable_s_Comments();
            const ns_s::ST_String& get_s_Comments() const;
            bool has_s_ConferenceName() const;
            ns_s::ST_String* mutable_s_ConferenceName();
            const ns_s::ST_String& get_s_ConferenceName() const;
            bool has_s_CountryRegion() const;
            ns_s::ST_String* mutable_s_CountryRegion();
            const ns_s::ST_String& get_s_CountryRegion() const;
            bool has_s_Court() const;
            ns_s::ST_String* mutable_s_Court();
            const ns_s::ST_String& get_s_Court() const;
            bool has_s_Day() const;
            ns_s::ST_String* mutable_s_Day();
            const ns_s::ST_String& get_s_Day() const;
            bool has_s_DayAccessed() const;
            ns_s::ST_String* mutable_s_DayAccessed();
            const ns_s::ST_String& get_s_DayAccessed() const;
            bool has_s_Department() const;
            ns_s::ST_String* mutable_s_Department();
            const ns_s::ST_String& get_s_Department() const;
            bool has_s_Distributor() const;
            ns_s::ST_String* mutable_s_Distributor();
            const ns_s::ST_String& get_s_Distributor() const;
            bool has_s_Edition() const;
            ns_s::ST_String* mutable_s_Edition();
            const ns_s::ST_String& get_s_Edition() const;
            bool has_s_Guid() const;
            ns_s::ST_String* mutable_s_Guid();
            const ns_s::ST_String& get_s_Guid() const;
            bool has_s_Institution() const;
            ns_s::ST_String* mutable_s_Institution();
            const ns_s::ST_String& get_s_Institution() const;
            bool has_s_InternetSiteTitle() const;
            ns_s::ST_String* mutable_s_InternetSiteTitle();
            const ns_s::ST_String& get_s_InternetSiteTitle() const;
            bool has_s_Issue() const;
            ns_s::ST_String* mutable_s_Issue();
            const ns_s::ST_String& get_s_Issue() const;
            bool has_s_JournalName() const;
            ns_s::ST_String* mutable_s_JournalName();
            const ns_s::ST_String& get_s_JournalName() const;
            bool has_s_LCID() const;
            ns_s::ST_Lang* mutable_s_LCID();
            const ns_s::ST_Lang& get_s_LCID() const;
            bool has_s_Medium() const;
            ns_s::ST_String* mutable_s_Medium();
            const ns_s::ST_String& get_s_Medium() const;
            bool has_s_Month() const;
            ns_s::ST_String* mutable_s_Month();
            const ns_s::ST_String& get_s_Month() const;
            bool has_s_MonthAccessed() const;
            ns_s::ST_String* mutable_s_MonthAccessed();
            const ns_s::ST_String& get_s_MonthAccessed() const;
            bool has_s_NumberVolumes() const;
            ns_s::ST_String* mutable_s_NumberVolumes();
            const ns_s::ST_String& get_s_NumberVolumes() const;
            bool has_s_Pages() const;
            ns_s::ST_String* mutable_s_Pages();
            const ns_s::ST_String& get_s_Pages() const;
            bool has_s_PatentNumber() const;
            ns_s::ST_String* mutable_s_PatentNumber();
            const ns_s::ST_String& get_s_PatentNumber() const;
            bool has_s_PeriodicalTitle() const;
            ns_s::ST_String* mutable_s_PeriodicalTitle();
            const ns_s::ST_String& get_s_PeriodicalTitle() const;
            bool has_s_ProductionCompany() const;
            ns_s::ST_String* mutable_s_ProductionCompany();
            const ns_s::ST_String& get_s_ProductionCompany() const;
            bool has_s_PublicationTitle() const;
            ns_s::ST_String* mutable_s_PublicationTitle();
            const ns_s::ST_String& get_s_PublicationTitle() const;
            bool has_s_Publisher() const;
            ns_s::ST_String* mutable_s_Publisher();
            const ns_s::ST_String& get_s_Publisher() const;
            bool has_s_RecordingNumber() const;
            ns_s::ST_String* mutable_s_RecordingNumber();
            const ns_s::ST_String& get_s_RecordingNumber() const;
            bool has_s_RefOrder() const;
            ns_s::ST_String* mutable_s_RefOrder();
            const ns_s::ST_String& get_s_RefOrder() const;
            bool has_s_Reporter() const;
            ns_s::ST_String* mutable_s_Reporter();
            const ns_s::ST_String& get_s_Reporter() const;
            bool has_SourceType() const;
            ST_SourceType* mutable_SourceType();
            const ST_SourceType& get_SourceType() const;
            bool has_s_ShortTitle() const;
            ns_s::ST_String* mutable_s_ShortTitle();
            const ns_s::ST_String& get_s_ShortTitle() const;
            bool has_s_StandardNumber() const;
            ns_s::ST_String* mutable_s_StandardNumber();
            const ns_s::ST_String& get_s_StandardNumber() const;
            bool has_s_StateProvince() const;
            ns_s::ST_String* mutable_s_StateProvince();
            const ns_s::ST_String& get_s_StateProvince() const;
            bool has_s_Station() const;
            ns_s::ST_String* mutable_s_Station();
            const ns_s::ST_String& get_s_Station() const;
            bool has_s_Tag() const;
            ns_s::ST_String* mutable_s_Tag();
            const ns_s::ST_String& get_s_Tag() const;
            bool has_s_Theater() const;
            ns_s::ST_String* mutable_s_Theater();
            const ns_s::ST_String& get_s_Theater() const;
            bool has_s_ThesisType() const;
            ns_s::ST_String* mutable_s_ThesisType();
            const ns_s::ST_String& get_s_ThesisType() const;
            bool has_s_Title() const;
            ns_s::ST_String* mutable_s_Title();
            const ns_s::ST_String& get_s_Title() const;
            bool has_s_Type() const;
            ns_s::ST_String* mutable_s_Type();
            const ns_s::ST_String& get_s_Type() const;
            bool has_s_URL() const;
            ns_s::ST_String* mutable_s_URL();
            const ns_s::ST_String& get_s_URL() const;
            bool has_s_Version() const;
            ns_s::ST_String* mutable_s_Version();
            const ns_s::ST_String& get_s_Version() const;
            bool has_s_Volume() const;
            ns_s::ST_String* mutable_s_Volume();
            const ns_s::ST_String& get_s_Volume() const;
            bool has_s_Year() const;
            ns_s::ST_String* mutable_s_Year();
            const ns_s::ST_String& get_s_Year() const;
            bool has_s_YearAccessed() const;
            ns_s::ST_String* mutable_s_YearAccessed();
            const ns_s::ST_String& get_s_YearAccessed() const;
        protected:
        private:
            bool m_has_s_AbbreviatedCaseNumber;
            ns_s::ST_String* m_s_AbbreviatedCaseNumber;
            bool m_has_s_AlbumTitle;
            ns_s::ST_String* m_s_AlbumTitle;
            bool m_has_Author;
            CT_AuthorType* m_Author;
            bool m_has_s_BookTitle;
            ns_s::ST_String* m_s_BookTitle;
            bool m_has_s_Broadcaster;
            ns_s::ST_String* m_s_Broadcaster;
            bool m_has_s_BroadcastTitle;
            ns_s::ST_String* m_s_BroadcastTitle;
            bool m_has_s_CaseNumber;
            ns_s::ST_String* m_s_CaseNumber;
            bool m_has_s_ChapterNumber;
            ns_s::ST_String* m_s_ChapterNumber;
            bool m_has_s_City;
            ns_s::ST_String* m_s_City;
            bool m_has_s_Comments;
            ns_s::ST_String* m_s_Comments;
            bool m_has_s_ConferenceName;
            ns_s::ST_String* m_s_ConferenceName;
            bool m_has_s_CountryRegion;
            ns_s::ST_String* m_s_CountryRegion;
            bool m_has_s_Court;
            ns_s::ST_String* m_s_Court;
            bool m_has_s_Day;
            ns_s::ST_String* m_s_Day;
            bool m_has_s_DayAccessed;
            ns_s::ST_String* m_s_DayAccessed;
            bool m_has_s_Department;
            ns_s::ST_String* m_s_Department;
            bool m_has_s_Distributor;
            ns_s::ST_String* m_s_Distributor;
            bool m_has_s_Edition;
            ns_s::ST_String* m_s_Edition;
            bool m_has_s_Guid;
            ns_s::ST_String* m_s_Guid;
            bool m_has_s_Institution;
            ns_s::ST_String* m_s_Institution;
            bool m_has_s_InternetSiteTitle;
            ns_s::ST_String* m_s_InternetSiteTitle;
            bool m_has_s_Issue;
            ns_s::ST_String* m_s_Issue;
            bool m_has_s_JournalName;
            ns_s::ST_String* m_s_JournalName;
            bool m_has_s_LCID;
            ns_s::ST_Lang* m_s_LCID;
            bool m_has_s_Medium;
            ns_s::ST_String* m_s_Medium;
            bool m_has_s_Month;
            ns_s::ST_String* m_s_Month;
            bool m_has_s_MonthAccessed;
            ns_s::ST_String* m_s_MonthAccessed;
            bool m_has_s_NumberVolumes;
            ns_s::ST_String* m_s_NumberVolumes;
            bool m_has_s_Pages;
            ns_s::ST_String* m_s_Pages;
            bool m_has_s_PatentNumber;
            ns_s::ST_String* m_s_PatentNumber;
            bool m_has_s_PeriodicalTitle;
            ns_s::ST_String* m_s_PeriodicalTitle;
            bool m_has_s_ProductionCompany;
            ns_s::ST_String* m_s_ProductionCompany;
            bool m_has_s_PublicationTitle;
            ns_s::ST_String* m_s_PublicationTitle;
            bool m_has_s_Publisher;
            ns_s::ST_String* m_s_Publisher;
            bool m_has_s_RecordingNumber;
            ns_s::ST_String* m_s_RecordingNumber;
            bool m_has_s_RefOrder;
            ns_s::ST_String* m_s_RefOrder;
            bool m_has_s_Reporter;
            ns_s::ST_String* m_s_Reporter;
            bool m_has_SourceType;
            ST_SourceType* m_SourceType;
            bool m_has_s_ShortTitle;
            ns_s::ST_String* m_s_ShortTitle;
            bool m_has_s_StandardNumber;
            ns_s::ST_String* m_s_StandardNumber;
            bool m_has_s_StateProvince;
            ns_s::ST_String* m_s_StateProvince;
            bool m_has_s_Station;
            ns_s::ST_String* m_s_Station;
            bool m_has_s_Tag;
            ns_s::ST_String* m_s_Tag;
            bool m_has_s_Theater;
            ns_s::ST_String* m_s_Theater;
            bool m_has_s_ThesisType;
            ns_s::ST_String* m_s_ThesisType;
            bool m_has_s_Title;
            ns_s::ST_String* m_s_Title;
            bool m_has_s_Type;
            ns_s::ST_String* m_s_Type;
            bool m_has_s_URL;
            ns_s::ST_String* m_s_URL;
            bool m_has_s_Version;
            ns_s::ST_String* m_s_Version;
            bool m_has_s_Volume;
            ns_s::ST_String* m_s_Volume;
            bool m_has_s_Year;
            ns_s::ST_String* m_s_Year;
            bool m_has_s_YearAccessed;
            ns_s::ST_String* m_s_YearAccessed;
        };
        vector<ChildGroup_1*> m_childGroupList_1;
        static CT_SourceType* default_instance_;
    };

    class CT_Sources: public XSD::ComplexType
    {
    public:
        CT_SourceType* add_Source();
        void clear();
        void toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const;
        static const CT_Sources& default_instance();
        bool has_s_SelectedStyle_attr() const;
        void set_s_SelectedStyle_attr(const ns_s::ST_String& _s_SelectedStyle_attr);
        const ns_s::ST_String& get_s_SelectedStyle_attr() const;
        bool has_s_StyleName_attr() const;
        void set_s_StyleName_attr(const ns_s::ST_String& _s_StyleName_attr);
        const ns_s::ST_String& get_s_StyleName_attr() const;
        bool has_s_URI_attr() const;
        void set_s_URI_attr(const ns_s::ST_String& _s_URI_attr);
        const ns_s::ST_String& get_s_URI_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
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
        bool m_has_s_SelectedStyle_attr;
        ns_s::ST_String* m_s_SelectedStyle_attr;
        bool m_has_s_StyleName_attr;
        ns_s::ST_String* m_s_StyleName_attr;
        bool m_has_s_URI_attr;
        ns_s::ST_String* m_s_URI_attr;
    };

    class Sources_element: public Element
    {
    public:
        CT_SourceType* add_Source();
        void clear();
        void toXml(std::ostream& _outStream) const;
        static const Sources_element& default_instance();
        bool has_s_SelectedStyle_attr() const;
        void set_s_SelectedStyle_attr(const ns_s::ST_String& _s_SelectedStyle_attr);
        const ns_s::ST_String& get_s_SelectedStyle_attr() const;
        bool has_s_StyleName_attr() const;
        void set_s_StyleName_attr(const ns_s::ST_String& _s_StyleName_attr);
        const ns_s::ST_String& get_s_StyleName_attr() const;
        bool has_s_URI_attr() const;
        void set_s_URI_attr(const ns_s::ST_String& _s_URI_attr);
        const ns_s::ST_String& get_s_URI_attr() const;
    protected:
    private:
        class ChildGroup_1
        {
        public:
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
        bool m_has_s_SelectedStyle_attr;
        ns_s::ST_String* m_s_SelectedStyle_attr;
        bool m_has_s_StyleName_attr;
        ns_s::ST_String* m_s_StyleName_attr;
        bool m_has_s_URI_attr;
        ns_s::ST_String* m_s_URI_attr;
    };

}
#endif