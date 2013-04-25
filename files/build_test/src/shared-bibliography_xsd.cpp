#include "shared-bibliography_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <sstream>
#include <assert.h>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_bibliography {
 using namespace std;

    // Element

    // Attribute

    // ST_SourceType
    ST_SourceType::ST_SourceType()

    {
    }
    ST_SourceType::ST_SourceType(const ns_s::ST_String& _ST_String)

    {
    }

    // CT_NameListType
    CT_PersonType* CT_NameListType::add_Person()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_PersonType* pNewChild = pChildGroup->mutable_Person();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_NameListType::clear()
    {    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_NameListType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_Person())
            {
                (*iter)->get_Person().toXmlElem("bibliography:Person", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_NameListType& CT_NameListType::default_instance()
    {    
    if (!CT_NameListType::default_instance_)
    {
        CT_NameListType::default_instance_ = new CT_NameListType();
    }
    return *CT_NameListType::default_instance_;
    }


    // CT_PersonType
    ns_s::ST_String* CT_PersonType::add_s_Last()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Last();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_PersonType::add_s_First()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_First();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_PersonType::add_s_Middle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Middle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_PersonType::clear()
    {    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_PersonType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_s_Last())
            {
                _outStream << "<bibliography:Last>" << (*iter)->get_s_Last().toString() << "</bibliography:Last>";
            }
            else if ((*iter)->has_s_First())
            {
                _outStream << "<bibliography:First>" << (*iter)->get_s_First().toString() << "</bibliography:First>";
            }
            else if ((*iter)->has_s_Middle())
            {
                _outStream << "<bibliography:Middle>" << (*iter)->get_s_Middle().toString() << "</bibliography:Middle>";
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_PersonType& CT_PersonType::default_instance()
    {    
    if (!CT_PersonType::default_instance_)
    {
        CT_PersonType::default_instance_ = new CT_PersonType();
    }
    return *CT_PersonType::default_instance_;
    }


    // CT_NameType
    bool CT_NameType::has_NameList() const
    {    
    return m_has_NameList;
    }

    CT_NameListType* CT_NameType::mutable_NameList()
    {    
    m_has_NameList = true;
    if (!m_NameList)
    {
        m_NameList = new CT_NameListType();
    }
    return m_NameList;
    }

    const CT_NameListType& CT_NameType::get_NameList() const
    {    
    if (m_NameList)
    {
        return *m_NameList;
    }
    return CT_NameListType::default_instance();
    }

    void CT_NameType::clear()
    {    
    m_has_NameList = false;
    
    if (m_NameList)
    {
        delete m_NameList;
        m_NameList = NULL;
    }
    
    }

    void CT_NameType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_NameList)
    {
        m_NameList->toXmlElem("bibliography:NameList", "", _outStream);;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_NameType& CT_NameType::default_instance()
    {    
    if (!CT_NameType::default_instance_)
    {
        CT_NameType::default_instance_ = new CT_NameType();
    }
    return *CT_NameType::default_instance_;
    }


    // CT_NameOrCorporateType
    bool CT_NameOrCorporateType::has_NameList() const
    {    
    return m_has_NameList;
    }

    CT_NameListType* CT_NameOrCorporateType::mutable_NameList()
    {    
    
    m_has_s_Corporate = false;
    
    if (m_s_Corporate)
    {
        delete m_s_Corporate;
        m_s_Corporate = NULL;
    }
    ;
    
    m_has_NameList = true;
    if (!m_NameList)
    {
        m_NameList = new CT_NameListType();
    }
    return m_NameList;
    }

    const CT_NameListType& CT_NameOrCorporateType::get_NameList() const
    {    
    if (m_NameList)
    {
        return *m_NameList;
    }
    return CT_NameListType::default_instance();
    }

    bool CT_NameOrCorporateType::has_s_Corporate() const
    {    
    return m_has_s_Corporate;
    }

    ns_s::ST_String* CT_NameOrCorporateType::mutable_s_Corporate()
    {    
    
    m_has_NameList = false;
    
    if (m_NameList)
    {
        delete m_NameList;
        m_NameList = NULL;
    }
    ;
    
    m_has_s_Corporate = true;
    if (!m_s_Corporate)
    {
        m_s_Corporate = new ns_s::ST_String();
    }
    return m_s_Corporate;
    }

    const ns_s::ST_String& CT_NameOrCorporateType::get_s_Corporate() const
    {    
    if (m_s_Corporate)
    {
        return *m_s_Corporate;
    }
    return ns_s::ST_String::default_instance();
    }

    void CT_NameOrCorporateType::clear()
    {    
    m_has_NameList = false;
    
    if (m_NameList)
    {
        delete m_NameList;
        m_NameList = NULL;
    }
    
    
    m_has_s_Corporate = false;
    
    if (m_s_Corporate)
    {
        delete m_s_Corporate;
        m_s_Corporate = NULL;
    }
    
    }

    void CT_NameOrCorporateType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    if (m_has_NameList)
    {
        m_NameList->toXmlElem("bibliography:NameList", "", _outStream);;
    }
    
    if (m_has_s_Corporate)
    {
        _outStream << "<bibliography:Corporate>" << m_s_Corporate->toString() << "</bibliography:Corporate>";;
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_NameOrCorporateType& CT_NameOrCorporateType::default_instance()
    {    
    if (!CT_NameOrCorporateType::default_instance_)
    {
        CT_NameOrCorporateType::default_instance_ = new CT_NameOrCorporateType();
    }
    return *CT_NameOrCorporateType::default_instance_;
    }


    // CT_AuthorType
    CT_NameType* CT_AuthorType::add_Artist()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Artist();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameOrCorporateType* CT_AuthorType::add_Author()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameOrCorporateType* pNewChild = pChildGroup->mutable_Author();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_BookAuthor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_BookAuthor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Compiler()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Compiler();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Composer()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Composer();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Conductor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Conductor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Counsel()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Counsel();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Director()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Director();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Editor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Editor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Interviewee()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Interviewee();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Interviewer()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Interviewer();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Inventor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Inventor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameOrCorporateType* CT_AuthorType::add_Performer()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameOrCorporateType* pNewChild = pChildGroup->mutable_Performer();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_ProducerName()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_ProducerName();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Translator()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Translator();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_NameType* CT_AuthorType::add_Writer()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_NameType* pNewChild = pChildGroup->mutable_Writer();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_AuthorType::clear()
    {    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_AuthorType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_Artist())
            {
                (*iter)->get_Artist().toXmlElem("bibliography:Artist", "", _outStream);
            }
            else if ((*iter)->has_Author())
            {
                (*iter)->get_Author().toXmlElem("bibliography:Author", "", _outStream);
            }
            else if ((*iter)->has_BookAuthor())
            {
                (*iter)->get_BookAuthor().toXmlElem("bibliography:BookAuthor", "", _outStream);
            }
            else if ((*iter)->has_Compiler())
            {
                (*iter)->get_Compiler().toXmlElem("bibliography:Compiler", "", _outStream);
            }
            else if ((*iter)->has_Composer())
            {
                (*iter)->get_Composer().toXmlElem("bibliography:Composer", "", _outStream);
            }
            else if ((*iter)->has_Conductor())
            {
                (*iter)->get_Conductor().toXmlElem("bibliography:Conductor", "", _outStream);
            }
            else if ((*iter)->has_Counsel())
            {
                (*iter)->get_Counsel().toXmlElem("bibliography:Counsel", "", _outStream);
            }
            else if ((*iter)->has_Director())
            {
                (*iter)->get_Director().toXmlElem("bibliography:Director", "", _outStream);
            }
            else if ((*iter)->has_Editor())
            {
                (*iter)->get_Editor().toXmlElem("bibliography:Editor", "", _outStream);
            }
            else if ((*iter)->has_Interviewee())
            {
                (*iter)->get_Interviewee().toXmlElem("bibliography:Interviewee", "", _outStream);
            }
            else if ((*iter)->has_Interviewer())
            {
                (*iter)->get_Interviewer().toXmlElem("bibliography:Interviewer", "", _outStream);
            }
            else if ((*iter)->has_Inventor())
            {
                (*iter)->get_Inventor().toXmlElem("bibliography:Inventor", "", _outStream);
            }
            else if ((*iter)->has_Performer())
            {
                (*iter)->get_Performer().toXmlElem("bibliography:Performer", "", _outStream);
            }
            else if ((*iter)->has_ProducerName())
            {
                (*iter)->get_ProducerName().toXmlElem("bibliography:ProducerName", "", _outStream);
            }
            else if ((*iter)->has_Translator())
            {
                (*iter)->get_Translator().toXmlElem("bibliography:Translator", "", _outStream);
            }
            else if ((*iter)->has_Writer())
            {
                (*iter)->get_Writer().toXmlElem("bibliography:Writer", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_AuthorType& CT_AuthorType::default_instance()
    {    
    if (!CT_AuthorType::default_instance_)
    {
        CT_AuthorType::default_instance_ = new CT_AuthorType();
    }
    return *CT_AuthorType::default_instance_;
    }


    // CT_SourceType
    ns_s::ST_String* CT_SourceType::add_s_AbbreviatedCaseNumber()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_AbbreviatedCaseNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_AlbumTitle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_AlbumTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    CT_AuthorType* CT_SourceType::add_Author()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_AuthorType* pNewChild = pChildGroup->mutable_Author();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_BookTitle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_BookTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Broadcaster()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Broadcaster();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_BroadcastTitle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_BroadcastTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_CaseNumber()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_CaseNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_ChapterNumber()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_ChapterNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_City()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_City();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Comments()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Comments();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_ConferenceName()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_ConferenceName();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_CountryRegion()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_CountryRegion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Court()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Court();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Day()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Day();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_DayAccessed()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_DayAccessed();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Department()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Department();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Distributor()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Distributor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Edition()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Edition();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Guid()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Guid();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Institution()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Institution();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_InternetSiteTitle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_InternetSiteTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Issue()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Issue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_JournalName()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_JournalName();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_Lang* CT_SourceType::add_s_LCID()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_Lang* pNewChild = pChildGroup->mutable_s_LCID();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Medium()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Medium();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Month()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Month();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_MonthAccessed()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_MonthAccessed();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_NumberVolumes()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_NumberVolumes();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Pages()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Pages();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_PatentNumber()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_PatentNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_PeriodicalTitle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_PeriodicalTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_ProductionCompany()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_ProductionCompany();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_PublicationTitle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_PublicationTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Publisher()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Publisher();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_RecordingNumber()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_RecordingNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_RefOrder()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_RefOrder();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Reporter()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Reporter();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ST_SourceType* CT_SourceType::add_SourceType()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ST_SourceType* pNewChild = pChildGroup->mutable_SourceType();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_ShortTitle()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_ShortTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_StandardNumber()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_StandardNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_StateProvince()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_StateProvince();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Station()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Station();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Tag()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Tag();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Theater()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Theater();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_ThesisType()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_ThesisType();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Title()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Type()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Type();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_URL()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_URL();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Version()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Version();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Volume()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Volume();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_Year()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_Year();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    ns_s::ST_String* CT_SourceType::add_s_YearAccessed()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_s_YearAccessed();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_SourceType::clear()
    {    
    {
        vector<ChildGroup_1*>::iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            delete *iter;
        }
        m_childGroupList_1.clear();
    }
    }

    void CT_SourceType::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_s_AbbreviatedCaseNumber())
            {
                _outStream << "<bibliography:AbbreviatedCaseNumber>" << (*iter)->get_s_AbbreviatedCaseNumber().toString() << "</bibliography:AbbreviatedCaseNumber>";
            }
            else if ((*iter)->has_s_AlbumTitle())
            {
                _outStream << "<bibliography:AlbumTitle>" << (*iter)->get_s_AlbumTitle().toString() << "</bibliography:AlbumTitle>";
            }
            else if ((*iter)->has_Author())
            {
                (*iter)->get_Author().toXmlElem("bibliography:Author", "", _outStream);
            }
            else if ((*iter)->has_s_BookTitle())
            {
                _outStream << "<bibliography:BookTitle>" << (*iter)->get_s_BookTitle().toString() << "</bibliography:BookTitle>";
            }
            else if ((*iter)->has_s_Broadcaster())
            {
                _outStream << "<bibliography:Broadcaster>" << (*iter)->get_s_Broadcaster().toString() << "</bibliography:Broadcaster>";
            }
            else if ((*iter)->has_s_BroadcastTitle())
            {
                _outStream << "<bibliography:BroadcastTitle>" << (*iter)->get_s_BroadcastTitle().toString() << "</bibliography:BroadcastTitle>";
            }
            else if ((*iter)->has_s_CaseNumber())
            {
                _outStream << "<bibliography:CaseNumber>" << (*iter)->get_s_CaseNumber().toString() << "</bibliography:CaseNumber>";
            }
            else if ((*iter)->has_s_ChapterNumber())
            {
                _outStream << "<bibliography:ChapterNumber>" << (*iter)->get_s_ChapterNumber().toString() << "</bibliography:ChapterNumber>";
            }
            else if ((*iter)->has_s_City())
            {
                _outStream << "<bibliography:City>" << (*iter)->get_s_City().toString() << "</bibliography:City>";
            }
            else if ((*iter)->has_s_Comments())
            {
                _outStream << "<bibliography:Comments>" << (*iter)->get_s_Comments().toString() << "</bibliography:Comments>";
            }
            else if ((*iter)->has_s_ConferenceName())
            {
                _outStream << "<bibliography:ConferenceName>" << (*iter)->get_s_ConferenceName().toString() << "</bibliography:ConferenceName>";
            }
            else if ((*iter)->has_s_CountryRegion())
            {
                _outStream << "<bibliography:CountryRegion>" << (*iter)->get_s_CountryRegion().toString() << "</bibliography:CountryRegion>";
            }
            else if ((*iter)->has_s_Court())
            {
                _outStream << "<bibliography:Court>" << (*iter)->get_s_Court().toString() << "</bibliography:Court>";
            }
            else if ((*iter)->has_s_Day())
            {
                _outStream << "<bibliography:Day>" << (*iter)->get_s_Day().toString() << "</bibliography:Day>";
            }
            else if ((*iter)->has_s_DayAccessed())
            {
                _outStream << "<bibliography:DayAccessed>" << (*iter)->get_s_DayAccessed().toString() << "</bibliography:DayAccessed>";
            }
            else if ((*iter)->has_s_Department())
            {
                _outStream << "<bibliography:Department>" << (*iter)->get_s_Department().toString() << "</bibliography:Department>";
            }
            else if ((*iter)->has_s_Distributor())
            {
                _outStream << "<bibliography:Distributor>" << (*iter)->get_s_Distributor().toString() << "</bibliography:Distributor>";
            }
            else if ((*iter)->has_s_Edition())
            {
                _outStream << "<bibliography:Edition>" << (*iter)->get_s_Edition().toString() << "</bibliography:Edition>";
            }
            else if ((*iter)->has_s_Guid())
            {
                _outStream << "<bibliography:Guid>" << (*iter)->get_s_Guid().toString() << "</bibliography:Guid>";
            }
            else if ((*iter)->has_s_Institution())
            {
                _outStream << "<bibliography:Institution>" << (*iter)->get_s_Institution().toString() << "</bibliography:Institution>";
            }
            else if ((*iter)->has_s_InternetSiteTitle())
            {
                _outStream << "<bibliography:InternetSiteTitle>" << (*iter)->get_s_InternetSiteTitle().toString() << "</bibliography:InternetSiteTitle>";
            }
            else if ((*iter)->has_s_Issue())
            {
                _outStream << "<bibliography:Issue>" << (*iter)->get_s_Issue().toString() << "</bibliography:Issue>";
            }
            else if ((*iter)->has_s_JournalName())
            {
                _outStream << "<bibliography:JournalName>" << (*iter)->get_s_JournalName().toString() << "</bibliography:JournalName>";
            }
            else if ((*iter)->has_s_LCID())
            {
                _outStream << "<bibliography:LCID>" << (*iter)->get_s_LCID().toString() << "</bibliography:LCID>";
            }
            else if ((*iter)->has_s_Medium())
            {
                _outStream << "<bibliography:Medium>" << (*iter)->get_s_Medium().toString() << "</bibliography:Medium>";
            }
            else if ((*iter)->has_s_Month())
            {
                _outStream << "<bibliography:Month>" << (*iter)->get_s_Month().toString() << "</bibliography:Month>";
            }
            else if ((*iter)->has_s_MonthAccessed())
            {
                _outStream << "<bibliography:MonthAccessed>" << (*iter)->get_s_MonthAccessed().toString() << "</bibliography:MonthAccessed>";
            }
            else if ((*iter)->has_s_NumberVolumes())
            {
                _outStream << "<bibliography:NumberVolumes>" << (*iter)->get_s_NumberVolumes().toString() << "</bibliography:NumberVolumes>";
            }
            else if ((*iter)->has_s_Pages())
            {
                _outStream << "<bibliography:Pages>" << (*iter)->get_s_Pages().toString() << "</bibliography:Pages>";
            }
            else if ((*iter)->has_s_PatentNumber())
            {
                _outStream << "<bibliography:PatentNumber>" << (*iter)->get_s_PatentNumber().toString() << "</bibliography:PatentNumber>";
            }
            else if ((*iter)->has_s_PeriodicalTitle())
            {
                _outStream << "<bibliography:PeriodicalTitle>" << (*iter)->get_s_PeriodicalTitle().toString() << "</bibliography:PeriodicalTitle>";
            }
            else if ((*iter)->has_s_ProductionCompany())
            {
                _outStream << "<bibliography:ProductionCompany>" << (*iter)->get_s_ProductionCompany().toString() << "</bibliography:ProductionCompany>";
            }
            else if ((*iter)->has_s_PublicationTitle())
            {
                _outStream << "<bibliography:PublicationTitle>" << (*iter)->get_s_PublicationTitle().toString() << "</bibliography:PublicationTitle>";
            }
            else if ((*iter)->has_s_Publisher())
            {
                _outStream << "<bibliography:Publisher>" << (*iter)->get_s_Publisher().toString() << "</bibliography:Publisher>";
            }
            else if ((*iter)->has_s_RecordingNumber())
            {
                _outStream << "<bibliography:RecordingNumber>" << (*iter)->get_s_RecordingNumber().toString() << "</bibliography:RecordingNumber>";
            }
            else if ((*iter)->has_s_RefOrder())
            {
                _outStream << "<bibliography:RefOrder>" << (*iter)->get_s_RefOrder().toString() << "</bibliography:RefOrder>";
            }
            else if ((*iter)->has_s_Reporter())
            {
                _outStream << "<bibliography:Reporter>" << (*iter)->get_s_Reporter().toString() << "</bibliography:Reporter>";
            }
            else if ((*iter)->has_SourceType())
            {
                _outStream << "<bibliography:SourceType>" << (*iter)->get_SourceType().toString() << "</bibliography:SourceType>";
            }
            else if ((*iter)->has_s_ShortTitle())
            {
                _outStream << "<bibliography:ShortTitle>" << (*iter)->get_s_ShortTitle().toString() << "</bibliography:ShortTitle>";
            }
            else if ((*iter)->has_s_StandardNumber())
            {
                _outStream << "<bibliography:StandardNumber>" << (*iter)->get_s_StandardNumber().toString() << "</bibliography:StandardNumber>";
            }
            else if ((*iter)->has_s_StateProvince())
            {
                _outStream << "<bibliography:StateProvince>" << (*iter)->get_s_StateProvince().toString() << "</bibliography:StateProvince>";
            }
            else if ((*iter)->has_s_Station())
            {
                _outStream << "<bibliography:Station>" << (*iter)->get_s_Station().toString() << "</bibliography:Station>";
            }
            else if ((*iter)->has_s_Tag())
            {
                _outStream << "<bibliography:Tag>" << (*iter)->get_s_Tag().toString() << "</bibliography:Tag>";
            }
            else if ((*iter)->has_s_Theater())
            {
                _outStream << "<bibliography:Theater>" << (*iter)->get_s_Theater().toString() << "</bibliography:Theater>";
            }
            else if ((*iter)->has_s_ThesisType())
            {
                _outStream << "<bibliography:ThesisType>" << (*iter)->get_s_ThesisType().toString() << "</bibliography:ThesisType>";
            }
            else if ((*iter)->has_s_Title())
            {
                _outStream << "<bibliography:Title>" << (*iter)->get_s_Title().toString() << "</bibliography:Title>";
            }
            else if ((*iter)->has_s_Type())
            {
                _outStream << "<bibliography:Type>" << (*iter)->get_s_Type().toString() << "</bibliography:Type>";
            }
            else if ((*iter)->has_s_URL())
            {
                _outStream << "<bibliography:URL>" << (*iter)->get_s_URL().toString() << "</bibliography:URL>";
            }
            else if ((*iter)->has_s_Version())
            {
                _outStream << "<bibliography:Version>" << (*iter)->get_s_Version().toString() << "</bibliography:Version>";
            }
            else if ((*iter)->has_s_Volume())
            {
                _outStream << "<bibliography:Volume>" << (*iter)->get_s_Volume().toString() << "</bibliography:Volume>";
            }
            else if ((*iter)->has_s_Year())
            {
                _outStream << "<bibliography:Year>" << (*iter)->get_s_Year().toString() << "</bibliography:Year>";
            }
            else if ((*iter)->has_s_YearAccessed())
            {
                _outStream << "<bibliography:YearAccessed>" << (*iter)->get_s_YearAccessed().toString() << "</bibliography:YearAccessed>";
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_SourceType& CT_SourceType::default_instance()
    {    
    if (!CT_SourceType::default_instance_)
    {
        CT_SourceType::default_instance_ = new CT_SourceType();
    }
    return *CT_SourceType::default_instance_;
    }


    // CT_Sources
    CT_SourceType* CT_Sources::add_Source()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SourceType* pNewChild = pChildGroup->mutable_Source();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void CT_Sources::clear()
    {    
    m_has_s_SelectedStyle_attr = false;
    
    if (m_s_SelectedStyle_attr)
    {
        delete m_s_SelectedStyle_attr;
        m_s_SelectedStyle_attr = NULL;
    }
    
    
    m_has_s_StyleName_attr = false;
    
    if (m_s_StyleName_attr)
    {
        delete m_s_StyleName_attr;
        m_s_StyleName_attr = NULL;
    }
    
    
    m_has_s_URI_attr = false;
    
    if (m_s_URI_attr)
    {
        delete m_s_URI_attr;
        m_s_URI_attr = NULL;
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

    void CT_Sources::toXmlElem(const std::string& _elemName, const std::string& _xmlNsStr, std::ostream& _outStream) const
    {    
            _outStream << "<" << _elemName;
            
            if (!_xmlNsStr.empty())
            {
                _outStream << _xmlNsStr;
            }
            
    if (m_has_s_SelectedStyle_attr)
    {
        m_s_SelectedStyle_attr->toXmlAttr("SelectedStyle", _outStream);
    }
    
    
    if (m_has_s_StyleName_attr)
    {
        m_s_StyleName_attr->toXmlAttr("StyleName", _outStream);
    }
    
    
    if (m_has_s_URI_attr)
    {
        m_s_URI_attr->toXmlAttr("URI", _outStream);
    }
    
            _outStream << ">";
            
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_Source())
            {
                (*iter)->get_Source().toXmlElem("bibliography:Source", "", _outStream);
            }
        }
    }
    
            _outStream << "</" << _elemName << ">";
                }

    const CT_Sources& CT_Sources::default_instance()
    {    
    if (!CT_Sources::default_instance_)
    {
        CT_Sources::default_instance_ = new CT_Sources();
    }
    return *CT_Sources::default_instance_;
    }

    bool CT_Sources::has_s_SelectedStyle_attr() const
    {    
    return m_has_s_SelectedStyle_attr;
    }

    void CT_Sources::set_s_SelectedStyle_attr(const ns_s::ST_String& _s_SelectedStyle_attr)
    {    
    m_has_s_SelectedStyle_attr = true;
    m_s_SelectedStyle_attr = new ns_s::ST_String(_s_SelectedStyle_attr);
    }

    const ns_s::ST_String& CT_Sources::get_s_SelectedStyle_attr() const
    {    
    if (m_s_SelectedStyle_attr)
    {
        return *m_s_SelectedStyle_attr;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_Sources::has_s_StyleName_attr() const
    {    
    return m_has_s_StyleName_attr;
    }

    void CT_Sources::set_s_StyleName_attr(const ns_s::ST_String& _s_StyleName_attr)
    {    
    m_has_s_StyleName_attr = true;
    m_s_StyleName_attr = new ns_s::ST_String(_s_StyleName_attr);
    }

    const ns_s::ST_String& CT_Sources::get_s_StyleName_attr() const
    {    
    if (m_s_StyleName_attr)
    {
        return *m_s_StyleName_attr;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_Sources::has_s_URI_attr() const
    {    
    return m_has_s_URI_attr;
    }

    void CT_Sources::set_s_URI_attr(const ns_s::ST_String& _s_URI_attr)
    {    
    m_has_s_URI_attr = true;
    m_s_URI_attr = new ns_s::ST_String(_s_URI_attr);
    }

    const ns_s::ST_String& CT_Sources::get_s_URI_attr() const
    {    
    if (m_s_URI_attr)
    {
        return *m_s_URI_attr;
    }
    return ns_s::ST_String::default_instance();
    }


    // Sources_element
    CT_SourceType* Sources_element::add_Source()
    {    
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SourceType* pNewChild = pChildGroup->mutable_Source();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
    }

    void Sources_element::clear()
    {    
    m_has_s_SelectedStyle_attr = false;
    
    if (m_s_SelectedStyle_attr)
    {
        delete m_s_SelectedStyle_attr;
        m_s_SelectedStyle_attr = NULL;
    }
    
    
    m_has_s_StyleName_attr = false;
    
    if (m_s_StyleName_attr)
    {
        delete m_s_StyleName_attr;
        m_s_StyleName_attr = NULL;
    }
    
    
    m_has_s_URI_attr = false;
    
    if (m_s_URI_attr)
    {
        delete m_s_URI_attr;
        m_s_URI_attr = NULL;
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

    void Sources_element::toXml(std::ostream& _outStream) const
    {    
    _outStream << "<bibliography:Sources";
    
    _outStream << " " << "xmlns:bibliography=\"http://schemas.openxmlformats.org/officeDocument/2006/bibliography\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";
    
    if (m_has_s_SelectedStyle_attr)
    {
        m_s_SelectedStyle_attr->toXmlAttr("SelectedStyle", _outStream);
    }
    
    
    if (m_has_s_StyleName_attr)
    {
        m_s_StyleName_attr->toXmlAttr("StyleName", _outStream);
    }
    
    
    if (m_has_s_URI_attr)
    {
        m_s_URI_attr->toXmlAttr("URI", _outStream);
    }
    
    _outStream << ">";
    
    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_Source())
            {
                (*iter)->get_Source().toXmlElem("bibliography:Source", "", _outStream);
            }
        }
    }
    
    _outStream << "</bibliography:Sources>";
    }

    const Sources_element& Sources_element::default_instance()
    {    
    if (!Sources_element::default_instance_)
    {
        Sources_element::default_instance_ = new Sources_element();
    }
    return *Sources_element::default_instance_;
    }

    bool Sources_element::has_s_SelectedStyle_attr() const
    {    
    return m_has_s_SelectedStyle_attr;
    }

    void Sources_element::set_s_SelectedStyle_attr(const ns_s::ST_String& _s_SelectedStyle_attr)
    {    
    m_has_s_SelectedStyle_attr = true;
    m_s_SelectedStyle_attr = new ns_s::ST_String(_s_SelectedStyle_attr);
    }

    const ns_s::ST_String& Sources_element::get_s_SelectedStyle_attr() const
    {    
    if (m_s_SelectedStyle_attr)
    {
        return *m_s_SelectedStyle_attr;
    }
    return ns_s::ST_String::default_instance();
    }

    bool Sources_element::has_s_StyleName_attr() const
    {    
    return m_has_s_StyleName_attr;
    }

    void Sources_element::set_s_StyleName_attr(const ns_s::ST_String& _s_StyleName_attr)
    {    
    m_has_s_StyleName_attr = true;
    m_s_StyleName_attr = new ns_s::ST_String(_s_StyleName_attr);
    }

    const ns_s::ST_String& Sources_element::get_s_StyleName_attr() const
    {    
    if (m_s_StyleName_attr)
    {
        return *m_s_StyleName_attr;
    }
    return ns_s::ST_String::default_instance();
    }

    bool Sources_element::has_s_URI_attr() const
    {    
    return m_has_s_URI_attr;
    }

    void Sources_element::set_s_URI_attr(const ns_s::ST_String& _s_URI_attr)
    {    
    m_has_s_URI_attr = true;
    m_s_URI_attr = new ns_s::ST_String(_s_URI_attr);
    }

    const ns_s::ST_String& Sources_element::get_s_URI_attr() const
    {    
    if (m_s_URI_attr)
    {
        return *m_s_URI_attr;
    }
    return ns_s::ST_String::default_instance();
    }

}