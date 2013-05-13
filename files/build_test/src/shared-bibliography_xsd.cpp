#include "shared-bibliography_xsd.h"
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <functional>
#include <assert.h>
#include "shared-commonSimpleTypes_xsd.h"
namespace ns_b {
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
ST_SourceType::~ST_SourceType()
{
    clear();
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
CT_NameListType::CT_NameListType()

{
}
CT_NameListType::~CT_NameListType()
{
    clear();
}
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
        int elemCnt = count_if(m_childGroupList_1.begin(), m_childGroupList_1.end(), mem_fun(&ChildGroup_1::has_Person));
        assert(1 <= elemCnt);
    }

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_Person())
            {
                (*iter)->get_Person().toXmlElem("b:Person", "", _outStream);
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
CT_NameListType::ChildGroup_1::ChildGroup_1()
    :m_has_Person(false),
     m_Person(NULL)
{
}
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
CT_PersonType::CT_PersonType()

{
}
CT_PersonType::~CT_PersonType()
{
    clear();
}
ns_s::ST_String* CT_PersonType::add_Last()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Last();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_PersonType::add_First()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_First();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_PersonType::add_Middle()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Middle();
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
            if ((*iter)->has_Last())
            {
                _outStream << "<b:Last>" << (*iter)->get_Last().toString() << "</b:Last>";
            }


            else if ((*iter)->has_First())
            {
                _outStream << "<b:First>" << (*iter)->get_First().toString() << "</b:First>";
            }


            else if ((*iter)->has_Middle())
            {
                _outStream << "<b:Middle>" << (*iter)->get_Middle().toString() << "</b:Middle>";
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
CT_PersonType::ChildGroup_1::ChildGroup_1()
    :m_has_Last(false),
     m_Last(NULL),
     m_has_First(false),
     m_First(NULL),
     m_has_Middle(false),
     m_Middle(NULL)
{
}
bool CT_PersonType::ChildGroup_1::has_Last() const
{
    return m_has_Last;
}

ns_s::ST_String* CT_PersonType::ChildGroup_1::mutable_Last()
{

    m_has_First = false;

    if (m_First)
    {
        delete m_First;
        m_First = NULL;
    }
    ;

    m_has_Middle = false;

    if (m_Middle)
    {
        delete m_Middle;
        m_Middle = NULL;
    }
    ;

    m_has_Last = true;
    if (!m_Last)
    {
        m_Last = new ns_s::ST_String();
    }
    return m_Last;
}

const ns_s::ST_String& CT_PersonType::ChildGroup_1::get_Last() const
{
    if (m_Last)
    {
        return *m_Last;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_PersonType::ChildGroup_1::has_First() const
{
    return m_has_First;
}

ns_s::ST_String* CT_PersonType::ChildGroup_1::mutable_First()
{

    m_has_Last = false;

    if (m_Last)
    {
        delete m_Last;
        m_Last = NULL;
    }
    ;

    m_has_Middle = false;

    if (m_Middle)
    {
        delete m_Middle;
        m_Middle = NULL;
    }
    ;

    m_has_First = true;
    if (!m_First)
    {
        m_First = new ns_s::ST_String();
    }
    return m_First;
}

const ns_s::ST_String& CT_PersonType::ChildGroup_1::get_First() const
{
    if (m_First)
    {
        return *m_First;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_PersonType::ChildGroup_1::has_Middle() const
{
    return m_has_Middle;
}

ns_s::ST_String* CT_PersonType::ChildGroup_1::mutable_Middle()
{

    m_has_Last = false;

    if (m_Last)
    {
        delete m_Last;
        m_Last = NULL;
    }
    ;

    m_has_First = false;

    if (m_First)
    {
        delete m_First;
        m_First = NULL;
    }
    ;

    m_has_Middle = true;
    if (!m_Middle)
    {
        m_Middle = new ns_s::ST_String();
    }
    return m_Middle;
}

const ns_s::ST_String& CT_PersonType::ChildGroup_1::get_Middle() const
{
    if (m_Middle)
    {
        return *m_Middle;
    }
    return ns_s::ST_String::default_instance();
}

CT_PersonType* CT_PersonType::default_instance_ = NULL;

// CT_NameType
CT_NameType::CT_NameType()
    :m_has_NameList(false),
     m_NameList(NULL)
{
}
CT_NameType::~CT_NameType()
{
    clear();
}
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

    assert(m_has_NameList);


    if (m_has_NameList)
    {
        m_NameList->toXmlElem("b:NameList", "", _outStream);
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
CT_NameOrCorporateType::CT_NameOrCorporateType()
    :m_has_NameList(false),
     m_NameList(NULL),
     m_has_Corporate(false),
     m_Corporate(NULL)
{
}
CT_NameOrCorporateType::~CT_NameOrCorporateType()
{
    clear();
}
bool CT_NameOrCorporateType::has_NameList() const
{
    return m_has_NameList;
}

CT_NameListType* CT_NameOrCorporateType::mutable_NameList()
{

    m_has_Corporate = false;

    if (m_Corporate)
    {
        delete m_Corporate;
        m_Corporate = NULL;
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

bool CT_NameOrCorporateType::has_Corporate() const
{
    return m_has_Corporate;
}

ns_s::ST_String* CT_NameOrCorporateType::mutable_Corporate()
{

    m_has_NameList = false;

    if (m_NameList)
    {
        delete m_NameList;
        m_NameList = NULL;
    }
    ;

    m_has_Corporate = true;
    if (!m_Corporate)
    {
        m_Corporate = new ns_s::ST_String();
    }
    return m_Corporate;
}

const ns_s::ST_String& CT_NameOrCorporateType::get_Corporate() const
{
    if (m_Corporate)
    {
        return *m_Corporate;
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


    m_has_Corporate = false;

    if (m_Corporate)
    {
        delete m_Corporate;
        m_Corporate = NULL;
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

    {
        bool elemHasValueList[2] = {m_has_NameList, m_has_Corporate};
        int cnt = count(elemHasValueList, elemHasValueList + 2, true);
        assert(cnt == 0 || cnt == 1);
    }


    if (m_has_NameList)
    {
        m_NameList->toXmlElem("b:NameList", "", _outStream);
    }


    if (m_has_Corporate)
    {
        _outStream << "<b:Corporate>" << m_Corporate->toString() << "</b:Corporate>";
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
CT_AuthorType::CT_AuthorType()

{
}
CT_AuthorType::~CT_AuthorType()
{
    clear();
}
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
                (*iter)->get_Artist().toXmlElem("b:Artist", "", _outStream);
            }


            else if ((*iter)->has_Author())
            {
                (*iter)->get_Author().toXmlElem("b:Author", "", _outStream);
            }


            else if ((*iter)->has_BookAuthor())
            {
                (*iter)->get_BookAuthor().toXmlElem("b:BookAuthor", "", _outStream);
            }


            else if ((*iter)->has_Compiler())
            {
                (*iter)->get_Compiler().toXmlElem("b:Compiler", "", _outStream);
            }


            else if ((*iter)->has_Composer())
            {
                (*iter)->get_Composer().toXmlElem("b:Composer", "", _outStream);
            }


            else if ((*iter)->has_Conductor())
            {
                (*iter)->get_Conductor().toXmlElem("b:Conductor", "", _outStream);
            }


            else if ((*iter)->has_Counsel())
            {
                (*iter)->get_Counsel().toXmlElem("b:Counsel", "", _outStream);
            }


            else if ((*iter)->has_Director())
            {
                (*iter)->get_Director().toXmlElem("b:Director", "", _outStream);
            }


            else if ((*iter)->has_Editor())
            {
                (*iter)->get_Editor().toXmlElem("b:Editor", "", _outStream);
            }


            else if ((*iter)->has_Interviewee())
            {
                (*iter)->get_Interviewee().toXmlElem("b:Interviewee", "", _outStream);
            }


            else if ((*iter)->has_Interviewer())
            {
                (*iter)->get_Interviewer().toXmlElem("b:Interviewer", "", _outStream);
            }


            else if ((*iter)->has_Inventor())
            {
                (*iter)->get_Inventor().toXmlElem("b:Inventor", "", _outStream);
            }


            else if ((*iter)->has_Performer())
            {
                (*iter)->get_Performer().toXmlElem("b:Performer", "", _outStream);
            }


            else if ((*iter)->has_ProducerName())
            {
                (*iter)->get_ProducerName().toXmlElem("b:ProducerName", "", _outStream);
            }


            else if ((*iter)->has_Translator())
            {
                (*iter)->get_Translator().toXmlElem("b:Translator", "", _outStream);
            }


            else if ((*iter)->has_Writer())
            {
                (*iter)->get_Writer().toXmlElem("b:Writer", "", _outStream);
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
CT_AuthorType::ChildGroup_1::ChildGroup_1()
    :m_has_Artist(false),
     m_Artist(NULL),
     m_has_Author(false),
     m_Author(NULL),
     m_has_BookAuthor(false),
     m_BookAuthor(NULL),
     m_has_Compiler(false),
     m_Compiler(NULL),
     m_has_Composer(false),
     m_Composer(NULL),
     m_has_Conductor(false),
     m_Conductor(NULL),
     m_has_Counsel(false),
     m_Counsel(NULL),
     m_has_Director(false),
     m_Director(NULL),
     m_has_Editor(false),
     m_Editor(NULL),
     m_has_Interviewee(false),
     m_Interviewee(NULL),
     m_has_Interviewer(false),
     m_Interviewer(NULL),
     m_has_Inventor(false),
     m_Inventor(NULL),
     m_has_Performer(false),
     m_Performer(NULL),
     m_has_ProducerName(false),
     m_ProducerName(NULL),
     m_has_Translator(false),
     m_Translator(NULL),
     m_has_Writer(false),
     m_Writer(NULL)
{
}
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
CT_SourceType::CT_SourceType()

{
}
CT_SourceType::~CT_SourceType()
{
    clear();
}
ns_s::ST_String* CT_SourceType::add_AbbreviatedCaseNumber()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_AbbreviatedCaseNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_AlbumTitle()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_AlbumTitle();
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

ns_s::ST_String* CT_SourceType::add_BookTitle()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_BookTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Broadcaster()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Broadcaster();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_BroadcastTitle()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_BroadcastTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_CaseNumber()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_CaseNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_ChapterNumber()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_ChapterNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_City()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_City();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Comments()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Comments();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_ConferenceName()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_ConferenceName();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_CountryRegion()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_CountryRegion();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Court()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Court();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Day()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Day();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_DayAccessed()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_DayAccessed();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Department()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Department();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Distributor()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Distributor();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Edition()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Edition();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Guid()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Guid();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Institution()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Institution();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_InternetSiteTitle()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_InternetSiteTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Issue()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Issue();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_JournalName()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_JournalName();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_Lang* CT_SourceType::add_LCID()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_Lang* pNewChild = pChildGroup->mutable_LCID();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Medium()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Medium();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Month()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Month();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_MonthAccessed()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_MonthAccessed();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_NumberVolumes()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_NumberVolumes();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Pages()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Pages();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_PatentNumber()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_PatentNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_PeriodicalTitle()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_PeriodicalTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_ProductionCompany()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_ProductionCompany();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_PublicationTitle()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_PublicationTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Publisher()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Publisher();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_RecordingNumber()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_RecordingNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_RefOrder()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_RefOrder();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Reporter()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Reporter();
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

ns_s::ST_String* CT_SourceType::add_ShortTitle()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_ShortTitle();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_StandardNumber()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_StandardNumber();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_StateProvince()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_StateProvince();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Station()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Station();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Tag()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Tag();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Theater()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Theater();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_ThesisType()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_ThesisType();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Title()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Title();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Type()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Type();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_URL()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_URL();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Version()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Version();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Volume()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Volume();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_Year()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_Year();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

ns_s::ST_String* CT_SourceType::add_YearAccessed()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    ns_s::ST_String* pNewChild = pChildGroup->mutable_YearAccessed();
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
            if ((*iter)->has_AbbreviatedCaseNumber())
            {
                _outStream << "<b:AbbreviatedCaseNumber>" << (*iter)->get_AbbreviatedCaseNumber().toString() << "</b:AbbreviatedCaseNumber>";
            }


            else if ((*iter)->has_AlbumTitle())
            {
                _outStream << "<b:AlbumTitle>" << (*iter)->get_AlbumTitle().toString() << "</b:AlbumTitle>";
            }


            else if ((*iter)->has_Author())
            {
                (*iter)->get_Author().toXmlElem("b:Author", "", _outStream);
            }


            else if ((*iter)->has_BookTitle())
            {
                _outStream << "<b:BookTitle>" << (*iter)->get_BookTitle().toString() << "</b:BookTitle>";
            }


            else if ((*iter)->has_Broadcaster())
            {
                _outStream << "<b:Broadcaster>" << (*iter)->get_Broadcaster().toString() << "</b:Broadcaster>";
            }


            else if ((*iter)->has_BroadcastTitle())
            {
                _outStream << "<b:BroadcastTitle>" << (*iter)->get_BroadcastTitle().toString() << "</b:BroadcastTitle>";
            }


            else if ((*iter)->has_CaseNumber())
            {
                _outStream << "<b:CaseNumber>" << (*iter)->get_CaseNumber().toString() << "</b:CaseNumber>";
            }


            else if ((*iter)->has_ChapterNumber())
            {
                _outStream << "<b:ChapterNumber>" << (*iter)->get_ChapterNumber().toString() << "</b:ChapterNumber>";
            }


            else if ((*iter)->has_City())
            {
                _outStream << "<b:City>" << (*iter)->get_City().toString() << "</b:City>";
            }


            else if ((*iter)->has_Comments())
            {
                _outStream << "<b:Comments>" << (*iter)->get_Comments().toString() << "</b:Comments>";
            }


            else if ((*iter)->has_ConferenceName())
            {
                _outStream << "<b:ConferenceName>" << (*iter)->get_ConferenceName().toString() << "</b:ConferenceName>";
            }


            else if ((*iter)->has_CountryRegion())
            {
                _outStream << "<b:CountryRegion>" << (*iter)->get_CountryRegion().toString() << "</b:CountryRegion>";
            }


            else if ((*iter)->has_Court())
            {
                _outStream << "<b:Court>" << (*iter)->get_Court().toString() << "</b:Court>";
            }


            else if ((*iter)->has_Day())
            {
                _outStream << "<b:Day>" << (*iter)->get_Day().toString() << "</b:Day>";
            }


            else if ((*iter)->has_DayAccessed())
            {
                _outStream << "<b:DayAccessed>" << (*iter)->get_DayAccessed().toString() << "</b:DayAccessed>";
            }


            else if ((*iter)->has_Department())
            {
                _outStream << "<b:Department>" << (*iter)->get_Department().toString() << "</b:Department>";
            }


            else if ((*iter)->has_Distributor())
            {
                _outStream << "<b:Distributor>" << (*iter)->get_Distributor().toString() << "</b:Distributor>";
            }


            else if ((*iter)->has_Edition())
            {
                _outStream << "<b:Edition>" << (*iter)->get_Edition().toString() << "</b:Edition>";
            }


            else if ((*iter)->has_Guid())
            {
                _outStream << "<b:Guid>" << (*iter)->get_Guid().toString() << "</b:Guid>";
            }


            else if ((*iter)->has_Institution())
            {
                _outStream << "<b:Institution>" << (*iter)->get_Institution().toString() << "</b:Institution>";
            }


            else if ((*iter)->has_InternetSiteTitle())
            {
                _outStream << "<b:InternetSiteTitle>" << (*iter)->get_InternetSiteTitle().toString() << "</b:InternetSiteTitle>";
            }


            else if ((*iter)->has_Issue())
            {
                _outStream << "<b:Issue>" << (*iter)->get_Issue().toString() << "</b:Issue>";
            }


            else if ((*iter)->has_JournalName())
            {
                _outStream << "<b:JournalName>" << (*iter)->get_JournalName().toString() << "</b:JournalName>";
            }


            else if ((*iter)->has_LCID())
            {
                _outStream << "<b:LCID>" << (*iter)->get_LCID().toString() << "</b:LCID>";
            }


            else if ((*iter)->has_Medium())
            {
                _outStream << "<b:Medium>" << (*iter)->get_Medium().toString() << "</b:Medium>";
            }


            else if ((*iter)->has_Month())
            {
                _outStream << "<b:Month>" << (*iter)->get_Month().toString() << "</b:Month>";
            }


            else if ((*iter)->has_MonthAccessed())
            {
                _outStream << "<b:MonthAccessed>" << (*iter)->get_MonthAccessed().toString() << "</b:MonthAccessed>";
            }


            else if ((*iter)->has_NumberVolumes())
            {
                _outStream << "<b:NumberVolumes>" << (*iter)->get_NumberVolumes().toString() << "</b:NumberVolumes>";
            }


            else if ((*iter)->has_Pages())
            {
                _outStream << "<b:Pages>" << (*iter)->get_Pages().toString() << "</b:Pages>";
            }


            else if ((*iter)->has_PatentNumber())
            {
                _outStream << "<b:PatentNumber>" << (*iter)->get_PatentNumber().toString() << "</b:PatentNumber>";
            }


            else if ((*iter)->has_PeriodicalTitle())
            {
                _outStream << "<b:PeriodicalTitle>" << (*iter)->get_PeriodicalTitle().toString() << "</b:PeriodicalTitle>";
            }


            else if ((*iter)->has_ProductionCompany())
            {
                _outStream << "<b:ProductionCompany>" << (*iter)->get_ProductionCompany().toString() << "</b:ProductionCompany>";
            }


            else if ((*iter)->has_PublicationTitle())
            {
                _outStream << "<b:PublicationTitle>" << (*iter)->get_PublicationTitle().toString() << "</b:PublicationTitle>";
            }


            else if ((*iter)->has_Publisher())
            {
                _outStream << "<b:Publisher>" << (*iter)->get_Publisher().toString() << "</b:Publisher>";
            }


            else if ((*iter)->has_RecordingNumber())
            {
                _outStream << "<b:RecordingNumber>" << (*iter)->get_RecordingNumber().toString() << "</b:RecordingNumber>";
            }


            else if ((*iter)->has_RefOrder())
            {
                _outStream << "<b:RefOrder>" << (*iter)->get_RefOrder().toString() << "</b:RefOrder>";
            }


            else if ((*iter)->has_Reporter())
            {
                _outStream << "<b:Reporter>" << (*iter)->get_Reporter().toString() << "</b:Reporter>";
            }


            else if ((*iter)->has_SourceType())
            {
                _outStream << "<b:SourceType>" << (*iter)->get_SourceType().toString() << "</b:SourceType>";
            }


            else if ((*iter)->has_ShortTitle())
            {
                _outStream << "<b:ShortTitle>" << (*iter)->get_ShortTitle().toString() << "</b:ShortTitle>";
            }


            else if ((*iter)->has_StandardNumber())
            {
                _outStream << "<b:StandardNumber>" << (*iter)->get_StandardNumber().toString() << "</b:StandardNumber>";
            }


            else if ((*iter)->has_StateProvince())
            {
                _outStream << "<b:StateProvince>" << (*iter)->get_StateProvince().toString() << "</b:StateProvince>";
            }


            else if ((*iter)->has_Station())
            {
                _outStream << "<b:Station>" << (*iter)->get_Station().toString() << "</b:Station>";
            }


            else if ((*iter)->has_Tag())
            {
                _outStream << "<b:Tag>" << (*iter)->get_Tag().toString() << "</b:Tag>";
            }


            else if ((*iter)->has_Theater())
            {
                _outStream << "<b:Theater>" << (*iter)->get_Theater().toString() << "</b:Theater>";
            }


            else if ((*iter)->has_ThesisType())
            {
                _outStream << "<b:ThesisType>" << (*iter)->get_ThesisType().toString() << "</b:ThesisType>";
            }


            else if ((*iter)->has_Title())
            {
                _outStream << "<b:Title>" << (*iter)->get_Title().toString() << "</b:Title>";
            }


            else if ((*iter)->has_Type())
            {
                _outStream << "<b:Type>" << (*iter)->get_Type().toString() << "</b:Type>";
            }


            else if ((*iter)->has_URL())
            {
                _outStream << "<b:URL>" << (*iter)->get_URL().toString() << "</b:URL>";
            }


            else if ((*iter)->has_Version())
            {
                _outStream << "<b:Version>" << (*iter)->get_Version().toString() << "</b:Version>";
            }


            else if ((*iter)->has_Volume())
            {
                _outStream << "<b:Volume>" << (*iter)->get_Volume().toString() << "</b:Volume>";
            }


            else if ((*iter)->has_Year())
            {
                _outStream << "<b:Year>" << (*iter)->get_Year().toString() << "</b:Year>";
            }


            else if ((*iter)->has_YearAccessed())
            {
                _outStream << "<b:YearAccessed>" << (*iter)->get_YearAccessed().toString() << "</b:YearAccessed>";
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
CT_SourceType::ChildGroup_1::ChildGroup_1()
    :m_has_AbbreviatedCaseNumber(false),
     m_AbbreviatedCaseNumber(NULL),
     m_has_AlbumTitle(false),
     m_AlbumTitle(NULL),
     m_has_Author(false),
     m_Author(NULL),
     m_has_BookTitle(false),
     m_BookTitle(NULL),
     m_has_Broadcaster(false),
     m_Broadcaster(NULL),
     m_has_BroadcastTitle(false),
     m_BroadcastTitle(NULL),
     m_has_CaseNumber(false),
     m_CaseNumber(NULL),
     m_has_ChapterNumber(false),
     m_ChapterNumber(NULL),
     m_has_City(false),
     m_City(NULL),
     m_has_Comments(false),
     m_Comments(NULL),
     m_has_ConferenceName(false),
     m_ConferenceName(NULL),
     m_has_CountryRegion(false),
     m_CountryRegion(NULL),
     m_has_Court(false),
     m_Court(NULL),
     m_has_Day(false),
     m_Day(NULL),
     m_has_DayAccessed(false),
     m_DayAccessed(NULL),
     m_has_Department(false),
     m_Department(NULL),
     m_has_Distributor(false),
     m_Distributor(NULL),
     m_has_Edition(false),
     m_Edition(NULL),
     m_has_Guid(false),
     m_Guid(NULL),
     m_has_Institution(false),
     m_Institution(NULL),
     m_has_InternetSiteTitle(false),
     m_InternetSiteTitle(NULL),
     m_has_Issue(false),
     m_Issue(NULL),
     m_has_JournalName(false),
     m_JournalName(NULL),
     m_has_LCID(false),
     m_LCID(NULL),
     m_has_Medium(false),
     m_Medium(NULL),
     m_has_Month(false),
     m_Month(NULL),
     m_has_MonthAccessed(false),
     m_MonthAccessed(NULL),
     m_has_NumberVolumes(false),
     m_NumberVolumes(NULL),
     m_has_Pages(false),
     m_Pages(NULL),
     m_has_PatentNumber(false),
     m_PatentNumber(NULL),
     m_has_PeriodicalTitle(false),
     m_PeriodicalTitle(NULL),
     m_has_ProductionCompany(false),
     m_ProductionCompany(NULL),
     m_has_PublicationTitle(false),
     m_PublicationTitle(NULL),
     m_has_Publisher(false),
     m_Publisher(NULL),
     m_has_RecordingNumber(false),
     m_RecordingNumber(NULL),
     m_has_RefOrder(false),
     m_RefOrder(NULL),
     m_has_Reporter(false),
     m_Reporter(NULL),
     m_has_SourceType(false),
     m_SourceType(NULL),
     m_has_ShortTitle(false),
     m_ShortTitle(NULL),
     m_has_StandardNumber(false),
     m_StandardNumber(NULL),
     m_has_StateProvince(false),
     m_StateProvince(NULL),
     m_has_Station(false),
     m_Station(NULL),
     m_has_Tag(false),
     m_Tag(NULL),
     m_has_Theater(false),
     m_Theater(NULL),
     m_has_ThesisType(false),
     m_ThesisType(NULL),
     m_has_Title(false),
     m_Title(NULL),
     m_has_Type(false),
     m_Type(NULL),
     m_has_URL(false),
     m_URL(NULL),
     m_has_Version(false),
     m_Version(NULL),
     m_has_Volume(false),
     m_Volume(NULL),
     m_has_Year(false),
     m_Year(NULL),
     m_has_YearAccessed(false),
     m_YearAccessed(NULL)
{
}
bool CT_SourceType::ChildGroup_1::has_AbbreviatedCaseNumber() const
{
    return m_has_AbbreviatedCaseNumber;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_AbbreviatedCaseNumber()
{

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_AbbreviatedCaseNumber = true;
    if (!m_AbbreviatedCaseNumber)
    {
        m_AbbreviatedCaseNumber = new ns_s::ST_String();
    }
    return m_AbbreviatedCaseNumber;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_AbbreviatedCaseNumber() const
{
    if (m_AbbreviatedCaseNumber)
    {
        return *m_AbbreviatedCaseNumber;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_AlbumTitle() const
{
    return m_has_AlbumTitle;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_AlbumTitle()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_AlbumTitle = true;
    if (!m_AlbumTitle)
    {
        m_AlbumTitle = new ns_s::ST_String();
    }
    return m_AlbumTitle;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_AlbumTitle() const
{
    if (m_AlbumTitle)
    {
        return *m_AlbumTitle;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Author() const
{
    return m_has_Author;
}

CT_AuthorType* CT_SourceType::ChildGroup_1::mutable_Author()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
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

bool CT_SourceType::ChildGroup_1::has_BookTitle() const
{
    return m_has_BookTitle;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_BookTitle()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_BookTitle = true;
    if (!m_BookTitle)
    {
        m_BookTitle = new ns_s::ST_String();
    }
    return m_BookTitle;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_BookTitle() const
{
    if (m_BookTitle)
    {
        return *m_BookTitle;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Broadcaster() const
{
    return m_has_Broadcaster;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Broadcaster()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Broadcaster = true;
    if (!m_Broadcaster)
    {
        m_Broadcaster = new ns_s::ST_String();
    }
    return m_Broadcaster;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Broadcaster() const
{
    if (m_Broadcaster)
    {
        return *m_Broadcaster;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_BroadcastTitle() const
{
    return m_has_BroadcastTitle;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_BroadcastTitle()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_BroadcastTitle = true;
    if (!m_BroadcastTitle)
    {
        m_BroadcastTitle = new ns_s::ST_String();
    }
    return m_BroadcastTitle;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_BroadcastTitle() const
{
    if (m_BroadcastTitle)
    {
        return *m_BroadcastTitle;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_CaseNumber() const
{
    return m_has_CaseNumber;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_CaseNumber()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_CaseNumber = true;
    if (!m_CaseNumber)
    {
        m_CaseNumber = new ns_s::ST_String();
    }
    return m_CaseNumber;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_CaseNumber() const
{
    if (m_CaseNumber)
    {
        return *m_CaseNumber;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_ChapterNumber() const
{
    return m_has_ChapterNumber;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_ChapterNumber()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_ChapterNumber = true;
    if (!m_ChapterNumber)
    {
        m_ChapterNumber = new ns_s::ST_String();
    }
    return m_ChapterNumber;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_ChapterNumber() const
{
    if (m_ChapterNumber)
    {
        return *m_ChapterNumber;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_City() const
{
    return m_has_City;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_City()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_City = true;
    if (!m_City)
    {
        m_City = new ns_s::ST_String();
    }
    return m_City;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_City() const
{
    if (m_City)
    {
        return *m_City;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Comments() const
{
    return m_has_Comments;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Comments()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Comments = true;
    if (!m_Comments)
    {
        m_Comments = new ns_s::ST_String();
    }
    return m_Comments;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Comments() const
{
    if (m_Comments)
    {
        return *m_Comments;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_ConferenceName() const
{
    return m_has_ConferenceName;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_ConferenceName()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_ConferenceName = true;
    if (!m_ConferenceName)
    {
        m_ConferenceName = new ns_s::ST_String();
    }
    return m_ConferenceName;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_ConferenceName() const
{
    if (m_ConferenceName)
    {
        return *m_ConferenceName;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_CountryRegion() const
{
    return m_has_CountryRegion;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_CountryRegion()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_CountryRegion = true;
    if (!m_CountryRegion)
    {
        m_CountryRegion = new ns_s::ST_String();
    }
    return m_CountryRegion;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_CountryRegion() const
{
    if (m_CountryRegion)
    {
        return *m_CountryRegion;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Court() const
{
    return m_has_Court;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Court()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Court = true;
    if (!m_Court)
    {
        m_Court = new ns_s::ST_String();
    }
    return m_Court;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Court() const
{
    if (m_Court)
    {
        return *m_Court;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Day() const
{
    return m_has_Day;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Day()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Day = true;
    if (!m_Day)
    {
        m_Day = new ns_s::ST_String();
    }
    return m_Day;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Day() const
{
    if (m_Day)
    {
        return *m_Day;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_DayAccessed() const
{
    return m_has_DayAccessed;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_DayAccessed()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_DayAccessed = true;
    if (!m_DayAccessed)
    {
        m_DayAccessed = new ns_s::ST_String();
    }
    return m_DayAccessed;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_DayAccessed() const
{
    if (m_DayAccessed)
    {
        return *m_DayAccessed;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Department() const
{
    return m_has_Department;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Department()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Department = true;
    if (!m_Department)
    {
        m_Department = new ns_s::ST_String();
    }
    return m_Department;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Department() const
{
    if (m_Department)
    {
        return *m_Department;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Distributor() const
{
    return m_has_Distributor;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Distributor()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Distributor = true;
    if (!m_Distributor)
    {
        m_Distributor = new ns_s::ST_String();
    }
    return m_Distributor;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Distributor() const
{
    if (m_Distributor)
    {
        return *m_Distributor;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Edition() const
{
    return m_has_Edition;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Edition()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Edition = true;
    if (!m_Edition)
    {
        m_Edition = new ns_s::ST_String();
    }
    return m_Edition;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Edition() const
{
    if (m_Edition)
    {
        return *m_Edition;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Guid() const
{
    return m_has_Guid;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Guid()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Guid = true;
    if (!m_Guid)
    {
        m_Guid = new ns_s::ST_String();
    }
    return m_Guid;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Guid() const
{
    if (m_Guid)
    {
        return *m_Guid;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Institution() const
{
    return m_has_Institution;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Institution()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Institution = true;
    if (!m_Institution)
    {
        m_Institution = new ns_s::ST_String();
    }
    return m_Institution;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Institution() const
{
    if (m_Institution)
    {
        return *m_Institution;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_InternetSiteTitle() const
{
    return m_has_InternetSiteTitle;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_InternetSiteTitle()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_InternetSiteTitle = true;
    if (!m_InternetSiteTitle)
    {
        m_InternetSiteTitle = new ns_s::ST_String();
    }
    return m_InternetSiteTitle;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_InternetSiteTitle() const
{
    if (m_InternetSiteTitle)
    {
        return *m_InternetSiteTitle;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Issue() const
{
    return m_has_Issue;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Issue()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Issue = true;
    if (!m_Issue)
    {
        m_Issue = new ns_s::ST_String();
    }
    return m_Issue;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Issue() const
{
    if (m_Issue)
    {
        return *m_Issue;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_JournalName() const
{
    return m_has_JournalName;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_JournalName()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_JournalName = true;
    if (!m_JournalName)
    {
        m_JournalName = new ns_s::ST_String();
    }
    return m_JournalName;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_JournalName() const
{
    if (m_JournalName)
    {
        return *m_JournalName;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_LCID() const
{
    return m_has_LCID;
}

ns_s::ST_Lang* CT_SourceType::ChildGroup_1::mutable_LCID()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_LCID = true;
    if (!m_LCID)
    {
        m_LCID = new ns_s::ST_Lang();
    }
    return m_LCID;
}

const ns_s::ST_Lang& CT_SourceType::ChildGroup_1::get_LCID() const
{
    if (m_LCID)
    {
        return *m_LCID;
    }
    return ns_s::ST_Lang::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Medium() const
{
    return m_has_Medium;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Medium()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Medium = true;
    if (!m_Medium)
    {
        m_Medium = new ns_s::ST_String();
    }
    return m_Medium;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Medium() const
{
    if (m_Medium)
    {
        return *m_Medium;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Month() const
{
    return m_has_Month;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Month()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Month = true;
    if (!m_Month)
    {
        m_Month = new ns_s::ST_String();
    }
    return m_Month;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Month() const
{
    if (m_Month)
    {
        return *m_Month;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_MonthAccessed() const
{
    return m_has_MonthAccessed;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_MonthAccessed()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_MonthAccessed = true;
    if (!m_MonthAccessed)
    {
        m_MonthAccessed = new ns_s::ST_String();
    }
    return m_MonthAccessed;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_MonthAccessed() const
{
    if (m_MonthAccessed)
    {
        return *m_MonthAccessed;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_NumberVolumes() const
{
    return m_has_NumberVolumes;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_NumberVolumes()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = true;
    if (!m_NumberVolumes)
    {
        m_NumberVolumes = new ns_s::ST_String();
    }
    return m_NumberVolumes;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_NumberVolumes() const
{
    if (m_NumberVolumes)
    {
        return *m_NumberVolumes;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Pages() const
{
    return m_has_Pages;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Pages()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Pages = true;
    if (!m_Pages)
    {
        m_Pages = new ns_s::ST_String();
    }
    return m_Pages;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Pages() const
{
    if (m_Pages)
    {
        return *m_Pages;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_PatentNumber() const
{
    return m_has_PatentNumber;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_PatentNumber()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_PatentNumber = true;
    if (!m_PatentNumber)
    {
        m_PatentNumber = new ns_s::ST_String();
    }
    return m_PatentNumber;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_PatentNumber() const
{
    if (m_PatentNumber)
    {
        return *m_PatentNumber;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_PeriodicalTitle() const
{
    return m_has_PeriodicalTitle;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_PeriodicalTitle()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_PeriodicalTitle = true;
    if (!m_PeriodicalTitle)
    {
        m_PeriodicalTitle = new ns_s::ST_String();
    }
    return m_PeriodicalTitle;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_PeriodicalTitle() const
{
    if (m_PeriodicalTitle)
    {
        return *m_PeriodicalTitle;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_ProductionCompany() const
{
    return m_has_ProductionCompany;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_ProductionCompany()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_ProductionCompany = true;
    if (!m_ProductionCompany)
    {
        m_ProductionCompany = new ns_s::ST_String();
    }
    return m_ProductionCompany;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_ProductionCompany() const
{
    if (m_ProductionCompany)
    {
        return *m_ProductionCompany;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_PublicationTitle() const
{
    return m_has_PublicationTitle;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_PublicationTitle()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_PublicationTitle = true;
    if (!m_PublicationTitle)
    {
        m_PublicationTitle = new ns_s::ST_String();
    }
    return m_PublicationTitle;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_PublicationTitle() const
{
    if (m_PublicationTitle)
    {
        return *m_PublicationTitle;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Publisher() const
{
    return m_has_Publisher;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Publisher()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Publisher = true;
    if (!m_Publisher)
    {
        m_Publisher = new ns_s::ST_String();
    }
    return m_Publisher;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Publisher() const
{
    if (m_Publisher)
    {
        return *m_Publisher;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_RecordingNumber() const
{
    return m_has_RecordingNumber;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_RecordingNumber()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_RecordingNumber = true;
    if (!m_RecordingNumber)
    {
        m_RecordingNumber = new ns_s::ST_String();
    }
    return m_RecordingNumber;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_RecordingNumber() const
{
    if (m_RecordingNumber)
    {
        return *m_RecordingNumber;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_RefOrder() const
{
    return m_has_RefOrder;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_RefOrder()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_RefOrder = true;
    if (!m_RefOrder)
    {
        m_RefOrder = new ns_s::ST_String();
    }
    return m_RefOrder;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_RefOrder() const
{
    if (m_RefOrder)
    {
        return *m_RefOrder;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Reporter() const
{
    return m_has_Reporter;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Reporter()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Reporter = true;
    if (!m_Reporter)
    {
        m_Reporter = new ns_s::ST_String();
    }
    return m_Reporter;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Reporter() const
{
    if (m_Reporter)
    {
        return *m_Reporter;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_SourceType() const
{
    return m_has_SourceType;
}

ST_SourceType* CT_SourceType::ChildGroup_1::mutable_SourceType()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
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

bool CT_SourceType::ChildGroup_1::has_ShortTitle() const
{
    return m_has_ShortTitle;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_ShortTitle()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_ShortTitle = true;
    if (!m_ShortTitle)
    {
        m_ShortTitle = new ns_s::ST_String();
    }
    return m_ShortTitle;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_ShortTitle() const
{
    if (m_ShortTitle)
    {
        return *m_ShortTitle;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_StandardNumber() const
{
    return m_has_StandardNumber;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_StandardNumber()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_StandardNumber = true;
    if (!m_StandardNumber)
    {
        m_StandardNumber = new ns_s::ST_String();
    }
    return m_StandardNumber;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_StandardNumber() const
{
    if (m_StandardNumber)
    {
        return *m_StandardNumber;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_StateProvince() const
{
    return m_has_StateProvince;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_StateProvince()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_StateProvince = true;
    if (!m_StateProvince)
    {
        m_StateProvince = new ns_s::ST_String();
    }
    return m_StateProvince;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_StateProvince() const
{
    if (m_StateProvince)
    {
        return *m_StateProvince;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Station() const
{
    return m_has_Station;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Station()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Station = true;
    if (!m_Station)
    {
        m_Station = new ns_s::ST_String();
    }
    return m_Station;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Station() const
{
    if (m_Station)
    {
        return *m_Station;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Tag() const
{
    return m_has_Tag;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Tag()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Tag = true;
    if (!m_Tag)
    {
        m_Tag = new ns_s::ST_String();
    }
    return m_Tag;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Tag() const
{
    if (m_Tag)
    {
        return *m_Tag;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Theater() const
{
    return m_has_Theater;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Theater()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Theater = true;
    if (!m_Theater)
    {
        m_Theater = new ns_s::ST_String();
    }
    return m_Theater;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Theater() const
{
    if (m_Theater)
    {
        return *m_Theater;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_ThesisType() const
{
    return m_has_ThesisType;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_ThesisType()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_ThesisType = true;
    if (!m_ThesisType)
    {
        m_ThesisType = new ns_s::ST_String();
    }
    return m_ThesisType;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_ThesisType() const
{
    if (m_ThesisType)
    {
        return *m_ThesisType;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Title() const
{
    return m_has_Title;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Title()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Title = true;
    if (!m_Title)
    {
        m_Title = new ns_s::ST_String();
    }
    return m_Title;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Title() const
{
    if (m_Title)
    {
        return *m_Title;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Type() const
{
    return m_has_Type;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Type()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Type = true;
    if (!m_Type)
    {
        m_Type = new ns_s::ST_String();
    }
    return m_Type;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Type() const
{
    if (m_Type)
    {
        return *m_Type;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_URL() const
{
    return m_has_URL;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_URL()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_URL = true;
    if (!m_URL)
    {
        m_URL = new ns_s::ST_String();
    }
    return m_URL;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_URL() const
{
    if (m_URL)
    {
        return *m_URL;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Version() const
{
    return m_has_Version;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Version()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Version = true;
    if (!m_Version)
    {
        m_Version = new ns_s::ST_String();
    }
    return m_Version;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Version() const
{
    if (m_Version)
    {
        return *m_Version;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Volume() const
{
    return m_has_Volume;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Volume()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Volume = true;
    if (!m_Volume)
    {
        m_Volume = new ns_s::ST_String();
    }
    return m_Volume;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Volume() const
{
    if (m_Volume)
    {
        return *m_Volume;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_Year() const
{
    return m_has_Year;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_Year()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_YearAccessed = false;

    if (m_YearAccessed)
    {
        delete m_YearAccessed;
        m_YearAccessed = NULL;
    }
    ;

    m_has_Year = true;
    if (!m_Year)
    {
        m_Year = new ns_s::ST_String();
    }
    return m_Year;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_Year() const
{
    if (m_Year)
    {
        return *m_Year;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_SourceType::ChildGroup_1::has_YearAccessed() const
{
    return m_has_YearAccessed;
}

ns_s::ST_String* CT_SourceType::ChildGroup_1::mutable_YearAccessed()
{

    m_has_AbbreviatedCaseNumber = false;

    if (m_AbbreviatedCaseNumber)
    {
        delete m_AbbreviatedCaseNumber;
        m_AbbreviatedCaseNumber = NULL;
    }
    ;

    m_has_AlbumTitle = false;

    if (m_AlbumTitle)
    {
        delete m_AlbumTitle;
        m_AlbumTitle = NULL;
    }
    ;

    m_has_Author = false;

    if (m_Author)
    {
        delete m_Author;
        m_Author = NULL;
    }
    ;

    m_has_BookTitle = false;

    if (m_BookTitle)
    {
        delete m_BookTitle;
        m_BookTitle = NULL;
    }
    ;

    m_has_Broadcaster = false;

    if (m_Broadcaster)
    {
        delete m_Broadcaster;
        m_Broadcaster = NULL;
    }
    ;

    m_has_BroadcastTitle = false;

    if (m_BroadcastTitle)
    {
        delete m_BroadcastTitle;
        m_BroadcastTitle = NULL;
    }
    ;

    m_has_CaseNumber = false;

    if (m_CaseNumber)
    {
        delete m_CaseNumber;
        m_CaseNumber = NULL;
    }
    ;

    m_has_ChapterNumber = false;

    if (m_ChapterNumber)
    {
        delete m_ChapterNumber;
        m_ChapterNumber = NULL;
    }
    ;

    m_has_City = false;

    if (m_City)
    {
        delete m_City;
        m_City = NULL;
    }
    ;

    m_has_Comments = false;

    if (m_Comments)
    {
        delete m_Comments;
        m_Comments = NULL;
    }
    ;

    m_has_ConferenceName = false;

    if (m_ConferenceName)
    {
        delete m_ConferenceName;
        m_ConferenceName = NULL;
    }
    ;

    m_has_CountryRegion = false;

    if (m_CountryRegion)
    {
        delete m_CountryRegion;
        m_CountryRegion = NULL;
    }
    ;

    m_has_Court = false;

    if (m_Court)
    {
        delete m_Court;
        m_Court = NULL;
    }
    ;

    m_has_Day = false;

    if (m_Day)
    {
        delete m_Day;
        m_Day = NULL;
    }
    ;

    m_has_DayAccessed = false;

    if (m_DayAccessed)
    {
        delete m_DayAccessed;
        m_DayAccessed = NULL;
    }
    ;

    m_has_Department = false;

    if (m_Department)
    {
        delete m_Department;
        m_Department = NULL;
    }
    ;

    m_has_Distributor = false;

    if (m_Distributor)
    {
        delete m_Distributor;
        m_Distributor = NULL;
    }
    ;

    m_has_Edition = false;

    if (m_Edition)
    {
        delete m_Edition;
        m_Edition = NULL;
    }
    ;

    m_has_Guid = false;

    if (m_Guid)
    {
        delete m_Guid;
        m_Guid = NULL;
    }
    ;

    m_has_Institution = false;

    if (m_Institution)
    {
        delete m_Institution;
        m_Institution = NULL;
    }
    ;

    m_has_InternetSiteTitle = false;

    if (m_InternetSiteTitle)
    {
        delete m_InternetSiteTitle;
        m_InternetSiteTitle = NULL;
    }
    ;

    m_has_Issue = false;

    if (m_Issue)
    {
        delete m_Issue;
        m_Issue = NULL;
    }
    ;

    m_has_JournalName = false;

    if (m_JournalName)
    {
        delete m_JournalName;
        m_JournalName = NULL;
    }
    ;

    m_has_LCID = false;

    if (m_LCID)
    {
        delete m_LCID;
        m_LCID = NULL;
    }
    ;

    m_has_Medium = false;

    if (m_Medium)
    {
        delete m_Medium;
        m_Medium = NULL;
    }
    ;

    m_has_Month = false;

    if (m_Month)
    {
        delete m_Month;
        m_Month = NULL;
    }
    ;

    m_has_MonthAccessed = false;

    if (m_MonthAccessed)
    {
        delete m_MonthAccessed;
        m_MonthAccessed = NULL;
    }
    ;

    m_has_NumberVolumes = false;

    if (m_NumberVolumes)
    {
        delete m_NumberVolumes;
        m_NumberVolumes = NULL;
    }
    ;

    m_has_Pages = false;

    if (m_Pages)
    {
        delete m_Pages;
        m_Pages = NULL;
    }
    ;

    m_has_PatentNumber = false;

    if (m_PatentNumber)
    {
        delete m_PatentNumber;
        m_PatentNumber = NULL;
    }
    ;

    m_has_PeriodicalTitle = false;

    if (m_PeriodicalTitle)
    {
        delete m_PeriodicalTitle;
        m_PeriodicalTitle = NULL;
    }
    ;

    m_has_ProductionCompany = false;

    if (m_ProductionCompany)
    {
        delete m_ProductionCompany;
        m_ProductionCompany = NULL;
    }
    ;

    m_has_PublicationTitle = false;

    if (m_PublicationTitle)
    {
        delete m_PublicationTitle;
        m_PublicationTitle = NULL;
    }
    ;

    m_has_Publisher = false;

    if (m_Publisher)
    {
        delete m_Publisher;
        m_Publisher = NULL;
    }
    ;

    m_has_RecordingNumber = false;

    if (m_RecordingNumber)
    {
        delete m_RecordingNumber;
        m_RecordingNumber = NULL;
    }
    ;

    m_has_RefOrder = false;

    if (m_RefOrder)
    {
        delete m_RefOrder;
        m_RefOrder = NULL;
    }
    ;

    m_has_Reporter = false;

    if (m_Reporter)
    {
        delete m_Reporter;
        m_Reporter = NULL;
    }
    ;

    m_has_SourceType = false;

    if (m_SourceType)
    {
        delete m_SourceType;
        m_SourceType = NULL;
    }
    ;

    m_has_ShortTitle = false;

    if (m_ShortTitle)
    {
        delete m_ShortTitle;
        m_ShortTitle = NULL;
    }
    ;

    m_has_StandardNumber = false;

    if (m_StandardNumber)
    {
        delete m_StandardNumber;
        m_StandardNumber = NULL;
    }
    ;

    m_has_StateProvince = false;

    if (m_StateProvince)
    {
        delete m_StateProvince;
        m_StateProvince = NULL;
    }
    ;

    m_has_Station = false;

    if (m_Station)
    {
        delete m_Station;
        m_Station = NULL;
    }
    ;

    m_has_Tag = false;

    if (m_Tag)
    {
        delete m_Tag;
        m_Tag = NULL;
    }
    ;

    m_has_Theater = false;

    if (m_Theater)
    {
        delete m_Theater;
        m_Theater = NULL;
    }
    ;

    m_has_ThesisType = false;

    if (m_ThesisType)
    {
        delete m_ThesisType;
        m_ThesisType = NULL;
    }
    ;

    m_has_Title = false;

    if (m_Title)
    {
        delete m_Title;
        m_Title = NULL;
    }
    ;

    m_has_Type = false;

    if (m_Type)
    {
        delete m_Type;
        m_Type = NULL;
    }
    ;

    m_has_URL = false;

    if (m_URL)
    {
        delete m_URL;
        m_URL = NULL;
    }
    ;

    m_has_Version = false;

    if (m_Version)
    {
        delete m_Version;
        m_Version = NULL;
    }
    ;

    m_has_Volume = false;

    if (m_Volume)
    {
        delete m_Volume;
        m_Volume = NULL;
    }
    ;

    m_has_Year = false;

    if (m_Year)
    {
        delete m_Year;
        m_Year = NULL;
    }
    ;

    m_has_YearAccessed = true;
    if (!m_YearAccessed)
    {
        m_YearAccessed = new ns_s::ST_String();
    }
    return m_YearAccessed;
}

const ns_s::ST_String& CT_SourceType::ChildGroup_1::get_YearAccessed() const
{
    if (m_YearAccessed)
    {
        return *m_YearAccessed;
    }
    return ns_s::ST_String::default_instance();
}

CT_SourceType* CT_SourceType::default_instance_ = NULL;

// CT_Sources
CT_Sources::CT_Sources()
    :m_has_SelectedStyle_attr(false),
     m_SelectedStyle_attr(NULL),
     m_has_StyleName_attr(false),
     m_StyleName_attr(NULL),
     m_has_URI_attr(false),
     m_URI_attr(NULL)
{
}
CT_Sources::~CT_Sources()
{
    clear();
}
CT_SourceType* CT_Sources::add_Source()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SourceType* pNewChild = pChildGroup->mutable_Source();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void CT_Sources::clear()
{
    m_has_SelectedStyle_attr = false;

    if (m_SelectedStyle_attr)
    {
        delete m_SelectedStyle_attr;
        m_SelectedStyle_attr = NULL;
    }


    m_has_StyleName_attr = false;

    if (m_StyleName_attr)
    {
        delete m_StyleName_attr;
        m_StyleName_attr = NULL;
    }


    m_has_URI_attr = false;

    if (m_URI_attr)
    {
        delete m_URI_attr;
        m_URI_attr = NULL;
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


    if (m_has_SelectedStyle_attr)
    {
        m_SelectedStyle_attr->toXmlAttr("SelectedStyle", _outStream);
    }



    if (m_has_StyleName_attr)
    {
        m_StyleName_attr->toXmlAttr("StyleName", _outStream);
    }



    if (m_has_URI_attr)
    {
        m_URI_attr->toXmlAttr("URI", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_Source())
            {
                (*iter)->get_Source().toXmlElem("b:Source", "", _outStream);
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

bool CT_Sources::has_SelectedStyle_attr() const
{
    return m_has_SelectedStyle_attr;
}

void CT_Sources::set_SelectedStyle_attr(const ns_s::ST_String& _SelectedStyle_attr)
{
    m_has_SelectedStyle_attr = true;
    m_SelectedStyle_attr = new ns_s::ST_String(_SelectedStyle_attr);
}

const ns_s::ST_String& CT_Sources::get_SelectedStyle_attr() const
{
    if (m_SelectedStyle_attr)
    {
        return *m_SelectedStyle_attr;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_Sources::has_StyleName_attr() const
{
    return m_has_StyleName_attr;
}

void CT_Sources::set_StyleName_attr(const ns_s::ST_String& _StyleName_attr)
{
    m_has_StyleName_attr = true;
    m_StyleName_attr = new ns_s::ST_String(_StyleName_attr);
}

const ns_s::ST_String& CT_Sources::get_StyleName_attr() const
{
    if (m_StyleName_attr)
    {
        return *m_StyleName_attr;
    }
    return ns_s::ST_String::default_instance();
}

bool CT_Sources::has_URI_attr() const
{
    return m_has_URI_attr;
}

void CT_Sources::set_URI_attr(const ns_s::ST_String& _URI_attr)
{
    m_has_URI_attr = true;
    m_URI_attr = new ns_s::ST_String(_URI_attr);
}

const ns_s::ST_String& CT_Sources::get_URI_attr() const
{
    if (m_URI_attr)
    {
        return *m_URI_attr;
    }
    return ns_s::ST_String::default_instance();
}


// CT_Sources::ChildGroup_1
CT_Sources::ChildGroup_1::ChildGroup_1()
    :m_has_Source(false),
     m_Source(NULL)
{
}
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
Sources_element::Sources_element()
    :m_has_SelectedStyle_attr(false),
     m_SelectedStyle_attr(NULL),
     m_has_StyleName_attr(false),
     m_StyleName_attr(NULL),
     m_has_URI_attr(false),
     m_URI_attr(NULL)
{
}
Sources_element::~Sources_element()
{
    clear();
}
CT_SourceType* Sources_element::add_Source()
{
    ChildGroup_1 *pChildGroup = new ChildGroup_1();
    CT_SourceType* pNewChild = pChildGroup->mutable_Source();
    m_childGroupList_1.push_back(pChildGroup);
    return pNewChild;
}

void Sources_element::clear()
{
    m_has_SelectedStyle_attr = false;

    if (m_SelectedStyle_attr)
    {
        delete m_SelectedStyle_attr;
        m_SelectedStyle_attr = NULL;
    }


    m_has_StyleName_attr = false;

    if (m_StyleName_attr)
    {
        delete m_StyleName_attr;
        m_StyleName_attr = NULL;
    }


    m_has_URI_attr = false;

    if (m_URI_attr)
    {
        delete m_URI_attr;
        m_URI_attr = NULL;
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
    _outStream << "<b:Sources";

    _outStream << " " << "xmlns:b=\"http://schemas.openxmlformats.org/officeDocument/2006/bibliography\"";
    _outStream << " " << "xmlns:s=\"http://schemas.openxmlformats.org/officeDocument/2006/sharedTypes\"";


    if (m_has_SelectedStyle_attr)
    {
        m_SelectedStyle_attr->toXmlAttr("SelectedStyle", _outStream);
    }



    if (m_has_StyleName_attr)
    {
        m_StyleName_attr->toXmlAttr("StyleName", _outStream);
    }



    if (m_has_URI_attr)
    {
        m_URI_attr->toXmlAttr("URI", _outStream);
    }

    _outStream << ">";

    {
        vector<ChildGroup_1*>::const_iterator iter;
        for (iter = m_childGroupList_1.begin(); iter != m_childGroupList_1.end(); ++iter)
        {
            if ((*iter)->has_Source())
            {
                (*iter)->get_Source().toXmlElem("b:Source", "", _outStream);
            }


        }
    }

    _outStream << "</b:Sources>";
}

const Sources_element& Sources_element::default_instance()
{
    if (!Sources_element::default_instance_)
    {
        Sources_element::default_instance_ = new Sources_element();
    }
    return *Sources_element::default_instance_;
}

bool Sources_element::has_SelectedStyle_attr() const
{
    return m_has_SelectedStyle_attr;
}

void Sources_element::set_SelectedStyle_attr(const ns_s::ST_String& _SelectedStyle_attr)
{
    m_has_SelectedStyle_attr = true;
    m_SelectedStyle_attr = new ns_s::ST_String(_SelectedStyle_attr);
}

const ns_s::ST_String& Sources_element::get_SelectedStyle_attr() const
{
    if (m_SelectedStyle_attr)
    {
        return *m_SelectedStyle_attr;
    }
    return ns_s::ST_String::default_instance();
}

bool Sources_element::has_StyleName_attr() const
{
    return m_has_StyleName_attr;
}

void Sources_element::set_StyleName_attr(const ns_s::ST_String& _StyleName_attr)
{
    m_has_StyleName_attr = true;
    m_StyleName_attr = new ns_s::ST_String(_StyleName_attr);
}

const ns_s::ST_String& Sources_element::get_StyleName_attr() const
{
    if (m_StyleName_attr)
    {
        return *m_StyleName_attr;
    }
    return ns_s::ST_String::default_instance();
}

bool Sources_element::has_URI_attr() const
{
    return m_has_URI_attr;
}

void Sources_element::set_URI_attr(const ns_s::ST_String& _URI_attr)
{
    m_has_URI_attr = true;
    m_URI_attr = new ns_s::ST_String(_URI_attr);
}

const ns_s::ST_String& Sources_element::get_URI_attr() const
{
    if (m_URI_attr)
    {
        return *m_URI_attr;
    }
    return ns_s::ST_String::default_instance();
}


// Sources_element::ChildGroup_1
Sources_element::ChildGroup_1::ChildGroup_1()
    :m_has_Source(false),
     m_Source(NULL)
{
}
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