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
    const ST_SourceType& ST_SourceType::default_instance()
    {    
    if (!ST_SourceType::default_instance_)
    {
        ST_SourceType::default_instance_ = new ST_SourceType();
    }
    return *ST_SourceType::default_instance_;
    }

ST_SourceType* ST_SourceType::default_instance_ = NULL;

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
                (*iter)->get_Person().toXmlElem("Person", "", _outStream);
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


    // CT_NameListType::ChildGroup_1
    bool CT_NameListType::ChildGroup_1::has_Person() const
    {    
    return m_has_Person;
    }

    CT_PersonType* CT_NameListType::ChildGroup_1::mutable_Person()
    {    
    
    m_has_Person = true;
    if (!m_Person)
    {
        m_Person = new CT_PersonType();
    }
    return m_Person;
    }

    const CT_PersonType& CT_NameListType::ChildGroup_1::get_Person() const
    {    
    if (m_Person)
    {
        return *m_Person;
    }
    return CT_PersonType::default_instance();
    }

CT_NameListType* CT_NameListType::default_instance_ = NULL;

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
                _outStream << "<s:Last>" << (*iter)->get_s_Last().toString() << "</s:Last>";
            }
            else if ((*iter)->has_s_First())
            {
                _outStream << "<s:First>" << (*iter)->get_s_First().toString() << "</s:First>";
            }
            else if ((*iter)->has_s_Middle())
            {
                _outStream << "<s:Middle>" << (*iter)->get_s_Middle().toString() << "</s:Middle>";
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


    // CT_PersonType::ChildGroup_1
    bool CT_PersonType::ChildGroup_1::has_s_Last() const
    {    
    return m_has_s_Last;
    }

    ns_s::ST_String* CT_PersonType::ChildGroup_1::mutable_s_Last()
    {    
    
    m_has_s_First = false;
    
    if (m_s_First)
    {
        delete m_s_First;
        m_s_First = NULL;
    }
    ;
    
    m_has_s_Middle = false;
    
    if (m_s_Middle)
    {
        delete m_s_Middle;
        m_s_Middle = NULL;
    }
    ;
    
    m_has_s_Last = true;
    if (!m_s_Last)
    {
        m_s_Last = new ns_s::ST_String();
    }
    return m_s_Last;
    }

    const ns_s::ST_String& CT_PersonType::ChildGroup_1::get_s_Last() const
    {    
    if (m_s_Last)
    {
        return *m_s_Last;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_PersonType::ChildGroup_1::has_s_First() const
    {    
    return m_has_s_First;
    }

    ns_s::ST_String* CT_PersonType::ChildGroup_1::mutable_s_First()
    {    
    
    m_has_s_Last = false;
    
    if (m_s_Last)
    {
        delete m_s_Last;
        m_s_Last = NULL;
    }
    ;
    
    m_has_s_Middle = false;
    
    if (m_s_Middle)
    {
        delete m_s_Middle;
        m_s_Middle = NULL;
    }
    ;
    
    m_has_s_First = true;
    if (!m_s_First)
    {
        m_s_First = new ns_s::ST_String();
    }
    return m_s_First;
    }

    const ns_s::ST_String& CT_PersonType::ChildGroup_1::get_s_First() const
    {    
    if (m_s_First)
    {
        return *m_s_First;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_PersonType::ChildGroup_1::has_s_Middle() const
    {    
    return m_has_s_Middle;
    }

    ns_s::ST_String* CT_PersonType::ChildGroup_1::mutable_s_Middle()
    {    
    
    m_has_s_Last = false;
    
    if (m_s_Last)
    {
        delete m_s_Last;
        m_s_Last = NULL;
    }
    ;
    
    m_has_s_First = false;
    
    if (m_s_First)
    {
        delete m_s_First;
        m_s_First = NULL;
    }
    ;
    
    m_has_s_Middle = true;
    if (!m_s_Middle)
    {
        m_s_Middle = new ns_s::ST_String();
    }
    return m_s_Middle;
    }

    const ns_s::ST_String& CT_PersonType::ChildGroup_1::get_s_Middle() const
    {    
    if (m_s_Middle)
    {
        return *m_s_Middle;
    }
    return ns_s::ST_String::default_instance();
    }

CT_PersonType* CT_PersonType::default_instance_ = NULL;

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
    {    }

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
        m_NameList->toXmlElem("NameList", "", _outStream);;
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

CT_NameType* CT_NameType::default_instance_ = NULL;

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
    {    }

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
        m_NameList->toXmlElem("NameList", "", _outStream);;
    }
    
    if (m_has_s_Corporate)
    {
        _outStream << "<s:Corporate>" << m_s_Corporate->toString() << "</s:Corporate>";;
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

CT_NameOrCorporateType* CT_NameOrCorporateType::default_instance_ = NULL;

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
                (*iter)->get_Artist().toXmlElem("Artist", "", _outStream);
            }
            else if ((*iter)->has_Author())
            {
                (*iter)->get_Author().toXmlElem("Author", "", _outStream);
            }
            else if ((*iter)->has_BookAuthor())
            {
                (*iter)->get_BookAuthor().toXmlElem("BookAuthor", "", _outStream);
            }
            else if ((*iter)->has_Compiler())
            {
                (*iter)->get_Compiler().toXmlElem("Compiler", "", _outStream);
            }
            else if ((*iter)->has_Composer())
            {
                (*iter)->get_Composer().toXmlElem("Composer", "", _outStream);
            }
            else if ((*iter)->has_Conductor())
            {
                (*iter)->get_Conductor().toXmlElem("Conductor", "", _outStream);
            }
            else if ((*iter)->has_Counsel())
            {
                (*iter)->get_Counsel().toXmlElem("Counsel", "", _outStream);
            }
            else if ((*iter)->has_Director())
            {
                (*iter)->get_Director().toXmlElem("Director", "", _outStream);
            }
            else if ((*iter)->has_Editor())
            {
                (*iter)->get_Editor().toXmlElem("Editor", "", _outStream);
            }
            else if ((*iter)->has_Interviewee())
            {
                (*iter)->get_Interviewee().toXmlElem("Interviewee", "", _outStream);
            }
            else if ((*iter)->has_Interviewer())
            {
                (*iter)->get_Interviewer().toXmlElem("Interviewer", "", _outStream);
            }
            else if ((*iter)->has_Inventor())
            {
                (*iter)->get_Inventor().toXmlElem("Inventor", "", _outStream);
            }
            else if ((*iter)->has_Performer())
            {
                (*iter)->get_Performer().toXmlElem("Performer", "", _outStream);
            }
            else if ((*iter)->has_ProducerName())
            {
                (*iter)->get_ProducerName().toXmlElem("ProducerName", "", _outStream);
            }
            else if ((*iter)->has_Translator())
            {
                (*iter)->get_Translator().toXmlElem("Translator", "", _outStream);
            }
            else if ((*iter)->has_Writer())
            {
                (*iter)->get_Writer().toXmlElem("Writer", "", _outStream);
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


    // CT_AuthorType::ChildGroup_1
    bool CT_AuthorType::ChildGroup_1::has_Artist() const
    {    
    return m_has_Artist;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Artist()
    {    
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Artist = true;
    if (!m_Artist)
    {
        m_Artist = new CT_NameType();
    }
    return m_Artist;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Artist() const
    {    
    if (m_Artist)
    {
        return *m_Artist;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Author() const
    {    
    return m_has_Author;
    }

    CT_NameOrCorporateType* CT_AuthorType::ChildGroup_1::mutable_Author()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Author = true;
    if (!m_Author)
    {
        m_Author = new CT_NameOrCorporateType();
    }
    return m_Author;
    }

    const CT_NameOrCorporateType& CT_AuthorType::ChildGroup_1::get_Author() const
    {    
    if (m_Author)
    {
        return *m_Author;
    }
    return CT_NameOrCorporateType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_BookAuthor() const
    {    
    return m_has_BookAuthor;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_BookAuthor()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_BookAuthor = true;
    if (!m_BookAuthor)
    {
        m_BookAuthor = new CT_NameType();
    }
    return m_BookAuthor;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_BookAuthor() const
    {    
    if (m_BookAuthor)
    {
        return *m_BookAuthor;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Compiler() const
    {    
    return m_has_Compiler;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Compiler()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Compiler = true;
    if (!m_Compiler)
    {
        m_Compiler = new CT_NameType();
    }
    return m_Compiler;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Compiler() const
    {    
    if (m_Compiler)
    {
        return *m_Compiler;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Composer() const
    {    
    return m_has_Composer;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Composer()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Composer = true;
    if (!m_Composer)
    {
        m_Composer = new CT_NameType();
    }
    return m_Composer;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Composer() const
    {    
    if (m_Composer)
    {
        return *m_Composer;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Conductor() const
    {    
    return m_has_Conductor;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Conductor()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Conductor = true;
    if (!m_Conductor)
    {
        m_Conductor = new CT_NameType();
    }
    return m_Conductor;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Conductor() const
    {    
    if (m_Conductor)
    {
        return *m_Conductor;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Counsel() const
    {    
    return m_has_Counsel;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Counsel()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Counsel = true;
    if (!m_Counsel)
    {
        m_Counsel = new CT_NameType();
    }
    return m_Counsel;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Counsel() const
    {    
    if (m_Counsel)
    {
        return *m_Counsel;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Director() const
    {    
    return m_has_Director;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Director()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Director = true;
    if (!m_Director)
    {
        m_Director = new CT_NameType();
    }
    return m_Director;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Director() const
    {    
    if (m_Director)
    {
        return *m_Director;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Editor() const
    {    
    return m_has_Editor;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Editor()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Editor = true;
    if (!m_Editor)
    {
        m_Editor = new CT_NameType();
    }
    return m_Editor;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Editor() const
    {    
    if (m_Editor)
    {
        return *m_Editor;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Interviewee() const
    {    
    return m_has_Interviewee;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Interviewee()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Interviewee = true;
    if (!m_Interviewee)
    {
        m_Interviewee = new CT_NameType();
    }
    return m_Interviewee;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Interviewee() const
    {    
    if (m_Interviewee)
    {
        return *m_Interviewee;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Interviewer() const
    {    
    return m_has_Interviewer;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Interviewer()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Interviewer = true;
    if (!m_Interviewer)
    {
        m_Interviewer = new CT_NameType();
    }
    return m_Interviewer;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Interviewer() const
    {    
    if (m_Interviewer)
    {
        return *m_Interviewer;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Inventor() const
    {    
    return m_has_Inventor;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Inventor()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Inventor = true;
    if (!m_Inventor)
    {
        m_Inventor = new CT_NameType();
    }
    return m_Inventor;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Inventor() const
    {    
    if (m_Inventor)
    {
        return *m_Inventor;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Performer() const
    {    
    return m_has_Performer;
    }

    CT_NameOrCorporateType* CT_AuthorType::ChildGroup_1::mutable_Performer()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Performer = true;
    if (!m_Performer)
    {
        m_Performer = new CT_NameOrCorporateType();
    }
    return m_Performer;
    }

    const CT_NameOrCorporateType& CT_AuthorType::ChildGroup_1::get_Performer() const
    {    
    if (m_Performer)
    {
        return *m_Performer;
    }
    return CT_NameOrCorporateType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_ProducerName() const
    {    
    return m_has_ProducerName;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_ProducerName()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_ProducerName = true;
    if (!m_ProducerName)
    {
        m_ProducerName = new CT_NameType();
    }
    return m_ProducerName;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_ProducerName() const
    {    
    if (m_ProducerName)
    {
        return *m_ProducerName;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Translator() const
    {    
    return m_has_Translator;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Translator()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Writer = false;
    
    if (m_Writer)
    {
        delete m_Writer;
        m_Writer = NULL;
    }
    ;
    
    m_has_Translator = true;
    if (!m_Translator)
    {
        m_Translator = new CT_NameType();
    }
    return m_Translator;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Translator() const
    {    
    if (m_Translator)
    {
        return *m_Translator;
    }
    return CT_NameType::default_instance();
    }

    bool CT_AuthorType::ChildGroup_1::has_Writer() const
    {    
    return m_has_Writer;
    }

    CT_NameType* CT_AuthorType::ChildGroup_1::mutable_Writer()
    {    
    
    m_has_Artist = false;
    
    if (m_Artist)
    {
        delete m_Artist;
        m_Artist = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_BookAuthor = false;
    
    if (m_BookAuthor)
    {
        delete m_BookAuthor;
        m_BookAuthor = NULL;
    }
    ;
    
    m_has_Compiler = false;
    
    if (m_Compiler)
    {
        delete m_Compiler;
        m_Compiler = NULL;
    }
    ;
    
    m_has_Composer = false;
    
    if (m_Composer)
    {
        delete m_Composer;
        m_Composer = NULL;
    }
    ;
    
    m_has_Conductor = false;
    
    if (m_Conductor)
    {
        delete m_Conductor;
        m_Conductor = NULL;
    }
    ;
    
    m_has_Counsel = false;
    
    if (m_Counsel)
    {
        delete m_Counsel;
        m_Counsel = NULL;
    }
    ;
    
    m_has_Director = false;
    
    if (m_Director)
    {
        delete m_Director;
        m_Director = NULL;
    }
    ;
    
    m_has_Editor = false;
    
    if (m_Editor)
    {
        delete m_Editor;
        m_Editor = NULL;
    }
    ;
    
    m_has_Interviewee = false;
    
    if (m_Interviewee)
    {
        delete m_Interviewee;
        m_Interviewee = NULL;
    }
    ;
    
    m_has_Interviewer = false;
    
    if (m_Interviewer)
    {
        delete m_Interviewer;
        m_Interviewer = NULL;
    }
    ;
    
    m_has_Inventor = false;
    
    if (m_Inventor)
    {
        delete m_Inventor;
        m_Inventor = NULL;
    }
    ;
    
    m_has_Performer = false;
    
    if (m_Performer)
    {
        delete m_Performer;
        m_Performer = NULL;
    }
    ;
    
    m_has_ProducerName = false;
    
    if (m_ProducerName)
    {
        delete m_ProducerName;
        m_ProducerName = NULL;
    }
    ;
    
    m_has_Translator = false;
    
    if (m_Translator)
    {
        delete m_Translator;
        m_Translator = NULL;
    }
    ;
    
    m_has_Writer = true;
    if (!m_Writer)
    {
        m_Writer = new CT_NameType();
    }
    return m_Writer;
    }

    const CT_NameType& CT_AuthorType::ChildGroup_1::get_Writer() const
    {    
    if (m_Writer)
    {
        return *m_Writer;
    }
    return CT_NameType::default_instance();
    }

CT_AuthorType* CT_AuthorType::default_instance_ = NULL;

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
                _outStream << "<s:AbbreviatedCaseNumber>" << (*iter)->get_s_AbbreviatedCaseNumber().toString() << "</s:AbbreviatedCaseNumber>";
            }
            else if ((*iter)->has_s_AlbumTitle())
            {
                _outStream << "<s:AlbumTitle>" << (*iter)->get_s_AlbumTitle().toString() << "</s:AlbumTitle>";
            }
            else if ((*iter)->has_Author())
            {
                (*iter)->get_Author().toXmlElem("Author", "", _outStream);
            }
            else if ((*iter)->has_s_BookTitle())
            {
                _outStream << "<s:BookTitle>" << (*iter)->get_s_BookTitle().toString() << "</s:BookTitle>";
            }
            else if ((*iter)->has_s_Broadcaster())
            {
                _outStream << "<s:Broadcaster>" << (*iter)->get_s_Broadcaster().toString() << "</s:Broadcaster>";
            }
            else if ((*iter)->has_s_BroadcastTitle())
            {
                _outStream << "<s:BroadcastTitle>" << (*iter)->get_s_BroadcastTitle().toString() << "</s:BroadcastTitle>";
            }
            else if ((*iter)->has_s_CaseNumber())
            {
                _outStream << "<s:CaseNumber>" << (*iter)->get_s_CaseNumber().toString() << "</s:CaseNumber>";
            }
            else if ((*iter)->has_s_ChapterNumber())
            {
                _outStream << "<s:ChapterNumber>" << (*iter)->get_s_ChapterNumber().toString() << "</s:ChapterNumber>";
            }
            else if ((*iter)->has_s_City())
            {
                _outStream << "<s:City>" << (*iter)->get_s_City().toString() << "</s:City>";
            }
            else if ((*iter)->has_s_Comments())
            {
                _outStream << "<s:Comments>" << (*iter)->get_s_Comments().toString() << "</s:Comments>";
            }
            else if ((*iter)->has_s_ConferenceName())
            {
                _outStream << "<s:ConferenceName>" << (*iter)->get_s_ConferenceName().toString() << "</s:ConferenceName>";
            }
            else if ((*iter)->has_s_CountryRegion())
            {
                _outStream << "<s:CountryRegion>" << (*iter)->get_s_CountryRegion().toString() << "</s:CountryRegion>";
            }
            else if ((*iter)->has_s_Court())
            {
                _outStream << "<s:Court>" << (*iter)->get_s_Court().toString() << "</s:Court>";
            }
            else if ((*iter)->has_s_Day())
            {
                _outStream << "<s:Day>" << (*iter)->get_s_Day().toString() << "</s:Day>";
            }
            else if ((*iter)->has_s_DayAccessed())
            {
                _outStream << "<s:DayAccessed>" << (*iter)->get_s_DayAccessed().toString() << "</s:DayAccessed>";
            }
            else if ((*iter)->has_s_Department())
            {
                _outStream << "<s:Department>" << (*iter)->get_s_Department().toString() << "</s:Department>";
            }
            else if ((*iter)->has_s_Distributor())
            {
                _outStream << "<s:Distributor>" << (*iter)->get_s_Distributor().toString() << "</s:Distributor>";
            }
            else if ((*iter)->has_s_Edition())
            {
                _outStream << "<s:Edition>" << (*iter)->get_s_Edition().toString() << "</s:Edition>";
            }
            else if ((*iter)->has_s_Guid())
            {
                _outStream << "<s:Guid>" << (*iter)->get_s_Guid().toString() << "</s:Guid>";
            }
            else if ((*iter)->has_s_Institution())
            {
                _outStream << "<s:Institution>" << (*iter)->get_s_Institution().toString() << "</s:Institution>";
            }
            else if ((*iter)->has_s_InternetSiteTitle())
            {
                _outStream << "<s:InternetSiteTitle>" << (*iter)->get_s_InternetSiteTitle().toString() << "</s:InternetSiteTitle>";
            }
            else if ((*iter)->has_s_Issue())
            {
                _outStream << "<s:Issue>" << (*iter)->get_s_Issue().toString() << "</s:Issue>";
            }
            else if ((*iter)->has_s_JournalName())
            {
                _outStream << "<s:JournalName>" << (*iter)->get_s_JournalName().toString() << "</s:JournalName>";
            }
            else if ((*iter)->has_s_LCID())
            {
                _outStream << "<s:LCID>" << (*iter)->get_s_LCID().toString() << "</s:LCID>";
            }
            else if ((*iter)->has_s_Medium())
            {
                _outStream << "<s:Medium>" << (*iter)->get_s_Medium().toString() << "</s:Medium>";
            }
            else if ((*iter)->has_s_Month())
            {
                _outStream << "<s:Month>" << (*iter)->get_s_Month().toString() << "</s:Month>";
            }
            else if ((*iter)->has_s_MonthAccessed())
            {
                _outStream << "<s:MonthAccessed>" << (*iter)->get_s_MonthAccessed().toString() << "</s:MonthAccessed>";
            }
            else if ((*iter)->has_s_NumberVolumes())
            {
                _outStream << "<s:NumberVolumes>" << (*iter)->get_s_NumberVolumes().toString() << "</s:NumberVolumes>";
            }
            else if ((*iter)->has_s_Pages())
            {
                _outStream << "<s:Pages>" << (*iter)->get_s_Pages().toString() << "</s:Pages>";
            }
            else if ((*iter)->has_s_PatentNumber())
            {
                _outStream << "<s:PatentNumber>" << (*iter)->get_s_PatentNumber().toString() << "</s:PatentNumber>";
            }
            else if ((*iter)->has_s_PeriodicalTitle())
            {
                _outStream << "<s:PeriodicalTitle>" << (*iter)->get_s_PeriodicalTitle().toString() << "</s:PeriodicalTitle>";
            }
            else if ((*iter)->has_s_ProductionCompany())
            {
                _outStream << "<s:ProductionCompany>" << (*iter)->get_s_ProductionCompany().toString() << "</s:ProductionCompany>";
            }
            else if ((*iter)->has_s_PublicationTitle())
            {
                _outStream << "<s:PublicationTitle>" << (*iter)->get_s_PublicationTitle().toString() << "</s:PublicationTitle>";
            }
            else if ((*iter)->has_s_Publisher())
            {
                _outStream << "<s:Publisher>" << (*iter)->get_s_Publisher().toString() << "</s:Publisher>";
            }
            else if ((*iter)->has_s_RecordingNumber())
            {
                _outStream << "<s:RecordingNumber>" << (*iter)->get_s_RecordingNumber().toString() << "</s:RecordingNumber>";
            }
            else if ((*iter)->has_s_RefOrder())
            {
                _outStream << "<s:RefOrder>" << (*iter)->get_s_RefOrder().toString() << "</s:RefOrder>";
            }
            else if ((*iter)->has_s_Reporter())
            {
                _outStream << "<s:Reporter>" << (*iter)->get_s_Reporter().toString() << "</s:Reporter>";
            }
            else if ((*iter)->has_SourceType())
            {
                _outStream << "<SourceType>" << (*iter)->get_SourceType().toString() << "</SourceType>";
            }
            else if ((*iter)->has_s_ShortTitle())
            {
                _outStream << "<s:ShortTitle>" << (*iter)->get_s_ShortTitle().toString() << "</s:ShortTitle>";
            }
            else if ((*iter)->has_s_StandardNumber())
            {
                _outStream << "<s:StandardNumber>" << (*iter)->get_s_StandardNumber().toString() << "</s:StandardNumber>";
            }
            else if ((*iter)->has_s_StateProvince())
            {
                _outStream << "<s:StateProvince>" << (*iter)->get_s_StateProvince().toString() << "</s:StateProvince>";
            }
            else if ((*iter)->has_s_Station())
            {
                _outStream << "<s:Station>" << (*iter)->get_s_Station().toString() << "</s:Station>";
            }
            else if ((*iter)->has_s_Tag())
            {
                _outStream << "<s:Tag>" << (*iter)->get_s_Tag().toString() << "</s:Tag>";
            }
            else if ((*iter)->has_s_Theater())
            {
                _outStream << "<s:Theater>" << (*iter)->get_s_Theater().toString() << "</s:Theater>";
            }
            else if ((*iter)->has_s_ThesisType())
            {
                _outStream << "<s:ThesisType>" << (*iter)->get_s_ThesisType().toString() << "</s:ThesisType>";
            }
            else if ((*iter)->has_s_Title())
            {
                _outStream << "<s:Title>" << (*iter)->get_s_Title().toString() << "</s:Title>";
            }
            else if ((*iter)->has_s_Type())
            {
                _outStream << "<s:Type>" << (*iter)->get_s_Type().toString() << "</s:Type>";
            }
            else if ((*iter)->has_s_URL())
            {
                _outStream << "<s:URL>" << (*iter)->get_s_URL().toString() << "</s:URL>";
            }
            else if ((*iter)->has_s_Version())
            {
                _outStream << "<s:Version>" << (*iter)->get_s_Version().toString() << "</s:Version>";
            }
            else if ((*iter)->has_s_Volume())
            {
                _outStream << "<s:Volume>" << (*iter)->get_s_Volume().toString() << "</s:Volume>";
            }
            else if ((*iter)->has_s_Year())
            {
                _outStream << "<s:Year>" << (*iter)->get_s_Year().toString() << "</s:Year>";
            }
            else if ((*iter)->has_s_YearAccessed())
            {
                _outStream << "<s:YearAccessed>" << (*iter)->get_s_YearAccessed().toString() << "</s:YearAccessed>";
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


    // CT_SourceType::ChildGroup_1
    bool CT_SourceType::ChildGroup_1::has_s_AbbreviatedCaseNumber() const
    {    
    return m_has_s_AbbreviatedCaseNumber;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_AbbreviatedCaseNumber()
    {    
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_AbbreviatedCaseNumber = true;
    if (!m_s_AbbreviatedCaseNumber)
    {
        m_s_AbbreviatedCaseNumber = new ns_s::ST_String();
    }
    return m_s_AbbreviatedCaseNumber;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_AbbreviatedCaseNumber() const
    {    
    if (m_s_AbbreviatedCaseNumber)
    {
        return *m_s_AbbreviatedCaseNumber;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_AlbumTitle() const
    {    
    return m_has_s_AlbumTitle;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_AlbumTitle()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = true;
    if (!m_s_AlbumTitle)
    {
        m_s_AlbumTitle = new ns_s::ST_String();
    }
    return m_s_AlbumTitle;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_AlbumTitle() const
    {    
    if (m_s_AlbumTitle)
    {
        return *m_s_AlbumTitle;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_Author() const
    {    
    return m_has_Author;
    }

    CT_AuthorType* CT_SourceType::ChildGroup_1::mutable_Author()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_Author = true;
    if (!m_Author)
    {
        m_Author = new CT_AuthorType();
    }
    return m_Author;
    }

    const CT_AuthorType& CT_SourceType::ChildGroup_1::get_Author() const
    {    
    if (m_Author)
    {
        return *m_Author;
    }
    return CT_AuthorType::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_BookTitle() const
    {    
    return m_has_s_BookTitle;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_BookTitle()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_BookTitle = true;
    if (!m_s_BookTitle)
    {
        m_s_BookTitle = new ns_s::ST_String();
    }
    return m_s_BookTitle;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_BookTitle() const
    {    
    if (m_s_BookTitle)
    {
        return *m_s_BookTitle;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Broadcaster() const
    {    
    return m_has_s_Broadcaster;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Broadcaster()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Broadcaster = true;
    if (!m_s_Broadcaster)
    {
        m_s_Broadcaster = new ns_s::ST_String();
    }
    return m_s_Broadcaster;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Broadcaster() const
    {    
    if (m_s_Broadcaster)
    {
        return *m_s_Broadcaster;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_BroadcastTitle() const
    {    
    return m_has_s_BroadcastTitle;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_BroadcastTitle()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = true;
    if (!m_s_BroadcastTitle)
    {
        m_s_BroadcastTitle = new ns_s::ST_String();
    }
    return m_s_BroadcastTitle;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_BroadcastTitle() const
    {    
    if (m_s_BroadcastTitle)
    {
        return *m_s_BroadcastTitle;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_CaseNumber() const
    {    
    return m_has_s_CaseNumber;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_CaseNumber()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_CaseNumber = true;
    if (!m_s_CaseNumber)
    {
        m_s_CaseNumber = new ns_s::ST_String();
    }
    return m_s_CaseNumber;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_CaseNumber() const
    {    
    if (m_s_CaseNumber)
    {
        return *m_s_CaseNumber;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_ChapterNumber() const
    {    
    return m_has_s_ChapterNumber;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_ChapterNumber()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = true;
    if (!m_s_ChapterNumber)
    {
        m_s_ChapterNumber = new ns_s::ST_String();
    }
    return m_s_ChapterNumber;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_ChapterNumber() const
    {    
    if (m_s_ChapterNumber)
    {
        return *m_s_ChapterNumber;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_City() const
    {    
    return m_has_s_City;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_City()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_City = true;
    if (!m_s_City)
    {
        m_s_City = new ns_s::ST_String();
    }
    return m_s_City;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_City() const
    {    
    if (m_s_City)
    {
        return *m_s_City;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Comments() const
    {    
    return m_has_s_Comments;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Comments()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Comments = true;
    if (!m_s_Comments)
    {
        m_s_Comments = new ns_s::ST_String();
    }
    return m_s_Comments;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Comments() const
    {    
    if (m_s_Comments)
    {
        return *m_s_Comments;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_ConferenceName() const
    {    
    return m_has_s_ConferenceName;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_ConferenceName()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_ConferenceName = true;
    if (!m_s_ConferenceName)
    {
        m_s_ConferenceName = new ns_s::ST_String();
    }
    return m_s_ConferenceName;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_ConferenceName() const
    {    
    if (m_s_ConferenceName)
    {
        return *m_s_ConferenceName;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_CountryRegion() const
    {    
    return m_has_s_CountryRegion;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_CountryRegion()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_CountryRegion = true;
    if (!m_s_CountryRegion)
    {
        m_s_CountryRegion = new ns_s::ST_String();
    }
    return m_s_CountryRegion;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_CountryRegion() const
    {    
    if (m_s_CountryRegion)
    {
        return *m_s_CountryRegion;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Court() const
    {    
    return m_has_s_Court;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Court()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Court = true;
    if (!m_s_Court)
    {
        m_s_Court = new ns_s::ST_String();
    }
    return m_s_Court;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Court() const
    {    
    if (m_s_Court)
    {
        return *m_s_Court;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Day() const
    {    
    return m_has_s_Day;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Day()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Day = true;
    if (!m_s_Day)
    {
        m_s_Day = new ns_s::ST_String();
    }
    return m_s_Day;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Day() const
    {    
    if (m_s_Day)
    {
        return *m_s_Day;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_DayAccessed() const
    {    
    return m_has_s_DayAccessed;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_DayAccessed()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_DayAccessed = true;
    if (!m_s_DayAccessed)
    {
        m_s_DayAccessed = new ns_s::ST_String();
    }
    return m_s_DayAccessed;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_DayAccessed() const
    {    
    if (m_s_DayAccessed)
    {
        return *m_s_DayAccessed;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Department() const
    {    
    return m_has_s_Department;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Department()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Department = true;
    if (!m_s_Department)
    {
        m_s_Department = new ns_s::ST_String();
    }
    return m_s_Department;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Department() const
    {    
    if (m_s_Department)
    {
        return *m_s_Department;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Distributor() const
    {    
    return m_has_s_Distributor;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Distributor()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Distributor = true;
    if (!m_s_Distributor)
    {
        m_s_Distributor = new ns_s::ST_String();
    }
    return m_s_Distributor;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Distributor() const
    {    
    if (m_s_Distributor)
    {
        return *m_s_Distributor;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Edition() const
    {    
    return m_has_s_Edition;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Edition()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Edition = true;
    if (!m_s_Edition)
    {
        m_s_Edition = new ns_s::ST_String();
    }
    return m_s_Edition;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Edition() const
    {    
    if (m_s_Edition)
    {
        return *m_s_Edition;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Guid() const
    {    
    return m_has_s_Guid;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Guid()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Guid = true;
    if (!m_s_Guid)
    {
        m_s_Guid = new ns_s::ST_String();
    }
    return m_s_Guid;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Guid() const
    {    
    if (m_s_Guid)
    {
        return *m_s_Guid;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Institution() const
    {    
    return m_has_s_Institution;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Institution()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Institution = true;
    if (!m_s_Institution)
    {
        m_s_Institution = new ns_s::ST_String();
    }
    return m_s_Institution;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Institution() const
    {    
    if (m_s_Institution)
    {
        return *m_s_Institution;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_InternetSiteTitle() const
    {    
    return m_has_s_InternetSiteTitle;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_InternetSiteTitle()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = true;
    if (!m_s_InternetSiteTitle)
    {
        m_s_InternetSiteTitle = new ns_s::ST_String();
    }
    return m_s_InternetSiteTitle;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_InternetSiteTitle() const
    {    
    if (m_s_InternetSiteTitle)
    {
        return *m_s_InternetSiteTitle;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Issue() const
    {    
    return m_has_s_Issue;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Issue()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Issue = true;
    if (!m_s_Issue)
    {
        m_s_Issue = new ns_s::ST_String();
    }
    return m_s_Issue;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Issue() const
    {    
    if (m_s_Issue)
    {
        return *m_s_Issue;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_JournalName() const
    {    
    return m_has_s_JournalName;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_JournalName()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_JournalName = true;
    if (!m_s_JournalName)
    {
        m_s_JournalName = new ns_s::ST_String();
    }
    return m_s_JournalName;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_JournalName() const
    {    
    if (m_s_JournalName)
    {
        return *m_s_JournalName;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_LCID() const
    {    
    return m_has_s_LCID;
    }

    ns_s::ST_Lang* CT_SourceType::ChildGroup_1::mutable_s_LCID()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_LCID = true;
    if (!m_s_LCID)
    {
        m_s_LCID = new ns_s::ST_Lang();
    }
    return m_s_LCID;
    }

    const ns_s::ST_Lang& CT_SourceType::ChildGroup_1::get_s_LCID() const
    {    
    if (m_s_LCID)
    {
        return *m_s_LCID;
    }
    return ns_s::ST_Lang::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Medium() const
    {    
    return m_has_s_Medium;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Medium()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Medium = true;
    if (!m_s_Medium)
    {
        m_s_Medium = new ns_s::ST_String();
    }
    return m_s_Medium;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Medium() const
    {    
    if (m_s_Medium)
    {
        return *m_s_Medium;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Month() const
    {    
    return m_has_s_Month;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Month()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Month = true;
    if (!m_s_Month)
    {
        m_s_Month = new ns_s::ST_String();
    }
    return m_s_Month;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Month() const
    {    
    if (m_s_Month)
    {
        return *m_s_Month;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_MonthAccessed() const
    {    
    return m_has_s_MonthAccessed;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_MonthAccessed()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = true;
    if (!m_s_MonthAccessed)
    {
        m_s_MonthAccessed = new ns_s::ST_String();
    }
    return m_s_MonthAccessed;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_MonthAccessed() const
    {    
    if (m_s_MonthAccessed)
    {
        return *m_s_MonthAccessed;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_NumberVolumes() const
    {    
    return m_has_s_NumberVolumes;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_NumberVolumes()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = true;
    if (!m_s_NumberVolumes)
    {
        m_s_NumberVolumes = new ns_s::ST_String();
    }
    return m_s_NumberVolumes;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_NumberVolumes() const
    {    
    if (m_s_NumberVolumes)
    {
        return *m_s_NumberVolumes;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Pages() const
    {    
    return m_has_s_Pages;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Pages()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Pages = true;
    if (!m_s_Pages)
    {
        m_s_Pages = new ns_s::ST_String();
    }
    return m_s_Pages;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Pages() const
    {    
    if (m_s_Pages)
    {
        return *m_s_Pages;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_PatentNumber() const
    {    
    return m_has_s_PatentNumber;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_PatentNumber()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_PatentNumber = true;
    if (!m_s_PatentNumber)
    {
        m_s_PatentNumber = new ns_s::ST_String();
    }
    return m_s_PatentNumber;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_PatentNumber() const
    {    
    if (m_s_PatentNumber)
    {
        return *m_s_PatentNumber;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_PeriodicalTitle() const
    {    
    return m_has_s_PeriodicalTitle;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_PeriodicalTitle()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = true;
    if (!m_s_PeriodicalTitle)
    {
        m_s_PeriodicalTitle = new ns_s::ST_String();
    }
    return m_s_PeriodicalTitle;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_PeriodicalTitle() const
    {    
    if (m_s_PeriodicalTitle)
    {
        return *m_s_PeriodicalTitle;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_ProductionCompany() const
    {    
    return m_has_s_ProductionCompany;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_ProductionCompany()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = true;
    if (!m_s_ProductionCompany)
    {
        m_s_ProductionCompany = new ns_s::ST_String();
    }
    return m_s_ProductionCompany;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_ProductionCompany() const
    {    
    if (m_s_ProductionCompany)
    {
        return *m_s_ProductionCompany;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_PublicationTitle() const
    {    
    return m_has_s_PublicationTitle;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_PublicationTitle()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = true;
    if (!m_s_PublicationTitle)
    {
        m_s_PublicationTitle = new ns_s::ST_String();
    }
    return m_s_PublicationTitle;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_PublicationTitle() const
    {    
    if (m_s_PublicationTitle)
    {
        return *m_s_PublicationTitle;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Publisher() const
    {    
    return m_has_s_Publisher;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Publisher()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Publisher = true;
    if (!m_s_Publisher)
    {
        m_s_Publisher = new ns_s::ST_String();
    }
    return m_s_Publisher;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Publisher() const
    {    
    if (m_s_Publisher)
    {
        return *m_s_Publisher;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_RecordingNumber() const
    {    
    return m_has_s_RecordingNumber;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_RecordingNumber()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = true;
    if (!m_s_RecordingNumber)
    {
        m_s_RecordingNumber = new ns_s::ST_String();
    }
    return m_s_RecordingNumber;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_RecordingNumber() const
    {    
    if (m_s_RecordingNumber)
    {
        return *m_s_RecordingNumber;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_RefOrder() const
    {    
    return m_has_s_RefOrder;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_RefOrder()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_RefOrder = true;
    if (!m_s_RefOrder)
    {
        m_s_RefOrder = new ns_s::ST_String();
    }
    return m_s_RefOrder;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_RefOrder() const
    {    
    if (m_s_RefOrder)
    {
        return *m_s_RefOrder;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Reporter() const
    {    
    return m_has_s_Reporter;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Reporter()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Reporter = true;
    if (!m_s_Reporter)
    {
        m_s_Reporter = new ns_s::ST_String();
    }
    return m_s_Reporter;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Reporter() const
    {    
    if (m_s_Reporter)
    {
        return *m_s_Reporter;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_SourceType() const
    {    
    return m_has_SourceType;
    }

    ST_SourceType* CT_SourceType::ChildGroup_1::mutable_SourceType()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_SourceType = true;
    if (!m_SourceType)
    {
        m_SourceType = new ST_SourceType();
    }
    return m_SourceType;
    }

    const ST_SourceType& CT_SourceType::ChildGroup_1::get_SourceType() const
    {    
    if (m_SourceType)
    {
        return *m_SourceType;
    }
    return ST_SourceType::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_ShortTitle() const
    {    
    return m_has_s_ShortTitle;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_ShortTitle()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_ShortTitle = true;
    if (!m_s_ShortTitle)
    {
        m_s_ShortTitle = new ns_s::ST_String();
    }
    return m_s_ShortTitle;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_ShortTitle() const
    {    
    if (m_s_ShortTitle)
    {
        return *m_s_ShortTitle;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_StandardNumber() const
    {    
    return m_has_s_StandardNumber;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_StandardNumber()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_StandardNumber = true;
    if (!m_s_StandardNumber)
    {
        m_s_StandardNumber = new ns_s::ST_String();
    }
    return m_s_StandardNumber;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_StandardNumber() const
    {    
    if (m_s_StandardNumber)
    {
        return *m_s_StandardNumber;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_StateProvince() const
    {    
    return m_has_s_StateProvince;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_StateProvince()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_StateProvince = true;
    if (!m_s_StateProvince)
    {
        m_s_StateProvince = new ns_s::ST_String();
    }
    return m_s_StateProvince;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_StateProvince() const
    {    
    if (m_s_StateProvince)
    {
        return *m_s_StateProvince;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Station() const
    {    
    return m_has_s_Station;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Station()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Station = true;
    if (!m_s_Station)
    {
        m_s_Station = new ns_s::ST_String();
    }
    return m_s_Station;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Station() const
    {    
    if (m_s_Station)
    {
        return *m_s_Station;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Tag() const
    {    
    return m_has_s_Tag;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Tag()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Tag = true;
    if (!m_s_Tag)
    {
        m_s_Tag = new ns_s::ST_String();
    }
    return m_s_Tag;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Tag() const
    {    
    if (m_s_Tag)
    {
        return *m_s_Tag;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Theater() const
    {    
    return m_has_s_Theater;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Theater()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Theater = true;
    if (!m_s_Theater)
    {
        m_s_Theater = new ns_s::ST_String();
    }
    return m_s_Theater;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Theater() const
    {    
    if (m_s_Theater)
    {
        return *m_s_Theater;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_ThesisType() const
    {    
    return m_has_s_ThesisType;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_ThesisType()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_ThesisType = true;
    if (!m_s_ThesisType)
    {
        m_s_ThesisType = new ns_s::ST_String();
    }
    return m_s_ThesisType;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_ThesisType() const
    {    
    if (m_s_ThesisType)
    {
        return *m_s_ThesisType;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Title() const
    {    
    return m_has_s_Title;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Title()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Title = true;
    if (!m_s_Title)
    {
        m_s_Title = new ns_s::ST_String();
    }
    return m_s_Title;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Title() const
    {    
    if (m_s_Title)
    {
        return *m_s_Title;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Type() const
    {    
    return m_has_s_Type;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Type()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Type = true;
    if (!m_s_Type)
    {
        m_s_Type = new ns_s::ST_String();
    }
    return m_s_Type;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Type() const
    {    
    if (m_s_Type)
    {
        return *m_s_Type;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_URL() const
    {    
    return m_has_s_URL;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_URL()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_URL = true;
    if (!m_s_URL)
    {
        m_s_URL = new ns_s::ST_String();
    }
    return m_s_URL;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_URL() const
    {    
    if (m_s_URL)
    {
        return *m_s_URL;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Version() const
    {    
    return m_has_s_Version;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Version()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Version = true;
    if (!m_s_Version)
    {
        m_s_Version = new ns_s::ST_String();
    }
    return m_s_Version;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Version() const
    {    
    if (m_s_Version)
    {
        return *m_s_Version;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Volume() const
    {    
    return m_has_s_Volume;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Volume()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Volume = true;
    if (!m_s_Volume)
    {
        m_s_Volume = new ns_s::ST_String();
    }
    return m_s_Volume;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Volume() const
    {    
    if (m_s_Volume)
    {
        return *m_s_Volume;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_Year() const
    {    
    return m_has_s_Year;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_Year()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_YearAccessed = false;
    
    if (m_s_YearAccessed)
    {
        delete m_s_YearAccessed;
        m_s_YearAccessed = NULL;
    }
    ;
    
    m_has_s_Year = true;
    if (!m_s_Year)
    {
        m_s_Year = new ns_s::ST_String();
    }
    return m_s_Year;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_Year() const
    {    
    if (m_s_Year)
    {
        return *m_s_Year;
    }
    return ns_s::ST_String::default_instance();
    }

    bool CT_SourceType::ChildGroup_1::has_s_YearAccessed() const
    {    
    return m_has_s_YearAccessed;
    }

    ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_s_YearAccessed()
    {    
    
    m_has_s_AbbreviatedCaseNumber = false;
    
    if (m_s_AbbreviatedCaseNumber)
    {
        delete m_s_AbbreviatedCaseNumber;
        m_s_AbbreviatedCaseNumber = NULL;
    }
    ;
    
    m_has_s_AlbumTitle = false;
    
    if (m_s_AlbumTitle)
    {
        delete m_s_AlbumTitle;
        m_s_AlbumTitle = NULL;
    }
    ;
    
    m_has_Author = false;
    
    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;
    
    m_has_s_BookTitle = false;
    
    if (m_s_BookTitle)
    {
        delete m_s_BookTitle;
        m_s_BookTitle = NULL;
    }
    ;
    
    m_has_s_Broadcaster = false;
    
    if (m_s_Broadcaster)
    {
        delete m_s_Broadcaster;
        m_s_Broadcaster = NULL;
    }
    ;
    
    m_has_s_BroadcastTitle = false;
    
    if (m_s_BroadcastTitle)
    {
        delete m_s_BroadcastTitle;
        m_s_BroadcastTitle = NULL;
    }
    ;
    
    m_has_s_CaseNumber = false;
    
    if (m_s_CaseNumber)
    {
        delete m_s_CaseNumber;
        m_s_CaseNumber = NULL;
    }
    ;
    
    m_has_s_ChapterNumber = false;
    
    if (m_s_ChapterNumber)
    {
        delete m_s_ChapterNumber;
        m_s_ChapterNumber = NULL;
    }
    ;
    
    m_has_s_City = false;
    
    if (m_s_City)
    {
        delete m_s_City;
        m_s_City = NULL;
    }
    ;
    
    m_has_s_Comments = false;
    
    if (m_s_Comments)
    {
        delete m_s_Comments;
        m_s_Comments = NULL;
    }
    ;
    
    m_has_s_ConferenceName = false;
    
    if (m_s_ConferenceName)
    {
        delete m_s_ConferenceName;
        m_s_ConferenceName = NULL;
    }
    ;
    
    m_has_s_CountryRegion = false;
    
    if (m_s_CountryRegion)
    {
        delete m_s_CountryRegion;
        m_s_CountryRegion = NULL;
    }
    ;
    
    m_has_s_Court = false;
    
    if (m_s_Court)
    {
        delete m_s_Court;
        m_s_Court = NULL;
    }
    ;
    
    m_has_s_Day = false;
    
    if (m_s_Day)
    {
        delete m_s_Day;
        m_s_Day = NULL;
    }
    ;
    
    m_has_s_DayAccessed = false;
    
    if (m_s_DayAccessed)
    {
        delete m_s_DayAccessed;
        m_s_DayAccessed = NULL;
    }
    ;
    
    m_has_s_Department = false;
    
    if (m_s_Department)
    {
        delete m_s_Department;
        m_s_Department = NULL;
    }
    ;
    
    m_has_s_Distributor = false;
    
    if (m_s_Distributor)
    {
        delete m_s_Distributor;
        m_s_Distributor = NULL;
    }
    ;
    
    m_has_s_Edition = false;
    
    if (m_s_Edition)
    {
        delete m_s_Edition;
        m_s_Edition = NULL;
    }
    ;
    
    m_has_s_Guid = false;
    
    if (m_s_Guid)
    {
        delete m_s_Guid;
        m_s_Guid = NULL;
    }
    ;
    
    m_has_s_Institution = false;
    
    if (m_s_Institution)
    {
        delete m_s_Institution;
        m_s_Institution = NULL;
    }
    ;
    
    m_has_s_InternetSiteTitle = false;
    
    if (m_s_InternetSiteTitle)
    {
        delete m_s_InternetSiteTitle;
        m_s_InternetSiteTitle = NULL;
    }
    ;
    
    m_has_s_Issue = false;
    
    if (m_s_Issue)
    {
        delete m_s_Issue;
        m_s_Issue = NULL;
    }
    ;
    
    m_has_s_JournalName = false;
    
    if (m_s_JournalName)
    {
        delete m_s_JournalName;
        m_s_JournalName = NULL;
    }
    ;
    
    m_has_s_LCID = false;
    
    if (m_s_LCID)
    {
        delete m_s_LCID;
        m_s_LCID = NULL;
    }
    ;
    
    m_has_s_Medium = false;
    
    if (m_s_Medium)
    {
        delete m_s_Medium;
        m_s_Medium = NULL;
    }
    ;
    
    m_has_s_Month = false;
    
    if (m_s_Month)
    {
        delete m_s_Month;
        m_s_Month = NULL;
    }
    ;
    
    m_has_s_MonthAccessed = false;
    
    if (m_s_MonthAccessed)
    {
        delete m_s_MonthAccessed;
        m_s_MonthAccessed = NULL;
    }
    ;
    
    m_has_s_NumberVolumes = false;
    
    if (m_s_NumberVolumes)
    {
        delete m_s_NumberVolumes;
        m_s_NumberVolumes = NULL;
    }
    ;
    
    m_has_s_Pages = false;
    
    if (m_s_Pages)
    {
        delete m_s_Pages;
        m_s_Pages = NULL;
    }
    ;
    
    m_has_s_PatentNumber = false;
    
    if (m_s_PatentNumber)
    {
        delete m_s_PatentNumber;
        m_s_PatentNumber = NULL;
    }
    ;
    
    m_has_s_PeriodicalTitle = false;
    
    if (m_s_PeriodicalTitle)
    {
        delete m_s_PeriodicalTitle;
        m_s_PeriodicalTitle = NULL;
    }
    ;
    
    m_has_s_ProductionCompany = false;
    
    if (m_s_ProductionCompany)
    {
        delete m_s_ProductionCompany;
        m_s_ProductionCompany = NULL;
    }
    ;
    
    m_has_s_PublicationTitle = false;
    
    if (m_s_PublicationTitle)
    {
        delete m_s_PublicationTitle;
        m_s_PublicationTitle = NULL;
    }
    ;
    
    m_has_s_Publisher = false;
    
    if (m_s_Publisher)
    {
        delete m_s_Publisher;
        m_s_Publisher = NULL;
    }
    ;
    
    m_has_s_RecordingNumber = false;
    
    if (m_s_RecordingNumber)
    {
        delete m_s_RecordingNumber;
        m_s_RecordingNumber = NULL;
    }
    ;
    
    m_has_s_RefOrder = false;
    
    if (m_s_RefOrder)
    {
        delete m_s_RefOrder;
        m_s_RefOrder = NULL;
    }
    ;
    
    m_has_s_Reporter = false;
    
    if (m_s_Reporter)
    {
        delete m_s_Reporter;
        m_s_Reporter = NULL;
    }
    ;
    
    m_has_SourceType = false;
    
    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;
    
    m_has_s_ShortTitle = false;
    
    if (m_s_ShortTitle)
    {
        delete m_s_ShortTitle;
        m_s_ShortTitle = NULL;
    }
    ;
    
    m_has_s_StandardNumber = false;
    
    if (m_s_StandardNumber)
    {
        delete m_s_StandardNumber;
        m_s_StandardNumber = NULL;
    }
    ;
    
    m_has_s_StateProvince = false;
    
    if (m_s_StateProvince)
    {
        delete m_s_StateProvince;
        m_s_StateProvince = NULL;
    }
    ;
    
    m_has_s_Station = false;
    
    if (m_s_Station)
    {
        delete m_s_Station;
        m_s_Station = NULL;
    }
    ;
    
    m_has_s_Tag = false;
    
    if (m_s_Tag)
    {
        delete m_s_Tag;
        m_s_Tag = NULL;
    }
    ;
    
    m_has_s_Theater = false;
    
    if (m_s_Theater)
    {
        delete m_s_Theater;
        m_s_Theater = NULL;
    }
    ;
    
    m_has_s_ThesisType = false;
    
    if (m_s_ThesisType)
    {
        delete m_s_ThesisType;
        m_s_ThesisType = NULL;
    }
    ;
    
    m_has_s_Title = false;
    
    if (m_s_Title)
    {
        delete m_s_Title;
        m_s_Title = NULL;
    }
    ;
    
    m_has_s_Type = false;
    
    if (m_s_Type)
    {
        delete m_s_Type;
        m_s_Type = NULL;
    }
    ;
    
    m_has_s_URL = false;
    
    if (m_s_URL)
    {
        delete m_s_URL;
        m_s_URL = NULL;
    }
    ;
    
    m_has_s_Version = false;
    
    if (m_s_Version)
    {
        delete m_s_Version;
        m_s_Version = NULL;
    }
    ;
    
    m_has_s_Volume = false;
    
    if (m_s_Volume)
    {
        delete m_s_Volume;
        m_s_Volume = NULL;
    }
    ;
    
    m_has_s_Year = false;
    
    if (m_s_Year)
    {
        delete m_s_Year;
        m_s_Year = NULL;
    }
    ;
    
    m_has_s_YearAccessed = true;
    if (!m_s_YearAccessed)
    {
        m_s_YearAccessed = new ns_s::ST_String();
    }
    return m_s_YearAccessed;
    }

    const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_s_YearAccessed() const
    {    
    if (m_s_YearAccessed)
    {
        return *m_s_YearAccessed;
    }
    return ns_s::ST_String::default_instance();
    }

CT_SourceType* CT_SourceType::default_instance_ = NULL;

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
                (*iter)->get_Source().toXmlElem("Source", "", _outStream);
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


    // CT_Sources::ChildGroup_1
    bool CT_Sources::ChildGroup_1::has_Source() const
    {    
    return m_has_Source;
    }

    CT_SourceType* CT_Sources::ChildGroup_1::mutable_Source()
    {    
    
    m_has_Source = true;
    if (!m_Source)
    {
        m_Source = new CT_SourceType();
    }
    return m_Source;
    }

    const CT_SourceType& CT_Sources::ChildGroup_1::get_Source() const
    {    
    if (m_Source)
    {
        return *m_Source;
    }
    return CT_SourceType::default_instance();
    }

CT_Sources* CT_Sources::default_instance_ = NULL;

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
    _outStream << "<Sources";
    
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
                (*iter)->get_Source().toXmlElem("Source", "", _outStream);
            }
        }
    }
    
    _outStream << "</Sources>";
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


    // Sources_element::ChildGroup_1
    bool Sources_element::ChildGroup_1::has_Source() const
    {    
    return m_has_Source;
    }

    CT_SourceType* Sources_element::ChildGroup_1::mutable_Source()
    {    
    
    m_has_Source = true;
    if (!m_Source)
    {
        m_Source = new CT_SourceType();
    }
    return m_Source;
    }

    const CT_SourceType& Sources_element::ChildGroup_1::get_Source() const
    {    
    if (m_Source)
    {
        return *m_Source;
    }
    return CT_SourceType::default_instance();
    }

Sources_element* Sources_element::default_instance_ = NULL;
}